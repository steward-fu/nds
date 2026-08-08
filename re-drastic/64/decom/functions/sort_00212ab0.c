/*
 * Ghidra decompilation
 *
 * Function : sort
 * Address  : 00212ab0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sort(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_18 [8];
  undefined auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  checktab_isra_0_constprop_0(param_1,auStack_18,auStack_10,0);
  uVar1 = luaL_len(param_1,1);
  luaL_checkstack(param_1,0x32,"");
  iVar2 = lua_type(param_1,2);
  if (0 < iVar2) {
    luaL_checktype(param_1,2,6);
  }
  lua_settop(param_1,2);
  auxsort(param_1,auStack_18,1,uVar1);
  if (local_8 - ___stack_chk_guard == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


