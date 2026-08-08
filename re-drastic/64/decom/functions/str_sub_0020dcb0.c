/*
 * Ghidra decompilation
 *
 * Function : str_sub
 * Address  : 0020dcb0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 str_sub(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = luaL_checklstring(param_1,1,&local_10,0);
  iVar1 = luaL_checkinteger(param_1,2);
  if (iVar1 < 0) {
    lVar4 = (long)iVar1;
    iVar2 = iVar1 + (int)local_10;
    iVar1 = 0;
    if ((ulong)-lVar4 <= local_10) {
      iVar1 = iVar2 + 1;
    }
  }
  iVar2 = luaL_optinteger(param_1,3,0xffffffff);
  iVar5 = (int)local_10;
  if (iVar2 < 0) {
    if ((ulong)-(long)iVar2 <= local_10) {
      iVar2 = iVar2 + iVar5 + 1;
      goto LAB_0020dd84;
    }
  }
  else {
LAB_0020dd84:
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    if (iVar5 < iVar2) {
      iVar2 = iVar5;
    }
    if (iVar1 <= iVar2) {
      lua_pushlstring(param_1,lVar3 + (long)iVar1 + -1,(long)((iVar2 - iVar1) + 1));
      goto LAB_0020dd50;
    }
  }
  lua_pushlstring(param_1,"",0);
LAB_0020dd50:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return 1;
}


