/*
 * Ghidra decompilation
 *
 * Function : geometry_savestate_extra_load_body
 * Address  : 00164c50
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void geometry_savestate_extra_load_body(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined auVar3 [16];
  int iVar4;
  uint6 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint5 uVar11;
  uint uVar12;
  uint uVar13;
  long extraout_x14;
  long extraout_x15;
  long extraout_x18;
  short sVar14;
  undefined8 uVar15;
  uint uVar19;
  ulong uVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  char cVar20;
  char cVar21;
  char cVar22;
  byte bVar23;
  byte bVar24;
  char cVar25;
  byte bVar26;
  char cVar27;
  char cVar28;
  uint5 uVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  short sVar32;
  uint5 uVar33;
  short sVar37;
  short sVar38;
  ulong uVar34;
  short sVar39;
  short sVar40;
  undefined auVar35 [16];
  undefined auVar36 [16];
  ushort uVar41;
  short sVar42;
  uint5 uVar43;
  short sVar47;
  short sVar48;
  short sVar49;
  undefined8 uVar44;
  undefined auVar45 [16];
  undefined auVar46 [16];
  char cVar50;
  undefined uVar51;
  char cVar52;
  undefined uVar53;
  undefined uVar54;
  undefined uVar55;
  char cVar56;
  undefined uVar57;
  undefined uVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  uint5 uVar62;
  undefined8 uVar63;
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  uint5 uVar76;
  undefined auVar77 [16];
  undefined auVar78 [16];
  uint5 uVar79;
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined8 uVar82;
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  char cVar86;
  char cVar87;
  char cVar88;
  short sVar89;
  uint5 uVar90;
  short sVar94;
  short sVar95;
  short sVar96;
  undefined8 uVar91;
  undefined auVar92 [16];
  undefined auVar93 [16];
  ushort uVar97;
  uint5 uVar98;
  short sVar100;
  undefined8 uVar99;
  ushort uVar101;
  uint5 uVar102;
  ushort uVar103;
  undefined8 uVar104;
  ushort uVar105;
  short sVar106;
  short sVar107;
  ushort uVar108;
  short sVar109;
  short sVar110;
  short sVar111;
  uint5 uVar112;
  undefined auVar113 [16];
  undefined auVar114 [16];
  char cVar115;
  char cVar116;
  char cVar117;
  char cVar118;
  char cVar119;
  char cVar120;
  char cVar121;
  char cVar122;
  char cVar123;
  undefined auVar124 [16];
  undefined auVar125 [16];
  undefined auVar126 [16];
  
  auVar3 = _DAT_0021e230;
  *(long *)(param_1 + 0x9a70) = param_1 + 0x81b00;
  *(ulong *)(param_1 + 0x9a80) = param_1 + 0x81b00 + (ulong)*(byte *)(param_1 + 0x9ac1) * 4;
  *(long *)(param_1 + 0x308) = auVar3._8_8_;
  *(long *)(param_1 + 0x300) = auVar3._0_8_;
  *(undefined4 *)(param_1 + 0x310) = 0xff;
  *(long *)(param_1 + 0x318) = param_1 + 0x33c;
  *(long *)(param_1 + 800) = param_1 + 0x44c;
  *(long *)(param_1 + 0x328) = param_1 + 0x4dc;
  *(undefined4 *)(param_1 + 0x334) = 1;
  *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x9a94);
  *(uint *)(param_1 + 0x640) = (uint)*(ushort *)(param_1 + 0x9aae);
  *(undefined *)(param_1 + 0x79f5) = 0;
  uVar2 = *(uint *)(param_1 + 0x9a40);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x330);
  *(byte *)(param_1 + 0x9ace) = (byte)(uVar2 >> 0xf) & 1;
  uVar19 = *(uint *)(param_1 + 0x9a44);
  uVar12 = uVar2 >> 0x10 & 0x7fff;
  uVar13 = uVar19 >> 0x10 & 0x7fff;
  uVar101 = (ushort)((uVar19 & 0x7fff) >> 5) & 0x1f;
  sVar40 = (short)((uVar19 & 0x7fff) >> 10);
  uVar97 = (ushort)uVar19 & 0x1f;
  uVar103 = (ushort)((uVar2 & 0x7fff) >> 5) & 0x1f;
  sVar100 = (short)((uVar2 & 0x7fff) >> 10);
  uVar41 = (ushort)uVar2 & 0x1f;
  *(ulong *)(param_1 + 0x9a50) =
       (ulong)(CONCAT15((char)(uVar12 >> 8),CONCAT14((char)uVar12,uVar2)) & 0xffff00007fff);
  *(ulong *)(param_1 + 0x9a48) =
       (ulong)CONCAT15((char)(uVar13 >> 8),CONCAT14((char)uVar13,uVar19)) & 0xffffffff00007fff;
  uVar15 = *(undefined8 *)(param_1 + 0x96b8);
  uVar99 = *(undefined8 *)(param_1 + 0x96c0);
  uVar19 = (uint)((ulong)uVar15 >> 0x20);
  uVar2 = (uint)((ulong)uVar99 >> 0x20);
  uVar5 = (uint6)CONCAT14((char)(uVar19 >> 5),(uint)uVar15 >> 5) & 0xffff0000ffff;
  uVar34 = CONCAT26((short)((ulong)uVar99 >> 0x20),
                    CONCAT24((short)uVar99,CONCAT22((short)((ulong)uVar15 >> 0x20),(short)uVar15)))
           & 0x1f001f001f001f;
  uVar16 = (ulong)CONCAT16((char)(uVar2 >> 5),
                           (uint6)CONCAT14((char)((uint)uVar99 >> 5),
                                           (uint)CONCAT12((char)(uVar5 >> 0x20),(short)uVar5))) &
           0x1f001f001f001f;
  bVar23 = (byte)(uVar16 >> 0x10);
  bVar24 = (byte)(uVar16 >> 0x20);
  bVar26 = (byte)(uVar16 >> 0x30);
  sVar14 = (short)uVar34 * uVar97;
  sVar37 = (short)(uVar34 >> 0x10);
  sVar32 = sVar37 * uVar97;
  uVar51 = (undefined)sVar32;
  uVar54 = (undefined)((ushort)sVar32 >> 8);
  sVar38 = (short)(uVar34 >> 0x20);
  sVar32 = sVar38 * uVar97;
  uVar58 = (undefined)sVar32;
  uVar53 = (undefined)((ushort)sVar32 >> 8);
  sVar39 = (short)(uVar34 >> 0x30);
  sVar32 = sVar39 * uVar97;
  uVar55 = (undefined)sVar32;
  uVar57 = (undefined)((ushort)sVar32 >> 8);
  sVar32 = (short)uVar34 * uVar41;
  sVar37 = sVar37 * uVar41;
  auVar71._2_2_ = sVar37;
  auVar71._0_2_ = sVar32;
  sVar38 = sVar38 * uVar41;
  auVar71._4_2_ = sVar38;
  sVar39 = sVar39 * uVar41;
  auVar71._6_2_ = sVar39;
  sVar42 = (byte)uVar16 * uVar101;
  sVar47 = bVar23 * uVar101;
  auVar85._10_2_ = sVar47;
  auVar85._8_2_ = sVar42;
  sVar48 = bVar24 * uVar101;
  auVar85._12_2_ = sVar48;
  sVar49 = bVar26 * uVar101;
  auVar85._14_2_ = sVar49;
  auVar85[2] = uVar51;
  auVar85._0_2_ = sVar14;
  auVar85[3] = uVar54;
  auVar85[4] = uVar58;
  auVar85[5] = uVar53;
  auVar85[6] = uVar55;
  auVar85[7] = uVar57;
  uVar34 = CONCAT26((short)(uVar2 >> 10),
                    CONCAT24((short)((uint)uVar99 >> 10),
                             CONCAT22((short)(uVar19 >> 10),(short)((uint)uVar15 >> 10)))) &
           0x1f001f001f001f;
  sVar89 = (byte)uVar16 * uVar103;
  sVar94 = bVar23 * uVar103;
  auVar71._10_2_ = sVar94;
  auVar71._8_2_ = sVar89;
  sVar95 = bVar24 * uVar103;
  auVar71._12_2_ = sVar95;
  sVar96 = bVar26 * uVar103;
  auVar71._14_2_ = sVar96;
  auVar69._0_8_ = a64_TBL(ZEXT816(0),auVar85,0x302010009080100);
  auVar36[2] = (char)sVar47;
  auVar36._0_2_ = sVar42;
  auVar36[3] = (char)((ushort)sVar47 >> 8);
  auVar36[4] = (char)sVar48;
  auVar36[5] = (char)((ushort)sVar48 >> 8);
  auVar36[6] = (char)sVar49;
  auVar36[7] = (char)((ushort)sVar49 >> 8);
  auVar36[8] = (char)sVar14;
  auVar36[9] = (char)((ushort)sVar14 >> 8);
  auVar36[10] = uVar51;
  auVar36[11] = uVar54;
  auVar36[12] = uVar58;
  auVar36[13] = uVar53;
  auVar36[14] = uVar55;
  auVar36[15] = uVar57;
  uVar15 = a64_TBL(ZEXT816(0),auVar36,0x5040d0c09080302);
  auVar3[2] = (char)sVar94;
  auVar3._0_2_ = sVar89;
  auVar3[3] = (char)((ushort)sVar94 >> 8);
  auVar3[4] = (char)sVar95;
  auVar3[5] = (char)((ushort)sVar95 >> 8);
  auVar3[6] = (char)sVar96;
  auVar3[7] = (char)((ushort)sVar96 >> 8);
  auVar3[8] = (char)sVar32;
  auVar3[9] = (char)((ushort)sVar32 >> 8);
  auVar3[10] = (char)sVar37;
  auVar3[11] = (char)((ushort)sVar37 >> 8);
  auVar3[12] = (char)sVar38;
  auVar3[13] = (char)((ushort)sVar38 >> 8);
  auVar3[14] = (char)sVar39;
  auVar3[15] = (char)((ushort)sVar39 >> 8);
  uVar99 = a64_TBL(ZEXT816(0),auVar3,0x5040d0c09080302);
  sVar39 = (short)uVar34 * sVar40;
  sVar32 = (short)(uVar34 >> 0x10);
  sVar42 = sVar32 * sVar40;
  sVar37 = (short)(uVar34 >> 0x20);
  sVar47 = sVar37 * sVar40;
  sVar38 = (short)(uVar34 >> 0x30);
  sVar40 = sVar38 * sVar40;
  uVar104 = CONCAT26(sVar40,CONCAT24(sVar47,CONCAT22(sVar42,sVar39)));
  auVar68._0_8_ = a64_TBL(ZEXT816(0),auVar71,0x302010009080100);
  sVar14 = (short)uVar34 * sVar100;
  sVar32 = sVar32 * sVar100;
  auVar68._10_2_ = sVar32;
  auVar68._8_2_ = sVar14;
  sVar37 = sVar37 * sVar100;
  auVar68._12_2_ = sVar37;
  sVar38 = sVar38 * sVar100;
  auVar68._14_2_ = sVar38;
  uVar82 = a64_TBL(ZEXT816(0),auVar85,0x1000f0e07060100);
  uVar63 = a64_TBL(ZEXT816(0),auVar71,0x1000f0e07060100);
  uVar51 = (undefined)((ushort)sVar32 >> 8);
  uVar54 = (undefined)((ushort)sVar37 >> 8);
  uVar58 = (undefined)((ushort)sVar38 >> 8);
  lVar1 = param_1 + (ulong)*(byte *)(param_1 + 0x9ac0) * 0x10008;
  auVar69._8_8_ = uVar104;
  auVar93._8_8_ = uVar82;
  auVar93._0_8_ = uVar104;
  uVar44 = a64_TBL(ZEXT816(0),auVar69,0x706090803020100);
  auVar46[8] = (char)sVar39;
  auVar46._0_8_ = uVar15;
  auVar46[9] = (char)((ushort)sVar39 >> 8);
  auVar46[10] = (char)sVar42;
  auVar46[11] = (char)((ushort)sVar42 >> 8);
  auVar46[12] = (char)sVar47;
  auVar46[13] = (char)((ushort)sVar47 >> 8);
  auVar46[14] = (char)sVar40;
  auVar46[15] = (char)((ushort)sVar40 >> 8);
  uVar15 = a64_TBL(ZEXT816(0),auVar46,0x70605040b0a0100);
  auVar18[8] = (char)sVar14;
  auVar18._0_8_ = uVar99;
  auVar18[9] = (char)((ushort)sVar14 >> 8);
  auVar18[10] = (char)sVar32;
  auVar18[11] = uVar51;
  auVar18[12] = (char)sVar37;
  auVar18[13] = uVar54;
  auVar18[14] = (char)sVar38;
  auVar18[15] = uVar58;
  uVar99 = a64_TBL(ZEXT816(0),auVar18,0x70605040b0a0100);
  uVar82 = a64_TBL(ZEXT816(0),auVar68,0x706090803020100);
  uVar91 = a64_TBL(ZEXT816(0),auVar93,0x7060d0c0b0a0504);
  auVar66[2] = (char)sVar32;
  auVar66._0_2_ = sVar14;
  auVar66[3] = uVar51;
  auVar66[4] = (char)sVar37;
  auVar66[5] = uVar54;
  auVar66[6] = (char)sVar38;
  auVar66[7] = uVar58;
  auVar66[8] = (char)uVar63;
  auVar66[9] = (char)((ulong)uVar63 >> 8);
  auVar66[10] = (char)((ulong)uVar63 >> 0x10);
  auVar66[11] = (char)((ulong)uVar63 >> 0x18);
  auVar66[12] = (char)((ulong)uVar63 >> 0x20);
  auVar66[13] = (char)((ulong)uVar63 >> 0x28);
  auVar66[14] = (char)((ulong)uVar63 >> 0x30);
  auVar66[15] = (char)((ulong)uVar63 >> 0x38);
  uVar104 = a64_TBL(ZEXT816(0),auVar66,0x7060d0c0b0a0504);
  *(short *)(param_1 + 0x9aa0) =
       (short)*(undefined4 *)(lVar1 + 0x49ae0) + (short)*(undefined4 *)(lVar1 + 0x69af0);
  *(undefined8 *)(param_1 + 0x9728) = uVar44;
  *(undefined8 *)(param_1 + 0x9730) = uVar15;
  *(undefined8 *)(param_1 + 0x9738) = uVar91;
  *(undefined8 *)(param_1 + 0x9740) = uVar82;
  *(undefined8 *)(param_1 + 0x9748) = uVar99;
  *(undefined8 *)(param_1 + 0x9750) = uVar104;
  geometry_update_base_color_cache();
  uVar63 = *(undefined8 *)(param_1 + 0x993c);
  uVar44 = *(undefined8 *)(param_1 + 0x9934);
  uVar82 = *(undefined8 *)(param_1 + 0x994c);
  uVar104 = *(undefined8 *)(param_1 + 0x9944);
  uVar79 = CONCAT14((char)((ulong)uVar44 >> 0x20),
                    (uint)(CONCAT12((char)((ulong)uVar44 >> 0x10),(ushort)((byte)uVar44 & 0x1f)) &
                          0x1fffff)) & 0x1fffffffff;
  uVar33 = (uint5)(CONCAT16((char)((ulong)uVar44 >> 0x30),(uint6)uVar79) >> 0x10) & 0x1fffffffff;
  uVar90 = CONCAT14((char)((ulong)uVar63 >> 0x20),
                    (uint)(CONCAT12((char)((ulong)uVar63 >> 0x10),(ushort)((byte)uVar63 & 0x1f)) &
                          0x1fffff)) & 0x1fffffffff;
  uVar11 = (uint5)(CONCAT16((char)((ulong)uVar63 >> 0x30),(uint6)uVar90) >> 0x10) & 0x1fffffffff;
  uVar62 = CONCAT14((char)((ulong)uVar104 >> 0x20),
                    (uint)(CONCAT12((char)((ulong)uVar104 >> 0x10),(ushort)((byte)uVar104 & 0x1f)) &
                          0x1fffff)) & 0x1fffffffff;
  uVar29 = (uint5)(CONCAT16((char)((ulong)uVar104 >> 0x30),(uint6)uVar62) >> 0x10) & 0x1fffffffff;
  uVar76 = CONCAT14((char)((ulong)uVar82 >> 0x20),
                    (uint)(CONCAT12((char)((ulong)uVar82 >> 0x10),(ushort)((byte)uVar82 & 0x1f)) &
                          0x1fffff)) & 0x1fffffffff;
  uVar43 = (uint5)(CONCAT16((char)((ulong)uVar82 >> 0x30),(uint6)uVar76) >> 0x10) & 0x1fffffffff;
  uVar15 = *(undefined8 *)(param_1 + 0x995c);
  uVar99 = *(undefined8 *)(param_1 + 0x9954);
  auVar3 = *(undefined (*) [16])(param_1 + 0x9964);
  uVar105 = (short)uVar79 << 1;
  sVar96 = (short)uVar33 << 1;
  sVar106 = (short)(uVar33 >> 0x10) << 1;
  sVar107 = (ushort)(byte)(uVar33 >> 0x20) << 1;
  uVar108 = (short)uVar90 << 1;
  sVar109 = (short)uVar11 << 1;
  sVar110 = (short)(uVar11 >> 0x10) << 1;
  sVar111 = (ushort)(byte)(uVar11 >> 0x20) << 1;
  uVar103 = (short)uVar62 << 1;
  sVar47 = (short)uVar29 << 1;
  sVar48 = (short)(uVar29 >> 0x10) << 1;
  sVar49 = (ushort)(byte)(uVar29 >> 0x20) << 1;
  uVar41 = (short)uVar76 << 1;
  sVar89 = (short)uVar43 << 1;
  sVar94 = (short)(uVar43 >> 0x10) << 1;
  sVar95 = (ushort)(byte)(uVar43 >> 0x20) << 1;
  uVar29 = CONCAT14((char)((ushort)((ulong)uVar63 >> 0x10) >> 5),
                    (uint)((byte)((ushort)uVar63 >> 5) & 0x1f)) & 0x1f00ffffff;
  auVar84._2_2_ = 0;
  auVar84._0_2_ = uVar105;
  auVar84._4_2_ = sVar96;
  auVar84._6_2_ = 0;
  auVar84._8_2_ = sVar106;
  auVar84._10_2_ = 0;
  auVar84._12_2_ = sVar107;
  auVar84._14_2_ = 0;
  auVar73._2_2_ = 0;
  auVar73._0_2_ = uVar108;
  auVar73._4_2_ = sVar109;
  auVar73._6_2_ = 0;
  auVar73._8_2_ = sVar110;
  auVar73._10_2_ = 0;
  auVar73._12_2_ = sVar111;
  auVar73._14_2_ = 0;
  iVar10 = (uint)((byte)((ushort)uVar44 >> 5) & 0x1f) << 1;
  cVar121 = ((byte)((ushort)((ulong)uVar44 >> 0x10) >> 5) & 0x1f) * '\x02';
  cVar122 = ((byte)((ushort)((ulong)uVar44 >> 0x20) >> 5) & 0x1f) * '\x02';
  cVar123 = ((byte)(ushort)((ulong)uVar44 >> 0x35) & 0x1f) * '\x02';
  uVar98 = CONCAT14((char)((ulong)uVar99 >> 0x20),
                    (uint)(CONCAT12((char)((ulong)uVar99 >> 0x10),(ushort)((byte)uVar99 & 0x1f)) &
                          0x1fffff)) & 0x1fffffffff;
  uVar33 = (uint5)(CONCAT16((char)((ulong)uVar99 >> 0x30),(uint6)uVar98) >> 0x10) & 0x1fffffffff;
  uVar102 = CONCAT14((char)((ulong)uVar15 >> 0x20),
                     (uint)(CONCAT12((char)((ulong)uVar15 >> 0x10),(ushort)((byte)uVar15 & 0x1f)) &
                           0x1fffff)) & 0x1fffffffff;
  uVar11 = (uint5)(CONCAT16((char)((ulong)uVar15 >> 0x30),(uint6)uVar102) >> 0x10) & 0x1fffffffff;
  auVar83._0_4_ = (int)uVar29 << 1;
  auVar83._4_4_ = (uint)(byte)(uVar29 >> 0x20) << 1;
  auVar83._8_4_ = (uint)((byte)((ushort)((ulong)uVar63 >> 0x20) >> 5) & 0x1f) << 1;
  auVar83._12_4_ = (uint)((byte)(ushort)((ulong)uVar63 >> 0x35) & 0x1f) << 1;
  auVar75._2_2_ = 0;
  auVar75._0_2_ = uVar103;
  auVar75._4_2_ = sVar47;
  auVar75._6_2_ = 0;
  auVar75._8_2_ = sVar48;
  auVar75._10_2_ = 0;
  auVar75._12_2_ = sVar49;
  auVar75._14_2_ = 0;
  auVar72._2_2_ = 0;
  auVar72._0_2_ = uVar41;
  auVar72._4_2_ = sVar89;
  auVar72._6_2_ = 0;
  auVar72._8_2_ = sVar94;
  auVar72._10_2_ = 0;
  auVar72._12_2_ = sVar95;
  auVar72._14_2_ = 0;
  uVar79 = CONCAT14((char)((ushort)((ulong)uVar82 >> 0x10) >> 5),
                    (uint)((byte)((ushort)uVar82 >> 5) & 0x1f)) & 0x1f00ffffff;
  auVar71 = NEON_cmeq(auVar84,0,2);
  auVar69 = NEON_cmeq(auVar73,0,2);
  uVar43 = CONCAT14((byte)((ulong)uVar44 >> 0x18) >> 2,
                    (uint)((byte)((ulong)uVar44 >> 8) >> 2 & 0x1f)) & 0x1f00ffffff;
  uVar29 = CONCAT14((byte)((ulong)uVar63 >> 0x18) >> 2,
                    (uint)((byte)((ulong)uVar63 >> 8) >> 2 & 0x1f)) & 0x1f00ffffff;
  uVar90 = CONCAT14((byte)((ulong)uVar104 >> 0x18) >> 2,
                    (uint)((byte)((ulong)uVar104 >> 8) >> 2 & 0x1f)) & 0x1f00ffffff;
  uVar76 = CONCAT14((char)((ushort)((ulong)uVar15 >> 0x10) >> 5),
                    (uint)((byte)((ushort)uVar15 >> 5) & 0x1f)) & 0x1f00ffffff;
  uVar112 = CONCAT14((char)(auVar3._2_2_ >> 5),(uint)((byte)(auVar3._0_2_ >> 5) & 0x1f)) &
            0x1f00ffffff;
  uVar62 = CONCAT14((char)(auVar3._10_2_ >> 5),(uint)((byte)(auVar3._8_2_ >> 5) & 0x1f)) &
           0x1f00ffffff;
  auVar67[4] = cVar121;
  auVar67._0_4_ = iVar10;
  auVar67._5_3_ = 0;
  auVar67[8] = cVar122;
  auVar67._9_3_ = 0;
  auVar67[12] = cVar123;
  auVar67._13_3_ = 0;
  auVar73 = NEON_cmeq(auVar67,0,2);
  auVar68 = NEON_cmeq(auVar75,0,2);
  auVar67 = NEON_cmeq(auVar72,0,2);
  auVar84 = NEON_cmeq(auVar83,0,2);
  uVar97 = (short)uVar98 << 1;
  sVar100 = (short)uVar33 << 1;
  sVar40 = (short)(uVar33 >> 0x10) << 1;
  sVar37 = (ushort)(byte)(uVar33 >> 0x20) << 1;
  uVar101 = (short)uVar102 << 1;
  sVar38 = (short)uVar11 << 1;
  sVar39 = (short)(uVar11 >> 0x10) << 1;
  sVar42 = (ushort)(byte)(uVar11 >> 0x20) << 1;
  sVar14 = (ushort)(auVar3[0] & 0x1f) << 1;
  cVar50 = (auVar3[2] & 0x1f) * '\x02';
  cVar52 = (auVar3[4] & 0x1f) * '\x02';
  cVar56 = (auVar3[6] & 0x1f) * '\x02';
  sVar32 = (ushort)(auVar3[8] & 0x1f) << 1;
  cVar59 = (auVar3[10] & 0x1f) * '\x02';
  cVar60 = (auVar3[12] & 0x1f) * '\x02';
  cVar61 = (auVar3[14] & 0x1f) * '\x02';
  uVar33 = CONCAT14((byte)((ulong)uVar99 >> 0x18) >> 2,
                    (uint)((byte)((ulong)uVar99 >> 8) >> 2 & 0x1f)) & 0x1f00ffffff;
  uVar16 = (ulong)(CONCAT14(auVar3[11] >> 2,(uint)(byte)(auVar3[9] >> 2)) & 0x1fffffffff) &
           0xffffffffffffff1f;
  iVar9 = (uint)((byte)((ushort)uVar104 >> 5) & 0x1f) << 1;
  cVar118 = ((byte)((ushort)((ulong)uVar104 >> 0x10) >> 5) & 0x1f) * '\x02';
  cVar119 = ((byte)((ushort)((ulong)uVar104 >> 0x20) >> 5) & 0x1f) * '\x02';
  cVar120 = ((byte)(ushort)((ulong)uVar104 >> 0x35) & 0x1f) * '\x02';
  auVar80._0_4_ = (int)uVar79 << 1;
  auVar80._4_4_ = (uint)(byte)(uVar79 >> 0x20) << 1;
  auVar80._8_4_ = (uint)((byte)((ushort)((ulong)uVar82 >> 0x20) >> 5) & 0x1f) << 1;
  auVar80._12_4_ = (uint)((byte)(ushort)((ulong)uVar82 >> 0x35) & 0x1f) << 1;
  auVar45._0_4_ = (int)uVar43 << 1;
  auVar45._4_4_ = (uint)(byte)(uVar43 >> 0x20) << 1;
  auVar45._8_4_ = (uint)((byte)((ulong)uVar44 >> 0x28) >> 2 & 0x1f) << 1;
  auVar45._12_4_ = (uint)((byte)((ulong)uVar44 >> 0x3a) & 0x1f) << 1;
  auVar92._0_4_ = (int)uVar90 << 1;
  auVar92._4_4_ = (uint)(byte)(uVar90 >> 0x20) << 1;
  auVar92._8_4_ = (uint)((byte)((ulong)uVar104 >> 0x28) >> 2 & 0x1f) << 1;
  auVar92._12_4_ = (uint)((byte)((ulong)uVar104 >> 0x3a) & 0x1f) << 1;
  iVar6 = (uint)((byte)((ulong)uVar82 >> 8) >> 2 & 0x1f) << 1;
  cVar25 = ((byte)((ulong)uVar82 >> 0x18) >> 2 & 0x1f) * '\x02';
  cVar27 = ((byte)((ulong)uVar82 >> 0x28) >> 2 & 0x1f) * '\x02';
  cVar28 = ((byte)((ulong)uVar82 >> 0x3a) & 0x1f) * '\x02';
  auVar30._0_4_ = (int)uVar29 << 1;
  auVar30._4_4_ = (uint)(byte)(uVar29 >> 0x20) << 1;
  auVar30._8_4_ = (uint)((byte)((ulong)uVar63 >> 0x28) >> 2 & 0x1f) << 1;
  auVar30._12_4_ = (uint)((byte)((ulong)uVar63 >> 0x3a) & 0x1f) << 1;
  iVar8 = (uint)((byte)((ushort)uVar99 >> 5) & 0x1f) << 1;
  cVar115 = ((byte)((ushort)((ulong)uVar99 >> 0x10) >> 5) & 0x1f) * '\x02';
  cVar116 = ((byte)((ushort)((ulong)uVar99 >> 0x20) >> 5) & 0x1f) * '\x02';
  cVar117 = ((byte)(ushort)((ulong)uVar99 >> 0x35) & 0x1f) * '\x02';
  auVar113._0_4_ = (int)uVar112 << 1;
  auVar113._4_4_ = (uint)(byte)(uVar112 >> 0x20) << 1;
  auVar113._8_4_ = (uint)((byte)(auVar3._4_2_ >> 5) & 0x1f) << 1;
  auVar113._12_4_ = (uint)((byte)(auVar3._6_2_ >> 5) & 0x1f) << 1;
  auVar77._0_4_ = (int)uVar76 << 1;
  auVar77._4_4_ = (uint)(byte)(uVar76 >> 0x20) << 1;
  auVar77._8_4_ = (uint)((byte)((ushort)((ulong)uVar15 >> 0x20) >> 5) & 0x1f) << 1;
  auVar77._12_4_ = (uint)((byte)(ushort)((ulong)uVar15 >> 0x35) & 0x1f) << 1;
  auVar64._0_4_ = (int)uVar62 << 1;
  auVar64._4_4_ = (uint)(byte)(uVar62 >> 0x20) << 1;
  auVar64._8_4_ = (uint)((byte)(auVar3._12_2_ >> 5) & 0x1f) << 1;
  auVar64._12_4_ = (uint)((byte)(auVar3._14_2_ >> 5) & 0x1f) << 1;
  auVar35._0_4_ = (int)uVar33 << 1;
  auVar35._4_4_ = (uint)(byte)(uVar33 >> 0x20) << 1;
  auVar35._8_4_ = (uint)((byte)((ulong)uVar99 >> 0x28) >> 2 & 0x1f) << 1;
  auVar35._12_4_ = (uint)((byte)((ulong)uVar99 >> 0x3a) & 0x1f) << 1;
  iVar4 = (uint)((byte)((ulong)uVar15 >> 8) >> 2 & 0x1f) << 1;
  cVar20 = ((byte)((ulong)uVar15 >> 0x18) >> 2 & 0x1f) * '\x02';
  cVar21 = ((byte)((ulong)uVar15 >> 0x28) >> 2 & 0x1f) * '\x02';
  cVar22 = ((byte)((ulong)uVar15 >> 0x3a) & 0x1f) * '\x02';
  iVar7 = (uint)(auVar3[1] >> 2 & 0x1f) << 1;
  cVar86 = (auVar3[3] >> 2 & 0x1f) * '\x02';
  cVar87 = (auVar3[5] >> 2 & 0x1f) * '\x02';
  cVar88 = (auVar3[7] >> 2 & 0x1f) * '\x02';
  auVar17._0_4_ = (int)uVar16 << 1;
  auVar17._4_4_ = (int)(uVar16 >> 0x20) << 1;
  auVar17._8_4_ = (uint)(auVar3[13] >> 2 & 0x1f) << 1;
  auVar17._12_4_ = (uint)(auVar3[15] >> 2 & 0x1f) << 1;
  auVar81._2_2_ = 0;
  auVar81._0_2_ = uVar97;
  auVar81._4_2_ = sVar100;
  auVar81._6_2_ = 0;
  auVar81._8_2_ = sVar40;
  auVar81._10_2_ = 0;
  auVar81._12_2_ = sVar37;
  auVar81._14_2_ = 0;
  auVar126._2_2_ = 0;
  auVar126._0_2_ = uVar101;
  auVar126._4_2_ = sVar38;
  auVar126._6_2_ = 0;
  auVar126._8_2_ = sVar39;
  auVar126._10_2_ = 0;
  auVar126._12_2_ = sVar42;
  auVar126._14_2_ = 0;
  auVar125._6_2_ = 0;
  auVar125._0_6_ = (uint6)CONCAT14(cVar50,(uint)CONCAT12(cVar50,sVar14)) & 0xffff0000ffff;
  auVar125[8] = cVar52;
  auVar125._9_3_ = 0;
  auVar125[12] = cVar56;
  auVar125._13_3_ = 0;
  auVar124._6_2_ = 0;
  auVar124._0_6_ = (uint6)CONCAT14(cVar59,(uint)CONCAT12(cVar59,sVar32)) & 0xffff0000ffff;
  auVar124[8] = cVar60;
  auVar124._9_3_ = 0;
  auVar124[12] = cVar61;
  auVar124._13_3_ = 0;
  auVar70[4] = cVar118;
  auVar70._0_4_ = iVar9;
  auVar70._5_3_ = 0;
  auVar70[8] = cVar119;
  auVar70._9_3_ = 0;
  auVar70[12] = cVar120;
  auVar70._13_3_ = 0;
  auVar70 = NEON_cmeq(auVar70,0,2);
  auVar75 = NEON_cmeq(auVar45,0,2);
  auVar72 = NEON_cmeq(auVar92,0,2);
  auVar65[4] = cVar25;
  auVar65._0_4_ = iVar6;
  auVar65._5_3_ = 0;
  auVar65[8] = cVar27;
  auVar65._9_3_ = 0;
  auVar65[12] = cVar28;
  auVar65._13_3_ = 0;
  auVar93 = NEON_cmeq(auVar65,0,2);
  auVar74[4] = cVar115;
  auVar74._0_4_ = iVar8;
  auVar74._5_3_ = 0;
  auVar74[8] = cVar116;
  auVar74._9_3_ = 0;
  auVar74[12] = cVar117;
  auVar74._13_3_ = 0;
  auVar46 = NEON_cmeq(auVar74,0,2);
  auVar74 = NEON_cmeq(auVar113,0,2);
  auVar85 = NEON_cmeq(auVar35,0,2);
  auVar31[4] = cVar20;
  auVar31._0_4_ = iVar4;
  auVar31._5_3_ = 0;
  auVar31[8] = cVar21;
  auVar31._9_3_ = 0;
  auVar31[12] = cVar22;
  auVar31._13_3_ = 0;
  auVar114 = NEON_cmeq(auVar31,0,2);
  auVar78[4] = cVar86;
  auVar78._0_4_ = iVar7;
  auVar78._5_3_ = 0;
  auVar78[8] = cVar87;
  auVar78._9_3_ = 0;
  auVar78[12] = cVar88;
  auVar78._13_3_ = 0;
  auVar36 = NEON_cmeq(auVar78,0,2);
  auVar66 = NEON_cmeq(auVar81,0,2);
  auVar126 = NEON_cmeq(auVar126,0,2);
  auVar125 = NEON_cmeq(auVar125,0,2);
  auVar124 = NEON_cmeq(auVar124,0,2);
  auVar81 = NEON_cmeq(auVar80,0,2);
  auVar31 = NEON_cmeq(auVar30,0,2);
  auVar78 = NEON_cmeq(auVar77,0,2);
  auVar65 = NEON_cmeq(auVar64,0,2);
  auVar18 = NEON_cmeq(auVar17,0,2);
  auVar3 = *(undefined (*) [16])(param_1 + 0x9984);
  *(byte *)(param_1 + 0x9984) = *(byte *)(param_1 + 0x997c) & 0x7f;
  *(byte *)(param_1 + 0x9985) = *(byte *)(param_1 + 0x997d) & 0x7f;
  *(byte *)(param_1 + 0x9986) = *(byte *)(param_1 + 0x997e) & 0x7f;
  *(byte *)(param_1 + 0x9987) = *(byte *)(param_1 + 0x997f) & 0x7f;
  *(byte *)(param_1 + 0x9988) = *(byte *)(param_1 + 0x9980) & 0x7f;
  *(byte *)(param_1 + 0x9989) = *(byte *)(param_1 + 0x9981) & 0x7f;
  *(byte *)(param_1 + 0x998a) = *(byte *)(param_1 + 0x9982) & 0x7f;
  *(byte *)(param_1 + 0x998b) = *(byte *)(param_1 + 0x9983) & 0x7f;
  *(byte *)(param_1 + 0x9974) = *(byte *)(param_1 + 0x9974) & 0x7f;
  *(byte *)(param_1 + 0x9975) = *(byte *)(param_1 + 0x9975) & 0x7f;
  *(byte *)(param_1 + 0x9976) = *(byte *)(param_1 + 0x9976) & 0x7f;
  *(byte *)(param_1 + 0x9977) = *(byte *)(param_1 + 0x9977) & 0x7f;
  *(byte *)(param_1 + 0x9978) = *(byte *)(param_1 + 0x9978) & 0x7f;
  *(byte *)(param_1 + 0x9979) = *(byte *)(param_1 + 0x9979) & 0x7f;
  *(byte *)(param_1 + 0x997a) = *(byte *)(param_1 + 0x997a) & 0x7f;
  *(byte *)(param_1 + 0x997b) = *(byte *)(param_1 + 0x997b) & 0x7f;
  *(ulong *)(param_1 + 0x99d4) =
       CONCAT17((char)sVar95 + 1U & ~auVar67[12],
                CONCAT16((char)sVar94 + 1U & ~auVar67[8],
                         CONCAT15((char)sVar89 + 1U & ~auVar67[4],
                                  CONCAT14((char)uVar41 + 1U & ~auVar67[0],
                                           CONCAT13((char)sVar49 + 1U & ~auVar68[12],
                                                    CONCAT12((char)sVar48 + 1U & ~auVar68[8],
                                                             CONCAT11((char)sVar47 + 1U &
                                                                      ~auVar68[4],
                                                                      (char)uVar103 + 1U &
                                                                      ~auVar68[0])))))));
  *(ulong *)(param_1 + 0x99cc) =
       CONCAT17((char)sVar111 + 1U & ~auVar69[12],
                CONCAT16((char)sVar110 + 1U & ~auVar69[8],
                         CONCAT15((char)sVar109 + 1U & ~auVar69[4],
                                  CONCAT14((char)uVar108 + 1U & ~auVar69[0],
                                           CONCAT13((char)sVar107 + 1U & ~auVar71[12],
                                                    CONCAT12((char)sVar106 + 1U & ~auVar71[8],
                                                             CONCAT11((char)sVar96 + 1U &
                                                                      ~auVar71[4],
                                                                      (char)uVar105 + 1U &
                                                                      ~auVar71[0])))))));
  *(ulong *)(param_1 + 0x998c) = auVar3._8_8_ & 0x7f7f7f7f7f7f7f7f;
  *(ulong *)(param_1 + 0x9984) = auVar3._0_8_ & 0x7f7f7f7f7f7f7f7f;
  *(ulong *)(param_1 + 0x99e4) =
       CONCAT17(cVar61 + 1U & ~auVar124[12],
                CONCAT16(cVar60 + 1U & ~auVar124[8],
                         CONCAT15(cVar59 + 1U & ~auVar124[4],
                                  CONCAT14((char)sVar32 + 1U & ~auVar124[0],
                                           CONCAT13(cVar56 + 1U & ~auVar125[12],
                                                    CONCAT12(cVar52 + 1U & ~auVar125[8],
                                                             CONCAT11(cVar50 + 1U & ~auVar125[4],
                                                                      (char)sVar14 + 1U &
                                                                      ~auVar125[0])))))));
  *(ulong *)(param_1 + 0x99dc) =
       CONCAT17((char)sVar42 + 1U & ~auVar126[12],
                CONCAT16((char)sVar39 + 1U & ~auVar126[8],
                         CONCAT15((char)sVar38 + 1U & ~auVar126[4],
                                  CONCAT14((char)uVar101 + 1U & ~auVar126[0],
                                           CONCAT13((char)sVar37 + 1U & ~auVar66[12],
                                                    CONCAT12((char)sVar40 + 1U & ~auVar66[8],
                                                             CONCAT11((char)sVar100 + 1U &
                                                                      ~auVar66[4],
                                                                      (char)uVar97 + 1U &
                                                                      ~auVar66[0])))))));
  *(ulong *)(param_1 + 0x99f4) =
       CONCAT17((char)auVar80._12_4_ + 1U & ~auVar81[12],
                CONCAT16((char)auVar80._8_4_ + 1U & ~auVar81[8],
                         CONCAT15((char)auVar80._4_4_ + 1U & ~auVar81[4],
                                  CONCAT14((char)auVar80._0_4_ + 1U & ~auVar81[0],
                                           CONCAT13(cVar120 + 1U & ~auVar70[12],
                                                    CONCAT12(cVar119 + 1U & ~auVar70[8],
                                                             CONCAT11(cVar118 + 1U & ~auVar70[4],
                                                                      (char)iVar9 + 1U & ~auVar70[0]
                                                                     )))))));
  *(ulong *)(param_1 + 0x99ec) =
       CONCAT17((char)auVar83._12_4_ + 1U & ~auVar84[12],
                CONCAT16((char)auVar83._8_4_ + 1U & ~auVar84[8],
                         CONCAT15((char)auVar83._4_4_ + 1U & ~auVar84[4],
                                  CONCAT14((char)auVar83._0_4_ + 1U & ~auVar84[0],
                                           CONCAT13(cVar123 + 1U & ~auVar73[12],
                                                    CONCAT12(cVar122 + 1U & ~auVar73[8],
                                                             CONCAT11(cVar121 + 1U & ~auVar73[4],
                                                                      (char)iVar10 + 1U &
                                                                      ~auVar73[0])))))));
  *(ulong *)(param_1 + 0x9a04) =
       CONCAT17((char)auVar64._12_4_ + 1U & ~auVar65[12],
                CONCAT16((char)auVar64._8_4_ + 1U & ~auVar65[8],
                         CONCAT15((char)auVar64._4_4_ + 1U & ~auVar65[4],
                                  CONCAT14((char)auVar64._0_4_ + 1U & ~auVar65[0],
                                           CONCAT13((char)auVar113._12_4_ + 1U & ~auVar74[12],
                                                    CONCAT12((char)auVar113._8_4_ + 1U & ~auVar74[8]
                                                             ,CONCAT11((char)auVar113._4_4_ + 1U &
                                                                       ~auVar74[4],
                                                                       (char)auVar113._0_4_ + 1U &
                                                                       ~auVar74[0])))))));
  *(ulong *)(param_1 + 0x99fc) =
       CONCAT17((char)auVar77._12_4_ + 1U & ~auVar78[12],
                CONCAT16((char)auVar77._8_4_ + 1U & ~auVar78[8],
                         CONCAT15((char)auVar77._4_4_ + 1U & ~auVar78[4],
                                  CONCAT14((char)auVar77._0_4_ + 1U & ~auVar78[0],
                                           CONCAT13(cVar117 + 1U & ~auVar46[12],
                                                    CONCAT12(cVar116 + 1U & ~auVar46[8],
                                                             CONCAT11(cVar115 + 1U & ~auVar46[4],
                                                                      (char)iVar8 + 1U & ~auVar46[0]
                                                                     )))))));
  *(byte *)(param_1 + 0x9a1c) = (char)auVar92._0_4_ + 1U & ~auVar72[0];
  *(byte *)(param_1 + 0x9a1d) = (char)auVar92._4_4_ + 1U & ~auVar72[4];
  *(byte *)(param_1 + 0x9a1e) = (char)auVar92._8_4_ + 1U & ~auVar72[8];
  *(byte *)(param_1 + 0x9a1f) = (char)auVar92._12_4_ + 1U & ~auVar72[12];
  *(byte *)(param_1 + 0x9a20) = (char)iVar6 + 1U & ~auVar93[0];
  *(byte *)(param_1 + 0x9a21) = cVar25 + 1U & ~auVar93[4];
  *(byte *)(param_1 + 0x9a22) = cVar27 + 1U & ~auVar93[8];
  *(byte *)(param_1 + 0x9a23) = cVar28 + 1U & ~auVar93[12];
  *(byte *)(param_1 + 0x9a0c) = (char)auVar45._0_4_ + 1U & ~auVar75[0];
  *(byte *)(param_1 + 0x9a0d) = (char)auVar45._4_4_ + 1U & ~auVar75[4];
  *(byte *)(param_1 + 0x9a0e) = (char)auVar45._8_4_ + 1U & ~auVar75[8];
  *(byte *)(param_1 + 0x9a0f) = (char)auVar45._12_4_ + 1U & ~auVar75[12];
  *(byte *)(param_1 + 0x9a10) = (char)auVar30._0_4_ + 1U & ~auVar31[0];
  *(byte *)(param_1 + 0x9a11) = (char)auVar30._4_4_ + 1U & ~auVar31[4];
  *(byte *)(param_1 + 0x9a12) = (char)auVar30._8_4_ + 1U & ~auVar31[8];
  *(byte *)(param_1 + 0x9a13) = (char)auVar30._12_4_ + 1U & ~auVar31[12];
  *(ulong *)(param_1 + 0x9a24) =
       CONCAT17((char)auVar17._12_4_ + 1U & ~auVar18[12],
                CONCAT16((char)auVar17._8_4_ + 1U & ~auVar18[8],
                         CONCAT15((char)auVar17._4_4_ + 1U & ~auVar18[4],
                                  CONCAT14((char)auVar17._0_4_ + 1U & ~auVar18[0],
                                           CONCAT13(cVar88 + 1U & ~auVar36[12],
                                                    CONCAT12(cVar87 + 1U & ~auVar36[8],
                                                             CONCAT11(cVar86 + 1U & ~auVar36[4],
                                                                      (char)iVar7 + 1U & ~auVar36[0]
                                                                     )))))));
  *(ulong *)(param_1 + 0x9a1c) =
       CONCAT17(cVar22 + 1U & ~auVar114[12],
                CONCAT16(cVar21 + 1U & ~auVar114[8],
                         CONCAT15(cVar20 + 1U & ~auVar114[4],
                                  CONCAT14((char)iVar4 + 1U & ~auVar114[0],
                                           CONCAT13((char)auVar35._12_4_ + 1U & ~auVar85[12],
                                                    CONCAT12((char)auVar35._8_4_ + 1U & ~auVar85[8],
                                                             CONCAT11((char)auVar35._4_4_ + 1U &
                                                                      ~auVar85[4],
                                                                      (char)auVar35._0_4_ + 1U &
                                                                      ~auVar85[0])))))));
  uVar97 = *(ushort *)(extraout_x15 + 0x1924);
  cVar20 = '\0';
  if ((uVar97 & 0x1f) != 0) {
    cVar20 = (char)(uVar97 & 0x1f) * '\x02' + '\x01';
  }
  cVar21 = '\0';
  if ((uVar97 >> 5 & 0x1f) != 0) {
    cVar21 = ((byte)(uVar97 >> 5) & 0x1f) * '\x02' + '\x01';
  }
  cVar22 = '\0';
  if ((uVar97 >> 10 & 0x1f) != 0) {
    cVar22 = ((byte)(uVar97 >> 10) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(extraout_x14 + 0x9b4) = cVar20;
  *(char *)(extraout_x14 + 0x9bc) = cVar21;
  *(char *)(extraout_x14 + 0x9c4) = cVar22;
  uVar97 = *(ushort *)(extraout_x15 + 0x1926);
  cVar20 = '\0';
  if ((uVar97 & 0x1f) != 0) {
    cVar20 = (char)(uVar97 & 0x1f) * '\x02' + '\x01';
  }
  cVar21 = '\0';
  if ((uVar97 >> 5 & 0x1f) != 0) {
    cVar21 = ((byte)(uVar97 >> 5) & 0x1f) * '\x02' + '\x01';
  }
  cVar22 = '\0';
  if ((uVar97 >> 10 & 0x1f) != 0) {
    cVar22 = ((byte)(uVar97 >> 10) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(extraout_x14 + 0x9b5) = cVar20;
  *(char *)(extraout_x14 + 0x9bd) = cVar21;
  *(char *)(extraout_x14 + 0x9c5) = cVar22;
  uVar97 = *(ushort *)(extraout_x15 + 0x1928);
  cVar20 = '\0';
  if ((uVar97 & 0x1f) != 0) {
    cVar20 = (char)(uVar97 & 0x1f) * '\x02' + '\x01';
  }
  cVar21 = '\0';
  if ((uVar97 >> 5 & 0x1f) != 0) {
    cVar21 = ((byte)(uVar97 >> 5) & 0x1f) * '\x02' + '\x01';
  }
  cVar22 = '\0';
  if ((uVar97 >> 10 & 0x1f) != 0) {
    cVar22 = ((byte)(uVar97 >> 10) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(extraout_x14 + 0x9b6) = cVar20;
  *(char *)(extraout_x14 + 0x9be) = cVar21;
  *(char *)(extraout_x14 + 0x9c6) = cVar22;
  uVar97 = *(ushort *)(extraout_x15 + 0x192a);
  cVar20 = '\0';
  if ((uVar97 & 0x1f) != 0) {
    cVar20 = (char)(uVar97 & 0x1f) * '\x02' + '\x01';
  }
  cVar21 = '\0';
  if ((uVar97 >> 5 & 0x1f) != 0) {
    cVar21 = ((byte)(uVar97 >> 5) & 0x1f) * '\x02' + '\x01';
  }
  cVar22 = '\0';
  if ((uVar97 >> 10 & 0x1f) != 0) {
    cVar22 = ((byte)(uVar97 >> 10) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(extraout_x14 + 0x9b7) = cVar20;
  *(char *)(extraout_x14 + 0x9bf) = cVar21;
  *(char *)(extraout_x14 + 0x9c7) = cVar22;
  uVar97 = *(ushort *)(extraout_x15 + 0x192c);
  cVar20 = '\0';
  if ((uVar97 & 0x1f) != 0) {
    cVar20 = (char)(uVar97 & 0x1f) * '\x02' + '\x01';
  }
  cVar21 = '\0';
  if ((uVar97 >> 5 & 0x1f) != 0) {
    cVar21 = ((byte)(uVar97 >> 5) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(extraout_x14 + 0x9b8) = cVar20;
  cVar20 = '\0';
  if ((uVar97 >> 10 & 0x1f) != 0) {
    cVar20 = ((byte)(uVar97 >> 10) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(extraout_x14 + 0x9c0) = cVar21;
  *(char *)(extraout_x14 + 0x9c8) = cVar20;
  uVar97 = *(ushort *)(extraout_x15 + 0x192e);
  cVar20 = '\0';
  if ((uVar97 & 0x1f) != 0) {
    cVar20 = (char)(uVar97 & 0x1f) * '\x02' + '\x01';
  }
  cVar21 = '\0';
  if ((uVar97 >> 5 & 0x1f) != 0) {
    cVar21 = ((byte)(uVar97 >> 5) & 0x1f) * '\x02' + '\x01';
  }
  cVar22 = '\0';
  if ((uVar97 >> 10 & 0x1f) != 0) {
    cVar22 = ((byte)(uVar97 >> 10) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(extraout_x14 + 0x9b9) = cVar20;
  *(char *)(extraout_x14 + 0x9c1) = cVar21;
  *(char *)(extraout_x14 + 0x9c9) = cVar22;
  lVar1 = extraout_x18 + (ulong)*(byte *)(extraout_x14 + 0xac0) * 0x10008;
  uVar97 = *(ushort *)(extraout_x15 + 0x1930);
  cVar20 = '\0';
  if ((uVar97 & 0x1f) != 0) {
    cVar20 = (char)(uVar97 & 0x1f) * '\x02' + '\x01';
  }
  cVar21 = '\0';
  if ((uVar97 >> 5 & 0x1f) != 0) {
    cVar21 = ((byte)(uVar97 >> 5) & 0x1f) * '\x02' + '\x01';
  }
  cVar22 = '\0';
  if ((uVar97 >> 10 & 0x1f) != 0) {
    cVar22 = ((byte)(uVar97 >> 10) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(extraout_x14 + 0x9ba) = cVar20;
  *(char *)(extraout_x14 + 0x9c2) = cVar21;
  *(char *)(extraout_x14 + 0x9ca) = cVar22;
  uVar97 = *(ushort *)(extraout_x15 + 0x1932);
  cVar20 = '\0';
  if ((uVar97 & 0x1f) != 0) {
    cVar20 = (char)(uVar97 & 0x1f) * '\x02' + '\x01';
  }
  cVar21 = '\0';
  if ((uVar97 >> 5 & 0x1f) != 0) {
    cVar21 = ((byte)(uVar97 >> 5) & 0x1f) * '\x02' + '\x01';
  }
  cVar22 = '\0';
  if ((uVar97 >> 10 & 0x1f) != 0) {
    cVar22 = ((byte)(uVar97 >> 10) & 0x1f) * '\x02' + '\x01';
  }
  *(char *)(extraout_x14 + 0x9bb) = cVar20;
  *(char *)(extraout_x14 + 0x9c3) = cVar21;
  *(char *)(extraout_x14 + 0x9cb) = cVar22;
  *(short *)(extraout_x15 + 0x1aa0) =
       (short)*(undefined4 *)(lVar1 + 0x49ae0) + (short)*(undefined4 *)(lVar1 + 0x69af0);
  *(undefined2 *)(param_1 + 0x9acf) = 0x101;
  return;
}


