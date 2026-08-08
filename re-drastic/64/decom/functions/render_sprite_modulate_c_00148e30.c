/*
 * Ghidra decompilation
 *
 * Function : render_sprite_modulate_c
 * Address  : 00148e30
 * Program  : drastic64
 */


void render_sprite_modulate_c(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar3 = (uint)param_3 & 0x3f;
  uVar4 = (uint)((ulong)param_3 >> 8) & 0x3f;
  uVar5 = (uint)((ulong)param_3 >> 0x10) & 0x3f;
  uVar7 = (uint)param_4;
  if (uVar7 != 0) {
    bVar1 = (ulong)((param_1 + 0xf) - param_2) < 0x1f;
    if ((bVar1 || uVar7 - 1 < 2) || !bVar1 && uVar7 - 1 == 2) {
      lVar6 = 0;
      do {
        uVar9 = *(uint *)(param_2 + lVar6 * 4);
        uVar10 = uVar9 >> 8 & 0xff;
        uVar11 = uVar9 >> 0x10 & 0xff;
        *(uint *)(param_1 + lVar6 * 4) =
             (uVar4 + uVar10 * uVar4 + uVar10 >> 6) << 8 |
             (uVar5 + uVar11 * uVar5 + uVar11 >> 6) << 0x10 |
             uVar9 & 0xff000000 | uVar3 + (uVar9 & 0xff) * uVar3 + (uVar9 & 0xff) >> 6;
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < uVar7);
      return;
    }
    lVar6 = 0;
    do {
      uVar22 = ((undefined8 *)(param_2 + lVar6))[1];
      uVar21 = *(undefined8 *)(param_2 + lVar6);
      uVar10 = (uint)(byte)((ulong)uVar21 >> 0x20);
      uVar12 = (uint)(byte)((ulong)uVar22 >> 0x20);
      uVar17 = (uint)(byte)((ulong)uVar21 >> 8);
      uVar18 = (uint)(byte)((ulong)uVar21 >> 0x28);
      uVar19 = (uint)(byte)((ulong)uVar22 >> 8);
      uVar20 = (uint)(byte)((ulong)uVar22 >> 0x28);
      uVar13 = (uint)(byte)((ulong)uVar21 >> 0x10);
      uVar14 = (uint)(byte)((ulong)uVar21 >> 0x30);
      uVar15 = (uint)(byte)((ulong)uVar22 >> 0x10);
      uVar16 = (uint)(byte)((ulong)uVar22 >> 0x30);
      uVar9 = uVar3 + (byte)uVar21 * uVar3 + (uint)(byte)uVar21 >> 6;
      uVar10 = uVar3 + uVar10 * uVar3 + uVar10 >> 6;
      uVar11 = uVar3 + (byte)uVar22 * uVar3 + (uint)(byte)uVar22 >> 6;
      uVar12 = uVar3 + uVar12 * uVar3 + uVar12 >> 6;
      uVar17 = uVar4 + uVar17 * uVar4 + uVar17 >> 6;
      uVar18 = uVar4 + uVar18 * uVar4 + uVar18 >> 6;
      uVar19 = uVar4 + uVar19 * uVar4 + uVar19 >> 6;
      uVar20 = uVar4 + uVar20 * uVar4 + uVar20 >> 6;
      uVar13 = uVar5 + uVar13 * uVar5 + uVar13 >> 6;
      uVar14 = uVar5 + uVar14 * uVar5 + uVar14 >> 6;
      uVar15 = uVar5 + uVar15 * uVar5 + uVar15 >> 6;
      uVar16 = uVar5 + uVar16 * uVar5 + uVar16 >> 6;
      ((undefined8 *)(param_1 + lVar6))[1] =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) | (byte)(uVar16 >> 8),
                    CONCAT16((byte)(uVar20 >> 8) | (byte)uVar16,
                             CONCAT15((byte)(uVar12 >> 8) | (byte)uVar20,
                                      CONCAT14((char)uVar12,
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) |
                                                        (byte)(uVar15 >> 8),
                                                        CONCAT12((byte)(uVar19 >> 8) | (byte)uVar15,
                                                                 CONCAT11((byte)(uVar11 >> 8) |
                                                                          (byte)uVar19,(char)uVar11)
                                                                ))))));
      *(undefined8 *)(param_1 + lVar6) =
           CONCAT17((byte)((ulong)uVar21 >> 0x38) | (byte)(uVar14 >> 8),
                    CONCAT16((byte)(uVar18 >> 8) | (byte)uVar14,
                             CONCAT15((byte)(uVar10 >> 8) | (byte)uVar18,
                                      CONCAT14((char)uVar10,
                                               CONCAT13((byte)((ulong)uVar21 >> 0x18) |
                                                        (byte)(uVar13 >> 8),
                                                        CONCAT12((byte)(uVar17 >> 8) | (byte)uVar13,
                                                                 CONCAT11((byte)(uVar9 >> 8) |
                                                                          (byte)uVar17,(char)uVar9))
                                                       )))));
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != ((ulong)((uVar7 >> 2) - 1) + 1) * 0x10);
    uVar8 = param_4 & 0xfffffffc;
    lVar6 = param_1 + uVar8 * 4;
    lVar2 = param_2 + uVar8 * 4;
    if ((param_4 & 3) != 0) {
      uVar9 = *(uint *)(param_2 + uVar8 * 4);
      uVar10 = uVar9 >> 0x10 & 0xff;
      uVar11 = uVar9 >> 8 & 0xff;
      *(uint *)(param_1 + uVar8 * 4) =
           (uVar5 + uVar10 * uVar5 + uVar10 >> 6) << 0x10 |
           (uVar4 + uVar11 * uVar4 + uVar11 >> 6) << 8 |
           uVar9 & 0xff000000 | uVar3 + (uVar9 & 0xff) * uVar3 + (uVar9 & 0xff) >> 6;
      if ((uVar7 & 0xfffffffc) + 1 < uVar7) {
        uVar9 = *(uint *)(lVar2 + 4);
        uVar10 = uVar9 >> 0x10 & 0xff;
        uVar11 = uVar9 >> 8 & 0xff;
        *(uint *)(lVar6 + 4) =
             (uVar5 + uVar10 * uVar5 + uVar10 >> 6) << 0x10 |
             (uVar4 + uVar11 * uVar4 + uVar11 >> 6) << 8 |
             uVar9 & 0xff000000 | uVar3 + (uVar9 & 0xff) * uVar3 + (uVar9 & 0xff) >> 6;
        if ((uVar7 & 0xfffffffc) + 2 < uVar7) {
          uVar7 = *(uint *)(lVar2 + 8);
          uVar9 = uVar7 >> 0x10 & 0xff;
          uVar10 = uVar7 >> 8 & 0xff;
          *(uint *)(lVar6 + 8) =
               (uVar5 + uVar9 * uVar5 + uVar9 >> 6) << 0x10 |
               (uVar4 + uVar10 * uVar4 + uVar10 >> 6) << 8 |
               uVar7 & 0xff000000 | uVar3 + (uVar7 & 0xff) * uVar3 + (uVar7 & 0xff) >> 6;
        }
      }
    }
  }
  return;
}


