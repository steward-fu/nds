/*
 * Ghidra decompilation
 *
 * Function : f_read
 * Address  : 0020c170
 * Program  : drastic64
 */


void f_read(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)luaL_checkudata(param_1,1,"FILE*");
  if (puVar1[1] != 0) {
    g_read(param_1,*puVar1,2);
    return;
  }
  luaL_error(param_1,"attempt to use a closed file");
  g_read(param_1,*puVar1,2);
  return;
}


