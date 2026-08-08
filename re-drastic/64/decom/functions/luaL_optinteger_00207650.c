/*
 * Ghidra decompilation
 *
 * Function : luaL_optinteger
 * Address  : 00207650
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 luaL_optinteger(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = param_2 & 0xffffffff;
  iVar1 = lua_type(param_1,param_2,0);
  if ((0 < iVar1) && (param_3 = lua_tointegerx(param_1,uVar3,&local_c), local_c == 0)) {
    iVar1 = lua_isnumber(param_1,uVar3);
    if (iVar1 == 0) {
      uVar2 = lua_typename(param_1,3);
      typeerror(param_1,uVar3,uVar2);
    }
    else {
      luaL_argerror(param_1,uVar3,"number has no integer representation");
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


