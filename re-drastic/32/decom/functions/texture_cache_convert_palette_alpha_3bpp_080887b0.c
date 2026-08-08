/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_palette_alpha_3bpp
 * Address  : 080887b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void texture_cache_convert_palette_alpha_3bpp
               (texture_cache_element_struct *texture_cache_element,u16 *palette)

{
  uint uVar1;
  undefined auVar2 [16];
  u32 *puVar3;
  u32 *converted_palette;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  int iVar10;
  uint uVar11;
  uint uVar12;
  u32 *puVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  int local_70;
  
  puVar3 = texture_cache_element->palette;
  texture_cache_element->paletted = '\x01';
  if (puVar3 == (u32 *)0x0) {
    puVar3 = (u32 *)malloc(0x400);
    texture_cache_element->palette = puVar3;
  }
  uVar12 = 0;
  do {
    uVar7 = ((int)puVar3 << 0x1d) >> 0x1f & 3;
    uVar1 = (uVar12 * 4 + (uVar12 >> 1)) * 0x1000000;
    uVar11 = uVar7;
    if (uVar7 == 0) {
      iVar5 = 0x20;
      iVar10 = 4;
      local_70 = 0x20;
      iVar8 = iVar5;
      puVar13 = puVar3;
    }
    else {
      uVar4 = (uint)*palette;
      uVar4 = ((uVar4 << 0x11) >> 0x1b) << 0x10 | ((uVar4 << 0x16) >> 0x1b) << 8 | uVar4 & 0x1f;
      puVar13 = puVar3 + 1;
      *puVar3 = (uVar4 + 0x1f1f1f >> 5 & 0x10101) + uVar4 * 2 | uVar1;
      if (uVar7 == 1) {
        iVar5 = 0x1f;
      }
      else {
        uVar4 = (uint)palette[1];
        puVar13 = puVar3 + 2;
        uVar4 = ((uVar4 << 0x11) >> 0x1b) << 0x10 | ((uVar4 << 0x16) >> 0x1b) << 8 | uVar4 & 0x1f;
        puVar3[1] = (uVar4 + 0x1f1f1f >> 5 & 0x10101) + uVar4 * 2 | uVar1;
        if (uVar7 == 3) {
          uVar4 = (uint)palette[2];
          puVar13 = puVar3 + 3;
          iVar5 = 0x1d;
          uVar4 = ((uVar4 << 0x11) >> 0x1b) << 0x10 | ((uVar4 << 0x16) >> 0x1b) << 8 | uVar4 & 0x1f;
          puVar3[2] = (uVar4 + 0x1f1f1f >> 5 & 0x10101) + uVar4 * 2 | uVar1;
        }
        else {
          iVar5 = 0x1e;
          uVar11 = 2;
        }
      }
      local_70 = 0x20 - uVar7;
      iVar8 = 0x18;
      iVar10 = 3;
    }
    pauVar9 = (undefined (*) [16])(palette + uVar7);
    auVar19 = SIMDExpandImmediate(0,8,0x1f);
    auVar25 = SIMDExpandImmediate(0,0,0x1f);
    auVar2._4_4_ = uVar1;
    auVar2._0_4_ = uVar1;
    auVar2._8_8_ = 0;
    auVar2 = auVar2 & auVar2 << 0x40;
    auVar18 = *pauVar9;
    puVar6 = (undefined8 *)(puVar3 + uVar7);
    auVar16 = pauVar9[1];
    auVar15 = pauVar9[2];
    auVar27 = VectorCopyLong(auVar18._0_8_,2,1);
    auVar17 = VectorCopyLong(auVar18._8_8_,2,1);
    auVar21 = VectorCopyLong(auVar16._0_8_,2,1);
    auVar26 = VectorCopyLong(auVar16._8_8_,2,1);
    auVar14 = VectorShiftRight(auVar27,5);
    auVar28 = VectorShiftRight(auVar27,10);
    auVar27 = VectorShiftRight(auVar17,5);
    auVar17 = VectorShiftRight(auVar17,10);
    auVar22 = VectorCopyLong(auVar15._0_8_,2,1);
    auVar20 = VectorCopyLong(auVar15._8_8_,2,1);
    auVar14 = VectorShiftLeft(auVar14 & auVar25,8,0x20,0);
    auVar29 = VectorShiftLeft(auVar28 & auVar25,0x10,0x20,0);
    auVar23 = VectorShiftLeft(auVar27 & auVar25,8,0x20,0);
    auVar28 = VectorShiftLeft(auVar17 & auVar25,0x10,0x20,0);
    auVar17 = VectorCopyLong(SUB168(auVar18 & auVar19,0),2,1);
    auVar27 = VectorCopyLong(SUB168(auVar18 & auVar19,8),2,1);
    auVar24 = VectorShiftRight(auVar21,5);
    auVar21 = VectorShiftRight(auVar21,10);
    auVar17 = auVar14 | auVar29 | auVar17;
    auVar27 = auVar23 | auVar28 | auVar27;
    auVar29 = VectorShiftRight(auVar26,5);
    auVar28._8_8_ = 0x1f1f1f001f1f1f;
    auVar28._0_8_ = 0x1f1f1f001f1f1f;
    auVar18 = VectorAdd(auVar17,auVar28,4);
    auVar26 = VectorShiftRight(auVar26,10);
    auVar17 = VectorAdd(auVar17,auVar17,4);
    auVar23 = VectorShiftLeft(auVar24 & auVar25,8,0x20,0);
    auVar21 = VectorShiftLeft(auVar21 & auVar25,0x10,0x20,0);
    auVar14 = VectorShiftRight(auVar18,5);
    auVar24 = VectorShiftRight(auVar22,5);
    auVar18._8_8_ = 0x1010100010101;
    auVar18._0_8_ = 0x1010100010101;
    auVar28 = VectorShiftRight(auVar22,10);
    auVar29 = VectorShiftLeft(auVar29 & auVar25,8,0x20,0);
    auVar26 = VectorShiftLeft(auVar26 & auVar25,0x10,0x20,0);
    auVar30 = VectorAdd(auVar14 & auVar18,auVar17,4);
    auVar14 = VectorShiftRight(auVar20,5);
    auVar17 = VectorShiftRight(auVar20,10);
    auVar20._8_8_ = 0x1f1f1f001f1f1f;
    auVar20._0_8_ = 0x1f1f1f001f1f1f;
    auVar20 = VectorAdd(auVar27,auVar20,4);
    auVar22 = VectorShiftLeft(auVar24 & auVar25,8,0x20,0);
    auVar18 = VectorAdd(auVar27,auVar27,4);
    auVar27 = VectorShiftLeft(auVar28 & auVar25,0x10,0x20,0);
    *puVar6 = SUB168(auVar30 | auVar2,0);
    puVar6[1] = SUB168(auVar30 | auVar2,8);
    auVar17 = VectorShiftLeft(auVar17 & auVar25,0x10,0x20,0);
    auVar30 = VectorShiftLeft(auVar14 & auVar25,8,0x20,0);
    auVar14 = VectorCopyLong(SUB168(auVar15 & auVar19,0),2,1);
    auVar24 = VectorShiftRight(auVar20,5);
    auVar20 = VectorCopyLong(SUB168(auVar15 & auVar19,8),2,1);
    auVar28 = VectorCopyLong(SUB168(auVar16 & auVar19,0),2,1);
    auVar15 = VectorCopyLong(SUB168(auVar16 & auVar19,8),2,1);
    auVar14 = auVar22 | auVar27 | auVar14;
    auVar16._8_8_ = 0x1010100010101;
    auVar16._0_8_ = 0x1010100010101;
    auVar28 = auVar23 | auVar21 | auVar28;
    auVar20 = auVar30 | auVar17 | auVar20;
    auVar15 = auVar29 | auVar26 | auVar15;
    auVar21._8_8_ = 0x1f1f1f001f1f1f;
    auVar21._0_8_ = 0x1f1f1f001f1f1f;
    auVar21 = VectorAdd(auVar14,auVar21,4);
    auVar17 = VectorAdd(auVar24 & auVar16,auVar18,4);
    auVar27 = VectorAdd(auVar14,auVar14,4);
    auVar22._8_8_ = 0x1f1f1f001f1f1f;
    auVar22._0_8_ = 0x1f1f1f001f1f1f;
    auVar14 = VectorAdd(auVar28,auVar22,4);
    auVar23._8_8_ = 0x1f1f1f001f1f1f;
    auVar23._0_8_ = 0x1f1f1f001f1f1f;
    auVar22 = VectorAdd(auVar20,auVar23,4);
    auVar24._8_8_ = 0x1f1f1f001f1f1f;
    auVar24._0_8_ = 0x1f1f1f001f1f1f;
    auVar18 = VectorAdd(auVar15,auVar24,4);
    auVar23 = VectorShiftRight(auVar21,5);
    auVar21 = VectorAdd(auVar20,auVar20,4);
    auVar28 = VectorAdd(auVar28,auVar28,4);
    auVar16 = VectorAdd(auVar15,auVar15,4);
    auVar20 = VectorShiftRight(auVar14,5);
    auVar18 = VectorShiftRight(auVar18,5);
    auVar15._8_8_ = 0x1010100010101;
    auVar15._0_8_ = 0x1010100010101;
    auVar22 = VectorShiftRight(auVar22,5);
    puVar6[2] = SUB168(auVar17 | auVar2,0);
    puVar6[3] = SUB168(auVar17 | auVar2,8);
    auVar14._8_8_ = 0x1010100010101;
    auVar14._0_8_ = 0x1010100010101;
    auVar17._8_8_ = 0x1010100010101;
    auVar17._0_8_ = 0x1010100010101;
    auVar23 = VectorAdd(auVar23 & auVar15,auVar27,4);
    auVar27._8_8_ = 0x1010100010101;
    auVar27._0_8_ = 0x1010100010101;
    auVar15 = VectorAdd(auVar20 & auVar14,auVar28,4);
    auVar18 = VectorAdd(auVar18 & auVar17,auVar16,4);
    auVar16 = VectorAdd(auVar22 & auVar27,auVar21,4);
    puVar6[4] = SUB168(auVar15 | auVar2,0);
    puVar6[5] = SUB168(auVar15 | auVar2,8);
    puVar6[6] = SUB168(auVar18 | auVar2,0);
    puVar6[7] = SUB168(auVar18 | auVar2,8);
    puVar6[8] = SUB168(auVar23 | auVar2,0);
    puVar6[9] = SUB168(auVar23 | auVar2,8);
    puVar6[10] = SUB168(auVar16 | auVar2,0);
    puVar6[0xb] = SUB168(auVar16 | auVar2,8);
    if (iVar10 == 4) {
      auVar18 = pauVar9[3];
      auVar15 = VectorCopyLong(auVar18._0_8_,2,1);
      auVar14 = VectorCopyLong(auVar18._8_8_,2,1);
      auVar16 = VectorShiftRight(auVar15,5);
      auVar15 = VectorShiftRight(auVar15,10);
      auVar28 = VectorShiftRight(auVar14,5);
      auVar17 = VectorShiftRight(auVar14,10);
      auVar27 = VectorCopyLong(SUB168(auVar18 & auVar19,0),2,1);
      auVar14 = VectorCopyLong(SUB168(auVar18 & auVar19,8),2,1);
      auVar19 = VectorShiftLeft(auVar16 & auVar25,8,0x20,0);
      auVar18 = VectorShiftLeft(auVar15 & auVar25,0x10,0x20,0);
      auVar16 = VectorShiftLeft(auVar28 & auVar25,8,0x20,0);
      auVar25 = VectorShiftLeft(auVar17 & auVar25,0x10,0x20,0);
      auVar27 = auVar19 | auVar18 | auVar27;
      auVar14 = auVar16 | auVar25 | auVar14;
      auVar29._8_8_ = 0x1f1f1f001f1f1f;
      auVar29._0_8_ = 0x1f1f1f001f1f1f;
      auVar25 = VectorAdd(auVar27,auVar29,4);
      auVar15 = VectorAdd(auVar27,auVar27,4);
      auVar26._8_8_ = 0x1f1f1f001f1f1f;
      auVar26._0_8_ = 0x1f1f1f001f1f1f;
      auVar19 = VectorAdd(auVar14,auVar26,4);
      auVar18 = VectorAdd(auVar14,auVar14,4);
      auVar14 = VectorShiftRight(auVar25,5);
      auVar16 = VectorShiftRight(auVar19,5);
      auVar19._8_8_ = 0x1010100010101;
      auVar19._0_8_ = 0x1010100010101;
      auVar25._8_8_ = 0x1010100010101;
      auVar25._0_8_ = 0x1010100010101;
      auVar15 = VectorAdd(auVar14 & auVar19,auVar15,4);
      auVar19 = VectorAdd(auVar16 & auVar25,auVar18,4);
      puVar6[0xc] = SUB168(auVar15 | auVar2,0);
      puVar6[0xd] = SUB168(auVar15 | auVar2,8);
      puVar6[0xe] = SUB168(auVar19 | auVar2,0);
      puVar6[0xf] = SUB168(auVar19 | auVar2,8);
    }
    iVar5 = iVar5 - iVar8;
    iVar10 = uVar11 + iVar8;
    if (local_70 != iVar8) {
      uVar11 = (uint)palette[iVar10];
      uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 | uVar11 & 0x1f;
      puVar13[iVar8] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | uVar1;
      if (iVar5 != 1) {
        uVar11 = (uint)palette[iVar10 + 1];
        uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                 uVar11 & 0x1f;
        puVar13[iVar8 + 1] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | uVar1;
        if (iVar5 != 2) {
          uVar11 = (uint)palette[iVar10 + 2];
          uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                   uVar11 & 0x1f;
          puVar13[iVar8 + 2] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | uVar1;
          if (iVar5 != 3) {
            uVar11 = (uint)palette[iVar10 + 3];
            uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                     uVar11 & 0x1f;
            puVar13[iVar8 + 3] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | uVar1;
            if (iVar5 != 4) {
              uVar11 = (uint)palette[iVar10 + 4];
              uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                       uVar11 & 0x1f;
              puVar13[iVar8 + 4] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | uVar1;
              if (iVar5 != 5) {
                uVar11 = (uint)palette[iVar10 + 5];
                uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                         uVar11 & 0x1f;
                puVar13[iVar8 + 5] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | uVar1;
                if (iVar5 != 6) {
                  uVar11 = (uint)palette[iVar10 + 6];
                  uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                           uVar11 & 0x1f;
                  puVar13[iVar8 + 6] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | uVar1;
                }
              }
            }
          }
        }
      }
    }
    uVar12 = uVar12 + 1;
    puVar3 = puVar3 + 0x20;
  } while (uVar12 != 8);
  return;
}


