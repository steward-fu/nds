/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_shade_32_2x_c
 * Address  : 0013dfa0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_color_convert_shade_32_2x_c
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined auVar4 [16];
  undefined auVar5 [12];
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint3 uVar12;
  uint3 uVar13;
  uint3 uVar14;
  uint3 uVar15;
  uint3 uVar16;
  uint3 uVar17;
  uint3 uVar18;
  uint3 uVar19;
  uint3 uVar20;
  uint6 uVar21;
  long lVar22;
  undefined8 *puVar23;
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
  uint uVar36;
  undefined8 uVar37;
  uint uVar38;
  undefined8 uVar39;
  uint uVar40;
  undefined8 uVar41;
  uint uVar42;
  undefined8 uVar43;
  uint uVar44;
  undefined8 uVar45;
  uint uVar46;
  undefined8 uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
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
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  uint uVar91;
  int iVar92;
  uint uVar93;
  int iVar94;
  uint uVar95;
  int iVar96;
  uint uVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  undefined8 uVar116;
  int iVar117;
  int iVar118;
  undefined8 uVar119;
  int iVar120;
  int iVar121;
  undefined8 uVar122;
  int iVar123;
  int iVar124;
  undefined8 uVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  int iVar139;
  int iVar140;
  int iVar141;
  int iVar142;
  int iVar143;
  int iVar144;
  int iVar145;
  int iVar146;
  int iVar147;
  int iVar148;
  int iVar149;
  int iVar150;
  
  lVar22 = ___stack_chk_guard;
  puVar23 = param_3 + 0x100;
  if (param_3 < param_2 + 0x60 && param_2 < puVar23 || param_3 < param_1 + 0x60 && param_1 < puVar23
     ) {
    do {
      puVar3 = param_3 + 1;
      *(uint *)param_3 =
           (param_5 + (uint)*(byte *)(param_1 + 0x40) * param_4 >> 5) << 2 |
           (param_5 + (uint)*(byte *)(param_1 + 0x20) * param_4 >> 5) << 10 |
           (param_5 + (uint)*(byte *)param_1 * param_4 >> 5) << 0x12;
      param_1 = (undefined8 *)((long)param_1 + 1);
      puVar2 = param_2 + 0x20;
      puVar1 = param_2 + 0x40;
      bVar24 = *(byte *)param_2;
      param_2 = (undefined8 *)((long)param_2 + 1);
      *(uint *)((long)param_3 + 4) =
           (param_5 + (uint)*(byte *)puVar2 * param_4 >> 5) << 10 |
           (param_5 + (uint)*(byte *)puVar1 * param_4 >> 5) << 2 |
           (param_5 + (uint)bVar24 * param_4 >> 5) << 0x12;
      param_3 = puVar3;
    } while (puVar23 != puVar3);
  }
  else {
    puVar23 = param_1;
    do {
      uVar43 = puVar23[0x21];
      uVar41 = puVar23[0x20];
      uVar47 = puVar23[0x41];
      uVar45 = puVar23[0x40];
      uVar12 = CONCAT12((char)((ulong)uVar41 >> 8),(short)uVar41) & 0xff00ff;
      bVar26 = (byte)((ulong)uVar41 >> 0x28);
      uVar13 = CONCAT12((char)((ulong)uVar43 >> 8),(short)uVar43) & 0xff00ff;
      bVar27 = (byte)((ulong)uVar43 >> 0x28);
      uVar14 = CONCAT12((char)((ulong)uVar45 >> 8),(short)uVar45) & 0xff00ff;
      bVar28 = (byte)((ulong)uVar45 >> 0x28);
      uVar15 = CONCAT12((char)((ulong)uVar47 >> 8),(short)uVar47) & 0xff00ff;
      bVar29 = (byte)((ulong)uVar47 >> 0x28);
      uVar9 = param_2[0x21];
      uVar6 = param_2[0x20];
      puVar2 = puVar23 + 2;
      bVar24 = (byte)((ulong)uVar6 >> 8);
      bVar30 = (byte)((ulong)uVar6 >> 0x28);
      bVar25 = (byte)((ulong)uVar9 >> 8);
      bVar31 = (byte)((ulong)uVar9 >> 0x28);
      uVar125 = puVar23[1];
      uVar122 = *puVar23;
      uVar16 = CONCAT12((char)((ulong)uVar122 >> 8),(short)uVar122) & 0xff00ff;
      bVar32 = (byte)((ulong)uVar122 >> 0x28);
      uVar39 = param_2[0x41];
      uVar37 = param_2[0x40];
      uVar17 = CONCAT12((char)((ulong)uVar37 >> 8),(short)uVar37) & 0xff00ff;
      bVar33 = (byte)((ulong)uVar37 >> 0x28);
      uVar119 = param_2[1];
      uVar116 = *param_2;
      param_2 = param_2 + 2;
      uVar18 = CONCAT12((char)((ulong)uVar116 >> 8),(short)uVar116) & 0xff00ff;
      bVar34 = (byte)((ulong)uVar116 >> 0x28);
      uVar36 = param_5 + (CONCAT12(bVar32,(ushort)(byte)((ulong)uVar122 >> 0x20)) & 0xffff) *
                         param_4;
      iVar56 = param_5 + (uint)bVar32 * param_4;
      uVar46 = param_5 + (uint)(byte)((ulong)uVar122 >> 0x30) * param_4;
      iVar63 = param_5 + (uint)(byte)((ulong)uVar122 >> 0x38) * param_4;
      uVar38 = param_5 + (uVar18 & 0xffff) * param_4;
      iVar58 = param_5 + (uint)(byte)(uVar18 >> 0x10) * param_4;
      uVar48 = param_5 + (uint)(byte)((ulong)uVar116 >> 0x10) * param_4;
      iVar64 = param_5 + (uint)(byte)((ulong)uVar116 >> 0x18) * param_4;
      uVar18 = CONCAT12((char)((ulong)uVar125 >> 8),(short)uVar125) & 0xff00ff;
      bVar32 = (byte)((ulong)uVar125 >> 0x28);
      uVar19 = CONCAT12((char)((ulong)uVar39 >> 8),(short)uVar39) & 0xff00ff;
      bVar35 = (byte)((ulong)uVar39 >> 0x28);
      uVar40 = param_5 + (CONCAT12(bVar34,(ushort)(byte)((ulong)uVar116 >> 0x20)) & 0xffff) *
                         param_4;
      iVar60 = param_5 + (uint)bVar34 * param_4;
      uVar49 = param_5 + (uint)(byte)((ulong)uVar116 >> 0x30) * param_4;
      iVar65 = param_5 + (uint)(byte)((ulong)uVar116 >> 0x38) * param_4;
      uVar20 = CONCAT12((char)((ulong)uVar119 >> 8),(short)uVar119) & 0xff00ff;
      bVar34 = (byte)((ulong)uVar119 >> 0x28);
      uVar42 = param_5 + (uVar18 & 0xffff) * param_4;
      iVar62 = param_5 + (uint)(byte)(uVar18 >> 0x10) * param_4;
      uVar50 = param_5 + (uint)(byte)((ulong)uVar125 >> 0x10) * param_4;
      iVar66 = param_5 + (uint)(byte)((ulong)uVar125 >> 0x18) * param_4;
      uVar21 = (uint6)CONCAT14((char)(uVar20 >> 0x10),(uint)uVar20) & 0xffff0000ffff;
      uVar44 = param_5 + (int)uVar21 * param_4;
      iVar7 = param_5 + (uint)(ushort)(uVar21 >> 0x20) * param_4;
      iVar8 = param_5 + (uint)(byte)((ulong)uVar119 >> 0x10) * param_4;
      iVar10 = param_5 + (uint)(byte)((ulong)uVar119 >> 0x18) * param_4;
      uVar91 = param_5 + (CONCAT12(bVar35,(ushort)(byte)((ulong)uVar39 >> 0x20)) & 0xffff) * param_4
      ;
      uVar93 = param_5 + (uint)bVar35 * param_4;
      uVar95 = param_5 + (uint)(byte)((ulong)uVar39 >> 0x30) * param_4;
      uVar97 = param_5 + (uint)(byte)((ulong)uVar39 >> 0x38) * param_4;
      uVar116 = CONCAT17((char)((uint)iVar7 >> 0x18),
                         CONCAT16((char)((uint)iVar7 >> 0x10),
                                  CONCAT15((char)((uint)iVar7 >> 8),CONCAT14((char)iVar7,uVar44))));
      auVar5[8] = (char)iVar8;
      auVar5._0_8_ = uVar116;
      auVar5[9] = (char)((uint)iVar8 >> 8);
      auVar5[10] = (char)((uint)iVar8 >> 0x10);
      auVar5[11] = (char)((uint)iVar8 >> 0x18);
      auVar4[12] = (char)iVar10;
      auVar4._0_12_ = auVar5;
      auVar4[13] = (char)((uint)iVar10 >> 8);
      auVar4[14] = (char)((uint)iVar10 >> 0x10);
      auVar4[15] = (char)((uint)iVar10 >> 0x18);
      iVar107 = (param_5 + (uVar14 & 0xffff) * param_4 >> 5) << 2;
      iVar109 = (param_5 + (uint)(byte)(uVar14 >> 0x10) * param_4 >> 5) << 2;
      iVar111 = (param_5 + (uint)(byte)((ulong)uVar45 >> 0x10) * param_4 >> 5) << 2;
      iVar113 = (param_5 + (uint)(byte)((ulong)uVar45 >> 0x18) * param_4 >> 5) << 2;
      iVar143 = (param_5 + (uVar12 & 0xffff) * param_4 >> 5) << 10;
      iVar144 = (param_5 + (uint)(byte)(uVar12 >> 0x10) * param_4 >> 5) << 10;
      iVar145 = (param_5 + (uint)(byte)((ulong)uVar41 >> 0x10) * param_4 >> 5) << 10;
      iVar146 = (param_5 + (uint)(byte)((ulong)uVar41 >> 0x18) * param_4 >> 5) << 10;
      iVar83 = (param_5 + (CONCAT12(bVar33,(ushort)(byte)((ulong)uVar37 >> 0x20)) & 0xffff) *
                          param_4 >> 5) << 2;
      iVar84 = (param_5 + (uint)bVar33 * param_4 >> 5) << 2;
      iVar85 = (param_5 + (uint)(byte)((ulong)uVar37 >> 0x30) * param_4 >> 5) << 2;
      iVar86 = (param_5 + (uint)(byte)((ulong)uVar37 >> 0x38) * param_4 >> 5) << 2;
      iVar139 = (param_5 + (CONCAT12(bVar26,(ushort)(byte)((ulong)uVar41 >> 0x20)) & 0xffff) *
                           param_4 >> 5) << 10;
      iVar140 = (param_5 + (uint)bVar26 * param_4 >> 5) << 10;
      iVar141 = (param_5 + (uint)(byte)((ulong)uVar41 >> 0x30) * param_4 >> 5) << 10;
      iVar142 = (param_5 + (uint)(byte)((ulong)uVar41 >> 0x38) * param_4 >> 5) << 10;
      iVar103 = (param_5 + (CONCAT12(bVar28,(ushort)(byte)((ulong)uVar45 >> 0x20)) & 0xffff) *
                           param_4 >> 5) << 2;
      iVar104 = (param_5 + (uint)bVar28 * param_4 >> 5) << 2;
      iVar105 = (param_5 + (uint)(byte)((ulong)uVar45 >> 0x30) * param_4 >> 5) << 2;
      iVar106 = (param_5 + (uint)(byte)((ulong)uVar45 >> 0x38) * param_4 >> 5) << 2;
      iVar131 = (param_5 + (CONCAT12(bVar24,(ushort)(byte)uVar6) & 0xffff) * param_4 >> 5) << 10;
      iVar132 = (param_5 + (uint)bVar24 * param_4 >> 5) << 10;
      iVar133 = (param_5 + (uint)(byte)((ulong)uVar6 >> 0x10) * param_4 >> 5) << 10;
      iVar134 = (param_5 + (uint)(byte)((ulong)uVar6 >> 0x18) * param_4 >> 5) << 10;
      iVar67 = (param_5 + (CONCAT12(bVar30,(ushort)(byte)((ulong)uVar6 >> 0x20)) & 0xffff) * param_4
               >> 5) << 10;
      iVar68 = (param_5 + (uint)bVar30 * param_4 >> 5) << 10;
      iVar69 = (param_5 + (uint)(byte)((ulong)uVar6 >> 0x30) * param_4 >> 5) << 10;
      iVar70 = (param_5 + (uint)(byte)((ulong)uVar6 >> 0x38) * param_4 >> 5) << 10;
      iVar79 = (param_5 + (uVar17 & 0xffff) * param_4 >> 5) << 2;
      iVar80 = (param_5 + (uint)(byte)(uVar17 >> 0x10) * param_4 >> 5) << 2;
      iVar81 = (param_5 + (uint)(byte)((ulong)uVar37 >> 0x10) * param_4 >> 5) << 2;
      iVar82 = (param_5 + (uint)(byte)((ulong)uVar37 >> 0x18) * param_4 >> 5) << 2;
      iVar55 = (param_5 + (uVar13 & 0xffff) * param_4 >> 5) << 10;
      iVar57 = (param_5 + (uint)(byte)(uVar13 >> 0x10) * param_4 >> 5) << 10;
      iVar59 = (param_5 + (uint)(byte)((ulong)uVar43 >> 0x10) * param_4 >> 5) << 10;
      iVar61 = (param_5 + (uint)(byte)((ulong)uVar43 >> 0x18) * param_4 >> 5) << 10;
      iVar121 = (param_5 + (uVar19 & 0xffff) * param_4 >> 5) << 2;
      iVar123 = (param_5 + (uint)(byte)(uVar19 >> 0x10) * param_4 >> 5) << 2;
      iVar124 = (param_5 + (uint)(byte)((ulong)uVar39 >> 0x10) * param_4 >> 5) << 2;
      iVar126 = (param_5 + (uint)(byte)((ulong)uVar39 >> 0x18) * param_4 >> 5) << 2;
      iVar99 = (param_5 + (uVar15 & 0xffff) * param_4 >> 5) << 2;
      iVar100 = (param_5 + (uint)(byte)(uVar15 >> 0x10) * param_4 >> 5) << 2;
      iVar101 = (param_5 + (uint)(byte)((ulong)uVar47 >> 0x10) * param_4 >> 5) << 2;
      iVar102 = (param_5 + (uint)(byte)((ulong)uVar47 >> 0x18) * param_4 >> 5) << 2;
      iVar51 = (param_5 + (CONCAT12(bVar25,(ushort)(byte)uVar9) & 0xffff) * param_4 >> 5) << 10;
      iVar52 = (param_5 + (uint)bVar25 * param_4 >> 5) << 10;
      iVar53 = (param_5 + (uint)(byte)((ulong)uVar9 >> 0x10) * param_4 >> 5) << 10;
      iVar54 = (param_5 + (uint)(byte)((ulong)uVar9 >> 0x18) * param_4 >> 5) << 10;
      iVar108 = (param_5 + (CONCAT12(bVar29,(ushort)(byte)((ulong)uVar47 >> 0x20)) & 0xffff) *
                           param_4 >> 5) << 2;
      iVar110 = (param_5 + (uint)bVar29 * param_4 >> 5) << 2;
      iVar112 = (param_5 + (uint)(byte)((ulong)uVar47 >> 0x30) * param_4 >> 5) << 2;
      iVar114 = (param_5 + (uint)(byte)((ulong)uVar47 >> 0x38) * param_4 >> 5) << 2;
      iVar7 = CONCAT13((byte)(uVar91 >> 0x1d),(int3)(uVar91 >> 5)) << 2;
      iVar8 = CONCAT13((byte)(uVar93 >> 0x1d),(int3)(uVar93 >> 5)) << 2;
      iVar10 = CONCAT13((byte)(uVar95 >> 0x1d),(int3)(uVar95 >> 5)) << 2;
      iVar11 = CONCAT13((byte)(uVar97 >> 0x1d),(int3)(uVar97 >> 5)) << 2;
      iVar92 = (param_5 + (CONCAT12(bVar31,(ushort)(byte)((ulong)uVar9 >> 0x20)) & 0xffff) * param_4
               >> 5) << 10;
      iVar94 = (param_5 + (uint)bVar31 * param_4 >> 5) << 10;
      iVar96 = (param_5 + (uint)(byte)((ulong)uVar9 >> 0x30) * param_4 >> 5) << 10;
      iVar98 = (param_5 + (uint)(byte)((ulong)uVar9 >> 0x38) * param_4 >> 5) << 10;
      iVar127 = (param_5 + (CONCAT12(bVar27,(ushort)(byte)((ulong)uVar43 >> 0x20)) & 0xffff) *
                           param_4 >> 5) << 10;
      iVar128 = (param_5 + (uint)bVar27 * param_4 >> 5) << 10;
      iVar129 = (param_5 + (uint)(byte)((ulong)uVar43 >> 0x30) * param_4 >> 5) << 10;
      iVar130 = (param_5 + (uint)(byte)((ulong)uVar43 >> 0x38) * param_4 >> 5) << 10;
      iVar135 = (param_5 + (uVar16 & 0xffff) * param_4 >> 5) << 0x12;
      iVar136 = (param_5 + (uint)(byte)(uVar16 >> 0x10) * param_4 >> 5) << 0x12;
      iVar137 = (param_5 + (uint)(byte)((ulong)uVar122 >> 0x10) * param_4 >> 5) << 0x12;
      iVar138 = (param_5 + (uint)(byte)((ulong)uVar122 >> 0x18) * param_4 >> 5) << 0x12;
      iVar147 = (uVar36 >> 5) << 0x12;
      iVar148 = (uint)(uint3)(CONCAT16((char)((uint)iVar56 >> 0x10),
                                       CONCAT15((char)((uint)iVar56 >> 8),
                                                CONCAT14((char)iVar56,uVar36))) >> 0x25) << 0x12;
      iVar149 = (uVar46 >> 5) << 0x12;
      iVar150 = (uint)(uint3)(CONCAT16((char)((uint)iVar63 >> 0x10),
                                       CONCAT15((char)((uint)iVar63 >> 8),
                                                CONCAT14((char)iVar63,uVar46))) >> 0x25) << 0x12;
      iVar71 = (uVar38 >> 5) << 0x12;
      iVar72 = (uint)(uint3)(CONCAT16((char)((uint)iVar58 >> 0x10),
                                      CONCAT15((char)((uint)iVar58 >> 8),
                                               CONCAT14((char)iVar58,uVar38))) >> 0x25) << 0x12;
      iVar73 = (uVar48 >> 5) << 0x12;
      iVar74 = (uint)(uint3)(CONCAT16((char)((uint)iVar64 >> 0x10),
                                      CONCAT15((char)((uint)iVar64 >> 8),
                                               CONCAT14((char)iVar64,uVar48))) >> 0x25) << 0x12;
      iVar75 = (uVar40 >> 5) << 0x12;
      iVar76 = (uint)(uint3)(CONCAT16((char)((uint)iVar60 >> 0x10),
                                      CONCAT15((char)((uint)iVar60 >> 8),
                                               CONCAT14((char)iVar60,uVar40))) >> 0x25) << 0x12;
      iVar77 = (uVar49 >> 5) << 0x12;
      iVar78 = (uint)(uint3)(CONCAT16((char)((uint)iVar65 >> 0x10),
                                      CONCAT15((char)((uint)iVar65 >> 8),
                                               CONCAT14((char)iVar65,uVar49))) >> 0x25) << 0x12;
      iVar63 = (uVar42 >> 5) << 0x12;
      iVar64 = (uint)(uint3)(CONCAT16((char)((uint)iVar62 >> 0x10),
                                      CONCAT15((char)((uint)iVar62 >> 8),
                                               CONCAT14((char)iVar62,uVar42))) >> 0x25) << 0x12;
      iVar65 = (uVar50 >> 5) << 0x12;
      iVar66 = (uint)(uint3)(CONCAT16((char)((uint)iVar66 >> 0x10),
                                      CONCAT15((char)((uint)iVar66 >> 8),
                                               CONCAT14((char)iVar66,uVar50))) >> 0x25) << 0x12;
      iVar115 = (uVar44 >> 5) << 0x12;
      iVar117 = (uint)((ulong)uVar116 >> 0x25) << 0x12;
      iVar118 = (auVar5._8_4_ >> 5) << 0x12;
      iVar120 = (auVar4._12_4_ >> 5) << 0x12;
      iVar56 = (param_5 + (CONCAT12(bVar32,(ushort)(byte)((ulong)uVar125 >> 0x20)) & 0xffff) *
                          param_4 >> 5) << 0x12;
      iVar58 = (param_5 + (uint)bVar32 * param_4 >> 5) << 0x12;
      iVar60 = (param_5 + (uint)(byte)((ulong)uVar125 >> 0x30) * param_4 >> 5) << 0x12;
      iVar62 = (param_5 + (uint)(byte)((ulong)uVar125 >> 0x38) * param_4 >> 5) << 0x12;
      iVar87 = (param_5 + (CONCAT12(bVar34,(ushort)(byte)((ulong)uVar119 >> 0x20)) & 0xffff) *
                          param_4 >> 5) << 0x12;
      iVar88 = (param_5 + (uint)bVar34 * param_4 >> 5) << 0x12;
      iVar89 = (param_5 + (uint)(byte)((ulong)uVar119 >> 0x30) * param_4 >> 5) << 0x12;
      iVar90 = (param_5 + (uint)(byte)((ulong)uVar119 >> 0x38) * param_4 >> 5) << 0x12;
      uVar48 = CONCAT13((byte)((uint)iVar103 >> 0x18) | (byte)((uint)iVar139 >> 0x18) |
                        (byte)((uint)iVar147 >> 0x18),
                        CONCAT12((byte)((uint)iVar103 >> 0x10) | (byte)((uint)iVar139 >> 0x10) |
                                 (byte)((uint)iVar147 >> 0x10),
                                 CONCAT11((byte)((uint)iVar103 >> 8) | (byte)((uint)iVar139 >> 8),
                                          (char)iVar103)));
      uVar49 = CONCAT13((byte)((uint)iVar105 >> 0x18) | (byte)((uint)iVar141 >> 0x18) |
                        (byte)((uint)iVar149 >> 0x18),
                        CONCAT12((byte)((uint)iVar105 >> 0x10) | (byte)((uint)iVar141 >> 0x10) |
                                 (byte)((uint)iVar149 >> 0x10),
                                 CONCAT11((byte)((uint)iVar105 >> 8) | (byte)((uint)iVar141 >> 8),
                                          (char)iVar105)));
      uVar50 = CONCAT13((byte)((uint)iVar83 >> 0x18) | (byte)((uint)iVar67 >> 0x18) |
                        (byte)((uint)iVar75 >> 0x18),
                        CONCAT12((byte)((uint)iVar83 >> 0x10) | (byte)((uint)iVar67 >> 0x10) |
                                 (byte)((uint)iVar75 >> 0x10),
                                 CONCAT11((byte)((uint)iVar83 >> 8) | (byte)((uint)iVar67 >> 8),
                                          (char)iVar83)));
      uVar91 = CONCAT13((byte)((uint)iVar85 >> 0x18) | (byte)((uint)iVar69 >> 0x18) |
                        (byte)((uint)iVar77 >> 0x18),
                        CONCAT12((byte)((uint)iVar85 >> 0x10) | (byte)((uint)iVar69 >> 0x10) |
                                 (byte)((uint)iVar77 >> 0x10),
                                 CONCAT11((byte)((uint)iVar85 >> 8) | (byte)((uint)iVar69 >> 8),
                                          (char)iVar85)));
      uVar40 = CONCAT13((byte)((uint)iVar99 >> 0x18) | (byte)((uint)iVar55 >> 0x18) |
                        (byte)((uint)iVar63 >> 0x18),
                        CONCAT12((byte)((uint)iVar99 >> 0x10) | (byte)((uint)iVar55 >> 0x10) |
                                 (byte)((uint)iVar63 >> 0x10),
                                 CONCAT11((byte)((uint)iVar99 >> 8) | (byte)((uint)iVar55 >> 8),
                                          (char)iVar99)));
      uVar42 = CONCAT13((byte)((uint)iVar101 >> 0x18) | (byte)((uint)iVar59 >> 0x18) |
                        (byte)((uint)iVar65 >> 0x18),
                        CONCAT12((byte)((uint)iVar101 >> 0x10) | (byte)((uint)iVar59 >> 0x10) |
                                 (byte)((uint)iVar65 >> 0x10),
                                 CONCAT11((byte)((uint)iVar101 >> 8) | (byte)((uint)iVar59 >> 8),
                                          (char)iVar101)));
      uVar44 = CONCAT13((byte)((uint)iVar121 >> 0x18) | (byte)((uint)iVar51 >> 0x18) |
                        (byte)((uint)iVar115 >> 0x18),
                        CONCAT12((byte)((uint)iVar121 >> 0x10) | (byte)((uint)iVar51 >> 0x10) |
                                 (byte)((uint)iVar115 >> 0x10),
                                 CONCAT11((byte)((uint)iVar121 >> 8) | (byte)((uint)iVar51 >> 8),
                                          (char)iVar121)));
      uVar46 = CONCAT13((byte)((uint)iVar124 >> 0x18) | (byte)((uint)iVar53 >> 0x18) |
                        (byte)((uint)iVar118 >> 0x18),
                        CONCAT12((byte)((uint)iVar124 >> 0x10) | (byte)((uint)iVar53 >> 0x10) |
                                 (byte)((uint)iVar118 >> 0x10),
                                 CONCAT11((byte)((uint)iVar124 >> 8) | (byte)((uint)iVar53 >> 8),
                                          (char)iVar124)));
      uVar36 = CONCAT13((byte)((uint)iVar7 >> 0x18) | (byte)((uint)iVar92 >> 0x18) |
                        (byte)((uint)iVar87 >> 0x18),
                        CONCAT12((byte)((uint)iVar7 >> 0x10) | (byte)((uint)iVar92 >> 0x10) |
                                 (byte)((uint)iVar87 >> 0x10),
                                 CONCAT11((byte)((uint)iVar7 >> 8) | (byte)((uint)iVar92 >> 8),
                                          (char)iVar7)));
      uVar38 = CONCAT13((byte)((uint)iVar10 >> 0x18) | (byte)((uint)iVar96 >> 0x18) |
                        (byte)((uint)iVar89 >> 0x18),
                        CONCAT12((byte)((uint)iVar10 >> 0x10) | (byte)((uint)iVar96 >> 0x10) |
                                 (byte)((uint)iVar89 >> 0x10),
                                 CONCAT11((byte)((uint)iVar10 >> 8) | (byte)((uint)iVar96 >> 8),
                                          (char)iVar10)));
      *(uint *)param_3 =
           CONCAT13((byte)((uint)iVar107 >> 0x18) | (byte)((uint)iVar143 >> 0x18) |
                    (byte)((uint)iVar135 >> 0x18),
                    CONCAT12((byte)((uint)iVar107 >> 0x10) | (byte)((uint)iVar143 >> 0x10) |
                             (byte)((uint)iVar135 >> 0x10),
                             CONCAT11((byte)((uint)iVar107 >> 8) | (byte)((uint)iVar143 >> 8),
                                      (char)iVar107)));
      *(uint *)((long)param_3 + 4) =
           CONCAT13((byte)((uint)iVar79 >> 0x18) | (byte)((uint)iVar131 >> 0x18) |
                    (byte)((uint)iVar71 >> 0x18),
                    CONCAT12((byte)((uint)iVar79 >> 0x10) | (byte)((uint)iVar131 >> 0x10) |
                             (byte)((uint)iVar71 >> 0x10),
                             CONCAT11((byte)((uint)iVar79 >> 8) | (byte)((uint)iVar131 >> 8),
                                      (char)iVar79)));
      *(uint *)(param_3 + 1) =
           CONCAT13((byte)((uint)iVar109 >> 0x18) | (byte)((uint)iVar144 >> 0x18) |
                    (byte)((uint)iVar136 >> 0x18),
                    CONCAT12((byte)((uint)iVar109 >> 0x10) | (byte)((uint)iVar144 >> 0x10) |
                             (byte)((uint)iVar136 >> 0x10),
                             CONCAT11((byte)((uint)iVar109 >> 8) | (byte)((uint)iVar144 >> 8),
                                      (char)iVar109)));
      *(uint *)((long)param_3 + 0xc) =
           CONCAT13((byte)((uint)iVar80 >> 0x18) | (byte)((uint)iVar132 >> 0x18) |
                    (byte)((uint)iVar72 >> 0x18),
                    CONCAT12((byte)((uint)iVar80 >> 0x10) | (byte)((uint)iVar132 >> 0x10) |
                             (byte)((uint)iVar72 >> 0x10),
                             CONCAT11((byte)((uint)iVar80 >> 8) | (byte)((uint)iVar132 >> 8),
                                      (char)iVar80)));
      *(uint *)(param_3 + 2) =
           CONCAT13((byte)((uint)iVar111 >> 0x18) | (byte)((uint)iVar145 >> 0x18) |
                    (byte)((uint)iVar137 >> 0x18),
                    CONCAT12((byte)((uint)iVar111 >> 0x10) | (byte)((uint)iVar145 >> 0x10) |
                             (byte)((uint)iVar137 >> 0x10),
                             CONCAT11((byte)((uint)iVar111 >> 8) | (byte)((uint)iVar145 >> 8),
                                      (char)iVar111)));
      *(uint *)((long)param_3 + 0x14) =
           CONCAT13((byte)((uint)iVar81 >> 0x18) | (byte)((uint)iVar133 >> 0x18) |
                    (byte)((uint)iVar73 >> 0x18),
                    CONCAT12((byte)((uint)iVar81 >> 0x10) | (byte)((uint)iVar133 >> 0x10) |
                             (byte)((uint)iVar73 >> 0x10),
                             CONCAT11((byte)((uint)iVar81 >> 8) | (byte)((uint)iVar133 >> 8),
                                      (char)iVar81)));
      *(uint *)(param_3 + 3) =
           CONCAT13((byte)((uint)iVar113 >> 0x18) | (byte)((uint)iVar146 >> 0x18) |
                    (byte)((uint)iVar138 >> 0x18),
                    CONCAT12((byte)((uint)iVar113 >> 0x10) | (byte)((uint)iVar146 >> 0x10) |
                             (byte)((uint)iVar138 >> 0x10),
                             CONCAT11((byte)((uint)iVar113 >> 8) | (byte)((uint)iVar146 >> 8),
                                      (char)iVar113)));
      *(uint *)((long)param_3 + 0x1c) =
           CONCAT13((byte)((uint)iVar82 >> 0x18) | (byte)((uint)iVar134 >> 0x18) |
                    (byte)((uint)iVar74 >> 0x18),
                    CONCAT12((byte)((uint)iVar82 >> 0x10) | (byte)((uint)iVar134 >> 0x10) |
                             (byte)((uint)iVar74 >> 0x10),
                             CONCAT11((byte)((uint)iVar82 >> 8) | (byte)((uint)iVar134 >> 8),
                                      (char)iVar82)));
      *(uint *)(param_3 + 4) = uVar48;
      *(uint *)((long)param_3 + 0x24) = uVar50;
      *(uint *)(param_3 + 5) =
           (uint)(CONCAT17((byte)((uint)iVar104 >> 0x18) | (byte)((uint)iVar140 >> 0x18) |
                           (byte)((uint)iVar148 >> 0x18),
                           CONCAT16((byte)((uint)iVar104 >> 0x10) | (byte)((uint)iVar140 >> 0x10) |
                                    (byte)((uint)iVar148 >> 0x10),
                                    CONCAT15((byte)((uint)iVar104 >> 8) | (byte)((uint)iVar140 >> 8)
                                             ,CONCAT14((char)iVar104,uVar48)))) >> 0x20);
      *(uint *)((long)param_3 + 0x2c) =
           (uint)(CONCAT17((byte)((uint)iVar84 >> 0x18) | (byte)((uint)iVar68 >> 0x18) |
                           (byte)((uint)iVar76 >> 0x18),
                           CONCAT16((byte)((uint)iVar84 >> 0x10) | (byte)((uint)iVar68 >> 0x10) |
                                    (byte)((uint)iVar76 >> 0x10),
                                    CONCAT15((byte)((uint)iVar84 >> 8) | (byte)((uint)iVar68 >> 8),
                                             CONCAT14((char)iVar84,uVar50)))) >> 0x20);
      *(uint *)(param_3 + 6) = uVar49;
      *(uint *)((long)param_3 + 0x34) = uVar91;
      *(uint *)(param_3 + 7) =
           (uint)(CONCAT17((byte)((uint)iVar106 >> 0x18) | (byte)((uint)iVar142 >> 0x18) |
                           (byte)((uint)iVar150 >> 0x18),
                           CONCAT16((byte)((uint)iVar106 >> 0x10) | (byte)((uint)iVar142 >> 0x10) |
                                    (byte)((uint)iVar150 >> 0x10),
                                    CONCAT15((byte)((uint)iVar106 >> 8) | (byte)((uint)iVar142 >> 8)
                                             ,CONCAT14((char)iVar106,uVar49)))) >> 0x20);
      *(uint *)((long)param_3 + 0x3c) =
           (uint)(CONCAT17((byte)((uint)iVar86 >> 0x18) | (byte)((uint)iVar70 >> 0x18) |
                           (byte)((uint)iVar78 >> 0x18),
                           CONCAT16((byte)((uint)iVar86 >> 0x10) | (byte)((uint)iVar70 >> 0x10) |
                                    (byte)((uint)iVar78 >> 0x10),
                                    CONCAT15((byte)((uint)iVar86 >> 8) | (byte)((uint)iVar70 >> 8),
                                             CONCAT14((char)iVar86,uVar91)))) >> 0x20);
      *(uint *)(param_3 + 8) = uVar40;
      *(uint *)((long)param_3 + 0x44) = uVar44;
      *(uint *)(param_3 + 9) =
           (uint)(CONCAT17((byte)((uint)iVar100 >> 0x18) | (byte)((uint)iVar57 >> 0x18) |
                           (byte)((uint)iVar64 >> 0x18),
                           CONCAT16((byte)((uint)iVar100 >> 0x10) | (byte)((uint)iVar57 >> 0x10) |
                                    (byte)((uint)iVar64 >> 0x10),
                                    CONCAT15((byte)((uint)iVar100 >> 8) | (byte)((uint)iVar57 >> 8),
                                             CONCAT14((char)iVar100,uVar40)))) >> 0x20);
      *(uint *)((long)param_3 + 0x4c) =
           (uint)(CONCAT17((byte)((uint)iVar123 >> 0x18) | (byte)((uint)iVar52 >> 0x18) |
                           (byte)((uint)iVar117 >> 0x18),
                           CONCAT16((byte)((uint)iVar123 >> 0x10) | (byte)((uint)iVar52 >> 0x10) |
                                    (byte)((uint)iVar117 >> 0x10),
                                    CONCAT15((byte)((uint)iVar123 >> 8) | (byte)((uint)iVar52 >> 8),
                                             CONCAT14((char)iVar123,uVar44)))) >> 0x20);
      *(uint *)(param_3 + 10) = uVar42;
      *(uint *)((long)param_3 + 0x54) = uVar46;
      *(uint *)(param_3 + 0xb) =
           (uint)(CONCAT17((byte)((uint)iVar102 >> 0x18) | (byte)((uint)iVar61 >> 0x18) |
                           (byte)((uint)iVar66 >> 0x18),
                           CONCAT16((byte)((uint)iVar102 >> 0x10) | (byte)((uint)iVar61 >> 0x10) |
                                    (byte)((uint)iVar66 >> 0x10),
                                    CONCAT15((byte)((uint)iVar102 >> 8) | (byte)((uint)iVar61 >> 8),
                                             CONCAT14((char)iVar102,uVar42)))) >> 0x20);
      *(uint *)((long)param_3 + 0x5c) =
           (uint)(CONCAT17((byte)((uint)iVar126 >> 0x18) | (byte)((uint)iVar54 >> 0x18) |
                           (byte)((uint)iVar120 >> 0x18),
                           CONCAT16((byte)((uint)iVar126 >> 0x10) | (byte)((uint)iVar54 >> 0x10) |
                                    (byte)((uint)iVar120 >> 0x10),
                                    CONCAT15((byte)((uint)iVar126 >> 8) | (byte)((uint)iVar54 >> 8),
                                             CONCAT14((char)iVar126,uVar46)))) >> 0x20);
      *(uint *)(param_3 + 0xc) =
           CONCAT13((byte)((uint)iVar108 >> 0x18) | (byte)((uint)iVar127 >> 0x18) |
                    (byte)((uint)iVar56 >> 0x18),
                    CONCAT12((byte)((uint)iVar108 >> 0x10) | (byte)((uint)iVar127 >> 0x10) |
                             (byte)((uint)iVar56 >> 0x10),
                             CONCAT11((byte)((uint)iVar108 >> 8) | (byte)((uint)iVar127 >> 8),
                                      (char)iVar108)));
      *(uint *)((long)param_3 + 100) = uVar36;
      *(uint *)(param_3 + 0xd) =
           CONCAT13((byte)((uint)iVar110 >> 0x18) | (byte)((uint)iVar128 >> 0x18) |
                    (byte)((uint)iVar58 >> 0x18),
                    CONCAT12((byte)((uint)iVar110 >> 0x10) | (byte)((uint)iVar128 >> 0x10) |
                             (byte)((uint)iVar58 >> 0x10),
                             CONCAT11((byte)((uint)iVar110 >> 8) | (byte)((uint)iVar128 >> 8),
                                      (char)iVar110)));
      *(uint *)((long)param_3 + 0x6c) =
           (uint)(CONCAT17((byte)((uint)iVar8 >> 0x18) | (byte)((uint)iVar94 >> 0x18) |
                           (byte)((uint)iVar88 >> 0x18),
                           CONCAT16((byte)((uint)iVar8 >> 0x10) | (byte)((uint)iVar94 >> 0x10) |
                                    (byte)((uint)iVar88 >> 0x10),
                                    CONCAT15((byte)((uint)iVar8 >> 8) | (byte)((uint)iVar94 >> 8),
                                             CONCAT14((char)iVar8,uVar36)))) >> 0x20);
      *(uint *)(param_3 + 0xe) =
           CONCAT13((byte)((uint)iVar112 >> 0x18) | (byte)((uint)iVar129 >> 0x18) |
                    (byte)((uint)iVar60 >> 0x18),
                    CONCAT12((byte)((uint)iVar112 >> 0x10) | (byte)((uint)iVar129 >> 0x10) |
                             (byte)((uint)iVar60 >> 0x10),
                             CONCAT11((byte)((uint)iVar112 >> 8) | (byte)((uint)iVar129 >> 8),
                                      (char)iVar112)));
      *(uint *)((long)param_3 + 0x74) = uVar38;
      *(uint *)(param_3 + 0xf) =
           CONCAT13((byte)((uint)iVar114 >> 0x18) | (byte)((uint)iVar130 >> 0x18) |
                    (byte)((uint)iVar62 >> 0x18),
                    CONCAT12((byte)((uint)iVar114 >> 0x10) | (byte)((uint)iVar130 >> 0x10) |
                             (byte)((uint)iVar62 >> 0x10),
                             CONCAT11((byte)((uint)iVar114 >> 8) | (byte)((uint)iVar130 >> 8),
                                      (char)iVar114)));
      *(uint *)((long)param_3 + 0x7c) =
           (uint)(CONCAT17((byte)((uint)iVar11 >> 0x18) | (byte)((uint)iVar98 >> 0x18) |
                           (byte)((uint)iVar90 >> 0x18),
                           CONCAT16((byte)((uint)iVar11 >> 0x10) | (byte)((uint)iVar98 >> 0x10) |
                                    (byte)((uint)iVar90 >> 0x10),
                                    CONCAT15((byte)((uint)iVar11 >> 8) | (byte)((uint)iVar98 >> 8),
                                             CONCAT14((char)iVar11,uVar38)))) >> 0x20);
      param_3 = param_3 + 0x10;
      puVar23 = puVar2;
    } while (puVar2 != param_1 + 0x20);
  }
  if (lVar22 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar22 - ___stack_chk_guard,0);
}


