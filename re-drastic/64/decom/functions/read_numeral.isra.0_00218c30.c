/*
 * Ghidra decompilation
 *
 * Function : read_numeral.isra.0
 * Address  : 00218c30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_numeral_isra_0(uint *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined uVar4;
  long lVar5;
  undefined8 uVar6;
  lconv *plVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  undefined *puVar15;
  uint uVar16;
  undefined4 local_18 [2];
  int local_10;
  long local_8;
  
  plVar12 = *(long **)(param_1 + 0x12);
  uVar16 = *param_1;
  lVar8 = plVar12[1];
  local_8 = ___stack_chk_guard;
  uVar10 = plVar12[2];
  uVar11 = lVar8 + 1;
  uVar4 = (undefined)uVar16;
  if (uVar10 < uVar11) {
    if (0x3ffffffe < uVar10) goto LAB_00219218;
    lVar8 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar10,uVar10 * 2);
    lVar5 = plVar12[1];
    *plVar12 = lVar8;
    plVar12[2] = uVar10 * 2;
    plVar12[1] = lVar5 + 1;
    *(undefined *)(lVar8 + lVar5) = uVar4;
    plVar12 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar12;
    *plVar12 = lVar8 + -1;
    if (lVar8 != 0) goto LAB_00218ca4;
LAB_00219040:
    uVar14 = luaZ_fill();
    plVar13 = *(long **)(param_1 + 0x12);
    lVar8 = plVar13[1];
    uVar11 = plVar13[2];
    *param_1 = uVar14;
  }
  else {
    plVar12[1] = uVar11;
    *(undefined *)(*plVar12 + lVar8) = uVar4;
    plVar12 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar12;
    *plVar12 = lVar8 + -1;
    if (lVar8 == 0) goto LAB_00219040;
LAB_00218ca4:
    pbVar9 = (byte *)plVar12[1];
    plVar13 = *(long **)(param_1 + 0x12);
    plVar12[1] = (long)(pbVar9 + 1);
    bVar1 = *pbVar9;
    uVar14 = (uint)bVar1;
    lVar8 = plVar13[1];
    uVar11 = plVar13[2];
    *param_1 = (uint)bVar1;
  }
  if ((uVar16 == 0x30) && ((uVar14 & 0xffffffdf) == 0x58)) {
    uVar10 = lVar8 + 1;
    if (uVar11 < uVar10) {
      if (0x3ffffffe < uVar11) {
LAB_00219218:
                    /* WARNING: Subroutine does not return */
        lexerror(param_1,"lexical element too long",0);
      }
      lVar5 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar13,uVar11,uVar11 * 2);
      lVar8 = plVar13[1];
      *plVar13 = lVar5;
      plVar13[2] = uVar11 * 2;
      uVar10 = lVar8 + 1;
    }
    else {
      lVar5 = *plVar13;
    }
    plVar13[1] = uVar10;
    *(char *)(lVar5 + lVar8) = (char)uVar14;
    plVar12 = *(long **)(param_1 + 0x10);
    lVar8 = *plVar12;
    *plVar12 = lVar8 + -1;
    if (lVar8 == 0) {
      uVar14 = luaZ_fill();
    }
    else {
      pbVar9 = (byte *)plVar12[1];
      plVar12[1] = (long)(pbVar9 + 1);
      uVar14 = (uint)*pbVar9;
    }
    plVar13 = *(long **)(param_1 + 0x12);
    puVar15 = &UNK_0022bde0;
    uVar16 = 0x50;
    lVar8 = plVar13[1];
    uVar11 = plVar13[2];
    *param_1 = uVar14;
  }
  else {
    puVar15 = &UNK_0022bde8;
    uVar16 = 0x45;
  }
  do {
    uVar10 = lVar8 + 1;
    if ((uVar16 == uVar14) || ((byte)puVar15[1] == uVar14)) {
      if (uVar11 < uVar10) {
        if (0x3ffffffe < uVar11) goto LAB_00219218;
        lVar8 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar13,uVar11,uVar11 * 2);
        lVar5 = plVar13[1];
        *plVar13 = lVar8;
        plVar13[2] = uVar11 * 2;
        plVar13[1] = lVar5 + 1;
        *(char *)(lVar8 + lVar5) = (char)uVar14;
        plVar12 = *(long **)(param_1 + 0x10);
        lVar8 = *plVar12;
        *plVar12 = lVar8 + -1;
        if (lVar8 != 0) goto LAB_00218db4;
LAB_00218ea4:
        uVar14 = luaZ_fill();
      }
      else {
        plVar13[1] = uVar10;
        *(char *)(*plVar13 + lVar8) = (char)uVar14;
        plVar12 = *(long **)(param_1 + 0x10);
        lVar8 = *plVar12;
        *plVar12 = lVar8 + -1;
        if (lVar8 == 0) goto LAB_00218ea4;
LAB_00218db4:
        pbVar9 = (byte *)plVar12[1];
        plVar12[1] = (long)(pbVar9 + 1);
        uVar14 = (uint)*pbVar9;
      }
      plVar13 = *(long **)(param_1 + 0x12);
      lVar8 = plVar13[1];
      uVar11 = plVar13[2];
      *param_1 = uVar14;
      uVar10 = lVar8 + 1;
      if ((uVar14 - 0x2b & 0xfffffffd) == 0) {
        if (uVar11 < uVar10) {
          if (0x3ffffffe < uVar11) goto LAB_00219218;
          lVar8 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar13,uVar11,uVar11 * 2);
          lVar5 = plVar13[1];
          *plVar13 = lVar8;
          plVar13[2] = uVar11 * 2;
          plVar13[1] = lVar5 + 1;
          *(char *)(lVar8 + lVar5) = (char)uVar14;
          plVar12 = *(long **)(param_1 + 0x10);
          lVar8 = *plVar12;
          *plVar12 = lVar8 + -1;
          if (lVar8 != 0) goto LAB_00218e08;
LAB_00218fe8:
          uVar14 = luaZ_fill();
        }
        else {
          plVar13[1] = uVar10;
          *(char *)(*plVar13 + lVar8) = (char)uVar14;
          plVar12 = *(long **)(param_1 + 0x10);
          lVar8 = *plVar12;
          *plVar12 = lVar8 + -1;
          if (lVar8 == 0) goto LAB_00218fe8;
LAB_00218e08:
          pbVar9 = (byte *)plVar12[1];
          plVar12[1] = (long)(pbVar9 + 1);
          uVar14 = (uint)*pbVar9;
        }
        plVar13 = *(long **)(param_1 + 0x12);
        lVar8 = plVar13[1];
        uVar11 = plVar13[2];
        *param_1 = uVar14;
        uVar10 = lVar8 + 1;
      }
    }
    if (((byte)(&luai_ctype_)[(int)(uVar14 + 1)] >> 4 & 1) == 0) {
      if (uVar14 != 0x2e) {
        if (uVar11 < uVar10) {
          if (0x3ffffffe < uVar11) goto LAB_00219218;
          lVar8 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar13,uVar11,uVar11 * 2);
          lVar5 = plVar13[1];
          *plVar13 = lVar8;
          plVar13[2] = uVar11 * 2;
          plVar13[1] = lVar5 + 1;
          *(undefined *)(lVar8 + lVar5) = 0;
          cVar2 = *(char *)(param_1 + 0x1c);
          plVar12 = *(long **)(param_1 + 0x12);
        }
        else {
          plVar13[1] = uVar10;
          *(undefined *)(*plVar13 + lVar8) = 0;
          cVar2 = *(char *)(param_1 + 0x1c);
          plVar12 = *(long **)(param_1 + 0x12);
        }
        if (cVar2 == '.') {
          lVar8 = luaO_str2num(*plVar12,local_18);
        }
        else {
          lVar8 = *plVar12;
          lVar5 = plVar12[1] + -1;
          if (plVar12[1] != 0) {
            do {
              if (*(char *)(lVar8 + lVar5) == '.') {
                *(char *)(lVar8 + lVar5) = cVar2;
              }
              lVar5 = lVar5 + -1;
            } while (lVar5 != -1);
            lVar8 = **(long **)(param_1 + 0x12);
          }
          lVar8 = luaO_str2num(lVar8,local_18);
        }
        if (lVar8 == 0) {
          cVar2 = *(char *)(param_1 + 0x1c);
          plVar7 = localeconv();
          cVar3 = *plVar7->decimal_point;
          *(char *)(param_1 + 0x1c) = cVar3;
          plVar12 = *(long **)(param_1 + 0x12);
          if (cVar2 == cVar3) {
            lVar8 = luaO_str2num(*plVar12,local_18);
          }
          else {
            lVar8 = *plVar12;
            lVar5 = plVar12[1] + -1;
            if (plVar12[1] != 0) {
              do {
                if (*(char *)(lVar8 + lVar5) == cVar2) {
                  *(char *)(lVar8 + lVar5) = cVar3;
                }
                lVar5 = lVar5 + -1;
              } while (lVar5 != -1);
              lVar8 = **(long **)(param_1 + 0x12);
            }
            lVar8 = luaO_str2num(lVar8,local_18);
          }
          if (lVar8 == 0) {
            cVar2 = *(char *)(param_1 + 0x1c);
            if (cVar2 != '.') {
              lVar5 = **(long **)(param_1 + 0x12);
              lVar8 = (*(long **)(param_1 + 0x12))[1];
              while (lVar8 = lVar8 + -1, lVar8 != -1) {
                if (*(char *)(lVar5 + lVar8) == cVar2) {
                  *(undefined *)(lVar5 + lVar8) = 0x2e;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            lexerror(param_1,"malformed number",0x122);
          }
        }
        if (local_10 == 0x13) {
          uVar6 = 0x123;
        }
        else {
          uVar6 = 0x122;
        }
        *param_2 = local_18[0];
        if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar6,local_8 - ___stack_chk_guard,0);
        }
        return;
      }
      if (uVar11 < uVar10) {
        if (0x3ffffffe < uVar11) goto LAB_00219218;
        lVar5 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar13,uVar11,uVar11 * 2);
        lVar8 = plVar13[1];
        *plVar13 = lVar5;
        plVar13[2] = uVar11 * 2;
        uVar10 = lVar8 + 1;
      }
      else {
        lVar5 = *plVar13;
      }
      plVar13[1] = uVar10;
      *(undefined *)(lVar5 + lVar8) = 0x2e;
      plVar12 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar12;
      *plVar12 = lVar8 + -1;
      if (lVar8 == 0) goto LAB_00218d80;
LAB_00218d18:
      pbVar9 = (byte *)plVar12[1];
      plVar12[1] = (long)(pbVar9 + 1);
      uVar14 = (uint)*pbVar9;
    }
    else {
      if (uVar11 < uVar10) {
        if (0x3ffffffe < uVar11) goto LAB_00219218;
        lVar5 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar13,uVar11,uVar11 * 2);
        lVar8 = plVar13[1];
        *plVar13 = lVar5;
        plVar13[2] = uVar11 * 2;
        uVar10 = lVar8 + 1;
      }
      else {
        lVar5 = *plVar13;
      }
      plVar13[1] = uVar10;
      *(char *)(lVar5 + lVar8) = (char)uVar14;
      plVar12 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar12;
      *plVar12 = lVar8 + -1;
      if (lVar8 != 0) goto LAB_00218d18;
LAB_00218d80:
      uVar14 = luaZ_fill();
    }
    plVar13 = *(long **)(param_1 + 0x12);
    *param_1 = uVar14;
    lVar8 = plVar13[1];
    uVar11 = plVar13[2];
  } while( true );
}


