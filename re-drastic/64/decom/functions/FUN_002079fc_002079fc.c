/*
 * Ghidra decompilation
 *
 * Function : FUN_002079fc
 * Address  : 002079fc
 * Program  : drastic64
 */


void FUN_002079fc(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[3];
  lua_pushlstring(lVar1,*param_1,param_1[2]);
  if ((long *)*param_1 != param_1 + 4) {
    lua_rotate(lVar1,0xfffffffe,0xffffffff);
    lua_settop(lVar1,0xfffffffe);
    return;
  }
  return;
}


