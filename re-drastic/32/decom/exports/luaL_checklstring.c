/*
 * Ghidra decompilation
 *
 * Function : luaL_checklstring
 * Address  : 08125998
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * luaL_checklstring(lua_State *L,int arg,size_t *len)

{
  char *pcVar1;
  char *s;
  char *tname;
  
  pcVar1 = lua_tolstring(L,arg,len);
  if (pcVar1 == (char *)0x0) {
    tname = lua_typename(L,4);
    typeerror(L,arg,tname);
  }
  return pcVar1;
}


