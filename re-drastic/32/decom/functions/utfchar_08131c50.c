/*
 * Ghidra decompilation
 *
 * Function : utfchar
 * Address  : 08131c50
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int utfchar(lua_State *L)

{
  int iVar1;
  int iVar2;
  int n;
  uint uVar3;
  lua_Integer code;
  lua_Integer code_1;
  int arg;
  luaL_Buffer b;
  
  iVar1 = __stack_chk_guard;
  iVar2 = lua_gettop(L);
  if (iVar2 == 1) {
    uVar3 = luaL_checkinteger(L,1);
    if (0x10ffff < uVar3) {
      luaL_argerror(L,1,"value out of range");
    }
    lua_pushfstring(L,"%U",uVar3);
  }
  else {
    luaL_buffinit(L,&b);
    if (0 < iVar2) {
      arg = 1;
      do {
        uVar3 = luaL_checkinteger(L,arg);
        if (0x10ffff < uVar3) {
          luaL_argerror(L,arg,"value out of range");
        }
        arg = arg + 1;
        lua_pushfstring(L,"%U",uVar3);
        luaL_addvalue(&b);
      } while (arg <= iVar2);
    }
    luaL_pushresult(&b);
  }
  if (iVar1 == __stack_chk_guard) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


