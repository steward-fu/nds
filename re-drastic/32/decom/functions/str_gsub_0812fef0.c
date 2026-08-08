/*
 * Ghidra decompilation
 *
 * Function : str_gsub
 * Address  : 0812fef0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_gsub(lua_State *L)

{
  int iVar1;
  char cVar2;
  int iVar3;
  lua_State *L_00;
  ptrdiff_t len;
  char *s;
  char *src;
  char *p_00;
  char *p;
  int iVar4;
  int tr;
  lua_Integer lVar5;
  lua_Integer max_s;
  char *e;
  int iVar6;
  int n;
  char *e_00;
  char *pcVar7;
  char *news;
  ushort **ppuVar8;
  size_t sVar9;
  uint uVar10;
  ptrdiff_t l_2;
  ptrdiff_t l;
  uint uVar11;
  uint uVar12;
  lua_State *L_1;
  lua_State *L_2;
  int n_00;
  size_t srcl;
  size_t lp;
  size_t l_1;
  MatchState ms;
  luaL_Buffer b;
  
  iVar3 = __stack_chk_guard;
  s = luaL_checklstring(L,1,&srcl);
  p_00 = luaL_checklstring(L,2,&lp);
  iVar4 = lua_type(L,3);
  lVar5 = luaL_optinteger(L,4,srcl + 1);
  cVar2 = *p_00;
  if (3 < iVar4 - 3U) {
    luaL_argerror(L,3,"string/function/table expected");
  }
  luaL_buffinit(L,&b);
  if (cVar2 == '^') {
    lp = lp - 1;
    p_00 = p_00 + 1;
  }
  ms.p_end = p_00 + lp;
  ms.src_end = s + srcl;
  ms.matchdepth = 200;
  ms.src_init = s;
  ms.L = L;
  if (0 < lVar5) {
    n_00 = 0;
    do {
      uVar11 = 0;
      ms.level = 0;
      e_00 = match(&ms,s,p_00);
      len = ms.capture[0].len;
      L_00 = ms.L;
      if (e_00 == (char *)0x0) {
LAB_081300e0:
        if (ms.src_end <= s) goto LAB_08130124;
        if (b.size <= b.n) {
          luaL_prepbuffsize(&b,1);
        }
        b.b[b.n] = *s;
        e_00 = s + 1;
        b.n = b.n + 1;
      }
      else {
        n_00 = n_00 + 1;
        if (iVar4 == 5) {
          if (ms.level < 1) {
            lua_pushlstring(ms.L,s,(int)e_00 - (int)s);
          }
          else {
            if (ms.capture[0].len == -1) {
              luaL_error(ms.L,"unfinished capture");
            }
            else if (ms.capture[0].len == -2) {
              lua_pushinteger(ms.L,(lua_Integer)(ms.capture[0].init + (1 - (int)ms.src_init)));
              goto LAB_08130348;
            }
            lua_pushlstring(ms.L,ms.capture[0].init,len);
          }
LAB_08130348:
          lua_gettable(L_00,3);
LAB_08130064:
          iVar6 = lua_toboolean(L_00,-1);
          if (iVar6 == 0) {
            lua_settop(L_00,-2);
            lua_pushlstring(L_00,s,(int)e_00 - (int)s);
          }
          else {
            iVar6 = lua_isstring(L_00,-1);
            if (iVar6 == 0) {
              iVar6 = lua_type(L_00,-1);
              pcVar7 = lua_typename(L_00,iVar6);
              luaL_error(L_00,"invalid replacement value (a %s)",pcVar7);
            }
          }
          luaL_addvalue(&b);
        }
        else {
          if (iVar4 == 6) {
            lua_pushvalue(ms.L,3);
            iVar6 = push_captures(&ms,s,e_00);
            lua_callk(L_00,iVar6,1,0,(lua_KFunction)0x0);
            goto LAB_08130064;
          }
          pcVar7 = lua_tolstring(ms.L,3,&l_1);
          if (l_1 != 0) {
            do {
              while (pcVar7[uVar11] != '%') {
                if (b.size <= b.n) {
                  luaL_prepbuffsize(&b,1);
                }
                b.b[b.n] = pcVar7[uVar11];
                b.n = b.n + 1;
LAB_08130218:
                uVar11 = uVar11 + 1;
                if (l_1 <= uVar11) goto LAB_0813009c;
              }
              uVar12 = uVar11 + 1;
              ppuVar8 = __ctype_b_loc();
              uVar10 = (uint)(byte)pcVar7[uVar12];
              if (((*ppuVar8)[uVar10] & 0x800) != 0) {
                uVar11 = uVar12;
                if (uVar10 == 0x30) {
                  luaL_addlstring(&b,s,(int)e_00 - (int)s);
                }
                else {
                  iVar6 = uVar10 - 0x31;
                  if (iVar6 < ms.level) {
                    iVar1 = (uVar10 - 0x2e) * 8;
                    sVar9 = *(size_t *)((int)&ms + iVar1 + 4);
                    if (sVar9 == 0xffffffff) {
                      luaL_error(ms.L,"unfinished capture");
                    }
                    else if (sVar9 == 0xfffffffe) {
                      lua_pushinteger(ms.L,(*(int *)((int)&ms + iVar1) - (int)ms.src_init) + 1);
                      goto LAB_081302f4;
                    }
                    lua_pushlstring(ms.L,*(char **)((int)&ms + iVar6 * 8 + 0x18),sVar9);
                  }
                  else if (iVar6 == 0) {
                    lua_pushlstring(ms.L,s,(int)e_00 - (int)s);
                  }
                  else {
                    luaL_error(ms.L,"invalid capture index %%%d",uVar10 - 0x30);
                  }
LAB_081302f4:
                  luaL_tolstring(L_00,-1,(size_t *)0x0);
                  lua_rotate(L_00,-2,-1);
                  lua_settop(L_00,-2);
                  luaL_addvalue(&b);
                }
                goto LAB_08130218;
              }
              if (uVar10 != 0x25) {
                luaL_error(L_00,"invalid use of \'%c\' in replacement string",0x25);
              }
              if (b.size <= b.n) {
                luaL_prepbuffsize(&b,1);
              }
              sVar9 = b.n + 1;
              uVar11 = uVar11 + 2;
              b.b[b.n] = pcVar7[uVar12];
              b.n = sVar9;
            } while (uVar11 < l_1);
          }
        }
LAB_0813009c:
        if (e_00 <= s) goto LAB_081300e0;
      }
      s = e_00;
      if ((cVar2 == '^') || (lVar5 <= n_00)) goto LAB_08130124;
    } while( true );
  }
  n_00 = 0;
LAB_08130124:
  luaL_addlstring(&b,s,(int)ms.src_end - (int)s);
  luaL_pushresult(&b);
  lua_pushinteger(L,n_00);
  if (iVar3 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 2;
}


