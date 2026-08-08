/*
 * Ghidra decompilation
 *
 * Function : render_scanline_apply_mosaic_visibility
 * Address  : 00136670
 * Program  : drastic64
 */


void render_scanline_apply_mosaic_visibility(uint *param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar1 = param_2 + 1 & 0xff;
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = 0x20 / uVar1;
  }
  puVar12 = param_1 + 7;
  uVar2 = *(uint *)(mosaic_masks_11557 + (ulong)param_2 * 4);
  uVar9 = uVar2 & *param_1;
  uVar10 = 0;
  uVar7 = uVar9;
LAB_001366b8:
  do {
    uVar10 = (uVar1 - (0x20 - uVar4 * uVar1)) + uVar10;
    uVar8 = 0;
    if (uVar1 != 0) {
      uVar8 = uVar10 / uVar1;
    }
    uVar10 = uVar10 - uVar8 * uVar1;
    if (param_2 != 0) {
      uVar8 = 0;
      do {
        uVar9 = uVar9 * 2;
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 | uVar9;
      } while (param_2 != uVar8);
    }
    *param_1 = uVar7;
    uVar8 = uVar7 >> 0x1f;
    if (puVar12 == param_1) {
      return;
    }
    param_1 = param_1 + 1;
    uVar9 = uVar2 << (ulong)(uVar10 & 0x1f) & *param_1;
    uVar7 = uVar9;
  } while (uVar10 == 0);
  if (8 < uVar10 - 1) goto code_r0x00136710;
  uVar11 = 0;
  goto LAB_00136768;
code_r0x00136710:
  bVar15 = 0;
  bVar16 = 0;
  bVar17 = 0;
  bVar18 = 0;
  bVar19 = 0;
  bVar20 = 0;
  bVar21 = 0;
  bVar22 = 0;
  bVar23 = 0;
  bVar24 = 0;
  bVar25 = 0;
  bVar26 = 0;
  bVar27 = 0;
  bVar28 = 0;
  bVar29 = 0;
  bVar30 = 0;
  uVar32 = 0x300000002;
  uVar31 = 0x100000000;
  uVar7 = 0;
  do {
    auVar13._8_8_ = uVar32;
    auVar13._0_8_ = uVar31;
    uVar7 = uVar7 + 1;
    uVar31 = CONCAT44((int)((ulong)uVar31 >> 0x20) + 4,(int)uVar31 + 4);
    uVar32 = CONCAT44((int)((ulong)uVar32 >> 0x20) + 4,(int)uVar32 + 4);
    auVar14._4_4_ = uVar8;
    auVar14._0_4_ = uVar8;
    auVar14._8_4_ = uVar8;
    auVar14._12_4_ = uVar8;
    auVar14 = NEON_sshl(auVar14,auVar13,4);
    bVar15 = bVar15 | auVar14[0];
    bVar16 = bVar16 | auVar14[1];
    bVar17 = bVar17 | auVar14[2];
    bVar18 = bVar18 | auVar14[3];
    bVar19 = bVar19 | auVar14[4];
    bVar20 = bVar20 | auVar14[5];
    bVar21 = bVar21 | auVar14[6];
    bVar22 = bVar22 | auVar14[7];
    bVar23 = bVar23 | auVar14[8];
    bVar24 = bVar24 | auVar14[9];
    bVar25 = bVar25 | auVar14[10];
    bVar26 = bVar26 | auVar14[11];
    bVar27 = bVar27 | auVar14[12];
    bVar28 = bVar28 | auVar14[13];
    bVar29 = bVar29 | auVar14[14];
    bVar30 = bVar30 | auVar14[15];
  } while (uVar7 != uVar10 >> 2);
  auVar5[1] = bVar16;
  auVar5[0] = bVar15;
  auVar5[2] = bVar17;
  auVar5[3] = bVar18;
  auVar5[4] = bVar19;
  auVar5[5] = bVar20;
  auVar5[6] = bVar21;
  auVar5[7] = bVar22;
  auVar5[8] = bVar23;
  auVar5[9] = bVar24;
  auVar5[10] = bVar25;
  auVar5[11] = bVar26;
  auVar5[12] = bVar27;
  auVar5[13] = bVar28;
  auVar5[14] = bVar29;
  auVar5[15] = bVar30;
  auVar14 = NEON_ext(auVar5,ZEXT816(0),8,1);
  uVar11 = uVar10 & 0xfffffffc;
  bVar15 = bVar15 | auVar14[0];
  bVar16 = bVar16 | auVar14[1];
  bVar17 = bVar17 | auVar14[2];
  bVar18 = bVar18 | auVar14[3];
  auVar6[1] = bVar16;
  auVar6[0] = bVar15;
  auVar6[2] = bVar17;
  auVar6[3] = bVar18;
  auVar6[4] = bVar19 | auVar14[4];
  auVar6[5] = bVar20 | auVar14[5];
  auVar6[6] = bVar21 | auVar14[6];
  auVar6[7] = bVar22 | auVar14[7];
  auVar6[8] = bVar23 | auVar14[8];
  auVar6[9] = bVar24 | auVar14[9];
  auVar6[10] = bVar25 | auVar14[10];
  auVar6[11] = bVar26 | auVar14[11];
  auVar6[12] = bVar27 | auVar14[12];
  auVar6[13] = bVar28 | auVar14[13];
  auVar6[14] = bVar29 | auVar14[14];
  auVar6[15] = bVar30 | auVar14[15];
  auVar14 = NEON_ext(auVar6,ZEXT816(0),4,1);
  uVar7 = CONCAT13(bVar18 | auVar14[3],
                   CONCAT12(bVar17 | auVar14[2],CONCAT11(bVar16 | auVar14[1],bVar15 | auVar14[0])))
          | uVar9;
  if ((uVar10 & 3) != 0) {
LAB_00136768:
    uVar7 = uVar7 | uVar8 << (ulong)(uVar11 & 0x1f);
    if (uVar11 + 1 < uVar10) {
      uVar7 = uVar7 | uVar8 << (ulong)(uVar11 + 1 & 0x1f);
      if (uVar11 + 2 < uVar10) {
        uVar7 = uVar7 | uVar8 << (ulong)(uVar11 + 2 & 0x1f);
        if (uVar11 + 3 < uVar10) {
          uVar7 = uVar7 | uVar8 << (ulong)(uVar11 + 3 & 0x1f);
          if (uVar11 + 4 < uVar10) {
            uVar7 = uVar7 | uVar8 << (ulong)(uVar11 + 4 & 0x1f);
            if (uVar11 + 5 < uVar10) {
              uVar7 = uVar7 | uVar8 << (ulong)(uVar11 + 5 & 0x1f);
              if (uVar11 + 6 < uVar10) {
                uVar7 = uVar7 | uVar8 << (ulong)(uVar11 + 6 & 0x1f);
                if (uVar11 + 7 < uVar10) {
                  uVar3 = uVar7 | uVar8 << (ulong)(uVar11 + 7 & 0x1f);
                  uVar7 = uVar3 | uVar8 << (ulong)(uVar11 + 8 & 0x1f);
                  if (uVar10 <= uVar11 + 8) {
                    uVar7 = uVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_001366b8;
}


