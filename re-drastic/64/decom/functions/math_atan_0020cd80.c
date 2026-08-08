/*
 * Ghidra decompilation
 *
 * Function : math_atan
 * Address  : 0020cd80
 * Program  : drastic64
 */


undefined8 math_atan(undefined8 param_1)

{
  float __y;
  float __x;
  
  __y = (float)luaL_checknumber(param_1,1);
  __x = (float)luaL_optnumber(0x3f800000,param_1,2);
  atan2f(__y,__x);
  lua_pushnumber(param_1);
  return 1;
}


