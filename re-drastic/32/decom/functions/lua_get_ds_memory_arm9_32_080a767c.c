/*
 * Ghidra decompilation
 *
 * Function : lua_get_ds_memory_arm9_32
 * Address  : 080a767c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_get_ds_memory_arm9_32(lua_State *L)

{
  u32 uVar1;
  u32 address;
  u32 value;
  
  uVar1 = luaL_checkinteger(L,1);
  uVar1 = load_memory32(&((lua_state.system)->cpu_arm9).memory_interface,uVar1);
  lua_pushinteger(L,uVar1);
  return 1;
}


