/*
 * Ghidra decompilation
 *
 * Function : luaL_checktype
 * Address  : 00207290
 * Program  : drastic64
 */


void luaL_checktype(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_type();
  if (iVar1 == param_3) {
    return;
  }
  uVar2 = lua_typename(param_1,param_3);
  typeerror(param_1,param_2,uVar2);
  return;
}


