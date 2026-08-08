/*
 * Ghidra decompilation
 *
 * Function : lua_get_ds_memory_arm7_32
 * Address  : 00189850
 * Program  : drastic64
 */


undefined8 lua_get_ds_memory_arm7_32(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = luaL_checkinteger(param_1,1);
  uVar1 = load_memory32(lua_state + 0x25d0710,uVar1);
  lua_pushinteger(param_1,uVar1);
  return 1;
}


