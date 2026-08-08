/*
 * Ghidra decompilation
 *
 * Function : read_chars
 * Address  : 0020a890
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_chars(undefined8 param_1,FILE *param_2,size_t param_3)

{
  void *__ptr;
  size_t sVar1;
  undefined auStack_1028 [16];
  long local_1018;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  luaL_buffinit(param_1,auStack_1028);
  __ptr = (void *)luaL_prepbuffsize(auStack_1028,param_3);
  sVar1 = fread(__ptr,1,param_3,param_2);
  local_1018 = local_1018 + sVar1;
  luaL_pushresult(auStack_1028);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar1 != 0,local_8 - ___stack_chk_guard,0);
}


