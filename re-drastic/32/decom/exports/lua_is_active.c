/*
 * Ghidra decompilation
 *
 * Function : lua_is_active
 * Address  : 080a7ad8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 lua_is_active(void)

{
  lua_State *plVar1;
  
  plVar1 = lua_state.lua;
  if ((lua_state.lua != (lua_State *)0x0) &&
     (plVar1 = (lua_State *)(uint)lua_state.script_loaded, plVar1 != (lua_State *)0x0)) {
    plVar1 = (lua_State *)0x1;
  }
  return (u32)plVar1;
}


