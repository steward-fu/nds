/*
 * Ghidra decompilation
 *
 * Function : luaG_tointerror
 * Address  : 08112c1c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaG_tointerror(lua_State *L,TValue *p1,TValue *p2)

{
  int iVar1;
  char *pcVar2;
  lua_Integer temp;
  undefined4 local_c;
  
  local_c = __stack_chk_guard;
  if (p1->tt_ == 0x13) {
    temp = (p1->value_).i;
  }
  else {
    iVar1 = luaV_tointeger_(p1,&temp);
    if (iVar1 == 0) {
      p2 = p1;
    }
  }
  pcVar2 = varinfo(L,p2);
                    /* WARNING: Subroutine does not return */
  luaG_runerror(L,"number%s has no integer representation",pcVar2);
}


