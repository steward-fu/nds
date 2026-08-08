/*
 * Ghidra decompilation
 *
 * Function : io_pclose
 * Address  : 0020ac40
 * Program  : drastic64
 */


void io_pclose(undefined8 param_1)

{
  int iVar1;
  FILE **ppFVar2;
  
  ppFVar2 = (FILE **)luaL_checkudata(param_1,1,"FILE*");
  iVar1 = pclose(*ppFVar2);
  luaL_execresult(param_1,iVar1);
  return;
}


