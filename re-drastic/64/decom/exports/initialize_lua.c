/*
 * Ghidra decompilation
 *
 * Function : initialize_lua
 * Address  : 00189a30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_lua(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined **ppuVar4;
  
  DAT_004ec3e0 = param_1 + 0x5550;
  DAT_004ec3e8 = param_1 + 0x35d4930;
  _DAT_004ec3f8 = 0;
  lua_state = param_1;
  DAT_004ec3f0 = luaL_newstate();
  if (DAT_004ec3f0 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    pcVar3 = luaopen_base;
    ppuVar4 = &lua_load_libs;
    do {
      luaL_requiref(DAT_004ec3f0,*ppuVar4,pcVar3,1);
      lua_settop(DAT_004ec3f0,0xfffffffe);
      pcVar3 = (code *)ppuVar4[3];
      ppuVar4 = ppuVar4 + 2;
    } while (pcVar3 != (code *)0x0);
    luaL_checkversion_(0x43fb8000,DAT_004ec3f0,0x44);
    lua_createtable(DAT_004ec3f0,0,0x11);
    luaL_setfuncs(DAT_004ec3f0,&lua_drastic_module,0);
    lua_pushstring(DAT_004ec3f0,&DAT_00224b20);
    lua_createtable(DAT_004ec3f0,0xe,0);
    ppuVar4 = &lua_constants;
    do {
      ppuVar1 = ppuVar4 + 2;
      lua_pushstring(DAT_004ec3f0,*ppuVar4);
      lua_pushinteger(DAT_004ec3f0,*(undefined4 *)(ppuVar4 + 1));
      lua_settable(DAT_004ec3f0,0xfffffffd);
      ppuVar4 = ppuVar1;
    } while (ppuVar1 != (undefined **)&UNK_0025e018);
    lua_settable(DAT_004ec3f0,0xfffffffd);
    lua_setglobal(DAT_004ec3f0,"drastic");
    uVar2 = 0;
  }
  return uVar2;
}


