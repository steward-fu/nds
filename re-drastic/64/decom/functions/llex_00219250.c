/*
 * Ghidra decompilation
 *
 * Function : llex
 * Address  : 00219250
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint llex(uint *param_1,long *param_2)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  undefined auStack_10 [8];
  long local_8;
  
  uVar16 = *param_1;
  local_8 = ___stack_chk_guard;
  uVar6 = (ulong)(uVar16 + 1);
  *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
LAB_0021929c:
  switch(uVar6) {
  case 0:
    uVar16 = 0x121;
    break;
  default:
    if (((&luai_ctype_)[(int)uVar6] & 1) != 0) goto LAB_002192c0;
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = luaZ_fill();
      *param_1 = uVar5;
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      *param_1 = (uint)*pbVar9;
    }
    break;
  case 10:
  case 0xc:
  case 0xd:
  case 0x21:
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar16 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar16 = (uint)*pbVar9;
    }
    uVar6 = (ulong)(uVar16 + 1);
    *param_1 = uVar16;
    goto LAB_0021929c;
  case 0xb:
  case 0xe:
    inclinenumber(param_1);
    uVar16 = *param_1;
    uVar6 = (ulong)(uVar16 + 1);
    goto LAB_0021929c;
  case 0x23:
  case 0x28:
    plVar15 = *(long **)(param_1 + 0x12);
    lVar8 = plVar15[1];
    uVar11 = plVar15[2];
    uVar6 = lVar8 + 1;
    if (uVar11 < uVar6) {
      if (0x3ffffffe < uVar11) goto LAB_0021a544;
      lVar17 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
      lVar8 = plVar15[1];
      *plVar15 = lVar17;
      plVar15[2] = uVar11 * 2;
      uVar6 = lVar8 + 1;
    }
    else {
      lVar17 = *plVar15;
    }
    plVar15[1] = uVar6;
    *(char *)(lVar17 + lVar8) = (char)uVar16;
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
    }
    *param_1 = uVar5;
    goto joined_r0x002194dc;
  case 0x2e:
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
    }
    *param_1 = uVar5;
    if (uVar5 != 0x2d) break;
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar16 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar16 = (uint)*pbVar9;
    }
    *param_1 = uVar16;
    if (uVar16 == 0x5b) {
      iVar3 = skip_sep(param_1);
      *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
      if (iVar3 < 0) {
        uVar16 = *param_1;
        goto LAB_002197a0;
      }
      read_long_string(param_1,0,iVar3);
      uVar16 = *param_1;
      uVar6 = (ulong)(uVar16 + 1);
      *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
    }
    else {
LAB_002197a0:
      while ((uVar6 = (ulong)(uVar16 + 1), 0xe < uVar16 + 1 ||
             ((0x4801UL >> (uVar6 & 0x3f) & 1) == 0))) {
        plVar15 = *(long **)(param_1 + 0x10);
        lVar8 = *plVar15;
        *plVar15 = lVar8 + -1;
        if (lVar8 == 0) {
          uVar16 = luaZ_fill();
          *param_1 = uVar16;
        }
        else {
          pbVar9 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar9 + 1);
          uVar16 = (uint)*pbVar9;
          *param_1 = uVar16;
        }
      }
    }
    goto LAB_0021929c;
  case 0x2f:
    plVar15 = *(long **)(param_1 + 0x12);
    lVar8 = plVar15[1];
    uVar11 = plVar15[2];
    uVar6 = lVar8 + 1;
    if (uVar11 < uVar6) {
      if (0x3ffffffe < uVar11) goto LAB_0021a544;
      lVar17 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
      lVar8 = plVar15[1];
      *plVar15 = lVar17;
      plVar15[2] = uVar11 * 2;
      uVar6 = lVar8 + 1;
    }
    else {
      lVar17 = *plVar15;
    }
    plVar15[1] = uVar6;
    *(undefined *)(lVar17 + lVar8) = 0x2e;
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
    }
    *param_1 = uVar5;
    if (uVar5 == 0x2e) {
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      *param_1 = uVar5;
      uVar16 = 0x118;
      if (uVar5 == 0x2e) {
        plVar15 = *(long **)(param_1 + 0x10);
        lVar8 = *plVar15;
        *plVar15 = lVar8 + -1;
        if (lVar8 == 0) {
          uVar5 = luaZ_fill();
        }
        else {
          pbVar9 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar9 + 1);
          uVar5 = (uint)*pbVar9;
        }
        uVar16 = 0x119;
        *param_1 = uVar5;
      }
      break;
    }
    if (((byte)(&luai_ctype_)[(int)(uVar5 + 1)] >> 1 & 1) == 0) break;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
    uVar16 = read_numeral_isra_0(param_1,param_2);
    break;
  case 0x30:
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
    }
    *param_1 = uVar5;
    if (uVar5 == 0x2f) {
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      uVar16 = 0x117;
      *param_1 = uVar5;
    }
    break;
  case 0x3b:
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
    }
    *param_1 = uVar5;
    if (uVar5 == 0x3a) {
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      uVar16 = 0x120;
      *param_1 = uVar5;
    }
    break;
  case 0x3d:
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
    }
    *param_1 = uVar5;
    if (uVar5 == 0x3d) {
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      uVar16 = 0x11c;
      *param_1 = uVar5;
    }
    else if (uVar5 == 0x3c) {
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      uVar16 = 0x11e;
      *param_1 = uVar5;
    }
    break;
  case 0x3e:
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
    }
    *param_1 = uVar5;
    if (uVar5 == 0x3d) {
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      uVar16 = 0x11a;
      *param_1 = uVar5;
    }
    break;
  case 0x3f:
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
    }
    *param_1 = uVar5;
    if (uVar5 == 0x3d) {
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      uVar16 = 0x11b;
      *param_1 = uVar5;
    }
    else if (uVar5 == 0x3e) {
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      uVar16 = 0x11f;
      *param_1 = uVar5;
    }
    break;
  case 0x5c:
    iVar3 = skip_sep(param_1);
    if (iVar3 < 0) {
      if (iVar3 != -1) {
                    /* WARNING: Subroutine does not return */
        lexerror(param_1,"invalid long string delimiter",0x125);
      }
    }
    else {
      uVar16 = 0x125;
      read_long_string(param_1,param_2,iVar3);
    }
    break;
  case 0x7f:
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar5 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
    }
    *param_1 = uVar5;
    if (uVar5 == 0x3d) {
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      uVar16 = 0x11d;
      *param_1 = uVar5;
    }
  }
  goto LAB_00219428;
