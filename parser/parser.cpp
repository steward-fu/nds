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

using namespace std;

std::string dump_section(const Elf32_Shdr& s, const char* SST)
{
    std::ostringstream oss;

    switch(s.sh_type) {
        case SHT_NULL:
            return "SHT_NULL";

        case SHT_PROGBITS:
        case SHT_SYMTAB:
        case SHT_STRTAB:
        case SHT_RELA:
        case SHT_HASH:
        case SHT_DYNAMIC:
        case SHT_NOTE:
        case SHT_NOBITS:
        case SHT_REL:
        case SHT_SHLIB:
        case SHT_DYNSYM:
        case SHT_INIT_ARRAY:
        case SHT_FINI_ARRAY:
        case SHT_PREINIT_ARRAY:
        case SHT_GROUP:
        case SHT_SYMTAB_SHNDX:
        case SHT_NUM:
        case SHT_LOPROC:
        case SHT_HIPROC:
        case SHT_LOUSER:
        case SHT_HIUSER:
        #if defined(SHT_GNU_versym) && defined(SHT_GNU_ATTRIBUTES)
        case SHT_GNU_versym:
        case SHT_GNU_ATTRIBUTES:
        case SHT_GNU_HASH:
        case SHT_GNU_LIBLIST:
        #ifndef TERMUX
        case SHT_CHECKSUM:
        #endif
        case SHT_LOSUNW:
        //case SHT_SUNW_move:
        case SHT_SUNW_COMDAT:
        case SHT_SUNW_syminfo:
        case SHT_GNU_verdef:
        case SHT_GNU_verneed:
        #endif
        {
            const char* type_str = "";

            switch(s.sh_type) {
                case SHT_PROGBITS: type_str = "SHT_PROGBITS"; break;
                case SHT_SYMTAB: type_str = "SHT_SYMTAB"; break;
                case SHT_STRTAB: type_str = "SHT_STRTAB"; break;
                case SHT_RELA: type_str = "SHT_RELA"; break;
                case SHT_HASH: type_str = "SHT_HASH"; break;
                case SHT_DYNAMIC: type_str = "SHT_DYNAMIC"; break;
                case SHT_NOTE: type_str = "SHT_NOTE"; break;
                case SHT_NOBITS: type_str = "SHT_NOBITS"; break;
                case SHT_REL: type_str = "SHT_REL"; break;
                case SHT_SHLIB: type_str = "SHT_SHLIB"; break;
                case SHT_DYNSYM: type_str = "SHT_DYNSYM"; break;
                case SHT_INIT_ARRAY: type_str = "SHT_INIT_ARRAY"; break;
                case SHT_FINI_ARRAY: type_str = "SHT_FINI_ARRAY"; break;
                case SHT_PREINIT_ARRAY: type_str = "SHT_PREINIT_ARRAY"; break;
                case SHT_GROUP: type_str = "SHT_GROUP"; break;
                case SHT_SYMTAB_SHNDX: type_str = "SHT_SYMTAB_SHNDX"; break;
                case SHT_NUM: type_str = "SHT_NUM"; break;
                case SHT_LOPROC: type_str = "SHT_LOPROC"; break;
                case SHT_HIPROC: type_str = "SHT_HIPROC"; break;
                case SHT_LOUSER: type_str = "SHT_LOUSER"; break;
                case SHT_HIUSER: type_str = "SHT_HIUSER"; break;
                #if defined(SHT_GNU_versym) && defined(SHT_GNU_ATTRIBUTES)
                case SHT_GNU_versym: type_str = "SHT_GNU_versym"; break;
                case SHT_GNU_ATTRIBUTES: type_str = "SHT_GNU_ATTRIBUTES"; break;
                case SHT_GNU_HASH: type_str = "SHT_GNU_HASH"; break;
                case SHT_GNU_LIBLIST: type_str = "SHT_GNU_LIBLIST"; break;
                #ifndef TERMUX
                case SHT_CHECKSUM: type_str = "SHT_CHECKSUM"; break;
                #endif
                case SHT_LOSUNW: type_str = "SHT_LOSUNW"; break;
                //case SHT_SUNW_move: type_str = "SHT_SUNW_move"; break;
                case SHT_SUNW_COMDAT: type_str = "SHT_SUNW_COMDAT"; break;
                case SHT_SUNW_syminfo: type_str = "SHT_SUNW_syminfo"; break;
                case SHT_GNU_verdef: type_str = "SHT_GNU_verdef"; break;
                case SHT_GNU_verneed: type_str = "SHT_GNU_verneed"; break;
                #endif
            }

            oss << type_str
                << " Name=\"" << (SST + s.sh_name) << "\"(" << s.sh_name << ")"
                << " off=0x" << std::hex << s.sh_offset
                << " size=" << std::dec << s.sh_size
                << " attr=0x" << std::hex << s.sh_flags
                << " addr=" << std::dec << reinterpret_cast<void*>(s.sh_addr)
                << "(" << std::hex << s.sh_addralign << ")"
                << " link/info=" << std::dec << s.sh_link << "/" << s.sh_info;

            break;
        }

        default:
            oss << "0x" << std::hex << s.sh_type << " unknown type";
            break;
    }

    return oss.str();
}

