/*
 * Ghidra decompilation
 *
 * Function : math_deg
 * Address  : 0020c590
 * Program  : drastic64
 */


undefined8 math_deg(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)luaL_checknumber(param_1,1);
  lua_pushnumber(fVar1 * 57.29578,param_1);
  return 1;
}


