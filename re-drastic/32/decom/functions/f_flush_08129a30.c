/*
 * Ghidra decompilation
 *
 * Function : f_flush
 * Address  : 08129a30
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int f_flush(lua_State *L)

{
  FILE **ppFVar1;
  LStream *p;
  int iVar2;
  
  ppFVar1 = (FILE **)luaL_checkudata(L,1,"FILE*");
  if (ppFVar1[1] == (FILE *)0x0) {
    luaL_error(L,"attempt to use a closed file");
  }
  iVar2 = fflush(*ppFVar1);
  iVar2 = luaL_fileresult(L,(uint)(iVar2 == 0),(char *)0x0);
  return iVar2;
}


