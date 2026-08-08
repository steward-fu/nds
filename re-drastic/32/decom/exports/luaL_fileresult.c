/*
 * Ghidra decompilation
 *
 * Function : luaL_fileresult
 * Address  : 08125308
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_fileresult(lua_State *L,int stat,char *fname)

{
  int *piVar1;
  int *en;
  char *pcVar2;
  int iVar3;
  
  piVar1 = __errno_location();
  if (stat == 0) {
    iVar3 = *piVar1;
    lua_pushnil(L);
    if (fname == (char *)0x0) {
      pcVar2 = strerror(iVar3);
      lua_pushstring(L,pcVar2);
    }
    else {
      pcVar2 = strerror(iVar3);
      lua_pushfstring(L,"%s: %s",fname,pcVar2);
    }
    lua_pushinteger(L,iVar3);
    iVar3 = 3;
  }
  else {
    lua_pushboolean(L,1);
    iVar3 = 1;
  }
  return iVar3;
}


