/*
 * Ghidra decompilation
 *
 * Function : typeerror
 * Address  : 00206c50
 * Program  : drastic64
 */


void typeerror(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = lua_getmetatable();
  if (iVar1 != 0) {
    lua_pushstring(param_1,"__name");
    iVar1 = lua_rawget(param_1,0xfffffffe);
    if (iVar1 == 0) {
      lua_settop(param_1,0xfffffffd);
    }
    else {
      lua_rotate(param_1,0xfffffffe,0xffffffff);
      lua_settop(param_1,0xfffffffe);
      if (iVar1 == 4) {
        pcVar4 = (char *)lua_tolstring(param_1,0xffffffff,0);
        goto LAB_00206c90;
      }
    }
  }
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 == 2) {
    pcVar4 = "light userdata";
  }
  else {
    uVar2 = lua_type(param_1,param_2);
    pcVar4 = (char *)lua_typename(param_1,uVar2);
  }
LAB_00206c90:
  uVar3 = lua_pushfstring(param_1,"%s expected, got %s",param_3,pcVar4);
  luaL_argerror(param_1,param_2,uVar3);
  return;
}


