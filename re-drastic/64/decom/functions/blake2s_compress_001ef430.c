/*
 * Ghidra decompilation
 *
 * Function : blake2s_compress
 * Address  : 001ef430
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x001ef874) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* blake2s_compress(blake2s_state*, unsigned char const*) */

void blake2s_compress(blake2s_state *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint3 uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulong uVar21;
  ulong *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_8;
  
  puVar22 = *(ulong **)(param_1 + 0xf8);
  puVar19 = (undefined8 *)&blake2s_sigma;
  uVar17 = (*(uint **)(param_1 + 0x100))[1] ^ 0x9b05688c;
  uVar15 = **(uint **)(param_1 + 0x100) ^ 0x510e527f;
  uVar12 = CONCAT12(param_2[4],CONCAT11(param_2[4],*param_2)) & 0xff00ff;
  uVar21 = *puVar22;
  uStack_48 = puVar22[1];
  local_50 = uVar21;
  uVar25 = 0xa54ff53a;
  uVar24 = 0xbb67ae85;
  uVar13 = puVar22[2];
  local_40 = uVar13;
  local_38 = puVar22[3];
  local_50._4_4_ = (uint)(uVar21 >> 0x20);
  uVar18 = **(uint **)(param_1 + 0x108) ^ 0x1f83d9ab;
  uStack_48._4_4_ = (uint)(uStack_48 >> 0x20);
  uVar16 = local_38 & 0xffffffff;
  local_40._4_4_ = (uint)(uVar13 >> 0x20);
  uVar13 = uVar13 & 0xffffffff;
  local_38._4_4_ = (uint)(local_38 >> 0x20);
  local_8 = ___stack_chk_guard;
  uVar23 = 0x3c6ef372;
  uVar14 = (*(uint **)(param_1 + 0x108))[1] ^ 0x5be0cd19;
  uVar20 = 0x6a09e667;
  uStack_88 = CONCAT44((uint)param_2[0xe] * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0xd] * 0x100 + (ushort)param_2[0xc]) +
                       (uint)param_2[0xf] * 0x1000000,
                       (uint)param_2[10] * 0x10000 +
                       (uint)(ushort)((ushort)param_2[9] * 0x100 + (ushort)param_2[8]) +
                       (uint)param_2[0xb] * 0x1000000);
  local_90 = CONCAT44((uint)param_2[6] * 0x10000 +
                      (uint)(ushort)((ushort)param_2[5] * 0x100 + (ushort)(byte)(uVar12 >> 0x10)) +
                      (uint)param_2[7] * 0x1000000,
                      (uint)CONCAT12(param_2[6],(ushort)param_2[2]) * 0x10000 +
                      (uint)(ushort)((ushort)param_2[1] * 0x100 + (short)uVar12) +
                      (uint)param_2[3] * 0x1000000);
  uStack_78 = CONCAT44((uint)param_2[0x1e] * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0x1d] * 0x100 + (ushort)param_2[0x1c]) +
                       (uint)param_2[0x1f] * 0x1000000,
                       (uint)param_2[0x1a] * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0x19] * 0x100 + (ushort)param_2[0x18]) +
                       (uint)param_2[0x1b] * 0x1000000);
  uStack_80 = CONCAT44((uint)param_2[0x16] * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0x15] * 0x100 + (ushort)param_2[0x14]) +
                       (uint)param_2[0x17] * 0x1000000,
                       (uint)CONCAT12(param_2[0x16],(ushort)param_2[0x12]) * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0x11] * 0x100 + (ushort)param_2[0x10]) +
                       (uint)CONCAT12(param_2[0x17],(ushort)param_2[0x13]) * 0x1000000);
  uStack_68 = CONCAT44((uint)param_2[0x2e] * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0x2d] * 0x100 + (ushort)param_2[0x2c]) +
                       (uint)param_2[0x2f] * 0x1000000,
                       (uint)param_2[0x2a] * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0x29] * 0x100 + (ushort)param_2[0x28]) +
                       (uint)param_2[0x2b] * 0x1000000);
  local_70 = CONCAT44((uint)param_2[0x26] * 0x10000 +
                      (uint)(ushort)((ushort)param_2[0x25] * 0x100 + (ushort)param_2[0x24]) +
                      (uint)param_2[0x27] * 0x1000000,
                      (uint)CONCAT12(param_2[0x26],(ushort)param_2[0x22]) * 0x10000 +
                      (uint)(ushort)((ushort)param_2[0x21] * 0x100 + (ushort)param_2[0x20]) +
                      (uint)CONCAT12(param_2[0x27],(ushort)param_2[0x23]) * 0x1000000);
  uStack_58 = CONCAT44((uint)param_2[0x3e] * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0x3d] * 0x100 + (ushort)param_2[0x3c]) +
                       (uint)param_2[0x3f] * 0x1000000,
                       (uint)param_2[0x3a] * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0x39] * 0x100 + (ushort)param_2[0x38]) +
                       (uint)param_2[0x3b] * 0x1000000);
  uStack_60 = CONCAT44((uint)param_2[0x36] * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0x35] * 0x100 + (ushort)param_2[0x34]) +
                       (uint)param_2[0x37] * 0x1000000,
                       (uint)CONCAT12(param_2[0x36],(ushort)param_2[0x32]) * 0x10000 +
                       (uint)(ushort)((ushort)param_2[0x31] * 0x100 + (ushort)param_2[0x30]) +
                       (uint)CONCAT12(param_2[0x37],(ushort)param_2[0x33]) * 0x1000000);
  do {
    uVar1 = (uint)uVar13 + *(int *)((long)&local_90 + (ulong)*(byte *)puVar19 * 4) + (int)uVar21;
    uStack_48._4_4_ =
         local_38._4_4_ + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 6) * 4) +
         uStack_48._4_4_;
    uStack_48._0_4_ =
         (uint)uVar16 + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 4) * 4) +
         (uint)uStack_48;
    local_50._4_4_ =
         local_40._4_4_ + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 2) * 4) +
         local_50._4_4_;
    uVar15 = uVar1 ^ uVar15;
    uVar14 = uStack_48._4_4_ ^ uVar14;
    uVar18 = (uint)uStack_48 ^ uVar18;
    uVar17 = local_50._4_4_ ^ uVar17;
    uVar2 = uVar15 >> 0x10 | uVar15 << 0x10;
    uVar3 = uVar14 >> 0x10 | uVar14 << 0x10;
    uVar4 = uVar18 >> 0x10 | uVar18 << 0x10;
    uVar5 = uVar17 >> 0x10 | uVar17 << 0x10;
    uVar20 = uVar20 + uVar2;
    uVar25 = uVar3 + uVar25;
    uVar23 = uVar23 + uVar4;
    uVar24 = uVar24 + uVar5;
    uVar15 = uVar20 ^ (uint)uVar13;
    local_38._4_4_ = uVar25 ^ local_38._4_4_;
    uVar14 = uVar23 ^ (uint)uVar16;
    local_40._4_4_ = uVar24 ^ local_40._4_4_;
    uVar6 = uVar15 >> 0xc | uVar15 << 0x14;
    uVar7 = local_38._4_4_ >> 0xc | local_38._4_4_ << 0x14;
    uVar8 = uVar14 >> 0xc | uVar14 << 0x14;
    uVar9 = local_40._4_4_ >> 0xc | local_40._4_4_ << 0x14;
    uVar15 = uVar1 + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 1) * 4) + uVar6;
    uVar14 = uStack_48._4_4_ + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 7) * 4) +
             uVar7;
    uVar18 = (uint)uStack_48 + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 5) * 4) +
             uVar8;
    uVar17 = local_50._4_4_ + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 3) * 4) +
             uVar9;
    uVar2 = uVar15 ^ uVar2;
    uVar3 = uVar14 ^ uVar3;
    uVar4 = uVar18 ^ uVar4;
    uVar5 = uVar17 ^ uVar5;
    uVar10 = uVar2 >> 8 | uVar2 << 0x18;
    uVar3 = uVar3 >> 8 | uVar3 << 0x18;
    uVar1 = uVar4 >> 8 | uVar4 << 0x18;
    uVar2 = uVar5 >> 8 | uVar5 << 0x18;
    uVar20 = uVar20 + uVar10;
    uVar25 = uVar25 + uVar3;
    uVar23 = uVar23 + uVar1;
    uVar24 = uVar24 + uVar2;
    uVar6 = uVar20 ^ uVar6;
    uVar7 = uVar25 ^ uVar7;
    uVar8 = uVar23 ^ uVar8;
    uVar9 = uVar24 ^ uVar9;
    uVar5 = uVar6 >> 7 | uVar6 << 0x19;
    uVar4 = uVar7 >> 7 | uVar7 << 0x19;
    uVar7 = uVar8 >> 7 | uVar8 << 0x19;
    uVar6 = uVar9 >> 7 | uVar9 << 0x19;
    uVar14 = uVar14 + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 0xe) * 4) + uVar5;
    uVar18 = uVar18 + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 0xc) * 4) + uVar4;
    uVar15 = uVar15 + *(int *)((long)&local_90 + (ulong)*(byte *)(puVar19 + 1) * 4) + uVar6;
    uVar17 = uVar17 + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 10) * 4) + uVar7;
    uVar1 = uVar14 ^ uVar1;
    uVar2 = uVar18 ^ uVar2;
    uVar3 = uVar15 ^ uVar3;
    uVar10 = uVar17 ^ uVar10;
    uVar8 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar9 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar20 = uVar20 + uVar9;
    uVar24 = uVar24 + uVar8;
    uVar23 = uVar23 + uVar2;
    uVar25 = uVar25 + uVar3;
    uVar4 = uVar20 ^ uVar4;
    uVar5 = uVar24 ^ uVar5;
    uVar6 = uVar23 ^ uVar6;
    uVar7 = uVar25 ^ uVar7;
    uVar10 = uVar4 >> 0xc | uVar4 << 0x14;
    uVar4 = uVar5 >> 0xc | uVar5 << 0x14;
    uVar5 = uVar6 >> 0xc | uVar6 << 0x14;
    uVar6 = uVar7 >> 0xc | uVar7 << 0x14;
    uStack_48._4_4_ =
         uVar14 + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 0xf) * 4) + uVar4;
    uVar1 = uVar15 + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 9) * 4) + uVar5;
    uVar21 = (ulong)uVar1;
    uStack_48._0_4_ =
         uVar18 + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 0xd) * 4) + uVar10;
    local_50._4_4_ =
         uVar17 + *(int *)((long)&local_90 + (ulong)*(byte *)((long)puVar19 + 0xb) * 4) + uVar6;
    uVar8 = uStack_48._4_4_ ^ uVar8;
    uVar2 = uVar1 ^ uVar2;
    uVar9 = (uint)uStack_48 ^ uVar9;
    uVar3 = local_50._4_4_ ^ uVar3;
    uVar18 = uVar8 >> 8 | uVar8 << 0x18;
    uVar14 = uVar2 >> 8 | uVar2 << 0x18;
    uVar17 = uVar9 >> 8 | uVar9 << 0x18;
    uVar15 = uVar3 >> 8 | uVar3 << 0x18;
    uVar24 = uVar24 + uVar18;
    uVar23 = uVar23 + uVar14;
    uVar20 = uVar20 + uVar17;
    uVar25 = uVar25 + uVar15;
    uVar4 = uVar24 ^ uVar4;
    uVar5 = uVar23 ^ uVar5;
    uVar10 = uVar20 ^ uVar10;
    uVar6 = uVar25 ^ uVar6;
    puVar19 = puVar19 + 2;
    uVar7 = uVar4 >> 7;
    uVar11 = uVar7 | uVar4 << 0x19;
    uVar13 = (ulong)uVar11;
    uVar4 = uVar5 >> 7;
    local_40._4_4_ = uVar4 | uVar5 << 0x19;
    uVar5 = uVar10 >> 7;
    local_38._4_4_ = uVar5 | uVar10 << 0x19;
    uVar10 = uVar6 >> 7;
    uVar6 = uVar10 | uVar6 << 0x19;
    uVar16 = (ulong)uVar6;
  } while (puVar19 != &blake2s_IV);
  uVar26 = puVar22[1];
  uVar21 = *puVar22;
  uVar16 = puVar22[3];
  uVar13 = puVar22[2];
  puVar22[1] = CONCAT17((byte)(uVar25 >> 0x18) ^ (byte)(uStack_48._4_4_ >> 0x18) ^
                        (byte)(uVar26 >> 0x38),
                        CONCAT16((byte)(uVar25 >> 0x10) ^ (byte)(uStack_48._4_4_ >> 0x10) ^
                                 (byte)(uVar26 >> 0x30),
                                 CONCAT15((byte)(uVar25 >> 8) ^ (byte)(uStack_48._4_4_ >> 8) ^
                                          (byte)(uVar26 >> 0x28),
                                          CONCAT14((byte)uVar25 ^ (byte)uStack_48._4_4_ ^
                                                   (byte)(uVar26 >> 0x20),
                                                   CONCAT13((byte)(uVar23 >> 0x18) ^
                                                            (byte)((uint)uStack_48 >> 0x18) ^
                                                            (byte)(uVar26 >> 0x18),
                                                            CONCAT12((byte)(uVar23 >> 0x10) ^
                                                                     (byte)((uint)uStack_48 >> 0x10)
                                                                     ^ (byte)(uVar26 >> 0x10),
                                                                     CONCAT11((byte)(uVar23 >> 8) ^
                                                                              (byte)((uint)uStack_48
                                                                                    >> 8) ^
                                                                              (byte)(uVar26 >> 8),
                                                                              (byte)uVar23 ^
                                                                              (byte)(uint)uStack_48
                                                                              ^ (byte)uVar26)))))));
  *puVar22 = CONCAT17((byte)(uVar24 >> 0x18) ^ (byte)(local_50._4_4_ >> 0x18) ^
                      (byte)(uVar21 >> 0x38),
                      CONCAT16((byte)(uVar24 >> 0x10) ^ (byte)(local_50._4_4_ >> 0x10) ^
                               (byte)(uVar21 >> 0x30),
                               CONCAT15((byte)(uVar24 >> 8) ^ (byte)(local_50._4_4_ >> 8) ^
                                        (byte)(uVar21 >> 0x28),
                                        CONCAT14((byte)uVar24 ^ (byte)local_50._4_4_ ^
                                                 (byte)(uVar21 >> 0x20),
                                                 CONCAT13((byte)(uVar20 >> 0x18) ^
                                                          (byte)(uVar1 >> 0x18) ^
                                                          (byte)(uVar21 >> 0x18),
                                                          CONCAT12((byte)(uVar20 >> 0x10) ^
                                                                   (byte)(uVar1 >> 0x10) ^
                                                                   (byte)(uVar21 >> 0x10),
                                                                   CONCAT11((byte)(uVar20 >> 8) ^
                                                                            (byte)(uVar1 >> 8) ^
                                                                            (byte)(uVar21 >> 8),
                                                                            (byte)uVar20 ^
                                                                            (byte)uVar1 ^
                                                                            (byte)uVar21)))))));
  puVar22[3] = CONCAT17((byte)(uVar16 >> 0x38) ^ (byte)(local_38._4_4_ >> 0x18) ^ (byte)uVar2,
                        CONCAT16((byte)(uVar16 >> 0x30) ^
                                 (byte)(uVar5 >> 0x10) ^ (byte)(uVar2 >> 0x18),
                                 CONCAT15((byte)(uVar16 >> 0x28) ^
                                          (byte)(uVar5 >> 8) ^ (byte)(uVar2 >> 0x10),
                                          CONCAT14((byte)(uVar16 >> 0x20) ^
                                                   (byte)uVar5 ^ (byte)(uVar2 >> 8),
                                                   CONCAT13((byte)(uVar16 >> 0x18) ^
                                                            (byte)(uVar6 >> 0x18) ^ (byte)uVar8,
                                                            CONCAT12((byte)(uVar16 >> 0x10) ^
                                                                     (byte)(uVar10 >> 0x10) ^
                                                                     (byte)(uVar8 >> 0x18),
                                                                     CONCAT11((byte)(uVar16 >> 8) ^
                                                                              (byte)(uVar10 >> 8) ^
                                                                              (byte)(uVar8 >> 0x10),
                                                                              (byte)uVar16 ^
                                                                              (byte)uVar10 ^
                                                                              (byte)(uVar8 >> 8)))))
                                         )));
  puVar22[2] = CONCAT17((byte)(uVar13 >> 0x38) ^ (byte)(local_40._4_4_ >> 0x18) ^ (byte)uVar9,
                        CONCAT16((byte)(uVar13 >> 0x30) ^
                                 (byte)(uVar4 >> 0x10) ^ (byte)(uVar9 >> 0x18),
                                 CONCAT15((byte)(uVar13 >> 0x28) ^
                                          (byte)(uVar4 >> 8) ^ (byte)(uVar9 >> 0x10),
                                          CONCAT14((byte)(uVar13 >> 0x20) ^
                                                   (byte)uVar4 ^ (byte)(uVar9 >> 8),
                                                   CONCAT13((byte)(uVar13 >> 0x18) ^
                                                            (byte)(uVar11 >> 0x18) ^ (byte)uVar3,
                                                            CONCAT12((byte)(uVar13 >> 0x10) ^
                                                                     (byte)(uVar7 >> 0x10) ^
                                                                     (byte)(uVar3 >> 0x18),
                                                                     CONCAT11((byte)(uVar13 >> 8) ^
                                                                              (byte)(uVar7 >> 8) ^
                                                                              (byte)(uVar3 >> 0x10),
                                                                              (byte)uVar13 ^
                                                                              (byte)uVar7 ^
                                                                              (byte)(uVar3 >> 8)))))
                                         )));
  return;
}


