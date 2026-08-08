/*
 * Ghidra decompilation
 *
 * Function : lua_set_buttons
 * Address  : 080a7044
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_set_buttons(lua_State *L)

{
  u32 *puVar1;
  input_struct *piVar2;
  uint uVar3;
  u32 button_state;
  
  uVar3 = luaL_checkinteger(L,1);
  piVar2 = lua_state.input;
  puVar1 = &(lua_state.input)->button_status;
  (lua_state.input)->touch_status = (byte)(uVar3 >> 0x1f);
  piVar2->button_status = *puVar1 & 0xfffdf000 | uVar3 & 0x20fff;
  return 0;
}


