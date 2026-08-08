/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_shade_32_1x_asm
 * Address  : 001a0c90
 * Program  : drastic64
 */


void render_scanline_color_convert_shade_32_1x_asm
               (byte *param_1,char *param_2,byte param_3,short param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
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
  
  pbVar8 = param_1 + 0x100;
  pbVar7 = param_1 + 0x200;
  iVar9 = 0x100;
  do {
    bVar10 = *pbVar7;
    bVar11 = pbVar7[1];
    bVar12 = pbVar7[2];
    bVar13 = pbVar7[3];
    bVar14 = pbVar7[4];
    bVar15 = pbVar7[5];
    bVar16 = pbVar7[6];
    bVar17 = pbVar7[7];
    uVar1 = *(undefined8 *)(pbVar7 + 8);
    bVar18 = *pbVar8;
    bVar19 = pbVar8[1];
    bVar20 = pbVar8[2];
    bVar21 = pbVar8[3];
    bVar22 = pbVar8[4];
    bVar23 = pbVar8[5];
    bVar24 = pbVar8[6];
    bVar25 = pbVar8[7];
    uVar2 = *(undefined8 *)(pbVar8 + 8);
    bVar26 = *param_1;
    bVar27 = param_1[1];
    bVar28 = param_1[2];
    bVar29 = param_1[3];
    bVar30 = param_1[4];
    bVar31 = param_1[5];
    bVar32 = param_1[6];
    bVar33 = param_1[7];
    uVar3 = *(undefined8 *)(param_1 + 8);
    bVar34 = pbVar7[0x10];
    bVar35 = pbVar7[0x11];
    bVar36 = pbVar7[0x12];
    bVar37 = pbVar7[0x13];
    bVar38 = pbVar7[0x14];
    bVar39 = pbVar7[0x15];
    bVar40 = pbVar7[0x16];
    bVar41 = pbVar7[0x17];
    uVar4 = *(undefined8 *)(pbVar7 + 0x18);
    pbVar7 = pbVar7 + 0x20;
    bVar42 = pbVar8[0x10];
    bVar43 = pbVar8[0x11];
    bVar44 = pbVar8[0x12];
    bVar45 = pbVar8[0x13];
    bVar46 = pbVar8[0x14];
    bVar47 = pbVar8[0x15];
    bVar48 = pbVar8[0x16];
    bVar49 = pbVar8[0x17];
    uVar5 = *(undefined8 *)(pbVar8 + 0x18);
    pbVar8 = pbVar8 + 0x20;
    bVar50 = param_1[0x10];
    bVar51 = param_1[0x11];
    bVar52 = param_1[0x12];
    bVar53 = param_1[0x13];
    bVar54 = param_1[0x14];
    bVar55 = param_1[0x15];
    bVar56 = param_1[0x16];
    bVar57 = param_1[0x17];
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    param_1 = param_1 + 0x20;
    *param_2 = (char)((ushort)(param_4 + (ushort)bVar10 * (ushort)param_3) >> 5) << 2;
    param_2[1] = (char)((ushort)(param_4 + (ushort)bVar18 * (ushort)param_3) >> 5) << 2;
    param_2[2] = (char)((ushort)(param_4 + (ushort)bVar26 * (ushort)param_3) >> 5) << 2;
    param_2[3] = -1;
    param_2[4] = (char)((ushort)(param_4 + (ushort)bVar11 * (ushort)param_3) >> 5) << 2;
    param_2[5] = (char)((ushort)(param_4 + (ushort)bVar19 * (ushort)param_3) >> 5) << 2;
    param_2[6] = (char)((ushort)(param_4 + (ushort)bVar27 * (ushort)param_3) >> 5) << 2;
    param_2[7] = -1;
    param_2[8] = (char)((ushort)(param_4 + (ushort)bVar12 * (ushort)param_3) >> 5) << 2;
    param_2[9] = (char)((ushort)(param_4 + (ushort)bVar20 * (ushort)param_3) >> 5) << 2;
    param_2[10] = (char)((ushort)(param_4 + (ushort)bVar28 * (ushort)param_3) >> 5) << 2;
    param_2[0xb] = -1;
    param_2[0xc] = (char)((ushort)(param_4 + (ushort)bVar13 * (ushort)param_3) >> 5) << 2;
    param_2[0xd] = (char)((ushort)(param_4 + (ushort)bVar21 * (ushort)param_3) >> 5) << 2;
    param_2[0xe] = (char)((ushort)(param_4 + (ushort)bVar29 * (ushort)param_3) >> 5) << 2;
    param_2[0xf] = -1;
    param_2[0x10] = (char)((ushort)(param_4 + (ushort)bVar14 * (ushort)param_3) >> 5) << 2;
    param_2[0x11] = (char)((ushort)(param_4 + (ushort)bVar22 * (ushort)param_3) >> 5) << 2;
    param_2[0x12] = (char)((ushort)(param_4 + (ushort)bVar30 * (ushort)param_3) >> 5) << 2;
    param_2[0x13] = -1;
    param_2[0x14] = (char)((ushort)(param_4 + (ushort)bVar15 * (ushort)param_3) >> 5) << 2;
    param_2[0x15] = (char)((ushort)(param_4 + (ushort)bVar23 * (ushort)param_3) >> 5) << 2;
    param_2[0x16] = (char)((ushort)(param_4 + (ushort)bVar31 * (ushort)param_3) >> 5) << 2;
    param_2[0x17] = -1;
    param_2[0x18] = (char)((ushort)(param_4 + (ushort)bVar16 * (ushort)param_3) >> 5) << 2;
    param_2[0x19] = (char)((ushort)(param_4 + (ushort)bVar24 * (ushort)param_3) >> 5) << 2;
    param_2[0x1a] = (char)((ushort)(param_4 + (ushort)bVar32 * (ushort)param_3) >> 5) << 2;
    param_2[0x1b] = -1;
    param_2[0x1c] = (char)((ushort)(param_4 + (ushort)bVar17 * (ushort)param_3) >> 5) << 2;
    param_2[0x1d] = (char)((ushort)(param_4 + (ushort)bVar25 * (ushort)param_3) >> 5) << 2;
    param_2[0x1e] = (char)((ushort)(param_4 + (ushort)bVar33 * (ushort)param_3) >> 5) << 2;
    param_2[0x1f] = -1;
    param_2[0x20] = (char)((ushort)(param_4 + (ushort)(byte)uVar1 * (ushort)param_3) >> 5) << 2;
    param_2[0x21] = (char)((ushort)(param_4 + (ushort)(byte)uVar2 * (ushort)param_3) >> 5) << 2;
    param_2[0x22] = (char)((ushort)(param_4 + (ushort)(byte)uVar3 * (ushort)param_3) >> 5) << 2;
    param_2[0x23] = -1;
    param_2[0x24] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar1 >> 8) * (ushort)param_3) >> 5) << 2;
    param_2[0x25] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar2 >> 8) * (ushort)param_3) >> 5) << 2;
    param_2[0x26] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar3 >> 8) * (ushort)param_3) >> 5) << 2;
    param_2[0x27] = -1;
    param_2[0x28] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar1 >> 0x10) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x29] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar2 >> 0x10) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x2a] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar3 >> 0x10) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x2b] = -1;
    param_2[0x2c] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar1 >> 0x18) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x2d] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar2 >> 0x18) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x2e] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar3 >> 0x18) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x2f] = -1;
    param_2[0x30] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar1 >> 0x20) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x31] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar2 >> 0x20) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x32] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar3 >> 0x20) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x33] = -1;
    param_2[0x34] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar1 >> 0x28) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x35] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar2 >> 0x28) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x36] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar3 >> 0x28) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x37] = -1;
    param_2[0x38] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar1 >> 0x30) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x39] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar2 >> 0x30) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x3a] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar3 >> 0x30) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x3b] = -1;
    param_2[0x3c] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar1 >> 0x38) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x3d] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar2 >> 0x38) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x3e] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar3 >> 0x38) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x3f] = -1;
    param_2[0x40] = (char)((ushort)(param_4 + (ushort)bVar34 * (ushort)param_3) >> 5) << 2;
    param_2[0x41] = (char)((ushort)(param_4 + (ushort)bVar42 * (ushort)param_3) >> 5) << 2;
    param_2[0x42] = (char)((ushort)(param_4 + (ushort)bVar50 * (ushort)param_3) >> 5) << 2;
    param_2[0x43] = -1;
    param_2[0x44] = (char)((ushort)(param_4 + (ushort)bVar35 * (ushort)param_3) >> 5) << 2;
    param_2[0x45] = (char)((ushort)(param_4 + (ushort)bVar43 * (ushort)param_3) >> 5) << 2;
    param_2[0x46] = (char)((ushort)(param_4 + (ushort)bVar51 * (ushort)param_3) >> 5) << 2;
    param_2[0x47] = -1;
    param_2[0x48] = (char)((ushort)(param_4 + (ushort)bVar36 * (ushort)param_3) >> 5) << 2;
    param_2[0x49] = (char)((ushort)(param_4 + (ushort)bVar44 * (ushort)param_3) >> 5) << 2;
    param_2[0x4a] = (char)((ushort)(param_4 + (ushort)bVar52 * (ushort)param_3) >> 5) << 2;
    param_2[0x4b] = -1;
    param_2[0x4c] = (char)((ushort)(param_4 + (ushort)bVar37 * (ushort)param_3) >> 5) << 2;
    param_2[0x4d] = (char)((ushort)(param_4 + (ushort)bVar45 * (ushort)param_3) >> 5) << 2;
    param_2[0x4e] = (char)((ushort)(param_4 + (ushort)bVar53 * (ushort)param_3) >> 5) << 2;
    param_2[0x4f] = -1;
    param_2[0x50] = (char)((ushort)(param_4 + (ushort)bVar38 * (ushort)param_3) >> 5) << 2;
    param_2[0x51] = (char)((ushort)(param_4 + (ushort)bVar46 * (ushort)param_3) >> 5) << 2;
    param_2[0x52] = (char)((ushort)(param_4 + (ushort)bVar54 * (ushort)param_3) >> 5) << 2;
    param_2[0x53] = -1;
    param_2[0x54] = (char)((ushort)(param_4 + (ushort)bVar39 * (ushort)param_3) >> 5) << 2;
    param_2[0x55] = (char)((ushort)(param_4 + (ushort)bVar47 * (ushort)param_3) >> 5) << 2;
    param_2[0x56] = (char)((ushort)(param_4 + (ushort)bVar55 * (ushort)param_3) >> 5) << 2;
    param_2[0x57] = -1;
    param_2[0x58] = (char)((ushort)(param_4 + (ushort)bVar40 * (ushort)param_3) >> 5) << 2;
    param_2[0x59] = (char)((ushort)(param_4 + (ushort)bVar48 * (ushort)param_3) >> 5) << 2;
    param_2[0x5a] = (char)((ushort)(param_4 + (ushort)bVar56 * (ushort)param_3) >> 5) << 2;
    param_2[0x5b] = -1;
    param_2[0x5c] = (char)((ushort)(param_4 + (ushort)bVar41 * (ushort)param_3) >> 5) << 2;
    param_2[0x5d] = (char)((ushort)(param_4 + (ushort)bVar49 * (ushort)param_3) >> 5) << 2;
    param_2[0x5e] = (char)((ushort)(param_4 + (ushort)bVar57 * (ushort)param_3) >> 5) << 2;
    param_2[0x5f] = -1;
    param_2[0x60] = (char)((ushort)(param_4 + (ushort)(byte)uVar4 * (ushort)param_3) >> 5) << 2;
    param_2[0x61] = (char)((ushort)(param_4 + (ushort)(byte)uVar5 * (ushort)param_3) >> 5) << 2;
    param_2[0x62] = (char)((ushort)(param_4 + (ushort)(byte)uVar6 * (ushort)param_3) >> 5) << 2;
    param_2[99] = -1;
    param_2[100] = (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar4 >> 8) * (ushort)param_3) >>
                         5) << 2;
    param_2[0x65] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar5 >> 8) * (ushort)param_3) >> 5) << 2;
    param_2[0x66] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar6 >> 8) * (ushort)param_3) >> 5) << 2;
    param_2[0x67] = -1;
    param_2[0x68] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar4 >> 0x10) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x69] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar5 >> 0x10) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x6a] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar6 >> 0x10) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x6b] = -1;
    param_2[0x6c] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar4 >> 0x18) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x6d] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar5 >> 0x18) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x6e] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar6 >> 0x18) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x6f] = -1;
    param_2[0x70] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar4 >> 0x20) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x71] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar5 >> 0x20) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x72] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar6 >> 0x20) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x73] = -1;
    param_2[0x74] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar4 >> 0x28) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x75] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar5 >> 0x28) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x76] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar6 >> 0x28) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x77] = -1;
    param_2[0x78] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar4 >> 0x30) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x79] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar5 >> 0x30) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x7a] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar6 >> 0x30) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x7b] = -1;
    param_2[0x7c] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar4 >> 0x38) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x7d] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar5 >> 0x38) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x7e] =
         (char)((ushort)(param_4 + (ushort)(byte)((ulong)uVar6 >> 0x38) * (ushort)param_3) >> 5) <<
         2;
    param_2[0x7f] = -1;
    param_2 = param_2 + 0x80;
    iVar9 = iVar9 + -0x20;
  } while (iVar9 != 0);
  return;
}


