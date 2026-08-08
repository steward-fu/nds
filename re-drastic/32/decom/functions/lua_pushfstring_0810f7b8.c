/*
 * Ghidra decompilation
 *
 * Function : lua_pushfstring
 * Address  : 0810f7b8
 * Program  : drastic
 */


char * lua_pushfstring(lua_State *L,char *fmt,...)

{
  int iVar1;
  char *pcVar2;
  char *ret;
  undefined4 in_r2;
  undefined4 in_r3;
  va_list argp;
  char *fmt_local;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = __stack_chk_guard;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  if (0 < L->l_G->GCdebt) {
    luaC_step(L);
  }
  pcVar2 = luaO_pushvfstring(L,fmt,(va_list)&uStack_8);
  if (iVar1 == __stack_chk_guard) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


