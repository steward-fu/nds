/*
 * Ghidra decompilation
 *
 * Function : lua_get_ds_memory_arm7_16
 * Address  : 080a76cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_get_ds_memory_arm7_16(lua_State *L)

{
  u16 uVar1;
  u32 address_00;
  u32 address;
  
  address_00 = luaL_checkinteger(L,1);
  uVar1 = load_memory16(&((lua_state.system)->cpu_arm7).memory_interface,address_00);
  lua_pushinteger(L,(uint)uVar1);
  return 1;
}


