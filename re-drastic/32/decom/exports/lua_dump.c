/*
 * Ghidra decompilation
 *
 * Function : lua_dump
 * Address  : 08111050
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_dump(lua_State *L,lua_Writer writer,void *data,int strip)

{
  int status;
  int iVar1;
  
  if (L->top[-1].tt_ == 0x46) {
    iVar1 = luaU_dump(L,*(Proto **)(L->top[-1].value_.f + 0xc),writer,data,strip);
    return iVar1;
  }
  return 1;
}


