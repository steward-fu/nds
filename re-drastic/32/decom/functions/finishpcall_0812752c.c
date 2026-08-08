/*
 * Ghidra decompilation
 *
 * Function : finishpcall
 * Address  : 0812752c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int finishpcall(lua_State *L,int status,lua_KContext extra)

{
  int iVar1;
  
  if (1 < (uint)status) {
    lua_pushboolean(L,0);
    lua_pushvalue(L,-2);
    return 2;
  }
  iVar1 = lua_gettop(L);
  return iVar1 - extra;
}


