/*
 * Ghidra decompilation
 *
 * Function : str_format
 * Address  : 0812c6f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_format(lua_State *L)

{
  int iVar1;
  int top;
  byte *pbVar2;
  char *strfrmt;
  char *pcVar3;
  char *buff;
  char *pcVar4;
  ushort **ppuVar5;
  char *s_1;
  char *pcVar6;
  char *s;
  size_t l_2;
  lua_Integer lVar7;
  lua_Integer n;
  size_t sVar8;
  size_t l_3;
  int iVar9;
  size_t sVar10;
  uint uVar11;
  ushort *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  char *p;
  byte *pbVar15;
  char *strfrmt_end;
  int arg;
  lua_Number lVar16;
  char *local_86c;
  size_t sfl;
  size_t l;
  luaL_Buffer b;
  char buff_1 [10];
  char form [18];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  iVar1 = lua_gettop(L);
  pbVar2 = (byte *)luaL_checklstring(L,1,&sfl);
  luaL_buffinit(L,&b);
  pbVar15 = pbVar2 + sfl;
  if (pbVar2 < pbVar15) {
    arg = 1;
    local_86c = "\\%d";
    do {
      while (*pbVar2 != 0x25) {
        if (b.size <= b.n) {
          luaL_prepbuffsize(&b,1);
        }
        b.b[b.n] = *pbVar2;
        b.n = b.n + 1;
LAB_0812c7b0:
        pbVar2 = pbVar2 + 1;
        if (pbVar15 <= pbVar2) goto LAB_0812c800;
      }
      if (pbVar2[1] != 0x25) {
        pcVar3 = luaL_prepbuffsize(&b,0x200);
        arg = arg + 1;
        if (iVar1 < arg) {
          luaL_argerror(L,arg,"no value");
        }
        uVar11 = (uint)pbVar2[1];
        pbVar14 = pbVar2 + 1;
        pbVar13 = pbVar14;
        if (uVar11 != 0) {
          do {
            pcVar4 = strchr("-+ #0",uVar11);
            if (pcVar4 == (char *)0x0) break;
            pbVar13 = pbVar13 + 1;
            uVar11 = (uint)*pbVar13;
          } while (uVar11 != 0);
          if (5 < (uint)((int)pbVar13 - (int)pbVar14)) {
            luaL_error(L,"invalid format (repeated flags)");
          }
        }
        ppuVar5 = __ctype_b_loc();
        uVar11 = (uint)*pbVar13;
        puVar12 = *ppuVar5;
        if ((puVar12[uVar11] & 0x800) != 0) {
          uVar11 = (uint)pbVar13[1];
          if ((puVar12[uVar11] & 0x800) == 0) {
            pbVar13 = pbVar13 + 1;
          }
          else {
            uVar11 = (uint)pbVar13[2];
            pbVar13 = pbVar13 + 2;
          }
        }
        if (uVar11 == 0x2e) {
          if ((puVar12[pbVar13[1]] & 0x800) == 0) {
            pbVar2 = pbVar13 + 1;
          }
          else {
            pbVar2 = pbVar13 + 2;
            if ((puVar12[pbVar13[2]] & 0x800) != 0) {
              uVar11 = (uint)pbVar13[3];
              pbVar13 = pbVar13 + 3;
              goto LAB_0812c900;
            }
          }
        }
        else {
LAB_0812c900:
          pbVar2 = pbVar13;
          if ((puVar12[uVar11] & 0x800) != 0) {
            luaL_error(L,"invalid format (width or precision too long)");
          }
        }
        form[0] = '%';
        __memcpy_chk(form + 1,pbVar14,pbVar2 + (1 - (int)pbVar14),0x11);
        pbVar2[(int)(form + (2 - (int)pbVar14))] = 0;
        switch(*pbVar2) {
        case 0x41:
        case 0x45:
        case 0x47:
        case 0x61:
        case 0x65:
        case 0x66:
        case 0x67:
          sVar8 = strlen(form);
          form[sVar8] = '\0';
          lVar16 = luaL_checknumber(L,arg);
          iVar9 = __sprintf_chk(pcVar3,1,0xffffffff,form,(double)lVar16);
          break;
        default:
          iVar1 = luaL_error(L,"invalid option \'%%%c\' to \'format\'");
          goto LAB_0812c80c;
        case 0x58:
        case 100:
        case 0x69:
        case 0x6f:
        case 0x75:
        case 0x78:
          lVar7 = luaL_checkinteger(L,arg);
          sVar8 = strlen(form);
          form[sVar8] = '\0';
          iVar9 = __sprintf_chk(pcVar3,1,0xffffffff,form,lVar7);
          break;
        case 99:
          lVar7 = luaL_checkinteger(L,arg);
          iVar9 = __sprintf_chk(pcVar3,1,0xffffffff,form,lVar7);
          break;
        case 0x71:
          pbVar13 = (byte *)luaL_checklstring(L,arg,&l);
          if (b.size <= b.n) {
            luaL_prepbuffsize(&b,1);
          }
          b.b[b.n] = '\"';
          b.n = b.n + 1;
          sVar10 = l;
          while (l = sVar10 - 1, sVar10 != 0) {
            uVar11 = (uint)*pbVar13;
            if (uVar11 == 10 || (uVar11 == 0x5c || uVar11 == 0x22)) {
              uVar11 = b.n;
              if (b.size <= b.n) {
                luaL_prepbuffsize(&b,1);
                uVar11 = b.n;
              }
              b.n = uVar11 + 1;
              b.b[uVar11] = '\\';
              if (b.size <= b.n) {
LAB_0812cc24:
                luaL_prepbuffsize(&b,1);
              }
LAB_0812cba8:
              b.b[b.n] = *pbVar13;
              b.n = b.n + 1;
            }
            else {
              if ((uVar11 != 0) && (((*ppuVar5)[uVar11] & 2) == 0)) {
                if (b.size <= b.n) goto LAB_0812cc24;
                goto LAB_0812cba8;
              }
              pcVar3 = local_86c;
              if (((*ppuVar5)[pbVar13[1]] & 0x800) != 0) {
                pcVar3 = "\\%03d";
              }
              __sprintf_chk(buff_1,1,10,pcVar3,uVar11);
              luaL_addstring(&b,buff_1);
            }
            pbVar13 = pbVar13 + 1;
            sVar10 = l;
          }
          if (b.size <= b.n) {
            luaL_prepbuffsize(&b,1);
          }
          iVar9 = 0;
          b.b[b.n] = '\"';
          b.n = b.n + 1;
          break;
        case 0x73:
          pcVar4 = luaL_tolstring(L,arg,&l);
          pcVar6 = strchr(form,0x2e);
          if ((pcVar6 == (char *)0x0) && (99 < l)) {
            luaL_addvalue(&b);
            iVar9 = 0;
          }
          else {
            iVar9 = __sprintf_chk(pcVar3,1,0xffffffff,form,pcVar4);
            lua_settop(L,-2);
          }
        }
        b.n = b.n + iVar9;
        goto LAB_0812c7b0;
      }
      if (b.size <= b.n) {
        luaL_prepbuffsize(&b,1);
      }
      sVar10 = b.n + 1;
      pbVar13 = pbVar2 + 2;
      b.b[b.n] = pbVar2[1];
      pbVar2 = pbVar13;
      b.n = sVar10;
    } while (pbVar13 < pbVar15);
  }
LAB_0812c800:
  luaL_pushresult(&b);
  iVar1 = 1;
LAB_0812c80c:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


