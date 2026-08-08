/*
 * Ghidra decompilation
 *
 * Function : FUN_0021460c
 * Address  : 0021460c
 * Program  : drastic64
 */


undefined8 FUN_0021460c(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  
  pcVar2 = searcher_preload;
  lua_createtable(param_1,0,0);
  lua_createtable(param_1,0,1);
  lua_pushcclosure(param_1,gctm,0);
  lua_setfield(param_1,0xfffffffe,&DAT_0022a1d0);
  lua_setmetatable(param_1,0xfffffffe);
  lua_rawsetp(param_1,0xfff0b9d8,&CLIBS);
  luaL_checkversion_(0x43fb8000,param_1,0x44);
  lua_createtable(param_1,0,7);
  luaL_setfuncs(param_1,&pk_funcs,0);
  uVar3 = 1;
  lua_createtable(param_1,4,0);
  do {
    lua_pushvalue(param_1,0xfffffffe);
    lua_pushcclosure(param_1,pcVar2,1);
    uVar1 = uVar3 & 0xffffffff;
    uVar3 = uVar3 + 1;
    lua_rawseti(param_1,0xfffffffe,uVar1);
    pcVar2 = *(code **)(&UNK_0025f008 + uVar3 * 8);
  } while (pcVar2 != (code *)0x0);
  lua_setfield(param_1,0xfffffffe,"searchers");
  setpath(param_1,&DAT_0022ba78,"LUA_PATH_5_3","LUA_PATH",
          "/usr/local/share/lua/5.3/?.lua;/usr/local/share/lua/5.3/?/init.lua;/usr/local/lib/lua/5.3/?.lua;/usr/local/lib/lua/5.3/?/init.lua;./?.lua;./?/init.lua"
         );
  setpath(param_1,"cpath","LUA_CPATH_5_3","LUA_CPATH",
          "/usr/local/lib/lua/5.3/?.so;/usr/local/lib/lua/5.3/loadall.so;./?.so");
  lua_pushlstring(param_1,"/\n;\n?\n!\n-\n",10);
  lua_setfield(param_1,0xfffffffe,"config");
  luaL_getsubtable(param_1,0xfff0b9d8,"_LOADED");
  lua_setfield(param_1,0xfffffffe,"loaded");
  luaL_getsubtable(param_1,0xfff0b9d8,"_PRELOAD");
  lua_setfield(param_1,0xfffffffe,"preload");
  lua_rawgeti(param_1,0xfff0b9d8,2);
  lua_pushvalue(param_1,0xfffffffe);
  luaL_setfuncs(param_1,ll_funcs,1);
  lua_settop(param_1,0xfffffffe);
  return 1;
}


