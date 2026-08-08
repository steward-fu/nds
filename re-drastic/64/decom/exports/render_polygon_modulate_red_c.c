/*
 * Ghidra decompilation
 *
 * Function : render_polygon_modulate_red_c
 * Address  : 00147f60
 * Program  : drastic64
 */


void render_polygon_modulate_red_c
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,uint param_5
               )

{
  uint uVar1;
  uint3 uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  byte bVar17;
  byte bVar18;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  byte bVar21;
  byte bVar22;
  ushort uVar19;
  ushort uVar20;
  byte bVar25;
  byte bVar26;
  ushort uVar23;
  ushort uVar24;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  uint uVar34;
  uint uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined8 uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined8 uVar45;
  uint uVar46;
  uint uVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  undefined8 uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  undefined8 uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
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
  undefined8 uVar86;
  uint uVar87;
  uint uVar88;
  undefined8 uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  
  if (param_5 == 0) {
    return;
  }
  bVar3 = param_3 < (undefined8 *)((long)param_1 + (ulong)param_5 * 4);
  bVar4 = param_1 < (undefined8 *)((long)param_3 + (ulong)param_5);
  uVar1 = param_5 - 1;
  uVar6 = (long)param_1 + (0x3f - (long)param_2);
  if (((((!bVar3 || !bVar4) && uVar1 >= 0xe) && (bVar3 && bVar4 || uVar1 != 0xe)) && 0x7d < uVar6)
      && (((bVar3 && bVar4 || uVar1 < 0xe) || (!bVar3 || !bVar4) && uVar1 == 0xe) || uVar6 != 0x7e))
  {
    puVar7 = param_2;
    puVar8 = param_1;
    puVar9 = param_3;
    do {
      uVar48 = puVar7[1];
      uVar45 = *puVar7;
      uVar64 = puVar7[3];
      uVar59 = puVar7[2];
      bVar4 = param_2 + (ulong)((param_5 >> 4) - 1) * 8 != puVar7;
      uVar28 = puVar9[1];
      uVar27 = *puVar9;
      uVar89 = puVar7[5];
      uVar86 = puVar7[4];
      uVar41 = puVar7[7];
      uVar36 = puVar7[6];
      puVar7 = puVar7 + 8;
      uVar54 = (uint)uVar45 >> 0x18;
      uVar55 = (uint)((ulong)uVar45 >> 0x38);
      uVar56 = (uint)uVar48 >> 0x18;
      uVar57 = (uint)((ulong)uVar48 >> 0x38);
      uVar99 = (uint)uVar59 >> 0x18;
      uVar101 = (uint)((ulong)uVar59 >> 0x38);
      uVar103 = (uint)uVar64 >> 0x18;
      uVar105 = (uint)((ulong)uVar64 >> 0x38);
      uVar91 = (uint)uVar86 >> 0x18;
      uVar93 = (uint)((ulong)uVar86 >> 0x38);
      uVar95 = (uint)uVar89 >> 0x18;
      uVar97 = (uint)((ulong)uVar89 >> 0x38);
      bVar12 = (byte)((ulong)uVar27 >> 8);
      bVar17 = (byte)((ulong)uVar27 >> 0x18);
      bVar21 = (byte)((ulong)uVar27 >> 0x28);
      bVar25 = (byte)((ulong)uVar27 >> 0x38);
      uVar2 = CONCAT12((char)((ulong)uVar28 >> 8),(short)uVar28) & 0xff00ff;
      bVar18 = (byte)((ulong)uVar28 >> 0x18);
      bVar22 = (byte)((ulong)uVar28 >> 0x28);
      bVar26 = (byte)((ulong)uVar28 >> 0x38);
      uVar1 = (uint)CONCAT12(bVar12,(ushort)(byte)uVar27);
      uVar13 = (ushort)bVar12;
      uVar19 = (ushort)(byte)((ulong)uVar27 >> 0x10);
      uVar23 = (ushort)bVar17;
      bVar30 = (byte)((ulong)uVar36 >> 0x18);
      bVar31 = (byte)((ulong)uVar36 >> 0x38);
      bVar32 = (byte)((ulong)uVar41 >> 0x18);
      bVar33 = (byte)((ulong)uVar41 >> 0x38);
      uVar35 = (uint)CONCAT12(bVar21,(ushort)(byte)((ulong)uVar27 >> 0x20));
      uVar14 = (ushort)bVar21;
      uVar20 = (ushort)(byte)((ulong)uVar27 >> 0x30);
      uVar24 = (ushort)bVar25;
      uVar77 = (uint)(byte)((ulong)uVar45 >> 0x20);
      uVar78 = (uint)(byte)((ulong)uVar48 >> 0x20);
      uVar15 = (ushort)(byte)(uVar2 >> 0x10);
      uVar44 = uVar2 & 0xffff;
      uVar47 = (uint)(byte)((ulong)uVar28 >> 0x10);
      uVar16 = (ushort)bVar22;
      uVar38 = CONCAT12(bVar22,(ushort)(byte)((ulong)uVar28 >> 0x20)) & 0xffff;
      uVar43 = (uint)(byte)((ulong)uVar28 >> 0x30);
      uVar75 = (uint)(byte)((ulong)uVar59 >> 0x20);
      uVar76 = (uint)(byte)((ulong)uVar64 >> 0x20);
      uVar68 = (uint)(byte)((ulong)uVar45 >> 8);
      uVar70 = (uint)(byte)((ulong)uVar45 >> 0x28);
      uVar72 = (uint)(byte)((ulong)uVar48 >> 8);
      uVar74 = (uint)(byte)((ulong)uVar48 >> 0x28);
      uVar50 = (uint)(byte)((ulong)uVar59 >> 8);
      uVar51 = (uint)(byte)((ulong)uVar64 >> 8);
      uVar92 = (uint)(byte)((ulong)uVar86 >> 8);
      uVar94 = (uint)(byte)((ulong)uVar86 >> 0x28);
      uVar96 = (uint)(byte)((ulong)uVar89 >> 8);
      uVar98 = (uint)(byte)((ulong)uVar89 >> 0x28);
      uVar115 = (uint)(byte)((ulong)uVar36 >> 8);
      uVar116 = (uint)(byte)((ulong)uVar36 >> 0x28);
      uVar117 = (uint)(byte)((ulong)uVar41 >> 8);
      uVar118 = (uint)(byte)((ulong)uVar41 >> 0x28);
      uVar67 = (uint)(byte)((ulong)uVar45 >> 0x10);
      uVar69 = (uint)(byte)((ulong)uVar45 >> 0x30);
      uVar71 = (uint)(byte)((ulong)uVar48 >> 0x10);
      uVar73 = (uint)(byte)((ulong)uVar48 >> 0x30);
      uVar40 = (uint)uVar16;
      uVar29 = (uint)bVar26;
      uVar66 = (uint)(byte)((ulong)uVar59 >> 0x10);
      uVar62 = (uint)(byte)((ulong)uVar64 >> 0x10);
      uVar5 = (uint)(byte)((ulong)uVar59 >> 0x28);
      uVar52 = (uint)(byte)((ulong)uVar64 >> 0x28);
      uVar46 = (uint)uVar15;
      uVar53 = (uint)(byte)((ulong)uVar86 >> 0x20);
      uVar49 = (uint)bVar18;
      uVar63 = (uint)(byte)((ulong)uVar89 >> 0x20);
      uVar85 = (uint)(byte)((ulong)uVar86 >> 0x10);
      uVar88 = (uint)(byte)((ulong)uVar89 >> 0x10);
      uVar58 = (uint)(byte)((ulong)uVar36 >> 0x20);
      uVar61 = (uint)(byte)((ulong)uVar41 >> 0x20);
      uVar34 = (uint)(byte)((ulong)uVar36 >> 0x10);
      uVar39 = (uint)(byte)((ulong)uVar41 >> 0x10);
      uVar60 = (uint)(byte)((ulong)uVar59 >> 0x30);
      uVar65 = (uint)(byte)((ulong)uVar64 >> 0x30);
      uVar37 = (uint)(byte)((ulong)uVar36 >> 0x30);
      uVar42 = (uint)(byte)((ulong)uVar41 >> 0x30);
      uVar87 = (uint)(byte)((ulong)uVar86 >> 0x30);
      uVar90 = (uint)(byte)((ulong)uVar89 >> 0x30);
      uVar81 = (uVar1 & 0xffff) + uVar68 * (uVar1 & 0xffff) + uVar68 >> 6;
      uVar82 = (uint)bVar12 + uVar70 * uVar13 + uVar70 >> 6;
      uVar83 = (uint)uVar19 + uVar72 * uVar19 + uVar72 >> 6;
      uVar84 = (uint)bVar17 + uVar74 * uVar23 + uVar74 >> 6;
      uVar111 = (uVar1 & 0xffff) + (uint)(byte)uVar45 * (uVar1 & 0xffff) + (uint)(byte)uVar45 >> 6;
      uVar112 = (uint)bVar12 + uVar77 * uVar13 + uVar77 >> 6;
      uVar113 = (uint)uVar19 + (uint)(byte)uVar48 * (uint)uVar19 + (uint)(byte)uVar48 >> 6;
      uVar114 = (uint)bVar17 + uVar78 * uVar23 + uVar78 >> 6;
      uVar107 = (uVar35 & 0xffff) + (uint)(byte)uVar59 * (uVar35 & 0xffff) + (uint)(byte)uVar59 >> 6
      ;
      uVar108 = (uint)bVar21 + uVar75 * uVar14 + uVar75 >> 6;
      uVar109 = (uint)uVar20 + (uint)(byte)uVar64 * (uint)uVar20 + (uint)(byte)uVar64 >> 6;
      uVar110 = (uint)bVar25 + uVar76 * uVar24 + uVar76 >> 6;
      uVar77 = (uVar35 & 0xffff) + uVar50 * (uVar35 & 0xffff) + uVar50 >> 6;
      uVar78 = (uint)bVar21 + uVar5 * uVar14 + uVar5 >> 6;
      uVar79 = (uint)uVar20 + uVar51 * uVar20 + uVar51 >> 6;
      uVar80 = (uint)bVar25 + uVar52 * uVar24 + uVar52 >> 6;
      uVar100 = uVar44 + (byte)uVar86 * uVar44 + (uint)(byte)uVar86 >> 6;
      uVar102 = (uint)uVar15 + uVar53 * uVar46 + uVar53 >> 6;
      uVar104 = uVar47 + (byte)uVar89 * uVar47 + (uint)(byte)uVar89 >> 6;
      uVar106 = (uint)bVar18 + uVar63 * uVar49 + uVar63 >> 6;
      uVar52 = uVar44 + uVar92 * uVar44 + uVar92 >> 6;
      uVar75 = (uint)uVar15 + uVar94 * uVar46 + uVar94 >> 6;
      uVar53 = uVar47 + uVar96 * uVar47 + uVar96 >> 6;
      uVar76 = (uint)bVar18 + uVar98 * uVar49 + uVar98 >> 6;
      uVar92 = uVar38 + (byte)uVar36 * uVar38 + (uint)(byte)uVar36 >> 6;
      uVar94 = (uint)uVar16 + uVar58 * uVar40 + uVar58 >> 6;
      uVar96 = uVar43 + (byte)uVar41 * uVar43 + (uint)(byte)uVar41 >> 6;
      uVar98 = (uint)bVar26 + uVar61 * uVar29 + uVar61 >> 6;
      uVar68 = uVar38 + uVar115 * uVar38 + uVar115 >> 6;
      uVar70 = (uint)uVar16 + uVar116 * uVar40 + uVar116 >> 6;
      uVar72 = uVar43 + uVar117 * uVar43 + uVar117 >> 6;
      uVar74 = (uint)bVar26 + uVar118 * uVar29 + uVar118 >> 6;
      uVar1 = (uVar1 & 0xffff) + uVar67 * (uVar1 & 0xffff) + uVar67 >> 6;
      uVar50 = (uint)uVar13 + uVar69 * uVar13 + uVar69 >> 6;
      uVar5 = (uint)uVar19 + uVar71 * uVar19 + uVar71 >> 6;
      uVar51 = (uint)uVar23 + uVar73 * uVar23 + uVar73 >> 6;
      uVar58 = (uVar35 & 0xffff) + uVar66 * (uVar35 & 0xffff) + uVar66 >> 6;
      uVar61 = (uint)uVar14 + uVar60 * uVar14 + uVar60 >> 6;
      uVar63 = (uint)uVar20 + uVar62 * uVar20 + uVar62 >> 6;
      uVar66 = (uint)uVar24 + uVar65 * uVar24 + uVar65 >> 6;
      uVar44 = uVar44 + uVar85 * uVar44 + uVar85 >> 6;
      uVar46 = uVar46 + uVar87 * uVar46 + uVar87 >> 6;
      uVar47 = uVar47 + uVar88 * uVar47 + uVar88 >> 6;
      uVar49 = uVar49 + uVar90 * uVar49 + uVar90 >> 6;
      uVar35 = uVar38 + uVar34 * uVar38 + uVar34 >> 6;
      uVar38 = uVar40 + uVar37 * uVar40 + uVar37 >> 6;
      uVar40 = uVar43 + uVar39 * uVar43 + uVar39 >> 6;
      uVar43 = uVar29 + uVar42 * uVar29 + uVar42 >> 6;
      puVar8[1] = CONCAT17((byte)(param_4 + uVar57 * param_4 + uVar57 >> 5) | (byte)(uVar51 >> 8),
                           CONCAT16((byte)(uVar84 >> 8) | (byte)uVar51,
                                    CONCAT15((byte)(uVar114 >> 8) | (byte)uVar84,
                                             CONCAT14((char)uVar114,
                                                      CONCAT13((byte)(param_4 + uVar56 * param_4 +
                                                                      uVar56 >> 5) |
                                                               (byte)(uVar5 >> 8),
                                                               CONCAT12((byte)(uVar83 >> 8) |
                                                                        (byte)uVar5,
                                                                        CONCAT11((byte)(uVar113 >> 8
                                                                                       ) | (byte)
                                                  uVar83,(char)uVar113)))))));
      *puVar8 = CONCAT17((byte)(param_4 + uVar55 * param_4 + uVar55 >> 5) | (byte)(uVar50 >> 8),
                         CONCAT16((byte)(uVar82 >> 8) | (byte)uVar50,
                                  CONCAT15((byte)(uVar112 >> 8) | (byte)uVar82,
                                           CONCAT14((char)uVar112,
                                                    CONCAT13((byte)(param_4 + uVar54 * param_4 +
                                                                    uVar54 >> 5) |
                                                             (byte)(uVar1 >> 8),
                                                             CONCAT12((byte)(uVar81 >> 8) |
                                                                      (byte)uVar1,
                                                                      CONCAT11((byte)(uVar111 >> 8)
                                                                               | (byte)uVar81,
                                                                               (char)uVar111)))))));
      puVar8[3] = CONCAT17((byte)(param_4 + uVar105 * param_4 + uVar105 >> 5) | (byte)(uVar66 >> 8),
                           CONCAT16((byte)(uVar80 >> 8) | (byte)uVar66,
                                    CONCAT15((byte)(uVar110 >> 8) | (byte)uVar80,
                                             CONCAT14((char)uVar110,
                                                      CONCAT13((byte)(param_4 + uVar103 * param_4 +
                                                                      uVar103 >> 5) |
                                                               (byte)(uVar63 >> 8),
                                                               CONCAT12((byte)(uVar79 >> 8) |
                                                                        (byte)uVar63,
                                                                        CONCAT11((byte)(uVar109 >> 8
                                                                                       ) | (byte)
                                                  uVar79,(char)uVar109)))))));
      puVar8[2] = CONCAT17((byte)(param_4 + uVar101 * param_4 + uVar101 >> 5) | (byte)(uVar61 >> 8),
                           CONCAT16((byte)(uVar78 >> 8) | (byte)uVar61,
                                    CONCAT15((byte)(uVar108 >> 8) | (byte)uVar78,
                                             CONCAT14((char)uVar108,
                                                      CONCAT13((byte)(param_4 + uVar99 * param_4 +
                                                                      uVar99 >> 5) |
                                                               (byte)(uVar58 >> 8),
                                                               CONCAT12((byte)(uVar77 >> 8) |
                                                                        (byte)uVar58,
                                                                        CONCAT11((byte)(uVar107 >> 8
                                                                                       ) | (byte)
                                                  uVar77,(char)uVar107)))))));
      puVar8[5] = CONCAT17((byte)(param_4 + uVar97 * param_4 + uVar97 >> 5) | (byte)(uVar49 >> 8),
                           CONCAT16((byte)(uVar76 >> 8) | (byte)uVar49,
                                    CONCAT15((byte)(uVar106 >> 8) | (byte)uVar76,
                                             CONCAT14((char)uVar106,
                                                      CONCAT13((byte)(param_4 + uVar95 * param_4 +
                                                                      uVar95 >> 5) |
                                                               (byte)(uVar47 >> 8),
                                                               CONCAT12((byte)(uVar53 >> 8) |
                                                                        (byte)uVar47,
                                                                        CONCAT11((byte)(uVar104 >> 8
                                                                                       ) | (byte)
                                                  uVar53,(char)uVar104)))))));
      puVar8[4] = CONCAT17((byte)(param_4 + uVar93 * param_4 + uVar93 >> 5) | (byte)(uVar46 >> 8),
                           CONCAT16((byte)(uVar75 >> 8) | (byte)uVar46,
                                    CONCAT15((byte)(uVar102 >> 8) | (byte)uVar75,
                                             CONCAT14((char)uVar102,
                                                      CONCAT13((byte)(param_4 + uVar91 * param_4 +
                                                                      uVar91 >> 5) |
                                                               (byte)(uVar44 >> 8),
                                                               CONCAT12((byte)(uVar52 >> 8) |
                                                                        (byte)uVar44,
                                                                        CONCAT11((byte)(uVar100 >> 8
                                                                                       ) | (byte)
                                                  uVar52,(char)uVar100)))))));
      puVar8[7] = CONCAT17((byte)(param_4 + (uint)bVar33 * param_4 + (uint)bVar33 >> 5) |
                           (byte)(uVar43 >> 8),
                           CONCAT16((byte)(uVar74 >> 8) | (byte)uVar43,
                                    CONCAT15((byte)(uVar98 >> 8) | (byte)uVar74,
                                             CONCAT14((char)uVar98,
                                                      CONCAT13((byte)(param_4 + (uint)bVar32 *
                                                                                param_4 +
                                                                      (uint)bVar32 >> 5) |
                                                               (byte)(uVar40 >> 8),
                                                               CONCAT12((byte)(uVar72 >> 8) |
                                                                        (byte)uVar40,
                                                                        CONCAT11((byte)(uVar96 >> 8)
                                                                                 | (byte)uVar72,
                                                                                 (char)uVar96)))))))
      ;
      puVar8[6] = CONCAT17((byte)(param_4 + (uint)bVar31 * param_4 + (uint)bVar31 >> 5) |
                           (byte)(uVar38 >> 8),
                           CONCAT16((byte)(uVar70 >> 8) | (byte)uVar38,
                                    CONCAT15((byte)(uVar94 >> 8) | (byte)uVar70,
                                             CONCAT14((char)uVar94,
                                                      CONCAT13((byte)(param_4 + (uint)bVar30 *
                                                                                param_4 +
                                                                      (uint)bVar30 >> 5) |
                                                               (byte)(uVar35 >> 8),
                                                               CONCAT12((byte)(uVar68 >> 8) |
                                                                        (byte)uVar35,
                                                                        CONCAT11((byte)(uVar92 >> 8)
                                                                                 | (byte)uVar68,
                                                                                 (char)uVar92)))))))
      ;
      puVar8 = puVar8 + 8;
      puVar9 = puVar9 + 2;
    } while (bVar4);
    lVar11 = ((ulong)param_5 & 0xfffffff0) * 4;
    if ((param_5 & 0xf) != 0) {
      lVar10 = 0;
      do {
        uVar1 = *(uint *)((long)param_2 + lVar10 * 4 + lVar11);
        bVar12 = *(byte *)((long)param_3 + lVar10 + ((ulong)param_5 & 0xfffffff0));
        uVar35 = uVar1 >> 0x10 & 0xff;
        uVar50 = uVar1 >> 8 & 0xff;
        uVar5 = (uint)bVar12;
        *(uint *)((long)param_1 + lVar10 * 4 + lVar11) =
             ((uint)bVar12 + uVar35 * bVar12 + uVar35 >> 6) << 0x10 |
             (uVar5 + uVar50 * uVar5 + uVar50 >> 6) << 8 |
             uVar5 + (uVar1 & 0xff) * uVar5 + (uVar1 & 0xff) >> 6 |
             (param_4 + (uVar1 >> 0x18) * param_4 + (uVar1 >> 0x18) >> 5) << 0x18;
        lVar10 = lVar10 + 1;
      } while ((param_5 & 0xfffffff0) + (int)lVar10 < param_5);
    }
    return;
  }
  lVar11 = 0;
  do {
    uVar1 = *(uint *)((long)param_2 + lVar11 * 4);
    bVar12 = *(byte *)((long)param_3 + lVar11);
    uVar35 = uVar1 >> 8 & 0xff;
    uVar50 = uVar1 >> 0x10 & 0xff;
    uVar5 = (uint)bVar12;
    *(uint *)((long)param_1 + lVar11 * 4) =
         ((uint)bVar12 + uVar35 * bVar12 + uVar35 >> 6) << 8 |
         (uVar5 + uVar50 * uVar5 + uVar50 >> 6) << 0x10 |
         uVar5 + (uVar1 & 0xff) * uVar5 + (uVar1 & 0xff) >> 6 |
         (param_4 + (uVar1 >> 0x18) * param_4 + (uVar1 >> 0x18) >> 5) << 0x18;
    lVar11 = lVar11 + 1;
  } while ((uint)lVar11 < param_5);
  return;
}


