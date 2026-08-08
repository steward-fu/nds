/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_effects_apply_asm
 * Address  : 001a0378
 * Program  : drastic64
 */


void render_scanline_color_effects_apply_asm
               (undefined *param_1,undefined8 *param_2,undefined8 *param_3,byte *param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined7 uVar10;
  undefined7 uVar11;
  undefined7 uVar12;
  undefined7 uVar13;
  undefined7 uVar14;
  undefined7 uVar15;
  undefined7 uVar16;
  undefined7 uVar17;
  undefined7 uVar18;
  undefined7 uVar19;
  undefined7 uVar20;
  undefined7 uVar21;
  undefined8 *puVar22;
  undefined7 *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar35;
  byte *pbVar43;
  undefined *puVar51;
  undefined *puVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  undefined8 *puVar57;
  int iVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined in_q22 [16];
  undefined auVar76 [16];
  undefined in_q23 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined in_q24 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar36;
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar44;
  byte *pbVar45;
  byte *pbVar46;
  byte *pbVar47;
  byte *pbVar48;
  byte *pbVar49;
  byte *pbVar50;
  
  puVar51 = param_1 + 0x100;
  puVar52 = param_1 + 0x200;
  puVar53 = param_2 + 0x20;
  puVar54 = param_2 + 0x40;
  puVar55 = param_2 + 0x60;
  puVar56 = param_2 + 0x80;
  puVar57 = param_2 + 0xa0;
  iVar58 = 0x100;
  do {
    uVar8 = *param_3;
    uVar6 = *param_3;
    uVar4 = *param_3;
    puVar22 = param_3 + 1;
    uVar18 = *(undefined7 *)puVar22;
    uVar14 = *(undefined7 *)puVar22;
    uVar10 = *(undefined7 *)puVar22;
    bVar59 = *(byte *)((long)param_3 + 0xf);
    param_3 = param_3 + 2;
    bVar60 = *param_4;
    bVar61 = param_4[1];
    bVar62 = param_4[2];
    bVar63 = param_4[3];
    bVar64 = param_4[4];
    bVar65 = param_4[5];
    bVar66 = param_4[6];
    bVar67 = param_4[7];
    puVar23 = (undefined7 *)(param_4 + 8);
    uVar20 = *puVar23;
    uVar16 = *puVar23;
    uVar12 = *puVar23;
    bVar68 = param_4[0xf];
    param_4 = param_4 + 0x10;
    uVar5 = *param_2;
    uVar11 = *(undefined7 *)(param_2 + 1);
    pbVar24 = (byte *)((long)param_2 + 0xf);
    param_2 = param_2 + 2;
    uVar7 = *puVar53;
    uVar15 = *(undefined7 *)(puVar53 + 1);
    pbVar25 = (byte *)((long)puVar53 + 0xf);
    puVar53 = puVar53 + 2;
    uVar9 = *puVar54;
    uVar19 = *(undefined7 *)(puVar54 + 1);
    pbVar26 = (byte *)((long)puVar54 + 0xf);
    puVar54 = puVar54 + 2;
    bVar69 = *(byte *)puVar55;
    pbVar27 = (byte *)((long)puVar55 + 1);
    pbVar28 = (byte *)((long)puVar55 + 2);
    pbVar29 = (byte *)((long)puVar55 + 3);
    pbVar30 = (byte *)((long)puVar55 + 4);
    pbVar31 = (byte *)((long)puVar55 + 5);
    pbVar32 = (byte *)((long)puVar55 + 6);
    pbVar33 = (byte *)((long)puVar55 + 7);
    uVar13 = *(undefined7 *)(puVar55 + 1);
    pbVar34 = (byte *)((long)puVar55 + 0xf);
    puVar55 = puVar55 + 2;
    bVar70 = *(byte *)puVar56;
    pbVar35 = (byte *)((long)puVar56 + 1);
    pbVar36 = (byte *)((long)puVar56 + 2);
    pbVar37 = (byte *)((long)puVar56 + 3);
    pbVar38 = (byte *)((long)puVar56 + 4);
    pbVar39 = (byte *)((long)puVar56 + 5);
    pbVar40 = (byte *)((long)puVar56 + 6);
    pbVar41 = (byte *)((long)puVar56 + 7);
    uVar17 = *(undefined7 *)(puVar56 + 1);
    pbVar42 = (byte *)((long)puVar56 + 0xf);
    puVar56 = puVar56 + 2;
    bVar71 = *(byte *)puVar57;
    pbVar43 = (byte *)((long)puVar57 + 1);
    pbVar44 = (byte *)((long)puVar57 + 2);
    pbVar45 = (byte *)((long)puVar57 + 3);
    pbVar46 = (byte *)((long)puVar57 + 4);
    pbVar47 = (byte *)((long)puVar57 + 5);
    pbVar48 = (byte *)((long)puVar57 + 6);
    pbVar49 = (byte *)((long)puVar57 + 7);
    uVar21 = *(undefined7 *)(puVar57 + 1);
    pbVar50 = (byte *)((long)puVar57 + 0xf);
    puVar57 = puVar57 + 2;
    auVar72 = NEON_umull(uVar5,uVar4,1);
    auVar73._0_2_ = auVar72._0_2_ + (ushort)bVar69 * (ushort)bVar60;
    auVar73._2_2_ = auVar72._2_2_ + (ushort)*pbVar27 * (ushort)bVar61;
    auVar73._4_2_ = auVar72._4_2_ + (ushort)*pbVar28 * (ushort)bVar62;
    auVar73._6_2_ = auVar72._6_2_ + (ushort)*pbVar29 * (ushort)bVar63;
    auVar73._8_2_ = auVar72._8_2_ + (ushort)*pbVar30 * (ushort)bVar64;
    auVar73._10_2_ = auVar72._10_2_ + (ushort)*pbVar31 * (ushort)bVar65;
    auVar73._12_2_ = auVar72._12_2_ + (ushort)*pbVar32 * (ushort)bVar66;
    auVar73._14_2_ = auVar72._14_2_ + (ushort)*pbVar33 * (ushort)bVar67;
    auVar72 = NEON_umull(uVar7,uVar6,1);
    auVar74._0_2_ = auVar72._0_2_ + (ushort)bVar70 * (ushort)bVar60;
    auVar74._2_2_ = auVar72._2_2_ + (ushort)*pbVar35 * (ushort)bVar61;
    auVar74._4_2_ = auVar72._4_2_ + (ushort)*pbVar36 * (ushort)bVar62;
    auVar74._6_2_ = auVar72._6_2_ + (ushort)*pbVar37 * (ushort)bVar63;
    auVar74._8_2_ = auVar72._8_2_ + (ushort)*pbVar38 * (ushort)bVar64;
    auVar74._10_2_ = auVar72._10_2_ + (ushort)*pbVar39 * (ushort)bVar65;
    auVar74._12_2_ = auVar72._12_2_ + (ushort)*pbVar40 * (ushort)bVar66;
    auVar74._14_2_ = auVar72._14_2_ + (ushort)*pbVar41 * (ushort)bVar67;
    auVar72 = NEON_umull(uVar9,uVar8,1);
    auVar75._0_2_ = auVar72._0_2_ + (ushort)bVar71 * (ushort)bVar60;
    auVar75._2_2_ = auVar72._2_2_ + (ushort)*pbVar43 * (ushort)bVar61;
    auVar75._4_2_ = auVar72._4_2_ + (ushort)*pbVar44 * (ushort)bVar62;
    auVar75._6_2_ = auVar72._6_2_ + (ushort)*pbVar45 * (ushort)bVar63;
    auVar75._8_2_ = auVar72._8_2_ + (ushort)*pbVar46 * (ushort)bVar64;
    auVar75._10_2_ = auVar72._10_2_ + (ushort)*pbVar47 * (ushort)bVar65;
    auVar75._12_2_ = auVar72._12_2_ + (ushort)*pbVar48 * (ushort)bVar66;
    auVar75._14_2_ = auVar72._14_2_ + (ushort)*pbVar49 * (ushort)bVar67;
    auVar76._8_8_ = in_q22._8_8_;
    auVar76._0_8_ = NEON_rshrn(in_q22._0_8_,auVar73,5,2);
    auVar77._8_8_ = in_q23._8_8_;
    auVar77._0_8_ = NEON_rshrn(in_q23._0_8_,auVar74,5,2);
    auVar79._8_8_ = in_q24._8_8_;
    auVar79._0_8_ = NEON_rshrn(in_q24._0_8_,auVar75,5,2);
    auVar72._2_2_ =
         (ushort)(byte)((uint7)uVar11 >> 8) * (ushort)(byte)((uint7)uVar10 >> 8) +
         (ushort)(byte)((uint7)uVar13 >> 8) * (ushort)(byte)((uint7)uVar12 >> 8);
    auVar72._0_2_ =
         (ushort)(byte)uVar11 * (ushort)(byte)uVar10 + (ushort)(byte)uVar13 * (ushort)(byte)uVar12;
    auVar72._4_2_ =
         (ushort)(byte)((uint7)uVar11 >> 0x10) * (ushort)(byte)((uint7)uVar10 >> 0x10) +
         (ushort)(byte)((uint7)uVar13 >> 0x10) * (ushort)(byte)((uint7)uVar12 >> 0x10);
    auVar72._6_2_ =
         (ushort)(byte)((uint7)uVar11 >> 0x18) * (ushort)(byte)((uint7)uVar10 >> 0x18) +
         (ushort)(byte)((uint7)uVar13 >> 0x18) * (ushort)(byte)((uint7)uVar12 >> 0x18);
    auVar72._8_2_ =
         (ushort)(byte)((uint7)uVar11 >> 0x20) * (ushort)(byte)((uint7)uVar10 >> 0x20) +
         (ushort)(byte)((uint7)uVar13 >> 0x20) * (ushort)(byte)((uint7)uVar12 >> 0x20);
    auVar72._10_2_ =
         (ushort)(byte)((uint7)uVar11 >> 0x28) * (ushort)(byte)((uint7)uVar10 >> 0x28) +
         (ushort)(byte)((uint7)uVar13 >> 0x28) * (ushort)(byte)((uint7)uVar12 >> 0x28);
    auVar72._12_2_ =
         (ushort)(byte)((uint7)uVar11 >> 0x30) * (ushort)(byte)((uint7)uVar10 >> 0x30) +
         (ushort)(byte)((uint7)uVar13 >> 0x30) * (ushort)(byte)((uint7)uVar12 >> 0x30);
    auVar72._14_2_ = (ushort)*pbVar24 * (ushort)bVar59 + (ushort)*pbVar34 * (ushort)bVar68;
    auVar72 = NEON_rshrn2(auVar76,auVar72,5,2);
    auVar78._2_2_ =
         (ushort)(byte)((uint7)uVar15 >> 8) * (ushort)(byte)((uint7)uVar14 >> 8) +
         (ushort)(byte)((uint7)uVar17 >> 8) * (ushort)(byte)((uint7)uVar16 >> 8);
    auVar78._0_2_ =
         (ushort)(byte)uVar15 * (ushort)(byte)uVar14 + (ushort)(byte)uVar17 * (ushort)(byte)uVar16;
    auVar78._4_2_ =
         (ushort)(byte)((uint7)uVar15 >> 0x10) * (ushort)(byte)((uint7)uVar14 >> 0x10) +
         (ushort)(byte)((uint7)uVar17 >> 0x10) * (ushort)(byte)((uint7)uVar16 >> 0x10);
    auVar78._6_2_ =
         (ushort)(byte)((uint7)uVar15 >> 0x18) * (ushort)(byte)((uint7)uVar14 >> 0x18) +
         (ushort)(byte)((uint7)uVar17 >> 0x18) * (ushort)(byte)((uint7)uVar16 >> 0x18);
    auVar78._8_2_ =
         (ushort)(byte)((uint7)uVar15 >> 0x20) * (ushort)(byte)((uint7)uVar14 >> 0x20) +
         (ushort)(byte)((uint7)uVar17 >> 0x20) * (ushort)(byte)((uint7)uVar16 >> 0x20);
    auVar78._10_2_ =
         (ushort)(byte)((uint7)uVar15 >> 0x28) * (ushort)(byte)((uint7)uVar14 >> 0x28) +
         (ushort)(byte)((uint7)uVar17 >> 0x28) * (ushort)(byte)((uint7)uVar16 >> 0x28);
    auVar78._12_2_ =
         (ushort)(byte)((uint7)uVar15 >> 0x30) * (ushort)(byte)((uint7)uVar14 >> 0x30) +
         (ushort)(byte)((uint7)uVar17 >> 0x30) * (ushort)(byte)((uint7)uVar16 >> 0x30);
    auVar78._14_2_ = (ushort)*pbVar25 * (ushort)bVar59 + (ushort)*pbVar42 * (ushort)bVar68;
    auVar78 = NEON_rshrn2(auVar77,auVar78,5,2);
    auVar80._2_2_ =
         (ushort)(byte)((uint7)uVar19 >> 8) * (ushort)(byte)((uint7)uVar18 >> 8) +
         (ushort)(byte)((uint7)uVar21 >> 8) * (ushort)(byte)((uint7)uVar20 >> 8);
    auVar80._0_2_ =
         (ushort)(byte)uVar19 * (ushort)(byte)uVar18 + (ushort)(byte)uVar21 * (ushort)(byte)uVar20;
    auVar80._4_2_ =
         (ushort)(byte)((uint7)uVar19 >> 0x10) * (ushort)(byte)((uint7)uVar18 >> 0x10) +
         (ushort)(byte)((uint7)uVar21 >> 0x10) * (ushort)(byte)((uint7)uVar20 >> 0x10);
    auVar80._6_2_ =
         (ushort)(byte)((uint7)uVar19 >> 0x18) * (ushort)(byte)((uint7)uVar18 >> 0x18) +
         (ushort)(byte)((uint7)uVar21 >> 0x18) * (ushort)(byte)((uint7)uVar20 >> 0x18);
    auVar80._8_2_ =
         (ushort)(byte)((uint7)uVar19 >> 0x20) * (ushort)(byte)((uint7)uVar18 >> 0x20) +
         (ushort)(byte)((uint7)uVar21 >> 0x20) * (ushort)(byte)((uint7)uVar20 >> 0x20);
    auVar80._10_2_ =
         (ushort)(byte)((uint7)uVar19 >> 0x28) * (ushort)(byte)((uint7)uVar18 >> 0x28) +
         (ushort)(byte)((uint7)uVar21 >> 0x28) * (ushort)(byte)((uint7)uVar20 >> 0x28);
    auVar80._12_2_ =
         (ushort)(byte)((uint7)uVar19 >> 0x30) * (ushort)(byte)((uint7)uVar18 >> 0x30) +
         (ushort)(byte)((uint7)uVar21 >> 0x30) * (ushort)(byte)((uint7)uVar20 >> 0x30);
    auVar80._14_2_ = (ushort)*pbVar26 * (ushort)bVar59 + (ushort)*pbVar50 * (ushort)bVar68;
    auVar80 = NEON_rshrn2(auVar79,auVar80,5,2);
    auVar1[8] = 0x3f;
    auVar1._0_8_ = 0x3f3f3f3f3f3f3f3f;
    auVar1[9] = 0x3f;
    auVar1[10] = 0x3f;
    auVar1[11] = 0x3f;
    auVar1[12] = 0x3f;
    auVar1[13] = 0x3f;
    auVar1[14] = 0x3f;
    auVar1[15] = 0x3f;
    in_q22 = NEON_umin(auVar72,auVar1,1);
    auVar2[8] = 0x3f;
    auVar2._0_8_ = 0x3f3f3f3f3f3f3f3f;
    auVar2[9] = 0x3f;
    auVar2[10] = 0x3f;
    auVar2[11] = 0x3f;
    auVar2[12] = 0x3f;
    auVar2[13] = 0x3f;
    auVar2[14] = 0x3f;
    auVar2[15] = 0x3f;
    in_q23 = NEON_umin(auVar78,auVar2,1);
    auVar3[8] = 0x3f;
    auVar3._0_8_ = 0x3f3f3f3f3f3f3f3f;
    auVar3[9] = 0x3f;
    auVar3[10] = 0x3f;
    auVar3[11] = 0x3f;
    auVar3[12] = 0x3f;
    auVar3[13] = 0x3f;
    auVar3[14] = 0x3f;
    auVar3[15] = 0x3f;
    in_q24 = NEON_umin(auVar80,auVar3,1);
    *param_1 = in_q22[0];
    param_1[1] = in_q22[1];
    param_1[2] = in_q22[2];
    param_1[3] = in_q22[3];
    param_1[4] = in_q22[4];
    param_1[5] = in_q22[5];
    param_1[6] = in_q22[6];
    param_1[7] = in_q22[7];
    param_1[8] = in_q22[8];
    param_1[9] = in_q22[9];
    param_1[10] = in_q22[10];
    param_1[0xb] = in_q22[11];
    param_1[0xc] = in_q22[12];
    param_1[0xd] = in_q22[13];
    param_1[0xe] = in_q22[14];
    param_1[0xf] = in_q22[15];
    param_1 = param_1 + 0x10;
    *puVar51 = in_q23[0];
    puVar51[1] = in_q23[1];
    puVar51[2] = in_q23[2];
    puVar51[3] = in_q23[3];
    puVar51[4] = in_q23[4];
    puVar51[5] = in_q23[5];
    puVar51[6] = in_q23[6];
    puVar51[7] = in_q23[7];
    puVar51[8] = in_q23[8];
    puVar51[9] = in_q23[9];
    puVar51[10] = in_q23[10];
    puVar51[0xb] = in_q23[11];
    puVar51[0xc] = in_q23[12];
    puVar51[0xd] = in_q23[13];
    puVar51[0xe] = in_q23[14];
    puVar51[0xf] = in_q23[15];
    puVar51 = puVar51 + 0x10;
    *puVar52 = in_q24[0];
    puVar52[1] = in_q24[1];
    puVar52[2] = in_q24[2];
    puVar52[3] = in_q24[3];
    puVar52[4] = in_q24[4];
    puVar52[5] = in_q24[5];
    puVar52[6] = in_q24[6];
    puVar52[7] = in_q24[7];
    puVar52[8] = in_q24[8];
    puVar52[9] = in_q24[9];
    puVar52[10] = in_q24[10];
    puVar52[0xb] = in_q24[11];
    puVar52[0xc] = in_q24[12];
    puVar52[0xd] = in_q24[13];
    puVar52[0xe] = in_q24[14];
    puVar52[0xf] = in_q24[15];
    puVar52 = puVar52 + 0x10;
    iVar58 = iVar58 + -0x10;
  } while (iVar58 != 0);
  return;
}


