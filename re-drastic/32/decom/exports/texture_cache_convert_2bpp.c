/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_2bpp
 * Address  : 080890a8
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

void texture_cache_convert_2bpp(u8 *texture_dest,u8 *texture_source,u32 texture_size)

{
  byte bVar1;
  int iVar2;
  u8 *puVar3;
  byte *pbVar4;
  u32 current_pixel_block;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  byte *pbVar5;
  
  iVar2 = __stack_chk_guard;
  if (texture_size != 0) {
    if (0xf < texture_size &&
        (texture_source + texture_size <= texture_dest ||
        texture_dest + texture_size * 4 <= texture_source)) {
      SIMDExpandImmediate(0,0xe,3);
      auVar13 = VectorCopyLong(SUB168(*(undefined (*) [16])texture_source,0),1,1);
      auVar11 = VectorCopyLong(SUB168(*(undefined (*) [16])texture_source,8),1,1);
      auVar15 = VectorCopyLong(auVar13._0_8_,2,1);
      auVar16 = VectorCopyLong(auVar11._0_8_,2,1);
      auVar14 = VectorCopyLong(auVar13._8_8_,2,1);
      auVar12 = VectorCopyLong(auVar11._8_8_,2,1);
      auVar9 = VectorShiftRight(auVar15,2);
      auVar8 = VectorShiftRight(auVar16,2);
      auVar13 = VectorShiftRight(auVar14,2);
      auVar11 = VectorShiftRight(auVar12,2);
      uVar6 = VectorCopyNarrow(auVar9,4);
      uVar7 = VectorCopyNarrow(auVar13,4);
      auVar10 = VectorShiftRight(auVar15,4);
      auVar8._0_8_ = VectorCopyNarrow(auVar8,4);
      auVar8._8_8_ = VectorCopyNarrow(auVar11,4);
      auVar9 = VectorShiftRight(auVar16,4);
      auVar11._8_8_ = uVar7;
      auVar11._0_8_ = uVar6;
      VectorCopyNarrow(auVar11,2);
      VectorCopyNarrow(auVar8,2);
      auVar13 = VectorShiftRight(auVar14,4);
      auVar15 = VectorShiftRight(auVar15,6);
      auVar11 = VectorShiftRight(auVar12,4);
      auVar14 = VectorShiftRight(auVar14,6);
      uVar6 = VectorCopyNarrow(auVar10,4);
      uVar7 = VectorCopyNarrow(auVar13,4);
      auVar16 = VectorShiftRight(auVar16,6);
      auVar8 = VectorShiftRight(auVar12,6);
      auVar9._0_8_ = VectorCopyNarrow(auVar9,4);
      auVar9._8_8_ = VectorCopyNarrow(auVar11,4);
      auVar13._8_8_ = uVar7;
      auVar13._0_8_ = uVar6;
      VectorCopyNarrow(auVar13,2);
      VectorCopyNarrow(auVar9,2);
      auVar10._0_8_ = VectorCopyNarrow(auVar15,4);
      auVar10._8_8_ = VectorCopyNarrow(auVar14,4);
      auVar12._0_8_ = VectorCopyNarrow(auVar16,4);
      auVar12._8_8_ = VectorCopyNarrow(auVar8,4);
      VectorCopyNarrow(auVar10,2);
      VectorCopyNarrow(auVar12,2);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    puVar3 = texture_dest + 4;
    pbVar5 = texture_source;
    do {
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar5;
      puVar3[-4] = bVar1 & 3;
      puVar3[-3] = (byte)(((uint)bVar1 << 0x1c) >> 0x1e);
      puVar3[-2] = (byte)(((uint)bVar1 << 0x1a) >> 0x1e);
      puVar3[-1] = bVar1 >> 6;
      puVar3 = puVar3 + 4;
      pbVar5 = pbVar4;
    } while (pbVar4 != texture_source + texture_size);
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


