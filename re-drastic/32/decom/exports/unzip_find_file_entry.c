/*
 * Ghidra decompilation
 *
 * Function : unzip_find_file_entry
 * Address  : 080c85d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 unzip_find_file_entry
              (s32 zip_file,char *match_extension,zip_entry_struct *zip_entry,u32 max_file_count)

{
  int *__len;
  size_t zip_size;
  int *__addr;
  u8 *zip_ptr;
  size_t __n;
  size_t extension_length;
  int *piVar1;
  char *file_name;
  char *file_extension;
  int iVar2;
  s32 next_header_offset;
  int *piVar3;
  u8 *data_end_ptr;
  s32 sVar4;
  int *piVar5;
  eocd_header_struct *eocd_header;
  int *piVar6;
  local_file_header_struct *file_header;
  uint uVar7;
  int *piVar8;
  central_directory_file_header_struct *cd_header;
  uint uVar9;
  bool bVar10;
  __off64_t _Var11;
  uint in_stack_ffffffb4;
  
  if (zip_file < 1) {
    return -1;
  }
  _Var11 = lseek64(zip_file,CONCAT44(in_stack_ffffffb4,2),2);
  __len = (int *)_Var11;
  lseek64(zip_file,(ulonglong)in_stack_ffffffb4 << 0x20,(int)((ulonglong)_Var11 >> 0x20));
  __addr = (int *)mmap64((void *)0x0,(size_t)__len,1,1,zip_file,0);
  if (__addr == (int *)0xffffffff) {
    puts("unzip error, could not map zip file.");
    return -1;
  }
  __n = strlen(match_extension);
  if (*__addr == 0x4034b50) {
    piVar3 = (int *)((int)__addr + (int)__len);
    piVar5 = (int *)((int)piVar3 + -0x16);
    if (*(int *)((int)piVar3 + -0x16) == 0x6054b50) {
LAB_080c86e4:
      if ((((int *)piVar5[4] < __len) &&
          (piVar8 = (int *)((int)__addr + (int)(int *)piVar5[4]), piVar8 < piVar3)) &&
         (*piVar8 != 0x6054b50)) {
        if ((*piVar8 == 0x2014b50) && (piVar1 = *(int **)((int)piVar8 + 0x2a), piVar1 < __len)) {
          if (max_file_count == 0) {
            do {
              uVar9 = (uint)*(ushort *)(piVar8 + 7);
              if ((uint)((int)piVar5 - ((int)piVar8 + 0x2e)) < uVar9) goto LAB_080c88ac;
              iVar2 = memcmp((void *)((int)piVar8 + 0x2e + (uVar9 - __n)),match_extension,__n);
              piVar6 = piVar5;
              if (iVar2 == 0) goto LAB_080c8914;
              piVar1 = (int *)(*(ushort *)((int)piVar8 + 0x1e) + uVar9 + 0x2e +
                              (uint)*(ushort *)(piVar8 + 8));
              piVar8 = (int *)((int)piVar8 + (int)piVar1);
              if (((__len < piVar1) || (piVar3 <= piVar8)) || (*piVar8 == 0x6054b50))
              goto LAB_080c8678;
            } while ((*piVar8 == 0x2014b50) &&
                    (piVar1 = *(int **)((int)piVar8 + 0x2a), piVar1 < __len));
          }
          else {
            uVar9 = 0;
            do {
              uVar9 = uVar9 + 1;
              if (max_file_count < uVar9) {
                sVar4 = -1;
                __printf_chk(1,"unzip error, max search depth reached :%d\n",max_file_count);
                goto LAB_080c867c;
              }
              uVar7 = (uint)*(ushort *)(piVar8 + 7);
              if ((uint)((int)piVar5 - ((int)piVar8 + 0x2e)) < uVar7) goto LAB_080c88ac;
              iVar2 = memcmp((void *)((int)piVar8 + 0x2e + (uVar7 - __n)),match_extension,__n);
              piVar6 = piVar1;
              if (iVar2 == 0) goto LAB_080c8914;
              piVar1 = (int *)(*(ushort *)((int)piVar8 + 0x1e) + uVar7 + 0x2e +
                              (uint)*(ushort *)(piVar8 + 8));
              piVar8 = (int *)((int)piVar8 + (int)piVar1);
              if (((__len < piVar1) || (piVar3 <= piVar8)) || (*piVar8 == 0x6054b50)) {
                sVar4 = -1;
                goto LAB_080c867c;
              }
            } while ((*piVar8 == 0x2014b50) &&
                    (piVar1 = *(int **)((int)piVar8 + 0x2a), piVar1 < __len));
          }
        }
        __printf_chk(1,"unzip error, could not find %s file.\n",match_extension);
        sVar4 = -1;
        goto LAB_080c867c;
      }
    }
    else if (__addr < piVar5) {
      do {
        piVar5 = (int *)((int)piVar5 + -1);
        if (*piVar5 == 0x6054b50) goto LAB_080c86e4;
      } while (__addr != piVar5);
    }
  }
LAB_080c8678:
  sVar4 = -1;
LAB_080c867c:
  munmap(__addr,(size_t)__len);
  return sVar4;
LAB_080c88ac:
  sVar4 = -1;
  puts("unzip error, file name too long.");
  goto LAB_080c867c;
LAB_080c8914:
  piVar3 = (int *)((int)__addr + (int)piVar1);
  if (*piVar3 == 0x4034b50) {
    zip_entry->compressed_size = piVar8[5];
    zip_entry->uncompressed_size = piVar8[6];
    zip_entry->compression_method = *(u16 *)((int)piVar8 + 10);
    piVar1 = (int *)((uint)*(ushort *)((int)piVar3 + 0x1a) + (uint)*(ushort *)(piVar3 + 7) + 0x1e +
                    (int)piVar1);
    bVar10 = piVar1 == (int *)0x0;
    if ((bVar10 || piVar1 <= __len) && (!bVar10 && __len != piVar1)) {
      piVar6 = (int *)0x1;
    }
    if (!bVar10 && piVar1 > __len || (bVar10 || __len == piVar1)) {
      piVar6 = (int *)0x0;
    }
    zip_entry->file_offset = (u32)piVar1;
    sVar4 = (int)piVar6 + -1;
  }
  else {
    sVar4 = -1;
    puts("unzip error, wrong file header offset.");
  }
  goto LAB_080c867c;
}


