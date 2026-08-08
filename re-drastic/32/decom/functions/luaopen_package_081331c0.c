/*
 * Ghidra decompilation
 *
 * Function : luaopen_package
 * Address  : 081331c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaopen_package(lua_State *L)

{
  code *fn;
  int i;
  lua_CFunction *pp_Var1;
  
  pp_Var1 = createsearcherstable::searchers;
  i = 0;
  lua_createtable(L,0,0);
  lua_createtable(L,0,1);
  lua_pushcclosure(L,gctm,0);
  lua_setfield(L,-2,"__gc");
  lua_setmetatable(L,-2);
  fn = searcher_preload;
  lua_rawsetp(L,-0xf4628,&CLIBS);
  luaL_checkversion_(L,503.0,0x44);
  lua_createtable(L,0,7);
  luaL_setfuncs(L,pk_funcs,0);
  lua_createtable(L,4,0);
  do {
    lua_pushvalue(L,-2);
    i = i + 1;
    lua_pushcclosure(L,fn,1);
    lua_rawseti(L,-2,i);
    pp_Var1 = pp_Var1 + 1;
    fn = *pp_Var1;
  } while (fn != (lua_CFunction)0x0);
  lua_setfield(L,-2,"searchers");
  setpath(L,"path","LUA_PATH_5_3","LUA_PATH",
          "/usr/local/share/lua/5.3/?.lua;/usr/local/share/lua/5.3/?/init.lua;/usr/local/lib/lua/5.3/?.lua;/usr/local/lib/lua/5.3/?/init.lua;./?.lua;./?/init.lua"
         );
  setpath(L,"cpath","LUA_CPATH_5_3","LUA_CPATH",
          "/usr/local/lib/lua/5.3/?.so;/usr/local/lib/lua/5.3/loadall.so;./?.so");
  lua_pushlstring(L,"/\n;\n?\n!\n-\n",10);
  lua_setfield(L,-2,"config");
  luaL_getsubtable(L,-0xf4628,"_LOADED");
  lua_setfield(L,-2,"loaded");
  luaL_getsubtable(L,-0xf4628,"_PRELOAD");
  lua_setfield(L,-2,"preload");
  lua_rawgeti(L,-0xf4628,2);
  lua_pushvalue(L,-2);
  luaL_setfuncs(L,ll_funcs,1);
  lua_settop(L,-2);
  return 1;
}


