/*
 * Ghidra decompilation
 *
 * Function : luaL_checkinteger
 * Address  : 00207590
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 luaL_checkinteger(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int local_c;
  long local_8;
  
  uVar4 = param_2 & 0xffffffff;
  local_8 = ___stack_chk_guard;
  uVar1 = lua_tointegerx(param_1,param_2,&local_c,0);
  if (local_c == 0) {
    iVar2 = lua_isnumber(param_1,uVar4);
    if (iVar2 == 0) {
      uVar3 = lua_typename(param_1,3);
      typeerror(param_1,uVar4,uVar3);
    }
    else {
      luaL_argerror(param_1,uVar4,"number has no integer representation");
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


