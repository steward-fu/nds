/*
 * Ghidra decompilation
 *
 * Function : io_popen
 * Address  : 0020af10
 * Program  : drastic64
 */


undefined8 io_popen(undefined8 param_1)

{
  char *__command;
  char *__modes;
  FILE **ppFVar1;
  FILE *pFVar2;
  undefined8 uVar3;
  
  __command = (char *)luaL_checklstring(param_1,1,0);
  __modes = (char *)luaL_optlstring(param_1,2,"r",0);
  ppFVar1 = (FILE **)lua_newuserdata(param_1,0x10);
  ppFVar1[1] = (FILE *)0x0;
  luaL_setmetatable(param_1,"FILE*");
  fflush((FILE *)0x0);
  pFVar2 = popen(__command,__modes);
  *ppFVar1 = pFVar2;
  ppFVar1[1] = (FILE *)io_pclose;
  if (pFVar2 != (FILE *)0x0) {
    return 1;
  }
  uVar3 = luaL_fileresult(param_1,0,__command);
  return uVar3;
}