joined_r0x002194dc:
  if (uVar5 == uVar16) goto LAB_002195f0;
  if (uVar5 != 0x5c) {
    if ((int)uVar5 < 0x5d) {
      if ((uVar5 == 10) || (uVar5 == 0xd)) {
                    /* WARNING: Subroutine does not return */
        lexerror(param_1,"unfinished string",0x125);
      }
      if (uVar5 == 0xffffffff) goto LAB_00219b7c;
      plVar15 = *(long **)(param_1 + 0x12);
      lVar8 = plVar15[1];
      uVar11 = plVar15[2];
      uVar6 = lVar8 + 1;
      if (uVar11 < uVar6) goto LAB_00219e94;
LAB_00219e30:
      plVar15[1] = uVar6;
      *(char *)(*plVar15 + lVar8) = (char)uVar5;
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) goto LAB_00219edc;
LAB_00219e50:
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar5 = (uint)*pbVar9;
      *param_1 = uVar5;
    }
    else {
      plVar15 = *(long **)(param_1 + 0x12);
      lVar8 = plVar15[1];
      uVar11 = plVar15[2];
      uVar6 = lVar8 + 1;
      if (uVar6 <= uVar11) goto LAB_00219e30;
LAB_00219e94:
      if (0x3ffffffe < uVar11) goto LAB_0021a544;
      lVar8 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
      lVar17 = plVar15[1];
      *plVar15 = lVar8;
      plVar15[2] = uVar11 * 2;
      plVar15[1] = lVar17 + 1;
      *(char *)(lVar8 + lVar17) = (char)uVar5;
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 != 0) goto LAB_00219e50;
LAB_00219edc:
      uVar5 = luaZ_fill();
      *param_1 = uVar5;
    }
    goto joined_r0x002194dc;
  }
  plVar15 = *(long **)(param_1 + 0x12);
  lVar8 = plVar15[1];
  uVar11 = plVar15[2];
  uVar6 = lVar8 + 1;
  if (uVar11 < uVar6) {
    if (0x3ffffffe < uVar11) goto LAB_0021a544;
    lVar8 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
    lVar17 = plVar15[1];
    *plVar15 = lVar8;
    plVar15[2] = uVar11 * 2;
    plVar15[1] = lVar17 + 1;
    *(undefined *)(lVar8 + lVar17) = 0x5c;
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 != 0) goto LAB_00219538;
LAB_00219f58:
    uVar5 = luaZ_fill();
  }
  else {
    plVar15[1] = uVar6;
    *(undefined *)(*plVar15 + lVar8) = 0x5c;
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 == 0) goto LAB_00219f58;
LAB_00219538:
    pbVar9 = (byte *)plVar15[1];
    plVar15[1] = (long)(pbVar9 + 1);
    uVar5 = (uint)*pbVar9;
  }
  *param_1 = uVar5;
  if (uVar5 == 0x6e) {
    uVar5 = 10;
  }
  else {
    if ((int)uVar5 < 0x6f) {
      if (uVar5 == 0x61) {
        uVar5 = 7;
        goto LAB_0021958c;
      }
      if (0x61 < (int)uVar5) {
        if (uVar5 == 0x62) {
          uVar5 = 8;
          goto LAB_0021958c;
        }
        if (uVar5 != 0x66) goto LAB_0021a09c;
        plVar15 = *(long **)(param_1 + 0x10);
        lVar8 = *plVar15;
        *plVar15 = lVar8 + -1;
        uVar14 = 0xc;
        goto joined_r0x00219bb4;
      }
      if (uVar5 == 10) {
LAB_00219ef4:
        inclinenumber(param_1);
        plVar15 = *(long **)(param_1 + 0x12);
        uVar14 = 10;
        uVar6 = plVar15[1];
      }
      else {
        if ((int)uVar5 < 0xb) {
          if (uVar5 == 0xffffffff) {
LAB_00219b7c:
                    /* WARNING: Subroutine does not return */
            lexerror(param_1,"unfinished string",0x121);
          }
        }
        else {
          if (uVar5 == 0x22) goto LAB_0021958c;
          if ((int)uVar5 < 0x23) {
            if (uVar5 == 0xd) goto LAB_00219ef4;
          }
          else if ((uVar5 == 0x27) || (uVar5 == 0x5c)) goto LAB_0021958c;
        }
LAB_0021a09c:
        if (((byte)(&luai_ctype_)[(int)(uVar5 + 1)] >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          esccheck_part_0(param_1,"invalid escape sequence");
        }
        iVar3 = 0;
        uVar14 = 0;
        do {
          plVar15 = *(long **)(param_1 + 0x12);
          uVar14 = (uVar5 + uVar14 * 10) - 0x30;
          lVar8 = plVar15[1];
          uVar11 = plVar15[2];
          uVar6 = lVar8 + 1;
          if (uVar11 < uVar6) {
            if (0x3ffffffe < uVar11) goto LAB_0021a544;
            lVar17 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15);
            lVar8 = plVar15[1];
            *plVar15 = lVar17;
            uVar6 = lVar8 + 1;
            plVar15[2] = uVar11 * 2;
          }
          else {
            lVar17 = *plVar15;
          }
          plVar15[1] = uVar6;
          *(char *)(lVar17 + lVar8) = (char)uVar5;
          plVar15 = *(long **)(param_1 + 0x10);
          lVar8 = *plVar15;
          *plVar15 = lVar8 + -1;
          if (lVar8 == 0) {
            uVar5 = luaZ_fill();
          }
          else {
            pbVar9 = (byte *)plVar15[1];
            plVar15[1] = (long)(pbVar9 + 1);
            uVar5 = (uint)*pbVar9;
          }
          *param_1 = uVar5;
          iVar3 = iVar3 + 1;
        } while ((iVar3 != 3) && (((byte)(&luai_ctype_)[(int)(uVar5 + 1)] >> 1 & 1) != 0));
        if (0xff < (int)uVar14) {
                    /* WARNING: Subroutine does not return */
          esccheck_part_0(param_1,"decimal escape too large");
        }
        plVar15 = *(long **)(param_1 + 0x12);
        uVar6 = plVar15[1] - (long)iVar3;
        plVar15[1] = uVar6;
      }
      goto LAB_002195bc;
    }
    if (uVar5 == 0x76) {
      uVar5 = 0xb;
    }
    else if ((int)uVar5 < 0x77) {
      if (uVar5 == 0x74) {
        uVar5 = 9;
        goto LAB_0021958c;
      }
      if (uVar5 == 0x75) {
        plVar15 = *(long **)(param_1 + 0x12);
        lVar8 = plVar15[1];
        uVar11 = plVar15[2];
        uVar6 = lVar8 + 1;
        if (uVar11 < uVar6) {
          if (0x3ffffffe < uVar11) goto LAB_0021a544;
          lVar17 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
          lVar8 = plVar15[1];
          *plVar15 = lVar17;
          plVar15[2] = uVar11 * 2;
          uVar6 = lVar8 + 1;
        }
        else {
          lVar17 = *plVar15;
        }
        plVar15[1] = uVar6;
        *(undefined *)(lVar17 + lVar8) = 0x75;
        plVar15 = *(long **)(param_1 + 0x10);
        lVar8 = *plVar15;
        *plVar15 = lVar8 + -1;
        if (lVar8 == 0) {
          uVar5 = luaZ_fill();
        }
        else {
          pbVar9 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar9 + 1);
          uVar5 = (uint)*pbVar9;
        }
        *param_1 = uVar5;
        if (uVar5 != 0x7b) {
                    /* WARNING: Subroutine does not return */
          esccheck_part_0(param_1,"missing \'{\'");
        }
        plVar15 = *(long **)(param_1 + 0x12);
        lVar8 = plVar15[1];
        uVar11 = plVar15[2];
        uVar6 = lVar8 + 1;
        if (uVar11 < uVar6) {
          if (0x3ffffffe < uVar11) goto LAB_0021a544;
          lVar17 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
          lVar8 = plVar15[1];
          *plVar15 = lVar17;
          plVar15[2] = uVar11 * 2;
          uVar6 = lVar8 + 1;
        }
        else {
          lVar17 = *plVar15;
        }
        plVar15[1] = uVar6;
        *(undefined *)(lVar17 + lVar8) = 0x7b;
        plVar15 = *(long **)(param_1 + 0x10);
        lVar8 = *plVar15;
        *plVar15 = lVar8 + -1;
        if (lVar8 == 0) {
          uVar5 = luaZ_fill();
        }
        else {
          pbVar9 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar9 + 1);
          uVar5 = (uint)*pbVar9;
        }
        *param_1 = uVar5;
        if (((byte)(&luai_ctype_)[(int)(uVar5 + 1)] >> 4 & 1) != 0) {
          iVar4 = luaO_hexavalue();
          iVar3 = 4;
          uVar6 = (ulong)iVar4;
          do {
            plVar15 = *(long **)(param_1 + 0x12);
            uVar5 = *param_1;
            lVar8 = plVar15[1];
            uVar13 = plVar15[2];
            uVar11 = lVar8 + 1;
            if (uVar13 < uVar11) {
              if (0x3ffffffe < uVar13) goto LAB_0021a544;
              lVar8 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar13,uVar13 * 2);
              lVar17 = plVar15[1];
              *plVar15 = lVar8;
              plVar15[2] = uVar13 * 2;
              plVar15[1] = lVar17 + 1;
              *(char *)(lVar8 + lVar17) = (char)uVar5;
              plVar15 = *(long **)(param_1 + 0x10);
              lVar8 = *plVar15;
              *plVar15 = lVar8 + -1;
              if (lVar8 != 0) goto LAB_00219cb8;
LAB_00219d54:
              uVar5 = luaZ_fill();
            }
            else {
              plVar15[1] = uVar11;
              *(char *)(*plVar15 + lVar8) = (char)uVar5;
              plVar15 = *(long **)(param_1 + 0x10);
              lVar8 = *plVar15;
              *plVar15 = lVar8 + -1;
              if (lVar8 == 0) goto LAB_00219d54;
LAB_00219cb8:
              pbVar9 = (byte *)plVar15[1];
              plVar15[1] = (long)(pbVar9 + 1);
              uVar5 = (uint)*pbVar9;
            }
            *param_1 = uVar5;
            if (((byte)(&luai_ctype_)[(int)(uVar5 + 1)] >> 4 & 1) == 0) goto LAB_0021a174;
            iVar4 = luaO_hexavalue();
            uVar6 = uVar6 * 0x10 + (long)iVar4;
            iVar3 = iVar3 + 1;
            if (0x10ffff < uVar6) {
                    /* WARNING: Subroutine does not return */
              esccheck_part_0(param_1,"UTF-8 value too large");
            }
          } while( true );
        }
        goto LAB_0021a588;
      }
      if (uVar5 != 0x72) goto LAB_0021a09c;
      uVar5 = 0xd;
    }
    else {
      if (uVar5 != 0x78) {
        if (uVar5 != 0x7a) goto LAB_0021a09c;
        plVar15 = *(long **)(param_1 + 0x10);
        lVar8 = *plVar15;
        *(long *)(*(long *)(param_1 + 0x12) + 8) = *(long *)(*(long *)(param_1 + 0x12) + 8) + -1;
        *plVar15 = lVar8 + -1;
        if (lVar8 == 0) {
          uVar5 = luaZ_fill();
        }
        else {
          pbVar9 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar9 + 1);
          uVar5 = (uint)*pbVar9;
        }
        *param_1 = uVar5;
        if (((byte)(&luai_ctype_)[(int)(uVar5 + 1)] >> 3 & 1) != 0) {
          if (uVar5 == 10 || uVar5 == 0xd) goto LAB_00219e08;
          do {
            plVar15 = *(long **)(param_1 + 0x10);
            lVar8 = *plVar15;
            *plVar15 = lVar8 + -1;
            if (lVar8 == 0) {
              uVar5 = luaZ_fill();
            }
            else {
              pbVar9 = (byte *)plVar15[1];
              plVar15[1] = (long)(pbVar9 + 1);
              uVar5 = (uint)*pbVar9;
            }
            *param_1 = uVar5;
            while( true ) {
              if (((byte)(&luai_ctype_)[(int)(uVar5 + 1)] >> 3 & 1) == 0) goto joined_r0x002194dc;
              if (uVar5 != 10 && uVar5 != 0xd) break;
LAB_00219e08:
              inclinenumber(param_1);
              uVar5 = *param_1;
            }
          } while( true );
        }
        goto joined_r0x002194dc;
      }
      plVar15 = *(long **)(param_1 + 0x12);
      lVar8 = plVar15[1];
      uVar11 = plVar15[2];
      uVar6 = lVar8 + 1;
      if (uVar11 < uVar6) {
        if (0x3ffffffe < uVar11) goto LAB_0021a544;
        lVar17 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
        lVar8 = plVar15[1];
        *plVar15 = lVar17;
        plVar15[2] = uVar11 * 2;
        uVar6 = lVar8 + 1;
      }
      else {
        lVar17 = *plVar15;
      }
      plVar15[1] = uVar6;
      *(undefined *)(lVar17 + lVar8) = 0x78;
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      *param_1 = uVar5;
      if (((byte)(&luai_ctype_)[(int)(uVar5 + 1)] >> 4 & 1) == 0) {
LAB_0021a588:
                    /* WARNING: Subroutine does not return */
        esccheck_part_0(param_1,"hexadecimal digit expected");
      }
      iVar3 = luaO_hexavalue();
      plVar15 = *(long **)(param_1 + 0x12);
      uVar5 = *param_1;
      lVar8 = plVar15[1];
      uVar11 = plVar15[2];
      uVar6 = lVar8 + 1;
      if (uVar11 < uVar6) {
        if (0x3ffffffe < uVar11) goto LAB_0021a544;
        lVar17 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
        lVar8 = plVar15[1];
        *plVar15 = lVar17;
        plVar15[2] = uVar11 * 2;
        uVar6 = lVar8 + 1;
      }
      else {
        lVar17 = *plVar15;
      }
      plVar15[1] = uVar6;
      *(char *)(lVar17 + lVar8) = (char)uVar5;
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) {
        uVar5 = luaZ_fill();
      }
      else {
        pbVar9 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar9 + 1);
        uVar5 = (uint)*pbVar9;
      }
      *param_1 = uVar5;
      if (((byte)(&luai_ctype_)[(int)(uVar5 + 1)] >> 4 & 1) == 0) goto LAB_0021a588;
      iVar4 = luaO_hexavalue();
      uVar5 = iVar3 * 0x10 + iVar4;
      *(long *)(*(long *)(param_1 + 0x12) + 8) = *(long *)(*(long *)(param_1 + 0x12) + 8) + -2;
    }
  }
