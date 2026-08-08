/*
 * Ghidra decompilation
 *
 * Function : read_all
 * Address  : 0020a940
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_all(undefined8 param_1,FILE *param_2)

{
  void *__ptr;
  size_t sVar1;
  undefined auStack_1028 [16];
  long local_1018;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  luaL_buffinit(param_1,auStack_1028);
  do {
    __ptr = (void *)luaL_prepbuffsize(auStack_1028,0x1000);
    sVar1 = fread(__ptr,1,0x1000,param_2);
    local_1018 = local_1018 + sVar1;
  } while (sVar1 == 0x1000);
  luaL_pushresult(auStack_1028);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


