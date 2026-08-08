/*
 * Ghidra decompilation
 *
 * Function : io_read
 * Address  : 0812a990
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_read(lua_State *L)

{
  FILE **ppFVar1;
  LStream *p;
  int iVar2;
  
  lua_getfield(L,-0xf4628,"_IO_input");
  ppFVar1 = (FILE **)lua_touserdata(L,-1);
  if (ppFVar1[1] == (FILE *)0x0) {
    luaL_error(L,"standard %s file is closed","input");
  }
  iVar2 = g_read(L,*ppFVar1,1);
  return iVar2;
}