LAB_0021958c:
  plVar15 = *(long **)(param_1 + 0x10);
  lVar8 = *plVar15;
  *plVar15 = lVar8 + -1;
  uVar14 = uVar5;
joined_r0x00219bb4:
  if (lVar8 == 0) {
    uVar5 = luaZ_fill();
  }
  else {
    pbVar9 = (byte *)plVar15[1];
    plVar15[1] = (long)(pbVar9 + 1);
    uVar5 = (uint)*pbVar9;
  }
  plVar15 = *(long **)(param_1 + 0x12);
  uVar6 = plVar15[1];
  *param_1 = uVar5;
LAB_002195bc:
  uVar11 = plVar15[2];
  lVar8 = uVar6 - 1;
  plVar15[1] = lVar8;
  if (uVar11 < uVar6) {
    if (0x3ffffffe < uVar11) goto LAB_0021a544;
    lVar17 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
    lVar8 = plVar15[1];
    *plVar15 = lVar17;
    plVar15[2] = uVar11 * 2;
    uVar6 = lVar8 + 1;
  }
  else {
    lVar17 = *plVar15;
  }
  plVar15[1] = uVar6;
  *(char *)(lVar17 + lVar8) = (char)uVar14;
  goto LAB_002195dc;
LAB_002195f0:
  plVar15 = *(long **)(param_1 + 0x12);
  lVar8 = plVar15[1];
  uVar11 = plVar15[2];
  uVar6 = lVar8 + 1;
  if (uVar11 < uVar6) {
    if (0x3ffffffe < uVar11) {
LAB_0021a544:
                    /* WARNING: Subroutine does not return */
      lexerror(param_1,"lexical element too long",0);
    }
    lVar17 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
    lVar8 = plVar15[1];
    *plVar15 = lVar17;
    plVar15[2] = uVar11 * 2;
    uVar6 = lVar8 + 1;
  }
  else {
    lVar17 = *plVar15;
  }
  plVar15[1] = uVar6;
  *(char *)(lVar17 + lVar8) = (char)uVar16;
  plVar15 = *(long **)(param_1 + 0x10);
  lVar8 = *plVar15;
  *plVar15 = lVar8 + -1;
  if (lVar8 == 0) {
    uVar16 = luaZ_fill();
  }
  else {
    pbVar9 = (byte *)plVar15[1];
    plVar15[1] = (long)(pbVar9 + 1);
    uVar16 = (uint)*pbVar9;
  }
  lVar12 = *(long *)(param_1 + 0xe);
  lVar8 = **(long **)(param_1 + 0x12);
  lVar17 = (*(long **)(param_1 + 0x12))[1];
  *param_1 = uVar16;
  lVar8 = luaS_newlstr(lVar12,lVar8 + 1,lVar17 + -2);
  plVar15 = *(long **)(lVar12 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x14);
  *(long **)(lVar12 + 0x10) = plVar15 + 2;
  *plVar15 = lVar8;
  *(uint *)(plVar15 + 1) = *(byte *)(lVar8 + 8) | 0x40;
  puVar7 = (undefined4 *)luaH_set(lVar12,uVar10);
  if (puVar7[2] == 0) {
    lVar17 = *(long *)(lVar12 + 0x18);
    *puVar7 = 1;
    puVar7[2] = 1;
    if (0 < *(long *)(lVar17 + 0x18)) {
      luaC_step(lVar12);
    }
  }
  else {
    lVar8 = *(long *)(puVar7 + 4);
  }
  uVar16 = 0x125;
  *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + -0x10;
  *param_2 = lVar8;
  goto LAB_00219428;
