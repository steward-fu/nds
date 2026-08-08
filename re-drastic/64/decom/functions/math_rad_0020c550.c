/*
 * Ghidra decompilation
 *
 * Function : math_rad
 * Address  : 0020c550
 * Program  : drastic64
 */


undefined8 math_rad(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)luaL_checknumber(param_1,1);
  lua_pushnumber(fVar1 * 0.01745329,param_1);
  return 1;
}


