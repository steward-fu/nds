/*
 * Ghidra decompilation
 *
 * Function : lua_pushvfstring
 * Address  : 001f2640
 * Program  : drastic64
 */


void lua_pushvfstring(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    luaC_step();
  }
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  luaO_pushvfstring(param_1,param_2,&local_20);
  return;
}


