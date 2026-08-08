/*
 * Ghidra decompilation
 *
 * Function : io_read
 * Address  : 0020c0e0
 * Program  : drastic64
 */


void io_read(undefined8 param_1)

{
  undefined8 *puVar1;
  
  lua_getfield(param_1,0xfff0b9d8,"_IO_input");
  puVar1 = (undefined8 *)lua_touserdata(param_1,0xffffffff);
  if (puVar1[1] != 0) {
    g_read(param_1,*puVar1,1);
    return;
  }
  luaL_error(param_1,"standard %s file is closed","input");
  g_read(param_1,*puVar1,1);
  return;
}


