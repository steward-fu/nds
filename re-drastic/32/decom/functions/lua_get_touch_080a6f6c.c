/*
 * Ghidra decompilation
 *
 * Function : lua_get_touch
 * Address  : 080a6f6c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_get_touch(lua_State *L)

{
  lua_pushinteger(L,(uint)*(ushort *)&(lua_state.input)->touch_y |
                    (lua_state.input)->touch_x << 0x10);
  return 1;
}


