/*
 * Ghidra decompilation
 *
 * Function : f_read
 * Address  : 0812aa0c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int f_read(lua_State *L)

{
  FILE **ppFVar1;
  LStream *p;
  int iVar2;
  
  ppFVar1 = (FILE **)luaL_checkudata(L,1,"FILE*");
  if (ppFVar1[1] == (FILE *)0x0) {
    luaL_error(L,"attempt to use a closed file");
  }
  iVar2 = g_read(L,*ppFVar1,2);
  return iVar2;
}


