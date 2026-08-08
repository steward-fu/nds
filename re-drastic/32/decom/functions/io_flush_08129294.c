/*
 * Ghidra decompilation
 *
 * Function : io_flush
 * Address  : 08129294
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_flush(lua_State *L)

{
  FILE **ppFVar1;
  LStream *p;
  int iVar2;
  
  lua_getfield(L,-0xf4628,"_IO_output");
  ppFVar1 = (FILE **)lua_touserdata(L,-1);
  if (ppFVar1[1] == (FILE *)0x0) {
    luaL_error(L,"standard %s file is closed","output");
  }
  iVar2 = fflush(*ppFVar1);
  iVar2 = luaL_fileresult(L,(uint)(iVar2 == 0),(char *)0x0);
  return iVar2;
}


