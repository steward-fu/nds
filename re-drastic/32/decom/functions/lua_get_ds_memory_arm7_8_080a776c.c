/*
 * Ghidra decompilation
 *
 * Function : lua_get_ds_memory_arm7_8
 * Address  : 080a776c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_get_ds_memory_arm7_8(lua_State *L)

{
  byte bVar1;
  u32 address_00;
  u32 address;
  
  address_00 = luaL_checkinteger(L,1);
  bVar1 = load_memory8(&((lua_state.system)->cpu_arm7).memory_interface,address_00);
  lua_pushinteger(L,(uint)bVar1);
  return 1;
}


