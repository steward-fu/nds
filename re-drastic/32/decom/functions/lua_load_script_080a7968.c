/*
 * Ghidra decompilation
 *
 * Function : lua_load_script
 * Address  : 080a7968
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 lua_load_script(char *script_path)

{
  int iVar1;
  int return_value;
  s32 sVar2;
  
  lua_state.script_loaded = '\0';
  if ((lua_state.lua == (lua_State *)0x0 || script_path == (char *)0x0) ||
     (iVar1 = luaL_loadfilex(lua_state.lua,script_path,(char *)0x0), iVar1 != 0)) {
    sVar2 = -1;
  }
  else {
    lua_pcallk(lua_state.lua,0,-1,0,0,(lua_KFunction)0x0);
    lua_state.script_loaded = '\x01';
    sVar2 = 0;
  }
  return sVar2;
}


