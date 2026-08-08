/*
 * Ghidra decompilation
 *
 * Function : io_pclose
 * Address  : 0812931c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_pclose(lua_State *L)

{
  LStream **ppLVar1;
  LStream *p;
  int iVar2;
  
  ppLVar1 = (LStream **)luaL_checkudata(L,1,"FILE*");
  p = *ppLVar1;
  iVar2 = pclose((FILE *)p);
  iVar2 = luaL_execresult(L,iVar2);
  return iVar2;
}


