/*
 * Ghidra decompilation
 *
 * Function : lua_get_ds_memory_arm7_16
 * Address  : 001898f0
 * Program  : drastic64
 */


undefined8 lua_get_ds_memory_arm7_16(undefined8 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = luaL_checkinteger(param_1,1);
  uVar1 = load_memory16(lua_state + 0x25d0710,uVar2);
  lua_pushinteger(param_1,uVar1);
  return 1;
}