LAB_0021a174:
  if (uVar5 != 0x7d) {
                    /* WARNING: Subroutine does not return */
    esccheck_part_0(param_1,"missing \'}\'");
  }
  plVar15 = *(long **)(param_1 + 0x10);
  lVar8 = *plVar15;
  *plVar15 = lVar8 + -1;
  if (lVar8 == 0) {
    uVar5 = luaZ_fill();
  }
  else {
    pbVar9 = (byte *)plVar15[1];
    plVar15[1] = (long)(pbVar9 + 1);
    uVar5 = (uint)*pbVar9;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x12) + 8);
  *param_1 = uVar5;
  *(long *)(*(long *)(param_1 + 0x12) + 8) = lVar8 - iVar3;
  iVar3 = luaO_utf8esc(auStack_10,uVar6);
  if (0 < iVar3) {
    uVar6 = 0;
    do {
      plVar15 = *(long **)(param_1 + 0x12);
      uVar1 = auStack_10[uVar6 + (long)(8 - iVar3)];
      lVar8 = plVar15[1];
      uVar13 = plVar15[2];
      uVar11 = lVar8 + 1;
      if (uVar13 < uVar11) {
        if (0x3ffffffe < uVar13) goto LAB_0021a544;
        lVar17 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15);
        lVar8 = plVar15[1];
        *plVar15 = lVar17;
        uVar11 = lVar8 + 1;
        plVar15[2] = uVar13 * 2;
      }
      else {
        lVar17 = *plVar15;
      }
      plVar15[1] = uVar11;
      *(undefined *)(lVar17 + lVar8) = uVar1;
      bVar2 = iVar3 - 1 != uVar6;
      uVar6 = uVar6 + 1;
    } while (bVar2);
  }
