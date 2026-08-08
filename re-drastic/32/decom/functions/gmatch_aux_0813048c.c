/*
 * Ghidra decompilation
 *
 * Function : gmatch_aux
 * Address  : 0813048c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int gmatch_aux(lua_State *L)

{
  int iVar1;
  char *pcVar2;
  char *s;
  char *p_00;
  char *p;
  lua_Integer lVar3;
  char *e;
  char *e_00;
  int iVar4;
  lua_Integer newstart;
  char *s_00;
  char *src;
  size_t ls;
  size_t lp;
  MatchState ms;
  
  iVar1 = __stack_chk_guard;
  pcVar2 = lua_tolstring(L,-0xf4629,&ls);
  p_00 = lua_tolstring(L,-0xf462a,&lp);
  ms.matchdepth = 200;
  ms.src_end = pcVar2 + ls;
  ms.p_end = p_00 + lp;
  ms.src_init = pcVar2;
  ms.L = L;
  lVar3 = lua_tointegerx(L,-0xf462b,(int *)0x0);
  s_00 = pcVar2 + lVar3;
  if (s_00 <= ms.src_end) {
    do {
      ms.level = 0;
      e_00 = match(&ms,s_00,p_00);
      if (e_00 != (char *)0x0) {
        newstart = (int)e_00 - (int)pcVar2;
        if (e_00 == s_00) {
          newstart = newstart + 1;
        }
        lua_pushinteger(L,newstart);
        lua_copy(L,-1,-0xf462b);
        lua_settop(L,-2);
        iVar4 = push_captures(&ms,s_00,e_00);
        goto LAB_081305b0;
      }
      s_00 = s_00 + 1;
    } while (s_00 <= ms.src_end);
  }
  iVar4 = 0;
LAB_081305b0:
  if (iVar1 == __stack_chk_guard) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


