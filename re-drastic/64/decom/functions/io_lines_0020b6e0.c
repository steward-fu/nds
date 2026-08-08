/*
 * Ghidra decompilation
 *
 * Function : io_lines
 * Address  : 0020b6e0
 * Program  : drastic64
 */


undefined8 io_lines(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *__filename;
  FILE **ppFVar3;
  FILE *pFVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  iVar1 = lua_type(param_1,1);
  if (iVar1 == -1) {
    lua_pushnil(param_1);
  }
  iVar1 = lua_type(param_1,1);
  if (iVar1 == 0) {
    lua_getfield(param_1,0xfff0b9d8,"_IO_input");
    lua_copy(param_1,0xffffffff,1);
    lua_settop(param_1,0xfffffffe);
    lVar2 = luaL_checkudata(param_1,1,"FILE*");
    uVar7 = 0;
    if (*(long *)(lVar2 + 8) == 0) {
      luaL_error(param_1,"attempt to use a closed file");
    }
  }
  else {
    __filename = (char *)luaL_checklstring(param_1,1,0);
    ppFVar3 = (FILE **)lua_newuserdata(param_1,0x10);
    ppFVar3[1] = (FILE *)0x0;
    luaL_setmetatable(param_1,"FILE*");
    *ppFVar3 = (FILE *)0x0;
    ppFVar3[1] = (FILE *)io_fclose;
    pFVar4 = fopen64(__filename,"r");
    *ppFVar3 = pFVar4;
    if (pFVar4 == (FILE *)0x0) {
      piVar5 = __errno_location();
      pcVar6 = strerror(*piVar5);
      luaL_error(param_1,"cannot open file \'%s\' (%s)",__filename,pcVar6);
    }
    uVar7 = 1;
    lua_copy(param_1,0xffffffff);
    lua_settop(param_1,0xfffffffe);
  }
  iVar1 = lua_gettop(param_1);
  lua_pushinteger(param_1,iVar1 + -1);
  lua_pushboolean(param_1,uVar7);
  lua_rotate(param_1,2);
  lua_pushcclosure(param_1,io_readline,iVar1 + 2);
  return 1;
}


