/*
 * Ghidra decompilation
 *
 * Function : f_setvbuf
 * Address  : 08129b54
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int f_setvbuf(lua_State *L)

{
  FILE **ppFVar1;
  LStream *p;
  int iVar2;
  int op;
  size_t __n;
  lua_Integer sz;
  int res;
  FILE *__stream;
  
  ppFVar1 = (FILE **)luaL_checkudata(L,1,"FILE*");
  if (ppFVar1[1] == (FILE *)0x0) {
    luaL_error(L,"attempt to use a closed file");
  }
  __stream = *ppFVar1;
  iVar2 = luaL_checkoption(L,2,(char *)0x0,f_setvbuf::modenames);
  __n = luaL_optinteger(L,3,0x800);
  iVar2 = setvbuf(__stream,(char *)0x0,f_setvbuf::mode[iVar2],__n);
  iVar2 = luaL_fileresult(L,(uint)(iVar2 == 0),(char *)0x0);
  return iVar2;
}


