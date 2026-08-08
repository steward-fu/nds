/*
 * Ghidra decompilation
 *
 * Function : luaL_loadstring
 * Address  : 00208170
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_loadstring(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  char *local_18;
  size_t sStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sStack_10 = strlen(param_2);
  local_18 = param_2;
  uVar1 = lua_load(param_1,getS,&local_18,param_2,0);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
}


