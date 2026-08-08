/*
 * Ghidra decompilation
 *
 * Function : luaL_optlstring
 * Address  : 081259ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * luaL_optlstring(lua_State *L,int arg,char *def,size_t *len)

{
  int iVar1;
  char *s;
  char *pcVar2;
  
  iVar1 = lua_type(L,arg);
  if (iVar1 < 1) {
    if (len != (size_t *)0x0) {
      pcVar2 = def;
      if (def != (char *)0x0) {
        pcVar2 = (char *)strlen(def);
      }
      *len = (size_t)pcVar2;
    }
  }
  else {
    def = lua_tolstring(L,arg,len);
    if (def == (char *)0x0) {
      pcVar2 = lua_typename(L,4);
      typeerror(L,arg,pcVar2);
    }
  }
  return def;
}


