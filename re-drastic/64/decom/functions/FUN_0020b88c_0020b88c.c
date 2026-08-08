/*
 * Ghidra decompilation
 *
 * Function : FUN_0020b88c
 * Address  : 0020b88c
 * Program  : drastic64
 */


undefined8 FUN_0020b88c(undefined8 param_1)

{
  int iVar1;
  char *__filename;
  FILE **ppFVar2;
  FILE *pFVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  
  iVar1 = lua_type(param_1,1);
  if (0 < iVar1) {
    __filename = (char *)lua_tolstring(param_1,1,0);
    if (__filename == (char *)0x0) {
      lVar4 = luaL_checkudata(param_1,1,"FILE*");
      if (*(long *)(lVar4 + 8) == 0) {
        luaL_error(param_1,"attempt to use a closed file");
      }
      lua_pushvalue(param_1,1);
    }
    else {
      ppFVar2 = (FILE **)lua_newuserdata(param_1,0x10);
      ppFVar2[1] = (FILE *)0x0;
      luaL_setmetatable(param_1,"FILE*");
      *ppFVar2 = (FILE *)0x0;
      ppFVar2[1] = (FILE *)io_fclose;
      pFVar3 = fopen64(__filename,"w");
      *ppFVar2 = pFVar3;
      if (pFVar3 == (FILE *)0x0) {
        piVar5 = __errno_location();
        pcVar6 = strerror(*piVar5);
        luaL_error(param_1,"cannot open file \'%s\' (%s)",__filename,pcVar6);
      }
    }
    lua_setfield(param_1,0xfff0b9d8,"_IO_output");
  }
  lua_getfield(param_1,0xfff0b9d8,"_IO_output");
  return 1;
}


