/*
 * Ghidra decompilation
 *
 * Function : render_polygon_modulate_c
 * Address  : 001482d0
 * Program  : drastic64
 */


void render_polygon_modulate_c
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
               int param_5,uint param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint3 uVar6;
  uint3 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar21;
  ushort uVar20;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar32;
  ushort uVar33;
  uint uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  undefined8 uVar38;
  uint uVar39;
  uint uVar40;
  undefined8 uVar41;
  uint uVar42;
  uint uVar43;
  undefined8 uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  uint uVar59;
  undefined8 uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  undefined8 uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  ushort uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  undefined8 uVar92;
  uint uVar93;
  uint uVar94;
  undefined8 uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  undefined8 uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  undefined8 uVar108;
  uint uVar109;
  uint uVar110;
  undefined8 uVar111;
  uint uVar112;
  uint uVar113;
  undefined8 uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  uint uVar127;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  uint uVar135;
  
  uVar9 = param_4 & 0xffffffff;
  puVar2 = (undefined8 *)((long)param_3 + uVar9);
  puVar3 = (undefined8 *)((long)puVar2 + uVar9);
  if (param_6 == 0) {
    return;
  }
  uVar14 = (ulong)param_6;
  puVar8 = (undefined8 *)((long)param_1 + (ulong)param_6 * 4);
  bVar1 = 0x7e < (ulong)((long)param_1 + (0x3f - (long)param_2));
  if (((undefined8 *)((long)param_3 + uVar14 + (param_4 & 0xffffffff) * 2) <= param_1 ||
      puVar8 <= puVar3) &&
      (((bVar1 && 0xd < param_6 - 1) && (!bVar1 || param_6 - 1 != 0xe)) &&
      (((undefined8 *)((long)param_3 + uVar9 + uVar14) <= param_1 || puVar8 <= puVar2) &&
      ((undefined8 *)((long)param_3 + uVar14) <= param_1 || puVar8 <= param_3)))) {
    puVar8 = param_2;
    puVar10 = param_1;
    puVar12 = puVar3;
    puVar13 = puVar2;
    puVar15 = param_3;
    do {
      uVar114 = puVar8[1];
      uVar111 = *puVar8;
      uVar108 = puVar8[3];
      uVar103 = puVar8[2];
      uVar44 = puVar13[1];
      uVar41 = *puVar13;
      uVar38 = puVar15[1];
      uVar35 = *puVar15;
      uVar65 = puVar8[5];
      uVar60 = puVar8[4];
      uVar95 = puVar8[7];
      uVar92 = puVar8[6];
      puVar8 = puVar8 + 8;
      bVar16 = (byte)((ulong)uVar41 >> 8);
      bVar26 = (byte)((ulong)uVar41 >> 0x28);
      bVar17 = (byte)((ulong)uVar35 >> 8);
      bVar27 = (byte)((ulong)uVar35 >> 0x28);
      uVar124 = (uint)uVar111 >> 0x18;
      uVar125 = (uint)((ulong)uVar111 >> 0x38);
      uVar126 = (uint)uVar114 >> 0x18;
      uVar127 = (uint)((ulong)uVar114 >> 0x38);
      uVar71 = (uint)((ulong)uVar103 >> 0x18) & 0xff;
      uVar72 = (uint)((ulong)uVar103 >> 0x38);
      uVar73 = (uint)((ulong)uVar108 >> 0x18) & 0xff;
      uVar74 = (uint)((ulong)uVar108 >> 0x38);
      uVar120 = (uint)uVar60 >> 0x18;
      uVar121 = (uint)((ulong)uVar60 >> 0x38);
      uVar122 = (uint)uVar65 >> 0x18;
      uVar123 = (uint)((ulong)uVar65 >> 0x38);
      uVar116 = (uint)uVar92 >> 0x18;
      uVar117 = (uint)((ulong)uVar92 >> 0x38);
      uVar118 = (uint)uVar95 >> 0x18;
      uVar119 = (uint)((ulong)uVar95 >> 0x38);
      bVar18 = (byte)((ulong)uVar44 >> 8);
      bVar28 = (byte)((ulong)uVar44 >> 0x28);
      uVar6 = CONCAT12((char)((ulong)uVar38 >> 8),(short)uVar38) & 0xff00ff;
      bVar21 = (byte)((ulong)uVar38 >> 0x18);
      bVar29 = (byte)((ulong)uVar38 >> 0x28);
      uVar58 = puVar12[1];
      uVar57 = *puVar12;
      uVar78 = (uint)(byte)((ulong)uVar111 >> 8);
      uVar81 = (uint)(byte)((ulong)uVar114 >> 8);
      bVar19 = (byte)((ulong)uVar57 >> 8);
      bVar30 = (byte)((ulong)uVar57 >> 0x28);
      uVar75 = (ushort)(byte)((ulong)uVar57 >> 0x38);
      uVar46 = CONCAT12(bVar17,(ushort)(byte)uVar35) & 0xffff;
      uVar51 = (uint)(byte)((ulong)uVar35 >> 0x10);
      uVar54 = (uint)(byte)((ulong)uVar35 >> 0x18);
      uVar7 = CONCAT12((char)((ulong)uVar58 >> 8),(short)uVar58) & 0xff00ff;
      bVar31 = (byte)((ulong)uVar58 >> 0x28);
      uVar20 = (ushort)(byte)(uVar6 >> 0x10);
      uVar22 = (ushort)(byte)((ulong)uVar38 >> 0x10);
      uVar80 = (CONCAT12(bVar18,(short)uVar44) & 0xff00ff) & 0xffff;
      uVar83 = (uint)(byte)((ulong)uVar44 >> 0x10);
      uVar85 = (uint)(byte)((ulong)uVar44 >> 0x18);
      uVar87 = CONCAT12(bVar16,(ushort)(byte)uVar41) & 0xffff;
      uVar89 = (uint)(byte)((ulong)uVar41 >> 0x10);
      uVar90 = (uint)(byte)((ulong)uVar41 >> 0x18);
      uVar68 = (uint)(byte)((ulong)uVar103 >> 8);
      uVar70 = (uint)(byte)((ulong)uVar108 >> 8);
      uVar132 = (uint)(byte)((ulong)uVar60 >> 8);
      uVar133 = (uint)(byte)((ulong)uVar60 >> 0x28);
      uVar134 = (uint)(byte)((ulong)uVar65 >> 8);
      uVar135 = (uint)(byte)((ulong)uVar65 >> 0x28);
      uVar129 = (uint)(byte)((ulong)uVar92 >> 8);
      uVar131 = (uint)(byte)((ulong)uVar92 >> 0x28);
      uVar128 = (uint)(byte)((ulong)uVar95 >> 8);
      uVar130 = (uint)(byte)((ulong)uVar95 >> 0x28);
      uVar4 = (uint)CONCAT12(bVar27,(ushort)(byte)((ulong)uVar35 >> 0x20));
      uVar23 = (ushort)(byte)((ulong)uVar35 >> 0x30);
      uVar32 = (ushort)(byte)((ulong)uVar35 >> 0x38);
      uVar34 = CONCAT12(bVar29,(ushort)(byte)((ulong)uVar38 >> 0x20)) & 0xffff;
      uVar37 = (uint)(byte)((ulong)uVar38 >> 0x30);
      uVar48 = CONCAT12(bVar28,(ushort)(byte)((ulong)uVar44 >> 0x20)) & 0xffff;
      uVar50 = (uint)(byte)((ulong)uVar44 >> 0x30);
      uVar5 = (uint)CONCAT12(bVar26,(ushort)(byte)((ulong)uVar41 >> 0x20));
      uVar24 = (ushort)(byte)((ulong)uVar41 >> 0x30);
      uVar33 = (ushort)(byte)((ulong)uVar41 >> 0x38);
      uVar110 = (uint)(byte)((ulong)uVar111 >> 0x10);
      uVar113 = (uint)(byte)((ulong)uVar114 >> 0x10);
      uVar101 = (uint)(byte)((ulong)uVar103 >> 0x10);
      uVar106 = (uint)(byte)((ulong)uVar108 >> 0x10);
      uVar102 = CONCAT12(bVar19,(ushort)(byte)uVar57) & 0xffff;
      uVar105 = (uint)(byte)((ulong)uVar57 >> 0x10);
      uVar53 = (uint)(byte)((ulong)uVar44 >> 0x38);
      uVar97 = (uint)(byte)((ulong)uVar60 >> 0x10);
      uVar99 = (uint)(byte)((ulong)uVar65 >> 0x10);
      uVar91 = (uint)(byte)((ulong)uVar92 >> 0x10);
      uVar94 = (uint)(byte)((ulong)uVar95 >> 0x10);
      uVar67 = uVar7 & 0xffff;
      uVar63 = (uint)(byte)((ulong)uVar58 >> 0x10);
      uVar79 = (uint)(byte)((ulong)uVar111 >> 0x28);
      uVar82 = (uint)(byte)((ulong)uVar114 >> 0x28);
      uVar40 = (uint)(byte)((ulong)uVar111 >> 0x20);
      uVar43 = (uint)(byte)((ulong)uVar114 >> 0x20);
      uVar42 = (uint)(byte)((ulong)uVar103 >> 0x20);
      uVar45 = (uint)(byte)((ulong)uVar108 >> 0x20);
      uVar59 = (uint)CONCAT12(bVar30,(ushort)(byte)((ulong)uVar57 >> 0x20));
      uVar25 = (ushort)(byte)((ulong)uVar57 >> 0x30);
      uVar69 = (uint)(byte)((ulong)uVar103 >> 0x28);
      uVar36 = (uint)(byte)((ulong)uVar108 >> 0x28);
      uVar84 = (uint)(byte)((ulong)uVar60 >> 0x20);
      uVar86 = (uint)(byte)((ulong)uVar65 >> 0x20);
      uVar56 = CONCAT12(bVar31,(ushort)(byte)((ulong)uVar58 >> 0x20)) & 0xffff;
      uVar62 = (uint)(byte)((ulong)uVar58 >> 0x30);
      uVar76 = (uint)(byte)((ulong)uVar92 >> 0x20);
      uVar39 = (uint)(byte)((ulong)uVar38 >> 0x38);
      uVar77 = (uint)(byte)((ulong)uVar95 >> 0x20);
      uVar112 = (uint)(byte)((ulong)uVar111 >> 0x30);
      uVar107 = (uint)(byte)((ulong)uVar57 >> 0x18);
      uVar115 = (uint)(byte)((ulong)uVar114 >> 0x30);
      uVar104 = (uint)(byte)((ulong)uVar103 >> 0x30);
      uVar109 = (uint)(byte)((ulong)uVar108 >> 0x30);
      uVar61 = (uint)(byte)(uVar7 >> 0x10);
      uVar98 = (uint)(byte)((ulong)uVar60 >> 0x30);
      uVar66 = (uint)(byte)((ulong)uVar58 >> 0x18);
      uVar100 = (uint)(byte)((ulong)uVar65 >> 0x30);
      uVar93 = (uint)(byte)((ulong)uVar92 >> 0x30);
      uVar64 = (uint)(byte)((ulong)uVar58 >> 0x38);
      uVar96 = (uint)(byte)((ulong)uVar95 >> 0x30);
      uVar47 = uVar46 + (byte)uVar111 * uVar46 + (uint)(byte)uVar111 >> 6;
      uVar49 = (uint)bVar17 + uVar40 * bVar17 + uVar40 >> 6;
      uVar52 = uVar51 + (byte)uVar114 * uVar51 + (uint)(byte)uVar114 >> 6;
      uVar55 = uVar54 + uVar43 * uVar54 + uVar43 >> 6;
      uVar40 = (uVar4 & 0xffff) + (uint)(byte)uVar103 * (uVar4 & 0xffff) + (uint)(byte)uVar103 >> 6;
      uVar42 = (uint)(ushort)bVar27 + uVar42 * (ushort)bVar27 + uVar42 >> 6;
      uVar43 = (uint)uVar23 + (uint)(byte)uVar108 * (uint)uVar23 + (uint)(byte)uVar108 >> 6;
      uVar45 = (uint)uVar32 + uVar45 * uVar32 + uVar45 >> 6;
      uVar87 = uVar87 + uVar78 * uVar87 + uVar78 >> 6;
      uVar88 = (uint)bVar16 + uVar79 * bVar16 + uVar79 >> 6;
      uVar89 = uVar89 + uVar81 * uVar89 + uVar81 >> 6;
      uVar90 = uVar90 + uVar82 * uVar90 + uVar82 >> 6;
      uVar54 = (uVar5 & 0xffff) + uVar68 * (uVar5 & 0xffff) + uVar68 >> 6;
      uVar68 = (uint)(ushort)bVar26 + uVar69 * (ushort)bVar26 + uVar69 >> 6;
      uVar69 = (uint)uVar24 + uVar70 * uVar24 + uVar70 >> 6;
      uVar70 = (uint)uVar33 + uVar36 * uVar33 + uVar36 >> 6;
      uVar4 = (uVar6 & 0xffff) + (uint)(byte)uVar60 * (uVar6 & 0xffff) + (uint)(byte)uVar60 >> 6;
      uVar5 = (uint)uVar20 + uVar84 * uVar20 + uVar84 >> 6;
      uVar46 = (uint)uVar22 + (uint)(byte)uVar65 * (uint)uVar22 + (uint)(byte)uVar65 >> 6;
      uVar51 = (uint)bVar21 + uVar86 * bVar21 + uVar86 >> 6;
      uVar81 = uVar80 + uVar132 * uVar80 + uVar132 >> 6;
      uVar82 = (uint)bVar18 + uVar133 * bVar18 + uVar133 >> 6;
      uVar84 = uVar83 + uVar134 * uVar83 + uVar134 >> 6;
      uVar86 = uVar85 + uVar135 * uVar85 + uVar135 >> 6;
      uVar34 = uVar34 + (byte)uVar92 * uVar34 + (uint)(byte)uVar92 >> 6;
      uVar36 = (uint)bVar29 + uVar76 * bVar29 + uVar76 >> 6;
      uVar37 = uVar37 + (byte)uVar95 * uVar37 + (uint)(byte)uVar95 >> 6;
      uVar39 = uVar39 + uVar77 * uVar39 + uVar77 >> 6;
      uVar83 = uVar48 + uVar129 * uVar48 + uVar129 >> 6;
      uVar85 = (uint)bVar28 + uVar131 * bVar28 + uVar131 >> 6;
      uVar129 = uVar50 + uVar128 * uVar50 + uVar128 >> 6;
      uVar131 = uVar53 + uVar130 * uVar53 + uVar130 >> 6;
      uVar48 = uVar56 + uVar91 * uVar56 + uVar91 >> 6;
      uVar50 = (uint)bVar31 + uVar93 * bVar31 + uVar93 >> 6;
      uVar53 = uVar62 + uVar94 * uVar62 + uVar94 >> 6;
      uVar56 = uVar64 + uVar96 * uVar64 + uVar96 >> 6;
      uVar76 = uVar102 + uVar110 * uVar102 + uVar110 >> 6;
      uVar77 = (uint)bVar19 + uVar112 * bVar19 + uVar112 >> 6;
      uVar78 = uVar105 + uVar113 * uVar105 + uVar113 >> 6;
      uVar79 = uVar107 + uVar115 * uVar107 + uVar115 >> 6;
      uVar102 = (uVar59 & 0xffff) + uVar101 * (uVar59 & 0xffff) + uVar101 >> 6;
      uVar105 = (uint)(ushort)bVar30 + uVar104 * (ushort)bVar30 + uVar104 >> 6;
      uVar107 = (uint)uVar25 + uVar106 * uVar25 + uVar106 >> 6;
      uVar80 = (uint)uVar75 + uVar109 * uVar75 + uVar109 >> 6;
      uVar59 = uVar67 + uVar97 * uVar67 + uVar97 >> 6;
      uVar62 = uVar61 + uVar98 * uVar61 + uVar98 >> 6;
      uVar64 = uVar63 + uVar99 * uVar63 + uVar99 >> 6;
      uVar67 = uVar66 + uVar100 * uVar66 + uVar100 >> 6;
      puVar10[1] = CONCAT17((byte)(param_5 + uVar127 * param_5 + uVar127 >> 5) | (byte)(uVar79 >> 8)
                            ,CONCAT16((byte)(uVar90 >> 8) | (byte)uVar79,
                                      CONCAT15((byte)(uVar55 >> 8) | (byte)uVar90,
                                               CONCAT14((char)uVar55,
                                                        CONCAT13((byte)(param_5 + uVar126 * param_5
                                                                        + uVar126 >> 5) |
                                                                 (byte)(uVar78 >> 8),
                                                                 CONCAT12((byte)(uVar89 >> 8) |
                                                                          (byte)uVar78,
                                                                          CONCAT11((byte)(uVar52 >>
                                                                                         8) |
                                                                                   (byte)uVar89,
                                                                                   (char)uVar52)))))
                                     ));
      *puVar10 = CONCAT17((byte)(param_5 + uVar125 * param_5 + uVar125 >> 5) | (byte)(uVar77 >> 8),
                          CONCAT16((byte)(uVar88 >> 8) | (byte)uVar77,
                                   CONCAT15((byte)(uVar49 >> 8) | (byte)uVar88,
                                            CONCAT14((char)uVar49,
                                                     CONCAT13((byte)(param_5 + uVar124 * param_5 +
                                                                     uVar124 >> 5) |
                                                              (byte)(uVar76 >> 8),
                                                              CONCAT12((byte)(uVar87 >> 8) |
                                                                       (byte)uVar76,
                                                                       CONCAT11((byte)(uVar47 >> 8)
                                                                                | (byte)uVar87,
                                                                                (char)uVar47)))))));
      puVar10[3] = CONCAT17((byte)(param_5 + uVar74 * param_5 + uVar74 >> 5) | (byte)(uVar80 >> 8),
                            CONCAT16((byte)(uVar70 >> 8) | (byte)uVar80,
                                     CONCAT15((byte)(uVar45 >> 8) | (byte)uVar70,
                                              CONCAT14((char)uVar45,
                                                       CONCAT13((byte)(param_5 + uVar73 * param_5 +
                                                                       uVar73 >> 5) |
                                                                (byte)(uVar107 >> 8),
                                                                CONCAT12((byte)(uVar69 >> 8) |
                                                                         (byte)uVar107,
                                                                         CONCAT11((byte)(uVar43 >> 8
                                                                                        ) | (byte)
                                                  uVar69,(char)uVar43)))))));
      puVar10[2] = CONCAT17((byte)(param_5 + uVar72 * param_5 + uVar72 >> 5) | (byte)(uVar105 >> 8),
                            CONCAT16((byte)(uVar68 >> 8) | (byte)uVar105,
                                     CONCAT15((byte)(uVar42 >> 8) | (byte)uVar68,
                                              CONCAT14((char)uVar42,
                                                       CONCAT13((byte)(param_5 + uVar71 * param_5 +
                                                                       uVar71 >> 5) |
                                                                (byte)(uVar102 >> 8),
                                                                CONCAT12((byte)(uVar54 >> 8) |
                                                                         (byte)uVar102,
                                                                         CONCAT11((byte)(uVar40 >> 8
                                                                                        ) | (byte)
                                                  uVar54,(char)uVar40)))))));
      puVar10[5] = CONCAT17((byte)(param_5 + uVar123 * param_5 + uVar123 >> 5) | (byte)(uVar67 >> 8)
                            ,CONCAT16((byte)(uVar86 >> 8) | (byte)uVar67,
                                      CONCAT15((byte)(uVar51 >> 8) | (byte)uVar86,
                                               CONCAT14((char)uVar51,
                                                        CONCAT13((byte)(param_5 + uVar122 * param_5
                                                                        + uVar122 >> 5) |
                                                                 (byte)(uVar64 >> 8),
                                                                 CONCAT12((byte)(uVar84 >> 8) |
                                                                          (byte)uVar64,
                                                                          CONCAT11((byte)(uVar46 >>
                                                                                         8) |
                                                                                   (byte)uVar84,
                                                                                   (char)uVar46)))))
                                     ));
      puVar10[4] = CONCAT17((byte)(param_5 + uVar121 * param_5 + uVar121 >> 5) | (byte)(uVar62 >> 8)
                            ,CONCAT16((byte)(uVar82 >> 8) | (byte)uVar62,
                                      CONCAT15((byte)(uVar5 >> 8) | (byte)uVar82,
                                               CONCAT14((char)uVar5,
                                                        CONCAT13((byte)(param_5 + uVar120 * param_5
                                                                        + uVar120 >> 5) |
                                                                 (byte)(uVar59 >> 8),
                                                                 CONCAT12((byte)(uVar81 >> 8) |
                                                                          (byte)uVar59,
                                                                          CONCAT11((byte)(uVar4 >> 8
                                                                                         ) | (byte)
                                                  uVar81,(char)uVar4)))))));
      puVar10[7] = CONCAT17((byte)(param_5 + uVar119 * param_5 + uVar119 >> 5) | (byte)(uVar56 >> 8)
                            ,CONCAT16((byte)(uVar131 >> 8) | (byte)uVar56,
                                      CONCAT15((byte)(uVar39 >> 8) | (byte)uVar131,
                                               CONCAT14((char)uVar39,
                                                        CONCAT13((byte)(param_5 + uVar118 * param_5
                                                                        + uVar118 >> 5) |
                                                                 (byte)(uVar53 >> 8),
                                                                 CONCAT12((byte)(uVar129 >> 8) |
                                                                          (byte)uVar53,
                                                                          CONCAT11((byte)(uVar37 >>
                                                                                         8) |
                                                                                   (byte)uVar129,
                                                                                   (char)uVar37)))))
                                     ));
      puVar10[6] = CONCAT17((byte)(param_5 + uVar117 * param_5 + uVar117 >> 5) | (byte)(uVar50 >> 8)
                            ,CONCAT16((byte)(uVar85 >> 8) | (byte)uVar50,
                                      CONCAT15((byte)(uVar36 >> 8) | (byte)uVar85,
                                               CONCAT14((char)uVar36,
                                                        CONCAT13((byte)(param_5 + uVar116 * param_5
                                                                        + uVar116 >> 5) |
                                                                 (byte)(uVar48 >> 8),
                                                                 CONCAT12((byte)(uVar83 >> 8) |
                                                                          (byte)uVar48,
                                                                          CONCAT11((byte)(uVar34 >>
                                                                                         8) |
                                                                                   (byte)uVar83,
                                                                                   (char)uVar34)))))
                                     ));
      puVar10 = puVar10 + 8;
      puVar12 = puVar12 + 2;
      puVar13 = puVar13 + 2;
      puVar15 = puVar15 + 2;
    } while (param_2 + (ulong)((param_6 >> 4) - 1) * 8 + 8 != puVar8);
    uVar9 = (ulong)param_6 & 0xfffffff0;
    if ((param_6 & 0xf) != 0) {
      lVar11 = 0;
      do {
        uVar4 = *(uint *)((long)param_2 + lVar11 * 4 + uVar9 * 4);
        uVar5 = uVar4 >> 0x10 & 0xff;
        uVar46 = uVar4 >> 8 & 0xff;
        uVar59 = (uint)*(byte *)((long)puVar3 + lVar11 + uVar9);
        uVar51 = (uint)*(byte *)((long)puVar2 + lVar11 + uVar9);
        uVar54 = (uint)*(byte *)((long)param_3 + lVar11 + uVar9);
        *(uint *)((long)param_1 + lVar11 * 4 + uVar9 * 4) =
             uVar54 + (uVar4 & 0xff) * uVar54 + (uVar4 & 0xff) >> 6 |
             (param_5 + (uVar4 >> 0x18) * param_5 + (uVar4 >> 0x18) >> 5) << 0x18 |
             (uVar59 + uVar5 * uVar59 + uVar5 >> 6) << 0x10 |
             (uVar51 + uVar46 * uVar51 + uVar46 >> 6) << 8;
        lVar11 = lVar11 + 1;
      } while ((param_6 & 0xfffffff0) + (int)lVar11 < param_6);
    }
    return;
  }
  lVar11 = 0;
  do {
    uVar4 = *(uint *)((long)param_2 + lVar11 * 4);
    uVar5 = uVar4 >> 0x10 & 0xff;
    uVar46 = uVar4 >> 8 & 0xff;
    *(uint *)((long)param_1 + lVar11 * 4) =
         (uint)*(byte *)((long)param_3 + lVar11) +
         (uVar4 & 0xff) * (uint)*(byte *)((long)param_3 + lVar11) + (uVar4 & 0xff) >> 6 |
         (param_5 + (uVar4 >> 0x18) * param_5 + (uVar4 >> 0x18) >> 5) << 0x18 |
         ((uint)*(byte *)((long)puVar3 + lVar11) + uVar5 * *(byte *)((long)puVar3 + lVar11) + uVar5
         >> 6) << 0x10 |
         ((uint)*(byte *)((long)puVar2 + lVar11) + uVar46 * *(byte *)((long)puVar2 + lVar11) +
          uVar46 >> 6) << 8;
    lVar11 = lVar11 + 1;
  } while ((uint)lVar11 < param_6);
  return;
}


