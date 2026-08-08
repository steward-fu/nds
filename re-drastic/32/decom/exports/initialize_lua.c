/*
 * Ghidra decompilation
 *
 * Function : initialize_lua
 * Address  : 080a780c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 initialize_lua(system_struct *system)

{
  s32 sVar1;
  int iVar2;
  lua_constant_struct *plVar3;
  lua_constant_struct *plVar4;
  code *openf;
  
  lua_state.input = &system->input;
  lua_state.memory = &system->memory;
  lua_state.script_loaded = '\0';
  lua_state.game_loaded = '\0';
  lua_state.system = system;
  lua_state.lua = luaL_newstate();
  if (lua_state.lua == (lua_State *)0x0) {
    sVar1 = -1;
  }
  else {
    openf = luaopen_base;
    iVar2 = 0x81410fc;
    do {
      luaL_requiref(lua_state.lua,*(char **)(iVar2 + -8),openf,1);
      lua_settop(lua_state.lua,-2);
      openf = *(lua_CFunction *)(iVar2 + 4);
      iVar2 = iVar2 + 8;
    } while (openf != (lua_CFunction)0x0);
    luaL_checkversion_(lua_state.lua,503.0,0x44);
    lua_createtable(lua_state.lua,0,0x11);
    luaL_setfuncs(lua_state.lua,lua_drastic_module,0);
    lua_pushstring(lua_state.lua,"C");
    lua_createtable(lua_state.lua,0xe,0);
    plVar3 = lua_constants;
    do {
      plVar4 = plVar3 + 1;
      lua_pushstring(lua_state.lua,plVar3->name);
      lua_pushinteger(lua_state.lua,plVar3->value);
      lua_settable(lua_state.lua,-3);
      plVar3 = plVar4;
    } while (plVar4 != (lua_constant_struct *)&DAT_0814123c);
    lua_settable(lua_state.lua,-3);
    lua_setglobal(lua_state.lua,"drastic");
    sVar1 = 0;
  }
  return sVar1;
}


