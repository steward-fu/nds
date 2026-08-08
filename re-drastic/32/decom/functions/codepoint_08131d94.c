/*
 * Ghidra decompilation
 *
 * Function : codepoint
 * Address  : 08131d94
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int codepoint(lua_State *L)

{
  char *pcVar1;
  char *s;
  lua_Integer def;
  lua_Integer lVar2;
  uint uVar3;
  int space;
  int n;
  uint c;
  int code;
  uint uVar4;
  uint uVar5;
  char *se;
  uchar *s_1;
  int iVar6;
  byte *pbVar7;
  size_t len;
  int local_24;
  
  local_24 = __stack_chk_guard;
  pcVar1 = luaL_checklstring(L,1,&len);
  def = luaL_optinteger(L,2,1);
  if (def < 0) {
    if ((uint)-def <= len) {
      def = len + def + 1;
      goto LAB_08131de8;
    }
    lVar2 = luaL_optinteger(L,3,0);
    if (lVar2 < 0) {
      def = 0;
      iVar6 = def;
      if (len < (uint)-lVar2) goto LAB_08131fd0;
      goto LAB_08131fa8;
    }
    def = lVar2;
    iVar6 = 0;
LAB_08131fd0:
    luaL_argerror(L,2,"out of range");
  }
  else {
LAB_08131de8:
    lVar2 = luaL_optinteger(L,3,def);
    iVar6 = def;
    if (lVar2 < 0) {
      if (len < (uint)-lVar2) {
        lVar2 = 0;
      }
      else {
LAB_08131fa8:
        lVar2 = len + lVar2 + 1;
        iVar6 = def;
      }
    }
    def = lVar2;
    if (iVar6 < 1) goto LAB_08131fd0;
  }
  if ((int)len < def) {
    luaL_argerror(L,3,"out of range");
  }
  if (iVar6 <= def) {
    space = (def - iVar6) + 1;
    if (space + iVar6 <= def) {
      iVar6 = luaL_error(L,"string slice too long");
      goto LAB_08131f30;
    }
    s_1 = (uchar *)(pcVar1 + iVar6 + -1);
    luaL_checkstack(L,space,"string slice too long");
    if (s_1 < pcVar1 + def) {
      iVar6 = 0;
      do {
        code = (int)*s_1;
        if (0x7f < (uint)code) {
          uVar4 = code & 0x40;
          if ((*s_1 & 0x40) == 0) {
            code = code & 0x7f;
LAB_08131eec:
            if (utf8_decode::limits[uVar4] < (uint)code) {
              s_1 = s_1 + uVar4;
              goto LAB_08131efc;
            }
          }
          else {
            uVar5 = (uint)s_1[1];
            if ((uVar5 & 0xc0) == 0x80) {
              pbVar7 = s_1 + 1;
              uVar3 = 0;
              uVar4 = 1;
              while( true ) {
                code = code << 1;
                uVar5 = uVar5 & 0x3f;
                uVar3 = uVar5 | uVar3 << 6;
                if ((code & 0x40U) == 0) break;
                pbVar7 = pbVar7 + 1;
                uVar5 = (uint)*pbVar7;
                uVar4 = uVar4 + 1;
                if ((uVar5 & 0xc0) != 0x80) goto LAB_08131fec;
              }
              if ((int)uVar4 < 4) {
                uVar5 = 0;
              }
              code = uVar3 | (code & 0x7fU) << (uVar4 * 5 & 0xff);
              if (3 < (int)uVar4) {
                uVar5 = 1;
              }
              if (0x10ffff < (uint)code) {
                uVar5 = uVar5 | 1;
              }
              if (uVar5 == 0) goto LAB_08131eec;
            }
          }
LAB_08131fec:
          iVar6 = luaL_error(L,"invalid UTF-8 code");
          break;
        }
LAB_08131efc:
        s_1 = s_1 + 1;
        if (s_1 == (uchar *)0x0) goto LAB_08131fec;
        iVar6 = iVar6 + 1;
        lua_pushinteger(L,code);
      } while (s_1 < pcVar1 + def);
      goto LAB_08131f30;
    }
  }
  iVar6 = 0;
LAB_08131f30:
  if (local_24 == __stack_chk_guard) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


