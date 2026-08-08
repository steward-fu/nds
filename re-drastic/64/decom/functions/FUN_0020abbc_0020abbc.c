/*
 * Ghidra decompilation
 *
 * Function : FUN_0020abbc
 * Address  : 0020abbc
 * Program  : drastic64
 */


void FUN_0020abbc(undefined8 param_1)

{
  int iVar1;
  FILE **ppFVar2;
  
  lua_getfield(param_1,0xfff0b9d8,"_IO_output");
  ppFVar2 = (FILE **)lua_touserdata(param_1,0xffffffff);
  if (ppFVar2[1] == (FILE *)0x0) {
    luaL_error(param_1,"standard %s file is closed","output");
  }
  iVar1 = fflush(*ppFVar2);
  luaL_fileresult(param_1,iVar1 == 0,0);
  return;
}


