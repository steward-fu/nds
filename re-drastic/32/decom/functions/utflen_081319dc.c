/*
 * Ghidra decompilation
 *
 * Function : utflen
 * Address  : 081319dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int utflen(lua_State *L)

{
  char *pcVar1;
  char *s;
  lua_Integer lVar2;
  int iVar3;
  uint uVar4;
  int n;
  uint uVar5;
  uint c;
  uint uVar6;
  lua_Integer posi;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  uchar *s_1;
  size_t len;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  pcVar1 = luaL_checklstring(L,1,&len);
  lVar2 = luaL_optinteger(L,2,1);
  if (lVar2 < 0) {
    if ((uint)-lVar2 <= len) {
      lVar2 = len + lVar2 + 1;
      goto LAB_08131a34;
    }
    iVar3 = luaL_optinteger(L,3,-1);
    if (iVar3 < 0) {
      if (len < (uint)-iVar3) {
        iVar3 = -1;
        lVar2 = 0;
        goto LAB_08131bc4;
      }
      lVar2 = 0;
      goto LAB_08131c30;
    }
    iVar3 = iVar3 + -1;
    lVar2 = 0;
LAB_08131bc4:
    luaL_argerror(L,2,"initial position out of string");
    if (iVar3 < (int)len) goto LAB_08131a70;
  }
  else {
LAB_08131a34:
    iVar3 = luaL_optinteger(L,3,-1);
    if (iVar3 < 0) {
      if (len < (uint)-iVar3) {
        iVar3 = -1;
      }
      else {
LAB_08131c30:
        iVar3 = len + iVar3;
      }
    }
    else {
      iVar3 = iVar3 + -1;
    }
    if ((lVar2 < 1) || (lVar2 = lVar2 + -1, (int)len < lVar2)) goto LAB_08131bc4;
    if (iVar3 < (int)len) goto LAB_08131a70;
  }
  luaL_argerror(L,3,"final position out of string");
LAB_08131a70:
  if (iVar3 < lVar2) {
    n = 0;
  }
  else {
    n = 0;
    do {
      uVar5 = (uint)(byte)pcVar1[lVar2];
      pcVar9 = pcVar1 + lVar2;
      if (0x7f < uVar5) {
        uVar4 = uVar5 & 0x40;
        if ((pcVar1[lVar2] & 0x40U) == 0) {
          uVar8 = uVar5 & 0x7f;
LAB_08131b14:
          if (utf8_decode::limits[uVar4] < uVar8) {
            pcVar9 = pcVar9 + uVar4;
            goto LAB_08131b24;
          }
        }
        else {
          uVar6 = (uint)(byte)pcVar9[1];
          if ((uVar6 & 0xc0) == 0x80) {
            pbVar7 = (byte *)(pcVar9 + 1);
            uVar8 = 0;
            uVar4 = 1;
            while( true ) {
              uVar5 = uVar5 << 1;
              uVar8 = uVar6 & 0x3f | uVar8 << 6;
              if ((uVar5 & 0x40) == 0) break;
              pbVar7 = pbVar7 + 1;
              uVar6 = (uint)*pbVar7;
              uVar4 = uVar4 + 1;
              if ((uVar6 & 0xc0) != 0x80) goto LAB_08131bfc;
            }
            uVar6 = uVar5 & 0x7f;
            if ((int)uVar4 < 4) {
              uVar5 = 0;
            }
            uVar8 = uVar8 | uVar6 << (uVar4 * 5 & 0xff);
            if (3 < (int)uVar4) {
              uVar5 = 1;
            }
            if (0x10ffff < uVar8) {
              uVar5 = uVar5 | 1;
            }
            if (uVar5 == 0) goto LAB_08131b14;
          }
        }
LAB_08131bfc:
        lua_pushnil(L);
        lua_pushinteger(L,lVar2 + 1);
        iVar3 = 2;
        goto LAB_08131b48;
      }
LAB_08131b24:
      if (pcVar9 + 1 == (char *)0x0) goto LAB_08131bfc;
      lVar2 = (int)(pcVar9 + 1) - (int)pcVar1;
      n = n + 1;
    } while (lVar2 <= iVar3);
  }
  lua_pushinteger(L,n);
  iVar3 = 1;
LAB_08131b48:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


