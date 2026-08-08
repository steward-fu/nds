/*
 * Ghidra decompilation
 *
 * Function : str_find_aux
 * Address  : 0812faf0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable init:lua_Integer[r0:4] conflicts with parameter, skipped. */

int str_find_aux(lua_State *L,int find)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *s;
  byte *p_00;
  char *p;
  char *res;
  char *pcVar4;
  char *init_1;
  int iVar5;
  size_t sVar6;
  ptrdiff_t l;
  char *s1;
  MatchState *pMVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char *__s1;
  int nlevels;
  uint uVar11;
  size_t sVar12;
  bool bVar13;
  int local_15c;
  int local_158;
  size_t ls;
  size_t lp;
  MatchState ms;
  
  iVar2 = __stack_chk_guard;
  pcVar3 = luaL_checklstring(L,1,&ls);
  p_00 = (byte *)luaL_checklstring(L,2,&lp);
  local_158 = luaL_optinteger(L,3,1);
  if (local_158 < 0) {
    if ((uint)-local_158 <= ls) {
      local_158 = ls + local_158 + 1;
      goto LAB_0812fb60;
    }
LAB_0812fdb8:
    local_15c = 0;
    local_158 = 1;
LAB_0812fb80:
    sVar6 = lp;
    if (find == 0) {
LAB_0812fb8c:
      bVar1 = *p_00;
      if (bVar1 == 0x5e) {
        sVar6 = sVar6 - 1;
        p_00 = p_00 + 1;
        lp = sVar6;
      }
      ms.src_end = pcVar3 + ls;
      ms.p_end = (char *)(p_00 + sVar6);
      ms.matchdepth = 200;
      pcVar8 = pcVar3 + local_15c;
      ms.src_init = pcVar3;
      ms.L = L;
      do {
        ms.level = 0;
        pcVar4 = match(&ms,pcVar8,(char *)p_00);
        if (pcVar4 != (char *)0x0) {
          if (find == 0) {
            iVar5 = push_captures(&ms,pcVar8,pcVar4);
            goto LAB_0812fd80;
          }
          lua_pushinteger(L,(lua_Integer)(pcVar8 + (1 - (int)pcVar3)));
          lua_pushinteger(L,(int)pcVar4 - (int)pcVar3);
          iVar5 = ms.level;
          luaL_checkstack(ms.L,ms.level,"too many captures");
          if (iVar5 < 1) goto LAB_0812fe60;
          pMVar7 = &ms;
          iVar9 = 0;
          iVar10 = 1;
          goto LAB_0812fc98;
        }
        bVar13 = 0x5d < bVar1;
        if (bVar1 != 0x5e) {
          bVar13 = ms.src_end <= pcVar8;
        }
        pcVar8 = pcVar8 + 1;
      } while (!bVar13);
    }
    else {
      iVar5 = lua_toboolean(L,4);
      sVar6 = lp;
      if (iVar5 == 0) {
        uVar11 = 0;
        do {
          pcVar8 = strpbrk((char *)(p_00 + uVar11),"^$*+?.([%-");
          if (pcVar8 != (char *)0x0) goto LAB_0812fb8c;
          sVar12 = strlen((char *)(p_00 + uVar11));
          uVar11 = uVar11 + sVar12 + 1;
        } while (uVar11 <= sVar6);
      }
      pcVar8 = pcVar3 + local_15c;
      if (sVar6 == 0) {
        if (pcVar8 != (char *)0x0) {
LAB_0812fea8:
          lua_pushinteger(L,(lua_Integer)(pcVar8 + (1 - (int)pcVar3)));
          lua_pushinteger(L,(lua_Integer)(pcVar8 + (lp - (int)pcVar3)));
          iVar5 = 2;
          goto LAB_0812fd80;
        }
      }
      else {
        uVar11 = (ls + 1) - local_158;
        if (sVar6 <= uVar11) {
          sVar12 = uVar11 - (sVar6 - 1);
          if (sVar12 != 0) {
            bVar1 = *p_00;
            pcVar4 = pcVar8;
            do {
              pcVar8 = (char *)memchr(pcVar4,(uint)bVar1,sVar12);
              if (pcVar8 == (char *)0x0) break;
              __s1 = pcVar8 + 1;
              iVar5 = memcmp(__s1,p_00 + 1,sVar6 - 1);
              if (iVar5 == 0) goto LAB_0812fea8;
              sVar12 = sVar12 - ((int)__s1 - (int)pcVar4);
              pcVar4 = __s1;
            } while (sVar12 != 0);
          }
        }
      }
    }
  }
  else {
LAB_0812fb60:
    if (local_158 < 1) goto LAB_0812fdb8;
    if (local_158 <= (int)(ls + 1)) {
      local_15c = local_158 + -1;
      goto LAB_0812fb80;
    }
  }
  lua_pushnil(L);
  iVar5 = 1;
LAB_0812fd80:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
LAB_0812fc98:
  do {
    if (iVar9 < ms.level) {
      sVar6 = pMVar7->capture[0].len;
      if (sVar6 == 0xffffffff) {
        luaL_error(ms.L,"unfinished capture");
      }
      else if (sVar6 == 0xfffffffe) {
        lua_pushinteger(ms.L,(lua_Integer)(pMVar7->capture[0].init + (1 - (int)ms.src_init)));
        goto LAB_0812fc84;
      }
      lua_pushlstring(ms.L,pMVar7->capture[0].init,sVar6);
    }
    else if (iVar9 == 0) {
      lua_pushlstring(ms.L,(char *)0x0,0);
    }
    else {
      luaL_error(ms.L,"invalid capture index %%%d",iVar10);
    }
LAB_0812fc84:
    iVar9 = iVar9 + 1;
    pMVar7 = (MatchState *)&pMVar7->src_end;
    bVar13 = iVar10 < iVar5;
    iVar10 = iVar10 + 1;
  } while (bVar13);
LAB_0812fe60:
  iVar5 = iVar5 + 2;
  goto LAB_0812fd80;
}


