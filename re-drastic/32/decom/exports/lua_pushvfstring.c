/*
 * Ghidra decompilation
 *
 * Function : lua_pushvfstring
 * Address  : 0810f76c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * lua_pushvfstring(lua_State *L,char *fmt,va_list argp)

{
  char *pcVar1;
  
  if (0 < L->l_G->GCdebt) {
    luaC_step(L);
  }
  pcVar1 = luaO_pushvfstring(L,fmt,argp);
  return pcVar1;
}


