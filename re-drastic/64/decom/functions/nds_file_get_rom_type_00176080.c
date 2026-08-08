/*
 * Ghidra decompilation
 *
 * Function : nds_file_get_rom_type
 * Address  : 00176080
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nds_file_get_rom_type(char *param_1)

{
  char cVar1;
  int iVar2;
  char *__s1;
  FILE *__stream;
  long lVar3;
  size_t sVar4;
  uint local_8c;
  int local_88;
  int iStack_84;
  int local_7c;
  undefined4 local_68;
  int local_5c;
  uint uStack_58;
  int local_54;
  int local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s1 = strrchr(param_1,0x2e);
  if (__s1 != (char *)0x0) {
    iVar2 = strcasecmp(__s1,".nds");
    if (iVar2 == 0) {
      __stream = fopen(param_1,"rb");
      if (__stream != (FILE *)0x0) {
        fseek(__stream,0,2);
        lVar3 = ftell(__stream);
        local_8c = (uint)lVar3;
        fseek(__stream,0,0);
        if ((0x7f < local_8c) && (sVar4 = fread(&local_88,1,0x80,__stream), sVar4 == 0x80)) {
          fclose(__stream);
          goto LAB_00176140;
        }
        fclose(__stream);
      }
    }
    else {
      iVar2 = strcasecmp(__s1,".zip");
      if (iVar2 == 0) {
        iVar2 = unzip_file_to_memory_partial(param_1,&DAT_00220328,&local_8c,&local_88,0x80,0);
      }
      else {
        iVar2 = strcasecmp(__s1,".7z");
        if (iVar2 == 0) {
          iVar2 = un7z_file_to_memory_partial(param_1,&DAT_00220328,&local_8c,&local_88,0x80,0);
        }
        else {
          iVar2 = strcasecmp(__s1,".rar");
          if (iVar2 != 0) goto LAB_00176178;
          iVar2 = unrar_file_to_memory_partial(param_1,&DAT_00220328,&local_8c,&local_88,0x80,0);
        }
      }
      if (iVar2 == 0) {
LAB_00176140:
        cVar1 = '\x01';
        if (local_7c == 0x23232323) goto LAB_0017617c;
        if (((((local_5c - 1U < 0x3bfe00 && 0x7ffe < uStack_58) &&
               (0x3bfdff < local_5c - 1U || uStack_58 != 0x7fff)) &&
             ((local_54 + 0xfe000000U < 0x3bfe01 || local_54 + 0xfc808000U < 0xfe00) ||
              0x3bfe00 < local_54 + 0xfe000000U && local_54 + 0xfc808000U == 0xfe00)) &&
            ((local_50 + 0xfe000000U < 0x3bfe01 || local_50 + 0xfc808000U < 0xfe00) ||
             0x3bfe00 < local_50 + 0xfe000000U && local_50 + 0xfc808000U == 0xfe00)) &&
           (iVar2 = nds_file_read_to_memory_partial(param_1,&local_8c,&local_88,0x10,local_68),
           iVar2 == 0)) {
          cVar1 = '\x03';
          if (((local_88 != -0x18002101 || iStack_84 != -0x18002101) &&
              ((local_7c != 0x45355659 || local_88 != 0x14a191a) || iStack_84 != -0x5a3b8f47)) &&
             ((local_7c != 0x50355659 || local_88 != -0x2f2b7499) || iStack_84 != 0x39392f23)) {
            cVar1 = ((local_88 == 0x7829bc8d && local_7c == 0x4a355659) && iStack_84 == -0x669710bc)
                    + '\x02';
          }
          goto LAB_0017617c;
        }
      }
    }
  }
LAB_00176178:
  cVar1 = '\0';
LAB_0017617c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1,local_8 - ___stack_chk_guard,0);
}


