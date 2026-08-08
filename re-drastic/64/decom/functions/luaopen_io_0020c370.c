/*
 * Ghidra decompilation
 *
 * Function : luaopen_io
 * Address  : 0020c370
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 luaopen_io(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  luaL_checkversion_(0x43fb8000,param_1,0x44);
  lua_createtable(param_1,0,0xb);
  luaL_setfuncs(param_1,iolib,0);
  luaL_newmetatable(param_1,"FILE*");
  lua_pushvalue(param_1,0xffffffff);
  lua_setfield(param_1,0xfffffffe,"__index");
  luaL_setfuncs(param_1,flib,0);
  lua_settop(param_1,0xfffffffe);
  uVar1 = _stdin;
  puVar2 = (undefined8 *)lua_newuserdata(param_1,0x10);
  puVar2[1] = 0;
  luaL_setmetatable(param_1,"FILE*");
  *puVar2 = uVar1;
  puVar2[1] = io_noclose;
  lua_pushvalue(param_1,0xffffffff);
  lua_setfield(param_1,0xfff0b9d8,"_IO_input");
  lua_setfield(param_1,0xfffffffe,"stdin");
  uVar1 = _stdout;
  puVar2 = (undefined8 *)lua_newuserdata(param_1,0x10);
  puVar2[1] = 0;
  luaL_setmetatable(param_1,"FILE*");
  *puVar2 = uVar1;
  puVar2[1] = io_noclose;
  lua_pushvalue(param_1,0xffffffff);
  lua_setfield(param_1,0xfff0b9d8,"_IO_output");
  lua_setfield(param_1,0xfffffffe,"stdout");
  uVar1 = _stderr;
  puVar2 = (undefined8 *)lua_newuserdata(param_1,0x10);
  puVar2[1] = 0;
  luaL_setmetatable(param_1,"FILE*");
  *puVar2 = uVar1;
  puVar2[1] = io_noclose;
  lua_setfield(param_1,0xfffffffe,"stderr");
  return 1;
}


