/*
 * Ghidra decompilation
 *
 * Function : load_directory_config_file
 * Address  : 00176fe0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 load_directory_config_file(long param_1,undefined8 param_2)

{
  int iVar1;
  FILE *__stream;
  undefined8 uVar2;
  int local_438;
  uint local_434;
  undefined auStack_430 [8];
  char acStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(acStack_428,1,0x420,"%s%cconfig%c%s",param_1 + 0x8ab80,0x2f,0x2f,param_2);
  __printf_chk(1,"Loading directory config file %s\n",acStack_428);
  __stream = fopen(acStack_428,"rb");
  if (__stream == (FILE *)0x0) {
    uVar2 = 0xffffffff;
    __printf_chk(1,"Directory config file %s does not exist.\n",acStack_428);
    goto LAB_001770d8;
  }
  fread(&local_438,4,1,__stream);
  fread(&local_434,4,1,__stream);
  fread(auStack_430,8,1,__stream);
  if ((local_438 == 0x32435344) && (uVar2 = 0, local_434 < 3)) {
    fread((char *)(param_1 + 0x855e4),0x400,1,__stream);
    if (1 < local_434) {
      fread((void *)(param_1 + 0x859e4),4,1,__stream);
    }
    iVar1 = chdir((char *)(param_1 + 0x855e4));
    if (iVar1 < 0) goto LAB_001770c0;
  }
  else {
LAB_001770c0:
    uVar2 = 0xffffffff;
    puts("ERROR: Directory config file could not be loaded.");
  }
  fclose(__stream);
LAB_001770d8:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return uVar2;
}


