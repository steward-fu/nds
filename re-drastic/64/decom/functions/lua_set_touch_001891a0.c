/*
 * Ghidra decompilation
 *
 * Function : lua_set_touch
 * Address  : 001891a0
 * Program  : drastic64
 */


undefined8 lua_set_touch(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = luaL_checkinteger(param_1,1);
  *(undefined4 *)(DAT_004ec3e0 + 0x80014) = uVar1;
  uVar1 = luaL_checkinteger(param_1,2);
  *(undefined4 *)(DAT_004ec3e0 + 0x80018) = uVar1;
  return 0;
}


