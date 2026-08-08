/*
 * Ghidra decompilation
 *
 * Function : str_char
 * Address  : 0812c154
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_char(lua_State *L)

{
  int iVar1;
  size_t sz;
  int n;
  char *pcVar2;
  char *p;
  uint uVar3;
  lua_Integer c;
  int arg;
  luaL_Buffer b;
  
  iVar1 = __stack_chk_guard;
  sz = lua_gettop(L);
  pcVar2 = luaL_buffinitsize(L,&b,sz);
  if (0 < (int)sz) {
    pcVar2 = pcVar2 + -1;
    arg = 1;
    do {
      uVar3 = luaL_checkinteger(L,arg);
      if ((uVar3 & 0xffffff00) != 0) {
        luaL_argerror(L,arg,"value out of range");
      }
      arg = arg + 1;
      pcVar2 = pcVar2 + 1;
      *pcVar2 = (char)uVar3;
    } while (arg <= (int)sz);
  }
  luaL_pushresultsize(&b,sz);
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


