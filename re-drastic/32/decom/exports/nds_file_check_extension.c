/*
 * Ghidra decompilation
 *
 * Function : nds_file_check_extension
 * Address  : 080969b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 nds_file_check_extension(char *file_path)

{
  char *__s1;
  char *file_extension;
  int iVar1;
  u32 file_size;
  int local_14;
  
  local_14 = __stack_chk_guard;
  __s1 = strrchr(file_path,0x2e);
  if (__s1 == (char *)0x0) {
LAB_08096adc:
    iVar1 = -1;
  }
  else {
    iVar1 = strcasecmp(__s1,".nds");
    if (iVar1 == 0) goto LAB_08096a70;
    iVar1 = strcasecmp(__s1,".zip");
    if (iVar1 == 0) {
      iVar1 = unzip_file_to_memory_partial(file_path,"nds",&file_size,(u8 *)0x0,0,0);
    }
    else {
      iVar1 = strcasecmp(__s1,".7z");
      if (iVar1 == 0) {
        iVar1 = un7z_file_to_memory_partial(file_path,"nds",&file_size,(u8 *)0x0,0,0);
      }
      else {
        iVar1 = strcasecmp(__s1,".rar");
        if (iVar1 != 0) goto LAB_08096adc;
        iVar1 = unrar_file_to_memory_partial(file_path,"nds",&file_size,(u8 *)0x0,0,0);
      }
    }
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    iVar1 = -iVar1;
  }
LAB_08096a70:
  if (local_14 == __stack_chk_guard) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


