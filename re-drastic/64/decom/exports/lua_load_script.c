/*
 * Ghidra decompilation
 *
 * Function : lua_load_script
 * Address  : 00189b80
 * Program  : drastic64
 */


undefined4 lua_load_script(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_004ec3f8 = 0;
  if ((DAT_004ec3f0 == 0 || param_1 == 0) ||
     (iVar1 = luaL_loadfilex(DAT_004ec3f0,param_1,0), iVar1 != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    lua_pcallk(DAT_004ec3f0,0,0xffffffff,0,0,0);
    DAT_004ec3f8 = 1;
    uVar2 = 0;
  }
  return uVar2;
}


