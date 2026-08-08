/*
 * Ghidra decompilation
 *
 * Function : render_polygon_modulate_red_asm
 * Address  : 0019aa1c
 * Program  : drastic64
 */


void render_polygon_modulate_red_asm
               (undefined *param_1,byte *param_2,byte *param_3,byte param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  undefined7 uVar3;
  undefined7 uVar4;
  undefined7 uVar5;
  undefined7 uVar6;
  undefined7 uVar7;
  undefined7 uVar8;
  undefined7 *puVar9;
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
  byte bVar58;
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
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  
  do {
    bVar10 = *param_3;
    bVar11 = param_3[1];
    bVar12 = param_3[2];
    bVar13 = param_3[3];
    bVar14 = param_3[4];
    bVar15 = param_3[5];
    bVar16 = param_3[6];
    bVar17 = param_3[7];
    puVar9 = (undefined7 *)(param_3 + 8);
    uVar8 = *puVar9;
    uVar7 = *puVar9;
    uVar6 = *puVar9;
    uVar5 = *puVar9;
    uVar4 = *puVar9;
    uVar3 = *puVar9;
    bVar18 = param_3[0xf];
    param_3 = param_3 + 0x10;
    bVar19 = *param_2;
    bVar35 = param_2[1];
    bVar51 = param_2[2];
    bVar67 = param_2[3];
    bVar20 = param_2[4];
    bVar36 = param_2[5];
    bVar52 = param_2[6];
    bVar68 = param_2[7];
    bVar21 = param_2[8];
    bVar37 = param_2[9];
    bVar53 = param_2[10];
    bVar69 = param_2[0xb];
    bVar22 = param_2[0xc];
    bVar38 = param_2[0xd];
    bVar54 = param_2[0xe];
    bVar70 = param_2[0xf];
    bVar23 = param_2[0x10];
    bVar39 = param_2[0x11];
    bVar55 = param_2[0x12];
    bVar71 = param_2[0x13];
    bVar24 = param_2[0x14];
    bVar40 = param_2[0x15];
    bVar56 = param_2[0x16];
    bVar72 = param_2[0x17];
    bVar25 = param_2[0x18];
    bVar41 = param_2[0x19];
    bVar57 = param_2[0x1a];
    bVar73 = param_2[0x1b];
    bVar26 = param_2[0x1c];
    bVar42 = param_2[0x1d];
    bVar58 = param_2[0x1e];
    bVar74 = param_2[0x1f];
    bVar27 = param_2[0x20];
    bVar43 = param_2[0x21];
    bVar59 = param_2[0x22];
    bVar75 = param_2[0x23];
    bVar28 = param_2[0x24];
    bVar44 = param_2[0x25];
    bVar60 = param_2[0x26];
    bVar76 = param_2[0x27];
    bVar29 = param_2[0x28];
    bVar45 = param_2[0x29];
    bVar61 = param_2[0x2a];
    bVar77 = param_2[0x2b];
    bVar30 = param_2[0x2c];
    bVar46 = param_2[0x2d];
    bVar62 = param_2[0x2e];
    bVar78 = param_2[0x2f];
    bVar31 = param_2[0x30];
    bVar47 = param_2[0x31];
    bVar63 = param_2[0x32];
    bVar79 = param_2[0x33];
    bVar32 = param_2[0x34];
    bVar48 = param_2[0x35];
    bVar64 = param_2[0x36];
    bVar80 = param_2[0x37];
    bVar33 = param_2[0x38];
    bVar49 = param_2[0x39];
    bVar65 = param_2[0x3a];
    bVar81 = param_2[0x3b];
    bVar34 = param_2[0x3c];
    bVar50 = param_2[0x3d];
    bVar66 = param_2[0x3e];
    bVar82 = param_2[0x3f];
    param_2 = param_2 + 0x40;
    *param_1 = (char)((ushort)((ushort)bVar10 + (ushort)bVar19 + (ushort)bVar10 * (ushort)bVar19) >>
                     6);
    param_1[1] = (char)((ushort)((ushort)bVar10 + (ushort)bVar35 + (ushort)bVar10 * (ushort)bVar35)
                       >> 6);
    param_1[2] = (char)((ushort)((ushort)bVar10 + (ushort)bVar51 + (ushort)bVar10 * (ushort)bVar51)
                       >> 6);
    param_1[3] = (char)((ushort)((ushort)param_4 + (ushort)bVar67 + (ushort)param_4 * (ushort)bVar67
                                ) >> 5);
    param_1[4] = (char)((ushort)((ushort)bVar11 + (ushort)bVar20 + (ushort)bVar11 * (ushort)bVar20)
                       >> 6);
    param_1[5] = (char)((ushort)((ushort)bVar11 + (ushort)bVar36 + (ushort)bVar11 * (ushort)bVar36)
                       >> 6);
    param_1[6] = (char)((ushort)((ushort)bVar11 + (ushort)bVar52 + (ushort)bVar11 * (ushort)bVar52)
                       >> 6);
    param_1[7] = (char)((ushort)((ushort)param_4 + (ushort)bVar68 + (ushort)param_4 * (ushort)bVar68
                                ) >> 5);
    param_1[8] = (char)((ushort)((ushort)bVar12 + (ushort)bVar21 + (ushort)bVar12 * (ushort)bVar21)
                       >> 6);
    param_1[9] = (char)((ushort)((ushort)bVar12 + (ushort)bVar37 + (ushort)bVar12 * (ushort)bVar37)
                       >> 6);
    param_1[10] = (char)((ushort)((ushort)bVar12 + (ushort)bVar53 + (ushort)bVar12 * (ushort)bVar53)
                        >> 6);
    param_1[0xb] = (char)((ushort)((ushort)param_4 + (ushort)bVar69 +
                                  (ushort)param_4 * (ushort)bVar69) >> 5);
    param_1[0xc] = (char)((ushort)((ushort)bVar13 + (ushort)bVar22 + (ushort)bVar13 * (ushort)bVar22
                                  ) >> 6);
    param_1[0xd] = (char)((ushort)((ushort)bVar13 + (ushort)bVar38 + (ushort)bVar13 * (ushort)bVar38
                                  ) >> 6);
    param_1[0xe] = (char)((ushort)((ushort)bVar13 + (ushort)bVar54 + (ushort)bVar13 * (ushort)bVar54
                                  ) >> 6);
    param_1[0xf] = (char)((ushort)((ushort)param_4 + (ushort)bVar70 +
                                  (ushort)param_4 * (ushort)bVar70) >> 5);
    param_1[0x10] =
         (char)((ushort)((ushort)bVar14 + (ushort)bVar23 + (ushort)bVar14 * (ushort)bVar23) >> 6);
    param_1[0x11] =
         (char)((ushort)((ushort)bVar14 + (ushort)bVar39 + (ushort)bVar14 * (ushort)bVar39) >> 6);
    param_1[0x12] =
         (char)((ushort)((ushort)bVar14 + (ushort)bVar55 + (ushort)bVar14 * (ushort)bVar55) >> 6);
    param_1[0x13] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar71 + (ushort)param_4 * (ushort)bVar71) >> 5);
    param_1[0x14] =
         (char)((ushort)((ushort)bVar15 + (ushort)bVar24 + (ushort)bVar15 * (ushort)bVar24) >> 6);
    param_1[0x15] =
         (char)((ushort)((ushort)bVar15 + (ushort)bVar40 + (ushort)bVar15 * (ushort)bVar40) >> 6);
    param_1[0x16] =
         (char)((ushort)((ushort)bVar15 + (ushort)bVar56 + (ushort)bVar15 * (ushort)bVar56) >> 6);
    param_1[0x17] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar72 + (ushort)param_4 * (ushort)bVar72) >> 5);
    param_1[0x18] =
         (char)((ushort)((ushort)bVar16 + (ushort)bVar25 + (ushort)bVar16 * (ushort)bVar25) >> 6);
    param_1[0x19] =
         (char)((ushort)((ushort)bVar16 + (ushort)bVar41 + (ushort)bVar16 * (ushort)bVar41) >> 6);
    param_1[0x1a] =
         (char)((ushort)((ushort)bVar16 + (ushort)bVar57 + (ushort)bVar16 * (ushort)bVar57) >> 6);
    param_1[0x1b] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar73 + (ushort)param_4 * (ushort)bVar73) >> 5);
    param_1[0x1c] =
         (char)((ushort)((ushort)bVar17 + (ushort)bVar26 + (ushort)bVar17 * (ushort)bVar26) >> 6);
    param_1[0x1d] =
         (char)((ushort)((ushort)bVar17 + (ushort)bVar42 + (ushort)bVar17 * (ushort)bVar42) >> 6);
    param_1[0x1e] =
         (char)((ushort)((ushort)bVar17 + (ushort)bVar58 + (ushort)bVar17 * (ushort)bVar58) >> 6);
    param_1[0x1f] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar74 + (ushort)param_4 * (ushort)bVar74) >> 5);
    param_1[0x20] =
         (char)((ushort)((ushort)(byte)uVar3 + (ushort)bVar27 + (ushort)(byte)uVar6 * (ushort)bVar27
                        ) >> 6);
    param_1[0x21] =
         (char)((ushort)((ushort)(byte)uVar4 + (ushort)bVar43 + (ushort)(byte)uVar7 * (ushort)bVar43
                        ) >> 6);
    param_1[0x22] =
         (char)((ushort)((ushort)(byte)uVar5 + (ushort)bVar59 + (ushort)(byte)uVar8 * (ushort)bVar59
                        ) >> 6);
    param_1[0x23] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar75 + (ushort)param_4 * (ushort)bVar75) >> 5);
    param_1[0x24] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 8) + (ushort)bVar28 +
                        (ushort)(byte)((uint7)uVar6 >> 8) * (ushort)bVar28) >> 6);
    param_1[0x25] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 8) + (ushort)bVar44 +
                        (ushort)(byte)((uint7)uVar7 >> 8) * (ushort)bVar44) >> 6);
    param_1[0x26] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 8) + (ushort)bVar60 +
                        (ushort)(byte)((uint7)uVar8 >> 8) * (ushort)bVar60) >> 6);
    param_1[0x27] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar76 + (ushort)param_4 * (ushort)bVar76) >> 5);
    param_1[0x28] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 0x10) + (ushort)bVar29 +
                        (ushort)(byte)((uint7)uVar6 >> 0x10) * (ushort)bVar29) >> 6);
    param_1[0x29] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 0x10) + (ushort)bVar45 +
                        (ushort)(byte)((uint7)uVar7 >> 0x10) * (ushort)bVar45) >> 6);
    param_1[0x2a] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 0x10) + (ushort)bVar61 +
                        (ushort)(byte)((uint7)uVar8 >> 0x10) * (ushort)bVar61) >> 6);
    param_1[0x2b] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar77 + (ushort)param_4 * (ushort)bVar77) >> 5);
    param_1[0x2c] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 0x18) + (ushort)bVar30 +
                        (ushort)(byte)((uint7)uVar6 >> 0x18) * (ushort)bVar30) >> 6);
    param_1[0x2d] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 0x18) + (ushort)bVar46 +
                        (ushort)(byte)((uint7)uVar7 >> 0x18) * (ushort)bVar46) >> 6);
    param_1[0x2e] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 0x18) + (ushort)bVar62 +
                        (ushort)(byte)((uint7)uVar8 >> 0x18) * (ushort)bVar62) >> 6);
    param_1[0x2f] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar78 + (ushort)param_4 * (ushort)bVar78) >> 5);
    param_1[0x30] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 0x20) + (ushort)bVar31 +
                        (ushort)(byte)((uint7)uVar6 >> 0x20) * (ushort)bVar31) >> 6);
    param_1[0x31] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 0x20) + (ushort)bVar47 +
                        (ushort)(byte)((uint7)uVar7 >> 0x20) * (ushort)bVar47) >> 6);
    param_1[0x32] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 0x20) + (ushort)bVar63 +
                        (ushort)(byte)((uint7)uVar8 >> 0x20) * (ushort)bVar63) >> 6);
    param_1[0x33] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar79 + (ushort)param_4 * (ushort)bVar79) >> 5);
    param_1[0x34] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 0x28) + (ushort)bVar32 +
                        (ushort)(byte)((uint7)uVar6 >> 0x28) * (ushort)bVar32) >> 6);
    param_1[0x35] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 0x28) + (ushort)bVar48 +
                        (ushort)(byte)((uint7)uVar7 >> 0x28) * (ushort)bVar48) >> 6);
    param_1[0x36] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 0x28) + (ushort)bVar64 +
                        (ushort)(byte)((uint7)uVar8 >> 0x28) * (ushort)bVar64) >> 6);
    param_1[0x37] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar80 + (ushort)param_4 * (ushort)bVar80) >> 5);
    param_1[0x38] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 0x30) + (ushort)bVar33 +
                        (ushort)(byte)((uint7)uVar6 >> 0x30) * (ushort)bVar33) >> 6);
    param_1[0x39] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 0x30) + (ushort)bVar49 +
                        (ushort)(byte)((uint7)uVar7 >> 0x30) * (ushort)bVar49) >> 6);
    param_1[0x3a] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 0x30) + (ushort)bVar65 +
                        (ushort)(byte)((uint7)uVar8 >> 0x30) * (ushort)bVar65) >> 6);
    param_1[0x3b] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar81 + (ushort)param_4 * (ushort)bVar81) >> 5);
    param_1[0x3c] =
         (char)((ushort)((ushort)bVar18 + (ushort)bVar34 + (ushort)bVar18 * (ushort)bVar34) >> 6);
    param_1[0x3d] =
         (char)((ushort)((ushort)bVar18 + (ushort)bVar50 + (ushort)bVar18 * (ushort)bVar50) >> 6);
    param_1[0x3e] =
         (char)((ushort)((ushort)bVar18 + (ushort)bVar66 + (ushort)bVar18 * (ushort)bVar66) >> 6);
    param_1[0x3f] =
         (char)((ushort)((ushort)param_4 + (ushort)bVar82 + (ushort)param_4 * (ushort)bVar82) >> 5);
    param_1 = param_1 + 0x40;
    lVar2 = param_5 + -0x10;
    bVar1 = 0xf < param_5;
    param_5 = lVar2;
  } while (lVar2 != 0 && bVar1);
  return;
}


