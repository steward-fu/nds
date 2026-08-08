/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_map_indexes_extended_asm
 * Address  : 0019f754
 * Program  : drastic64
 */


void render_scanline_affine_setup_map_indexes_extended_asm
               (undefined7 *param_1,int *param_2,int param_3,uint param_4,uint param_5,short param_6
               ,short param_7,int param_8,uint param_9)

{
  bool bVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  undefined6 uVar5;
  undefined4 uVar6;
  undefined6 uVar7;
  undefined4 uVar8;
  undefined6 uVar9;
  undefined6 uVar10;
  undefined6 uVar11;
  undefined6 uVar12;
  undefined6 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined7 uVar16;
  undefined7 uVar17;
  uint uVar18;
  byte *pbVar19;
  short *psVar21;
  byte bVar22;
  undefined uVar23;
  byte bVar28;
  byte bVar29;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  byte bVar30;
  byte bVar31;
  byte bVar36;
  byte bVar37;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
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
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  ushort uVar88;
  ushort uVar89;
  ushort uVar90;
  ushort uVar91;
  ushort uVar92;
  ushort uVar93;
  ushort uVar94;
  ushort uVar95;
  ushort uVar96;
  ushort uVar97;
  short sVar98;
  short sVar101;
  short sVar104;
  short sVar107;
  byte bVar110;
  undefined auVar111 [16];
  undefined auVar112 [16];
  byte *pbVar20;
  undefined4 uVar99;
  undefined6 uVar100;
  undefined4 uVar102;
  undefined6 uVar103;
  undefined4 uVar105;
  undefined6 uVar106;
  undefined4 uVar108;
  undefined6 uVar109;
  
  uVar18 = param_8 * 2;
  bVar22 = (byte)uVar18;
  uVar23 = (undefined)param_9;
  auVar111[1] = uVar23;
  auVar111[0] = uVar23;
  auVar111[2] = uVar23;
  auVar111[3] = uVar23;
  auVar111[4] = uVar23;
  auVar111[5] = uVar23;
  auVar111[6] = uVar23;
  auVar111[7] = uVar23;
  auVar111[8] = uVar23;
  auVar111[9] = uVar23;
  auVar111[10] = uVar23;
  auVar111[11] = uVar23;
  auVar111[12] = uVar23;
  auVar111[13] = uVar23;
  auVar111[14] = uVar23;
  auVar111[15] = uVar23;
  auVar112[8] = 1;
  auVar112._0_8_ = 0x101010101010101;
  auVar112[9] = 1;
  auVar112[10] = 1;
  auVar112[11] = 1;
  auVar112[12] = 1;
  auVar112[13] = 1;
  auVar112[14] = 1;
  auVar112[15] = 1;
  auVar112 = NEON_ushl(auVar112,auVar111,1);
  psVar21 = (short *)((long)param_2 + 2);
  *param_2 = (param_4 >> 10 & uVar18) + ((param_5 >> 10 & uVar18) << (ulong)(param_9 & 0x1f));
  do {
    uVar16 = *param_1;
    pbVar19 = (byte *)((long)param_1 + 7);
    uVar14 = *(undefined8 *)(param_1 + 1);
    uVar17 = param_1[2];
    pbVar20 = (byte *)((long)param_1 + 0x17);
    uVar15 = *(undefined8 *)(param_1 + 3);
    param_1 = param_1 + 4;
    uVar90 = (ushort)(byte)((uint7)uVar16 >> 8);
    uVar91 = (ushort)(byte)((uint7)uVar16 >> 0x10);
    uVar92 = (ushort)(byte)((uint7)uVar16 >> 0x18);
    uVar93 = (ushort)(byte)((uint7)uVar16 >> 0x20);
    uVar94 = (ushort)(byte)((uint7)uVar17 >> 8);
    uVar95 = (ushort)(byte)((uint7)uVar17 >> 0x10);
    uVar96 = (ushort)(byte)((uint7)uVar17 >> 0x18);
    uVar97 = (ushort)(byte)((uint7)uVar17 >> 0x20);
    bVar28 = (byte)((ulong)uVar14 >> 8);
    bVar30 = (byte)((ulong)uVar14 >> 0x10);
    bVar36 = (byte)((ulong)uVar14 >> 0x18);
    uVar88 = (ushort)(byte)((ulong)uVar14 >> 0x20);
    bVar42 = (byte)((ulong)uVar14 >> 0x38);
    bVar29 = (byte)((ulong)uVar15 >> 8);
    bVar31 = (byte)((ulong)uVar15 >> 0x10);
    bVar37 = (byte)((ulong)uVar15 >> 0x18);
    uVar89 = (ushort)(byte)((ulong)uVar15 >> 0x20);
    bVar43 = (byte)((ulong)uVar15 >> 0x38);
    iVar56 = param_4 + (int)(short)(ushort)(byte)uVar16 * (uint)(uint3)(int3)param_6;
    iVar57 = param_4 + (int)(short)uVar90 * (uint)(uint3)(int3)param_6;
    iVar58 = param_4 + (int)(short)uVar91 * (int)param_6;
    iVar59 = param_4 + (int)(short)uVar92 * (int)param_6;
    iVar64 = param_4 + (int)(short)(ushort)(byte)uVar14 * (uint)(uint3)(int3)param_6;
    iVar65 = param_4 + (int)(short)(ushort)bVar28 * (uint)(uint3)(int3)param_6;
    iVar66 = param_4 + (int)(short)(ushort)bVar30 * (int)param_6;
    iVar67 = param_4 + (int)(short)(ushort)bVar36 * (int)param_6;
    iVar72 = param_4 + (int)(short)(ushort)(byte)uVar17 * (uint)(uint3)(int3)param_6;
    iVar73 = param_4 + (int)(short)uVar94 * (uint)(uint3)(int3)param_6;
    iVar74 = param_4 + (int)(short)uVar95 * (int)param_6;
    iVar75 = param_4 + (int)(short)uVar96 * (int)param_6;
    iVar80 = param_4 + (int)(short)(ushort)(byte)uVar15 * (uint)(uint3)(int3)param_6;
    iVar81 = param_4 + (int)(short)(ushort)bVar29 * (uint)(uint3)(int3)param_6;
    iVar82 = param_4 + (int)(short)(ushort)bVar31 * (int)param_6;
    iVar83 = param_4 + (int)(short)(ushort)bVar37 * (int)param_6;
    uVar32 = (ushort)(byte)((uint7)uVar16 >> 0x28);
    uVar38 = (ushort)(byte)((uint7)uVar16 >> 0x30);
    iVar60 = param_4 + (uint)(uint3)(int3)(short)uVar93 * (int)param_6;
    iVar61 = param_4 + (uint)(uint3)(int3)(short)uVar32 * (int)param_6;
    iVar62 = param_4 + (int)(short)uVar38 * (int)param_6;
    iVar63 = param_4 + (int)(short)(ushort)*pbVar19 * (int)param_6;
    uVar33 = (ushort)(byte)((ulong)uVar14 >> 0x28);
    uVar39 = (ushort)(byte)((ulong)uVar14 >> 0x30);
    iVar68 = param_4 + (uint)(uint3)(int3)(short)uVar88 * (int)param_6;
    iVar69 = param_4 + (uint)(uint3)(int3)(short)uVar33 * (int)param_6;
    iVar70 = param_4 + (int)(short)uVar39 * (int)param_6;
    iVar71 = param_4 + (int)(short)(ushort)bVar42 * (int)param_6;
    uVar34 = (ushort)(byte)((uint7)uVar17 >> 0x28);
    uVar40 = (ushort)(byte)((uint7)uVar17 >> 0x30);
    iVar76 = param_4 + (uint)(uint3)(int3)(short)uVar97 * (int)param_6;
    iVar77 = param_4 + (uint)(uint3)(int3)(short)uVar34 * (int)param_6;
    iVar78 = param_4 + (int)(short)uVar40 * (int)param_6;
    iVar79 = param_4 + (int)(short)(ushort)*pbVar20 * (int)param_6;
    uVar35 = (ushort)(byte)((ulong)uVar15 >> 0x28);
    uVar41 = (ushort)(byte)((ulong)uVar15 >> 0x30);
    iVar84 = param_4 + (uint)(uint3)(int3)(short)uVar89 * (int)param_6;
    iVar85 = param_4 + (uint)(uint3)(int3)(short)uVar35 * (int)param_6;
    iVar86 = param_4 + (int)(short)uVar41 * (int)param_6;
    iVar87 = param_4 + (int)(short)(ushort)bVar43 * (int)param_6;
    uVar24 = (ushort)((uint)iVar60 >> 8);
    bVar44 = (byte)((uint)iVar61 >> 0x10);
    bVar48 = (byte)((uint)iVar62 >> 0x10);
    bVar52 = (byte)((uint)iVar63 >> 0x10);
    uVar2 = CONCAT13(bVar44,CONCAT12((char)((uint)iVar61 >> 8),uVar24));
    uVar3 = CONCAT15(bVar48,CONCAT14((char)((uint)iVar62 >> 8),uVar2));
    uVar25 = (ushort)((uint)iVar68 >> 8);
    bVar45 = (byte)((uint)iVar69 >> 0x10);
    bVar49 = (byte)((uint)iVar70 >> 0x10);
    bVar53 = (byte)((uint)iVar71 >> 0x10);
    uVar4 = CONCAT13(bVar45,CONCAT12((char)((uint)iVar69 >> 8),uVar25));
    uVar5 = CONCAT15(bVar49,CONCAT14((char)((uint)iVar70 >> 8),uVar4));
    uVar26 = (ushort)((uint)iVar76 >> 8);
    bVar46 = (byte)((uint)iVar77 >> 0x10);
    bVar50 = (byte)((uint)iVar78 >> 0x10);
    bVar54 = (byte)((uint)iVar79 >> 0x10);
    uVar6 = CONCAT13(bVar46,CONCAT12((char)((uint)iVar77 >> 8),uVar26));
    uVar7 = CONCAT15(bVar50,CONCAT14((char)((uint)iVar78 >> 8),uVar6));
    uVar27 = (ushort)((uint)iVar84 >> 8);
    bVar47 = (byte)((uint)iVar85 >> 0x10);
    bVar51 = (byte)((uint)iVar86 >> 0x10);
    bVar55 = (byte)((uint)iVar87 >> 0x10);
    uVar8 = CONCAT13(bVar47,CONCAT12((char)((uint)iVar85 >> 8),uVar27));
    uVar9 = CONCAT15(bVar51,CONCAT14((char)((uint)iVar86 >> 8),uVar8));
    bVar110 = (byte)(uVar18 >> 8);
    sVar98 = CONCAT11((byte)((uint)iVar60 >> 0x10) >> 2 & bVar110,(byte)(uVar24 >> 2) & bVar22);
    uVar99 = CONCAT13(bVar44 >> 2 & bVar110,
                      CONCAT12((byte)(ushort)((uint)uVar2 >> 0x12) & bVar22,sVar98));
    uVar100 = CONCAT15(bVar48 >> 2 & bVar110,
                       CONCAT14((byte)(ushort)((uint6)uVar3 >> 0x22) & bVar22,uVar99));
    sVar101 = CONCAT11((byte)((uint)iVar68 >> 0x10) >> 2 & bVar110,(byte)(uVar25 >> 2) & bVar22);
    uVar102 = CONCAT13(bVar45 >> 2 & bVar110,
                       CONCAT12((byte)(ushort)((uint)uVar4 >> 0x12) & bVar22,sVar101));
    uVar103 = CONCAT15(bVar49 >> 2 & bVar110,
                       CONCAT14((byte)(ushort)((uint6)uVar5 >> 0x22) & bVar22,uVar102));
    sVar104 = CONCAT11((byte)((uint)iVar76 >> 0x10) >> 2 & bVar110,(byte)(uVar26 >> 2) & bVar22);
    uVar105 = CONCAT13(bVar46 >> 2 & bVar110,
                       CONCAT12((byte)(ushort)((uint)uVar6 >> 0x12) & bVar22,sVar104));
    uVar106 = CONCAT15(bVar50 >> 2 & bVar110,
                       CONCAT14((byte)(ushort)((uint6)uVar7 >> 0x22) & bVar22,uVar105));
    sVar107 = CONCAT11((byte)((uint)iVar84 >> 0x10) >> 2 & bVar110,(byte)(uVar27 >> 2) & bVar22);
    uVar108 = CONCAT13(bVar47 >> 2 & bVar110,
                       CONCAT12((byte)(ushort)((uint)uVar8 >> 0x12) & bVar22,sVar107));
    uVar109 = CONCAT15(bVar51 >> 2 & bVar110,
                       CONCAT14((byte)(ushort)((uint6)uVar9 >> 0x22) & bVar22,uVar108));
    iVar60 = param_5 + (uint)(uint3)(int3)(short)uVar32 * (int)param_7;
    iVar61 = param_5 + (int)(short)uVar38 * (int)param_7;
    iVar62 = param_5 + (int)(short)(ushort)*pbVar19 * (int)param_7;
    iVar68 = param_5 + (uint)(uint3)(int3)(short)uVar33 * (int)param_7;
    iVar69 = param_5 + (int)(short)uVar39 * (int)param_7;
    iVar70 = param_5 + (int)(short)(ushort)bVar42 * (int)param_7;
    iVar76 = param_5 + (uint)(uint3)(int3)(short)uVar34 * (int)param_7;
    iVar77 = param_5 + (int)(short)uVar40 * (int)param_7;
    iVar78 = param_5 + (int)(short)(ushort)*pbVar20 * (int)param_7;
    iVar84 = param_5 + (uint)(uint3)(int3)(short)uVar35 * (int)param_7;
    iVar85 = param_5 + (int)(short)uVar41 * (int)param_7;
    iVar86 = param_5 + (int)(short)(ushort)bVar43 * (int)param_7;
    uVar24 = (ushort)(param_5 + (uint)(uint3)(int3)(short)uVar93 * (int)param_7 >> 8);
    uVar2 = CONCAT13((char)((uint)iVar60 >> 0x10),CONCAT12((char)((uint)iVar60 >> 8),uVar24));
    uVar10 = CONCAT15((char)((uint)iVar61 >> 0x10),CONCAT14((char)((uint)iVar61 >> 8),uVar2));
    uVar25 = (ushort)(param_5 + (uint)(uint3)(int3)(short)uVar88 * (int)param_7 >> 8);
    uVar4 = CONCAT13((char)((uint)iVar68 >> 0x10),CONCAT12((char)((uint)iVar68 >> 8),uVar25));
    uVar11 = CONCAT15((char)((uint)iVar69 >> 0x10),CONCAT14((char)((uint)iVar69 >> 8),uVar4));
    uVar26 = (ushort)(param_5 + (uint)(uint3)(int3)(short)uVar97 * (int)param_7 >> 8);
    uVar6 = CONCAT13((char)((uint)iVar76 >> 0x10),CONCAT12((char)((uint)iVar76 >> 8),uVar26));
    uVar12 = CONCAT15((char)((uint)iVar77 >> 0x10),CONCAT14((char)((uint)iVar77 >> 8),uVar6));
    uVar27 = (ushort)(param_5 + (uint)(uint3)(int3)(short)uVar89 * (int)param_7 >> 8);
    uVar8 = CONCAT13((char)((uint)iVar84 >> 0x10),CONCAT12((char)((uint)iVar84 >> 8),uVar27));
    uVar13 = CONCAT15((char)((uint)iVar85 >> 0x10),CONCAT14((char)((uint)iVar85 >> 8),uVar8));
    *psVar21 = CONCAT11((byte)((uint)iVar56 >> 0x10) >> 2 & bVar110,
                        (byte)((ushort)((uint)iVar56 >> 8) >> 2) & bVar22) +
               (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)(byte)uVar16 *
                                                  (uint)(uint3)(int3)param_7 >> 8) >> 2) & bVar22) *
               (ushort)auVar112[0];
    psVar21[1] = CONCAT11((byte)((uint)iVar57 >> 0x10) >> 2 & bVar110,
                          (byte)((ushort)((uint)iVar57 >> 8) >> 2) & bVar22) +
                 (ushort)((byte)((ushort)(param_5 + (int)(short)uVar90 * (uint)(uint3)(int3)param_7
                                         >> 8) >> 2) & bVar22) * (ushort)auVar112[1];
    psVar21[2] = CONCAT11((byte)((uint)iVar58 >> 0x10) >> 2 & bVar110,
                          (byte)((ushort)((uint)iVar58 >> 8) >> 2) & bVar22) +
                 (ushort)((byte)((ushort)(param_5 + (int)(short)uVar91 * (int)param_7 >> 8) >> 2) &
                         bVar22) * (ushort)auVar112[2];
    psVar21[3] = CONCAT11((byte)((uint)iVar59 >> 0x10) >> 2 & bVar110,
                          (byte)((ushort)((uint)iVar59 >> 8) >> 2) & bVar22) +
                 (ushort)((byte)((ushort)(param_5 + (int)(short)uVar92 * (int)param_7 >> 8) >> 2) &
                         bVar22) * (ushort)auVar112[3];
    psVar21[4] = sVar98 + (ushort)((byte)(uVar24 >> 2) & bVar22) * (ushort)auVar112[4];
    psVar21[5] = (short)((uint)uVar99 >> 0x10) +
                 (ushort)((byte)(ushort)((uint)uVar2 >> 0x12) & bVar22) * (ushort)auVar112[5];
    psVar21[6] = (short)((uint6)uVar100 >> 0x20) +
                 (ushort)((byte)(ushort)((uint6)uVar10 >> 0x22) & bVar22) * (ushort)auVar112[6];
    psVar21[7] = (short)(CONCAT17(bVar52 >> 2 & bVar110,
                                  CONCAT16((byte)(ushort)(CONCAT17(bVar52,CONCAT16((char)((uint)
                                                  iVar63 >> 8),uVar3)) >> 0x32) & bVar22,uVar100))
                        >> 0x30) +
                 (ushort)((byte)(ushort)(CONCAT17((char)((uint)iVar62 >> 0x10),
                                                  CONCAT16((char)((uint)iVar62 >> 8),uVar10)) >>
                                        0x32) & bVar22) * (ushort)auVar112[7];
    psVar21[8] = CONCAT11((byte)((uint)iVar64 >> 0x10) >> 2 & bVar110,
                          (byte)((ushort)((uint)iVar64 >> 8) >> 2) & bVar22) +
                 (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)(byte)uVar14 *
                                                    (uint)(uint3)(int3)param_7 >> 8) >> 2) & bVar22)
                 * (ushort)auVar112[8];
    psVar21[9] = CONCAT11((byte)((uint)iVar65 >> 0x10) >> 2 & bVar110,
                          (byte)((ushort)((uint)iVar65 >> 8) >> 2) & bVar22) +
                 (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar28 *
                                                    (uint)(uint3)(int3)param_7 >> 8) >> 2) & bVar22)
                 * (ushort)auVar112[9];
    psVar21[10] = CONCAT11((byte)((uint)iVar66 >> 0x10) >> 2 & bVar110,
                           (byte)((ushort)((uint)iVar66 >> 8) >> 2) & bVar22) +
                  (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar30 * (int)param_7 >> 8)
                                 >> 2) & bVar22) * (ushort)auVar112[10];
    psVar21[0xb] = CONCAT11((byte)((uint)iVar67 >> 0x10) >> 2 & bVar110,
                            (byte)((ushort)((uint)iVar67 >> 8) >> 2) & bVar22) +
                   (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar36 * (int)param_7 >> 8
                                           ) >> 2) & bVar22) * (ushort)auVar112[11];
    psVar21[0xc] = sVar101 + (ushort)((byte)(uVar25 >> 2) & bVar22) * (ushort)auVar112[12];
    psVar21[0xd] = (short)((uint)uVar102 >> 0x10) +
                   (ushort)((byte)(ushort)((uint)uVar4 >> 0x12) & bVar22) * (ushort)auVar112[13];
    psVar21[0xe] = (short)((uint6)uVar103 >> 0x20) +
                   (ushort)((byte)(ushort)((uint6)uVar11 >> 0x22) & bVar22) * (ushort)auVar112[14];
    psVar21[0xf] = (short)(CONCAT17(bVar53 >> 2 & bVar110,
                                    CONCAT16((byte)(ushort)(CONCAT17(bVar53,CONCAT16((char)((uint)
                                                  iVar71 >> 8),uVar5)) >> 0x32) & bVar22,uVar103))
                          >> 0x30) +
                   (ushort)((byte)(ushort)(CONCAT17((char)((uint)iVar70 >> 0x10),
                                                    CONCAT16((char)((uint)iVar70 >> 8),uVar11)) >>
                                          0x32) & bVar22) * (ushort)auVar112[15];
    psVar21[0x10] =
         CONCAT11((byte)((uint)iVar72 >> 0x10) >> 2 & bVar110,
                  (byte)((ushort)((uint)iVar72 >> 8) >> 2) & bVar22) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)(byte)uVar17 *
                                            (uint)(uint3)(int3)param_7 >> 8) >> 2) & bVar22) *
         (ushort)auVar112[0];
    psVar21[0x11] =
         CONCAT11((byte)((uint)iVar73 >> 0x10) >> 2 & bVar110,
                  (byte)((ushort)((uint)iVar73 >> 8) >> 2) & bVar22) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)uVar94 * (uint)(uint3)(int3)param_7 >> 8) >>
                        2) & bVar22) * (ushort)auVar112[1];
    psVar21[0x12] =
         CONCAT11((byte)((uint)iVar74 >> 0x10) >> 2 & bVar110,
                  (byte)((ushort)((uint)iVar74 >> 8) >> 2) & bVar22) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)uVar95 * (int)param_7 >> 8) >> 2) & bVar22)
         * (ushort)auVar112[2];
    psVar21[0x13] =
         CONCAT11((byte)((uint)iVar75 >> 0x10) >> 2 & bVar110,
                  (byte)((ushort)((uint)iVar75 >> 8) >> 2) & bVar22) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)uVar96 * (int)param_7 >> 8) >> 2) & bVar22)
         * (ushort)auVar112[3];
    psVar21[0x14] = sVar104 + (ushort)((byte)(uVar26 >> 2) & bVar22) * (ushort)auVar112[4];
    psVar21[0x15] =
         (short)((uint)uVar105 >> 0x10) +
         (ushort)((byte)(ushort)((uint)uVar6 >> 0x12) & bVar22) * (ushort)auVar112[5];
    psVar21[0x16] =
         (short)((uint6)uVar106 >> 0x20) +
         (ushort)((byte)(ushort)((uint6)uVar12 >> 0x22) & bVar22) * (ushort)auVar112[6];
    psVar21[0x17] =
         (short)(CONCAT17(bVar54 >> 2 & bVar110,
                          CONCAT16((byte)(ushort)(CONCAT17(bVar54,CONCAT16((char)((uint)iVar79 >> 8)
                                                                           ,uVar7)) >> 0x32) &
                                   bVar22,uVar106)) >> 0x30) +
         (ushort)((byte)(ushort)(CONCAT17((char)((uint)iVar78 >> 0x10),
                                          CONCAT16((char)((uint)iVar78 >> 8),uVar12)) >> 0x32) &
                 bVar22) * (ushort)auVar112[7];
    psVar21[0x18] =
         CONCAT11((byte)((uint)iVar80 >> 0x10) >> 2 & bVar110,
                  (byte)((ushort)((uint)iVar80 >> 8) >> 2) & bVar22) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)(byte)uVar15 *
                                            (uint)(uint3)(int3)param_7 >> 8) >> 2) & bVar22) *
         (ushort)auVar112[8];
    psVar21[0x19] =
         CONCAT11((byte)((uint)iVar81 >> 0x10) >> 2 & bVar110,
                  (byte)((ushort)((uint)iVar81 >> 8) >> 2) & bVar22) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar29 * (uint)(uint3)(int3)param_7
                                 >> 8) >> 2) & bVar22) * (ushort)auVar112[9];
    psVar21[0x1a] =
         CONCAT11((byte)((uint)iVar82 >> 0x10) >> 2 & bVar110,
                  (byte)((ushort)((uint)iVar82 >> 8) >> 2) & bVar22) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar31 * (int)param_7 >> 8) >> 2) &
                 bVar22) * (ushort)auVar112[10];
    psVar21[0x1b] =
         CONCAT11((byte)((uint)iVar83 >> 0x10) >> 2 & bVar110,
                  (byte)((ushort)((uint)iVar83 >> 8) >> 2) & bVar22) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar37 * (int)param_7 >> 8) >> 2) &
                 bVar22) * (ushort)auVar112[11];
    psVar21[0x1c] = sVar107 + (ushort)((byte)(uVar27 >> 2) & bVar22) * (ushort)auVar112[12];
    psVar21[0x1d] =
         (short)((uint)uVar108 >> 0x10) +
         (ushort)((byte)(ushort)((uint)uVar8 >> 0x12) & bVar22) * (ushort)auVar112[13];
    psVar21[0x1e] =
         (short)((uint6)uVar109 >> 0x20) +
         (ushort)((byte)(ushort)((uint6)uVar13 >> 0x22) & bVar22) * (ushort)auVar112[14];
    psVar21[0x1f] =
         (short)(CONCAT17(bVar55 >> 2 & bVar110,
                          CONCAT16((byte)(ushort)(CONCAT17(bVar55,CONCAT16((char)((uint)iVar87 >> 8)
                                                                           ,uVar9)) >> 0x32) &
                                   bVar22,uVar109)) >> 0x30) +
         (ushort)((byte)(ushort)(CONCAT17((char)((uint)iVar86 >> 0x10),
                                          CONCAT16((char)((uint)iVar86 >> 8),uVar13)) >> 0x32) &
                 bVar22) * (ushort)auVar112[15];
    psVar21 = psVar21 + 0x20;
    iVar56 = param_3 + -0x20;
    bVar1 = 0x1f < param_3;
    param_3 = iVar56;
  } while (iVar56 != 0 && bVar1);
  return;
}


