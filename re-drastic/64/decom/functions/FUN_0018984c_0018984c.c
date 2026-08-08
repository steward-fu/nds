/*
 * Ghidra decompilation
 *
 * Function : FUN_0018984c
 * Address  : 0018984c
 * Program  : drastic64
 */


undefined8 FUN_0018984c(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = luaL_checkinteger(param_1,1);
  uVar1 = load_memory32(lua_state + 0x25d0710,uVar1);
  lua_pushinteger(param_1,uVar1);
  return 1;
}


