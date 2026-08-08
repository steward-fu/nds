/*
 * Ghidra decompilation
 *
 * Function : lua_set_touch
 * Address  : 080a6fec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_set_touch(lua_State *L)

{
  input_struct *piVar1;
  input_struct *piVar2;
  u32 uVar3;
  
  piVar1 = lua_state.input;
  uVar3 = luaL_checkinteger(L,1);
  piVar2 = lua_state.input;
  piVar1->touch_x = uVar3;
  uVar3 = luaL_checkinteger(L,2);
  piVar2->touch_y = uVar3;
  return 0;
}


