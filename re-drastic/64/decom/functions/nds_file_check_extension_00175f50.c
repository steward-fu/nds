/*
 * Ghidra decompilation
 *
 * Function : nds_file_check_extension
 * Address  : 00175f50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nds_file_check_extension(char *param_1)

{
  int iVar1;
  char *__s1;
  undefined auStack_c [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s1 = strrchr(param_1,0x2e);
  if (__s1 == (char *)0x0) {
LAB_0017606c:
    iVar1 = -1;
  }
  else {
    iVar1 = strcasecmp(__s1,".nds");
    if (iVar1 == 0) goto LAB_00175ffc;
    iVar1 = strcasecmp(__s1,".zip");
    if (iVar1 == 0) {
      iVar1 = unzip_file_to_memory_partial(param_1,&DAT_00220328,auStack_c,0,0,0);
    }
    else {
      iVar1 = strcasecmp(__s1,".7z");
      if (iVar1 == 0) {
        iVar1 = un7z_file_to_memory_partial(param_1,&DAT_00220328,auStack_c,0,0,0);
      }
      else {
        iVar1 = strcasecmp(__s1,".rar");
        if (iVar1 != 0) goto LAB_0017606c;
        iVar1 = unrar_file_to_memory_partial(param_1,&DAT_00220328,auStack_c,0,0,0);
      }
    }
    iVar1 = -(uint)(iVar1 != 0);
  }
LAB_00175ffc:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1,local_8 - ___stack_chk_guard,0);
}


