/*
 * Ghidra decompilation
 *
 * Function : render_scanline_priority_encode_single_asm
 * Address  : 0019ffc0
 * Program  : drastic64
 */


void render_scanline_priority_encode_single_asm(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar7;
  byte bVar8;
  undefined4 uVar6;
  byte bVar9;
  byte bVar10;
  byte bVar12;
  byte bVar13;
  undefined4 uVar11;
  byte bVar14;
  byte bVar15;
  byte bVar17;
  byte bVar18;
  undefined4 uVar16;
  byte bVar19;
  byte bVar20;
  byte bVar22;
  byte bVar23;
  undefined4 uVar21;
  byte bVar24;
  byte bVar25;
  byte bVar27;
  byte bVar28;
  undefined4 uVar26;
  byte bVar29;
  byte bVar30;
  byte bVar32;
  byte bVar33;
  undefined4 uVar31;
  byte bVar34;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  undefined4 uVar36;
  byte bVar39;
  byte bVar40;
  byte bVar42;
  byte bVar43;
  undefined4 uVar41;
  byte bVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  byte bVar54;
  byte bVar55;
  undefined4 uVar53;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  undefined4 uVar57;
  byte bVar60;
  byte bVar62;
  byte bVar63;
  undefined4 uVar61;
  byte bVar64;
  byte bVar66;
  byte bVar67;
  undefined4 uVar65;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  undefined4 uVar69;
  byte bVar72;
  byte bVar74;
  byte bVar75;
  undefined4 uVar73;
  byte bVar76;
  byte bVar78;
  byte bVar79;
  undefined4 uVar77;
  byte bVar80;
  byte bVar82;
  byte bVar83;
  undefined4 uVar81;
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
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  
  uVar3 = (uint)*(byte *)(param_1 + 0xb3);
  uVar6 = 0;
  uVar11 = 0;
  uVar16 = 0;
  uVar21 = 0;
  uVar26 = 0;
  uVar31 = 0;
  uVar36 = 0;
  uVar41 = 0;
  uVar53 = 0;
  uVar57 = 0;
  uVar61 = 0;
  uVar65 = 0;
  uVar69 = 0;
  uVar73 = 0;
  uVar77 = 0;
  uVar81 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  pbVar4 = (byte *)(param_1 + 0x84);
  if (*(byte *)(param_1 + 0xb3) != 0) {
    do {
      while( true ) {
        bVar54 = *pbVar4;
        bVar7 = (byte)((uint)uVar6 >> 8);
        bVar8 = (byte)((uint)uVar6 >> 0x10);
        bVar9 = (byte)((uint)uVar6 >> 0x18);
        bVar12 = (byte)((uint)uVar11 >> 8);
        bVar13 = (byte)((uint)uVar11 >> 0x10);
        bVar14 = (byte)((uint)uVar11 >> 0x18);
        bVar17 = (byte)((uint)uVar16 >> 8);
        bVar18 = (byte)((uint)uVar16 >> 0x10);
        bVar19 = (byte)((uint)uVar16 >> 0x18);
        bVar22 = (byte)((uint)uVar21 >> 8);
        bVar23 = (byte)((uint)uVar21 >> 0x10);
        bVar24 = (byte)((uint)uVar21 >> 0x18);
        bVar27 = (byte)((uint)uVar26 >> 8);
        bVar28 = (byte)((uint)uVar26 >> 0x10);
        bVar29 = (byte)((uint)uVar26 >> 0x18);
        bVar32 = (byte)((uint)uVar31 >> 8);
        bVar33 = (byte)((uint)uVar31 >> 0x10);
        bVar34 = (byte)((uint)uVar31 >> 0x18);
        bVar37 = (byte)((uint)uVar36 >> 8);
        bVar38 = (byte)((uint)uVar36 >> 0x10);
        bVar39 = (byte)((uint)uVar36 >> 0x18);
        bVar42 = (byte)((uint)uVar41 >> 8);
        bVar43 = (byte)((uint)uVar41 >> 0x10);
        bVar44 = (byte)((uint)uVar41 >> 0x18);
        bVar5 = (byte)uVar6;
        bVar10 = (byte)uVar11;
        bVar15 = (byte)uVar16;
        bVar20 = (byte)uVar21;
        bVar25 = (byte)uVar26;
        bVar30 = (byte)uVar31;
        bVar35 = (byte)uVar36;
        bVar40 = (byte)uVar41;
        if ((((uint)bVar54 << 5) >> 7 & 1) != 0) break;
        puVar1 = (undefined4 *)(param_2 + (ulong)bVar54 * 0x20);
        puVar2 = (undefined4 *)(param_3 + (ulong)bVar54 * 0x20);
        uVar6 = *puVar1;
        uVar11 = puVar1[1];
        uVar16 = puVar1[2];
        uVar21 = puVar1[3];
        uVar26 = puVar1[4];
        uVar31 = puVar1[5];
        uVar36 = puVar1[6];
        uVar41 = puVar1[7];
        bVar54 = (byte)((uint)uVar6 >> 8);
        bVar55 = (byte)((uint)uVar6 >> 0x10);
        bVar56 = (byte)((uint)uVar6 >> 0x18);
        bVar58 = (byte)((uint)uVar11 >> 8);
        bVar59 = (byte)((uint)uVar11 >> 0x10);
        bVar60 = (byte)((uint)uVar11 >> 0x18);
        bVar62 = (byte)((uint)uVar16 >> 8);
        bVar63 = (byte)((uint)uVar16 >> 0x10);
        bVar64 = (byte)((uint)uVar16 >> 0x18);
        bVar66 = (byte)((uint)uVar21 >> 8);
        bVar67 = (byte)((uint)uVar21 >> 0x10);
        bVar68 = (byte)((uint)uVar21 >> 0x18);
        bVar70 = (byte)((uint)uVar26 >> 8);
        bVar71 = (byte)((uint)uVar26 >> 0x10);
        bVar72 = (byte)((uint)uVar26 >> 0x18);
        bVar74 = (byte)((uint)uVar31 >> 8);
        bVar75 = (byte)((uint)uVar31 >> 0x10);
        bVar76 = (byte)((uint)uVar31 >> 0x18);
        bVar78 = (byte)((uint)uVar36 >> 8);
        bVar79 = (byte)((uint)uVar36 >> 0x10);
        bVar80 = (byte)((uint)uVar36 >> 0x18);
        bVar82 = (byte)((uint)uVar41 >> 8);
        bVar83 = (byte)((uint)uVar41 >> 0x10);
        bVar84 = (byte)((uint)uVar41 >> 0x18);
        *puVar2 = CONCAT13(bVar56 & ~bVar9,
                           CONCAT12(bVar55 & ~bVar8,CONCAT11(bVar54 & ~bVar7,(byte)uVar6 & ~bVar5)))
        ;
        puVar2[1] = CONCAT13(bVar60 & ~bVar14,
                             CONCAT12(bVar59 & ~bVar13,
                                      CONCAT11(bVar58 & ~bVar12,(byte)uVar11 & ~bVar10)));
        puVar2[2] = CONCAT13(bVar64 & ~bVar19,
                             CONCAT12(bVar63 & ~bVar18,
                                      CONCAT11(bVar62 & ~bVar17,(byte)uVar16 & ~bVar15)));
        puVar2[3] = CONCAT13(bVar68 & ~bVar24,
                             CONCAT12(bVar67 & ~bVar23,
                                      CONCAT11(bVar66 & ~bVar22,(byte)uVar21 & ~bVar20)));
        puVar2[4] = CONCAT13(bVar72 & ~bVar29,
                             CONCAT12(bVar71 & ~bVar28,
                                      CONCAT11(bVar70 & ~bVar27,(byte)uVar26 & ~bVar25)));
        puVar2[5] = CONCAT13(bVar76 & ~bVar34,
                             CONCAT12(bVar75 & ~bVar33,
                                      CONCAT11(bVar74 & ~bVar32,(byte)uVar31 & ~bVar30)));
        puVar2[6] = CONCAT13(bVar80 & ~bVar39,
                             CONCAT12(bVar79 & ~bVar38,
                                      CONCAT11(bVar78 & ~bVar37,(byte)uVar36 & ~bVar35)));
        puVar2[7] = CONCAT13(bVar84 & ~bVar44,
                             CONCAT12(bVar83 & ~bVar43,
                                      CONCAT11(bVar82 & ~bVar42,(byte)uVar41 & ~bVar40)));
        uVar6 = CONCAT13(bVar9 | bVar56,
                         CONCAT12(bVar8 | bVar55,CONCAT11(bVar7 | bVar54,bVar5 | (byte)uVar6)));
        uVar11 = CONCAT13(bVar14 | bVar60,
                          CONCAT12(bVar13 | bVar59,CONCAT11(bVar12 | bVar58,bVar10 | (byte)uVar11)))
        ;
        uVar16 = CONCAT13(bVar19 | bVar64,
                          CONCAT12(bVar18 | bVar63,CONCAT11(bVar17 | bVar62,bVar15 | (byte)uVar16)))
        ;
        uVar21 = CONCAT13(bVar24 | bVar68,
                          CONCAT12(bVar23 | bVar67,CONCAT11(bVar22 | bVar66,bVar20 | (byte)uVar21)))
        ;
        uVar26 = CONCAT13(bVar29 | bVar72,
                          CONCAT12(bVar28 | bVar71,CONCAT11(bVar27 | bVar70,bVar25 | (byte)uVar26)))
        ;
        uVar31 = CONCAT13(bVar34 | bVar76,
                          CONCAT12(bVar33 | bVar75,CONCAT11(bVar32 | bVar74,bVar30 | (byte)uVar31)))
        ;
        uVar36 = CONCAT13(bVar39 | bVar80,
                          CONCAT12(bVar38 | bVar79,CONCAT11(bVar37 | bVar78,bVar35 | (byte)uVar36)))
        ;
        uVar41 = CONCAT13(bVar44 | bVar84,
                          CONCAT12(bVar43 | bVar83,CONCAT11(bVar42 | bVar82,bVar40 | (byte)uVar41)))
        ;
        uVar3 = uVar3 - 1;
        pbVar4 = pbVar4 + 1;
        if (uVar3 == 0) goto priority_encode_single_complete;
      }
      puVar1 = (undefined4 *)(param_2 + (ulong)bVar54 * 0x20);
      uVar6 = *puVar1;
      uVar11 = puVar1[1];
      uVar16 = puVar1[2];
      uVar21 = puVar1[3];
      uVar26 = puVar1[4];
      uVar31 = puVar1[5];
      uVar36 = puVar1[6];
      uVar41 = puVar1[7];
      bVar54 = (byte)((uint)uVar53 >> 8);
      bVar55 = (byte)((uint)uVar53 >> 0x10);
      bVar56 = (byte)((uint)uVar53 >> 0x18);
      bVar58 = (byte)((uint)uVar57 >> 8);
      bVar59 = (byte)((uint)uVar57 >> 0x10);
      bVar60 = (byte)((uint)uVar57 >> 0x18);
      bVar62 = (byte)((uint)uVar61 >> 8);
      bVar63 = (byte)((uint)uVar61 >> 0x10);
      bVar64 = (byte)((uint)uVar61 >> 0x18);
      bVar66 = (byte)((uint)uVar65 >> 8);
      bVar67 = (byte)((uint)uVar65 >> 0x10);
      bVar68 = (byte)((uint)uVar65 >> 0x18);
      bVar85 = (byte)uVar6 & ~(byte)uVar53;
      bVar86 = (byte)((uint)uVar6 >> 8) & ~bVar54;
      bVar87 = (byte)((uint)uVar6 >> 0x10) & ~bVar55;
      bVar88 = (byte)((uint)uVar6 >> 0x18) & ~bVar56;
      bVar89 = (byte)uVar11 & ~(byte)uVar57;
      bVar90 = (byte)((uint)uVar11 >> 8) & ~bVar58;
      bVar91 = (byte)((uint)uVar11 >> 0x10) & ~bVar59;
      bVar92 = (byte)((uint)uVar11 >> 0x18) & ~bVar60;
      bVar93 = (byte)uVar16 & ~(byte)uVar61;
      bVar94 = (byte)((uint)uVar16 >> 8) & ~bVar62;
      bVar95 = (byte)((uint)uVar16 >> 0x10) & ~bVar63;
      bVar96 = (byte)((uint)uVar16 >> 0x18) & ~bVar64;
      bVar97 = (byte)uVar21 & ~(byte)uVar65;
      bVar98 = (byte)((uint)uVar21 >> 8) & ~bVar66;
      bVar99 = (byte)((uint)uVar21 >> 0x10) & ~bVar67;
      bVar100 = (byte)((uint)uVar21 >> 0x18) & ~bVar68;
      bVar70 = (byte)((uint)uVar69 >> 8);
      bVar71 = (byte)((uint)uVar69 >> 0x10);
      bVar72 = (byte)((uint)uVar69 >> 0x18);
      bVar74 = (byte)((uint)uVar73 >> 8);
      bVar75 = (byte)((uint)uVar73 >> 0x10);
      bVar76 = (byte)((uint)uVar73 >> 0x18);
      bVar78 = (byte)((uint)uVar77 >> 8);
      bVar79 = (byte)((uint)uVar77 >> 0x10);
      bVar80 = (byte)((uint)uVar77 >> 0x18);
      bVar82 = (byte)((uint)uVar81 >> 8);
      bVar83 = (byte)((uint)uVar81 >> 0x10);
      bVar84 = (byte)((uint)uVar81 >> 0x18);
      bVar101 = (byte)uVar26 & ~(byte)uVar69;
      bVar102 = (byte)((uint)uVar26 >> 8) & ~bVar70;
      bVar103 = (byte)((uint)uVar26 >> 0x10) & ~bVar71;
      bVar104 = (byte)((uint)uVar26 >> 0x18) & ~bVar72;
      bVar105 = (byte)uVar31 & ~(byte)uVar73;
      bVar106 = (byte)((uint)uVar31 >> 8) & ~bVar74;
      bVar107 = (byte)((uint)uVar31 >> 0x10) & ~bVar75;
      bVar108 = (byte)((uint)uVar31 >> 0x18) & ~bVar76;
      bVar109 = (byte)uVar36 & ~(byte)uVar77;
      bVar110 = (byte)((uint)uVar36 >> 8) & ~bVar78;
      bVar111 = (byte)((uint)uVar36 >> 0x10) & ~bVar79;
      bVar112 = (byte)((uint)uVar36 >> 0x18) & ~bVar80;
      bVar113 = (byte)uVar41 & ~(byte)uVar81;
      bVar114 = (byte)((uint)uVar41 >> 8) & ~bVar82;
      bVar115 = (byte)((uint)uVar41 >> 0x10) & ~bVar83;
      bVar116 = (byte)((uint)uVar41 >> 0x18) & ~bVar84;
      uVar45 = CONCAT13((byte)((uint)uVar45 >> 0x18) | bVar88 & ~bVar9,
                        CONCAT12((byte)((uint)uVar45 >> 0x10) | bVar87 & ~bVar8,
                                 CONCAT11((byte)((uint)uVar45 >> 8) | bVar86 & ~bVar7,
                                          (byte)uVar45 | bVar85 & ~bVar5)));
      uVar46 = CONCAT13((byte)((uint)uVar46 >> 0x18) | bVar92 & ~bVar14,
                        CONCAT12((byte)((uint)uVar46 >> 0x10) | bVar91 & ~bVar13,
                                 CONCAT11((byte)((uint)uVar46 >> 8) | bVar90 & ~bVar12,
                                          (byte)uVar46 | bVar89 & ~bVar10)));
      uVar47 = CONCAT13((byte)((uint)uVar47 >> 0x18) | bVar96 & ~bVar19,
                        CONCAT12((byte)((uint)uVar47 >> 0x10) | bVar95 & ~bVar18,
                                 CONCAT11((byte)((uint)uVar47 >> 8) | bVar94 & ~bVar17,
                                          (byte)uVar47 | bVar93 & ~bVar15)));
      uVar48 = CONCAT13((byte)((uint)uVar48 >> 0x18) | bVar100 & ~bVar24,
                        CONCAT12((byte)((uint)uVar48 >> 0x10) | bVar99 & ~bVar23,
                                 CONCAT11((byte)((uint)uVar48 >> 8) | bVar98 & ~bVar22,
                                          (byte)uVar48 | bVar97 & ~bVar20)));
      uVar49 = CONCAT13((byte)((uint)uVar49 >> 0x18) | bVar104 & ~bVar29,
                        CONCAT12((byte)((uint)uVar49 >> 0x10) | bVar103 & ~bVar28,
                                 CONCAT11((byte)((uint)uVar49 >> 8) | bVar102 & ~bVar27,
                                          (byte)uVar49 | bVar101 & ~bVar25)));
      uVar50 = CONCAT13((byte)((uint)uVar50 >> 0x18) | bVar108 & ~bVar34,
                        CONCAT12((byte)((uint)uVar50 >> 0x10) | bVar107 & ~bVar33,
                                 CONCAT11((byte)((uint)uVar50 >> 8) | bVar106 & ~bVar32,
                                          (byte)uVar50 | bVar105 & ~bVar30)));
      uVar51 = CONCAT13((byte)((uint)uVar51 >> 0x18) | bVar112 & ~bVar39,
                        CONCAT12((byte)((uint)uVar51 >> 0x10) | bVar111 & ~bVar38,
                                 CONCAT11((byte)((uint)uVar51 >> 8) | bVar110 & ~bVar37,
                                          (byte)uVar51 | bVar109 & ~bVar35)));
      uVar52 = CONCAT13((byte)((uint)uVar52 >> 0x18) | bVar116 & ~bVar44,
                        CONCAT12((byte)((uint)uVar52 >> 0x10) | bVar115 & ~bVar43,
                                 CONCAT11((byte)((uint)uVar52 >> 8) | bVar114 & ~bVar42,
                                          (byte)uVar52 | bVar113 & ~bVar40)));
      uVar6 = CONCAT13(bVar9 | bVar88,
                       CONCAT12(bVar8 | bVar87,CONCAT11(bVar7 | bVar86,bVar5 | bVar85)));
      uVar11 = CONCAT13(bVar14 | bVar92,
                        CONCAT12(bVar13 | bVar91,CONCAT11(bVar12 | bVar90,bVar10 | bVar89)));
      uVar16 = CONCAT13(bVar19 | bVar96,
                        CONCAT12(bVar18 | bVar95,CONCAT11(bVar17 | bVar94,bVar15 | bVar93)));
      uVar21 = CONCAT13(bVar24 | bVar100,
                        CONCAT12(bVar23 | bVar99,CONCAT11(bVar22 | bVar98,bVar20 | bVar97)));
      uVar26 = CONCAT13(bVar29 | bVar104,
                        CONCAT12(bVar28 | bVar103,CONCAT11(bVar27 | bVar102,bVar25 | bVar101)));
      uVar31 = CONCAT13(bVar34 | bVar108,
                        CONCAT12(bVar33 | bVar107,CONCAT11(bVar32 | bVar106,bVar30 | bVar105)));
      uVar36 = CONCAT13(bVar39 | bVar112,
                        CONCAT12(bVar38 | bVar111,CONCAT11(bVar37 | bVar110,bVar35 | bVar109)));
      uVar41 = CONCAT13(bVar44 | bVar116,
                        CONCAT12(bVar43 | bVar115,CONCAT11(bVar42 | bVar114,bVar40 | bVar113)));
      uVar53 = CONCAT13(bVar56 | bVar88,
                        CONCAT12(bVar55 | bVar87,CONCAT11(bVar54 | bVar86,(byte)uVar53 | bVar85)));
      uVar57 = CONCAT13(bVar60 | bVar92,
                        CONCAT12(bVar59 | bVar91,CONCAT11(bVar58 | bVar90,(byte)uVar57 | bVar89)));
      uVar61 = CONCAT13(bVar64 | bVar96,
                        CONCAT12(bVar63 | bVar95,CONCAT11(bVar62 | bVar94,(byte)uVar61 | bVar93)));
      uVar65 = CONCAT13(bVar68 | bVar100,
                        CONCAT12(bVar67 | bVar99,CONCAT11(bVar66 | bVar98,(byte)uVar65 | bVar97)));
      uVar69 = CONCAT13(bVar72 | bVar104,
                        CONCAT12(bVar71 | bVar103,CONCAT11(bVar70 | bVar102,(byte)uVar69 | bVar101))
                       );
      uVar73 = CONCAT13(bVar76 | bVar108,
                        CONCAT12(bVar75 | bVar107,CONCAT11(bVar74 | bVar106,(byte)uVar73 | bVar105))
                       );
      uVar77 = CONCAT13(bVar80 | bVar112,
                        CONCAT12(bVar79 | bVar111,CONCAT11(bVar78 | bVar110,(byte)uVar77 | bVar109))
                       );
      uVar81 = CONCAT13(bVar84 | bVar116,
                        CONCAT12(bVar83 | bVar115,CONCAT11(bVar82 | bVar114,(byte)uVar81 | bVar113))
                       );
      uVar3 = uVar3 - 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar3 != 0);
  }
priority_encode_single_complete:
  *(uint *)(param_3 + 0xa0) =
       CONCAT13(~(byte)((uint)uVar6 >> 0x18),
                CONCAT12(~(byte)((uint)uVar6 >> 0x10),
                         CONCAT11(~(byte)((uint)uVar6 >> 8),~(byte)uVar6)));
  *(uint *)(param_3 + 0xa4) =
       CONCAT13(~(byte)((uint)uVar11 >> 0x18),
                CONCAT12(~(byte)((uint)uVar11 >> 0x10),
                         CONCAT11(~(byte)((uint)uVar11 >> 8),~(byte)uVar11)));
  *(uint *)(param_3 + 0xa8) =
       CONCAT13(~(byte)((uint)uVar16 >> 0x18),
                CONCAT12(~(byte)((uint)uVar16 >> 0x10),
                         CONCAT11(~(byte)((uint)uVar16 >> 8),~(byte)uVar16)));
  *(uint *)(param_3 + 0xac) =
       CONCAT13(~(byte)((uint)uVar21 >> 0x18),
                CONCAT12(~(byte)((uint)uVar21 >> 0x10),
                         CONCAT11(~(byte)((uint)uVar21 >> 8),~(byte)uVar21)));
  *(uint *)(param_3 + 0xb0) =
       CONCAT13(~(byte)((uint)uVar26 >> 0x18),
                CONCAT12(~(byte)((uint)uVar26 >> 0x10),
                         CONCAT11(~(byte)((uint)uVar26 >> 8),~(byte)uVar26)));
  *(uint *)(param_3 + 0xb4) =
       CONCAT13(~(byte)((uint)uVar31 >> 0x18),
                CONCAT12(~(byte)((uint)uVar31 >> 0x10),
                         CONCAT11(~(byte)((uint)uVar31 >> 8),~(byte)uVar31)));
  *(uint *)(param_3 + 0xb8) =
       CONCAT13(~(byte)((uint)uVar36 >> 0x18),
                CONCAT12(~(byte)((uint)uVar36 >> 0x10),
                         CONCAT11(~(byte)((uint)uVar36 >> 8),~(byte)uVar36)));
  *(uint *)(param_3 + 0xbc) =
       CONCAT13(~(byte)((uint)uVar41 >> 0x18),
                CONCAT12(~(byte)((uint)uVar41 >> 0x10),
                         CONCAT11(~(byte)((uint)uVar41 >> 8),~(byte)uVar41)));
  *(undefined4 *)(param_3 + 0x80) = uVar45;
  *(undefined4 *)(param_3 + 0x84) = uVar46;
  *(undefined4 *)(param_3 + 0x88) = uVar47;
  *(undefined4 *)(param_3 + 0x8c) = uVar48;
  *(undefined4 *)(param_3 + 0x90) = uVar49;
  *(undefined4 *)(param_3 + 0x94) = uVar50;
  *(undefined4 *)(param_3 + 0x98) = uVar51;
  *(undefined4 *)(param_3 + 0x9c) = uVar52;
  return;
}


