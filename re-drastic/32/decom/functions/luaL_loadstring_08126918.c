/*
 * Ghidra decompilation
 *
 * Function : luaL_loadstring
 * Address  : 08126918
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_loadstring(lua_State *L,char *s)

{
  int iVar1;
  int iVar2;
  LoadS ls;
  
  iVar1 = __stack_chk_guard;
  ls.size = strlen(s);
  ls.s = s;
  iVar2 = lua_load(L,getS,&ls,s,(char *)0x0);
  if (iVar1 == __stack_chk_guard) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


