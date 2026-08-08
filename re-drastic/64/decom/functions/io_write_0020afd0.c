/*
 * Ghidra decompilation
 *
 * Function : io_write
 * Address  : 0020afd0
 * Program  : drastic64
 */


void io_write(undefined8 param_1)

{
  undefined8 *puVar1;
  
  lua_getfield(param_1,0xfff0b9d8,"_IO_output");
  puVar1 = (undefined8 *)lua_touserdata(param_1,0xffffffff);
  if (puVar1[1] != 0) {
    g_write(param_1,*puVar1,1);
    return;
  }
  luaL_error(param_1,"standard %s file is closed","output");
  g_write(param_1,*puVar1,1);
  return;
}


