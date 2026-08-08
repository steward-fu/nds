/*
 * Ghidra decompilation
 *
 * Function : finishpcall
 * Address  : 00209a20
 * Program  : drastic64
 */


int finishpcall(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 2) {
    iVar1 = lua_gettop();
    return iVar1 - param_3;
  }
  lua_pushboolean(param_1,0);
  lua_pushvalue(param_1,0xfffffffe);
  return 2;
}


