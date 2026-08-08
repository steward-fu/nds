/*
 * Ghidra decompilation
 *
 * Function : lua_get_buttons
 * Address  : 080a6fa4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_get_buttons(lua_State *L)

{
  u32 button_state;
  
  button_state = (lua_state.input)->button_status & 0x20fff;
  if ((lua_state.input)->touch_status != '\0') {
    button_state = button_state | 0x80000000;
  }
  lua_pushinteger(L,button_state);
  return 1;
}


