/*
 * Ghidra decompilation
 *
 * Function : unpack
 * Address  : 00212020
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int unpack(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *local_18;
  undefined auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  checktab_isra_0_constprop_0(param_1,&local_18,auStack_10,0);
  iVar1 = luaL_optinteger(param_1,2,1);
  iVar2 = lua_type(param_1,3);
  if (iVar2 < 1) {
    iVar2 = luaL_len(param_1,1);
  }
  else {
    iVar2 = luaL_checkinteger(param_1,3);
  }
  iVar4 = 0;
  if (iVar1 <= iVar2) {
    if ((uint)(iVar2 - iVar1) < 0x7fffffff) {
      iVar4 = (iVar2 - iVar1) + 1;
      iVar3 = lua_checkstack(param_1,iVar4);
      if (iVar3 != 0) {
        do {
          iVar3 = iVar1 + 1;
          (*local_18)(param_1,1,iVar1);
          iVar1 = iVar3;
        } while (iVar3 != iVar2 + 1);
        goto LAB_002120e8;
      }
    }
    iVar4 = luaL_error(param_1,"too many results to unpack");
  }
LAB_002120e8:
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


