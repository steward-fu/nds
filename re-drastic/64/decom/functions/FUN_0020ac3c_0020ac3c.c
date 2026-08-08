/*
 * Ghidra decompilation
 *
 * Function : FUN_0020ac3c
 * Address  : 0020ac3c
 * Program  : drastic64
 */


void FUN_0020ac3c(undefined8 param_1)

{
  int iVar1;
  FILE **ppFVar2;
  
  ppFVar2 = (FILE **)luaL_checkudata(param_1,1,"FILE*");
  iVar1 = pclose(*ppFVar2);
  luaL_execresult(param_1,iVar1);
  return;
}


