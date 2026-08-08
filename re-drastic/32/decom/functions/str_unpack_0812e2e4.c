/*
 * Ghidra decompilation
 *
 * Function : str_unpack
 * Address  : 0812e2e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_unpack(lua_State *L)

{
  bool bVar1;
  byte *pbVar2;
  ushort uVar3;
  uint3 uVar4;
  char *pcVar5;
  char *data;
  int iVar6;
  size_t len_00;
  size_t len;
  KOption KVar7;
  int mask;
  int iVar8;
  char cVar9;
  int limit;
  int i;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  lua_Unsigned mask_1;
  int a_4;
  int a_1;
  int a_2;
  int a;
  int a_3;
  uint uVar14;
  size_t pos;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  size_t len_01;
  int limit_1;
  char *pcVar18;
  size_t sVar19;
  int iVar20;
  int iVar21;
  lua_Number num;
  uint local_74;
  char *fmt;
  size_t ld;
  int align;
  Header h;
  Ftypes u;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  fmt = luaL_checklstring(L,1,(size_t *)0x0);
  pcVar5 = luaL_checklstring(L,2,&ld);
  iVar6 = luaL_optinteger(L,3,1);
  if (iVar6 < 0) {
    if ((uint)-iVar6 <= ld) {
      iVar6 = ld + iVar6 + 1;
      goto LAB_0812e354;
    }
    uVar14 = 0xffffffff;
  }
  else {
LAB_0812e354:
    uVar14 = iVar6 - 1;
    if (uVar14 <= ld) goto LAB_0812e360;
  }
  luaL_argerror(L,3,"initial position out of string");
LAB_0812e360:
  iVar6 = 1;
  h.islittle = 1;
  h.maxalign = 1;
  h.L = L;
  if (*fmt != '\0') {
    iVar20 = 0;
    do {
      pbVar10 = (byte *)(fmt + 1);
      switch(*fmt) {
      case ' ':
        a_4 = 0;
        uVar17 = 8;
        fmt = (char *)pbVar10;
        break;
      case '!':
        if ((byte)fmt[1] - 0x30 < 10) {
          a = 0;
          do {
            fmt = (char *)(pbVar10 + 1);
            a = (*pbVar10 - 0x30) + a * 10;
            pbVar10 = (byte *)fmt;
          } while (a < 0xccccccc && (byte)*fmt - 0x30 < 10);
          if (0xf < a - 1U) {
            luaL_error(h.L,"integral size (%d) out of limits [1,%d]",a,0x10);
          }
        }
        else {
          a = 8;
          fmt = (char *)pbVar10;
        }
        a_4 = 0;
        uVar17 = 8;
        h.maxalign = a;
        break;
      default:
        uVar17 = 8;
        fmt = (char *)pbVar10;
        luaL_error(h.L,"invalid format option \'%c\'");
        a_4 = 0;
        break;
      case '<':
      case '=':
        a_4 = 0;
        uVar17 = 8;
        h.islittle = 1;
        fmt = (char *)pbVar10;
        break;
      case '>':
        uVar17 = 8;
        a_4 = 0;
        h.islittle = 0;
        fmt = (char *)pbVar10;
        break;
      case 'B':
        uVar17 = 1;
        a_4 = uVar17;
        fmt = (char *)pbVar10;
        break;
      case 'H':
        a_4 = 2;
        uVar17 = 1;
        fmt = (char *)pbVar10;
        align = a_4;
        goto LAB_0812e53c;
      case 'I':
        if (9 < (byte)fmt[1] - 0x30) goto switchD_0812e3a4_caseD_4a;
        a_1 = 0;
        do {
          fmt = (char *)(pbVar10 + 1);
          a_1 = (*pbVar10 - 0x30) + a_1 * 10;
          pbVar10 = (byte *)fmt;
        } while (a_1 < 0xccccccc && (byte)*fmt - 0x30 < 10);
        a_4 = a_1;
        if (a_1 - 1U < 0x10) {
          bVar1 = a_1 < 2;
          uVar17 = 1;
        }
        else {
          luaL_error(h.L,"integral size (%d) out of limits [1,%d]",a_1);
          uVar17 = 1;
          if (a_1 < 2) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
LAB_0812ee44:
        align = a_4;
        if (!bVar1) goto LAB_0812e53c;
        break;
      case 'J':
      case 'L':
      case 'T':
switchD_0812e3a4_caseD_4a:
        a_4 = 4;
        uVar17 = 1;
        fmt = (char *)pbVar10;
        align = a_4;
        goto LAB_0812e53c;
      case 'X':
        align = 0;
        pcVar13 = fmt + 1;
        fmt = (char *)pbVar10;
        if (((*pcVar13 == '\0') || (KVar7 = getoption(&h,&fmt,&align), KVar7 == Kchar)) ||
           (align == 0)) {
          luaL_argerror(h.L,1,"invalid next option for option \'X\'");
        }
        if (1 < align) {
          uVar17 = 7;
          a_4 = 0;
          goto LAB_0812e53c;
        }
        uVar12 = 0;
        uVar17 = 7;
        a_4 = uVar12;
        uVar11 = uVar12;
        goto LAB_0812e574;
      case 'b':
        a_4 = 1;
        uVar17 = 0;
        uVar11 = uVar17;
        fmt = (char *)pbVar10;
        goto LAB_0812e564;
      case 'c':
        pbVar2 = (byte *)(fmt + 1);
        fmt = (char *)pbVar10;
        if (*pbVar2 - 0x30 < 10) {
          a_4 = 0;
          do {
            fmt = (char *)(pbVar10 + 1);
            a_4 = (*pbVar10 - 0x30) + a_4 * 10;
            if (9 < (byte)*fmt - 0x30) {
              if (a_4 == 0xffffffff) goto LAB_0812eb10;
              break;
            }
            pbVar10 = (byte *)fmt;
          } while (a_4 < 0xccccccc);
          uVar17 = 3;
        }
        else {
LAB_0812eb10:
          uVar17 = 3;
          luaL_error(h.L,"missing size for format option \'c\'");
          a_4 = 0xffffffff;
        }
        break;
      case 'd':
        a_4 = 8;
        uVar17 = 2;
        fmt = (char *)pbVar10;
        align = a_4;
        goto LAB_0812e53c;
      case 'f':
      case 'n':
        a_4 = 4;
        uVar17 = 2;
        fmt = (char *)pbVar10;
        align = a_4;
        goto LAB_0812e53c;
      case 'h':
        a_4 = 2;
        uVar17 = 0;
        fmt = (char *)pbVar10;
        align = a_4;
        goto LAB_0812e53c;
      case 'i':
        if ((byte)fmt[1] - 0x30 < 10) {
          a_2 = 0;
          do {
            fmt = (char *)(pbVar10 + 1);
            a_2 = (*pbVar10 - 0x30) + a_2 * 10;
            pbVar10 = (byte *)fmt;
          } while (a_2 < 0xccccccc && (byte)*fmt - 0x30 < 10);
          uVar17 = 0;
          a_4 = a_2;
          if (a_2 - 1U < 0x10) {
            bVar1 = a_2 < 2;
          }
          else {
            luaL_error(h.L,"integral size (%d) out of limits [1,%d]",a_2);
            bVar1 = a_2 < 2;
          }
          goto LAB_0812ee44;
        }
      case 'j':
      case 'l':
        a_4 = 4;
        uVar17 = 0;
        fmt = (char *)pbVar10;
        align = a_4;
        goto LAB_0812e53c;
      case 's':
        if ((byte)fmt[1] - 0x30 < 10) {
          a_4 = 0;
          do {
            fmt = (char *)(pbVar10 + 1);
            a_4 = (*pbVar10 - 0x30) + a_4 * 10;
            pbVar10 = (byte *)fmt;
          } while (a_4 < 0xccccccc && (byte)*fmt - 0x30 < 10);
          if (a_4 - 1U < 0x10) {
            bVar1 = a_4 < 2;
            uVar17 = 4;
          }
          else {
            luaL_error(h.L,"integral size (%d) out of limits [1,%d]",a_4);
            uVar17 = 4;
            bVar1 = a_4 < 2;
          }
          goto LAB_0812ee44;
        }
        uVar17 = 4;
        a_4 = uVar17;
        fmt = (char *)pbVar10;
        align = uVar17;
LAB_0812e53c:
        uVar11 = align;
        if (h.maxalign < align) {
          uVar11 = h.maxalign;
        }
        uVar12 = uVar11 - 1;
        if (h.maxalign < align) {
          align = h.maxalign;
        }
        if ((uVar12 & uVar11) != 0) {
          luaL_argerror(h.L,1,"format asks for alignment not power of 2");
          uVar12 = align - 1;
          uVar11 = align;
        }
        uVar11 = uVar12 & uVar11 - (uVar12 & uVar14);
        goto LAB_0812e564;
      case 'x':
        uVar17 = 6;
        a_4 = 1;
        fmt = (char *)pbVar10;
        break;
      case 'z':
        uVar17 = 5;
        a_4 = 0;
        fmt = (char *)pbVar10;
      }
      uVar11 = 0;
LAB_0812e564:
      uVar12 = uVar11 + a_4;
      if (~uVar14 < uVar12) {
LAB_0812e584:
        luaL_argerror(L,2,"data string too short");
      }
      else {
LAB_0812e574:
        if (ld < uVar14 + uVar12) goto LAB_0812e584;
      }
      luaL_checkstack(L,2,"too many results");
      iVar15 = uVar14 + uVar11;
      iVar21 = iVar20 + 1;
      switch(uVar17) {
      case 2:
        pcVar13 = pcVar5 + iVar15;
        num = u.f;
        if (h.islittle == 1) {
          if (a_4 != 0) {
            sVar19 = 0;
            do {
              cVar9 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              u.buff[sVar19] = cVar9;
              sVar19 = sVar19 + 1;
            } while (a_4 != sVar19);
            goto LAB_0812e7d0;
          }
        }
        else if (a_4 != 0) {
          pcVar18 = pcVar13 + a_4;
          pcVar16 = (char *)((int)&h.maxalign + a_4 + 3U);
          do {
            cVar9 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            *pcVar16 = cVar9;
            pcVar16 = pcVar16 + -1;
          } while (pcVar13 != pcVar18);
LAB_0812e7d0:
          num = u.f;
          if ((a_4 != 4) && (a_4 == 8)) {
            num = (lua_Number)(double)CONCAT44(u._4_4_,u.f);
          }
        }
        iVar6 = iVar20 + 2;
        uVar14 = iVar15 + a_4;
        lua_pushnumber(L,num);
        break;
      case 3:
        iVar6 = iVar20 + 2;
        uVar14 = iVar15 + a_4;
        lua_pushlstring(L,pcVar5 + iVar15,a_4);
        break;
      case 4:
        sVar19 = a_4;
        if (3 < a_4) {
          sVar19 = 4;
        }
        iVar6 = sVar19 - 1;
        if (iVar6 < 0) {
          len_01 = 0;
        }
        else if (h.islittle == 0) {
          iVar8 = a_4 - 1;
          len_01 = (size_t)(byte)pcVar5[(iVar8 - iVar6) + iVar15];
          if (sVar19 - 2 != -1) {
            uVar3 = CONCAT11(pcVar5[(iVar8 - iVar6) + iVar15],
                             pcVar5[(iVar8 - (sVar19 - 2)) + iVar15]);
            len_01 = (size_t)uVar3;
            if (sVar19 - 3 != -1) {
              uVar4 = CONCAT21(uVar3,pcVar5[(iVar8 - (sVar19 - 3)) + iVar15]);
              len_01 = (size_t)uVar4;
              if (sVar19 == 4) {
                len_01 = CONCAT31(uVar4,pcVar5[iVar8 + iVar15]);
              }
            }
          }
        }
        else {
          len_01 = (size_t)(byte)pcVar5[iVar6 + iVar15];
          if (sVar19 - 2 != -1) {
            uVar3 = CONCAT11(pcVar5[iVar6 + iVar15],pcVar5[(sVar19 - 2) + iVar15]);
            len_01 = (size_t)uVar3;
            if (sVar19 - 3 != -1) {
              uVar4 = CONCAT21(uVar3,pcVar5[(sVar19 - 3) + iVar15]);
              len_01 = (size_t)uVar4;
              if (sVar19 == 4) {
                len_01 = CONCAT31(uVar4,pcVar5[iVar15]);
              }
            }
          }
        }
        if (4 < a_4) {
          if (h.islittle == 0) {
            pcVar13 = pcVar5 + ((a_4 - 1U) - sVar19) + iVar15;
            do {
              pcVar16 = pcVar13 + -1;
              if (*pcVar13 != '\0') {
                luaL_error(L,"%d-byte integer does not fit into Lua Integer",a_4);
              }
              pcVar13 = pcVar16;
            } while (pcVar5 + iVar15 + -1 != pcVar16);
          }
          else {
            pcVar13 = pcVar5 + sVar19 + iVar15;
            do {
              pcVar16 = pcVar13 + 1;
              if (*pcVar13 != '\0') {
                luaL_error(L,"%d-byte integer does not fit into Lua Integer",a_4);
              }
              pcVar13 = pcVar16;
            } while (pcVar5 + a_4 + iVar15 != pcVar16);
          }
        }
        uVar14 = iVar15 + a_4 + len_01;
        if (ld < uVar14) {
          luaL_argerror(L,2,"data string too short");
        }
        iVar6 = iVar20 + 2;
        lua_pushlstring(L,pcVar5 + iVar15 + a_4,len_01);
        break;
      case 5:
        iVar6 = iVar20 + 2;
        len_00 = strlen(pcVar5 + iVar15);
        uVar14 = a_4 + 1U + iVar15 + len_00;
        lua_pushlstring(L,pcVar5 + iVar15,len_00);
        break;
      case 6:
      case 7:
      case 8:
        uVar14 = iVar15 + a_4;
        iVar6 = iVar21;
        iVar21 = iVar20;
        break;
      default:
        sVar19 = a_4;
        if (3 < a_4) {
          sVar19 = 4;
        }
        iVar6 = sVar19 - 1;
        pcVar13 = pcVar5 + iVar15;
        if (iVar6 < 0) {
          local_74 = 0;
        }
        else if (h.islittle == 0) {
          iVar8 = a_4 - 1;
          local_74 = (uint)(byte)pcVar13[iVar8 - iVar6];
          if (sVar19 - 2 != -1) {
            uVar3 = CONCAT11(pcVar13[iVar8 - iVar6],pcVar13[iVar8 - (sVar19 - 2)]);
            local_74 = (uint)uVar3;
            if (sVar19 - 3 != -1) {
              uVar4 = CONCAT21(uVar3,pcVar13[iVar8 - (sVar19 - 3)]);
              local_74 = (uint)uVar4;
              if (sVar19 == 4) {
                local_74 = CONCAT31(uVar4,pcVar13[iVar8]);
              }
            }
          }
        }
        else {
          local_74 = (uint)(byte)pcVar13[iVar6];
          if (sVar19 - 2 != -1) {
            uVar3 = CONCAT11(pcVar13[iVar6],pcVar13[sVar19 - 2]);
            local_74 = (uint)uVar3;
            if (sVar19 - 3 != -1) {
              uVar4 = CONCAT21(uVar3,pcVar13[sVar19 - 3]);
              local_74 = (uint)uVar4;
              if (sVar19 == 4) {
                local_74 = CONCAT31(uVar4,pcVar5[iVar15]);
              }
            }
          }
        }
        if (a_4 < 4) {
          if (uVar17 == 0) {
            uVar14 = 1 << (a_4 * 8 - 1U & 0xff);
            local_74 = (local_74 ^ uVar14) - uVar14;
          }
        }
        else if (a_4 != 4) {
          if (-1 < (int)local_74) {
            uVar17 = uVar17 | 1;
          }
          if ((uVar17 & 1) == 0) {
            cVar9 = -1;
          }
          else {
            cVar9 = '\0';
          }
          if (h.islittle == 0) {
            pcVar13 = pcVar13 + ((a_4 - 1U) - sVar19);
            do {
              if (*pcVar13 != cVar9) {
                luaL_error(L,"%d-byte integer does not fit into Lua Integer",a_4);
              }
              sVar19 = sVar19 + 1;
              pcVar13 = pcVar13 + -1;
            } while ((int)sVar19 < a_4);
          }
          else {
            pcVar16 = pcVar13 + sVar19;
            do {
              pcVar18 = pcVar16 + 1;
              if (cVar9 != *pcVar16) {
                luaL_error(L,"%d-byte integer does not fit into Lua Integer",a_4);
              }
              pcVar16 = pcVar18;
            } while ((int)pcVar18 - (int)pcVar13 < a_4);
          }
        }
        uVar14 = iVar15 + a_4;
        lua_pushinteger(L,local_74);
        iVar6 = iVar20 + 2;
      }
      iVar20 = iVar21;
    } while (*fmt != '\0');
  }
  lua_pushinteger(L,uVar14 + 1);
  if (local_2c == __stack_chk_guard) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


