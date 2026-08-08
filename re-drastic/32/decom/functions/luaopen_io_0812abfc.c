/*
 * Ghidra decompilation
 *
 * Function : luaopen_io
 * Address  : 0812abfc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaopen_io(lua_State *L)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  LStream *p_1;
  LStream *p_3;
  LStream *p_5;
  LStream *p_4;
  LStream *p;
  
  luaL_checkversion_(L,503.0,0x44);
  lua_createtable(L,0,0xb);
  luaL_setfuncs(L,iolib,0);
  luaL_newmetatable(L,"FILE*");
  lua_pushvalue(L,-1);
  lua_setfield(L,-2,"__index");
  luaL_setfuncs(L,flib,0);
  lua_settop(L,-2);
  uVar1 = stdin;
  puVar2 = (undefined4 *)lua_newuserdata(L,8);
  puVar2[1] = 0;
  luaL_setmetatable(L,"FILE*");
  *puVar2 = uVar1;
  puVar2[1] = io_noclose;
  lua_pushvalue(L,-1);
  lua_setfield(L,-0xf4628,"_IO_input");
  lua_setfield(L,-2,"stdin");
  uVar1 = stdout;
  puVar2 = (undefined4 *)lua_newuserdata(L,8);
  puVar2[1] = 0;
  luaL_setmetatable(L,"FILE*");
  *puVar2 = uVar1;
  puVar2[1] = io_noclose;
  lua_pushvalue(L,-1);
  lua_setfield(L,-0xf4628,"_IO_output");
  lua_setfield(L,-2,"stdout");
  uVar1 = stderr;
  puVar2 = (undefined4 *)lua_newuserdata(L,8);
  puVar2[1] = 0;
  luaL_setmetatable(L,"FILE*");
  *puVar2 = uVar1;
  puVar2[1] = io_noclose;
  lua_setfield(L,-2,"stderr");
  return 1;
}


