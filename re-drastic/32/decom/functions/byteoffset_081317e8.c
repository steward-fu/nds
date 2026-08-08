/*
 * Ghidra decompilation
 *
 * Function : byteoffset
 * Address  : 081317e8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int byteoffset(lua_State *L)

{
  byte bVar1;
  char *pcVar2;
  char *s;
  int iVar3;
  lua_Integer n;
  int iVar4;
  lua_Integer def;
  lua_Integer posi;
  byte *pbVar5;
  int iVar6;
  size_t len;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  pcVar2 = luaL_checklstring(L,1,&len);
  iVar3 = luaL_checkinteger(L,2);
  if (iVar3 < 0) {
    def = len + 1;
  }
  else {
    def = 1;
  }
  iVar4 = luaL_optinteger(L,3,def);
  if (iVar4 < 0) {
    if ((uint)-iVar4 <= len) {
      iVar4 = len + iVar4 + 1;
      goto LAB_08131854;
    }
    iVar4 = 0;
LAB_081318f0:
    luaL_argerror(L,3,"position out of range");
    if (iVar3 == 0) goto LAB_08131870;
LAB_0813190c:
    if ((pcVar2[iVar4] & 0xc0U) == 0x80) {
      luaL_error(L,"initial position is a continuation byte");
    }
    if (iVar3 < 0) {
      if (iVar4 < 1) {
LAB_08131960:
        lua_pushnil(L);
        goto LAB_081318b4;
      }
      do {
        iVar6 = iVar3;
        pbVar5 = (byte *)(pcVar2 + iVar4);
        do {
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) goto LAB_081319a4;
          pbVar5 = pbVar5 + -1;
        } while ((*pbVar5 & 0xc0) == 0x80);
        iVar3 = iVar6 + 1;
      } while (iVar3 < 0);
LAB_081319a4:
      if (iVar6 != -1) {
        lua_pushnil(L);
        goto LAB_081318b4;
      }
    }
    else {
      while (iVar3 = iVar3 + -1, iVar3 != 0) {
        if ((int)len <= iVar4) goto LAB_08131960;
        pbVar5 = (byte *)(pcVar2 + iVar4);
        do {
          pbVar5 = pbVar5 + 1;
          iVar4 = iVar4 + 1;
        } while ((*pbVar5 & 0xc0) == 0x80);
      }
    }
  }
  else {
LAB_08131854:
    if ((iVar4 < 1) || (iVar4 = iVar4 + -1, (int)len < iVar4)) goto LAB_081318f0;
    if (iVar3 != 0) goto LAB_0813190c;
LAB_08131870:
    if (0 < iVar4) {
      bVar1 = pcVar2[iVar4];
      pbVar5 = (byte *)(pcVar2 + iVar4);
      while (((bVar1 & 0xc0) == 0x80 && (iVar4 = iVar4 + -1, iVar4 != 0))) {
        pbVar5 = pbVar5 + -1;
        bVar1 = *pbVar5;
      }
    }
  }
  lua_pushinteger(L,iVar4 + 1);
LAB_081318b4:
  if (local_1c == __stack_chk_guard) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


