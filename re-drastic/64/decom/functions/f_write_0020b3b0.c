/*
 * Ghidra decompilation
 *
 * Function : f_write
 * Address  : 0020b3b0
 * Program  : drastic64
 */


void f_write(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)luaL_checkudata(param_1,1,"FILE*");
  if (puVar1[1] == 0) {
    luaL_error(param_1,"attempt to use a closed file");
  }
  uVar2 = *puVar1;
  lua_pushvalue(param_1,1);
  g_write(param_1,uVar2,2);
  return;
}


