/*
 * Ghidra decompilation
 *
 * Function : io_tmpfile
 * Address  : 0812944c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_tmpfile(lua_State *L)

{
  FILE **ppFVar1;
  LStream *p_1;
  FILE *pFVar2;
  int iVar3;
  LStream *p;
  
  ppFVar1 = (FILE **)lua_newuserdata(L,8);
  ppFVar1[1] = (FILE *)0x0;
  luaL_setmetatable(L,"FILE*");
  *ppFVar1 = (FILE *)0x0;
  ppFVar1[1] = (FILE *)io_fclose;
  pFVar2 = tmpfile64();
  *ppFVar1 = pFVar2;
  if (pFVar2 != (FILE *)0x0) {
    return 1;
  }
  iVar3 = luaL_fileresult(L,0,(char *)0x0);
  return iVar3;
}


