/*
 * Ghidra decompilation
 *
 * Function : luaG_typeerror
 * Address  : 08112b48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaG_typeerror(lua_State *L,TValue *o,char *op)

{
  char *pcVar1;
  char *t;
  char *pcVar2;
  
  pcVar2 = luaT_typenames_[(o->tt_ & 0xfU) + 1];
  pcVar1 = varinfo(L,o);
                    /* WARNING: Subroutine does not return */
  luaG_runerror(L,"attempt to %s a %s value%s",op,pcVar2,pcVar1);
}


