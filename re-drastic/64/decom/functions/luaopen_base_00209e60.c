/*
 * Ghidra decompilation
 *
 * Function : luaopen_base
 * Address  : 00209e60
 * Program  : drastic64
 */


undefined8 luaopen_base(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  lua_rawgeti(param_1,0xfff0b9d8,2);
  luaL_setfuncs(param_1,base_funcs,0);
  lua_pushvalue(param_1,0xffffffff);
  lua_setfield(param_1,0xfffffffe,&DAT_00224cc8);
  lua_pushlstring(param_1,"Lua 5.3",7);
  iVar2 = 0;
  lua_setfield(param_1,0xfffffffe,"_VERSION");
  do {
    uVar1 = lua_typename(param_1,iVar2);
    iVar2 = iVar2 + 1;
    lua_pushstring(param_1,uVar1);
  } while (iVar2 != 9);
  lua_pushcclosure(param_1,luaB_type,9);
  lua_setfield(param_1,0xfffffffe,&DAT_0021f5c0);
  return 1;
}