LAB_002195dc:
  uVar5 = *param_1;
  goto joined_r0x002194dc;
LAB_002192c0:
  do {
    plVar15 = *(long **)(param_1 + 0x12);
    lVar8 = plVar15[1];
    uVar11 = plVar15[2];
    uVar6 = lVar8 + 1;
    if (uVar11 < uVar6) {
      if (0x3ffffffe < uVar11) goto LAB_0021a544;
      lVar8 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar11,uVar11 * 2);
      lVar17 = plVar15[1];
      *plVar15 = lVar8;
      plVar15[2] = uVar11 * 2;
      plVar15[1] = lVar17 + 1;
      *(char *)(lVar8 + lVar17) = (char)uVar16;
      plVar15 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar15;
      *plVar15 = lVar8 + -1;
      if (lVar8 == 0) goto LAB_00219a48;
LAB_002192f4:
      pbVar9 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar9 + 1);
      uVar16 = (uint)*pbVar9;
      *param_1 = uVar16;
      if (((&luai_ctype_)[(int)(uVar16 + 1)] & 3) == 0) break;
      goto LAB_002192c0;
    }
    plVar15[1] = uVar6;
    *(char *)(*plVar15 + lVar8) = (char)uVar16;
    plVar15 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar15;
    *plVar15 = lVar8 + -1;
    if (lVar8 != 0) goto LAB_002192f4;