std::string dump_ph_entry(const Elf32_Phdr& e)
{
    std::ostringstream oss;

    switch(e.p_type) {
        case PT_NULL:
            oss << "type: PT_NULL";
            break;
        case PT_LOAD:
        case PT_DYNAMIC:
        case PT_INTERP:
        case PT_NOTE:
        case PT_SHLIB:
        case PT_PHDR:
        case PT_TLS:
        #ifdef PT_NUM
        case PT_NUM:
        case PT_LOOS:
        case PT_GNU_EH_FRAME:
        case PT_GNU_STACK:
        case PT_GNU_RELRO:
        #endif
        {
            const char* type_str = "";
            switch(e.p_type) {
                case PT_LOAD: type_str = "PT_LOAD"; break;
                case PT_DYNAMIC: type_str = "PT_DYNAMIC"; break;
                case PT_INTERP: type_str = "PT_INTERP"; break;
                case PT_NOTE: type_str = "PT_NOTE"; break;
                case PT_SHLIB: type_str = "PT_SHLIB"; break;
                case PT_PHDR: type_str = "PT_PHDR"; break;
                case PT_TLS: type_str = "PT_TLS"; break;
                #ifdef PT_NUM
                case PT_NUM: type_str = "PT_NUM"; break;
                case PT_LOOS: type_str = "PT_LOOS"; break;
                case PT_GNU_EH_FRAME: type_str = "PT_GNU_EH_FRAME"; break;
                case PT_GNU_STACK: type_str = "PT_GNU_STACK"; break;
                case PT_GNU_RELRO: type_str = "PT_GNU_RELRO"; break;
                #endif
            }
            oss << "type: " << type_str
                << ", Off=0x" << std::hex << e.p_offset
                << " vaddr=" << reinterpret_cast<void*>(e.p_vaddr)
                << " paddr=" << reinterpret_cast<void*>(e.p_paddr)
                << " filesz=" << std::dec << e.p_filesz
                << " memsz=" << e.p_memsz
                << " flags=0x" << std::hex << e.p_flags
                << " align=" << std::dec << e.p_align;
            break;
        }
        default:
            oss << "type=0x" << std::hex << e.p_type
                << ", Off=0x" << e.p_offset
                << " vaddr=" << reinterpret_cast<void*>(e.p_vaddr)
                << " paddr=" << reinterpret_cast<void*>(e.p_paddr)
                << " filesz=" << std::dec << e.p_filesz
                << " memsz=" << e.p_memsz
                << " flags=0x" << std::hex << e.p_flags
                << " align=" << std::dec << e.p_align;
            break;
    }

    return oss.str();
}

void dump_main_header(Elf32_Ehdr *h, vector<Elf32_Shdr> sh_entries, vector<Elf32_Phdr> ph_entries, string shstrtab) {
    cout << fmt::format("ELF Dump main header") << endl;
    cout << fmt::format("  Entry point = 0x{:08x}", h->e_entry) << endl;
    cout << fmt::format("  Program Header table offset = 0x{:08x}", h->e_phoff) << endl;
    cout << fmt::format("  Section Header table offset = 0x{:08x}", h->e_shoff) << endl;
    cout << fmt::format("  Flags = 0x{:08x}", h->e_flags) << endl;
    cout << fmt::format("  ELF Header size = {}", h->e_ehsize) << endl;
    cout << fmt::format("  Program Header Entry num/size = ({})/{}", h->e_phnum, h->e_phentsize) << endl;
    cout << fmt::format("  Section Header Entry num/size = ({})/{}", h->e_shnum, h->e_shentsize) << endl;
    cout << fmt::format("  Section Header index num = {}", h->e_shstrndx) << endl;
    cout << fmt::format("ELF Dump ==========") << endl;

    cout << fmt::format("ELF Dump PEntries ({})", h->e_phnum) << endl;
    for (uint16_t i = 0; i < h->e_phnum; i++) {
        cout << fmt::format("  PHEntry {:04d} : {}", i, dump_ph_entry(ph_entries[i])) << endl;
    }
    cout << fmt::format("ELF Dump PEntries ====") << endl;

    cout << fmt::format("ELF Dump Sections ({})", h->e_shnum) << endl;
    for (uint16_t i = 0; i< h->e_shnum; i++) {
        cout << fmt::format("  Section {:04d} : {}", i, dump_section(sh_entries[i], shstrtab.c_str())) << endl;
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

        vector<Elf32_Shdr> sh_entries(header.e_shnum);
        f.seekg(header.e_shoff, ios::beg);
        f.read(reinterpret_cast<char*>(sh_entries.data()), sizeof(Elf32_Shdr) * header.e_shnum);
        if (!f) {
            cout << "failed to read all Section Header" << endl;
            break;
        }

        vector<Elf32_Phdr> ph_entries(header.e_phnum);
        f.seekg(header.e_phoff, std::ios::beg);
        f.read(reinterpret_cast<char*>(ph_entries.data()), sizeof(Elf32_Phdr) * header.e_phnum);
        if (!f) {
            cout << "failed to read all Program Header" << endl;
            break;
        }

        if (header.e_shentsize && header.e_shnum) {
            Elf32_Shdr &s = sh_entries[header.e_shstrndx];
            vector<char> shstrtab(s.sh_size);

            f.seekg(s.sh_offset, std::ios::beg);
            f.read(shstrtab.data(), s.sh_size);
            if (!f) {
                cout << "failed to read Section Table String" << endl;
            }

            dump_main_header(&header, sh_entries, ph_entries, string(shstrtab.begin(), shstrtab.end()));
        }
    } while(0);

    return 0;
}
