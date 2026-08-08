/*
 * Ghidra decompilation
 *
 * Function : render_scanline_priority_encode_double_c
 * Address  : 00138990
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_priority_encode_double_c(ulong param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  long lVar17;
  byte bVar18;
  uint uVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  ulong uVar20;
  byte bVar24;
  byte bVar30;
  uint uVar25;
  uint uVar26;
  byte bVar28;
  byte bVar29;
  ulong uVar27;
  byte bVar31;
  uint uVar32;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  ulong uVar33;
  byte bVar37;
  byte bVar42;
  uint uVar38;
  byte bVar40;
  byte bVar41;
  ulong uVar39;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  uint uVar48;
  byte bVar51;
  byte bVar52;
  byte bVar54;
  byte bVar55;
  uint uVar53;
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
  byte bVar71;
  byte bVar72;
  undefined4 uVar70;
  byte bVar73;
  byte bVar74;
  byte bVar76;
  byte bVar77;
  undefined4 uVar75;
  byte bVar78;
  byte bVar79;
  byte bVar81;
  byte bVar82;
  undefined4 uVar80;
  byte bVar83;
  byte bVar84;
  byte bVar86;
  byte bVar87;
  undefined4 uVar85;
  byte bVar88;
  byte bVar89;
  byte bVar91;
  byte bVar92;
  undefined4 uVar90;
  byte bVar93;
  byte bVar94;
  byte bVar96;
  byte bVar97;
  undefined4 uVar95;
  byte bVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint local_80;
  uint local_7c;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  *(undefined8 *)(param_3 + 0x90) = 0;
  *(undefined8 *)(param_3 + 0x98) = 0;
  lVar15 = ___stack_chk_guard;
  bVar16 = 0;
  *(undefined8 *)(param_3 + 0x80) = 0;
  *(undefined8 *)(param_3 + 0x88) = 0;
  *(undefined8 *)(param_4 + 0x80) = 0;
  *(undefined8 *)(param_4 + 0x88) = 0;
  *(undefined8 *)(param_4 + 0x90) = 0;
  *(undefined8 *)(param_4 + 0x98) = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*(char *)(param_1 + 0xb3) != '\0') {
    lVar17 = 0;
    uVar70 = 0;
    uVar27 = 0;
    uVar80 = 0;
    uVar39 = 0;
    uVar90 = 0;
    uVar48 = 0;
    bVar61 = 0;
    bVar62 = 0;
    bVar63 = 0;
    bVar64 = 0;
    uVar20 = 0;
    uVar75 = 0;
    uVar33 = 0;
    uVar85 = 0;
    bVar43 = 0;
    bVar44 = 0;
    bVar45 = 0;
    bVar46 = 0;
    uVar95 = 0;
    uVar53 = 0;
    bVar65 = 0;
    bVar66 = 0;
    bVar67 = 0;
    bVar68 = 0;
    bVar57 = 0;
    bVar58 = 0;
    bVar59 = 0;
    bVar60 = 0;
    local_80 = 0;
    local_7c = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    do {
      while( true ) {
        uVar99 = CONCAT13(bVar60 & ~bVar68,
                          CONCAT12(bVar59 & ~bVar67,CONCAT11(bVar58 & ~bVar66,bVar57 & ~bVar65)));
        uVar12 = ~CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57)));
        bVar94 = (byte)uVar95;
        bVar96 = (byte)((uint)uVar95 >> 8);
        bVar97 = (byte)((uint)uVar95 >> 0x10);
        bVar98 = (byte)((uint)uVar95 >> 0x18);
        bVar52 = (byte)uVar53;
        bVar54 = (byte)(uVar53 >> 8);
        bVar55 = (byte)(uVar53 >> 0x10);
        bVar56 = (byte)(uVar53 >> 0x18);
        uVar100 = CONCAT13(bVar56 & ~bVar98,
                           CONCAT12(bVar55 & ~bVar97,CONCAT11(bVar54 & ~bVar96,bVar52 & ~bVar94)));
        bVar16 = *(byte *)(param_1 + 0x84 + lVar17);
        bVar69 = (byte)uVar70;
        bVar71 = (byte)((uint)uVar70 >> 8);
        bVar72 = (byte)((uint)uVar70 >> 0x10);
        bVar73 = (byte)((uint)uVar70 >> 0x18);
        bVar24 = (byte)uVar27;
        bVar28 = (byte)(uVar27 >> 8);
        bVar29 = (byte)(uVar27 >> 0x10);
        bVar30 = (byte)(uVar27 >> 0x18);
        uVar101 = CONCAT13(bVar30 & ~bVar73,
                           CONCAT12(bVar29 & ~bVar72,CONCAT11(bVar28 & ~bVar71,bVar24 & ~bVar69)));
        lVar14 = (ulong)bVar16 * 0x20;
        lVar1 = lVar14 + 4;
        uVar13 = ~CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)));
        bVar79 = (byte)uVar80;
        bVar81 = (byte)((uint)uVar80 >> 8);
        bVar82 = (byte)((uint)uVar80 >> 0x10);
        bVar83 = (byte)((uint)uVar80 >> 0x18);
        bVar37 = (byte)uVar39;
        bVar40 = (byte)(uVar39 >> 8);
        bVar41 = (byte)(uVar39 >> 0x10);
        bVar42 = (byte)(uVar39 >> 0x18);
        uVar26 = CONCAT13(bVar42 & ~bVar83,
                          CONCAT12(bVar41 & ~bVar82,CONCAT11(bVar40 & ~bVar81,bVar37 & ~bVar79)));
        uVar32 = (uint)uVar33;
        lVar2 = lVar14 + 8;
        lVar3 = lVar14 + 0xc;
        bVar84 = (byte)uVar85;
        bVar86 = (byte)((uint)uVar85 >> 8);
        bVar87 = (byte)((uint)uVar85 >> 0x10);
        bVar88 = (byte)((uint)uVar85 >> 0x18);
        uVar102 = CONCAT13(bVar46 & ~bVar88,
                           CONCAT12(bVar45 & ~bVar87,CONCAT11(bVar44 & ~bVar86,bVar43 & ~bVar84)));
        uVar19 = (uint)uVar20;
        lVar4 = lVar14 + 0x10;
        lVar5 = lVar14 + 0x14;
        bVar89 = (byte)uVar90;
        bVar91 = (byte)((uint)uVar90 >> 8);
        bVar92 = (byte)((uint)uVar90 >> 0x10);
        bVar93 = (byte)((uint)uVar90 >> 0x18);
        bVar47 = (byte)uVar48;
        bVar49 = (byte)(uVar48 >> 8);
        bVar50 = (byte)(uVar48 >> 0x10);
        bVar51 = (byte)(uVar48 >> 0x18);
        uVar103 = CONCAT13(bVar51 & ~bVar93,
                           CONCAT12(bVar50 & ~bVar92,CONCAT11(bVar49 & ~bVar91,bVar47 & ~bVar89)));
        lVar6 = lVar14 + 0x18;
        lVar7 = lVar14 + 0x1c;
        bVar18 = (byte)uVar20;
        bVar21 = (byte)(uVar20 >> 8);
        bVar22 = (byte)(uVar20 >> 0x10);
        bVar23 = (byte)(uVar20 >> 0x18);
        uVar104 = CONCAT13(bVar23 & ~bVar64,
                           CONCAT12(bVar22 & ~bVar63,CONCAT11(bVar21 & ~bVar62,bVar18 & ~bVar61)));
        uVar38 = (uint)uVar39;
        bVar74 = (byte)uVar75;
        bVar76 = (byte)((uint)uVar75 >> 8);
        bVar77 = (byte)((uint)uVar75 >> 0x10);
        bVar78 = (byte)((uint)uVar75 >> 0x18);
        bVar31 = (byte)uVar33;
        bVar34 = (byte)(uVar33 >> 8);
        bVar35 = (byte)(uVar33 >> 0x10);
        bVar36 = (byte)(uVar33 >> 0x18);
        uVar105 = CONCAT13(bVar36 & ~bVar78,
                           CONCAT12(bVar35 & ~bVar77,CONCAT11(bVar34 & ~bVar76,bVar31 & ~bVar74)));
        uVar25 = (uint)uVar27;
        uVar9 = *(uint *)(param_2 + lVar14);
        if ((bVar16 >> 2 & 1) == 0) break;
        uVar8 = uVar9 & (local_80 ^ 0xffffffff);
        *(uint *)(param_3 + 0x80) = *(uint *)(param_3 + 0x80) | uVar8 & uVar12;
        lVar17 = lVar17 + 1;
        *(uint *)(param_4 + 0x80) = *(uint *)(param_4 + 0x80) | uVar8 & uVar99;
        uVar10 = *(uint *)(param_2 + lVar1);
        uVar12 = uVar8 & CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57)));
        uVar99 = uVar10 & (local_7c ^ 0xffffffff);
        *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) | uVar99 & ~uVar53;
        local_80 = local_80 | uVar9;
        *(uint *)(param_4 + 0x84) = *(uint *)(param_4 + 0x84) | uVar99 & uVar100;
        uVar11 = *(uint *)(param_2 + lVar2);
        uVar53 = uVar99 & uVar53;
        uVar9 = uVar11 & (local_6c ^ 0xffffffff);
        *(uint *)(param_3 + 0x88) = *(uint *)(param_3 + 0x88) | uVar9 & uVar13;
        *(uint *)(param_4 + 0x88) = *(uint *)(param_4 + 0x88) | uVar9 & uVar102;
        uVar13 = *(uint *)(param_2 + lVar3);
        local_7c = local_7c | uVar10;
        uVar100 = uVar13 & (local_68 ^ 0xffffffff);
        *(uint *)(param_3 + 0x8c) = *(uint *)(param_3 + 0x8c) | uVar100 & ~uVar32;
        *(uint *)(param_4 + 0x8c) = *(uint *)(param_4 + 0x8c) | uVar100 & uVar105;
        local_6c = local_6c | uVar11;
        uVar105 = *(uint *)(param_2 + lVar4);
        uVar102 = uVar105 & (local_64 ^ 0xffffffff);
        *(uint *)(param_3 + 0x90) = *(uint *)(param_3 + 0x90) | uVar102 & ~uVar19;
        *(uint *)(param_4 + 0x90) = *(uint *)(param_4 + 0x90) | uVar102 & uVar104;
        local_68 = local_68 | uVar13;
        uVar13 = *(uint *)(param_2 + lVar5);
        uVar104 = uVar13 & (local_70 ^ 0xffffffff);
        *(uint *)(param_3 + 0x94) = *(uint *)(param_3 + 0x94) | uVar104 & ~uVar48;
        *(uint *)(param_4 + 0x94) = *(uint *)(param_4 + 0x94) | uVar104 & uVar103;
        local_64 = local_64 | uVar105;
        uVar10 = *(uint *)(param_2 + lVar6);
        uVar103 = uVar10 & (local_60 ^ 0xffffffff);
        *(uint *)(param_3 + 0x98) = *(uint *)(param_3 + 0x98) | uVar103 & ~uVar38;
        *(uint *)(param_4 + 0x98) = *(uint *)(param_4 + 0x98) | uVar103 & uVar26;
        local_70 = local_70 | uVar13;
        uVar11 = *(uint *)(param_2 + lVar7);
        uVar105 = uVar11 & (local_5c ^ 0xffffffff);
        uVar38 = uVar38 & uVar103;
        uVar48 = uVar48 & uVar104;
        uVar19 = uVar19 & uVar102;
        uVar13 = uVar25 & uVar105;
        uVar32 = uVar32 & uVar100;
        uVar70 = CONCAT13(bVar73 | (byte)(uVar13 >> 0x18),
                          CONCAT12(bVar72 | (byte)(uVar13 >> 0x10),
                                   CONCAT11(bVar71 | (byte)(uVar13 >> 8),bVar69 | (byte)uVar13)));
        uVar13 = uVar9 & CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)));
        uVar26 = CONCAT13(bVar30 | (byte)(uVar105 >> 0x18),
                          CONCAT12(bVar29 | (byte)(uVar105 >> 0x10),
                                   CONCAT11(bVar28 | (byte)(uVar105 >> 8),bVar24 | (byte)uVar105)));
        uVar27 = (ulong)uVar26;
        *(uint *)(param_3 + 0x9c) = *(uint *)(param_3 + 0x9c) | uVar105 & ~uVar25;
        uVar80 = CONCAT13(bVar83 | (byte)(uVar38 >> 0x18),
                          CONCAT12(bVar82 | (byte)(uVar38 >> 0x10),
                                   CONCAT11(bVar81 | (byte)(uVar38 >> 8),bVar79 | (byte)uVar38)));
        uVar38 = CONCAT13(bVar42 | (byte)(uVar103 >> 0x18),
                          CONCAT12(bVar41 | (byte)(uVar103 >> 0x10),
                                   CONCAT11(bVar40 | (byte)(uVar103 >> 8),bVar37 | (byte)uVar103)));
        uVar39 = (ulong)uVar38;
        uVar90 = CONCAT13(bVar93 | (byte)(uVar48 >> 0x18),
                          CONCAT12(bVar92 | (byte)(uVar48 >> 0x10),
                                   CONCAT11(bVar91 | (byte)(uVar48 >> 8),bVar89 | (byte)uVar48)));
        uVar48 = CONCAT13(bVar51 | (byte)(uVar104 >> 0x18),
                          CONCAT12(bVar50 | (byte)(uVar104 >> 0x10),
                                   CONCAT11(bVar49 | (byte)(uVar104 >> 8),bVar47 | (byte)uVar104)));
        *(uint *)(param_4 + 0x9c) = *(uint *)(param_4 + 0x9c) | uVar105 & uVar101;
        bVar61 = bVar61 | (byte)uVar19;
        bVar62 = bVar62 | (byte)(uVar19 >> 8);
        bVar63 = bVar63 | (byte)(uVar19 >> 0x10);
        bVar64 = bVar64 | (byte)(uVar19 >> 0x18);
        local_60 = local_60 | uVar10;
        uVar19 = CONCAT13(bVar23 | (byte)(uVar102 >> 0x18),
                          CONCAT12(bVar22 | (byte)(uVar102 >> 0x10),
                                   CONCAT11(bVar21 | (byte)(uVar102 >> 8),bVar18 | (byte)uVar102)));
        uVar20 = (ulong)uVar19;
        local_5c = local_5c | uVar11;
        uVar75 = CONCAT13(bVar78 | (byte)(uVar32 >> 0x18),
                          CONCAT12(bVar77 | (byte)(uVar32 >> 0x10),
                                   CONCAT11(bVar76 | (byte)(uVar32 >> 8),bVar74 | (byte)uVar32)));
        uVar32 = CONCAT13(bVar36 | (byte)(uVar100 >> 0x18),
                          CONCAT12(bVar35 | (byte)(uVar100 >> 0x10),
                                   CONCAT11(bVar34 | (byte)(uVar100 >> 8),bVar31 | (byte)uVar100)));
        uVar33 = (ulong)uVar32;
        uVar85 = CONCAT13(bVar88 | (byte)(uVar13 >> 0x18),
                          CONCAT12(bVar87 | (byte)(uVar13 >> 0x10),
                                   CONCAT11(bVar86 | (byte)(uVar13 >> 8),bVar84 | (byte)uVar13)));
        bVar43 = bVar43 | (byte)uVar9;
        bVar44 = bVar44 | (byte)(uVar9 >> 8);
        bVar45 = bVar45 | (byte)(uVar9 >> 0x10);
        bVar46 = bVar46 | (byte)(uVar9 >> 0x18);
        bVar16 = *(byte *)(param_1 + 0xb3);
        uVar95 = CONCAT13(bVar98 | (byte)(uVar53 >> 0x18),
                          CONCAT12(bVar97 | (byte)(uVar53 >> 0x10),
                                   CONCAT11(bVar96 | (byte)(uVar53 >> 8),bVar94 | (byte)uVar53)));
        uVar53 = CONCAT13(bVar56 | (byte)(uVar99 >> 0x18),
                          CONCAT12(bVar55 | (byte)(uVar99 >> 0x10),
                                   CONCAT11(bVar54 | (byte)(uVar99 >> 8),bVar52 | (byte)uVar99)));
        bVar65 = bVar65 | (byte)uVar12;
        bVar66 = bVar66 | (byte)(uVar12 >> 8);
        bVar67 = bVar67 | (byte)(uVar12 >> 0x10);
        bVar68 = bVar68 | (byte)(uVar12 >> 0x18);
        bVar57 = bVar57 | (byte)uVar8;
        bVar58 = bVar58 | (byte)(uVar8 >> 8);
        bVar59 = bVar59 | (byte)(uVar8 >> 0x10);
        bVar60 = bVar60 | (byte)(uVar8 >> 0x18);
        if ((uint)bVar16 <= (uint)lVar17) goto LAB_00138d74;
      }
      *(uint *)(param_3 + lVar14) = uVar9 & uVar12;
      *(uint *)(param_4 + lVar14) = uVar99 & uVar9;
      uVar99 = *(uint *)(param_2 + lVar1);
      lVar17 = lVar17 + 1;
      *(uint *)(param_3 + lVar1) = uVar99 & ~uVar53;
      *(uint *)(param_4 + lVar1) = uVar99 & uVar100;
      uVar12 = CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57))) & uVar9;
      uVar53 = uVar53 & uVar99;
      uVar100 = *(uint *)(param_2 + lVar2);
      *(uint *)(param_3 + lVar2) = uVar100 & uVar13;
      *(uint *)(param_4 + lVar2) = uVar100 & uVar102;
      uVar95 = CONCAT13(bVar98 | (byte)(uVar53 >> 0x18),
                        CONCAT12(bVar97 | (byte)(uVar53 >> 0x10),
                                 CONCAT11(bVar96 | (byte)(uVar53 >> 8),bVar94 | (byte)uVar53)));
      uVar53 = CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43))) & uVar100;
      uVar13 = *(uint *)(param_2 + lVar3);
      *(uint *)(param_3 + lVar3) = uVar13 & ~uVar32;
      *(uint *)(param_4 + lVar3) = uVar13 & uVar105;
      uVar85 = CONCAT13(bVar88 | (byte)(uVar53 >> 0x18),
                        CONCAT12(bVar87 | (byte)(uVar53 >> 0x10),
                                 CONCAT11(bVar86 | (byte)(uVar53 >> 8),bVar84 | (byte)uVar53)));
      uVar32 = uVar32 & uVar13;
      uVar53 = *(uint *)(param_2 + lVar4);
      *(uint *)(param_3 + lVar4) = uVar53 & ~uVar19;
      *(uint *)(param_4 + lVar4) = uVar53 & uVar104;
      uVar75 = CONCAT13(bVar78 | (byte)(uVar32 >> 0x18),
                        CONCAT12(bVar77 | (byte)(uVar32 >> 0x10),
                                 CONCAT11(bVar76 | (byte)(uVar32 >> 8),bVar74 | (byte)uVar32)));
      uVar19 = uVar19 & uVar53;
      uVar32 = *(uint *)(param_2 + lVar5);
      *(uint *)(param_3 + lVar5) = uVar32 & ~uVar48;
      *(uint *)(param_4 + lVar5) = uVar32 & uVar103;
      bVar61 = bVar61 | (byte)uVar19;
      bVar62 = bVar62 | (byte)(uVar19 >> 8);
      bVar63 = bVar63 | (byte)(uVar19 >> 0x10);
      bVar64 = bVar64 | (byte)(uVar19 >> 0x18);
      uVar48 = uVar48 & uVar32;
      uVar19 = *(uint *)(param_2 + lVar6);
      *(uint *)(param_3 + lVar6) = uVar19 & ~uVar38;
      *(uint *)(param_4 + lVar6) = uVar19 & uVar26;
      uVar90 = CONCAT13(bVar93 | (byte)(uVar48 >> 0x18),
                        CONCAT12(bVar92 | (byte)(uVar48 >> 0x10),
                                 CONCAT11(bVar91 | (byte)(uVar48 >> 8),bVar89 | (byte)uVar48)));
      uVar38 = uVar38 & uVar19;
      uVar48 = *(uint *)(param_2 + lVar7);
      *(uint *)(param_3 + lVar7) = uVar48 & ~uVar25;
      *(uint *)(param_4 + lVar7) = uVar48 & uVar101;
      uVar80 = CONCAT13(bVar83 | (byte)(uVar38 >> 0x18),
                        CONCAT12(bVar82 | (byte)(uVar38 >> 0x10),
                                 CONCAT11(bVar81 | (byte)(uVar38 >> 8),bVar79 | (byte)uVar38)));
      uVar25 = uVar25 & uVar48;
      uVar70 = CONCAT13(bVar73 | (byte)(uVar25 >> 0x18),
                        CONCAT12(bVar72 | (byte)(uVar25 >> 0x10),
                                 CONCAT11(bVar71 | (byte)(uVar25 >> 8),bVar69 | (byte)uVar25)));
      uVar26 = CONCAT13(bVar30 | (byte)(uVar48 >> 0x18),
                        CONCAT12(bVar29 | (byte)(uVar48 >> 0x10),
                                 CONCAT11(bVar28 | (byte)(uVar48 >> 8),bVar24 | (byte)uVar48)));
      uVar27 = (ulong)uVar26;
      bVar16 = *(byte *)(param_1 + 0xb3);
      uVar38 = CONCAT13(bVar42 | (byte)(uVar19 >> 0x18),
                        CONCAT12(bVar41 | (byte)(uVar19 >> 0x10),
                                 CONCAT11(bVar40 | (byte)(uVar19 >> 8),bVar37 | (byte)uVar19)));
      uVar39 = (ulong)uVar38;
      uVar48 = CONCAT13(bVar51 | (byte)(uVar32 >> 0x18),
                        CONCAT12(bVar50 | (byte)(uVar32 >> 0x10),
                                 CONCAT11(bVar49 | (byte)(uVar32 >> 8),bVar47 | (byte)uVar32)));
      uVar19 = CONCAT13(bVar23 | (byte)(uVar53 >> 0x18),
                        CONCAT12(bVar22 | (byte)(uVar53 >> 0x10),
                                 CONCAT11(bVar21 | (byte)(uVar53 >> 8),bVar18 | (byte)uVar53)));
      uVar20 = (ulong)uVar19;
      uVar32 = CONCAT13(bVar36 | (byte)(uVar13 >> 0x18),
                        CONCAT12(bVar35 | (byte)(uVar13 >> 0x10),
                                 CONCAT11(bVar34 | (byte)(uVar13 >> 8),bVar31 | (byte)uVar13)));
      uVar33 = (ulong)uVar32;
      bVar43 = bVar43 | (byte)uVar100;
      bVar44 = bVar44 | (byte)(uVar100 >> 8);
      bVar45 = bVar45 | (byte)(uVar100 >> 0x10);
      bVar46 = bVar46 | (byte)(uVar100 >> 0x18);
      uVar53 = CONCAT13(bVar56 | (byte)(uVar99 >> 0x18),
                        CONCAT12(bVar55 | (byte)(uVar99 >> 0x10),
                                 CONCAT11(bVar54 | (byte)(uVar99 >> 8),bVar52 | (byte)uVar99)));
      bVar65 = bVar65 | (byte)uVar12;
      bVar66 = bVar66 | (byte)(uVar12 >> 8);
      bVar67 = bVar67 | (byte)(uVar12 >> 0x10);
      bVar68 = bVar68 | (byte)(uVar12 >> 0x18);
      bVar57 = bVar57 | (byte)uVar9;
      bVar58 = bVar58 | (byte)(uVar9 >> 8);
      bVar59 = bVar59 | (byte)(uVar9 >> 0x10);
      bVar60 = bVar60 | (byte)(uVar9 >> 0x18);
    } while ((uint)lVar17 < (uint)bVar16);
LAB_00138d74:
    param_1 = (ulong)uVar9;
    local_40 = CONCAT44(uVar48,uVar19);
    uStack_48 = CONCAT44(uVar32,CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43))));
    local_38 = CONCAT44(uVar26,uVar38);
    uStack_28 = CONCAT44(uVar75,uVar85);
    local_18 = CONCAT44(uVar70,uVar80);
    local_50 = CONCAT17((char)(uVar53 >> 0x18),
                        CONCAT16((char)(uVar53 >> 0x10),
                                 CONCAT15((char)(uVar53 >> 8),
                                          CONCAT14((char)uVar53,
                                                   CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,
                                                  bVar57)))))));
    local_30 = CONCAT17((char)((uint)uVar95 >> 0x18),
                        CONCAT16((char)((uint)uVar95 >> 0x10),
                                 CONCAT15((char)((uint)uVar95 >> 8),
                                          CONCAT14((char)uVar95,
                                                   CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,
                                                  bVar65)))))));
    local_20 = CONCAT17((char)((uint)uVar90 >> 0x18),
                        CONCAT16((char)((uint)uVar90 >> 0x10),
                                 CONCAT15((char)((uint)uVar90 >> 8),
                                          CONCAT14((char)uVar90,
                                                   CONCAT13(bVar64,CONCAT12(bVar63,CONCAT11(bVar62,
                                                  bVar61)))))));
  }
  if (param_3 + 0xa0U < param_4 + 0xb0U && param_4 + 0xa0U < param_3 + 0xb0U) {
    *(uint *)(param_3 + 0xa0) = ~(uint)local_50;
    *(uint *)(param_4 + 0xa0) = (uint)local_50 & ((uint)local_30 ^ 0xffffffff);
    *(uint *)(param_3 + 0xa4) = ~local_50._4_4_;
    *(uint *)(param_4 + 0xa4) = local_50._4_4_ & (local_30._4_4_ ^ 0xffffffff);
    *(uint *)(param_3 + 0xa8) = ~(uint)uStack_48;
    *(uint *)(param_4 + 0xa8) = (uint)uStack_48 & ((uint)uStack_28 ^ 0xffffffff);
    *(uint *)(param_3 + 0xac) = ~uStack_48._4_4_;
    *(uint *)(param_4 + 0xac) = uStack_48._4_4_ & (uStack_28._4_4_ ^ 0xffffffff);
    *(uint *)(param_3 + 0xb0) = ~(uint)local_40;
    *(uint *)(param_4 + 0xb0) = (uint)local_40 & ((uint)local_20 ^ 0xffffffff);
    *(uint *)(param_3 + 0xb4) = ~local_40._4_4_;
    *(uint *)(param_4 + 0xb4) = local_40._4_4_ & (local_20._4_4_ ^ 0xffffffff);
    *(uint *)(param_3 + 0xb8) = ~(uint)local_38;
    *(uint *)(param_4 + 0xb8) = (uint)local_38 & ((uint)local_18 ^ 0xffffffff);
    param_1 = (ulong)~local_38._4_4_;
    *(uint *)(param_3 + 0xbc) = ~local_38._4_4_;
    *(uint *)(param_4 + 0xbc) = local_38._4_4_ & (local_18._4_4_ ^ 0xffffffff);
  }
  else {
    bVar67 = (byte)((ulong)local_50 >> 8);
    bVar68 = (byte)((ulong)local_50 >> 0x10);
    bVar18 = (byte)((ulong)local_50 >> 0x18);
    bVar21 = (byte)((ulong)local_50 >> 0x20);
    bVar22 = (byte)((ulong)local_50 >> 0x28);
    bVar23 = (byte)((ulong)local_50 >> 0x30);
    bVar24 = (byte)((ulong)local_50 >> 0x38);
    bVar28 = (byte)((ulong)uStack_48 >> 8);
    bVar29 = (byte)((ulong)uStack_48 >> 0x10);
    bVar30 = (byte)((ulong)uStack_48 >> 0x18);
    bVar31 = (byte)((ulong)uStack_48 >> 0x20);
    bVar34 = (byte)((ulong)uStack_48 >> 0x28);
    bVar35 = (byte)((ulong)uStack_48 >> 0x30);
    bVar36 = (byte)((ulong)uStack_48 >> 0x38);
    bVar43 = (byte)((ulong)local_40 >> 8);
    bVar44 = (byte)((ulong)local_40 >> 0x10);
    bVar45 = (byte)((ulong)local_40 >> 0x18);
    bVar46 = (byte)((ulong)local_40 >> 0x20);
    bVar57 = (byte)((ulong)local_40 >> 0x28);
    bVar58 = (byte)((ulong)local_40 >> 0x30);
    bVar59 = (byte)((ulong)local_40 >> 0x38);
    bVar60 = (byte)((ulong)local_38 >> 8);
    bVar61 = (byte)((ulong)local_38 >> 0x10);
    bVar62 = (byte)((ulong)local_38 >> 0x18);
    bVar63 = (byte)((ulong)local_38 >> 0x20);
    bVar64 = (byte)((ulong)local_38 >> 0x28);
    bVar65 = (byte)((ulong)local_38 >> 0x30);
    bVar66 = (byte)((ulong)local_38 >> 0x38);
    *(ulong *)(param_3 + 0xa8) =
         CONCAT17(~bVar36,CONCAT16(~bVar35,CONCAT15(~bVar34,CONCAT14(~bVar31,CONCAT13(~bVar30,
                                                  CONCAT12(~bVar29,CONCAT11(~bVar28,~(byte)uStack_48
                                                                           )))))));
    *(ulong *)(param_3 + 0xa0) =
         CONCAT17(~bVar24,CONCAT16(~bVar23,CONCAT15(~bVar22,CONCAT14(~bVar21,CONCAT13(~bVar18,
                                                  CONCAT12(~bVar68,CONCAT11(~bVar67,~(byte)local_50)
                                                          ))))));
    *(ulong *)(param_4 + 0xa8) =
         CONCAT17(bVar36 & ~(byte)((ulong)uStack_28 >> 0x38),
                  CONCAT16(bVar35 & ~(byte)((ulong)uStack_28 >> 0x30),
                           CONCAT15(bVar34 & ~(byte)((ulong)uStack_28 >> 0x28),
                                    CONCAT14(bVar31 & ~(byte)((ulong)uStack_28 >> 0x20),
                                             CONCAT13(bVar30 & ~(byte)((ulong)uStack_28 >> 0x18),
                                                      CONCAT12(bVar29 & ~(byte)((ulong)uStack_28 >>
                                                                               0x10),
                                                               CONCAT11(bVar28 & ~(byte)((ulong)
                                                  uStack_28 >> 8),(byte)uStack_48 & ~(byte)uStack_28
                                                  )))))));
    *(ulong *)(param_4 + 0xa0) =
         CONCAT17(bVar24 & ~(byte)((ulong)local_30 >> 0x38),
                  CONCAT16(bVar23 & ~(byte)((ulong)local_30 >> 0x30),
                           CONCAT15(bVar22 & ~(byte)((ulong)local_30 >> 0x28),
                                    CONCAT14(bVar21 & ~(byte)((ulong)local_30 >> 0x20),
                                             CONCAT13(bVar18 & ~(byte)((ulong)local_30 >> 0x18),
                                                      CONCAT12(bVar68 & ~(byte)((ulong)local_30 >>
                                                                               0x10),
                                                               CONCAT11(bVar67 & ~(byte)((ulong)
                                                  local_30 >> 8),(byte)local_50 & ~(byte)local_30)))
                                            ))));
    *(ulong *)(param_3 + 0xb8) =
         CONCAT17(~bVar66,CONCAT16(~bVar65,CONCAT15(~bVar64,CONCAT14(~bVar63,CONCAT13(~bVar62,
                                                  CONCAT12(~bVar61,CONCAT11(~bVar60,~(byte)local_38)
                                                          ))))));
    *(ulong *)(param_3 + 0xb0) =
         CONCAT17(~bVar59,CONCAT16(~bVar58,CONCAT15(~bVar57,CONCAT14(~bVar46,CONCAT13(~bVar45,
                                                  CONCAT12(~bVar44,CONCAT11(~bVar43,~(byte)local_40)
                                                          ))))));
    *(ulong *)(param_4 + 0xb8) =
         CONCAT17(bVar66 & ~(byte)((ulong)local_18 >> 0x38),
                  CONCAT16(bVar65 & ~(byte)((ulong)local_18 >> 0x30),
                           CONCAT15(bVar64 & ~(byte)((ulong)local_18 >> 0x28),
                                    CONCAT14(bVar63 & ~(byte)((ulong)local_18 >> 0x20),
                                             CONCAT13(bVar62 & ~(byte)((ulong)local_18 >> 0x18),
                                                      CONCAT12(bVar61 & ~(byte)((ulong)local_18 >>
                                                                               0x10),
                                                               CONCAT11(bVar60 & ~(byte)((ulong)
                                                  local_18 >> 8),(byte)local_38 & ~(byte)local_18)))
                                            ))));
    *(ulong *)(param_4 + 0xb0) =
         CONCAT17(bVar59 & ~(byte)((ulong)local_20 >> 0x38),
                  CONCAT16(bVar58 & ~(byte)((ulong)local_20 >> 0x30),
                           CONCAT15(bVar57 & ~(byte)((ulong)local_20 >> 0x28),
                                    CONCAT14(bVar46 & ~(byte)((ulong)local_20 >> 0x20),
                                             CONCAT13(bVar45 & ~(byte)((ulong)local_20 >> 0x18),
                                                      CONCAT12(bVar44 & ~(byte)((ulong)local_20 >>
                                                                               0x10),
                                                               CONCAT11(bVar43 & ~(byte)((ulong)
                                                  local_20 >> 8),(byte)local_40 & ~(byte)local_20)))
                                            ))));
  }
  if (lVar15 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,lVar15 - ___stack_chk_guard,0,param_4,param_1,bVar16);
}


