/*
 * Ghidra decompilation
 *
 * Function : lua_get_ds_memory_arm9_16
 * Address  : 00189940
 * Program  : drastic64
 */


undefined8 lua_get_ds_memory_arm9_16(undefined8 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = luaL_checkinteger(param_1,1);
  uVar1 = load_memory16(lua_state + 0x15ca120,uVar2);
  lua_pushinteger(param_1,uVar1);
  return 1;
}


