/*
 * Ghidra decompilation
 *
 * Function : luaL_fileresult
 * Address  : 00206d50
 * Program  : drastic64
 */


undefined8 luaL_fileresult(undefined8 param_1,int param_2,long param_3)

{
  int __errnum;
  int *piVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    lua_pushboolean(param_1,1);
    return 1;
  }
  piVar1 = __errno_location();
  __errnum = *piVar1;
  lua_pushnil(param_1);
  if (param_3 == 0) {
    pcVar2 = strerror(__errnum);
    lua_pushstring(param_1,pcVar2);
  }
  else {
    pcVar2 = strerror(__errnum);
    lua_pushfstring(param_1,"%s: %s",param_3,pcVar2);
  }
  lua_pushinteger(param_1,__errnum);
  return 3;
}


