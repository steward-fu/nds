/*
 * Ghidra decompilation
 *
 * Function : io_fclose
 * Address  : 0020a840
 * Program  : drastic64
 */


void io_fclose(undefined8 param_1)

{
  int iVar1;
  FILE **ppFVar2;
  
  ppFVar2 = (FILE **)luaL_checkudata(param_1,1,"FILE*");
  iVar1 = fclose(*ppFVar2);
  luaL_fileresult(param_1,iVar1 == 0,0);
  return;
}


