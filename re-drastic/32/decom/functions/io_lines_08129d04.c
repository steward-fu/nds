/*
 * Ghidra decompilation
 *
 * Function : io_lines
 * Address  : 08129d04
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_lines(lua_State *L)

{
  int iVar1;
  char *__filename;
  char *filename;
  FILE **ppFVar2;
  LStream *p_1;
  FILE *pFVar3;
  void *pvVar4;
  LStream *p_2;
  int *piVar5;
  char *pcVar6;
  LStream *p;
  int toclose;
  
  iVar1 = lua_type(L,1);
  if (iVar1 == -1) {
    lua_pushnil(L);
  }
  iVar1 = lua_type(L,1);
  if (iVar1 == 0) {
    lua_getfield(L,-0xf4628,"_IO_input");
    lua_copy(L,-1,1);
    lua_settop(L,-2);
    pvVar4 = luaL_checkudata(L,1,"FILE*");
    if (*(int *)((int)pvVar4 + 4) == 0) {
      luaL_error(L,"attempt to use a closed file");
    }
    toclose = 0;
  }
  else {
    __filename = luaL_checklstring(L,1,(size_t *)0x0);
    ppFVar2 = (FILE **)lua_newuserdata(L,8);
    ppFVar2[1] = (FILE *)0x0;
    luaL_setmetatable(L,"FILE*");
    *ppFVar2 = (FILE *)0x0;
    ppFVar2[1] = (FILE *)io_fclose;
    pFVar3 = fopen64(__filename,"r");
    *ppFVar2 = pFVar3;
    if (pFVar3 == (FILE *)0x0) {
      piVar5 = __errno_location();
      pcVar6 = strerror(*piVar5);
      luaL_error(L,"cannot open file \'%s\' (%s)",__filename,pcVar6);
    }
    toclose = 1;
    lua_copy(L,-1,1);
    lua_settop(L,-2);
  }
  iVar1 = lua_gettop(L);
  lua_pushinteger(L,iVar1 + -1);
  lua_pushboolean(L,toclose);
  lua_rotate(L,2,2);
  lua_pushcclosure(L,io_readline,iVar1 + 2);
  return 1;
}


