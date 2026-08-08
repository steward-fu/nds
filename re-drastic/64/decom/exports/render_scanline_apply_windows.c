/*
 * Ghidra decompilation
 *
 * Function : render_scanline_apply_windows
 * Address  : 0013b650
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */

void render_scanline_apply_windows(long param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar3;
  byte bVar10;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar12;
  byte bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  if ((*(uint *)(param_1 + 0x90) & 0xe000) != 0) {
    if ((param_4 & 1) != 0) {
      *param_2 = *param_2 & (*param_3 ^ 0xffffffff);
      param_2[1] = param_2[1] & (param_3[1] ^ 0xffffffff);
      param_2[2] = param_2[2] & (param_3[2] ^ 0xffffffff);
      param_2[3] = param_2[3] & (param_3[3] ^ 0xffffffff);
      param_2[4] = param_2[4] & (param_3[4] ^ 0xffffffff);
      param_2[5] = param_2[5] & (param_3[5] ^ 0xffffffff);
      param_2[6] = param_2[6] & (param_3[6] ^ 0xffffffff);
      param_2[7] = param_2[7] & (param_3[7] ^ 0xffffffff);
    }
    if ((param_4 >> 1 & 1) != 0) {
      param_2[8] = param_2[8] & (param_3[8] ^ 0xffffffff);
      param_2[9] = param_2[9] & (param_3[9] ^ 0xffffffff);
      param_2[10] = param_2[10] & (param_3[10] ^ 0xffffffff);
      param_2[0xb] = param_2[0xb] & (param_3[0xb] ^ 0xffffffff);
      param_2[0xc] = param_2[0xc] & (param_3[0xc] ^ 0xffffffff);
      param_2[0xd] = param_2[0xd] & (param_3[0xd] ^ 0xffffffff);
      param_2[0xe] = param_2[0xe] & (param_3[0xe] ^ 0xffffffff);
      param_2[0xf] = param_2[0xf] & (param_3[0xf] ^ 0xffffffff);
    }
    if ((param_4 >> 2 & 1) != 0) {
      param_2[0x10] = param_2[0x10] & (param_3[0x10] ^ 0xffffffff);
      param_2[0x11] = param_2[0x11] & (param_3[0x11] ^ 0xffffffff);
      param_2[0x12] = param_2[0x12] & (param_3[0x12] ^ 0xffffffff);
      param_2[0x13] = param_2[0x13] & (param_3[0x13] ^ 0xffffffff);
      param_2[0x14] = param_2[0x14] & (param_3[0x14] ^ 0xffffffff);
      param_2[0x15] = param_2[0x15] & (param_3[0x15] ^ 0xffffffff);
      param_2[0x16] = param_2[0x16] & (param_3[0x16] ^ 0xffffffff);
      param_2[0x17] = param_2[0x17] & (param_3[0x17] ^ 0xffffffff);
    }
    if ((param_4 >> 3 & 1) != 0) {
      param_2[0x18] = param_2[0x18] & (param_3[0x18] ^ 0xffffffff);
      param_2[0x19] = param_2[0x19] & (param_3[0x19] ^ 0xffffffff);
      param_2[0x1a] = param_2[0x1a] & (param_3[0x1a] ^ 0xffffffff);
      param_2[0x1b] = param_2[0x1b] & (param_3[0x1b] ^ 0xffffffff);
      param_2[0x1c] = param_2[0x1c] & (param_3[0x1c] ^ 0xffffffff);
      param_2[0x1d] = param_2[0x1d] & (param_3[0x1d] ^ 0xffffffff);
      param_2[0x1e] = param_2[0x1e] & (param_3[0x1e] ^ 0xffffffff);
      param_2[0x1f] = param_2[0x1f] & (param_3[0x1f] ^ 0xffffffff);
    }
    if ((param_4 >> 4 & 1) != 0) {
      if (param_3 + 0x20 < param_2 + 0x3c && param_2 + 0x20 < param_3 + 0x24) {
        uVar1 = param_3[0x20];
        param_2[0x20] = param_2[0x20] & (uVar1 ^ 0xffffffff);
        param_2[0x28] = param_2[0x28] & (uVar1 ^ 0xffffffff);
        param_2[0x30] = param_2[0x30] & (uVar1 ^ 0xffffffff);
        param_2[0x38] = param_2[0x38] & (uVar1 ^ 0xffffffff);
        uVar1 = param_3[0x21];
        param_2[0x21] = param_2[0x21] & (uVar1 ^ 0xffffffff);
        param_2[0x29] = param_2[0x29] & (uVar1 ^ 0xffffffff);
        param_2[0x31] = param_2[0x31] & (uVar1 ^ 0xffffffff);
        param_2[0x39] = param_2[0x39] & (uVar1 ^ 0xffffffff);
        uVar1 = param_3[0x22];
        param_2[0x22] = param_2[0x22] & (uVar1 ^ 0xffffffff);
        param_2[0x2a] = param_2[0x2a] & (uVar1 ^ 0xffffffff);
        param_2[0x32] = param_2[0x32] & (uVar1 ^ 0xffffffff);
        param_2[0x3a] = param_2[0x3a] & (uVar1 ^ 0xffffffff);
        uVar1 = param_3[0x23];
        param_2[0x23] = param_2[0x23] & (uVar1 ^ 0xffffffff);
        param_2[0x2b] = param_2[0x2b] & (uVar1 ^ 0xffffffff);
        param_2[0x33] = param_2[0x33] & (uVar1 ^ 0xffffffff);
        param_2[0x3b] = param_2[0x3b] & (uVar1 ^ 0xffffffff);
        uVar1 = param_3[0x24];
        param_2[0x24] = param_2[0x24] & (uVar1 ^ 0xffffffff);
        param_2[0x2c] = param_2[0x2c] & (uVar1 ^ 0xffffffff);
        param_2[0x34] = param_2[0x34] & (uVar1 ^ 0xffffffff);
        param_2[0x3c] = param_2[0x3c] & (uVar1 ^ 0xffffffff);
        uVar1 = param_3[0x25];
        param_2[0x25] = param_2[0x25] & (uVar1 ^ 0xffffffff);
        param_2[0x2d] = param_2[0x2d] & (uVar1 ^ 0xffffffff);
        param_2[0x35] = param_2[0x35] & (uVar1 ^ 0xffffffff);
        param_2[0x3d] = param_2[0x3d] & (uVar1 ^ 0xffffffff);
        uVar1 = param_3[0x26];
        param_2[0x26] = param_2[0x26] & (uVar1 ^ 0xffffffff);
        param_2[0x2e] = param_2[0x2e] & (uVar1 ^ 0xffffffff);
        param_2[0x36] = param_2[0x36] & (uVar1 ^ 0xffffffff);
        param_2[0x3e] = param_2[0x3e] & (uVar1 ^ 0xffffffff);
        uVar1 = param_3[0x27];
        param_2[0x27] = param_2[0x27] & (uVar1 ^ 0xffffffff);
        param_2[0x2f] = param_2[0x2f] & (uVar1 ^ 0xffffffff);
        param_2[0x37] = param_2[0x37] & (uVar1 ^ 0xffffffff);
        param_2[0x3f] = param_2[0x3f] & (uVar1 ^ 0xffffffff);
        return;
      }
      uVar12 = *(undefined8 *)(param_3 + 0x22);
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      uVar25 = *(undefined8 *)(param_2 + 0x22);
      uVar24 = *(undefined8 *)(param_2 + 0x20);
      uVar23 = *(undefined8 *)(param_2 + 0x2a);
      uVar22 = *(undefined8 *)(param_2 + 0x28);
      uVar21 = *(undefined8 *)(param_2 + 0x32);
      uVar20 = *(undefined8 *)(param_2 + 0x30);
      uVar27 = *(undefined8 *)(param_2 + 0x3a);
      uVar26 = *(undefined8 *)(param_2 + 0x38);
      bVar2 = (byte)uVar3;
      bVar4 = (byte)((ulong)uVar3 >> 8);
      bVar5 = (byte)((ulong)uVar3 >> 0x10);
      bVar6 = (byte)((ulong)uVar3 >> 0x18);
      bVar7 = (byte)((ulong)uVar3 >> 0x20);
      bVar8 = (byte)((ulong)uVar3 >> 0x28);
      bVar9 = (byte)((ulong)uVar3 >> 0x30);
      bVar10 = (byte)((ulong)uVar3 >> 0x38);
      bVar11 = (byte)uVar12;
      bVar13 = (byte)((ulong)uVar12 >> 8);
      bVar14 = (byte)((ulong)uVar12 >> 0x10);
      bVar15 = (byte)((ulong)uVar12 >> 0x18);
      bVar16 = (byte)((ulong)uVar12 >> 0x20);
      bVar17 = (byte)((ulong)uVar12 >> 0x28);
      bVar18 = (byte)((ulong)uVar12 >> 0x30);
      bVar19 = (byte)((ulong)uVar12 >> 0x38);
      *(ulong *)(param_2 + 0x22) =
           CONCAT17((byte)((ulong)uVar25 >> 0x38) & ~bVar19,
                    CONCAT16((byte)((ulong)uVar25 >> 0x30) & ~bVar18,
                             CONCAT15((byte)((ulong)uVar25 >> 0x28) & ~bVar17,
                                      CONCAT14((byte)((ulong)uVar25 >> 0x20) & ~bVar16,
                                               CONCAT13((byte)((ulong)uVar25 >> 0x18) & ~bVar15,
                                                        CONCAT12((byte)((ulong)uVar25 >> 0x10) &
                                                                 ~bVar14,CONCAT11((byte)((ulong)
                                                  uVar25 >> 8) & ~bVar13,(byte)uVar25 & ~bVar11)))))
                            ));
      *(ulong *)(param_2 + 0x20) =
           CONCAT17((byte)((ulong)uVar24 >> 0x38) & ~bVar10,
                    CONCAT16((byte)((ulong)uVar24 >> 0x30) & ~bVar9,
                             CONCAT15((byte)((ulong)uVar24 >> 0x28) & ~bVar8,
                                      CONCAT14((byte)((ulong)uVar24 >> 0x20) & ~bVar7,
                                               CONCAT13((byte)((ulong)uVar24 >> 0x18) & ~bVar6,
                                                        CONCAT12((byte)((ulong)uVar24 >> 0x10) &
                                                                 ~bVar5,CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) & ~bVar4,(byte)uVar24 & ~bVar2)))))))
      ;
      *(ulong *)(param_2 + 0x2a) =
           CONCAT17((byte)((ulong)uVar23 >> 0x38) & ~bVar19,
                    CONCAT16((byte)((ulong)uVar23 >> 0x30) & ~bVar18,
                             CONCAT15((byte)((ulong)uVar23 >> 0x28) & ~bVar17,
                                      CONCAT14((byte)((ulong)uVar23 >> 0x20) & ~bVar16,
                                               CONCAT13((byte)((ulong)uVar23 >> 0x18) & ~bVar15,
                                                        CONCAT12((byte)((ulong)uVar23 >> 0x10) &
                                                                 ~bVar14,CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) & ~bVar13,(byte)uVar23 & ~bVar11)))))
                            ));
      *(ulong *)(param_2 + 0x28) =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) & ~bVar10,
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) & ~bVar9,
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) & ~bVar8,
                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) & ~bVar7,
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) & ~bVar6,
                                                        CONCAT12((byte)((ulong)uVar22 >> 0x10) &
                                                                 ~bVar5,CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) & ~bVar4,(byte)uVar22 & ~bVar2)))))))
      ;
      *(ulong *)(param_2 + 0x32) =
           CONCAT17((byte)((ulong)uVar21 >> 0x38) & ~bVar19,
                    CONCAT16((byte)((ulong)uVar21 >> 0x30) & ~bVar18,
                             CONCAT15((byte)((ulong)uVar21 >> 0x28) & ~bVar17,
                                      CONCAT14((byte)((ulong)uVar21 >> 0x20) & ~bVar16,
                                               CONCAT13((byte)((ulong)uVar21 >> 0x18) & ~bVar15,
                                                        CONCAT12((byte)((ulong)uVar21 >> 0x10) &
                                                                 ~bVar14,CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) & ~bVar13,(byte)uVar21 & ~bVar11)))))
                            ));
      *(ulong *)(param_2 + 0x30) =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) & ~bVar10,
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) & ~bVar9,
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) & ~bVar8,
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) & ~bVar7,
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) & ~bVar6,
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) &
                                                                 ~bVar5,CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) & ~bVar4,(byte)uVar20 & ~bVar2)))))))
      ;
      *(ulong *)(param_2 + 0x3a) =
           CONCAT17((byte)((ulong)uVar27 >> 0x38) & ~bVar19,
                    CONCAT16((byte)((ulong)uVar27 >> 0x30) & ~bVar18,
                             CONCAT15((byte)((ulong)uVar27 >> 0x28) & ~bVar17,
                                      CONCAT14((byte)((ulong)uVar27 >> 0x20) & ~bVar16,
                                               CONCAT13((byte)((ulong)uVar27 >> 0x18) & ~bVar15,
                                                        CONCAT12((byte)((ulong)uVar27 >> 0x10) &
                                                                 ~bVar14,CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) & ~bVar13,(byte)uVar27 & ~bVar11)))))
                            ));
      *(ulong *)(param_2 + 0x38) =
           CONCAT17((byte)((ulong)uVar26 >> 0x38) & ~bVar10,
                    CONCAT16((byte)((ulong)uVar26 >> 0x30) & ~bVar9,
                             CONCAT15((byte)((ulong)uVar26 >> 0x28) & ~bVar8,
                                      CONCAT14((byte)((ulong)uVar26 >> 0x20) & ~bVar7,
                                               CONCAT13((byte)((ulong)uVar26 >> 0x18) & ~bVar6,
                                                        CONCAT12((byte)((ulong)uVar26 >> 0x10) &
                                                                 ~bVar5,CONCAT11((byte)((ulong)
                                                  uVar26 >> 8) & ~bVar4,(byte)uVar26 & ~bVar2)))))))
      ;
      uVar25 = *(undefined8 *)(param_2 + 0x26);
      uVar24 = *(undefined8 *)(param_2 + 0x24);
      uVar12 = *(undefined8 *)(param_3 + 0x26);
      uVar3 = *(undefined8 *)(param_3 + 0x24);
      uVar23 = *(undefined8 *)(param_2 + 0x2e);
      uVar22 = *(undefined8 *)(param_2 + 0x2c);
      uVar21 = *(undefined8 *)(param_2 + 0x36);
      uVar20 = *(undefined8 *)(param_2 + 0x34);
      uVar27 = *(undefined8 *)(param_2 + 0x3e);
      uVar26 = *(undefined8 *)(param_2 + 0x3c);
      bVar2 = (byte)uVar3;
      bVar4 = (byte)((ulong)uVar3 >> 8);
      bVar5 = (byte)((ulong)uVar3 >> 0x10);
      bVar6 = (byte)((ulong)uVar3 >> 0x18);
      bVar7 = (byte)((ulong)uVar3 >> 0x20);
      bVar8 = (byte)((ulong)uVar3 >> 0x28);
      bVar9 = (byte)((ulong)uVar3 >> 0x30);
      bVar10 = (byte)((ulong)uVar3 >> 0x38);
      bVar11 = (byte)uVar12;
      bVar13 = (byte)((ulong)uVar12 >> 8);
      bVar14 = (byte)((ulong)uVar12 >> 0x10);
      bVar15 = (byte)((ulong)uVar12 >> 0x18);
      bVar16 = (byte)((ulong)uVar12 >> 0x20);
      bVar17 = (byte)((ulong)uVar12 >> 0x28);
      bVar18 = (byte)((ulong)uVar12 >> 0x30);
      bVar19 = (byte)((ulong)uVar12 >> 0x38);
      *(ulong *)(param_2 + 0x26) =
           CONCAT17((byte)((ulong)uVar25 >> 0x38) & ~bVar19,
                    CONCAT16((byte)((ulong)uVar25 >> 0x30) & ~bVar18,
                             CONCAT15((byte)((ulong)uVar25 >> 0x28) & ~bVar17,
                                      CONCAT14((byte)((ulong)uVar25 >> 0x20) & ~bVar16,
                                               CONCAT13((byte)((ulong)uVar25 >> 0x18) & ~bVar15,
                                                        CONCAT12((byte)((ulong)uVar25 >> 0x10) &
                                                                 ~bVar14,CONCAT11((byte)((ulong)
                                                  uVar25 >> 8) & ~bVar13,(byte)uVar25 & ~bVar11)))))
                            ));
      *(ulong *)(param_2 + 0x24) =
           CONCAT17((byte)((ulong)uVar24 >> 0x38) & ~bVar10,
                    CONCAT16((byte)((ulong)uVar24 >> 0x30) & ~bVar9,
                             CONCAT15((byte)((ulong)uVar24 >> 0x28) & ~bVar8,
                                      CONCAT14((byte)((ulong)uVar24 >> 0x20) & ~bVar7,
                                               CONCAT13((byte)((ulong)uVar24 >> 0x18) & ~bVar6,
                                                        CONCAT12((byte)((ulong)uVar24 >> 0x10) &
                                                                 ~bVar5,CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) & ~bVar4,(byte)uVar24 & ~bVar2)))))))
      ;
      *(ulong *)(param_2 + 0x2e) =
           CONCAT17((byte)((ulong)uVar23 >> 0x38) & ~bVar19,
                    CONCAT16((byte)((ulong)uVar23 >> 0x30) & ~bVar18,
                             CONCAT15((byte)((ulong)uVar23 >> 0x28) & ~bVar17,
                                      CONCAT14((byte)((ulong)uVar23 >> 0x20) & ~bVar16,
                                               CONCAT13((byte)((ulong)uVar23 >> 0x18) & ~bVar15,
                                                        CONCAT12((byte)((ulong)uVar23 >> 0x10) &
                                                                 ~bVar14,CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) & ~bVar13,(byte)uVar23 & ~bVar11)))))
                            ));
      *(ulong *)(param_2 + 0x2c) =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) & ~bVar10,
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) & ~bVar9,
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) & ~bVar8,
                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) & ~bVar7,
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) & ~bVar6,
                                                        CONCAT12((byte)((ulong)uVar22 >> 0x10) &
                                                                 ~bVar5,CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) & ~bVar4,(byte)uVar22 & ~bVar2)))))))
      ;
      *(ulong *)(param_2 + 0x36) =
           CONCAT17((byte)((ulong)uVar21 >> 0x38) & ~bVar19,
                    CONCAT16((byte)((ulong)uVar21 >> 0x30) & ~bVar18,
                             CONCAT15((byte)((ulong)uVar21 >> 0x28) & ~bVar17,
                                      CONCAT14((byte)((ulong)uVar21 >> 0x20) & ~bVar16,
                                               CONCAT13((byte)((ulong)uVar21 >> 0x18) & ~bVar15,
                                                        CONCAT12((byte)((ulong)uVar21 >> 0x10) &
                                                                 ~bVar14,CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) & ~bVar13,(byte)uVar21 & ~bVar11)))))
                            ));
      *(ulong *)(param_2 + 0x34) =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) & ~bVar10,
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) & ~bVar9,
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) & ~bVar8,
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) & ~bVar7,
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) & ~bVar6,
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) &
                                                                 ~bVar5,CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) & ~bVar4,(byte)uVar20 & ~bVar2)))))))
      ;
      *(ulong *)(param_2 + 0x3e) =
           CONCAT17((byte)((ulong)uVar27 >> 0x38) & ~bVar19,
                    CONCAT16((byte)((ulong)uVar27 >> 0x30) & ~bVar18,
                             CONCAT15((byte)((ulong)uVar27 >> 0x28) & ~bVar17,
                                      CONCAT14((byte)((ulong)uVar27 >> 0x20) & ~bVar16,
                                               CONCAT13((byte)((ulong)uVar27 >> 0x18) & ~bVar15,
                                                        CONCAT12((byte)((ulong)uVar27 >> 0x10) &
                                                                 ~bVar14,CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) & ~bVar13,(byte)uVar27 & ~bVar11)))))
                            ));
      *(ulong *)(param_2 + 0x3c) =
           CONCAT17((byte)((ulong)uVar26 >> 0x38) & ~bVar10,
                    CONCAT16((byte)((ulong)uVar26 >> 0x30) & ~bVar9,
                             CONCAT15((byte)((ulong)uVar26 >> 0x28) & ~bVar8,
                                      CONCAT14((byte)((ulong)uVar26 >> 0x20) & ~bVar7,
                                               CONCAT13((byte)((ulong)uVar26 >> 0x18) & ~bVar6,
                                                        CONCAT12((byte)((ulong)uVar26 >> 0x10) &
                                                                 ~bVar5,CONCAT11((byte)((ulong)
                                                  uVar26 >> 8) & ~bVar4,(byte)uVar26 & ~bVar2)))))))
      ;
    }
  }
  return;
}


