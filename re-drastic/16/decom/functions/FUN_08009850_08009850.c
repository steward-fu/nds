/*
 * Ghidra decompilation
 *
 * Function : FUN_08009850
 * Address  : 08009850
 * Program  : drastic16
 */


uint FUN_08009850(uint *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined auVar2 [32];
  undefined auVar3 [32];
  undefined auVar4 [16];
  undefined (*pauVar5) [16];
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined auVar15 [16];
  
  uVar14 = param_4 + -1 + param_3;
  uVar13 = uVar14 * 0x10000 >> 0x1b;
  uVar9 = (param_3 << 0x10) >> 0x1b;
  uVar8 = (uVar14 >> 0x10) - (param_3 >> 0x10);
  if (uVar8 == 0) {
    if ((*param_1 & -1 << uVar9 & ~(-2 << uVar13)) == 0) {
      return 0;
    }
    if (uVar9 != uVar13) {
      return 1;
    }
    uVar8 = uVar14 * 0x4000000 >> 0x1b;
    uVar9 = (param_3 << 0x1a) >> 0x1b;
    uVar13 = (uVar14 >> 6) - (param_3 >> 6);
    if (uVar13 == 0) {
      return *param_2 & -1 << uVar9 & ~(-2 << uVar8);
    }
    puVar6 = param_2 + 1;
    uVar9 = *param_2 & -1 << uVar9;
    if (uVar13 == 1) goto LAB_08009bb4;
    uVar10 = uVar13 - 1;
    uVar14 = (int)puVar6 * 0x20000000 >> 0x1f & 3;
    if (uVar10 < uVar14) {
      uVar14 = uVar10;
    }
    uVar1 = uVar10;
    if ((uVar10 < 9) || (uVar1 = uVar14, uVar14 != 0)) {
      uVar14 = uVar1;
      puVar7 = param_2 + 2;
      uVar9 = uVar9 | param_2[1];
      if (uVar14 < 2) {
        iVar11 = 2;
      }
      else {
        puVar7 = param_2 + 3;
        uVar9 = uVar9 | param_2[2];
        if (uVar14 < 3) {
          iVar11 = 3;
        }
        else {
          puVar7 = param_2 + 4;
          uVar9 = uVar9 | param_2[3];
          if (uVar14 < 4) {
            iVar11 = 4;
          }
          else {
            puVar7 = param_2 + 5;
            uVar9 = uVar9 | param_2[4];
            if (uVar14 < 5) {
              iVar11 = 5;
            }
            else {
              puVar7 = param_2 + 6;
              uVar9 = uVar9 | param_2[5];
              if (uVar14 < 6) {
                iVar11 = 6;
              }
              else {
                puVar7 = param_2 + 7;
                uVar9 = uVar9 | param_2[6];
                if (uVar14 < 7) {
                  iVar11 = 7;
                }
                else {
                  puVar7 = param_2 + 8;
                  uVar9 = uVar9 | param_2[7];
                  if (uVar14 < 8) {
                    iVar11 = 8;
                  }
                  else {
                    puVar7 = param_2 + 9;
                    iVar11 = 9;
                    uVar9 = uVar9 | param_2[8];
                  }
                }
              }
            }
          }
        }
      }
      if (uVar10 != uVar14) goto LAB_08009b20;
    }
    else {
      iVar11 = 1;
      puVar7 = puVar6;
LAB_08009b20:
      uVar10 = uVar10 - uVar14;
      uVar1 = uVar10 & 0xfffffffc;
      if (uVar1 != 0) {
        auVar15 = ZEXT816(0);
        uVar12 = 0;
        pauVar5 = (undefined (*) [16])(param_2 + uVar14 + 1);
        do {
          uVar12 = uVar12 + 1;
          auVar4 = *pauVar5;
          pauVar5 = pauVar5 + 1;
          auVar15 = auVar15 | auVar4;
        } while (uVar12 < uVar10 >> 2);
        puVar7 = puVar7 + uVar1;
        iVar11 = iVar11 + uVar1;
        auVar3._16_16_ = ZEXT816(0);
        auVar3._0_16_ = auVar15;
        auVar15 = auVar3._8_16_ | auVar15;
        uVar9 = uVar9 | auVar15._4_4_ | auVar15._0_4_;
        if (uVar10 == uVar1) goto LAB_08009bac;
      }
      uVar9 = uVar9 | *puVar7;
      if ((iVar11 + 1U < uVar13) && (uVar9 = uVar9 | puVar7[1], iVar11 + 2U < uVar13)) {
        uVar9 = uVar9 | puVar7[2];
      }
    }
LAB_08009bac:
    puVar6 = puVar6 + uVar13 + 0x3fffffff;
LAB_08009bb4:
    return *puVar6 & ~(-2 << uVar8) | uVar9;
  }
  puVar6 = param_1 + 1;
  uVar9 = *param_1 & -1 << uVar9;
  if (uVar8 == 1) goto LAB_080099e0;
  uVar10 = uVar8 - 1;
  uVar14 = (int)puVar6 * 0x20000000 >> 0x1f & 3;
  if (uVar10 < uVar14) {
    uVar14 = uVar10;
  }
  uVar1 = uVar10;
  if ((uVar10 < 9) || (uVar1 = uVar14, uVar14 != 0)) {
    uVar14 = uVar1;
    puVar7 = param_1 + 2;
    uVar9 = uVar9 | param_1[1];
    if (uVar14 < 2) {
      iVar11 = 2;
    }
    else {
      puVar7 = param_1 + 3;
      uVar9 = uVar9 | param_1[2];
      if (uVar14 < 3) {
        iVar11 = 3;
      }
      else {
        puVar7 = param_1 + 4;
        uVar9 = uVar9 | param_1[3];
        if (uVar14 < 4) {
          iVar11 = 4;
        }
        else {
          puVar7 = param_1 + 5;
          uVar9 = uVar9 | param_1[4];
          if (uVar14 < 5) {
            iVar11 = 5;
          }
          else {
            puVar7 = param_1 + 6;
            uVar9 = uVar9 | param_1[5];
            if (uVar14 < 6) {
              iVar11 = 6;
            }
            else {
              puVar7 = param_1 + 7;
              uVar9 = uVar9 | param_1[6];
              if (uVar14 < 7) {
                iVar11 = 7;
              }
              else {
                puVar7 = param_1 + 8;
                uVar9 = uVar9 | param_1[7];
                if (uVar14 < 8) {
                  iVar11 = 8;
                }
                else {
                  puVar7 = param_1 + 9;
                  iVar11 = 9;
                  uVar9 = uVar9 | param_1[8];
                }
              }
            }
          }
        }
      }
    }
    if (uVar10 != uVar14) goto LAB_0800994c;
  }
  else {
    iVar11 = 1;
    puVar7 = puVar6;
LAB_0800994c:
    uVar10 = uVar10 - uVar14;
    uVar1 = uVar10 & 0xfffffffc;
    if (uVar1 != 0) {
      auVar15 = ZEXT816(0);
      uVar12 = 0;
      pauVar5 = (undefined (*) [16])(param_1 + uVar14 + 1);
      do {
        uVar12 = uVar12 + 1;
        auVar4 = *pauVar5;
        pauVar5 = pauVar5 + 1;
        auVar15 = auVar15 | auVar4;
      } while (uVar12 < uVar10 >> 2);
      puVar7 = puVar7 + uVar1;
      iVar11 = iVar11 + uVar1;
      auVar2._16_16_ = ZEXT816(0);
      auVar2._0_16_ = auVar15;
      auVar15 = auVar2._8_16_ | auVar15;
      uVar9 = uVar9 | auVar15._4_4_ | auVar15._0_4_;
      if (uVar10 == uVar1) goto LAB_080099d8;
    }
    uVar9 = uVar9 | *puVar7;
    if ((iVar11 + 1U < uVar8) && (uVar9 = uVar9 | puVar7[1], iVar11 + 2U < uVar8)) {
      uVar9 = uVar9 | puVar7[2];
    }
  }
LAB_080099d8:
  puVar6 = puVar6 + uVar8 + 0x3fffffff;
LAB_080099e0:
  return *puVar6 & ~(-2 << uVar13) | uVar9;
}


