/*
 * Ghidra decompilation
 *
 * Function : pushglobalfuncname
 * Address  : 00206300
 * Program  : drastic64
 */


undefined8 pushglobalfuncname(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = lua_gettop();
  lua_getinfo(param_1,&DAT_00224920,param_2);
  lua_getfield(param_1,0xfff0b9d8,"_LOADED");
  iVar2 = findfield(param_1,iVar1 + 1,2);
  if (iVar2 != 0) {
    pcVar3 = (char *)lua_tolstring(param_1,0xffffffff,0);
    if (((*pcVar3 == '_') && (pcVar3[1] == 'G')) && (pcVar3[2] == '.')) {
      lua_pushstring(param_1,pcVar3 + 3);
      lua_rotate(param_1,0xfffffffe,0xffffffff);
      lua_settop(param_1,0xfffffffe);
    }
    lua_copy(param_1,0xffffffff,iVar1 + 1);
    lua_settop(param_1,0xfffffffd);
    return 1;
  }
  lua_settop(param_1,iVar1);
  return 0;
}


