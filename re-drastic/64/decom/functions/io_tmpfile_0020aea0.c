/*
 * Ghidra decompilation
 *
 * Function : io_tmpfile
 * Address  : 0020aea0
 * Program  : drastic64
 */


undefined8 io_tmpfile(undefined8 param_1)

{
  FILE **ppFVar1;
  FILE *pFVar2;
  undefined8 uVar3;
  
  ppFVar1 = (FILE **)lua_newuserdata(param_1,0x10);
  ppFVar1[1] = (FILE *)0x0;
  luaL_setmetatable(param_1,"FILE*");
  *ppFVar1 = (FILE *)0x0;
  ppFVar1[1] = (FILE *)io_fclose;
  pFVar2 = tmpfile64();
  *ppFVar1 = pFVar2;
  if (pFVar2 != (FILE *)0x0) {
    return 1;
  }
  uVar3 = luaL_fileresult(param_1,0,0);
  return uVar3;
}


