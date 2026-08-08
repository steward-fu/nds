/*
 * Ghidra decompilation
 *
 * Function : io_popen
 * Address  : 081294d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_popen(lua_State *L)

{
  char *__command;
  char *filename;
  char *__modes;
  char *mode;
  FILE **ppFVar1;
  LStream *p_1;
  FILE *pFVar2;
  int iVar3;
  LStream *p;
  
  __command = luaL_checklstring(L,1,(size_t *)0x0);
  __modes = luaL_optlstring(L,2,"r",(size_t *)0x0);
  ppFVar1 = (FILE **)lua_newuserdata(L,8);
  ppFVar1[1] = (FILE *)0x0;
  luaL_setmetatable(L,"FILE*");
  fflush((FILE *)0x0);
  pFVar2 = popen(__command,__modes);
  *ppFVar1 = pFVar2;
  ppFVar1[1] = (FILE *)io_pclose;
  if (pFVar2 != (FILE *)0x0) {
    return 1;
  }
  iVar3 = luaL_fileresult(L,0,__command);
  return iVar3;
}


