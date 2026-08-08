/*
 * Ghidra decompilation
 *
 * Function : io_input
 * Address  : 08129ec8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_input(lua_State *L)

{
  int iVar1;
  char *__filename;
  char *filename;
  FILE **ppFVar2;
  LStream *p_1;
  FILE *pFVar3;
  int *piVar4;
  char *pcVar5;
  void *pvVar6;
  LStream *p_2;
  LStream *p;
  
  iVar1 = lua_type(L,1);
  if (0 < iVar1) {
    __filename = lua_tolstring(L,1,(size_t *)0x0);
    if (__filename == (char *)0x0) {
      pvVar6 = luaL_checkudata(L,1,"FILE*");
      if (*(int *)((int)pvVar6 + 4) == 0) {
        luaL_error(L,"attempt to use a closed file");
      }
      lua_pushvalue(L,1);
    }
    else {
      ppFVar2 = (FILE **)lua_newuserdata(L,8);
      ppFVar2[1] = (FILE *)0x0;
      luaL_setmetatable(L,"FILE*");
      *ppFVar2 = (FILE *)0x0;
      ppFVar2[1] = (FILE *)io_fclose;
      pFVar3 = fopen64(__filename,"r");
      *ppFVar2 = pFVar3;
      if (pFVar3 == (FILE *)0x0) {
        piVar4 = __errno_location();
        pcVar5 = strerror(*piVar4);
        luaL_error(L,"cannot open file \'%s\' (%s)",__filename,pcVar5);
      }
    }
    lua_setfield(L,-0xf4628,"_IO_input");
  }
  lua_getfield(L,-0xf4628,"_IO_input");
  return 1;
}


