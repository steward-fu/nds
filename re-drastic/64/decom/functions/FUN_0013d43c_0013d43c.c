/*
 * Ghidra decompilation
 *
 * Function : FUN_0013d43c
 * Address  : 0013d43c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d43c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  short sVar20;
  short sVar21;
  int iVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  short sVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  uint3 uVar47;
  uint3 uVar48;
  long lVar49;
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
  int iVar64;
  undefined8 uVar65;
  int iVar66;
  int iVar67;
  undefined8 uVar68;
  int iVar69;
  int iVar70;
  undefined8 uVar71;
  int iVar72;
  int iVar73;
  undefined8 uVar74;
  int iVar75;
  short sVar76;
  short sVar79;
  int iVar77;
  short sVar80;
  undefined8 uVar78;
  short sVar82;
  int iVar81;
  short sVar83;
  short sVar86;
  int iVar84;
  short sVar87;
  undefined8 uVar85;
  short sVar89;
  int iVar88;
  short sVar90;
  short sVar93;
  uint uVar91;
  short sVar94;
  undefined8 uVar92;
  short sVar95;
  short sVar96;
  short sVar99;
  uint uVar97;
  short sVar100;
  undefined8 uVar98;
  short sVar101;
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
  undefined8 uVar115;
  int iVar116;
  int iVar117;
  undefined8 uVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  uint uVar128;
  uint uVar129;
  undefined8 uVar130;
  
  lVar49 = ___stack_chk_guard;
  puVar1 = param_3 + 0x100;
  if (param_3 < param_2 + 0x60 && param_2 < puVar1 || param_3 < param_1 + 0x60 && param_1 < puVar1)
  {
    do {
      *(uint *)param_3 =
           (uint)*(byte *)(param_1 + 0x40) << 2 | (uint)*(byte *)(param_1 + 0x20) << 10 |
           (uint)*(byte *)param_1 << 0x12;
      puVar2 = param_3 + 1;
      *(uint *)((long)param_3 + 4) =
           (uint)*(byte *)(param_2 + 0x20) << 10 | (uint)*(byte *)(param_2 + 0x40) << 2 |
           (uint)*(byte *)param_2 << 0x12;
      param_1 = (undefined8 *)((long)param_1 + 1);
      param_2 = (undefined8 *)((long)param_2 + 1);
      param_3 = puVar2;
    } while (puVar1 != puVar2);
  }
  else {
    puVar1 = param_1 + 0x20;
    do {
      uVar74 = param_1[0x21];
      uVar71 = param_1[0x20];
      uVar85 = param_1[0x41];
      uVar78 = param_1[0x40];
      bVar50 = (byte)((ulong)uVar71 >> 8);
      bVar56 = (byte)((ulong)uVar71 >> 0x28);
      uVar118 = param_1[1];
      uVar115 = *param_1;
      uVar68 = param_2[0x21];
      uVar65 = param_2[0x20];
      param_1 = param_1 + 2;
      uVar98 = param_2[0x41];
      uVar92 = param_2[0x40];
      bVar51 = (byte)((ulong)uVar115 >> 8);
      bVar57 = (byte)((ulong)uVar115 >> 0x28);
      bVar52 = (byte)((ulong)uVar65 >> 8);
      bVar58 = (byte)((ulong)uVar65 >> 0x28);
      sVar3 = (ushort)(byte)uVar78 << 2;
      sVar5 = (ushort)(byte)((ulong)uVar78 >> 8) << 2;
      sVar6 = (ushort)(byte)((ulong)uVar78 >> 0x10) << 2;
      sVar8 = (ushort)(byte)((ulong)uVar78 >> 0x18) << 2;
      sVar9 = (ushort)(byte)((ulong)uVar78 >> 0x20) << 2;
      sVar11 = (ushort)(byte)((ulong)uVar78 >> 0x28) << 2;
      sVar12 = (ushort)(byte)((ulong)uVar78 >> 0x30) << 2;
      sVar14 = (ushort)(byte)((ulong)uVar78 >> 0x38) << 2;
      uVar130 = param_2[1];
      uVar78 = *param_2;
      bVar53 = (byte)((ulong)uVar74 >> 8);
      bVar59 = (byte)((ulong)uVar74 >> 0x28);
      bVar54 = (byte)((ulong)uVar68 >> 8);
      bVar60 = (byte)((ulong)uVar68 >> 0x28);
      uVar47 = CONCAT12((char)((ulong)uVar85 >> 8),(short)uVar85) & 0xff00ff;
      uVar48 = CONCAT12((char)((ulong)uVar98 >> 8),(short)uVar98) & 0xff00ff;
      sVar15 = (ushort)(byte)uVar92 << 2;
      sVar17 = (ushort)(byte)((ulong)uVar92 >> 8) << 2;
      sVar18 = (ushort)(byte)((ulong)uVar92 >> 0x10) << 2;
      sVar20 = (ushort)(byte)((ulong)uVar92 >> 0x18) << 2;
      sVar21 = (ushort)(byte)((ulong)uVar92 >> 0x20) << 2;
      sVar23 = (ushort)(byte)((ulong)uVar92 >> 0x28) << 2;
      sVar24 = (ushort)(byte)((ulong)uVar92 >> 0x30) << 2;
      sVar26 = (ushort)(byte)((ulong)uVar92 >> 0x38) << 2;
      bVar55 = (byte)((ulong)uVar78 >> 8);
      bVar61 = (byte)((ulong)uVar78 >> 0x28);
      iVar124 = (CONCAT12(bVar50,(ushort)(byte)uVar71) & 0xffff) << 10;
      iVar125 = (uint)bVar50 << 10;
      iVar126 = (uint)(byte)((ulong)uVar71 >> 0x10) << 10;
      iVar127 = (uint)(byte)((ulong)uVar71 >> 0x18) << 10;
      iVar27 = (CONCAT12(bVar56,(ushort)(byte)((ulong)uVar71 >> 0x20)) & 0xffff) << 10;
      iVar28 = (uint)bVar56 << 10;
      iVar29 = (uint)(byte)((ulong)uVar71 >> 0x30) << 10;
      iVar30 = (uint)(byte)((ulong)uVar71 >> 0x38) << 10;
      sVar76 = (short)uVar47 << 2;
      sVar79 = (ushort)(byte)(uVar47 >> 0x10) << 2;
      sVar80 = (ushort)(byte)((ulong)uVar85 >> 0x10) << 2;
      sVar82 = (ushort)(byte)((ulong)uVar85 >> 0x18) << 2;
      sVar83 = (ushort)(byte)((ulong)uVar85 >> 0x20) << 2;
      sVar86 = (ushort)(byte)((ulong)uVar85 >> 0x28) << 2;
      sVar87 = (ushort)(byte)((ulong)uVar85 >> 0x30) << 2;
      sVar89 = (ushort)(byte)((ulong)uVar85 >> 0x38) << 2;
      sVar90 = (short)uVar48 << 2;
      sVar93 = (ushort)(byte)(uVar48 >> 0x10) << 2;
      sVar94 = (ushort)(byte)((ulong)uVar98 >> 0x10) << 2;
      sVar95 = (ushort)(byte)((ulong)uVar98 >> 0x18) << 2;
      sVar96 = (ushort)(byte)((ulong)uVar98 >> 0x20) << 2;
      sVar99 = (ushort)(byte)((ulong)uVar98 >> 0x28) << 2;
      sVar100 = (ushort)(byte)((ulong)uVar98 >> 0x30) << 2;
      sVar101 = (ushort)(byte)((ulong)uVar98 >> 0x38) << 2;
      bVar50 = (byte)((ulong)uVar130 >> 8);
      bVar62 = (byte)((ulong)uVar130 >> 0x28);
      bVar56 = (byte)((ulong)uVar118 >> 8);
      bVar63 = (byte)((ulong)uVar118 >> 0x28);
      iVar35 = (uint)CONCAT12(bVar57,(ushort)(byte)((ulong)uVar115 >> 0x20)) << 0x12;
      iVar37 = (uint)bVar57 << 0x12;
      iVar39 = (uint)(byte)((ulong)uVar115 >> 0x30) << 0x12;
      iVar41 = (uint)(byte)((ulong)uVar115 >> 0x38) << 0x12;
      iVar102 = (uint)CONCAT12(bVar51,(ushort)(byte)uVar115) << 0x12;
      iVar103 = (uint)bVar51 << 0x12;
      iVar104 = (uint)(byte)((ulong)uVar115 >> 0x10) << 0x12;
      iVar105 = (uint)(byte)((ulong)uVar115 >> 0x18) << 0x12;
      iVar120 = (CONCAT12(bVar52,(ushort)(byte)uVar65) & 0xffff) << 10;
      iVar121 = (uint)bVar52 << 10;
      iVar122 = (uint)(byte)((ulong)uVar65 >> 0x10) << 10;
      iVar123 = (uint)(byte)((ulong)uVar65 >> 0x18) << 10;
      iVar43 = (CONCAT12(bVar58,(ushort)(byte)((ulong)uVar65 >> 0x20)) & 0xffff) << 10;
      iVar44 = (uint)bVar58 << 10;
      iVar45 = (uint)(byte)((ulong)uVar65 >> 0x30) << 10;
      iVar46 = (uint)(byte)((ulong)uVar65 >> 0x38) << 10;
      iVar16 = ((CONCAT12(bVar53,(short)uVar74) & 0xff00ff) & 0xffff) << 10;
      iVar19 = (uint)bVar53 << 10;
      iVar22 = (uint)(byte)((ulong)uVar74 >> 0x10) << 10;
      iVar25 = (uint)(byte)((ulong)uVar74 >> 0x18) << 10;
      iVar110 = ((CONCAT12(bVar54,(short)uVar68) & 0xff00ff) & 0xffff) << 10;
      iVar111 = (uint)bVar54 << 10;
      iVar112 = (uint)(byte)((ulong)uVar68 >> 0x10) << 10;
      iVar113 = (uint)(byte)((ulong)uVar68 >> 0x18) << 10;
      iVar70 = (CONCAT12(bVar59,(ushort)(byte)((ulong)uVar74 >> 0x20)) & 0xffff) << 10;
      iVar72 = (uint)bVar59 << 10;
      iVar73 = (uint)(byte)((ulong)uVar74 >> 0x30) << 10;
      iVar75 = (uint)(byte)((ulong)uVar74 >> 0x38) << 10;
      iVar64 = (CONCAT12(bVar60,(ushort)(byte)((ulong)uVar68 >> 0x20)) & 0xffff) << 10;
      iVar66 = (uint)bVar60 << 10;
      iVar67 = (uint)(byte)((ulong)uVar68 >> 0x30) << 10;
      iVar69 = (uint)(byte)((ulong)uVar68 >> 0x38) << 10;
      iVar36 = (uint)CONCAT12(bVar55,(ushort)(byte)uVar78) << 0x12;
      iVar38 = (uint)bVar55 << 0x12;
      iVar40 = (uint)(byte)((ulong)uVar78 >> 0x10) << 0x12;
      iVar42 = (uint)(byte)((ulong)uVar78 >> 0x18) << 0x12;
      iVar31 = (uint)CONCAT12(bVar61,(ushort)(byte)((ulong)uVar78 >> 0x20)) << 0x12;
      iVar32 = (uint)bVar61 << 0x12;
      iVar33 = (uint)(byte)((ulong)uVar78 >> 0x30) << 0x12;
      iVar34 = (uint)(byte)((ulong)uVar78 >> 0x38) << 0x12;
      iVar4 = (uint)(CONCAT12(bVar56,(short)uVar118) & 0xff00ff) << 0x12;
      iVar7 = (uint)bVar56 << 0x12;
      iVar10 = (uint)(byte)((ulong)uVar118 >> 0x10) << 0x12;
      iVar13 = (uint)(byte)((ulong)uVar118 >> 0x18) << 0x12;
      iVar106 = (uint)(CONCAT12(bVar50,(short)uVar130) & 0xff00ff) << 0x12;
      iVar107 = (uint)bVar50 << 0x12;
      iVar108 = (uint)(byte)((ulong)uVar130 >> 0x10) << 0x12;
      iVar109 = (uint)(byte)((ulong)uVar130 >> 0x18) << 0x12;
      iVar114 = (uint)CONCAT12(bVar63,(ushort)(byte)((ulong)uVar118 >> 0x20)) << 0x12;
      iVar116 = (uint)bVar63 << 0x12;
      iVar117 = (uint)(byte)((ulong)uVar118 >> 0x30) << 0x12;
      iVar119 = (uint)(byte)((ulong)uVar118 >> 0x38) << 0x12;
      iVar77 = (uint)CONCAT12(bVar62,(ushort)(byte)((ulong)uVar130 >> 0x20)) << 0x12;
      iVar81 = (uint)bVar62 << 0x12;
      iVar84 = (uint)(byte)((ulong)uVar130 >> 0x30) << 0x12;
      iVar88 = (uint)(byte)((ulong)uVar130 >> 0x38) << 0x12;
      uVar128 = CONCAT13((char)((uint)iVar31 >> 0x18),
                         CONCAT12((byte)((uint)iVar43 >> 0x10) | (byte)((uint)iVar31 >> 0x10),
                                  CONCAT11((byte)((uint)iVar43 >> 8) | (byte)((ushort)sVar21 >> 8),
                                           (char)sVar21)));
      uVar129 = CONCAT13((char)((uint)iVar33 >> 0x18),
                         CONCAT12((byte)((uint)iVar45 >> 0x10) | (byte)((uint)iVar33 >> 0x10),
                                  CONCAT11((byte)((uint)iVar45 >> 8) | (byte)((ushort)sVar24 >> 8),
                                           (char)sVar24)));
      uVar91 = CONCAT13((char)((uint)iVar106 >> 0x18),
                        CONCAT12((byte)((uint)iVar110 >> 0x10) | (byte)((uint)iVar106 >> 0x10),
                                 CONCAT11((byte)((uint)iVar110 >> 8) | (byte)((ushort)sVar90 >> 8),
                                          (char)sVar90)));
      uVar97 = CONCAT13((char)((uint)iVar108 >> 0x18),
                        CONCAT12((byte)((uint)iVar112 >> 0x10) | (byte)((uint)iVar108 >> 0x10),
                                 CONCAT11((byte)((uint)iVar112 >> 8) | (byte)((ushort)sVar94 >> 8),
                                          (char)sVar94)));
      *(uint *)param_3 =
           CONCAT13((char)((uint)iVar102 >> 0x18),
                    CONCAT12((byte)((uint)iVar124 >> 0x10) | (byte)((uint)iVar102 >> 0x10),
                             CONCAT11((byte)((uint)iVar124 >> 8) | (byte)((ushort)sVar3 >> 8),
                                      (char)sVar3)));
      *(uint *)((long)param_3 + 4) =
           CONCAT13((char)((uint)iVar36 >> 0x18),
                    CONCAT12((byte)((uint)iVar120 >> 0x10) | (byte)((uint)iVar36 >> 0x10),
                             CONCAT11((byte)((uint)iVar120 >> 8) | (byte)((ushort)sVar15 >> 8),
                                      (char)sVar15)));
      *(uint *)(param_3 + 1) =
           CONCAT13((char)((uint)iVar103 >> 0x18),
                    CONCAT12((byte)((uint)iVar125 >> 0x10) | (byte)((uint)iVar103 >> 0x10),
                             CONCAT11((byte)((uint)iVar125 >> 8) | (byte)((ushort)sVar5 >> 8),
                                      (char)sVar5)));
      *(uint *)((long)param_3 + 0xc) =
           CONCAT13((char)((uint)iVar38 >> 0x18),
                    CONCAT12((byte)((uint)iVar121 >> 0x10) | (byte)((uint)iVar38 >> 0x10),
                             CONCAT11((byte)((uint)iVar121 >> 8) | (byte)((ushort)sVar17 >> 8),
                                      (char)sVar17)));
      *(uint *)(param_3 + 2) =
           CONCAT13((char)((uint)iVar104 >> 0x18),
                    CONCAT12((byte)((uint)iVar126 >> 0x10) | (byte)((uint)iVar104 >> 0x10),
                             CONCAT11((byte)((uint)iVar126 >> 8) | (byte)((ushort)sVar6 >> 8),
                                      (char)sVar6)));
      *(uint *)((long)param_3 + 0x14) =
           CONCAT13((char)((uint)iVar40 >> 0x18),
                    CONCAT12((byte)((uint)iVar122 >> 0x10) | (byte)((uint)iVar40 >> 0x10),
                             CONCAT11((byte)((uint)iVar122 >> 8) | (byte)((ushort)sVar18 >> 8),
                                      (char)sVar18)));
      *(uint *)(param_3 + 3) =
           CONCAT13((char)((uint)iVar105 >> 0x18),
                    CONCAT12((byte)((uint)iVar127 >> 0x10) | (byte)((uint)iVar105 >> 0x10),
                             CONCAT11((byte)((uint)iVar127 >> 8) | (byte)((ushort)sVar8 >> 8),
                                      (char)sVar8)));
      *(uint *)((long)param_3 + 0x1c) =
           CONCAT13((char)((uint)iVar42 >> 0x18),
                    CONCAT12((byte)((uint)iVar123 >> 0x10) | (byte)((uint)iVar42 >> 0x10),
                             CONCAT11((byte)((uint)iVar123 >> 8) | (byte)((ushort)sVar20 >> 8),
                                      (char)sVar20)));
      param_2 = param_2 + 2;
      *(uint *)(param_3 + 4) =
           CONCAT13((char)((uint)iVar35 >> 0x18),
                    CONCAT12((byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar35 >> 0x10),
                             CONCAT11((byte)((uint)iVar27 >> 8) | (byte)((ushort)sVar9 >> 8),
                                      (char)sVar9)));
      *(uint *)((long)param_3 + 0x24) = uVar128;
      *(uint *)(param_3 + 5) =
           CONCAT13((char)((uint)iVar37 >> 0x18),
                    CONCAT12((byte)((uint)iVar28 >> 0x10) | (byte)((uint)iVar37 >> 0x10),
                             CONCAT11((byte)((uint)iVar28 >> 8) | (byte)((ushort)sVar11 >> 8),
                                      (char)sVar11)));
      *(uint *)((long)param_3 + 0x2c) =
           (uint)(CONCAT17((char)((uint)iVar32 >> 0x18),
                           CONCAT16((byte)((uint)iVar44 >> 0x10) | (byte)((uint)iVar32 >> 0x10),
                                    CONCAT15((byte)((uint)iVar44 >> 8) | (byte)((ushort)sVar23 >> 8)
                                             ,CONCAT14((char)sVar23,uVar128)))) >> 0x20);
      *(uint *)(param_3 + 6) =
           CONCAT13((char)((uint)iVar39 >> 0x18),
                    CONCAT12((byte)((uint)iVar29 >> 0x10) | (byte)((uint)iVar39 >> 0x10),
                             CONCAT11((byte)((uint)iVar29 >> 8) | (byte)((ushort)sVar12 >> 8),
                                      (char)sVar12)));
      *(uint *)((long)param_3 + 0x34) = uVar129;
      *(uint *)(param_3 + 7) =
           CONCAT13((char)((uint)iVar41 >> 0x18),
                    CONCAT12((byte)((uint)iVar30 >> 0x10) | (byte)((uint)iVar41 >> 0x10),
                             CONCAT11((byte)((uint)iVar30 >> 8) | (byte)((ushort)sVar14 >> 8),
                                      (char)sVar14)));
      *(uint *)((long)param_3 + 0x3c) =
           (uint)(CONCAT17((char)((uint)iVar34 >> 0x18),
                           CONCAT16((byte)((uint)iVar46 >> 0x10) | (byte)((uint)iVar34 >> 0x10),
                                    CONCAT15((byte)((uint)iVar46 >> 8) | (byte)((ushort)sVar26 >> 8)
                                             ,CONCAT14((char)sVar26,uVar129)))) >> 0x20);
      *(uint *)(param_3 + 8) =
           CONCAT13((char)((uint)iVar4 >> 0x18),
                    CONCAT12((byte)((uint)iVar16 >> 0x10) | (byte)((uint)iVar4 >> 0x10),
                             CONCAT11((byte)((uint)iVar16 >> 8) | (byte)((ushort)sVar76 >> 8),
                                      (char)sVar76)));
      *(uint *)((long)param_3 + 0x44) = uVar91;
      *(uint *)(param_3 + 9) =
           CONCAT13((char)((uint)iVar7 >> 0x18),
                    CONCAT12((byte)((uint)iVar19 >> 0x10) | (byte)((uint)iVar7 >> 0x10),
                             CONCAT11((byte)((uint)iVar19 >> 8) | (byte)((ushort)sVar79 >> 8),
                                      (char)sVar79)));
      *(uint *)((long)param_3 + 0x4c) =
           (uint)(CONCAT17((char)((uint)iVar107 >> 0x18),
                           CONCAT16((byte)((uint)iVar111 >> 0x10) | (byte)((uint)iVar107 >> 0x10),
                                    CONCAT15((byte)((uint)iVar111 >> 8) |
                                             (byte)((ushort)sVar93 >> 8),
                                             CONCAT14((char)sVar93,uVar91)))) >> 0x20);
      *(uint *)(param_3 + 10) =
           CONCAT13((char)((uint)iVar10 >> 0x18),
                    CONCAT12((byte)((uint)iVar22 >> 0x10) | (byte)((uint)iVar10 >> 0x10),
                             CONCAT11((byte)((uint)iVar22 >> 8) | (byte)((ushort)sVar80 >> 8),
                                      (char)sVar80)));
      *(uint *)((long)param_3 + 0x54) = uVar97;
      *(uint *)(param_3 + 0xb) =
           CONCAT13((char)((uint)iVar13 >> 0x18),
                    CONCAT12((byte)((uint)iVar25 >> 0x10) | (byte)((uint)iVar13 >> 0x10),
                             CONCAT11((byte)((uint)iVar25 >> 8) | (byte)((ushort)sVar82 >> 8),
                                      (char)sVar82)));
      *(uint *)((long)param_3 + 0x5c) =
           (uint)(CONCAT17((char)((uint)iVar109 >> 0x18),
                           CONCAT16((byte)((uint)iVar113 >> 0x10) | (byte)((uint)iVar109 >> 0x10),
                                    CONCAT15((byte)((uint)iVar113 >> 8) |
                                             (byte)((ushort)sVar95 >> 8),
                                             CONCAT14((char)sVar95,uVar97)))) >> 0x20);
      *(uint *)(param_3 + 0xc) =
           CONCAT13((char)((uint)iVar114 >> 0x18),
                    CONCAT12((byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar114 >> 0x10),
                             CONCAT11((byte)((uint)iVar70 >> 8) | (byte)((ushort)sVar83 >> 8),
                                      (char)sVar83)));
      *(uint *)((long)param_3 + 100) =
           CONCAT13((char)((uint)iVar77 >> 0x18),
                    CONCAT12((byte)((uint)iVar64 >> 0x10) | (byte)((uint)iVar77 >> 0x10),
                             CONCAT11((byte)((uint)iVar64 >> 8) | (byte)((ushort)sVar96 >> 8),
                                      (char)sVar96)));
      *(uint *)(param_3 + 0xd) =
           CONCAT13((char)((uint)iVar116 >> 0x18),
                    CONCAT12((byte)((uint)iVar72 >> 0x10) | (byte)((uint)iVar116 >> 0x10),
                             CONCAT11((byte)((uint)iVar72 >> 8) | (byte)((ushort)sVar86 >> 8),
                                      (char)sVar86)));
      *(uint *)((long)param_3 + 0x6c) =
           CONCAT13((char)((uint)iVar81 >> 0x18),
                    CONCAT12((byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar81 >> 0x10),
                             CONCAT11((byte)((uint)iVar66 >> 8) | (byte)((ushort)sVar99 >> 8),
                                      (char)sVar99)));
      *(uint *)(param_3 + 0xe) =
           CONCAT13((char)((uint)iVar117 >> 0x18),
                    CONCAT12((byte)((uint)iVar73 >> 0x10) | (byte)((uint)iVar117 >> 0x10),
                             CONCAT11((byte)((uint)iVar73 >> 8) | (byte)((ushort)sVar87 >> 8),
                                      (char)sVar87)));
      *(uint *)((long)param_3 + 0x74) =
           CONCAT13((char)((uint)iVar84 >> 0x18),
                    CONCAT12((byte)((uint)iVar67 >> 0x10) | (byte)((uint)iVar84 >> 0x10),
                             CONCAT11((byte)((uint)iVar67 >> 8) | (byte)((ushort)sVar100 >> 8),
                                      (char)sVar100)));
      *(uint *)(param_3 + 0xf) =
           CONCAT13((char)((uint)iVar119 >> 0x18),
                    CONCAT12((byte)((uint)iVar75 >> 0x10) | (byte)((uint)iVar119 >> 0x10),
                             CONCAT11((byte)((uint)iVar75 >> 8) | (byte)((ushort)sVar89 >> 8),
                                      (char)sVar89)));
      *(uint *)((long)param_3 + 0x7c) =
           CONCAT13((char)((uint)iVar88 >> 0x18),
                    CONCAT12((byte)((uint)iVar69 >> 0x10) | (byte)((uint)iVar88 >> 0x10),
                             CONCAT11((byte)((uint)iVar69 >> 8) | (byte)((ushort)sVar101 >> 8),
                                      (char)sVar101)));
      param_3 = param_3 + 0x10;
    } while (puVar1 != param_1);
  }
  if (lVar49 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0,lVar49 - ___stack_chk_guard,0);
}


