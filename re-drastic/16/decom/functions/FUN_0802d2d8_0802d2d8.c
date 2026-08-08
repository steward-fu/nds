/*
 * Ghidra decompilation
 *
 * Function : FUN_0802d2d8
 * Address  : 0802d2d8
 * Program  : drastic16
 */


void FUN_0802d2d8(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [32];
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int extraout_r1;
  uint extraout_r1_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  
  uVar11 = param_2 + 1 & 0xff;
  uVar7 = *(uint *)(&DAT_080e6840 + param_2 * 4);
  __aeabi_idivmod(0x20,uVar11);
  auVar18 = SIMDExpandImmediate(0,0,4);
  auVar17 = ZEXT816(0);
  uVar9 = uVar7 & *param_1;
  uVar6 = 0;
  uVar10 = uVar9;
  puVar12 = param_1;
  puVar14 = param_1 + 1;
LAB_0802d33c:
  do {
    puVar13 = puVar14;
    uVar15 = 0x802d348;
    __aeabi_uidivmod(uVar6 + (uVar11 - extraout_r1),uVar11);
    if (param_2 != 0) {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar9 << 1;
        uVar10 = uVar10 | uVar9;
      } while (uVar6 < param_2);
    }
    *puVar12 = uVar10;
    uVar1 = uVar10 >> 0x1f;
    if (puVar13 == param_1 + 8) {
      return;
    }
    puVar14 = puVar13 + 1;
    uVar9 = *puVar13 & uVar7 << (extraout_r1_00 & 0xff);
    uVar6 = extraout_r1_00;
    uVar10 = uVar9;
    puVar12 = puVar13;
  } while (extraout_r1_00 == 0);
  bVar16 = extraout_r1_00 >> 2 == 0;
  bVar5 = extraout_r1_00 == 5;
  bVar4 = extraout_r1_00 < 5;
  uVar8 = extraout_r1_00 & 0xfffffffc;
  if ((bVar16 || !bVar4) && (!bVar16 && !bVar5)) {
    uVar15 = 0;
  }
  if (!bVar16 && bVar4 || (bVar16 || bVar5)) {
    uVar15 = 1;
  }
  if ((bVar16 || !bVar4) && (!bVar16 && !bVar5)) goto code_r0x0802d3b8;
  uVar8 = 0;
  goto LAB_0802d400;
code_r0x0802d3b8:
  auVar19 = ZEXT816(0);
  auVar2._4_4_ = uVar1;
  auVar2._0_4_ = uVar1;
  auVar2._8_8_ = 0;
  auVar20._8_8_ = 0x300000002;
  auVar20._0_8_ = 0x100000000;
  do {
    auVar21 = VectorShiftLeft(auVar2 & auVar2 << 0x40,auVar20,4,0);
    uVar15 = uVar15 + 1;
    auVar20 = VectorAdd(auVar20,auVar18,4);
    auVar19 = auVar19 | auVar21;
  } while (uVar15 < extraout_r1_00 >> 2);
  auVar3._16_16_ = auVar17;
  auVar3._0_16_ = auVar19;
  auVar19 = auVar3._8_16_ | auVar19;
  uVar10 = auVar19._4_4_ | auVar19._0_4_ | uVar9;
  if (extraout_r1_00 != uVar8) {
LAB_0802d400:
    uVar10 = uVar10 | uVar1 << (uVar8 & 0xff);
    if (uVar8 + 1 < extraout_r1_00) {
      uVar10 = uVar10 | uVar1 << (uVar8 + 1 & 0xff);
      if (uVar8 + 2 < extraout_r1_00) {
        uVar10 = uVar10 | uVar1 << (uVar8 + 2 & 0xff);
        if (uVar8 + 3 < extraout_r1_00) {
          uVar10 = uVar10 | uVar1 << (uVar8 + 3 & 0xff);
          if (uVar8 + 4 < extraout_r1_00) {
            uVar10 = uVar10 | uVar1 << (uVar8 + 4 & 0xff);
          }
        }
      }
    }
  }
  goto LAB_0802d33c;
}


