/*
 * Ghidra decompilation
 *
 * Function : render_polygon_modulate_asm
 * Address  : 0019a94c
 * Program  : drastic64
 */


void render_polygon_modulate_asm
               (undefined *param_1,byte *param_2,byte *param_3,ulong param_4,byte param_5,
               int param_6)

{
  bool bVar1;
  int iVar2;
  undefined7 uVar3;
  undefined7 uVar4;
  undefined7 uVar5;
  undefined7 uVar6;
  undefined7 uVar7;
  undefined7 uVar8;
  byte *pbVar9;
  byte *pbVar10;
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
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  
  pbVar9 = param_3 + (param_4 & 0xffffffff);
  pbVar10 = param_3 + (param_4 & 0xffffffff) * 2;
  do {
    bVar11 = *param_3;
    bVar12 = param_3[1];
    bVar13 = param_3[2];
    bVar14 = param_3[3];
    bVar15 = param_3[4];
    bVar16 = param_3[5];
    bVar17 = param_3[6];
    bVar18 = param_3[7];
    uVar6 = *(undefined7 *)(param_3 + 8);
    uVar3 = *(undefined7 *)(param_3 + 8);
    bVar19 = param_3[0xf];
    param_3 = param_3 + 0x10;
    bVar20 = *pbVar9;
    bVar21 = pbVar9[1];
    bVar22 = pbVar9[2];
    bVar23 = pbVar9[3];
    bVar24 = pbVar9[4];
    bVar25 = pbVar9[5];
    bVar26 = pbVar9[6];
    bVar27 = pbVar9[7];
    uVar7 = *(undefined7 *)(pbVar9 + 8);
    uVar4 = *(undefined7 *)(pbVar9 + 8);
    bVar28 = pbVar9[0xf];
    pbVar9 = pbVar9 + 0x10;
    bVar29 = *pbVar10;
    bVar30 = pbVar10[1];
    bVar31 = pbVar10[2];
    bVar32 = pbVar10[3];
    bVar33 = pbVar10[4];
    bVar34 = pbVar10[5];
    bVar35 = pbVar10[6];
    bVar36 = pbVar10[7];
    uVar8 = *(undefined7 *)(pbVar10 + 8);
    uVar5 = *(undefined7 *)(pbVar10 + 8);
    bVar37 = pbVar10[0xf];
    pbVar10 = pbVar10 + 0x10;
    bVar38 = *param_2;
    bVar54 = param_2[1];
    bVar70 = param_2[2];
    bVar86 = param_2[3];
    bVar39 = param_2[4];
    bVar55 = param_2[5];
    bVar71 = param_2[6];
    bVar87 = param_2[7];
    bVar40 = param_2[8];
    bVar56 = param_2[9];
    bVar72 = param_2[10];
    bVar88 = param_2[0xb];
    bVar41 = param_2[0xc];
    bVar57 = param_2[0xd];
    bVar73 = param_2[0xe];
    bVar89 = param_2[0xf];
    bVar42 = param_2[0x10];
    bVar58 = param_2[0x11];
    bVar74 = param_2[0x12];
    bVar90 = param_2[0x13];
    bVar43 = param_2[0x14];
    bVar59 = param_2[0x15];
    bVar75 = param_2[0x16];
    bVar91 = param_2[0x17];
    bVar44 = param_2[0x18];
    bVar60 = param_2[0x19];
    bVar76 = param_2[0x1a];
    bVar92 = param_2[0x1b];
    bVar45 = param_2[0x1c];
    bVar61 = param_2[0x1d];
    bVar77 = param_2[0x1e];
    bVar93 = param_2[0x1f];
    bVar46 = param_2[0x20];
    bVar62 = param_2[0x21];
    bVar78 = param_2[0x22];
    bVar94 = param_2[0x23];
    bVar47 = param_2[0x24];
    bVar63 = param_2[0x25];
    bVar79 = param_2[0x26];
    bVar95 = param_2[0x27];
    bVar48 = param_2[0x28];
    bVar64 = param_2[0x29];
    bVar80 = param_2[0x2a];
    bVar96 = param_2[0x2b];
    bVar49 = param_2[0x2c];
    bVar65 = param_2[0x2d];
    bVar81 = param_2[0x2e];
    bVar97 = param_2[0x2f];
    bVar50 = param_2[0x30];
    bVar66 = param_2[0x31];
    bVar82 = param_2[0x32];
    bVar98 = param_2[0x33];
    bVar51 = param_2[0x34];
    bVar67 = param_2[0x35];
    bVar83 = param_2[0x36];
    bVar99 = param_2[0x37];
    bVar52 = param_2[0x38];
    bVar68 = param_2[0x39];
    bVar84 = param_2[0x3a];
    bVar100 = param_2[0x3b];
    bVar53 = param_2[0x3c];
    bVar69 = param_2[0x3d];
    bVar85 = param_2[0x3e];
    bVar101 = param_2[0x3f];
    param_2 = param_2 + 0x40;
    *param_1 = (char)((ushort)((ushort)bVar11 + (ushort)bVar38 + (ushort)bVar11 * (ushort)bVar38) >>
                     6);
    param_1[1] = (char)((ushort)((ushort)bVar20 + (ushort)bVar54 + (ushort)bVar20 * (ushort)bVar54)
                       >> 6);
    param_1[2] = (char)((ushort)((ushort)bVar29 + (ushort)bVar70 + (ushort)bVar29 * (ushort)bVar70)
                       >> 6);
    param_1[3] = (char)((ushort)((ushort)param_5 + (ushort)bVar86 + (ushort)param_5 * (ushort)bVar86
                                ) >> 5);
    param_1[4] = (char)((ushort)((ushort)bVar12 + (ushort)bVar39 + (ushort)bVar12 * (ushort)bVar39)
                       >> 6);
    param_1[5] = (char)((ushort)((ushort)bVar21 + (ushort)bVar55 + (ushort)bVar21 * (ushort)bVar55)
                       >> 6);
    param_1[6] = (char)((ushort)((ushort)bVar30 + (ushort)bVar71 + (ushort)bVar30 * (ushort)bVar71)
                       >> 6);
    param_1[7] = (char)((ushort)((ushort)param_5 + (ushort)bVar87 + (ushort)param_5 * (ushort)bVar87
                                ) >> 5);
    param_1[8] = (char)((ushort)((ushort)bVar13 + (ushort)bVar40 + (ushort)bVar13 * (ushort)bVar40)
                       >> 6);
    param_1[9] = (char)((ushort)((ushort)bVar22 + (ushort)bVar56 + (ushort)bVar22 * (ushort)bVar56)
                       >> 6);
    param_1[10] = (char)((ushort)((ushort)bVar31 + (ushort)bVar72 + (ushort)bVar31 * (ushort)bVar72)
                        >> 6);
    param_1[0xb] = (char)((ushort)((ushort)param_5 + (ushort)bVar88 +
                                  (ushort)param_5 * (ushort)bVar88) >> 5);
    param_1[0xc] = (char)((ushort)((ushort)bVar14 + (ushort)bVar41 + (ushort)bVar14 * (ushort)bVar41
                                  ) >> 6);
    param_1[0xd] = (char)((ushort)((ushort)bVar23 + (ushort)bVar57 + (ushort)bVar23 * (ushort)bVar57
                                  ) >> 6);
    param_1[0xe] = (char)((ushort)((ushort)bVar32 + (ushort)bVar73 + (ushort)bVar32 * (ushort)bVar73
                                  ) >> 6);
    param_1[0xf] = (char)((ushort)((ushort)param_5 + (ushort)bVar89 +
                                  (ushort)param_5 * (ushort)bVar89) >> 5);
    param_1[0x10] =
         (char)((ushort)((ushort)bVar15 + (ushort)bVar42 + (ushort)bVar15 * (ushort)bVar42) >> 6);
    param_1[0x11] =
         (char)((ushort)((ushort)bVar24 + (ushort)bVar58 + (ushort)bVar24 * (ushort)bVar58) >> 6);
    param_1[0x12] =
         (char)((ushort)((ushort)bVar33 + (ushort)bVar74 + (ushort)bVar33 * (ushort)bVar74) >> 6);
    param_1[0x13] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar90 + (ushort)param_5 * (ushort)bVar90) >> 5);
    param_1[0x14] =
         (char)((ushort)((ushort)bVar16 + (ushort)bVar43 + (ushort)bVar16 * (ushort)bVar43) >> 6);
    param_1[0x15] =
         (char)((ushort)((ushort)bVar25 + (ushort)bVar59 + (ushort)bVar25 * (ushort)bVar59) >> 6);
    param_1[0x16] =
         (char)((ushort)((ushort)bVar34 + (ushort)bVar75 + (ushort)bVar34 * (ushort)bVar75) >> 6);
    param_1[0x17] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar91 + (ushort)param_5 * (ushort)bVar91) >> 5);
    param_1[0x18] =
         (char)((ushort)((ushort)bVar17 + (ushort)bVar44 + (ushort)bVar17 * (ushort)bVar44) >> 6);
    param_1[0x19] =
         (char)((ushort)((ushort)bVar26 + (ushort)bVar60 + (ushort)bVar26 * (ushort)bVar60) >> 6);
    param_1[0x1a] =
         (char)((ushort)((ushort)bVar35 + (ushort)bVar76 + (ushort)bVar35 * (ushort)bVar76) >> 6);
    param_1[0x1b] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar92 + (ushort)param_5 * (ushort)bVar92) >> 5);
    param_1[0x1c] =
         (char)((ushort)((ushort)bVar18 + (ushort)bVar45 + (ushort)bVar18 * (ushort)bVar45) >> 6);
    param_1[0x1d] =
         (char)((ushort)((ushort)bVar27 + (ushort)bVar61 + (ushort)bVar27 * (ushort)bVar61) >> 6);
    param_1[0x1e] =
         (char)((ushort)((ushort)bVar36 + (ushort)bVar77 + (ushort)bVar36 * (ushort)bVar77) >> 6);
    param_1[0x1f] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar93 + (ushort)param_5 * (ushort)bVar93) >> 5);
    param_1[0x20] =
         (char)((ushort)((ushort)(byte)uVar3 + (ushort)bVar46 + (ushort)(byte)uVar6 * (ushort)bVar46
                        ) >> 6);
    param_1[0x21] =
         (char)((ushort)((ushort)(byte)uVar4 + (ushort)bVar62 + (ushort)(byte)uVar7 * (ushort)bVar62
                        ) >> 6);
    param_1[0x22] =
         (char)((ushort)((ushort)(byte)uVar5 + (ushort)bVar78 + (ushort)(byte)uVar8 * (ushort)bVar78
                        ) >> 6);
    param_1[0x23] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar94 + (ushort)param_5 * (ushort)bVar94) >> 5);
    param_1[0x24] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 8) + (ushort)bVar47 +
                        (ushort)(byte)((uint7)uVar6 >> 8) * (ushort)bVar47) >> 6);
    param_1[0x25] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 8) + (ushort)bVar63 +
                        (ushort)(byte)((uint7)uVar7 >> 8) * (ushort)bVar63) >> 6);
    param_1[0x26] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 8) + (ushort)bVar79 +
                        (ushort)(byte)((uint7)uVar8 >> 8) * (ushort)bVar79) >> 6);
    param_1[0x27] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar95 + (ushort)param_5 * (ushort)bVar95) >> 5);
    param_1[0x28] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 0x10) + (ushort)bVar48 +
                        (ushort)(byte)((uint7)uVar6 >> 0x10) * (ushort)bVar48) >> 6);
    param_1[0x29] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 0x10) + (ushort)bVar64 +
                        (ushort)(byte)((uint7)uVar7 >> 0x10) * (ushort)bVar64) >> 6);
    param_1[0x2a] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 0x10) + (ushort)bVar80 +
                        (ushort)(byte)((uint7)uVar8 >> 0x10) * (ushort)bVar80) >> 6);
    param_1[0x2b] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar96 + (ushort)param_5 * (ushort)bVar96) >> 5);
    param_1[0x2c] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 0x18) + (ushort)bVar49 +
                        (ushort)(byte)((uint7)uVar6 >> 0x18) * (ushort)bVar49) >> 6);
    param_1[0x2d] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 0x18) + (ushort)bVar65 +
                        (ushort)(byte)((uint7)uVar7 >> 0x18) * (ushort)bVar65) >> 6);
    param_1[0x2e] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 0x18) + (ushort)bVar81 +
                        (ushort)(byte)((uint7)uVar8 >> 0x18) * (ushort)bVar81) >> 6);
    param_1[0x2f] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar97 + (ushort)param_5 * (ushort)bVar97) >> 5);
    param_1[0x30] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 0x20) + (ushort)bVar50 +
                        (ushort)(byte)((uint7)uVar6 >> 0x20) * (ushort)bVar50) >> 6);
    param_1[0x31] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 0x20) + (ushort)bVar66 +
                        (ushort)(byte)((uint7)uVar7 >> 0x20) * (ushort)bVar66) >> 6);
    param_1[0x32] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 0x20) + (ushort)bVar82 +
                        (ushort)(byte)((uint7)uVar8 >> 0x20) * (ushort)bVar82) >> 6);
    param_1[0x33] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar98 + (ushort)param_5 * (ushort)bVar98) >> 5);
    param_1[0x34] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 0x28) + (ushort)bVar51 +
                        (ushort)(byte)((uint7)uVar6 >> 0x28) * (ushort)bVar51) >> 6);
    param_1[0x35] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 0x28) + (ushort)bVar67 +
                        (ushort)(byte)((uint7)uVar7 >> 0x28) * (ushort)bVar67) >> 6);
    param_1[0x36] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 0x28) + (ushort)bVar83 +
                        (ushort)(byte)((uint7)uVar8 >> 0x28) * (ushort)bVar83) >> 6);
    param_1[0x37] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar99 + (ushort)param_5 * (ushort)bVar99) >> 5);
    param_1[0x38] =
         (char)((ushort)((ushort)(byte)((uint7)uVar3 >> 0x30) + (ushort)bVar52 +
                        (ushort)(byte)((uint7)uVar6 >> 0x30) * (ushort)bVar52) >> 6);
    param_1[0x39] =
         (char)((ushort)((ushort)(byte)((uint7)uVar4 >> 0x30) + (ushort)bVar68 +
                        (ushort)(byte)((uint7)uVar7 >> 0x30) * (ushort)bVar68) >> 6);
    param_1[0x3a] =
         (char)((ushort)((ushort)(byte)((uint7)uVar5 >> 0x30) + (ushort)bVar84 +
                        (ushort)(byte)((uint7)uVar8 >> 0x30) * (ushort)bVar84) >> 6);
    param_1[0x3b] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar100 + (ushort)param_5 * (ushort)bVar100) >> 5
               );
    param_1[0x3c] =
         (char)((ushort)((ushort)bVar19 + (ushort)bVar53 + (ushort)bVar19 * (ushort)bVar53) >> 6);
    param_1[0x3d] =
         (char)((ushort)((ushort)bVar28 + (ushort)bVar69 + (ushort)bVar28 * (ushort)bVar69) >> 6);
    param_1[0x3e] =
         (char)((ushort)((ushort)bVar37 + (ushort)bVar85 + (ushort)bVar37 * (ushort)bVar85) >> 6);
    param_1[0x3f] =
         (char)((ushort)((ushort)param_5 + (ushort)bVar101 + (ushort)param_5 * (ushort)bVar101) >> 5
               );
    param_1 = param_1 + 0x40;
    iVar2 = param_6 + -0x10;
    bVar1 = 0xf < param_6;
    param_6 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


