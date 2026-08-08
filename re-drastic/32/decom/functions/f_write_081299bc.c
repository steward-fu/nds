/*
 * Ghidra decompilation
 *
 * Function : f_write
 * Address  : 081299bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int f_write(lua_State *L)

{
  FILE **ppFVar1;
  LStream *p;
  int iVar2;
  FILE *f;
  
  ppFVar1 = (FILE **)luaL_checkudata(L,1,"FILE*");
  if (ppFVar1[1] == (FILE *)0x0) {
    luaL_error(L,"attempt to use a closed file");
  }
  f = *ppFVar1;
  lua_pushvalue(L,1);
  iVar2 = g_write(L,f,2);
  return iVar2;
}


