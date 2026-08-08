/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj_set_visibility_128
 * Address  : 080bbe0c
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */
/* Local variable shift_low:u32[r3:4] conflicts with parameter, skipped. */

void render_scanline_obj_set_visibility_128
               (u16 *obj_pixels,u32 *obj_visibility,s32 left_offset,u32 width)

{
  int iVar1;
  uint uVar2;
  u32 shift_n;
  uint uVar3;
  u8 *obj_visibility8;
  uint uVar4;
  u32 uVar5;
  uint uVar6;
  u32 uVar7;
  u32 uVar8;
  byte *pbVar9;
  u16 *puVar10;
  u16 *puVar11;
  undefined8 uVar12;
  ulonglong in_d17;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong in_d19;
  
  iVar1 = __stack_chk_guard;
  if (obj_pixels + 0x80 <= obj_visibility || obj_visibility + 4 <= obj_pixels) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  pbVar9 = (byte *)((int)obj_visibility + -1);
  puVar10 = obj_pixels + 8;
  do {
    puVar11 = puVar10 + 8;
    uVar3 = (*(uint *)(puVar10 + -6) & 0x80008000) >> 0xd |
            (*(uint *)(puVar10 + -8) & 0x80008000) >> 0xf |
            (*(uint *)(puVar10 + -4) & 0x80008000) >> 0xb |
            (*(uint *)(puVar10 + -2) & 0x80008000) >> 9;
    pbVar9 = pbVar9 + 1;
    *pbVar9 = (byte)uVar3 | (byte)(uVar3 >> 0xf);
    puVar10 = puVar11;
  } while (puVar11 != obj_pixels + 0x88);
  if (width != 0x80) {
    uVar12 = SIMDExpandImmediate(0,0xe,0xff);
    uVar12 = VectorShiftLeft(uVar12,in_d17 & 0xffffffffffff0000 |
                                    (ulonglong)-(0x80 - width) & 0xffff,8,1);
    obj_visibility[2] = (uint)uVar12 & obj_visibility[2];
    obj_visibility[3] = (uint)((ulonglong)uVar12 >> 0x20) & obj_visibility[3];
  }
  if (left_offset < 0) {
    uVar6 = obj_visibility[1];
    uVar3 = -left_offset;
    *(undefined8 *)(obj_visibility + 4) = 0;
    *(undefined8 *)(obj_visibility + 6) = 0;
    uVar14 = VectorShiftLeft(*(undefined8 *)(obj_visibility + 2),
                             in_d19 & 0xffffffffffff0000 | (ulonglong)(left_offset + 0x40) & 0xffff,
                             8,1);
    *obj_visibility =
         *obj_visibility >> (uVar3 & 0xff) | uVar6 << (left_offset + 0x20U & 0xff) |
         uVar6 >> (uVar3 - 0x20 & 0xff) | (uint)uVar14;
    obj_visibility[1] = uVar6 >> (uVar3 & 0xff) | (uint)(uVar14 >> 0x20);
    uVar12 = VectorShiftLeft(*(undefined8 *)(obj_visibility + 2),
                             uVar14 & 0xffffffffffff0000 | (ulonglong)(uint)left_offset & 0xffff,8,1
                            );
    *(undefined8 *)(obj_visibility + 2) = uVar12;
  }
  else if (left_offset == 0) {
    *(undefined8 *)(obj_visibility + 4) = 0;
    *(undefined8 *)(obj_visibility + 6) = 0;
  }
  else {
    uVar4 = left_offset & 0x3f;
    uVar13 = *(undefined8 *)obj_visibility;
    uVar12 = *(undefined8 *)(obj_visibility + 2);
    uVar2 = -uVar4 + 0x40;
    obj_visibility[6] = 0;
    obj_visibility[7] = 0;
    uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
    uVar14 = VectorShiftLeft(uVar12,in_d19 & 0xffffffffffff0000 | (ulonglong)uVar4,8,1);
    uVar3 = (uint)uVar14 |
            (uint)uVar13 >> (uVar2 & 0xff) | uVar6 << (0x20 - uVar2 & 0xff) |
            uVar6 >> (-uVar4 + 0x20 & 0xff);
    uVar6 = (uint)(uVar14 >> 0x20) | uVar6 >> (uVar2 & 0xff);
    obj_visibility[2] = uVar3;
    obj_visibility[3] = uVar6;
    uVar12 = VectorShiftLeft(uVar12,uVar14 & 0xffffffffffff0000 | (ulonglong)-uVar2 & 0xffff,8,1);
    *(undefined8 *)(obj_visibility + 4) = uVar12;
    uVar13 = VectorShiftLeft(uVar13,uVar14 & 0xffffffffffff0000 | (ulonglong)uVar4,8,1);
    *(undefined8 *)obj_visibility = uVar13;
    uVar7 = (u32)((ulonglong)uVar13 >> 0x20);
    uVar5 = (u32)uVar13;
    uVar8 = uVar7;
    if ((left_offset & 0x40U) != 0) {
      *obj_visibility = 0;
      obj_visibility[1] = 0;
      obj_visibility[4] = uVar3;
      obj_visibility[5] = uVar6;
      uVar5 = 0;
      uVar8 = 0;
      *(undefined8 *)(obj_visibility + 2) = uVar13;
      *(undefined8 *)(obj_visibility + 6) = uVar12;
      uVar3 = (u32)uVar13;
      uVar6 = uVar7;
    }
    if ((left_offset & 0x80U) != 0) {
      *(undefined8 *)obj_visibility = 0;
      *(undefined8 *)(obj_visibility + 2) = 0;
      obj_visibility[4] = uVar5;
      obj_visibility[5] = uVar8;
      obj_visibility[6] = uVar3;
      obj_visibility[7] = uVar6;
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


