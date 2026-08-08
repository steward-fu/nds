/*
 * Ghidra decompilation
 *
 * Function : math_randomseed
 * Address  : 0020c8c0
 * Program  : drastic64
 */


undefined8 math_randomseed(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)luaL_checknumber(param_1,1);
  srandom((int)fVar1);
  rand();
  return 0;
}


