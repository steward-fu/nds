/*
 * Ghidra decompilation
 *
 * Function : f_seek
 * Address  : 08129c10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int f_seek(lua_State *L)

{
  FILE **ppFVar1;
  LStream *p;
  int iVar2;
  int op;
  lua_Integer p3;
  FILE *__stream;
  __off64_t _Var3;
  undefined4 in_stack_ffffffe4;
  
  ppFVar1 = (FILE **)luaL_checkudata(L,1,"FILE*");
  if (ppFVar1[1] == (FILE *)0x0) {
    luaL_error(L,"attempt to use a closed file");
  }
  __stream = *ppFVar1;
  iVar2 = luaL_checkoption(L,2,"cur",f_seek::modenames);
  luaL_optinteger(L,3,0);
  iVar2 = fseeko64(__stream,CONCAT44(in_stack_ffffffe4,f_seek::mode[iVar2]),f_seek::mode[iVar2]);
  if (iVar2 == 0) {
    _Var3 = ftello64(__stream);
    lua_pushinteger(L,(lua_Integer)_Var3);
    return 1;
  }
  iVar2 = luaL_fileresult(L,0,(char *)0x0);
  return iVar2;
}


