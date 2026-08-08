/*
 * Ghidra decompilation
 *
 * Function : tremove
 * Address  : 00212150
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 tremove(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *local_18;
  code *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  checktab_isra_0_constprop_0(param_1,&local_18,&local_10,&__stack_chk_guard,0);
  iVar2 = luaL_len(param_1,1);
  iVar3 = luaL_optinteger(param_1,2,iVar2);
  if (iVar2 == iVar3) {
    (*local_18)(param_1,1,iVar2);
    iVar3 = iVar2;
  }
  else {
    if ((iVar3 < 1) || (iVar2 + 1 < iVar3)) {
      luaL_argerror(param_1,1,"position out of bounds");
    }
    (*local_18)(param_1,1,iVar3);
    iVar4 = iVar3;
    if (iVar3 < iVar2) {
      do {
        iVar1 = iVar4 + 1;
        (*local_18)(param_1,1,iVar1);
        (*local_10)(param_1,1,iVar4);
        iVar4 = iVar1;
        iVar3 = iVar2;
      } while (iVar1 != iVar2);
    }
  }
  lua_pushnil(param_1);
  (*local_10)(param_1,1,iVar3);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return 1;
}


