/*
 * Ghidra decompilation
 *
 * Function : io_fclose
 * Address  : 08128f98
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_fclose(lua_State *L)

{
  LStream **ppLVar1;
  LStream *p;
  int iVar2;
  int res;
  
  ppLVar1 = (LStream **)luaL_checkudata(L,1,"FILE*");
  p = *ppLVar1;
  iVar2 = fclose((FILE *)p);
  iVar2 = luaL_fileresult(L,(uint)(iVar2 == 0),(char *)0x0);
  return iVar2;
}


