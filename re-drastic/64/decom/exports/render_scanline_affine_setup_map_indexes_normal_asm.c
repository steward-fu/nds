/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_map_indexes_normal_asm
 * Address  : 0019f5e8
 * Program  : drastic64
 */


void render_scanline_affine_setup_map_indexes_normal_asm
               (undefined7 *param_1,int *param_2,int param_3,uint param_4,uint param_5,short param_6
               ,short param_7,uint param_8,uint param_9)

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
  byte *pbVar18;
  short *psVar20;
  byte bVar21;
  undefined uVar22;
  byte bVar27;
  byte bVar28;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  byte bVar29;
  byte bVar30;
  byte bVar35;
  byte bVar36;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
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
  int iVar55;
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
  ushort uVar87;
  ushort uVar88;
  ushort uVar89;
  ushort uVar90;
  ushort uVar91;
  ushort uVar92;
  ushort uVar93;
  ushort uVar94;
  ushort uVar95;
  ushort uVar96;
  short sVar97;
  short sVar100;
  short sVar103;
  short sVar106;
  byte bVar109;
  undefined auVar110 [16];
  undefined auVar111 [16];
  byte *pbVar19;
  undefined4 uVar98;
  undefined6 uVar99;
  undefined4 uVar101;
  undefined6 uVar102;
  undefined4 uVar104;
  undefined6 uVar105;
  undefined4 uVar107;
  undefined6 uVar108;
  
  bVar21 = (byte)param_8;
  uVar22 = (undefined)param_9;
  auVar110[1] = uVar22;
  auVar110[0] = uVar22;
  auVar110[2] = uVar22;
  auVar110[3] = uVar22;
  auVar110[4] = uVar22;
  auVar110[5] = uVar22;
  auVar110[6] = uVar22;
  auVar110[7] = uVar22;
  auVar110[8] = uVar22;
  auVar110[9] = uVar22;
  auVar110[10] = uVar22;
  auVar110[11] = uVar22;
  auVar110[12] = uVar22;
  auVar110[13] = uVar22;
  auVar110[14] = uVar22;
  auVar110[15] = uVar22;
  auVar111[8] = 1;
  auVar111._0_8_ = 0x101010101010101;
  auVar111[9] = 1;
  auVar111[10] = 1;
  auVar111[11] = 1;
  auVar111[12] = 1;
  auVar111[13] = 1;
  auVar111[14] = 1;
  auVar111[15] = 1;
  auVar111 = NEON_ushl(auVar111,auVar110,1);
  psVar20 = (short *)((long)param_2 + 2);
  *param_2 = (param_4 >> 0xb & param_8) + ((param_5 >> 0xb & param_8) << (ulong)(param_9 & 0x1f));
  do {
    uVar16 = *param_1;
    pbVar18 = (byte *)((long)param_1 + 7);
    uVar14 = *(undefined8 *)(param_1 + 1);
    uVar17 = param_1[2];
    pbVar19 = (byte *)((long)param_1 + 0x17);
    uVar15 = *(undefined8 *)(param_1 + 3);
    param_1 = param_1 + 4;
    uVar89 = (ushort)(byte)((uint7)uVar16 >> 8);
    uVar90 = (ushort)(byte)((uint7)uVar16 >> 0x10);
    uVar91 = (ushort)(byte)((uint7)uVar16 >> 0x18);
    uVar92 = (ushort)(byte)((uint7)uVar16 >> 0x20);
    uVar93 = (ushort)(byte)((uint7)uVar17 >> 8);
    uVar94 = (ushort)(byte)((uint7)uVar17 >> 0x10);
    uVar95 = (ushort)(byte)((uint7)uVar17 >> 0x18);
    uVar96 = (ushort)(byte)((uint7)uVar17 >> 0x20);
    bVar27 = (byte)((ulong)uVar14 >> 8);
    bVar29 = (byte)((ulong)uVar14 >> 0x10);
    bVar35 = (byte)((ulong)uVar14 >> 0x18);
    uVar87 = (ushort)(byte)((ulong)uVar14 >> 0x20);
    bVar41 = (byte)((ulong)uVar14 >> 0x38);
    bVar28 = (byte)((ulong)uVar15 >> 8);
    bVar30 = (byte)((ulong)uVar15 >> 0x10);
    bVar36 = (byte)((ulong)uVar15 >> 0x18);
    uVar88 = (ushort)(byte)((ulong)uVar15 >> 0x20);
    bVar42 = (byte)((ulong)uVar15 >> 0x38);
    iVar55 = param_4 + (int)(short)(ushort)(byte)uVar16 * (uint)(uint3)(int3)param_6;
    iVar56 = param_4 + (int)(short)uVar89 * (uint)(uint3)(int3)param_6;
    iVar57 = param_4 + (int)(short)uVar90 * (int)param_6;
    iVar58 = param_4 + (int)(short)uVar91 * (int)param_6;
    iVar63 = param_4 + (int)(short)(ushort)(byte)uVar14 * (uint)(uint3)(int3)param_6;
    iVar64 = param_4 + (int)(short)(ushort)bVar27 * (uint)(uint3)(int3)param_6;
    iVar65 = param_4 + (int)(short)(ushort)bVar29 * (int)param_6;
    iVar66 = param_4 + (int)(short)(ushort)bVar35 * (int)param_6;
    iVar71 = param_4 + (int)(short)(ushort)(byte)uVar17 * (uint)(uint3)(int3)param_6;
    iVar72 = param_4 + (int)(short)uVar93 * (uint)(uint3)(int3)param_6;
    iVar73 = param_4 + (int)(short)uVar94 * (int)param_6;
    iVar74 = param_4 + (int)(short)uVar95 * (int)param_6;
    iVar79 = param_4 + (int)(short)(ushort)(byte)uVar15 * (uint)(uint3)(int3)param_6;
    iVar80 = param_4 + (int)(short)(ushort)bVar28 * (uint)(uint3)(int3)param_6;
    iVar81 = param_4 + (int)(short)(ushort)bVar30 * (int)param_6;
    iVar82 = param_4 + (int)(short)(ushort)bVar36 * (int)param_6;
    uVar31 = (ushort)(byte)((uint7)uVar16 >> 0x28);
    uVar37 = (ushort)(byte)((uint7)uVar16 >> 0x30);
    iVar59 = param_4 + (uint)(uint3)(int3)(short)uVar92 * (int)param_6;
    iVar60 = param_4 + (uint)(uint3)(int3)(short)uVar31 * (int)param_6;
    iVar61 = param_4 + (int)(short)uVar37 * (int)param_6;
    iVar62 = param_4 + (int)(short)(ushort)*pbVar18 * (int)param_6;
    uVar32 = (ushort)(byte)((ulong)uVar14 >> 0x28);
    uVar38 = (ushort)(byte)((ulong)uVar14 >> 0x30);
    iVar67 = param_4 + (uint)(uint3)(int3)(short)uVar87 * (int)param_6;
    iVar68 = param_4 + (uint)(uint3)(int3)(short)uVar32 * (int)param_6;
    iVar69 = param_4 + (int)(short)uVar38 * (int)param_6;
    iVar70 = param_4 + (int)(short)(ushort)bVar41 * (int)param_6;
    uVar33 = (ushort)(byte)((uint7)uVar17 >> 0x28);
    uVar39 = (ushort)(byte)((uint7)uVar17 >> 0x30);
    iVar75 = param_4 + (uint)(uint3)(int3)(short)uVar96 * (int)param_6;
    iVar76 = param_4 + (uint)(uint3)(int3)(short)uVar33 * (int)param_6;
    iVar77 = param_4 + (int)(short)uVar39 * (int)param_6;
    iVar78 = param_4 + (int)(short)(ushort)*pbVar19 * (int)param_6;
    uVar34 = (ushort)(byte)((ulong)uVar15 >> 0x28);
    uVar40 = (ushort)(byte)((ulong)uVar15 >> 0x30);
    iVar83 = param_4 + (uint)(uint3)(int3)(short)uVar88 * (int)param_6;
    iVar84 = param_4 + (uint)(uint3)(int3)(short)uVar34 * (int)param_6;
    iVar85 = param_4 + (int)(short)uVar40 * (int)param_6;
    iVar86 = param_4 + (int)(short)(ushort)bVar42 * (int)param_6;
    uVar23 = (ushort)((uint)iVar59 >> 8);
    bVar43 = (byte)((uint)iVar60 >> 0x10);
    bVar47 = (byte)((uint)iVar61 >> 0x10);
    bVar51 = (byte)((uint)iVar62 >> 0x10);
    uVar2 = CONCAT13(bVar43,CONCAT12((char)((uint)iVar60 >> 8),uVar23));
    uVar3 = CONCAT15(bVar47,CONCAT14((char)((uint)iVar61 >> 8),uVar2));
    uVar24 = (ushort)((uint)iVar67 >> 8);
    bVar44 = (byte)((uint)iVar68 >> 0x10);
    bVar48 = (byte)((uint)iVar69 >> 0x10);
    bVar52 = (byte)((uint)iVar70 >> 0x10);
    uVar4 = CONCAT13(bVar44,CONCAT12((char)((uint)iVar68 >> 8),uVar24));
    uVar5 = CONCAT15(bVar48,CONCAT14((char)((uint)iVar69 >> 8),uVar4));
    uVar25 = (ushort)((uint)iVar75 >> 8);
    bVar45 = (byte)((uint)iVar76 >> 0x10);
    bVar49 = (byte)((uint)iVar77 >> 0x10);
    bVar53 = (byte)((uint)iVar78 >> 0x10);
    uVar6 = CONCAT13(bVar45,CONCAT12((char)((uint)iVar76 >> 8),uVar25));
    uVar7 = CONCAT15(bVar49,CONCAT14((char)((uint)iVar77 >> 8),uVar6));
    uVar26 = (ushort)((uint)iVar83 >> 8);
    bVar46 = (byte)((uint)iVar84 >> 0x10);
    bVar50 = (byte)((uint)iVar85 >> 0x10);
    bVar54 = (byte)((uint)iVar86 >> 0x10);
    uVar8 = CONCAT13(bVar46,CONCAT12((char)((uint)iVar84 >> 8),uVar26));
    uVar9 = CONCAT15(bVar50,CONCAT14((char)((uint)iVar85 >> 8),uVar8));
    bVar109 = (byte)(param_8 >> 8);
    sVar97 = CONCAT11((byte)((uint)iVar59 >> 0x10) >> 3 & bVar109,(byte)(uVar23 >> 3) & bVar21);
    uVar98 = CONCAT13(bVar43 >> 3 & bVar109,
                      CONCAT12((byte)(ushort)((uint)uVar2 >> 0x13) & bVar21,sVar97));
    uVar99 = CONCAT15(bVar47 >> 3 & bVar109,
                      CONCAT14((byte)(ushort)((uint6)uVar3 >> 0x23) & bVar21,uVar98));
    sVar100 = CONCAT11((byte)((uint)iVar67 >> 0x10) >> 3 & bVar109,(byte)(uVar24 >> 3) & bVar21);
    uVar101 = CONCAT13(bVar44 >> 3 & bVar109,
                       CONCAT12((byte)(ushort)((uint)uVar4 >> 0x13) & bVar21,sVar100));
    uVar102 = CONCAT15(bVar48 >> 3 & bVar109,
                       CONCAT14((byte)(ushort)((uint6)uVar5 >> 0x23) & bVar21,uVar101));
    sVar103 = CONCAT11((byte)((uint)iVar75 >> 0x10) >> 3 & bVar109,(byte)(uVar25 >> 3) & bVar21);
    uVar104 = CONCAT13(bVar45 >> 3 & bVar109,
                       CONCAT12((byte)(ushort)((uint)uVar6 >> 0x13) & bVar21,sVar103));
    uVar105 = CONCAT15(bVar49 >> 3 & bVar109,
                       CONCAT14((byte)(ushort)((uint6)uVar7 >> 0x23) & bVar21,uVar104));
    sVar106 = CONCAT11((byte)((uint)iVar83 >> 0x10) >> 3 & bVar109,(byte)(uVar26 >> 3) & bVar21);
    uVar107 = CONCAT13(bVar46 >> 3 & bVar109,
                       CONCAT12((byte)(ushort)((uint)uVar8 >> 0x13) & bVar21,sVar106));
    uVar108 = CONCAT15(bVar50 >> 3 & bVar109,
                       CONCAT14((byte)(ushort)((uint6)uVar9 >> 0x23) & bVar21,uVar107));
    iVar59 = param_5 + (uint)(uint3)(int3)(short)uVar31 * (int)param_7;
    iVar60 = param_5 + (int)(short)uVar37 * (int)param_7;
    iVar61 = param_5 + (int)(short)(ushort)*pbVar18 * (int)param_7;
    iVar67 = param_5 + (uint)(uint3)(int3)(short)uVar32 * (int)param_7;
    iVar68 = param_5 + (int)(short)uVar38 * (int)param_7;
    iVar69 = param_5 + (int)(short)(ushort)bVar41 * (int)param_7;
    iVar75 = param_5 + (uint)(uint3)(int3)(short)uVar33 * (int)param_7;
    iVar76 = param_5 + (int)(short)uVar39 * (int)param_7;
    iVar77 = param_5 + (int)(short)(ushort)*pbVar19 * (int)param_7;
    iVar83 = param_5 + (uint)(uint3)(int3)(short)uVar34 * (int)param_7;
    iVar84 = param_5 + (int)(short)uVar40 * (int)param_7;
    iVar85 = param_5 + (int)(short)(ushort)bVar42 * (int)param_7;
    uVar23 = (ushort)(param_5 + (uint)(uint3)(int3)(short)uVar92 * (int)param_7 >> 8);
    uVar2 = CONCAT13((char)((uint)iVar59 >> 0x10),CONCAT12((char)((uint)iVar59 >> 8),uVar23));
    uVar10 = CONCAT15((char)((uint)iVar60 >> 0x10),CONCAT14((char)((uint)iVar60 >> 8),uVar2));
    uVar24 = (ushort)(param_5 + (uint)(uint3)(int3)(short)uVar87 * (int)param_7 >> 8);
    uVar4 = CONCAT13((char)((uint)iVar67 >> 0x10),CONCAT12((char)((uint)iVar67 >> 8),uVar24));
    uVar11 = CONCAT15((char)((uint)iVar68 >> 0x10),CONCAT14((char)((uint)iVar68 >> 8),uVar4));
    uVar25 = (ushort)(param_5 + (uint)(uint3)(int3)(short)uVar96 * (int)param_7 >> 8);
    uVar6 = CONCAT13((char)((uint)iVar75 >> 0x10),CONCAT12((char)((uint)iVar75 >> 8),uVar25));
    uVar12 = CONCAT15((char)((uint)iVar76 >> 0x10),CONCAT14((char)((uint)iVar76 >> 8),uVar6));
    uVar26 = (ushort)(param_5 + (uint)(uint3)(int3)(short)uVar88 * (int)param_7 >> 8);
    uVar8 = CONCAT13((char)((uint)iVar83 >> 0x10),CONCAT12((char)((uint)iVar83 >> 8),uVar26));
    uVar13 = CONCAT15((char)((uint)iVar84 >> 0x10),CONCAT14((char)((uint)iVar84 >> 8),uVar8));
    *psVar20 = CONCAT11((byte)((uint)iVar55 >> 0x10) >> 3 & bVar109,
                        (byte)((ushort)((uint)iVar55 >> 8) >> 3) & bVar21) +
               (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)(byte)uVar16 *
                                                  (uint)(uint3)(int3)param_7 >> 8) >> 3) & bVar21) *
               (ushort)auVar111[0];
    psVar20[1] = CONCAT11((byte)((uint)iVar56 >> 0x10) >> 3 & bVar109,
                          (byte)((ushort)((uint)iVar56 >> 8) >> 3) & bVar21) +
                 (ushort)((byte)((ushort)(param_5 + (int)(short)uVar89 * (uint)(uint3)(int3)param_7
                                         >> 8) >> 3) & bVar21) * (ushort)auVar111[1];
    psVar20[2] = CONCAT11((byte)((uint)iVar57 >> 0x10) >> 3 & bVar109,
                          (byte)((ushort)((uint)iVar57 >> 8) >> 3) & bVar21) +
                 (ushort)((byte)((ushort)(param_5 + (int)(short)uVar90 * (int)param_7 >> 8) >> 3) &
                         bVar21) * (ushort)auVar111[2];
    psVar20[3] = CONCAT11((byte)((uint)iVar58 >> 0x10) >> 3 & bVar109,
                          (byte)((ushort)((uint)iVar58 >> 8) >> 3) & bVar21) +
                 (ushort)((byte)((ushort)(param_5 + (int)(short)uVar91 * (int)param_7 >> 8) >> 3) &
                         bVar21) * (ushort)auVar111[3];
    psVar20[4] = sVar97 + (ushort)((byte)(uVar23 >> 3) & bVar21) * (ushort)auVar111[4];
    psVar20[5] = (short)((uint)uVar98 >> 0x10) +
                 (ushort)((byte)(ushort)((uint)uVar2 >> 0x13) & bVar21) * (ushort)auVar111[5];
    psVar20[6] = (short)((uint6)uVar99 >> 0x20) +
                 (ushort)((byte)(ushort)((uint6)uVar10 >> 0x23) & bVar21) * (ushort)auVar111[6];
    psVar20[7] = (short)(CONCAT17(bVar51 >> 3 & bVar109,
                                  CONCAT16((byte)(ushort)(CONCAT17(bVar51,CONCAT16((char)((uint)
                                                  iVar62 >> 8),uVar3)) >> 0x33) & bVar21,uVar99)) >>
                        0x30) +
                 (ushort)((byte)(ushort)(CONCAT17((char)((uint)iVar61 >> 0x10),
                                                  CONCAT16((char)((uint)iVar61 >> 8),uVar10)) >>
                                        0x33) & bVar21) * (ushort)auVar111[7];
    psVar20[8] = CONCAT11((byte)((uint)iVar63 >> 0x10) >> 3 & bVar109,
                          (byte)((ushort)((uint)iVar63 >> 8) >> 3) & bVar21) +
                 (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)(byte)uVar14 *
                                                    (uint)(uint3)(int3)param_7 >> 8) >> 3) & bVar21)
                 * (ushort)auVar111[8];
    psVar20[9] = CONCAT11((byte)((uint)iVar64 >> 0x10) >> 3 & bVar109,
                          (byte)((ushort)((uint)iVar64 >> 8) >> 3) & bVar21) +
                 (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar27 *
                                                    (uint)(uint3)(int3)param_7 >> 8) >> 3) & bVar21)
                 * (ushort)auVar111[9];
    psVar20[10] = CONCAT11((byte)((uint)iVar65 >> 0x10) >> 3 & bVar109,
                           (byte)((ushort)((uint)iVar65 >> 8) >> 3) & bVar21) +
                  (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar29 * (int)param_7 >> 8)
                                 >> 3) & bVar21) * (ushort)auVar111[10];
    psVar20[0xb] = CONCAT11((byte)((uint)iVar66 >> 0x10) >> 3 & bVar109,
                            (byte)((ushort)((uint)iVar66 >> 8) >> 3) & bVar21) +
                   (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar35 * (int)param_7 >> 8
                                           ) >> 3) & bVar21) * (ushort)auVar111[11];
    psVar20[0xc] = sVar100 + (ushort)((byte)(uVar24 >> 3) & bVar21) * (ushort)auVar111[12];
    psVar20[0xd] = (short)((uint)uVar101 >> 0x10) +
                   (ushort)((byte)(ushort)((uint)uVar4 >> 0x13) & bVar21) * (ushort)auVar111[13];
    psVar20[0xe] = (short)((uint6)uVar102 >> 0x20) +
                   (ushort)((byte)(ushort)((uint6)uVar11 >> 0x23) & bVar21) * (ushort)auVar111[14];
    psVar20[0xf] = (short)(CONCAT17(bVar52 >> 3 & bVar109,
                                    CONCAT16((byte)(ushort)(CONCAT17(bVar52,CONCAT16((char)((uint)
                                                  iVar70 >> 8),uVar5)) >> 0x33) & bVar21,uVar102))
                          >> 0x30) +
                   (ushort)((byte)(ushort)(CONCAT17((char)((uint)iVar69 >> 0x10),
                                                    CONCAT16((char)((uint)iVar69 >> 8),uVar11)) >>
                                          0x33) & bVar21) * (ushort)auVar111[15];
    psVar20[0x10] =
         CONCAT11((byte)((uint)iVar71 >> 0x10) >> 3 & bVar109,
                  (byte)((ushort)((uint)iVar71 >> 8) >> 3) & bVar21) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)(byte)uVar17 *
                                            (uint)(uint3)(int3)param_7 >> 8) >> 3) & bVar21) *
         (ushort)auVar111[0];
    psVar20[0x11] =
         CONCAT11((byte)((uint)iVar72 >> 0x10) >> 3 & bVar109,
                  (byte)((ushort)((uint)iVar72 >> 8) >> 3) & bVar21) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)uVar93 * (uint)(uint3)(int3)param_7 >> 8) >>
                        3) & bVar21) * (ushort)auVar111[1];
    psVar20[0x12] =
         CONCAT11((byte)((uint)iVar73 >> 0x10) >> 3 & bVar109,
                  (byte)((ushort)((uint)iVar73 >> 8) >> 3) & bVar21) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)uVar94 * (int)param_7 >> 8) >> 3) & bVar21)
         * (ushort)auVar111[2];
    psVar20[0x13] =
         CONCAT11((byte)((uint)iVar74 >> 0x10) >> 3 & bVar109,
                  (byte)((ushort)((uint)iVar74 >> 8) >> 3) & bVar21) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)uVar95 * (int)param_7 >> 8) >> 3) & bVar21)
         * (ushort)auVar111[3];
    psVar20[0x14] = sVar103 + (ushort)((byte)(uVar25 >> 3) & bVar21) * (ushort)auVar111[4];
    psVar20[0x15] =
         (short)((uint)uVar104 >> 0x10) +
         (ushort)((byte)(ushort)((uint)uVar6 >> 0x13) & bVar21) * (ushort)auVar111[5];
    psVar20[0x16] =
         (short)((uint6)uVar105 >> 0x20) +
         (ushort)((byte)(ushort)((uint6)uVar12 >> 0x23) & bVar21) * (ushort)auVar111[6];
    psVar20[0x17] =
         (short)(CONCAT17(bVar53 >> 3 & bVar109,
                          CONCAT16((byte)(ushort)(CONCAT17(bVar53,CONCAT16((char)((uint)iVar78 >> 8)
                                                                           ,uVar7)) >> 0x33) &
                                   bVar21,uVar105)) >> 0x30) +
         (ushort)((byte)(ushort)(CONCAT17((char)((uint)iVar77 >> 0x10),
                                          CONCAT16((char)((uint)iVar77 >> 8),uVar12)) >> 0x33) &
                 bVar21) * (ushort)auVar111[7];
    psVar20[0x18] =
         CONCAT11((byte)((uint)iVar79 >> 0x10) >> 3 & bVar109,
                  (byte)((ushort)((uint)iVar79 >> 8) >> 3) & bVar21) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)(byte)uVar15 *
                                            (uint)(uint3)(int3)param_7 >> 8) >> 3) & bVar21) *
         (ushort)auVar111[8];
    psVar20[0x19] =
         CONCAT11((byte)((uint)iVar80 >> 0x10) >> 3 & bVar109,
                  (byte)((ushort)((uint)iVar80 >> 8) >> 3) & bVar21) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar28 * (uint)(uint3)(int3)param_7
                                 >> 8) >> 3) & bVar21) * (ushort)auVar111[9];
    psVar20[0x1a] =
         CONCAT11((byte)((uint)iVar81 >> 0x10) >> 3 & bVar109,
                  (byte)((ushort)((uint)iVar81 >> 8) >> 3) & bVar21) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar30 * (int)param_7 >> 8) >> 3) &
                 bVar21) * (ushort)auVar111[10];
    psVar20[0x1b] =
         CONCAT11((byte)((uint)iVar82 >> 0x10) >> 3 & bVar109,
                  (byte)((ushort)((uint)iVar82 >> 8) >> 3) & bVar21) +
         (ushort)((byte)((ushort)(param_5 + (int)(short)(ushort)bVar36 * (int)param_7 >> 8) >> 3) &
                 bVar21) * (ushort)auVar111[11];
    psVar20[0x1c] = sVar106 + (ushort)((byte)(uVar26 >> 3) & bVar21) * (ushort)auVar111[12];
    psVar20[0x1d] =
         (short)((uint)uVar107 >> 0x10) +
         (ushort)((byte)(ushort)((uint)uVar8 >> 0x13) & bVar21) * (ushort)auVar111[13];
    psVar20[0x1e] =
         (short)((uint6)uVar108 >> 0x20) +
         (ushort)((byte)(ushort)((uint6)uVar13 >> 0x23) & bVar21) * (ushort)auVar111[14];
    psVar20[0x1f] =
         (short)(CONCAT17(bVar54 >> 3 & bVar109,
                          CONCAT16((byte)(ushort)(CONCAT17(bVar54,CONCAT16((char)((uint)iVar86 >> 8)
                                                                           ,uVar9)) >> 0x33) &
                                   bVar21,uVar108)) >> 0x30) +
         (ushort)((byte)(ushort)(CONCAT17((char)((uint)iVar85 >> 0x10),
                                          CONCAT16((char)((uint)iVar85 >> 8),uVar13)) >> 0x33) &
                 bVar21) * (ushort)auVar111[15];
    psVar20 = psVar20 + 0x20;
    iVar55 = param_3 + -0x20;
    bVar1 = 0x1f < param_3;
    param_3 = iVar55;
  } while (iVar55 != 0 && bVar1);
  return;
}


