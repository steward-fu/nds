/*
 * Ghidra decompilation
 *
 * Function : io_close
 * Address  : 08129aa0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_close(lua_State *L)

{
  int iVar1;
  void *pvVar2;
  LStream *p;
  LStream *p_1;
  code *pcVar3;
  lua_CFunction cf;
  
  iVar1 = lua_type(L,1);
  if (iVar1 == -1) {
    lua_getfield(L,-0xf4628,"_IO_output");
  }
  pvVar2 = luaL_checkudata(L,1,"FILE*");
  if (*(int *)((int)pvVar2 + 4) == 0) {
    luaL_error(L,"attempt to use a closed file");
  }
  pvVar2 = luaL_checkudata(L,1,"FILE*");
  pcVar3 = *(code **)((int)pvVar2 + 4);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  iVar1 = (*pcVar3)(L);
  return iVar1;
}


