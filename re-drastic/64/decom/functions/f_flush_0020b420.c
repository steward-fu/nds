/*
 * Ghidra decompilation
 *
 * Function : f_flush
 * Address  : 0020b420
 * Program  : drastic64
 */


void f_flush(undefined8 param_1)

{
  int iVar1;
  FILE **ppFVar2;
  
  ppFVar2 = (FILE **)luaL_checkudata(param_1,1,"FILE*");
  if (ppFVar2[1] == (FILE *)0x0) {
    luaL_error(param_1,"attempt to use a closed file");
  }
  iVar1 = fflush(*ppFVar2);
  luaL_fileresult(param_1,iVar1 == 0,0);
  return;
}


