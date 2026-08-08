/*
 * Ghidra decompilation
 *
 * Function : f_setvbuf
 * Address  : 0020b550
 * Program  : drastic64
 */


void f_setvbuf(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  FILE **ppFVar3;
  FILE *__stream;
  
  ppFVar3 = (FILE **)luaL_checkudata(param_1,1,"FILE*");
  if (ppFVar3[1] == (FILE *)0x0) {
    luaL_error(param_1,"attempt to use a closed file");
  }
  __stream = *ppFVar3;
  iVar1 = luaL_checkoption(param_1,2,0,&modenames_5360);
  iVar2 = luaL_optinteger(param_1,3,0x1000);
  iVar1 = setvbuf(__stream,(char *)0x0,*(int *)(&mode_5359 + (long)iVar1 * 4),(long)iVar2);
  luaL_fileresult(param_1,iVar1 == 0,0);
  return;
}


