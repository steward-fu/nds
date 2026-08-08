/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_palette_alpha_5bpp
 * Address  : 08088de4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void texture_cache_convert_palette_alpha_5bpp
               (texture_cache_element_struct *texture_cache_element,u16 *palette)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 *puVar4;
  u32 *converted_palette;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  
  puVar4 = (undefined8 *)texture_cache_element->palette;
  texture_cache_element->paletted = '\x01';
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)malloc(0x400);
    texture_cache_element->palette = (u32 *)puVar4;
  }
  uVar10 = (uint)palette[4];
  uVar8 = (uint)palette[5];
  uVar7 = (uint)palette[7];
  auVar12._8_8_ = 0x300000002;
  auVar12._0_8_ = 0x100000000;
  uVar8 = ((uVar8 << 0x11) >> 0x1b) << 0x10 | ((uVar8 << 0x16) >> 0x1b) << 8 | uVar8 & 0x1f;
  uVar10 = ((uVar10 << 0x16) >> 0x1b) << 8 | ((uVar10 << 0x11) >> 0x1b) << 0x10 | uVar10 & 0x1f;
  uVar7 = ((uVar7 << 0x11) >> 0x1b) << 0x10 | ((uVar7 << 0x16) >> 0x1b) << 8 | uVar7 & 0x1f;
  iVar11 = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2;
  auVar1._4_4_ = iVar11;
  auVar1._0_4_ = iVar11;
  auVar1._8_8_ = 0;
  iVar11 = (uVar7 + 0x1f1f1f >> 5 & 0x10101) + uVar7 * 2;
  iVar9 = (uVar8 + 0x1f1f1f >> 5 & 0x10101) + uVar8 * 2;
  auVar2._4_4_ = iVar9;
  auVar2._0_4_ = iVar9;
  auVar2._8_8_ = 0;
  auVar3._4_4_ = iVar11;
  auVar3._0_4_ = iVar11;
  auVar3._8_8_ = 0;
  puVar5 = puVar4;
  do {
    auVar14 = SIMDExpandImmediate(0,0,4);
    auVar13 = VectorShiftLeft(auVar12,0x18,0x20,0);
    auVar12 = VectorAdd(auVar12,auVar14,4);
    VectorZip(auVar13 | auVar1 & auVar1 << 0x40,4);
    VectorZip(auVar13 | auVar2 & auVar2 << 0x40,4);
    auVar14 = auVar13 | auVar3 & auVar3 << 0x40;
    auVar17 = VectorZip(auVar13 | ZEXT816(0),4);
    auVar15 = VectorZip(auVar14,4);
    VectorZip(auVar17,4);
    auVar17 = VectorZip(auVar15,4);
    VectorZip(auVar13 | ZEXT816(0),4);
    auVar19 = VectorZip(auVar14,4);
    auVar13 = VectorZip(auVar17,4);
    auVar18 = VectorZip(auVar15,4);
    auVar20 = VectorZip(auVar19,4);
    auVar16 = VectorZip(auVar14,4);
    *puVar5 = auVar13._0_8_;
    puVar5[1] = auVar13._8_8_;
    puVar6 = puVar5 + 0x10;
    puVar5[2] = auVar17._0_8_;
    puVar5[3] = auVar17._8_8_;
    puVar5[4] = auVar18._0_8_;
    puVar5[5] = auVar18._8_8_;
    puVar5[6] = auVar15._0_8_;
    puVar5[7] = auVar15._8_8_;
    puVar5[8] = auVar20._0_8_;
    puVar5[9] = auVar20._8_8_;
    puVar5[10] = auVar19._0_8_;
    puVar5[0xb] = auVar19._8_8_;
    puVar5[0xc] = auVar16._0_8_;
    puVar5[0xd] = auVar16._8_8_;
    puVar5[0xe] = auVar14._0_8_;
    puVar5[0xf] = auVar14._8_8_;
    puVar5 = puVar6;
  } while (puVar4 + 0x80 != puVar6);
  return;
}


