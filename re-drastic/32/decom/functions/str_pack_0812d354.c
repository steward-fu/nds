/*
 * Ghidra decompilation
 *
 * Function : str_pack
 * Address  : 0812d354
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_pack(lua_State *L)

{
  char cVar1;
  int iVar2;
  KOption KVar3;
  KOption opt_1;
  char *s;
  char *s_1;
  char *pcVar4;
  char *buff;
  char *s_2;
  char *buff_1;
  lua_Integer n_1;
  char *buff_2;
  lua_Integer n_2;
  char *buff_3;
  KOption KVar5;
  size_t sVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  size_t sVar11;
  uint uVar12;
  int ntoalign;
  lua_Integer lim;
  KOption opt;
  uint uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  lua_Number lVar17;
  lua_Number n;
  char *fmt;
  int size;
  int align;
  Header h;
  Ftypes u;
  luaL_Buffer b;
  int local_2c;
  
  iVar14 = 1;
  local_2c = __stack_chk_guard;
  fmt = luaL_checklstring(L,1,(size_t *)0x0);
  h.islittle = 1;
  h.maxalign = 1;
  h.L = L;
  lua_pushnil(L);
  luaL_buffinit(L,&b);
  if (*fmt != '\0') {
    uVar13 = 0;
    do {
      pcVar8 = (char *)&size;
      KVar3 = getoption(&h,&fmt,(int *)pcVar8);
      align = size;
      if (KVar3 == Kpaddalign) {
        if (*fmt != '\0') {
          pcVar8 = (char *)&align;
          KVar5 = getoption(&h,&fmt,(int *)pcVar8);
          if ((KVar5 != Kchar) && (align != 0)) goto LAB_0812d418;
        }
        pcVar8 = "invalid next option for option \'X\'";
        luaL_argerror(h.L,1,"invalid next option for option \'X\'");
      }
LAB_0812d418:
      bVar16 = SBORROW4(KVar3,3);
      iVar15 = KVar3 + ~Kfloat;
      if (KVar3 != Kchar) {
        bVar16 = SBORROW4(align,1);
        iVar15 = align + -1;
      }
      if ((KVar3 == Kchar || align == 1) || iVar15 < 0 != bVar16) {
        uVar13 = uVar13 + size;
      }
      else {
        if (h.maxalign < align) {
          align = h.maxalign;
        }
        pcVar8 = (char *)(align + -1);
        if (((uint)pcVar8 & align) != 0) {
          luaL_argerror(h.L,1,"format asks for alignment not power of 2");
          pcVar8 = (char *)(align + -1);
        }
        uVar12 = align - ((uint)pcVar8 & uVar13) & (uint)pcVar8;
        iVar15 = uVar12 - 1;
        uVar13 = uVar13 + uVar12 + size;
        if (0 < (int)uVar12) {
          do {
            if (b.size <= b.n) {
              luaL_prepbuffsize(&b,1);
            }
            iVar15 = iVar15 + -1;
            sVar6 = b.n + 1;
            b.b[b.n] = '\0';
            pcVar8 = b.b;
            b.n = sVar6;
          } while (iVar15 != -1);
        }
      }
      iVar15 = iVar14 + 1;
      switch(KVar3) {
      case Kint:
        uVar12 = luaL_checkinteger(L,iVar15);
        if (size < 4) {
          iVar14 = 1 << (size * 8 - 1U & 0xff);
          pcVar8 = (char *)(uint)((int)(uVar12 + iVar14) < 0 == SBORROW4(uVar12,-iVar14));
          if (iVar14 <= (int)uVar12) {
            pcVar8 = (char *)0x0;
          }
          if ((int *)pcVar8 == (int *)0x0) {
            pcVar8 = "integer overflow";
            luaL_argerror(L,iVar15,"integer overflow");
          }
        }
        iVar2 = h.islittle;
        iVar14 = size;
        pcVar4 = luaL_prepbuffsize(&b,size);
        uVar7 = uVar12 >> 0x1f;
        if (iVar2 == 0) {
          if (1 < iVar14) {
            pcVar8 = (char *)(iVar14 + -1);
          }
          pcVar4[iVar14 + -1] = (char)uVar12;
          if (iVar14 < 2) {
LAB_0812db80:
            if (iVar14 < 5) {
              uVar7 = 0;
            }
            if (uVar7 != 0) {
              if (iVar2 != 0) goto LAB_0812da7c;
LAB_0812d8a0:
              sVar11 = iVar14 - 4U;
              if (iVar14 < 5) {
                sVar11 = 1;
              }
              memset(pcVar4 + ((iVar14 - 4U) - sVar11),0xff,sVar11);
            }
          }
          else {
            pcVar8 = pcVar4 + (int)pcVar8;
            do {
              pcVar8 = pcVar8 + -1;
              *pcVar8 = (char)(uVar12 >> 8);
              uVar12 = uVar12 >> 8;
            } while (pcVar4 != pcVar8);
            if (iVar14 < 5) {
              uVar7 = 0;
            }
            if (uVar7 != 0) goto LAB_0812d8a0;
          }
        }
        else {
          *pcVar4 = (char)uVar12;
          if (iVar14 < 2) goto LAB_0812db80;
          pcVar8 = pcVar4 + 1;
          do {
            pcVar9 = pcVar8 + 1;
            *pcVar8 = (char)(uVar12 >> 8);
            pcVar8 = pcVar9;
            uVar12 = uVar12 >> 8;
          } while (pcVar9 != pcVar4 + iVar14);
          if (iVar14 < 5) {
            uVar7 = 0;
          }
          if (uVar7 == 0) goto LAB_0812d8d0;
LAB_0812da7c:
          if (iVar14 < 5) {
            sVar11 = 1;
          }
          else {
            sVar11 = iVar14 - 4;
          }
          memset(pcVar4 + 4,0xff,sVar11);
        }
LAB_0812d8d0:
        b.n = b.n + iVar14;
        cVar1 = *fmt;
        iVar14 = iVar15;
        break;
      case Kuint:
        uVar12 = luaL_checkinteger(L,iVar15);
        iVar2 = h.islittle;
        iVar14 = size;
        cVar1 = (char)uVar12;
        if (size < 4) {
          if ((uint)(1 << ((size & 0x1fU) << 3)) <= uVar12) {
            luaL_argerror(L,iVar15,"unsigned overflow");
          }
          iVar2 = h.islittle;
          iVar14 = size;
          pcVar8 = luaL_prepbuffsize(&b,size);
          if (iVar2 == 0) goto LAB_0812d924;
          *pcVar8 = cVar1;
          if (1 < iVar14) goto LAB_0812d7bc;
LAB_0812d7d4:
          b.n = b.n + iVar14;
        }
        else {
          pcVar8 = luaL_prepbuffsize(&b,size);
          if (iVar2 != 0) {
            *pcVar8 = cVar1;
LAB_0812d7bc:
            pcVar4 = pcVar8 + 1;
            do {
              pcVar9 = pcVar4 + 1;
              *pcVar4 = (char)(uVar12 >> 8);
              pcVar4 = pcVar9;
              uVar12 = uVar12 >> 8;
            } while (pcVar9 != pcVar8 + iVar14);
            goto LAB_0812d7d4;
          }
LAB_0812d924:
          pcVar8[iVar14 + -1] = cVar1;
          if (iVar14 < 2) goto LAB_0812d7d4;
          pcVar4 = pcVar8 + iVar14 + -1;
          do {
            pcVar4 = pcVar4 + -1;
            *pcVar4 = (char)(uVar12 >> 8);
            uVar12 = uVar12 >> 8;
          } while (pcVar4 != pcVar8);
          b.n = b.n + iVar14;
        }
        cVar1 = *fmt;
        iVar14 = iVar15;
        break;
      case Kfloat:
        pcVar8 = luaL_prepbuffsize(&b,size);
        lVar17 = luaL_checknumber(L,iVar15);
        if (size == 4) {
          u.n = lVar17;
LAB_0812dab0:
          if (h.islittle == 1) {
LAB_0812db3c:
            iVar14 = 0;
            do {
              pcVar8[iVar14] = u.buff[iVar14];
              iVar14 = iVar14 + 1;
            } while (iVar14 != size);
          }
          else {
LAB_0812d738:
            iVar14 = 0;
            do {
              pcVar4 = u.buff + iVar14;
              iVar2 = (size + -1) - iVar14;
              iVar14 = iVar14 + 1;
              pcVar8[iVar2] = *pcVar4;
            } while (iVar14 != size);
          }
        }
        else {
          if (size == 8) {
            u.d = (double)lVar17;
            goto LAB_0812dab0;
          }
          u.n = lVar17;
          if (h.islittle == 1) {
            if (size == 0) goto LAB_0812d75c;
            goto LAB_0812db3c;
          }
          if (size != 0) goto LAB_0812d738;
        }
LAB_0812d75c:
        b.n = b.n + size;
        cVar1 = *fmt;
        iVar14 = iVar15;
        break;
      case Kchar:
        pcVar8 = luaL_checklstring(L,iVar15,(size_t *)&align);
        if (align != size) {
          luaL_argerror(L,iVar15,"wrong length");
        }
        luaL_addlstring(&b,pcVar8,size);
        cVar1 = *fmt;
        iVar14 = iVar15;
        break;
      case Kstring:
        pcVar8 = luaL_checklstring(L,iVar15,(size_t *)&align);
        iVar2 = h.islittle;
        uVar12 = align;
        iVar14 = size;
        if (size < 4) {
          if ((uint)(1 << ((size & 0x1fU) << 3)) <= (uint)align) {
            luaL_argerror(L,iVar15,"string length does not fit in given size");
          }
          iVar2 = h.islittle;
          uVar12 = align;
          iVar14 = size;
          pcVar4 = luaL_prepbuffsize(&b,size);
          if (iVar2 == 0) goto LAB_0812d620;
          *pcVar4 = (char)uVar12;
          if (1 < iVar14) goto LAB_0812da28;
        }
        else {
          pcVar4 = luaL_prepbuffsize(&b,size);
          if (iVar2 == 0) {
LAB_0812d620:
            pcVar4[iVar14 + -1] = (char)uVar12;
            if (1 < iVar14) {
              pcVar9 = pcVar4 + iVar14 + -1;
              do {
                pcVar9 = pcVar9 + -1;
                *pcVar9 = (char)(uVar12 >> 8);
                uVar12 = uVar12 >> 8;
              } while (pcVar4 != pcVar9);
            }
          }
          else {
            *pcVar4 = (char)uVar12;
LAB_0812da28:
            pcVar9 = pcVar4 + 1;
            do {
              pcVar10 = pcVar9 + 1;
              *pcVar9 = (char)(uVar12 >> 8);
              pcVar9 = pcVar10;
              uVar12 = uVar12 >> 8;
            } while (pcVar10 != pcVar4 + iVar14);
          }
        }
        b.n = b.n + iVar14;
        luaL_addlstring(&b,pcVar8,align);
        uVar13 = uVar13 + align;
        cVar1 = *fmt;
        iVar14 = iVar15;
        break;
      case Kzstr:
        pcVar8 = luaL_checklstring(L,iVar15,(size_t *)&align);
        s = (char *)strlen(pcVar8);
        if (s != (char *)align) {
          luaL_argerror(L,iVar15,"string contains zeros");
        }
        luaL_addlstring(&b,pcVar8,align);
        if (b.size <= b.n) {
          luaL_prepbuffsize(&b,1);
        }
        b.b[b.n] = '\0';
        uVar13 = uVar13 + align + 1;
        iVar14 = iVar15;
        b.n = b.n + 1;
      case Kpaddalign:
      case Knop:
        cVar1 = *fmt;
        break;
      case Kpadding:
        if (b.size <= b.n) {
          luaL_prepbuffsize(&b,1);
        }
        b.b[b.n] = '\0';
        cVar1 = *fmt;
        b.n = b.n + 1;
        break;
      default:
        cVar1 = *fmt;
        iVar14 = iVar15;
      }
    } while (cVar1 != '\0');
  }
  luaL_pushresult(&b);
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


