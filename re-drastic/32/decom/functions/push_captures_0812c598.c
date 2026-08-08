/*
 * Ghidra decompilation
 *
 * Function : push_captures
 * Address  : 0812c598
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int push_captures(MatchState *ms,char *s,char *e)

{
  bool bVar1;
  char *s_00;
  size_t len;
  ptrdiff_t l;
  int iVar2;
  int iVar3;
  MatchState *pMVar4;
  int space;
  
  space = ms->level;
  if (space == 0 && s != (char *)0x0) {
    space = 1;
    luaL_checkstack(ms->L,1,"too many captures");
  }
  else {
    luaL_checkstack(ms->L,space,"too many captures");
    if (space < 1) {
      return space;
    }
  }
  iVar2 = 0;
  iVar3 = 1;
  pMVar4 = ms;
  do {
    if (iVar2 < ms->level) {
      len = pMVar4->capture[0].len;
      if (len == 0xffffffff) {
        luaL_error(ms->L,"unfinished capture");
      }
      else if (len == 0xfffffffe) {
        lua_pushinteger(ms->L,(lua_Integer)(pMVar4->capture[0].init + (1 - (int)ms->src_init)));
        goto LAB_0812c63c;
      }
      s_00 = pMVar4->capture[0].init;
LAB_0812c678:
      lua_pushlstring(ms->L,s_00,len);
    }
    else {
      s_00 = s;
      len = (int)e - (int)s;
      if (iVar2 == 0) goto LAB_0812c678;
      luaL_error(ms->L,"invalid capture index %%%d",iVar3);
    }
LAB_0812c63c:
    iVar2 = iVar2 + 1;
    pMVar4 = (MatchState *)&pMVar4->src_end;
    bVar1 = space <= iVar3;
    iVar3 = iVar3 + 1;
    if (bVar1) {
      return space;
    }
  } while( true );
}


