/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_DecodeToDic
 * Address  : 001b0fc0
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */

bool LzmaDec_DecodeToDic(int *param_1,ulong param_2,undefined *param_3,ulong *param_4,int param_5,
                        undefined4 *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined *__src;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ulong extraout_x15;
  ulong extraout_x15_00;
  int extraout_w18;
  int extraout_w18_00;
  ulong uVar24;
  undefined *puVar25;
  int *piVar26;
  undefined8 *puVar11;
  
  uVar14 = param_1[0x17];
  uVar21 = uVar14 - 1;
  uVar24 = *param_4;
  *param_4 = 0;
  iVar7 = (int)param_2;
  if (0x110 < uVar21) goto LAB_001b10b4;
  uVar20 = (ulong)(uint)param_1[0x13];
  lVar15 = *(long *)(param_1 + 6);
  uVar9 = *(ulong *)(param_1 + 0xc);
  lVar23 = *(long *)(param_1 + 0xe);
  iVar6 = param_1[0x10];
  if (param_2 - uVar9 < (ulong)uVar14) {
    uVar2 = iVar7 - (int)uVar9;
    uVar21 = uVar2 - 1;
    iVar8 = uVar2 + iVar6;
    iVar16 = ((int)uVar9 - iVar7) + uVar14;
    uVar14 = uVar2;
    if ((param_1[0x11] == 0) && ((uint)(param_1[3] - iVar6) <= uVar2)) {
      param_1[0x11] = param_1[3];
    }
LAB_001b1040:
    param_1[0x10] = iVar8;
    param_1[0x17] = iVar16;
    if (uVar14 == 0) {
      *(ulong *)(param_1 + 0xc) = uVar9;
      goto LAB_001b10b4;
    }
  }
  else {
    iVar8 = uVar14 + iVar6;
    if ((param_1[0x11] == 0) && ((uint)(param_1[3] - iVar6) <= uVar14)) {
      iVar16 = 0;
      param_1[0x11] = param_1[3];
      goto LAB_001b1040;
    }
    param_1[0x10] = iVar8;
    param_1[0x17] = 0;
  }
  lVar17 = uVar9 - uVar20;
  uVar12 = uVar9 + 1 + (ulong)uVar21;
  uVar18 = uVar9 + 1;
  while( true ) {
    uVar4 = uVar18;
    if (uVar9 < uVar20) {
      *(undefined *)(lVar15 + uVar9) = *(undefined *)(lVar15 + uVar9 + (lVar23 - uVar20));
    }
    else {
      *(undefined *)(lVar15 + uVar9) = *(undefined *)(lVar15 + lVar17);
    }
    if (uVar12 == uVar4) break;
    lVar17 = lVar17 + 1;
    uVar18 = uVar4 + 1;
    uVar9 = uVar4;
  }
  *(ulong *)(param_1 + 0xc) = uVar12;
LAB_001b10b4:
  *param_6 = 0;
  uVar14 = param_1[0x17];
  do {
    if (uVar14 == 0x112) {
      iVar7 = param_1[0xb];
      if (iVar7 == 0) {
        *param_6 = 1;
        iVar7 = param_1[0xb];
      }
      return iVar7 != 0;
    }
    uVar9 = uVar24;
    __src = param_3;
    if (param_1[0x18] != 0) {
      uVar2 = param_1[0x1b];
      uVar21 = uVar2;
      if (uVar24 == 0) {
LAB_001b1810:
        if (uVar21 < 5) {
          *param_6 = 3;
          return false;
        }
        uVar9 = 0;
      }
      else if (uVar2 < 5) {
        uVar21 = uVar2 + 1;
        param_1[0x1b] = uVar21;
        uVar9 = uVar24 - 1;
        __src = param_3 + 1;
        *(undefined *)((long)param_1 + (ulong)uVar2 + 0x70) = *param_3;
        *param_4 = *param_4 + 1;
        if (uVar9 == 0) goto LAB_001b1810;
        if (uVar21 != 5) {
          uVar9 = (ulong)uVar21;
          uVar21 = uVar2 + 2;
          param_1[0x1b] = uVar21;
          __src = param_3 + 2;
          *(undefined *)((long)param_1 + uVar9 + 0x70) = param_3[1];
          uVar9 = uVar24 - 2;
          *param_4 = *param_4 + 1;
          if (uVar9 == 0) goto LAB_001b1810;
          if (uVar21 != 5) {
            uVar9 = (ulong)uVar21;
            uVar21 = uVar2 + 3;
            param_1[0x1b] = uVar21;
            __src = param_3 + 3;
            *(undefined *)((long)param_1 + uVar9 + 0x70) = param_3[2];
            uVar9 = uVar24 - 3;
            *param_4 = *param_4 + 1;
            if (uVar9 == 0) goto LAB_001b1810;
            if (uVar21 != 5) {
              uVar9 = (ulong)uVar21;
              uVar21 = uVar2 + 4;
              param_1[0x1b] = uVar21;
              __src = param_3 + 4;
              *(undefined *)((long)param_1 + uVar9 + 0x70) = param_3[3];
              uVar9 = uVar24 - 4;
              *param_4 = *param_4 + 1;
              if (uVar9 == 0) goto LAB_001b1810;
              if (uVar21 == 4) {
                param_1[0x1b] = 5;
                uVar9 = uVar24 - 5;
                *(undefined *)(param_1 + 0x1d) = param_3[4];
                __src = param_3 + 5;
                *param_4 = *param_4 + 1;
              }
            }
          }
        }
      }
      if (*(char *)(param_1 + 0x1c) != '\0') {
        return true;
      }
      param_1[0x18] = 0;
      uVar21 = (*(uint *)((long)param_1 + 0x71) & 0xff00ff00) >> 8 |
               (*(uint *)((long)param_1 + 0x71) & 0xff00ff) << 8;
      param_1[10] = -1;
      param_1[0xb] = uVar21 >> 0x10 | uVar21 << 0x10;
      param_1[0x1b] = 0;
    }
    uVar24 = *(ulong *)(param_1 + 0xc);
    if (uVar24 < param_2) {
      bVar1 = false;
      if (param_1[0x19] == 0) goto LAB_001b1100;
LAB_001b1308:
      puVar19 = *(undefined8 **)(param_1 + 4);
      iVar6 = 0x300 << (ulong)(*param_1 + param_1[1] & 0x1f);
      uVar14 = iVar6 + 0x736;
      if (uVar14 != 0) {
        if (iVar6 + 0x735U < 7) {
          uVar21 = 0;
        }
        else {
          puVar10 = puVar19;
          do {
            puVar11 = puVar10 + 2;
            puVar10[1] = 0x400040004000400;
            *puVar10 = 0x400040004000400;
            puVar10 = puVar11;
          } while (puVar19 + (ulong)((uVar14 >> 3) - 1) * 2 + 2 != puVar11);
          uVar21 = uVar14 & 0xfffffff8;
          if ((uVar14 & 7) == 0) goto LAB_001b13cc;
        }
        *(undefined2 *)((long)puVar19 + (ulong)uVar21 * 2) = 0x400;
        if (uVar21 + 1 < uVar14) {
          *(undefined2 *)((long)puVar19 + (ulong)(uVar21 + 1) * 2) = 0x400;
          if (uVar21 + 2 < uVar14) {
            *(undefined2 *)((long)puVar19 + (ulong)(uVar21 + 2) * 2) = 0x400;
            if (uVar21 + 3 < uVar14) {
              *(undefined2 *)((long)puVar19 + (ulong)(uVar21 + 3) * 2) = 0x400;
              if (uVar21 + 4 < uVar14) {
                *(undefined2 *)((long)puVar19 + (ulong)(uVar21 + 4) * 2) = 0x400;
                if (uVar21 + 5 < uVar14) {
                  *(undefined2 *)((long)puVar19 + (ulong)(uVar21 + 5) * 2) = 0x400;
                  if (uVar21 + 6 < uVar14) {
                    *(undefined2 *)((long)puVar19 + (ulong)(uVar21 + 6) * 2) = 0x400;
                  }
                }
              }
            }
          }
        }
      }
LAB_001b13cc:
      uVar21 = param_1[0x1b];
      param_1[0x16] = 1;
      param_1[0x19] = 0;
      *(undefined8 *)(param_1 + 0x14) = 0x100000001;
      *(undefined8 *)(param_1 + 0x12) = 0x100000000;
      if (uVar21 == 0) goto LAB_001b1108;
LAB_001b13ec:
      if (uVar21 < 0x14) {
        uVar20 = 0;
        uVar14 = uVar21;
        if (uVar9 != 0) {
          uVar12 = 1;
          do {
            *(undefined *)((long)param_1 + uVar12 + (ulong)uVar21 + 0x6f) = __src[uVar12 - 1];
            uVar20 = uVar12 & 0xffffffff;
            iVar6 = (int)uVar12;
            uVar14 = uVar21 + iVar6;
            if (uVar12 == (ulong)(0x13 - uVar21) + 1) {
              param_1[0x1b] = uVar14;
              uVar21 = uVar14;
              if ((bVar1 || uVar14 < 0x13) || !bVar1 && uVar14 == 0x13) goto LAB_001b1708;
              goto LAB_001b145c;
            }
            bVar5 = uVar9 != uVar12;
            uVar12 = uVar12 + 1;
          } while (bVar5);
        }
        param_1[0x1b] = uVar14;
        uVar21 = uVar14;
LAB_001b1708:
        iVar6 = (int)uVar20;
        iVar8 = LzmaDec_TryDummy(param_1,param_1 + 0x1c,uVar21);
        if (iVar8 == 0) {
          *param_4 = *param_4 + uVar20;
          *param_6 = 3;
          return false;
        }
        uVar24 = extraout_x15;
        if (extraout_w18 != 0 && iVar8 != 2) {
LAB_001b172c:
          *param_6 = 2;
          return true;
        }
      }
      else {
        param_1[0x1b] = uVar21;
        uVar20 = 0;
        iVar6 = 0;
        if ((bVar1 || uVar21 < 0x13) || !bVar1 && uVar21 == 0x13) goto LAB_001b1708;
      }
LAB_001b145c:
      piVar26 = param_1 + 0x1c;
      *(int **)(param_1 + 8) = piVar26;
      do {
        uVar20 = param_2;
        if ((param_1[0x11] == 0) &&
           (uVar20 = (uint)(param_1[3] - param_1[0x10]) + uVar24,
           param_2 - uVar24 <= (ulong)(uint)(param_1[3] - param_1[0x10]))) {
          uVar20 = param_2;
        }
        iVar8 = LzmaDec_DecodeReal(param_1,uVar20,piVar26);
        if (iVar8 != 0) {
          return (bool)1;
        }
        uVar2 = param_1[3];
        uVar13 = param_1[0x10];
        if (uVar2 <= uVar13) {
          param_1[0x11] = uVar2;
        }
        uVar14 = param_1[0x17];
        uVar24 = *(ulong *)(param_1 + 0xc);
        uVar20 = (ulong)(uVar14 - 1);
        if (uVar14 - 1 < 0x111) {
          lVar15 = *(long *)(param_1 + 6);
          lVar23 = *(long *)(param_1 + 0xe);
          if (param_2 - uVar24 < (ulong)uVar14) {
            uVar3 = iVar7 - (int)uVar24;
            uVar20 = (ulong)(uVar3 - 1);
            iVar8 = uVar13 + uVar3;
            uVar22 = ((int)uVar24 - iVar7) + uVar14;
            uVar14 = uVar3;
            if ((param_1[0x11] == 0) && (uVar2 - uVar13 <= uVar3)) {
LAB_001b1504:
              param_1[0x11] = uVar2;
            }
            param_1[0x10] = iVar8;
            param_1[0x17] = uVar22;
            bVar1 = uVar14 != 0;
            uVar14 = uVar22;
            if (bVar1) goto LAB_001b1518;
          }
          else {
            iVar8 = uVar13 + uVar14;
            if ((param_1[0x11] == 0) && (uVar2 - uVar13 <= uVar14)) {
              uVar22 = 0;
              goto LAB_001b1504;
            }
            param_1[0x10] = iVar8;
            param_1[0x17] = 0;
LAB_001b1518:
            uVar18 = (ulong)(uint)param_1[0x13];
            uVar12 = uVar24 + 1;
            lVar17 = uVar24 - uVar18;
            uVar20 = uVar12 + uVar20;
            if (uVar18 <= uVar24) goto LAB_001b1560;
            while (*(undefined *)(lVar15 + uVar24) =
                        *(undefined *)(lVar15 + uVar24 + (lVar23 - uVar18)), uVar24 = uVar12,
                  uVar20 != uVar12) {
              while( true ) {
                lVar17 = lVar17 + 1;
                uVar12 = uVar24 + 1;
                if (uVar24 < uVar18) break;
LAB_001b1560:
                *(undefined *)(lVar15 + uVar24) = *(undefined *)(lVar15 + lVar17);
                uVar24 = uVar12;
                if (uVar20 == uVar12) goto LAB_001b1578;
              }
            }
LAB_001b1578:
            uVar24 = uVar20;
            uVar14 = param_1[0x17];
          }
          *(ulong *)(param_1 + 0xc) = uVar24;
        }
      } while (((uVar24 < param_2) && (*(int **)(param_1 + 8) < piVar26)) && (uVar14 < 0x112));
      if (0x112 < uVar14) {
        uVar14 = 0x112;
        param_1[0x17] = 0x112;
      }
      uVar24 = (ulong)((iVar6 - uVar21) + ((int)*(int **)(param_1 + 8) - (int)piVar26));
      param_3 = __src + uVar24;
      *param_4 = *param_4 + uVar24;
      param_1[0x1b] = 0;
    }
    else {
      if (uVar14 != 0) {
        if (param_5 == 0) goto LAB_001b17ac;
        goto LAB_001b172c;
      }
      if (param_1[0xb] == 0) {
        *param_6 = 4;
        return false;
      }
      if (param_5 == 0) {
LAB_001b17ac:
        *param_6 = 2;
        return false;
      }
      bVar1 = true;
      if (param_1[0x19] != 0) goto LAB_001b1308;
LAB_001b1100:
      uVar21 = param_1[0x1b];
      if (uVar21 != 0) goto LAB_001b13ec;
LAB_001b1108:
      if ((bVar1 || uVar9 < 0x13) || !bVar1 && uVar9 == 0x13) {
        iVar6 = LzmaDec_TryDummy(param_1,__src,uVar9);
        if (iVar6 == 0) {
          memcpy(param_1 + 0x1c,__src,uVar9);
          uVar24 = *param_4;
          param_1[0x1b] = (int)uVar9;
          *param_4 = uVar24 + uVar9;
          *param_6 = 3;
          return false;
        }
        uVar24 = extraout_x15_00;
        puVar25 = __src;
        if (extraout_w18_00 != 0 && iVar6 != 2) goto LAB_001b172c;
      }
      else {
        puVar25 = __src + (uVar9 - 0x14);
      }
      *(undefined **)(param_1 + 8) = __src;
      do {
        uVar20 = param_2;
        if ((param_1[0x11] == 0) &&
           (uVar20 = (uint)(param_1[3] - param_1[0x10]) + uVar24,
           param_2 - uVar24 <= (ulong)(uint)(param_1[3] - param_1[0x10]))) {
          uVar20 = param_2;
        }
        iVar6 = LzmaDec_DecodeReal(param_1,uVar20,puVar25);
        if (iVar6 != 0) {
          return (bool)1;
        }
        uVar21 = param_1[3];
        uVar2 = param_1[0x10];
        if (uVar21 <= uVar2) {
          param_1[0x11] = uVar21;
        }
        uVar14 = param_1[0x17];
        uVar20 = *(ulong *)(param_1 + 0xc);
        uVar13 = uVar14 - 1;
        uVar24 = uVar20;
        if (uVar13 < 0x111) {
          lVar23 = *(long *)(param_1 + 6);
          lVar15 = *(long *)(param_1 + 0xe);
          if (param_2 - uVar20 < (ulong)uVar14) {
            uVar22 = iVar7 - (int)uVar20;
            iVar6 = uVar2 + uVar22;
            uVar13 = uVar22 - 1;
            uVar14 = uVar14 + ((int)uVar20 - iVar7);
            if ((param_1[0x11] == 0) && (uVar3 = uVar14, uVar21 - uVar2 <= uVar22)) {
LAB_001b12e8:
              uVar14 = uVar3;
              param_1[0x11] = uVar21;
            }
            param_1[0x10] = iVar6;
            param_1[0x17] = uVar14;
            if (uVar22 != 0) goto LAB_001b11cc;
          }
          else {
            iVar6 = uVar2 + uVar14;
            if ((param_1[0x11] == 0) && (uVar21 - uVar2 <= uVar14)) {
              uVar3 = 0;
              uVar22 = uVar14;
              goto LAB_001b12e8;
            }
            param_1[0x10] = iVar6;
            param_1[0x17] = 0;
LAB_001b11cc:
            uVar18 = (ulong)(uint)param_1[0x13];
            lVar17 = uVar20 - uVar18;
            uVar24 = uVar20 + 1 + (ulong)uVar13;
            uVar12 = uVar20 + 1;
            while( true ) {
              uVar4 = uVar12;
              if (uVar20 < uVar18) {
                *(undefined *)(lVar23 + uVar20) =
                     *(undefined *)(lVar23 + uVar20 + (lVar15 - uVar18));
              }
              else {
                *(undefined *)(lVar23 + uVar20) = *(undefined *)(lVar23 + lVar17);
              }
              if (uVar24 == uVar4) break;
              lVar17 = lVar17 + 1;
              uVar12 = uVar4 + 1;
              uVar20 = uVar4;
            }
            uVar14 = param_1[0x17];
          }
          *(ulong *)(param_1 + 0xc) = uVar24;
        }
        param_3 = *(undefined **)(param_1 + 8);
      } while (((uVar24 < param_2) && (param_3 < puVar25)) && (uVar14 < 0x112));
      if (0x112 < uVar14) {
        uVar14 = 0x112;
        param_1[0x17] = 0x112;
      }
      uVar24 = (long)param_3 - (long)__src;
      *param_4 = *param_4 + uVar24;
    }
    uVar24 = uVar9 - uVar24;
  } while( true );
}


