#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>

#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fmt/format.h>

#define DUMP_INFO 1

using namespace std;

static vector<char> strtab;
static vector<char> sh_strtab;
static vector<Elf32_Sym> symtab;
static vector<Elf32_Dyn> dynamic;
static vector<Elf32_Phdr> ph_entries;
static vector<Elf32_Shdr> sh_entries;

const char* dump_dynamic(Elf32_Dyn& s) {
    static char buff[512]= { 0 };

    switch (s.d_tag) {
    case DT_NULL:
        return "DT_NULL: End Dynamic Section";
    #define GO(A, Add) \
    case A:     \
        sprintf(buff, #A " %s=0x%X", (Add) ? "Addr" : "Val", (Add) ? s.d_un.d_ptr : s.d_un.d_val); \
        break
        GO(DT_NEEDED, 0);
        GO(DT_PLTRELSZ, 0);
        GO(DT_PLTGOT, 1);
        GO(DT_HASH, 1);
        GO(DT_STRTAB, 1);
        GO(DT_SYMTAB, 1);
        GO(DT_RELA, 1);
        GO(DT_RELASZ, 0);
        GO(DT_RELAENT, 0);
        GO(DT_STRSZ, 0);
        GO(DT_SYMENT, 0);
        GO(DT_INIT, 1);
        GO(DT_FINI, 1);
        GO(DT_SONAME, 0);
        GO(DT_RPATH, 0);
        GO(DT_SYMBOLIC, 0);
        GO(DT_REL, 1);
        GO(DT_RELSZ, 0);
        GO(DT_RELENT, 0);
        GO(DT_PLTREL, 0);
        GO(DT_DEBUG, 0);
        GO(DT_TEXTREL, 0);
        GO(DT_JMPREL, 1);
        GO(DT_BIND_NOW, 1);
        GO(DT_INIT_ARRAY, 1);
        GO(DT_FINI_ARRAY, 1);
        GO(DT_INIT_ARRAYSZ, 0);
        GO(DT_FINI_ARRAYSZ, 0);
        GO(DT_RUNPATH, 0);
        GO(DT_FLAGS, 0);
        GO(DT_ENCODING, 0);
        #if defined(DT_NUM) && defined(DT_TLSDESC_PLT)
        GO(DT_NUM, 0);
        GO(DT_VALRNGLO, 0);
        GO(DT_GNU_PRELINKED, 0);
        GO(DT_GNU_CONFLICTSZ, 0);
        GO(DT_GNU_LIBLISTSZ, 0);
        GO(DT_CHECKSUM, 0);
        GO(DT_PLTPADSZ, 0);
        GO(DT_MOVEENT, 0);
        GO(DT_MOVESZ, 0);
        GO(DT_FEATURE_1, 0);
        GO(DT_POSFLAG_1, 0);
        GO(DT_SYMINSZ, 0);
        GO(DT_SYMINENT, 0);
        GO(DT_ADDRRNGLO, 0);
        GO(DT_GNU_HASH, 0);
        GO(DT_TLSDESC_PLT, 0);
        GO(DT_TLSDESC_GOT, 0);
        GO(DT_GNU_CONFLICT, 0);
        GO(DT_GNU_LIBLIST, 0);
        GO(DT_CONFIG, 0);
        GO(DT_DEPAUDIT, 0);
        GO(DT_AUDIT, 0);
        GO(DT_PLTPAD, 0);
        GO(DT_MOVETAB, 0);
        GO(DT_SYMINFO, 0);
        GO(DT_VERSYM, 0);
        GO(DT_RELACOUNT, 0);
        GO(DT_RELCOUNT, 0);
        GO(DT_FLAGS_1, 0);
        GO(DT_VERDEF, 0);
        GO(DT_VERDEFNUM, 0);
        GO(DT_VERNEED, 0);
        GO(DT_VERNEEDNUM, 0);
        GO(DT_AUXILIARY, 0);
        GO(DT_FILTER, 0);
        #endif
    #undef GO
    default:
        sprintf(buff, "0x%X unknown type", s.d_tag);
        break;
    }
    return buff;
}

static void dump_dynamic_sections(void)
{
    int size = dynamic.size();

    cout << fmt::format("ELF Dump Dynamic({})=", size) << endl;

    for (int i = 0; i < size; i++) {
        if (dynamic[i].d_tag != DT_NULL) {
            cout << fmt::format("  Dynamic {:04d} : {}", i, dump_dynamic(dynamic[i])) << endl;
        }
    }
    cout << fmt::format("ELF Dump Dynamic=====") << endl;
}

static void dump_symtab(void)
{
    cout << fmt::format("ELF Dump SymTab({:d})=", symtab.size()) << endl;

    for (int i = 0; i < symtab.size(); i++) {
        if (symtab[i].st_size <= 0) {
            continue;
        }

        const char* name = strtab.data() + symtab[i].st_name;
        cout << fmt::format("  SymTab[{}] = \"{}\", value={}, size={}, info/other={}/{} index={}",
            i,
            name,
            symtab[i].st_value,
            symtab[i].st_size,
            symtab[i].st_info,
            symtab[i].st_other,
            symtab[i].st_shndx) << endl;
    }
    cout << fmt::format("ELF Dump SymTab=====") << endl;
}

template<typename T>
static int load_sh(ifstream& f, const Elf32_Shdr& s, T& sh, const string& name, uint32_t type)
{
    if (type && (s.sh_type != type)) {
        cout << fmt::format("Section Header \"{:s}\" (off={:d}, size={:d}) has incorect type ({:d} != {:d})", name, s.sh_offset, s.sh_size, s.sh_type, type) << endl;
        return -1;
    }

    if ((type == SHT_SYMTAB) && (s.sh_size % sizeof(Elf32_Sym))) {
        cout << fmt::format("Section Header \"{:s}\" (off={:d}, size={:d}) has size (not multiple of {:d})", name, s.sh_offset, s.sh_size, sizeof(Elf32_Sym)) << endl;
    }

    sh.resize(s.sh_size);
    f.seekg(s.sh_offset, ios::beg);
    f.read(reinterpret_cast<char *>(sh.data()), s.sh_size);
    if (!f) {
        cout << fmt::format("failed read Section Header \"{:s}\" (off={:d}, size={:d})", name, s.sh_offset, s.sh_size) << endl;
        return -1;
    }

    return 0;
}

static int find_section(const vector<Elf32_Shdr>& s, int n, const vector<char>& sh_strtab, const string& name)
{
    for (int i = 0; i < n; i++) {
        if (s[i].sh_type != SHT_NULL) {
            if (!strcmp(sh_strtab.data() + s[i].sh_name, name.c_str())) {
                return i;
            }
        }
    }
    return 0;
}

template<typename T>
static void load_named_section(
    ifstream& f,
    const vector<Elf32_Shdr>& s,
    int size,
    const vector<char>& sh_strtab,
    const string& name,
    uint32_t type,
    T& what)
{
    int n = find_section(s, size, sh_strtab, name);
    cout << fmt::format( "loading {} (idx = {})", name, n) << endl;
    if (n) {
        load_sh(f, s[n], what, name, type);
    }
}

static const char* dump_section(Elf32_Shdr& s, const char* SST) {
    static char buff[512] = { 0 };

    switch (s.sh_type) {
    case SHT_NULL:
        return "SHT_NULL";
    #define GO(A) \
    case A:     \
        sprintf(buff, #A " Name=\"%s\"(%d) off=0x%X, size=%d, attr=0x%04X, addr=%p(%02X), link/info=%d/%d", \
            SST+s.sh_name, s.sh_name, s.sh_offset, s.sh_size, s.sh_flags, (void *)s.sh_addr, s.sh_addralign, s.sh_link, s.sh_info); \
        break
    GO(SHT_PROGBITS);
    GO(SHT_SYMTAB);
    GO(SHT_STRTAB);
    GO(SHT_RELA);
    GO(SHT_HASH);
    GO(SHT_DYNAMIC);
    GO(SHT_NOTE);
    GO(SHT_NOBITS);
    GO(SHT_REL);
    GO(SHT_SHLIB);
    GO(SHT_DYNSYM);
    GO(SHT_INIT_ARRAY);
    GO(SHT_FINI_ARRAY);
    GO(SHT_PREINIT_ARRAY);
    GO(SHT_GROUP);
    GO(SHT_SYMTAB_SHNDX);
    GO(SHT_NUM);
    GO(SHT_LOPROC);
    GO(SHT_HIPROC);
    GO(SHT_LOUSER);
    GO(SHT_HIUSER);
    #if defined(SHT_GNU_versym) && defined(SHT_GNU_ATTRIBUTES)
    GO(SHT_GNU_versym);
    GO(SHT_GNU_ATTRIBUTES);
    GO(SHT_GNU_HASH);
    GO(SHT_GNU_LIBLIST);
    #ifndef TERMUX
      GO(SHT_CHECKSUM);
    #endif
    GO(SHT_LOSUNW);
    //GO(SHT_SUNW_move);
    GO(SHT_SUNW_COMDAT);
    GO(SHT_SUNW_syminfo);
    GO(SHT_GNU_verdef);
    GO(SHT_GNU_verneed);
    #endif
    #undef GO
    default:
        sprintf(buff, "0x%X unknown type", s.sh_type);
    }
    return buff;
}

static const char* dump_ph_entry(Elf32_Phdr& e)
{
    static char buff[512] = { 0 };

    memset(buff, 0, sizeof(buff));
    switch(e.p_type) {
    case PT_NULL: sprintf(buff, "type: %s", "PT_NULL"); break;
    #define GO(T) case T: sprintf(buff, "type: %s, Off=%x vaddr=%p paddr=%p filesz=%u memsz=%u flags=%x align=%u", \
        #T, e.p_offset, (void *)e.p_vaddr, (void *)e.p_paddr, e.p_filesz, e.p_memsz, e.p_flags, e.p_align); break
    GO(PT_LOAD);
    GO(PT_DYNAMIC);
    GO(PT_INTERP);
    GO(PT_NOTE);
    GO(PT_SHLIB);
    GO(PT_PHDR);
    GO(PT_TLS);
    #ifdef PT_NUM
    GO(PT_NUM);
    GO(PT_LOOS);
    GO(PT_GNU_EH_FRAME);
    GO(PT_GNU_STACK);
    GO(PT_GNU_RELRO);
    #endif
    #undef GO
    default: sprintf(buff, "type: %x, Off=%x vaddr=%p paddr=%p filesz=%u memsz=%u flags=%x align=%u",
        e.p_type, e.p_offset, (void *)e.p_vaddr, (void *)e.p_paddr, e.p_filesz, e.p_memsz, e.p_flags, e.p_align); break;
    }
    return buff;
}

static void dump_main_header(Elf32_Ehdr h) {
    cout << fmt::format("ELF Dump main header") << endl;
    cout << fmt::format("  Entry point = 0x{:08x}", h.e_entry) << endl;
    cout << fmt::format("  Program Header table offset = 0x{:08x}", h.e_phoff) << endl;
    cout << fmt::format("  Section Header table offset = 0x{:08x}", h.e_shoff) << endl;
    cout << fmt::format("  Flags = 0x{:08x}", h.e_flags) << endl;
    cout << fmt::format("  ELF Header size = {}", h.e_ehsize) << endl;
    cout << fmt::format("  Program Header Entry num/size = ({})/{}", h.e_phnum, h.e_phentsize) << endl;
    cout << fmt::format("  Section Header Entry num/size = ({})/{}", h.e_shnum, h.e_shentsize) << endl;
    cout << fmt::format("  Section Header index num = {}", h.e_shstrndx) << endl;
    cout << fmt::format("ELF Dump ==========") << endl;

    cout << fmt::format("ELF Dump PEntries ({})", h.e_phnum) << endl;
    for (uint16_t i = 0; i < h.e_phnum; i++) {
        cout << fmt::format("  PHEntry {:04d} : {}", i, dump_ph_entry(ph_entries[i])) << endl;
    }
    cout << fmt::format("ELF Dump PEntries ====") << endl;

    cout << fmt::format("ELF Dump Sections ({})", h.e_shnum) << endl;
    for (uint16_t i = 0; i< h.e_shnum; i++) {
        cout << fmt::format("  Section {:04d} : {}", i, dump_section(sh_entries[i], string(sh_strtab.begin(), sh_strtab.end()).c_str())) << endl;
    }
    cout << fmt::format("ELF Dump Sections ====") << endl;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Usage:" << endl << "    " << argv[0] << " elf_path" << endl;
        return -1;
    }

    string elf_path = argv[1];
    ifstream f(elf_path, ios::binary);
    if (!f) {
        cout << "failed to open elf file" << endl;
        return -1;
    }

    do {
        Elf32_Ehdr header;
        f.read(reinterpret_cast<char*>(&header), sizeof(Elf32_Ehdr));
        if (!f) {
            cout << "failed read ELF Header" << endl;
            break;
        }

        if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
            cout << "not an ELF file" << endl;
            break;
        }

        if (header.e_ident[EI_CLASS] != ELFCLASS32) {
            if (header.e_ident[EI_CLASS] == ELFCLASS64) {
                cout << "this is a 64bits elf" << endl;
            } else {
                cout << "not a 32bits elf" << endl;
            }
            break;
        }

        if (header.e_ident[EI_DATA] != ELFDATA2LSB) {
            cout << "not a little-endian elf" << endl;
            break;
        }

        if (header.e_ident[EI_VERSION] != EV_CURRENT) {
            cout << "incorrect elf version" << endl;
            break;
        }

        if (header.e_ident[EI_OSABI] != ELFOSABI_LINUX && header.e_ident[EI_OSABI] != ELFOSABI_NONE && header.e_ident[EI_OSABI] != ELFOSABI_SYSV) {
            cout << "not a Linux elf" << endl;
            break;
        }

        if (header.e_type != ET_EXEC && header.e_type != ET_DYN) {
            cout << "not an executable" << endl;
            break;
        }

        if (header.e_machine != EM_ARM) {
            cout << "not an i386 elf" << endl;
            break;
        }

        if (header.e_entry == 0) {
            cout << "no entry point in elf" << endl;
            break;
        }

        if (header.e_phentsize != sizeof(Elf32_Phdr)) {
            cout << "invalid Program Header Entry size" << endl;
            break;
        }

        if (header.e_shentsize != sizeof(Elf32_Shdr) && header.e_shentsize != 0) {
            cout << "invalid Section Header Entry size" << endl;
            break;
        }

        sh_entries.resize(header.e_shnum);
        f.seekg(header.e_shoff, ios::beg);
        f.read(reinterpret_cast<char*>(sh_entries.data()), sizeof(Elf32_Shdr) * header.e_shnum);
        if (!f) {
            cout << "failed to read all Section Header" << endl;
            break;
        }

        ph_entries.resize(header.e_phnum);
        f.seekg(header.e_phoff, ios::beg);
        f.read(reinterpret_cast<char*>(ph_entries.data()), sizeof(Elf32_Phdr) * header.e_phnum);
        if (!f) {
            cout << "failed to read all Program Header" << endl;
            break;
        }

        if (load_sh(f, sh_entries[header.e_shstrndx], sh_strtab, ".shstrtab", SHT_STRTAB)) {
            return -1;
        }

        load_named_section(f, sh_entries, header.e_shnum, sh_strtab, ".strtab", SHT_STRTAB, strtab);
        load_named_section(f, sh_entries, header.e_shnum, sh_strtab, ".symtab", SHT_SYMTAB, symtab);
        load_named_section(f, sh_entries, header.e_shnum, sh_strtab, ".dynamic", SHT_DYNAMIC, dynamic);

#if DUMP_INFO
        dump_main_header(header);
        dump_symtab();
        dump_dynamic_sections();
#endif
    } while(0);

    return 0;
}
