/*
 * Ghidra decompilation
 *
 * Function : save_directory_config_file
 * Address  : 001794b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 save_directory_config_file(long param_1,undefined8 param_2)

{
  undefined4 *__ptr;
  FILE *__s;
  char acStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(acStack_428,1,0x420,"%s%cconfig%c%s",param_1 + 0x8ab80,0x2f,0x2f,param_2);
  __ptr = (undefined4 *)malloc(0x4000);
  __printf_chk(1,"Saving directory config to file named %s\n",acStack_428);
  __s = fopen(acStack_428,"wb");
  *__ptr = 0x32435344;
  __ptr[1] = 2;
  *(undefined8 *)(__ptr + 2) = 0;
  memcpy(__ptr + 4,(void *)(param_1 + 0x855e4),0x400);
  __ptr[0x104] = *(undefined4 *)(param_1 + 0x859e4);
  fwrite(__ptr,0x414,1,__s);
  fclose(__s);
  free(__ptr);
  if (local_8 - ___stack_chk_guard == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


