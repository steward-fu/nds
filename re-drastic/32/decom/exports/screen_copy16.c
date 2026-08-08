/*
 * Ghidra decompilation
 *
 * Function : screen_copy16
 * Address  : 080a59d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void screen_copy16(u16 *dest,u32 screen_number)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  uint *puVar8;
  void *_screen_ptr;
  u32 uVar9;
  u32 _screen_pitch;
  u32 uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  u16 *puVar14;
  uint uVar15;
  u32 pixel;
  uint *puVar16;
  int iVar17;
  ushort *puVar18;
  uint *puVar19;
  int iVar20;
  u16 *puVar21;
  u16 *screen_ptr_1;
  u32 *screen_ptr;
  int iVar22;
  int iVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  uint local_64;
  int local_60;
  
  puVar8 = (uint *)get_screen_ptr(screen_number);
  uVar9 = get_screen_pitch(screen_number);
  uVar10 = get_screen_hires_mode(screen_number);
  if (puVar8 == (uint *)0x0) {
    memset(dest,0,0x18000);
    return;
  }
  iVar22 = uVar10 + 1;
  uVar10 = get_screen_bytes_per_pixel();
  if (uVar10 == 2) {
    puVar21 = dest + -1;
    do {
      puVar14 = puVar21 + 0x100;
      puVar16 = puVar8;
      do {
        puVar21 = puVar21 + 1;
        *puVar21 = *(u16 *)puVar16;
        puVar16 = (uint *)((int)puVar16 + iVar22 * 2);
      } while (puVar14 != puVar21);
      puVar8 = (uint *)((int)puVar8 + (uVar9 & 0xfffffffe));
    } while (puVar21 != dest + 0xbfff);
  }
  else {
    iVar1 = iVar22 * 4;
    puVar18 = dest + 0xc000;
    do {
      uVar12 = -((uint)((int)dest << 0x1d) >> 0x1e) & 7;
      local_64 = uVar12;
      if (uVar12 == 0) {
        iVar23 = 0x100;
        uVar15 = 0x20;
        local_60 = 0x100;
        iVar20 = iVar23;
      }
      else {
        uVar15 = *puVar8;
        *dest = (ushort)((uVar15 << 0x18) >> 0x1b) | (ushort)((uVar15 >> 0x13) << 0xb) |
                (ushort)(((uVar15 << 0x10) >> 0x1a) << 5);
        if (uVar12 == 1) {
          iVar23 = 0xff;
        }
        else {
          uVar15 = puVar8[iVar22];
          dest[1] = (ushort)((uVar15 << 0x18) >> 0x1b) | (ushort)((uVar15 >> 0x13) << 0xb) |
                    (ushort)(((uVar15 << 0x10) >> 0x1a) << 5);
          if (uVar12 == 2) {
            iVar23 = 0xfe;
          }
          else {
            uVar15 = puVar8[iVar22 * 2];
            dest[2] = (ushort)((uVar15 << 0x18) >> 0x1b) | (ushort)((uVar15 >> 0x13) << 0xb) |
                      (ushort)(((uVar15 << 0x10) >> 0x1a) << 5);
            if (uVar12 == 3) {
              iVar23 = 0xfd;
            }
            else {
              uVar15 = puVar8[iVar22 * 3];
              dest[3] = (ushort)((uVar15 << 0x18) >> 0x1b) | (ushort)((uVar15 >> 0x13) << 0xb) |
                        (ushort)(((uVar15 << 0x10) >> 0x1a) << 5);
              if (uVar12 == 4) {
                iVar23 = 0xfc;
              }
              else {
                uVar15 = puVar8[iVar22 * 4];
                dest[4] = (ushort)((uVar15 << 0x18) >> 0x1b) | (ushort)((uVar15 >> 0x13) << 0xb) |
                          (ushort)(((uVar15 << 0x10) >> 0x1a) << 5);
                if (uVar12 == 5) {
                  iVar23 = 0xfb;
                }
                else {
                  uVar15 = puVar8[iVar22 * 5];
                  dest[5] = (ushort)((uVar15 << 0x18) >> 0x1b) | (ushort)((uVar15 >> 0x13) << 0xb) |
                            (ushort)(((uVar15 << 0x10) >> 0x1a) << 5);
                  if (uVar12 == 7) {
                    iVar23 = 0xf9;
                    uVar15 = puVar8[iVar22 * 6];
                    dest[6] = (ushort)((uVar15 << 0x18) >> 0x1b) | (ushort)((uVar15 >> 0x13) << 0xb)
                              | (ushort)(((uVar15 << 0x10) >> 0x1a) << 5);
                  }
                  else {
                    iVar23 = 0xfa;
                    local_64 = 6;
                  }
                }
              }
            }
          }
        }
        local_60 = 0x100 - uVar12;
        uVar15 = 0x1f;
        iVar20 = 0xf8;
      }
      auVar6 = SIMDExpandImmediate(0,8,0x1f);
      auVar7 = SIMDExpandImmediate(0,8,0x3f);
      uVar11 = 0;
      puVar19 = (uint *)(uVar12 * iVar1 + (int)puVar8);
      puVar16 = puVar19 + iVar22;
      puVar13 = (undefined8 *)(dest + uVar12);
      do {
        uVar11 = uVar11 + 1;
        puVar2 = puVar19 + iVar22 * 4;
        auVar26._4_4_ = *puVar16;
        auVar26._0_4_ = *puVar19;
        auVar26._8_4_ = puVar19[iVar22 * 2];
        auVar26._12_4_ = puVar16[iVar22 * 2];
        puVar3 = puVar16 + iVar22 * 4;
        puVar4 = puVar16 + iVar22 * 5;
        puVar16 = puVar16 + iVar22 * 8;
        auVar24 = VectorShiftRight(auVar26,3);
        auVar30 = VectorShiftRight(auVar26,0x13);
        auVar29 = VectorShiftRight(auVar26,10);
        puVar5 = puVar19 + iVar22 * 7;
        puVar19 = puVar19 + iVar22 * 8;
        auVar25._4_4_ = *puVar3;
        auVar25._0_4_ = *puVar2;
        auVar25._8_4_ = *puVar4;
        auVar25._12_4_ = *puVar5;
        auVar26 = VectorShiftRight(auVar25,3);
        auVar27 = VectorShiftRight(auVar25,0x13);
        auVar25 = VectorShiftRight(auVar25,10);
        auVar28._0_8_ = VectorCopyNarrow(auVar24,4);
        auVar28._8_8_ = VectorCopyNarrow(auVar26,4);
        auVar24._0_8_ = VectorCopyNarrow(auVar30,4);
        auVar24._8_8_ = VectorCopyNarrow(auVar27,4);
        auVar27._0_8_ = VectorCopyNarrow(auVar29,4);
        auVar27._8_8_ = VectorCopyNarrow(auVar25,4);
        auVar26 = VectorShiftLeft(auVar24,0xb,0x10,0);
        auVar25 = VectorShiftLeft(auVar27 & auVar7,5,0x10,0);
        auVar25 = auVar28 & auVar6 | auVar26 | auVar25;
        *puVar13 = auVar25._0_8_;
        puVar13[1] = auVar25._8_8_;
        puVar13 = puVar13 + 2;
      } while (uVar11 < uVar15);
      iVar17 = local_64 + iVar20;
      iVar23 = iVar23 - iVar20;
      if (local_60 != iVar20) {
        uVar12 = *(uint *)((int)puVar8 + iVar1 * iVar17);
        dest[iVar17] = (ushort)((uVar12 << 0x18) >> 0x1b) | (ushort)((uVar12 >> 0x13) << 0xb) |
                       (ushort)(((uVar12 << 0x10) >> 0x1a) << 5);
        if (iVar23 != 1) {
          iVar20 = iVar1 * iVar17 + iVar1;
          uVar12 = *(uint *)((int)puVar8 + iVar20);
          dest[iVar17 + 1] =
               (ushort)((uVar12 << 0x18) >> 0x1b) | (ushort)((uVar12 >> 0x13) << 0xb) |
               (ushort)(((uVar12 << 0x10) >> 0x1a) << 5);
          if (iVar23 != 2) {
            iVar20 = iVar1 + iVar20;
            uVar12 = *(uint *)((int)puVar8 + iVar20);
            dest[iVar17 + 2] =
                 (ushort)((uVar12 << 0x18) >> 0x1b) | (ushort)((uVar12 >> 0x13) << 0xb) |
                 (ushort)(((uVar12 << 0x10) >> 0x1a) << 5);
            if (iVar23 != 3) {
              iVar20 = iVar1 + iVar20;
              uVar12 = *(uint *)((int)puVar8 + iVar20);
              dest[iVar17 + 3] =
                   (ushort)((uVar12 << 0x18) >> 0x1b) | (ushort)((uVar12 >> 0x13) << 0xb) |
                   (ushort)(((uVar12 << 0x10) >> 0x1a) << 5);
              if (iVar23 != 4) {
                iVar20 = iVar1 + iVar20;
                uVar12 = *(uint *)((int)puVar8 + iVar20);
                dest[iVar17 + 4] =
                     (ushort)((uVar12 << 0x18) >> 0x1b) | (ushort)((uVar12 >> 0x13) << 0xb) |
                     (ushort)(((uVar12 << 0x10) >> 0x1a) << 5);
                if (iVar23 != 5) {
                  iVar20 = iVar1 + iVar20;
                  uVar12 = *(uint *)((int)puVar8 + iVar20);
                  dest[iVar17 + 5] =
                       (ushort)((uVar12 << 0x18) >> 0x1b) | (ushort)((uVar12 >> 0x13) << 0xb) |
                       (ushort)(((uVar12 << 0x10) >> 0x1a) << 5);
                  if (iVar23 != 6) {
                    uVar12 = *(uint *)((int)puVar8 + iVar20 + iVar1);
                    dest[iVar17 + 6] =
                         (ushort)((uVar12 << 0x18) >> 0x1b) | (ushort)((uVar12 >> 0x13) << 0xb) |
                         (ushort)(((uVar12 << 0x10) >> 0x1a) << 5);
                  }
                }
              }
            }
          }
        }
      }
      dest = dest + 0x100;
      puVar8 = (uint *)((int)puVar8 + (uVar9 & 0xfffffffc));
    } while (puVar18 != dest);
  }
  return;
}