LAB_00219a48:
    uVar16 = luaZ_fill();
    *param_1 = uVar16;
  } while (((&luai_ctype_)[(int)(uVar16 + 1)] & 3) != 0);
  lVar17 = *(long *)(param_1 + 0xe);
  lVar8 = luaS_newlstr(lVar17,**(undefined8 **)(param_1 + 0x12),
                       (*(undefined8 **)(param_1 + 0x12))[1]);
  plVar15 = *(long **)(lVar17 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x14);
  *(long **)(lVar17 + 0x10) = plVar15 + 2;
  *plVar15 = lVar8;
  *(uint *)(plVar15 + 1) = *(byte *)(lVar8 + 8) | 0x40;
  puVar7 = (undefined4 *)luaH_set(lVar17,uVar10);
  if (puVar7[2] == 0) {
    lVar12 = *(long *)(lVar17 + 0x18);
    *puVar7 = 1;
    puVar7[2] = 1;
    if (0 < *(long *)(lVar12 + 0x18)) {
      luaC_step(lVar17);
    }
  }
  else {
    lVar8 = *(long *)(puVar7 + 4);
  }
  uVar16 = 0x124;
  *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + -0x10;
  *param_2 = lVar8;
  if ((*(char *)(lVar8 + 8) == '\x04') &&
     (uVar16 = *(byte *)(lVar8 + 10) + 0x100, *(byte *)(lVar8 + 10) == 0)) {
    uVar16 = 0x124;
  }
LAB_00219428:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return uVar16;
}


