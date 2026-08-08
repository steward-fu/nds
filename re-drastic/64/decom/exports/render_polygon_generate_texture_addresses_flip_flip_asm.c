/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_flip_flip_asm
 * Address  : 0019a81c
 * Program  : drastic64
 */


void render_polygon_generate_texture_addresses_flip_flip_asm
               (int *param_1,undefined2 *param_2,int param_3,uint param_4,undefined4 param_5,
               undefined7 *param_6)

{
  bool bVar1;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  undefined6 uVar5;
  uint3 uVar6;
  uint uVar7;
  undefined6 uVar8;
  undefined2 uVar9;
  uint3 uVar10;
  uint uVar11;
  undefined6 uVar12;
  undefined2 uVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined7 uVar16;
  short sVar17;
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
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined auVar61 [16];
  undefined auVar62 [16];
  byte bVar63;
  
  bVar57 = (byte)param_4;
  bVar58 = (byte)(param_4 >> 8);
  sVar17 = (short)param_4 + -1;
  bVar53 = (byte)sVar17;
  bVar54 = (byte)((ushort)sVar17 >> 8);
  bVar59 = (byte)param_5;
  bVar60 = (byte)((uint)param_5 >> 8);
  sVar17 = (short)param_5 + -1;
  bVar55 = (byte)sVar17;
  bVar56 = (byte)((ushort)sVar17 >> 8);
  do {
    uVar9 = *param_2;
    uVar13 = param_2[1];
    bVar25 = (byte)param_2[2];
    bVar26 = (byte)((ushort)param_2[2] >> 8);
    bVar39 = (byte)param_2[3];
    bVar40 = (byte)((ushort)param_2[3] >> 8);
    bVar27 = (byte)param_2[4];
    bVar28 = (byte)((ushort)param_2[4] >> 8);
    bVar41 = (byte)param_2[5];
    bVar42 = (byte)((ushort)param_2[5] >> 8);
    bVar29 = (byte)param_2[6];
    bVar30 = (byte)((ushort)param_2[6] >> 8);
    bVar43 = (byte)param_2[7];
    bVar44 = (byte)((ushort)param_2[7] >> 8);
    bVar31 = (byte)param_2[8];
    bVar32 = (byte)((ushort)param_2[8] >> 8);
    bVar45 = (byte)param_2[9];
    bVar46 = (byte)((ushort)param_2[9] >> 8);
    bVar33 = (byte)param_2[10];
    bVar34 = (byte)((ushort)param_2[10] >> 8);
    bVar47 = (byte)param_2[0xb];
    bVar48 = (byte)((ushort)param_2[0xb] >> 8);
    bVar35 = (byte)param_2[0xc];
    bVar36 = (byte)((ushort)param_2[0xc] >> 8);
    bVar49 = (byte)param_2[0xd];
    bVar50 = (byte)((ushort)param_2[0xd] >> 8);
    bVar37 = (byte)param_2[0xe];
    bVar38 = (byte)((ushort)param_2[0xe] >> 8);
    bVar51 = (byte)param_2[0xf];
    bVar52 = (byte)((ushort)param_2[0xf] >> 8);
    param_2 = param_2 + 0x10;
    uVar16 = *param_6;
    bVar63 = *(byte *)((long)param_6 + 7);
    param_6 = param_6 + 1;
    auVar61[2] = bVar25;
    auVar61._0_2_ = uVar9;
    auVar61[3] = bVar26;
    auVar61[4] = bVar27;
    auVar61[5] = bVar28;
    auVar61[6] = bVar29;
    auVar61[7] = bVar30;
    auVar61[8] = bVar31;
    auVar61[9] = bVar32;
    auVar61[10] = bVar33;
    auVar61[11] = bVar34;
    auVar61[12] = bVar35;
    auVar61[13] = bVar36;
    auVar61[14] = bVar37;
    auVar61[15] = bVar38;
    auVar14[1] = bVar58 & ~bVar54;
    auVar14[0] = bVar57 & ~bVar53;
    auVar14[2] = bVar57 & ~bVar53;
    auVar14[3] = bVar58 & ~bVar54;
    auVar14[4] = bVar57 & ~bVar53;
    auVar14[5] = bVar58 & ~bVar54;
    auVar14[6] = bVar57 & ~bVar53;
    auVar14[7] = bVar58 & ~bVar54;
    auVar14[8] = bVar57 & ~bVar53;
    auVar14[9] = bVar58 & ~bVar54;
    auVar14[10] = bVar57 & ~bVar53;
    auVar14[11] = bVar58 & ~bVar54;
    auVar14[12] = bVar57 & ~bVar53;
    auVar14[13] = bVar58 & ~bVar54;
    auVar14[14] = bVar57 & ~bVar53;
    auVar14[15] = bVar58 & ~bVar54;
    auVar61 = NEON_cmtst(auVar61,auVar14,2);
    auVar62[2] = bVar39;
    auVar62._0_2_ = uVar13;
    auVar62[3] = bVar40;
    auVar62[4] = bVar41;
    auVar62[5] = bVar42;
    auVar62[6] = bVar43;
    auVar62[7] = bVar44;
    auVar62[8] = bVar45;
    auVar62[9] = bVar46;
    auVar62[10] = bVar47;
    auVar62[11] = bVar48;
    auVar62[12] = bVar49;
    auVar62[13] = bVar50;
    auVar62[14] = bVar51;
    auVar62[15] = bVar52;
    auVar15[1] = bVar60 & ~bVar56;
    auVar15[0] = bVar59 & ~bVar55;
    auVar15[2] = bVar59 & ~bVar55;
    auVar15[3] = bVar60 & ~bVar56;
    auVar15[4] = bVar59 & ~bVar55;
    auVar15[5] = bVar60 & ~bVar56;
    auVar15[6] = bVar59 & ~bVar55;
    auVar15[7] = bVar60 & ~bVar56;
    auVar15[8] = bVar59 & ~bVar55;
    auVar15[9] = bVar60 & ~bVar56;
    auVar15[10] = bVar59 & ~bVar55;
    auVar15[11] = bVar60 & ~bVar56;
    auVar15[12] = bVar59 & ~bVar55;
    auVar15[13] = bVar60 & ~bVar56;
    auVar15[14] = bVar59 & ~bVar55;
    auVar15[15] = bVar60 & ~bVar56;
    auVar62 = NEON_cmtst(auVar62,auVar15,2);
    bVar18 = (byte)uVar16;
    bVar19 = (byte)((uint7)uVar16 >> 8);
    bVar20 = (byte)((uint7)uVar16 >> 0x10);
    bVar21 = (byte)((uint7)uVar16 >> 0x18);
    bVar22 = (byte)((uint7)uVar16 >> 0x20);
    bVar23 = (byte)((uint7)uVar16 >> 0x28);
    bVar24 = (byte)((uint7)uVar16 >> 0x30);
    uVar3 = CONCAT12((bVar25 ^ auVar61[2]) & bVar53 & bVar19,
                     CONCAT11(((byte)((ushort)uVar9 >> 8) ^ auVar61[1]) & bVar54 & (char)bVar18 >> 7
                              ,((byte)uVar9 ^ auVar61[0]) & bVar53 & bVar18));
    uVar4 = CONCAT13((bVar26 ^ auVar61[3]) & bVar54 & (char)bVar19 >> 7,uVar3);
    uVar5 = CONCAT15((bVar28 ^ auVar61[5]) & bVar54 & (char)bVar20 >> 7,
                     CONCAT14((bVar27 ^ auVar61[4]) & bVar53 & bVar20,uVar4));
    uVar6 = CONCAT12((bVar33 ^ auVar61[10]) & bVar53 & bVar23,
                     CONCAT11((bVar32 ^ auVar61[9]) & bVar54 & (char)bVar22 >> 7,
                              (bVar31 ^ auVar61[8]) & bVar53 & bVar22));
    uVar7 = CONCAT13((bVar34 ^ auVar61[11]) & bVar54 & (char)bVar23 >> 7,uVar6);
    uVar8 = CONCAT15((bVar36 ^ auVar61[13]) & bVar54 & (char)bVar24 >> 7,
                     CONCAT14((bVar35 ^ auVar61[12]) & bVar53 & bVar24,uVar7));
    uVar10 = CONCAT12((bVar47 ^ auVar62[10]) & bVar55 & bVar23,
                      CONCAT11((bVar46 ^ auVar62[9]) & bVar56 & (char)bVar22 >> 7,
                               (bVar45 ^ auVar62[8]) & bVar55 & bVar22));
    uVar11 = CONCAT13((bVar48 ^ auVar62[11]) & bVar56 & (char)bVar23 >> 7,uVar10);
    uVar12 = CONCAT15((bVar50 ^ auVar62[13]) & bVar56 & (char)bVar24 >> 7,
                      CONCAT14((bVar49 ^ auVar62[12]) & bVar55 & bVar24,uVar11));
    *param_1 = (uVar3 & 0xffff) +
               (uint)CONCAT11(((byte)((ushort)uVar13 >> 8) ^ auVar62[1]) & bVar56 &
                              (char)bVar18 >> 7,((byte)uVar13 ^ auVar62[0]) & bVar55 & bVar18) *
               (param_4 & 0xffff);
    param_1[1] = (uVar4 >> 0x10) +
                 (uint)CONCAT11((bVar40 ^ auVar62[3]) & bVar56 & (char)bVar19 >> 7,
                                (bVar39 ^ auVar62[2]) & bVar55 & bVar19) * (param_4 & 0xffff);
    param_1[2] = (uint)(ushort)((uint6)uVar5 >> 0x20) +
                 (uint)CONCAT11((bVar42 ^ auVar62[5]) & bVar56 & (char)bVar20 >> 7,
                                (bVar41 ^ auVar62[4]) & bVar55 & bVar20) * (param_4 & 0xffff);
    param_1[3] = (uint)(ushort)(CONCAT17((bVar30 ^ auVar61[7]) & bVar54 & (char)bVar21 >> 7,
                                         CONCAT16((bVar29 ^ auVar61[6]) & bVar53 & bVar21,uVar5)) >>
                               0x30) +
                 (uint)CONCAT11((bVar44 ^ auVar62[7]) & bVar56 & (char)bVar21 >> 7,
                                (bVar43 ^ auVar62[6]) & bVar55 & bVar21) * (param_4 & 0xffff);
    param_1[4] = (uVar6 & 0xffff) + (uVar10 & 0xffff) * (param_4 & 0xffff);
    param_1[5] = (uVar7 >> 0x10) + (uVar11 >> 0x10) * (param_4 & 0xffff);
    param_1[6] = (uint)(ushort)((uint6)uVar8 >> 0x20) +
                 (uint)(ushort)((uint6)uVar12 >> 0x20) * (param_4 & 0xffff);
    param_1[7] = (uint)(ushort)(CONCAT17((bVar38 ^ auVar61[15]) & bVar54 & (char)bVar63 >> 7,
                                         CONCAT16((bVar37 ^ auVar61[14]) & bVar53 & bVar63,uVar8))
                               >> 0x30) +
                 (uint)(ushort)(CONCAT17((bVar52 ^ auVar62[15]) & bVar56 & (char)bVar63 >> 7,
                                         CONCAT16((bVar51 ^ auVar62[14]) & bVar55 & bVar63,uVar12))
                               >> 0x30) * (param_4 & 0xffff);
    param_1 = param_1 + 8;
    iVar2 = param_3 + -8;
    bVar1 = 7 < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


