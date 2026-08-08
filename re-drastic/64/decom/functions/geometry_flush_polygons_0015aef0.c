/*
 * Ghidra decompilation
 *
 * Function : geometry_flush_polygons
 * Address  : 0015aef0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void geometry_flush_polygons(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined (*pauVar6) [16];
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  short sVar12;
  undefined2 uVar13;
  uint uVar14;
  char cVar15;
  byte bVar16;
  uint7 uVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  long lVar21;
  uint *puVar22;
  undefined (*pauVar23) [16];
  byte *pbVar24;
  undefined4 *puVar25;
  uint *puVar26;
  long lVar27;
  undefined4 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  long extraout_x1;
  undefined8 *puVar31;
  long extraout_x1_00;
  byte *pbVar32;
  long extraout_x1_01;
  char cVar33;
  ulong uVar34;
  long lVar35;
  byte bVar36;
  char cVar37;
  char cVar38;
  undefined uVar39;
  undefined4 uVar40;
  uint uVar41;
  uint uVar42;
  undefined8 *puVar43;
  byte *pbVar44;
  byte bVar45;
  ulong uVar46;
  ulong uVar47;
  undefined8 *puVar48;
  byte bVar49;
  byte bVar50;
  undefined8 *puVar51;
  byte *pbVar52;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *extraout_x11_01;
  undefined8 *extraout_x11_02;
  byte *extraout_x12;
  byte *extraout_x12_00;
  byte *extraout_x12_01;
  byte *extraout_x12_02;
  uint extraout_w13;
  uint extraout_w13_00;
  uint extraout_w13_01;
  uint extraout_w13_02;
  int iVar53;
  uint *puVar54;
  uint *extraout_x14;
  uint *extraout_x14_00;
  uint *extraout_x14_01;
  uint *extraout_x14_02;
  uint *puVar55;
  uint *extraout_x15;
  uint *extraout_x15_00;
  uint *extraout_x15_01;
  uint *extraout_x15_02;
  ushort uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  byte bVar60;
  long extraout_x18;
  long extraout_x18_00;
  long extraout_x18_01;
  long extraout_x18_02;
  char cVar61;
  uint uVar62;
  ulong uVar63;
  long lVar64;
  undefined2 *puVar65;
  uint uVar66;
  uint uVar67;
  uint5 uVar68;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  uint5 uVar77;
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  uint5 uVar81;
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 *local_3b10;
  uint local_3ae4;
  undefined8 local_3ae0;
  undefined8 uStack_3ad8;
  undefined4 local_3ad0;
  undefined2 local_3acc;
  undefined local_3aca;
  undefined8 local_3ac8;
  undefined8 uStack_3ac0;
  undefined4 local_3ab8;
  undefined2 uStack_3ab4;
  undefined uStack_3ab2;
  undefined8 local_3ab0;
  undefined8 uStack_3aa8;
  undefined4 local_3aa0;
  undefined2 local_3a9c;
  undefined local_3a9a;
  undefined8 local_3a98;
  undefined8 uStack_3a90;
  undefined4 local_3a88;
  undefined2 local_3a84;
  undefined local_3a82;
  uint local_3958 [384];
  undefined8 local_3358;
  undefined8 local_3350 [1568];
  byte local_250 [192];
  undefined8 local_190 [25];
  byte local_c8 [192];
  long local_8;
  
  lVar21 = param_1 + 0x79f8;
  uVar8 = *(uint *)(param_1 + 0x334);
  pauVar6 = (undefined (*) [16])(param_1 + 0x17f0);
  local_8 = ___stack_chk_guard;
  *(char *)(param_1 + (ulong)uVar8 * 8 + 0x79f5) = (char)*(undefined4 *)(param_1 + 0x330);
  lVar35 = param_1 + 0x3070;
  lVar29 = param_1 + 0x48f0;
  lVar7 = param_1 + 0x6170;
  if (uVar8 != 0) {
    puVar55 = local_3958;
    lVar27 = param_1 + ((ulong)(uVar8 - 1) + 0xf40) * 8;
    pbVar32 = local_c8;
    puVar30 = local_190;
    puVar54 = puVar55;
LAB_0015afb8:
    uVar67 = *(uint *)(lVar21 + -8);
    bVar45 = *(byte *)(lVar21 + -3);
    uVar46 = (ulong)bVar45;
    bVar49 = *(byte *)(lVar21 + -4);
    local_3ae4 = (uint)*(byte *)(lVar21 + 5) - (uint)bVar45;
    uVar63 = (ulong)(uVar67 >> 6) & 3;
    uVar66 = (uint)uVar63;
    if (bVar49 != 2) {
      bVar60 = (byte)uVar63;
      if (2 < bVar49) {
        if (bVar49 == 6) goto LAB_0015bef4;
        if ((bVar49 & 0xfb) != 3) goto LAB_0015b160;
        *(undefined *)(lVar21 + -1) = 1;
        uVar58 = (local_3ae4 >> 1) - 1;
        if ((int)uVar58 < 1) goto LAB_0015b160;
        lVar64 = param_1 + 0x1290 + (ulong)bVar45;
        *(char *)(lVar21 + -2) = (char)uVar58;
        uVar58 = uVar58 & 0xff;
        pbVar24 = (byte *)(lVar64 + 4);
        if (uVar58 == 0) goto LAB_0015b160;
        bVar18 = true;
        puVar51 = puVar30;
        pbVar52 = pbVar32;
        bVar50 = *(byte *)(lVar64 + 2);
        bVar75 = *(byte *)(param_1 + 0x1290 + uVar46);
        bVar74 = *(byte *)(lVar64 + 3);
        bVar36 = *(byte *)(lVar64 + 1);
        do {
          bVar76 = bVar74;
          bVar74 = bVar50;
          bVar16 = bVar76 & bVar75 & bVar36 & bVar74;
          *(byte *)puVar51 = bVar16;
          *pbVar52 = bVar75 | bVar36 | bVar74 | bVar76;
          bVar50 = *pbVar24;
          pbVar44 = pbVar24 + 1;
          pbVar24 = pbVar24 + 2;
          bVar18 = (bool)(bVar18 & bVar16 != 0);
          puVar51 = (undefined8 *)((long)puVar51 + 1);
          pbVar52 = pbVar52 + 1;
          bVar75 = bVar74;
          bVar74 = *pbVar44;
          bVar36 = bVar76;
        } while (pbVar24 != (byte *)(lVar64 + ((ulong)(uVar58 - 1) + 3) * 2));
        if (bVar18) goto LAB_0015b160;
        if (uVar66 == 3) {
          bVar36 = bVar49 & 3;
          cVar61 = '\x04';
          if ((bVar49 & 1) != 0) {
            cVar61 = '\x05';
          }
          uVar39 = 1;
          goto LAB_0015ba10;
        }
        lVar21 = param_1 + 0x650 + uVar46 * 0x10;
        pauVar23 = (undefined (*) [16])local_250;
        lVar27 = lVar21;
        do {
          lVar64 = lVar27 + 0x20;
          geometry_backface_test_single(lVar27,0xc,pauVar23);
          pauVar23 = (undefined (*) [16])(*pauVar23 + 1);
          lVar27 = lVar64;
        } while (lVar64 != lVar21 + ((ulong)(uVar58 - 1) + 1) * 0x20);
        bVar50 = *(byte *)(extraout_x10_01 + -2);
        uVar58 = (uint)bVar50;
        bVar49 = *(byte *)(extraout_x10_01 + -4);
        uVar39 = *(undefined *)(extraout_x10_01 + -1);
        bVar45 = *(byte *)(extraout_x10_01 + -3);
        uVar67 = *(uint *)(extraout_x10_01 + -8);
        bVar36 = bVar49 & 3;
        lVar21 = extraout_x10_01;
        pbVar32 = extraout_x12_01;
        puVar54 = extraout_x14_01;
        puVar55 = extraout_x15_01;
        lVar27 = extraout_x18_01;
        local_3ae4 = extraout_w13_01;
        if (uVar58 != 0) {
          if (uVar58 - 1 < 0xf) {
            uVar59 = 0;
LAB_0015d504:
            *(byte *)((long)extraout_x11_01 + (ulong)uVar59) =
                 ((byte)(*(undefined (*) [16])local_250)[uVar59] & uVar66) == 0 |
                 *(byte *)((long)extraout_x11_01 + (ulong)uVar59);
            uVar62 = uVar59 + 1;
            if (uVar62 < uVar58) {
              *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                   ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                   *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
              uVar62 = uVar59 + 2;
              if (uVar62 < uVar58) {
                *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                     ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                     *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                uVar62 = uVar59 + 3;
                if (uVar62 < uVar58) {
                  *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                       ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                       *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                  uVar62 = uVar59 + 4;
                  if (uVar62 < uVar58) {
                    *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                         ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                         *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                    uVar62 = uVar59 + 5;
                    if (uVar62 < uVar58) {
                      *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                           ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                           *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                      uVar62 = uVar59 + 6;
                      if (uVar62 < uVar58) {
                        *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                             ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                             *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                        uVar62 = uVar59 + 7;
                        if (uVar62 < uVar58) {
                          *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                               ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                               *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                          uVar62 = uVar59 + 8;
                          if (uVar62 < uVar58) {
                            *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                                 ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                                 *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                            uVar62 = uVar59 + 9;
                            if (uVar62 < uVar58) {
                              *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                                   ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                                   *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                              uVar62 = uVar59 + 10;
                              if (uVar62 < uVar58) {
                                *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                                     ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0
                                     | *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                                uVar62 = uVar59 + 0xb;
                                if (uVar62 < uVar58) {
                                  *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                                       ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) ==
                                       0 | *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                                  uVar62 = uVar59 + 0xc;
                                  if (uVar62 < uVar58) {
                                    *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                                         ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66)
                                         == 0 | *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                                    uVar62 = uVar59 + 0xd;
                                    if (uVar62 < uVar58) {
                                      *(byte *)((long)extraout_x11_01 + (ulong)uVar62) =
                                           ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66)
                                           == 0 | *(byte *)((long)extraout_x11_01 + (ulong)uVar62);
                                      uVar59 = uVar59 + 0xe;
                                      if (uVar59 < uVar58) {
                                        *(byte *)((long)extraout_x11_01 + (ulong)uVar59) =
                                             ((byte)(*(undefined (*) [16])local_250)[uVar59] &
                                             uVar66) == 0 |
                                             *(byte *)((long)extraout_x11_01 + (ulong)uVar59);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            puVar51 = extraout_x11_01 + 2;
            pauVar23 = (undefined (*) [16])local_250;
            while( true ) {
              puVar31 = puVar51;
              auVar72 = *pauVar23;
              uVar90 = puVar30[1];
              uVar20 = *puVar30;
              bVar75 = bVar60 & auVar72[1];
              bVar74 = bVar60 & auVar72[9];
              auVar89._6_2_ = 0;
              auVar89._0_6_ =
                   (uint6)CONCAT14(bVar75,(uint)CONCAT12(bVar75,(ushort)(bVar60 & auVar72[0]))) &
                   0xffff0000ffff;
              auVar89[8] = bVar60 & auVar72[2];
              auVar89._9_3_ = 0;
              auVar89[12] = bVar60 & auVar72[3];
              auVar89._13_3_ = 0;
              auVar85._6_2_ = 0;
              auVar85._0_6_ =
                   (uint6)CONCAT14(bVar74,(uint)CONCAT12(bVar74,(ushort)(bVar60 & auVar72[8]))) &
                   0xffff0000ffff;
              auVar85[8] = bVar60 & auVar72[10];
              auVar85._9_3_ = 0;
              auVar85[12] = bVar60 & auVar72[11];
              auVar85._13_3_ = 0;
              auVar88._1_3_ = 0;
              auVar88[0] = bVar60 & auVar72[4];
              auVar88[4] = bVar60 & auVar72[5];
              auVar88._5_3_ = 0;
              auVar88[8] = bVar60 & auVar72[6];
              auVar88._9_3_ = 0;
              auVar88[12] = bVar60 & auVar72[7];
              auVar88._13_3_ = 0;
              auVar80._1_3_ = 0;
              auVar80[0] = bVar60 & auVar72[12];
              auVar80[4] = bVar60 & auVar72[13];
              auVar80._5_3_ = 0;
              auVar80[8] = bVar60 & auVar72[14];
              auVar80._9_3_ = 0;
              auVar80[12] = bVar60 & auVar72[15];
              auVar80._13_3_ = 0;
              auVar89 = NEON_cmeq(auVar89,0,2);
              auVar85 = NEON_cmeq(auVar85,0,2);
              auVar84 = NEON_cmeq(auVar88,0,2);
              auVar72 = NEON_cmeq(auVar80,0,2);
              uVar81 = CONCAT14(auVar85[4],(uint)(auVar85[0] & 1)) & 0x1ffffffff;
              uVar77 = CONCAT14(auVar84[4],(uint)(auVar84[0] & 1)) & 0x1ffffffff;
              uVar68 = CONCAT14(auVar72[4],(uint)(auVar72[0] & 1)) & 0x1ffffffff;
              uVar17 = CONCAT16(auVar85[12],
                                (uint6)(CONCAT14(auVar85[8],
                                                 (uint)CONCAT12((char)(uVar81 >> 0x20),(short)uVar81
                                                               )) & 0x1ffffffff)) & 0x1ffffffffffff;
              uVar46 = CONCAT17(auVar84[12],
                                CONCAT16(auVar84[8],
                                         CONCAT15((char)(uVar77 >> 0x20),
                                                  CONCAT14((char)uVar77,
                                                           CONCAT13(auVar89[12],
                                                                    CONCAT12(auVar89[8],
                                                                             CONCAT11(auVar89[4],
                                                                                      auVar89[0]))))
                                                 ))) & 0x101ffff01010101;
              auVar84._0_8_ =
                   CONCAT17((byte)(uVar46 >> 0x38) | (byte)((ulong)uVar20 >> 0x38),
                            CONCAT16((byte)(uVar46 >> 0x30) | (byte)((ulong)uVar20 >> 0x30),
                                     CONCAT15((byte)(uVar46 >> 0x28) | (byte)((ulong)uVar20 >> 0x28)
                                              ,CONCAT14((byte)(uVar46 >> 0x20) |
                                                        (byte)((ulong)uVar20 >> 0x20),
                                                        CONCAT13((byte)(uVar46 >> 0x18) |
                                                                 (byte)((ulong)uVar20 >> 0x18),
                                                                 CONCAT12((byte)(uVar46 >> 0x10) |
                                                                          (byte)((ulong)uVar20 >>
                                                                                0x10),
                                                                          CONCAT11((byte)(uVar46 >>
                                                                                         8) |
                                                                                   (byte)((ulong)
                                                  uVar20 >> 8),(byte)uVar46 | (byte)uVar20)))))));
              auVar84[8] = (byte)uVar17 | (byte)uVar90;
              auVar84[9] = (byte)(uVar17 >> 0x10) | (byte)((ulong)uVar90 >> 8);
              auVar84[10] = (byte)(uVar17 >> 0x20) | (byte)((ulong)uVar90 >> 0x10);
              auVar84[11] = (byte)(uVar17 >> 0x30) | (byte)((ulong)uVar90 >> 0x18);
              auVar84[12] = (byte)uVar68 | (byte)((ulong)uVar90 >> 0x20);
              auVar84[13] = (byte)(uVar68 >> 0x20) | (byte)((ulong)uVar90 >> 0x28);
              auVar84[14] = auVar72[8] & 1 | (byte)((ulong)uVar90 >> 0x30);
              auVar84[15] = auVar72[12] & 1 | (byte)((ulong)uVar90 >> 0x38);
              puVar30[1] = auVar84._8_8_;
              *puVar30 = auVar84._0_8_;
              if (puVar31 == extraout_x11_01 + 2 + (ulong)((bVar50 >> 4) - 1) * 2) break;
              puVar51 = puVar31 + 2;
              pauVar23 = pauVar23 + 1;
              puVar30 = puVar31;
            }
            uVar59 = uVar58 & 0xfffffff0;
            if ((bVar50 & 0xf) != 0) goto LAB_0015d504;
          }
          cVar61 = '\x04';
          puVar30 = extraout_x11_01;
          if ((bVar49 & 1) != 0) {
            cVar61 = '\x05';
          }
LAB_0015ba10:
          cVar33 = (bVar49 & 1) + 4;
          uVar46 = 0;
          uVar66 = 0;
          puVar22 = puVar54;
LAB_0015ba1c:
          iVar53 = (int)uVar46;
          uVar63 = (ulong)uVar66;
          lVar64 = 0;
          uVar59 = uVar66;
          while( true ) {
            uVar66 = uVar59 + 1;
            cVar37 = (char)uVar46;
            cVar15 = (char)uVar59;
            if (*(byte *)((long)puVar30 + lVar64 + uVar63) != 0) break;
            if (pbVar32[lVar64 + uVar63] != 0) {
              puVar26 = puVar22;
              cVar38 = '\0';
              if (uVar59 != 0) {
                puVar26 = puVar22 + 2;
                *puVar22 = uVar67;
                *(byte *)(puVar22 + 1) = bVar36;
                *(byte *)((long)puVar22 + 5) = bVar45 + cVar37 * '\x02';
                *(char *)((long)puVar22 + 6) = cVar15 - cVar37;
                *(undefined *)((long)puVar22 + 7) = uVar39;
                cVar38 = cVar15;
              }
              *puVar26 = uVar67;
              *(char *)(puVar26 + 1) = cVar33;
              *(byte *)((long)puVar26 + 5) = bVar45 + cVar38 * '\x02';
              *(undefined *)((long)puVar26 + 7) = uVar39;
              puVar26 = puVar26 + 2;
              goto joined_r0x0015d864;
            }
            lVar64 = lVar64 + 1;
            uVar59 = uVar66;
            if (uVar58 <= uVar66) goto LAB_0015bac0;
          }
          puVar26 = puVar22;
          if (uVar59 != 0) {
            puVar26 = puVar22 + 2;
            *puVar22 = uVar67;
            *(byte *)(puVar22 + 1) = bVar36;
            *(byte *)((long)puVar22 + 5) = bVar45 + cVar37 * '\x02';
            *(char *)((long)puVar22 + 6) = cVar15 - cVar37;
            *(undefined *)((long)puVar22 + 7) = uVar39;
          }
joined_r0x0015d864:
          if (uVar66 < uVar58) {
            uVar63 = (ulong)uVar66;
            lVar64 = 0;
            puVar22 = puVar26;
            uVar46 = uVar63;
            do {
              iVar53 = (int)uVar46;
              puVar26 = puVar22;
              if (*(byte *)((long)puVar30 + lVar64 + uVar63) == 0) {
                if (pbVar32[lVar64 + uVar63] == 0) goto code_r0x0015bab4;
                puVar26 = puVar22 + 2;
                *puVar22 = uVar67;
                *(char *)(puVar22 + 1) = cVar33;
                *(byte *)((long)puVar22 + 5) = bVar45 + (char)uVar46 * '\x02';
                *(undefined *)((long)puVar22 + 7) = uVar39;
              }
              uVar46 = (ulong)(iVar53 + 1U);
              lVar64 = lVar64 + 1;
              puVar22 = puVar26;
              if (uVar58 <= iVar53 + 1U) break;
            } while( true );
          }
          goto LAB_0015cfd0;
        }
        cVar61 = '\x04';
        puVar22 = extraout_x14_01;
        puVar30 = extraout_x11_01;
        if ((bVar49 & 1) != 0) {
          cVar61 = '\x05';
        }
        goto LAB_0015bad4;
      }
      if (bVar49 == 0) {
        pbVar24 = (byte *)(param_1 + 0x1290 + (ulong)bVar45);
        *(char *)(lVar21 + -2) = (char)(local_3ae4 / 3);
        uVar58 = local_3ae4 / 3 & 0xff;
        if (uVar58 == 0) goto LAB_0015b160;
        lVar64 = 1;
        bVar18 = true;
        do {
          bVar36 = *pbVar24;
          bVar50 = pbVar24[1];
          bVar75 = pbVar24[2];
          bVar74 = bVar75 & bVar36 & bVar50;
          *(byte *)((long)puVar30 + lVar64 + -1) = bVar74;
          pbVar32[lVar64 + -1] = bVar75 | bVar36 | bVar50;
          lVar64 = lVar64 + 1;
          pbVar24 = pbVar24 + 3;
          bVar18 = (bool)(bVar18 & bVar74 != 0);
        } while (lVar64 != (ulong)(uVar58 - 1) + 2);
        if (bVar18) goto LAB_0015b160;
        if (uVar66 == 3) {
          uVar39 = *(undefined *)(lVar21 + -1);
          bVar75 = 0;
          bVar36 = 0;
LAB_0015bdf4:
          cVar61 = '\x04';
          if (bVar36 != 0) {
            cVar61 = '\x05';
          }
          uVar46 = 0;
          uVar66 = 0;
          puVar22 = puVar54;
LAB_0015be10:
          uVar62 = (uint)uVar46;
          uVar63 = (ulong)uVar66;
          lVar64 = 0;
          uVar59 = uVar66;
          while( true ) {
            uVar66 = uVar59 + 1;
            cVar15 = (char)uVar59;
            cVar33 = (char)uVar46;
            if (*(byte *)((long)puVar30 + lVar64 + uVar63) != 0) break;
            if (pbVar32[lVar64 + uVar63] != 0) {
              puVar26 = puVar22;
              cVar37 = '\0';
              if (uVar59 != 0) {
                puVar26 = puVar22 + 2;
                *puVar22 = uVar67;
                *(byte *)(puVar22 + 1) = bVar75;
                *(byte *)((long)puVar22 + 5) = bVar45 + cVar33 + (char)((uVar62 & 0xff) << 1);
                *(char *)((long)puVar22 + 6) = cVar15 - cVar33;
                *(undefined *)((long)puVar22 + 7) = uVar39;
                cVar37 = cVar15;
              }
              *puVar26 = uVar67;
              *(byte *)(puVar26 + 1) = bVar36 + 4;
              *(byte *)((long)puVar26 + 5) = bVar45 + cVar37 * '\x03';
              *(undefined *)((long)puVar26 + 7) = uVar39;
              puVar26 = puVar26 + 2;
              goto joined_r0x0015d0a8;
            }
            lVar64 = lVar64 + 1;
            uVar59 = uVar66;
            if (uVar58 <= uVar66) goto LAB_0015bebc;
          }
          puVar26 = puVar22;
          if (uVar59 != 0) {
            puVar26 = puVar22 + 2;
            *puVar22 = uVar67;
            *(byte *)(puVar22 + 1) = bVar75;
            *(byte *)((long)puVar22 + 5) = bVar45 + cVar33 + (char)((uVar62 & 0xff) << 1);
            *(char *)((long)puVar22 + 6) = cVar15 - cVar33;
            *(undefined *)((long)puVar22 + 7) = uVar39;
          }
joined_r0x0015d0a8:
          if (uVar66 < uVar58) {
            uVar63 = (ulong)uVar66;
            lVar64 = 0;
            puVar22 = puVar26;
            uVar46 = uVar63;
            do {
              uVar62 = (uint)uVar46;
              puVar26 = puVar22;
              if (*(byte *)((long)puVar30 + lVar64 + uVar63) == 0) {
                if (pbVar32[lVar64 + uVar63] == 0) goto code_r0x0015beb0;
                puVar26 = puVar22 + 2;
                *puVar22 = uVar67;
                *(byte *)(puVar22 + 1) = bVar36 + 4;
                *(byte *)((long)puVar22 + 5) = bVar45 + (char)uVar46 * '\x03';
                *(undefined *)((long)puVar22 + 7) = uVar39;
              }
              uVar46 = (ulong)(uVar62 + 1);
              lVar64 = lVar64 + 1;
              puVar22 = puVar26;
              if (uVar58 <= uVar62 + 1) break;
            } while( true );
          }
LAB_0015cfd0:
          *(undefined4 *)(param_1 + 0x648) = 1;
          goto LAB_0015cfd8;
        }
        lVar21 = param_1 + 0x650 + uVar46 * 0x10;
        pauVar23 = (undefined (*) [16])local_250;
        lVar27 = lVar21;
        do {
          lVar64 = lVar27 + 0x30;
          geometry_backface_test_single_constprop_0(lVar27,pauVar23);
          pauVar23 = (undefined (*) [16])(extraout_x1 + 1);
          lVar27 = lVar64;
        } while (lVar64 != lVar21 + (ulong)(uVar58 - 1) * 0x30 + 0x30);
        bVar50 = *(byte *)(extraout_x10 + -2);
        uVar58 = (uint)bVar50;
        bVar49 = *(byte *)(extraout_x10 + -4);
        bVar45 = *(byte *)(extraout_x10 + -3);
        uVar39 = *(undefined *)(extraout_x10 + -1);
        uVar67 = *(uint *)(extraout_x10 + -8);
        bVar36 = bVar49 & 1;
        bVar75 = bVar49 & 3;
        lVar21 = extraout_x10;
        puVar30 = extraout_x11;
        pbVar32 = extraout_x12;
        puVar54 = extraout_x14;
        puVar55 = extraout_x15;
        lVar27 = extraout_x18;
        local_3ae4 = extraout_w13;
        if (uVar58 != 0) {
          if (uVar58 - 1 < 0xf) {
            uVar59 = 0;
          }
          else {
            puVar51 = extraout_x11 + 2;
            puVar31 = extraout_x11;
            pauVar23 = (undefined (*) [16])local_250;
            while( true ) {
              puVar48 = puVar51;
              auVar72 = *pauVar23;
              uVar90 = puVar31[1];
              uVar20 = *puVar31;
              bVar74 = bVar60 & auVar72[1];
              bVar76 = bVar60 & auVar72[9];
              auVar86._6_2_ = 0;
              auVar86._0_6_ =
                   (uint6)CONCAT14(bVar74,(uint)CONCAT12(bVar74,(ushort)(bVar60 & auVar72[0]))) &
                   0xffff0000ffff;
              auVar86[8] = bVar60 & auVar72[2];
              auVar86._9_3_ = 0;
              auVar86[12] = bVar60 & auVar72[3];
              auVar86._13_3_ = 0;
              auVar82._6_2_ = 0;
              auVar82._0_6_ =
                   (uint6)CONCAT14(bVar76,(uint)CONCAT12(bVar76,(ushort)(bVar60 & auVar72[8]))) &
                   0xffff0000ffff;
              auVar82[8] = bVar60 & auVar72[10];
              auVar82._9_3_ = 0;
              auVar82[12] = bVar60 & auVar72[11];
              auVar82._13_3_ = 0;
              auVar78._1_3_ = 0;
              auVar78[0] = bVar60 & auVar72[4];
              auVar78[4] = bVar60 & auVar72[5];
              auVar78._5_3_ = 0;
              auVar78[8] = bVar60 & auVar72[6];
              auVar78._9_3_ = 0;
              auVar78[12] = bVar60 & auVar72[7];
              auVar78._13_3_ = 0;
              auVar69._1_3_ = 0;
              auVar69[0] = bVar60 & auVar72[12];
              auVar69[4] = bVar60 & auVar72[13];
              auVar69._5_3_ = 0;
              auVar69[8] = bVar60 & auVar72[14];
              auVar69._9_3_ = 0;
              auVar69[12] = bVar60 & auVar72[15];
              auVar69._13_3_ = 0;
              auVar88 = NEON_cmeq(auVar86,0,2);
              auVar84 = NEON_cmeq(auVar82,0,2);
              auVar80 = NEON_cmeq(auVar78,0,2);
              auVar72 = NEON_cmeq(auVar69,0,2);
              uVar81 = CONCAT14(auVar84[4],(uint)(auVar84[0] & 1)) & 0x1ffffffff;
              uVar77 = CONCAT14(auVar80[4],(uint)(auVar80[0] & 1)) & 0x1ffffffff;
              uVar68 = CONCAT14(auVar72[4],(uint)(auVar72[0] & 1)) & 0x1ffffffff;
              uVar17 = CONCAT16(auVar84[12],
                                (uint6)(CONCAT14(auVar84[8],
                                                 (uint)CONCAT12((char)(uVar81 >> 0x20),(short)uVar81
                                                               )) & 0x1ffffffff)) & 0x1ffffffffffff;
              uVar46 = CONCAT17(auVar80[12],
                                CONCAT16(auVar80[8],
                                         CONCAT15((char)(uVar77 >> 0x20),
                                                  CONCAT14((char)uVar77,
                                                           CONCAT13(auVar88[12],
                                                                    CONCAT12(auVar88[8],
                                                                             CONCAT11(auVar88[4],
                                                                                      auVar88[0]))))
                                                 ))) & 0x101ffff01010101;
              auVar70._0_8_ =
                   CONCAT17((byte)(uVar46 >> 0x38) | (byte)((ulong)uVar20 >> 0x38),
                            CONCAT16((byte)(uVar46 >> 0x30) | (byte)((ulong)uVar20 >> 0x30),
                                     CONCAT15((byte)(uVar46 >> 0x28) | (byte)((ulong)uVar20 >> 0x28)
                                              ,CONCAT14((byte)(uVar46 >> 0x20) |
                                                        (byte)((ulong)uVar20 >> 0x20),
                                                        CONCAT13((byte)(uVar46 >> 0x18) |
                                                                 (byte)((ulong)uVar20 >> 0x18),
                                                                 CONCAT12((byte)(uVar46 >> 0x10) |
                                                                          (byte)((ulong)uVar20 >>
                                                                                0x10),
                                                                          CONCAT11((byte)(uVar46 >>
                                                                                         8) |
                                                                                   (byte)((ulong)
                                                  uVar20 >> 8),(byte)uVar46 | (byte)uVar20)))))));
              auVar70[8] = (byte)uVar17 | (byte)uVar90;
              auVar70[9] = (byte)(uVar17 >> 0x10) | (byte)((ulong)uVar90 >> 8);
              auVar70[10] = (byte)(uVar17 >> 0x20) | (byte)((ulong)uVar90 >> 0x10);
              auVar70[11] = (byte)(uVar17 >> 0x30) | (byte)((ulong)uVar90 >> 0x18);
              auVar70[12] = (byte)uVar68 | (byte)((ulong)uVar90 >> 0x20);
              auVar70[13] = (byte)(uVar68 >> 0x20) | (byte)((ulong)uVar90 >> 0x28);
              auVar70[14] = auVar72[8] & 1 | (byte)((ulong)uVar90 >> 0x30);
              auVar70[15] = auVar72[12] & 1 | (byte)((ulong)uVar90 >> 0x38);
              puVar31[1] = auVar70._8_8_;
              *puVar31 = auVar70._0_8_;
              if (puVar48 == extraout_x11 + 2 + (ulong)((bVar50 >> 4) - 1) * 2) break;
              puVar51 = puVar48 + 2;
              puVar31 = puVar48;
              pauVar23 = pauVar23 + 1;
            }
            uVar59 = uVar58 & 0xfffffff0;
            if ((bVar50 & 0xf) == 0) goto LAB_0015bdf4;
          }
          *(byte *)((long)extraout_x11 + (ulong)uVar59) =
               ((byte)(*(undefined (*) [16])local_250)[uVar59] & uVar66) == 0 |
               *(byte *)((long)extraout_x11 + (ulong)uVar59);
          uVar62 = uVar59 + 1;
          if (uVar62 < uVar58) {
            *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                 ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                 *(byte *)((long)extraout_x11 + (ulong)uVar62);
            uVar62 = uVar59 + 2;
            if (uVar62 < uVar58) {
              *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                   ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                   *(byte *)((long)extraout_x11 + (ulong)uVar62);
              uVar62 = uVar59 + 3;
              if (uVar62 < uVar58) {
                *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                     ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                     *(byte *)((long)extraout_x11 + (ulong)uVar62);
                uVar62 = uVar59 + 4;
                if (uVar62 < uVar58) {
                  *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                       ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                       *(byte *)((long)extraout_x11 + (ulong)uVar62);
                  uVar62 = uVar59 + 5;
                  if (uVar62 < uVar58) {
                    *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                         ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                         *(byte *)((long)extraout_x11 + (ulong)uVar62);
                    uVar62 = uVar59 + 6;
                    if (uVar62 < uVar58) {
                      *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                           ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                           *(byte *)((long)extraout_x11 + (ulong)uVar62);
                      uVar62 = uVar59 + 7;
                      if (uVar62 < uVar58) {
                        *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                             ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                             *(byte *)((long)extraout_x11 + (ulong)uVar62);
                        uVar62 = uVar59 + 8;
                        if (uVar62 < uVar58) {
                          *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                               ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                               *(byte *)((long)extraout_x11 + (ulong)uVar62);
                          uVar62 = uVar59 + 9;
                          if (uVar62 < uVar58) {
                            *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                                 ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                                 *(byte *)((long)extraout_x11 + (ulong)uVar62);
                            uVar62 = uVar59 + 10;
                            if (uVar62 < uVar58) {
                              *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                                   ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                                   *(byte *)((long)extraout_x11 + (ulong)uVar62);
                              uVar62 = uVar59 + 0xb;
                              if (uVar62 < uVar58) {
                                *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                                     ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0
                                     | *(byte *)((long)extraout_x11 + (ulong)uVar62);
                                uVar62 = uVar59 + 0xc;
                                if (uVar62 < uVar58) {
                                  *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                                       ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) ==
                                       0 | *(byte *)((long)extraout_x11 + (ulong)uVar62);
                                  uVar62 = uVar59 + 0xd;
                                  if (uVar62 < uVar58) {
                                    *(byte *)((long)extraout_x11 + (ulong)uVar62) =
                                         ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66)
                                         == 0 | *(byte *)((long)extraout_x11 + (ulong)uVar62);
                                    uVar59 = uVar59 + 0xe;
                                    if (uVar59 < uVar58) {
                                      *(byte *)((long)extraout_x11 + (ulong)uVar59) =
                                           ((byte)(*(undefined (*) [16])local_250)[uVar59] & uVar66)
                                           == 0 | *(byte *)((long)extraout_x11 + (ulong)uVar59);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_0015bdf4;
        }
        cVar61 = '\x04';
        puVar22 = extraout_x14;
        if ((bVar49 & 1) != 0) {
          cVar61 = '\x05';
        }
        goto LAB_0015bed4;
      }
      *(char *)(lVar21 + -2) = (char)(local_3ae4 >> 2);
      uVar58 = local_3ae4 >> 2 & 0xff;
      pbVar24 = (byte *)(param_1 + 0x1290 + (ulong)bVar45);
      if (uVar58 == 0) goto LAB_0015b160;
      lVar64 = (ulong)(uVar58 - 1) + 1;
      pbVar52 = pbVar24 + lVar64 * 4;
      bVar18 = true;
      puVar51 = puVar30;
      pbVar44 = pbVar32;
      do {
        bVar49 = *pbVar24;
        bVar36 = pbVar24[1];
        bVar50 = pbVar24[2];
        bVar75 = pbVar24[3];
        bVar74 = bVar49 & bVar36 & bVar50 & bVar75;
        *(byte *)puVar51 = bVar74;
        *pbVar44 = bVar50 | bVar75 | bVar49 | bVar36;
        pbVar24 = pbVar24 + 4;
        bVar18 = (bool)(bVar18 & bVar74 != 0);
        puVar51 = (undefined8 *)((long)puVar51 + 1);
        pbVar44 = pbVar44 + 1;
      } while (pbVar24 != pbVar52);
      if (bVar18) goto LAB_0015b160;
      if (uVar66 == 3) {
        uVar39 = *(undefined *)(lVar21 + -1);
        bVar36 = 1;
        bVar49 = 1;
        bVar50 = 1;
        cVar61 = '\x05';
        goto LAB_0015b07c;
      }
      lVar21 = param_1 + 0x650 + uVar46 * 0x10;
      pauVar23 = (undefined (*) [16])local_250;
      lVar27 = lVar21;
      do {
        lVar4 = lVar27 + 0x40;
        geometry_backface_test_single_constprop_0(lVar27,pauVar23);
        pauVar23 = (undefined (*) [16])(extraout_x1_00 + 1);
        lVar27 = lVar4;
      } while (lVar4 != lVar21 + lVar64 * 0x40);
      bVar75 = *(byte *)(extraout_x10_00 + -2);
      uVar58 = (uint)bVar75;
      bVar50 = *(byte *)(extraout_x10_00 + -4);
      uVar39 = *(undefined *)(extraout_x10_00 + -1);
      bVar45 = *(byte *)(extraout_x10_00 + -3);
      uVar67 = *(uint *)(extraout_x10_00 + -8);
      bVar49 = bVar50 & 3;
      bVar36 = bVar50 & 1;
      lVar21 = extraout_x10_00;
      pbVar32 = extraout_x12_00;
      puVar54 = extraout_x14_00;
      puVar55 = extraout_x15_00;
      lVar27 = extraout_x18_00;
      local_3ae4 = extraout_w13_00;
      if (uVar58 != 0) {
        if (uVar58 - 1 < 0xf) {
          uVar59 = 0;
LAB_0015cd80:
          *(byte *)((long)extraout_x11_00 + (ulong)uVar59) =
               ((byte)(*(undefined (*) [16])local_250)[uVar59] & uVar66) == 0 |
               *(byte *)((long)extraout_x11_00 + (ulong)uVar59);
          uVar62 = uVar59 + 1;
          if (uVar62 < uVar58) {
            *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                 ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                 *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
            uVar62 = uVar59 + 2;
            if (uVar62 < uVar58) {
              *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                   ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                   *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
              uVar62 = uVar59 + 3;
              if (uVar62 < uVar58) {
                *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                     ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                     *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                uVar62 = uVar59 + 4;
                if (uVar62 < uVar58) {
                  *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                       ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                       *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                  uVar62 = uVar59 + 5;
                  if (uVar62 < uVar58) {
                    *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                         ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                         *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                    uVar62 = uVar59 + 6;
                    if (uVar62 < uVar58) {
                      *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                           ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                           *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                      uVar62 = uVar59 + 7;
                      if (uVar62 < uVar58) {
                        *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                             ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                             *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                        uVar62 = uVar59 + 8;
                        if (uVar62 < uVar58) {
                          *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                               ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                               *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                          uVar62 = uVar59 + 9;
                          if (uVar62 < uVar58) {
                            *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                                 ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                                 *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                            uVar62 = uVar59 + 10;
                            if (uVar62 < uVar58) {
                              *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                                   ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0 |
                                   *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                              uVar62 = uVar59 + 0xb;
                              if (uVar62 < uVar58) {
                                *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                                     ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) == 0
                                     | *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                                uVar62 = uVar59 + 0xc;
                                if (uVar62 < uVar58) {
                                  *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                                       ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66) ==
                                       0 | *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                                  uVar62 = uVar59 + 0xd;
                                  if (uVar62 < uVar58) {
                                    *(byte *)((long)extraout_x11_00 + (ulong)uVar62) =
                                         ((byte)(*(undefined (*) [16])local_250)[uVar62] & uVar66)
                                         == 0 | *(byte *)((long)extraout_x11_00 + (ulong)uVar62);
                                    uVar59 = uVar59 + 0xe;
                                    if (uVar59 < uVar58) {
                                      *(byte *)((long)extraout_x11_00 + (ulong)uVar59) =
                                           ((byte)(*(undefined (*) [16])local_250)[uVar59] & uVar66)
                                           == 0 | *(byte *)((long)extraout_x11_00 + (ulong)uVar59);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          puVar51 = extraout_x11_00 + 2;
          pauVar23 = (undefined (*) [16])local_250;
          while( true ) {
            puVar31 = puVar51;
            auVar72 = *pauVar23;
            uVar90 = puVar30[1];
            uVar20 = *puVar30;
            bVar74 = bVar60 & auVar72[1];
            bVar76 = bVar60 & auVar72[9];
            auVar87._6_2_ = 0;
            auVar87._0_6_ =
                 (uint6)CONCAT14(bVar74,(uint)CONCAT12(bVar74,(ushort)(bVar60 & auVar72[0]))) &
                 0xffff0000ffff;
            auVar87[8] = bVar60 & auVar72[2];
            auVar87._9_3_ = 0;
            auVar87[12] = bVar60 & auVar72[3];
            auVar87._13_3_ = 0;
            auVar83._6_2_ = 0;
            auVar83._0_6_ =
                 (uint6)CONCAT14(bVar76,(uint)CONCAT12(bVar76,(ushort)(bVar60 & auVar72[8]))) &
                 0xffff0000ffff;
            auVar83[8] = bVar60 & auVar72[10];
            auVar83._9_3_ = 0;
            auVar83[12] = bVar60 & auVar72[11];
            auVar83._13_3_ = 0;
            auVar79._1_3_ = 0;
            auVar79[0] = bVar60 & auVar72[4];
            auVar79[4] = bVar60 & auVar72[5];
            auVar79._5_3_ = 0;
            auVar79[8] = bVar60 & auVar72[6];
            auVar79._9_3_ = 0;
            auVar79[12] = bVar60 & auVar72[7];
            auVar79._13_3_ = 0;
            auVar71._1_3_ = 0;
            auVar71[0] = bVar60 & auVar72[12];
            auVar71[4] = bVar60 & auVar72[13];
            auVar71._5_3_ = 0;
            auVar71[8] = bVar60 & auVar72[14];
            auVar71._9_3_ = 0;
            auVar71[12] = bVar60 & auVar72[15];
            auVar71._13_3_ = 0;
            auVar88 = NEON_cmeq(auVar87,0,2);
            auVar84 = NEON_cmeq(auVar83,0,2);
            auVar80 = NEON_cmeq(auVar79,0,2);
            auVar72 = NEON_cmeq(auVar71,0,2);
            uVar81 = CONCAT14(auVar84[4],(uint)(auVar84[0] & 1)) & 0x1ffffffff;
            uVar77 = CONCAT14(auVar80[4],(uint)(auVar80[0] & 1)) & 0x1ffffffff;
            uVar68 = CONCAT14(auVar72[4],(uint)(auVar72[0] & 1)) & 0x1ffffffff;
            uVar17 = CONCAT16(auVar84[12],
                              (uint6)(CONCAT14(auVar84[8],
                                               (uint)CONCAT12((char)(uVar81 >> 0x20),(short)uVar81))
                                     & 0x1ffffffff)) & 0x1ffffffffffff;
            uVar46 = CONCAT17(auVar80[12],
                              CONCAT16(auVar80[8],
                                       CONCAT15((char)(uVar77 >> 0x20),
                                                CONCAT14((char)uVar77,
                                                         CONCAT13(auVar88[12],
                                                                  CONCAT12(auVar88[8],
                                                                           CONCAT11(auVar88[4],
                                                                                    auVar88[0]))))))
                             ) & 0x101ffff01010101;
            auVar73._0_8_ =
                 CONCAT17((byte)(uVar46 >> 0x38) | (byte)((ulong)uVar20 >> 0x38),
                          CONCAT16((byte)(uVar46 >> 0x30) | (byte)((ulong)uVar20 >> 0x30),
                                   CONCAT15((byte)(uVar46 >> 0x28) | (byte)((ulong)uVar20 >> 0x28),
                                            CONCAT14((byte)(uVar46 >> 0x20) |
                                                     (byte)((ulong)uVar20 >> 0x20),
                                                     CONCAT13((byte)(uVar46 >> 0x18) |
                                                              (byte)((ulong)uVar20 >> 0x18),
                                                              CONCAT12((byte)(uVar46 >> 0x10) |
                                                                       (byte)((ulong)uVar20 >> 0x10)
                                                                       ,CONCAT11((byte)(uVar46 >> 8)
                                                                                 | (byte)((ulong)
                                                  uVar20 >> 8),(byte)uVar46 | (byte)uVar20)))))));
            auVar73[8] = (byte)uVar17 | (byte)uVar90;
            auVar73[9] = (byte)(uVar17 >> 0x10) | (byte)((ulong)uVar90 >> 8);
            auVar73[10] = (byte)(uVar17 >> 0x20) | (byte)((ulong)uVar90 >> 0x10);
            auVar73[11] = (byte)(uVar17 >> 0x30) | (byte)((ulong)uVar90 >> 0x18);
            auVar73[12] = (byte)uVar68 | (byte)((ulong)uVar90 >> 0x20);
            auVar73[13] = (byte)(uVar68 >> 0x20) | (byte)((ulong)uVar90 >> 0x28);
            auVar73[14] = auVar72[8] & 1 | (byte)((ulong)uVar90 >> 0x30);
            auVar73[15] = auVar72[12] & 1 | (byte)((ulong)uVar90 >> 0x38);
            puVar30[1] = auVar73._8_8_;
            *puVar30 = auVar73._0_8_;
            if (puVar31 == extraout_x11_00 + 2 + (ulong)((bVar75 >> 4) - 1) * 2) break;
            puVar51 = puVar31 + 2;
            pauVar23 = pauVar23 + 1;
            puVar30 = puVar31;
          }
          uVar59 = uVar58 & 0xfffffff0;
          if ((bVar75 & 0xf) != 0) goto LAB_0015cd80;
        }
        cVar61 = '\x04';
        puVar30 = extraout_x11_00;
        if ((bVar50 & 1) != 0) {
          cVar61 = '\x05';
        }
LAB_0015b07c:
        uVar46 = 0;
        uVar66 = 0;
        puVar22 = puVar54;
LAB_0015b088:
        iVar53 = (int)uVar46;
        uVar63 = (ulong)uVar66;
        lVar64 = 0;
        uVar59 = uVar66;
        while( true ) {
          uVar66 = uVar59 + 1;
          cVar33 = (char)uVar46;
          cVar15 = (char)uVar59;
          if (*(byte *)((long)puVar30 + lVar64 + uVar63) != 0) break;
          if (pbVar32[lVar64 + uVar63] != 0) {
            puVar26 = puVar22;
            cVar37 = '\0';
            if (uVar59 != 0) {
              puVar26 = puVar22 + 2;
              *puVar22 = uVar67;
              *(byte *)(puVar22 + 1) = bVar49;
              *(byte *)((long)puVar22 + 5) = bVar45 + cVar33 * '\x04';
              *(char *)((long)puVar22 + 6) = cVar15 - cVar33;
              *(undefined *)((long)puVar22 + 7) = uVar39;
              cVar37 = cVar15;
            }
            *puVar26 = uVar67;
            *(byte *)(puVar26 + 1) = bVar36 + 4;
            *(byte *)((long)puVar26 + 5) = bVar45 + cVar37 * '\x04';
            *(undefined *)((long)puVar26 + 7) = uVar39;
            puVar26 = puVar26 + 2;
            goto joined_r0x0015d0d8;
          }
          lVar64 = lVar64 + 1;
          uVar59 = uVar66;
          if (uVar58 <= uVar66) goto LAB_0015b128;
        }
        puVar26 = puVar22;
        if (uVar59 != 0) {
          puVar26 = puVar22 + 2;
          *puVar22 = uVar67;
          *(byte *)(puVar22 + 1) = bVar49;
          *(byte *)((long)puVar22 + 5) = bVar45 + cVar33 * '\x04';
          *(char *)((long)puVar22 + 6) = cVar15 - cVar33;
          *(undefined *)((long)puVar22 + 7) = uVar39;
        }
joined_r0x0015d0d8:
        if (uVar66 < uVar58) {
          uVar63 = (ulong)uVar66;
          lVar64 = 0;
          uVar46 = uVar63;
          puVar22 = puVar26;
          do {
            iVar53 = (int)uVar46;
            puVar26 = puVar22;
            if (*(byte *)((long)puVar30 + lVar64 + uVar63) == 0) {
              if (pbVar32[lVar64 + uVar63] == 0) goto code_r0x0015b11c;
              puVar26 = puVar22 + 2;
              *puVar22 = uVar67;
              *(byte *)(puVar22 + 1) = bVar36 + 4;
              *(byte *)((long)puVar22 + 5) = bVar45 + (char)uVar46 * '\x04';
              *(undefined *)((long)puVar22 + 7) = uVar39;
            }
            uVar46 = (ulong)(iVar53 + 1U);
            lVar64 = lVar64 + 1;
            puVar22 = puVar26;
            if (uVar58 <= iVar53 + 1U) break;
          } while( true );
        }
        *(undefined4 *)(param_1 + 0x648) = 1;
        if (puVar26 != puVar54) goto LAB_0015d054;
        goto LAB_0015b160;
      }
      cVar61 = '\x04';
      puVar22 = extraout_x14_00;
      puVar30 = extraout_x11_00;
      if ((bVar50 & 1) != 0) {
        cVar61 = '\x05';
      }
      goto LAB_0015b138;
    }
LAB_0015bef4:
    bVar36 = (&face_mask_flip_table_11811)[uVar63];
    bVar60 = *(byte *)(lVar21 + -1);
    uVar59 = local_3ae4 - 2;
    uVar58 = uVar66 ^ bVar36;
    if (bVar60 == 0) {
      uVar58 = uVar66;
    }
    if (0 < (int)uVar59) {
      lVar64 = param_1 + 0x1290 + (ulong)bVar45;
      *(char *)(lVar21 + -2) = (char)uVar59;
      bVar18 = true;
      pbVar24 = (byte *)(lVar64 + 3);
      puVar51 = puVar30;
      pbVar52 = pbVar32;
      bVar50 = *(byte *)(lVar64 + 2);
      bVar75 = *(byte *)(param_1 + 0x1290 + uVar46);
      bVar74 = *(byte *)(lVar64 + 1);
      do {
        bVar16 = bVar50;
        bVar76 = bVar75 & bVar16 & bVar74;
        pbVar44 = pbVar24 + 1;
        bVar50 = *pbVar24;
        *pbVar52 = bVar75 | bVar74 | bVar16;
        *(byte *)puVar51 = bVar76;
        bVar18 = (bool)(bVar18 & bVar76 != 0);
        pbVar24 = pbVar44;
        puVar51 = (undefined8 *)((long)puVar51 + 1);
        pbVar52 = pbVar52 + 1;
        bVar75 = bVar74;
        bVar74 = bVar16;
      } while (pbVar44 != (byte *)(lVar64 + (ulong)(local_3ae4 - 3) + 4));
      if (bVar18) goto LAB_0015b160;
      if (uVar58 == 3) {
        bVar50 = bVar49 & 3;
        cVar61 = '\x04';
        if ((bVar49 & 1) != 0) {
          cVar61 = '\x05';
        }
LAB_0015bfb0:
        cVar33 = (bVar49 & 1) + 4;
        uVar46 = 0;
        uVar66 = 0;
        puVar22 = puVar54;
LAB_0015bfbc:
        iVar53 = (int)uVar46;
        uVar63 = (ulong)uVar66;
        lVar64 = 0;
        uVar58 = uVar66;
        while( true ) {
          uVar66 = uVar58 + 1;
          bVar36 = (byte)uVar46;
          bVar75 = (byte)uVar58;
          if (*(byte *)((long)puVar30 + lVar64 + uVar63) != 0) break;
          if (pbVar32[lVar64 + uVar63] != 0) {
            puVar26 = puVar22;
            bVar74 = 0;
            if (uVar58 != 0) {
              puVar26 = puVar22 + 2;
              *(byte *)((long)puVar22 + 7) = bVar60 ^ bVar36 & 1;
              *puVar22 = uVar67;
              *(byte *)(puVar22 + 1) = bVar50;
              *(byte *)((long)puVar22 + 5) = bVar45 + bVar36;
              *(byte *)((long)puVar22 + 6) = bVar75 - bVar36;
              bVar74 = bVar75;
            }
            *puVar26 = uVar67;
            *(char *)(puVar26 + 1) = cVar33;
            *(byte *)((long)puVar26 + 5) = bVar45 + bVar74;
            *(byte *)((long)puVar26 + 7) = bVar60 ^ bVar74 & 1;
            puVar26 = puVar26 + 2;
            goto joined_r0x0015d89c;
          }
          lVar64 = lVar64 + 1;
          uVar58 = uVar66;
          if (uVar59 <= uVar66) goto LAB_0015c06c;
        }
        puVar26 = puVar22;
        if (uVar58 != 0) {
          puVar26 = puVar22 + 2;
          *puVar22 = uVar67;
          *(byte *)(puVar22 + 1) = bVar50;
          *(byte *)((long)puVar22 + 5) = bVar45 + bVar36;
          *(byte *)((long)puVar22 + 6) = bVar75 - bVar36;
          *(byte *)((long)puVar22 + 7) = bVar60 ^ bVar36 & 1;
        }
joined_r0x0015d89c:
        if (uVar66 < uVar59) {
          uVar63 = (ulong)uVar66;
          lVar64 = 0;
          puVar22 = puVar26;
          uVar46 = uVar63;
          do {
            iVar53 = (int)uVar46;
            puVar26 = puVar22;
            if (*(byte *)((long)puVar30 + lVar64 + uVar63) == 0) {
              if (pbVar32[lVar64 + uVar63] == 0) goto code_r0x0015c060;
              puVar26 = puVar22 + 2;
              *(byte *)((long)puVar22 + 7) = bVar60 ^ (byte)uVar46 & 1;
              *puVar22 = uVar67;
              *(char *)(puVar22 + 1) = cVar33;
              *(byte *)((long)puVar22 + 5) = bVar45 + (byte)uVar46;
            }
            uVar46 = (ulong)(iVar53 + 1U);
            lVar64 = lVar64 + 1;
            puVar22 = puVar26;
            if (uVar59 <= iVar53 + 1U) break;
          } while( true );
        }
        *(undefined4 *)(param_1 + 0x648) = 1;
        goto LAB_0015c0a0;
      }
      lVar21 = param_1 + 0x650 + uVar46 * 0x10;
      pbVar32 = local_250;
      lVar27 = lVar21;
      do {
        lVar64 = lVar27 + 0x10;
        geometry_backface_test_single_constprop_0(lVar27,pbVar32);
        pbVar32 = (byte *)(extraout_x1_01 + 1);
        lVar27 = lVar64;
      } while (lVar64 != lVar21 + ((ulong)(local_3ae4 - 3) + 1) * 0x10);
      uVar59 = (uint)*(byte *)(extraout_x10_02 + -2);
      bVar49 = *(byte *)(extraout_x10_02 + -4);
      bVar45 = *(byte *)(extraout_x10_02 + -3);
      bVar60 = *(byte *)(extraout_x10_02 + -1);
      uVar67 = *(uint *)(extraout_x10_02 + -8);
      bVar50 = bVar49 & 3;
      lVar21 = extraout_x10_02;
      pbVar32 = extraout_x12_02;
      puVar54 = extraout_x14_02;
      puVar55 = extraout_x15_02;
      lVar27 = extraout_x18_02;
      local_3ae4 = extraout_w13_02;
      if (uVar59 != 0) {
        puVar51 = (undefined8 *)((long)extraout_x11_02 + 1);
        pbVar24 = local_250;
        while( true ) {
          puVar31 = puVar51;
          *(byte *)puVar30 = (*pbVar24 & uVar58) == 0 | *(byte *)puVar30;
          uVar58 = uVar58 ^ bVar36;
          if (puVar31 ==
              (undefined8 *)((ulong)(uVar59 - 1) + (long)(undefined8 *)((long)extraout_x11_02 + 1)))
          break;
          puVar51 = (undefined8 *)((long)puVar31 + 1);
          pbVar24 = pbVar24 + 1;
          puVar30 = puVar31;
        }
        cVar61 = '\x04';
        puVar30 = extraout_x11_02;
        if ((bVar49 & 1) != 0) {
          cVar61 = '\x05';
        }
        goto LAB_0015bfb0;
      }
      cVar61 = '\x04';
      if ((bVar49 & 1) != 0) {
        cVar61 = '\x05';
      }
      cVar33 = '\0';
      puVar22 = extraout_x14_02;
      puVar30 = extraout_x11_02;
      goto LAB_0015c084;
    }
    goto LAB_0015b160;
  }
  *(undefined4 *)(param_1 + 0x30c) = 0;
  uVar63 = 0;
  local_3ae4 = 0;
  *(undefined *)(param_1 + ((ulong)*(uint *)(param_1 + 0x308) + 0xffe) * 8 + 0xe) = 0xff;
  *(undefined4 *)(param_1 + 0x64c) = 0;
  goto LAB_0015b3ec;
code_r0x0015bab4:
  uVar66 = iVar53 + 1;
  if (uVar58 <= uVar66) goto LAB_0015bac0;
  goto LAB_0015ba1c;
LAB_0015bac0:
  bVar50 = (char)uVar66 - (char)iVar53;
  bVar45 = bVar45 + (char)iVar53 * '\x02';
LAB_0015bad4:
  *puVar22 = uVar67;
  *(byte *)(puVar22 + 1) = bVar36;
LAB_0015bedc:
  *(byte *)((long)puVar22 + 5) = bVar45;
  *(byte *)((long)puVar22 + 6) = bVar50;
  *(undefined *)((long)puVar22 + 7) = uVar39;
  puVar26 = puVar22 + 2;
  *(undefined4 *)(param_1 + 0x648) = 0;
LAB_0015cfd8:
  if (puVar26 != puVar54) {
    if ((*(char *)((long)puVar54 + 5) == *(char *)(lVar21 + -3)) &&
       (*(char *)(puVar54 + 1) != cVar61)) {
      *(byte *)(puVar54 + 1) = bVar49;
      puVar54 = puVar26;
LAB_0015c0d0:
      lVar21 = lVar21 + 8;
      puVar26 = puVar54;
      if (lVar21 == lVar27) goto LAB_0015b16c;
      goto LAB_0015afb8;
    }
LAB_0015cff0:
    lVar21 = lVar21 + 8;
    puVar54 = puVar26;
    if (lVar21 == lVar27) goto LAB_0015b16c;
    goto LAB_0015afb8;
  }
LAB_0015b160:
  lVar21 = lVar21 + 8;
  puVar26 = puVar54;
  if (lVar21 == lVar27) goto LAB_0015b16c;
  goto LAB_0015afb8;
code_r0x0015beb0:
  uVar66 = uVar62 + 1;
  if (uVar58 <= uVar66) goto LAB_0015bebc;
  goto LAB_0015be10;
LAB_0015bebc:
  bVar50 = (char)uVar66 - (char)uVar62;
  bVar45 = bVar45 + (char)uVar62 * '\x03';
LAB_0015bed4:
  *puVar22 = uVar67;
  *(byte *)(puVar22 + 1) = bVar75;
  goto LAB_0015bedc;
code_r0x0015b11c:
  uVar66 = iVar53 + 1;
  if (uVar58 <= uVar66) goto LAB_0015b128;
  goto LAB_0015b088;
LAB_0015b128:
  bVar45 = bVar45 + (char)iVar53 * '\x04';
  bVar75 = (char)uVar66 - (char)iVar53;
LAB_0015b138:
  *puVar22 = uVar67;
  *(byte *)(puVar22 + 1) = bVar49;
  *(byte *)((long)puVar22 + 5) = bVar45;
  *(byte *)((long)puVar22 + 6) = bVar75;
  *(undefined *)((long)puVar22 + 7) = uVar39;
  *(undefined4 *)(param_1 + 0x648) = 0;
  puVar26 = puVar22 + 2;
  if (puVar26 != puVar54) {
LAB_0015d054:
    if ((*(char *)((long)puVar54 + 5) == *(char *)(lVar21 + -3)) &&
       (*(char *)(puVar54 + 1) != cVar61)) {
      *(byte *)(puVar54 + 1) = bVar50;
    }
    lVar21 = lVar21 + 8;
    puVar54 = puVar26;
    if (lVar21 == lVar27) goto LAB_0015b16c;
    goto LAB_0015afb8;
  }
  goto LAB_0015b160;
code_r0x0015c060:
  uVar66 = iVar53 + 1;
  if (uVar59 <= uVar66) goto LAB_0015c06c;
  goto LAB_0015bfbc;
LAB_0015c06c:
  bVar36 = (byte)iVar53;
  bVar45 = bVar45 + bVar36;
  cVar33 = (char)uVar66 - bVar36;
  bVar60 = bVar60 ^ bVar36 & 1;
LAB_0015c084:
  puVar26 = puVar22 + 2;
  *puVar22 = uVar67;
  *(byte *)(puVar22 + 1) = bVar50;
  *(byte *)((long)puVar22 + 5) = bVar45;
  *(char *)((long)puVar22 + 6) = cVar33;
  *(byte *)((long)puVar22 + 7) = bVar60;
  *(undefined4 *)(param_1 + 0x648) = 0;
LAB_0015c0a0:
  if (puVar26 == puVar54) goto LAB_0015b160;
  if ((*(char *)((long)puVar54 + 5) == *(char *)(lVar21 + -3)) && (*(char *)(puVar54 + 1) != cVar61)
     ) {
    *(byte *)(puVar54 + 1) = bVar49;
    puVar54 = puVar26;
    goto LAB_0015c0d0;
  }
  goto LAB_0015cff0;
LAB_0015b16c:
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined *)(param_1 + ((ulong)*(uint *)(param_1 + 0x308) + 0xffe) * 8 + 0xe) = 0xff;
  *(undefined4 *)(param_1 + 0x64c) = 0;
  uVar46 = (long)puVar26 - (long)puVar55 >> 3;
  uVar63 = uVar46 & 0xffffffff;
  iVar53 = (int)uVar46;
  if (iVar53 != 0) {
    puVar54 = puVar55 + ((ulong)(iVar53 - 1) + 1) * 2;
    do {
      bVar45 = *(byte *)(puVar55 + 1);
      bVar49 = *(byte *)((long)puVar55 + 5);
      uVar46 = (ulong)bVar49;
      bVar60 = *(byte *)((long)puVar55 + 6);
      uVar66 = (uint)bVar60;
      uVar58 = (uint)bVar49;
      uVar67 = (uint)bVar49;
      if (bVar45 == 4) {
        uVar46 = (ulong)(uVar58 + 2);
        bVar18 = *(char *)((long)puVar55 + 7) != '\0';
        uVar66 = uVar58;
        if (bVar18) {
          uVar66 = uVar67 + 1;
        }
        uVar63 = (ulong)uVar66;
        lVar21 = param_1 + 0x650;
        if (!bVar18) {
          uVar67 = uVar58 + 1;
        }
        uVar34 = (ulong)uVar67;
        auVar72 = *(undefined (*) [16])(lVar21 + uVar63 * 0x10);
        uStack_3ad8 = auVar72._8_8_;
        local_3ae0 = auVar72._0_8_;
        auVar72 = *(undefined (*) [16])(lVar21 + uVar34 * 0x10);
        auVar80 = *(undefined (*) [16])(lVar21 + uVar46 * 0x10);
        uVar67 = 0;
        local_3ad0 = *(undefined4 *)(param_1 + uVar63 * 4 + 0x14dc);
        local_3acc = *(undefined2 *)(param_1 + uVar63 * 2 + 0x1354);
        local_3aca = *(undefined *)(param_1 + uVar63 + 0x1290);
        local_3ab8 = *(undefined4 *)(param_1 + uVar34 * 4 + 0x14dc);
        uStack_3ab4 = *(undefined2 *)(param_1 + uVar34 * 2 + 0x1354);
        uStack_3ab2 = *(undefined *)(param_1 + uVar34 + 0x1290);
        local_3aa0 = *(undefined4 *)(param_1 + uVar46 * 4 + 0x14dc);
        local_3a9c = *(undefined2 *)(param_1 + uVar46 * 2 + 0x1354);
        local_3a9a = *(undefined *)(param_1 + uVar46 + 0x1290);
        uStack_3ac0 = auVar72._8_8_;
        local_3ac8 = auVar72._0_8_;
        uStack_3aa8 = auVar80._8_8_;
        local_3ab0 = auVar80._0_8_;
        puVar30 = &local_3ae0;
        puVar51 = &local_3358;
        uVar66 = 3;
        do {
          puVar31 = puVar51;
          puVar51 = puVar30;
          uVar58 = 0;
          uVar59 = 0;
          puVar30 = puVar51;
          do {
            bVar45 = *(byte *)((long)puVar30 + 0x16) >> (ulong)(uVar67 & 0x1f);
            while( true ) {
              uVar59 = uVar59 + 1;
              if (uVar59 == uVar66) break;
              puVar48 = puVar30 + 3;
              uVar62 = (*(byte *)((long)puVar30 + 0x2e) >> (ulong)(uVar67 & 0x1f) & 1) << 1 |
                       bVar45 & 1;
              if (uVar62 == 1) goto LAB_0015c2f0;
              if (uVar62 == 2) goto LAB_0015c2b8;
              if (uVar62 == 0) goto LAB_0015c288;
              bVar45 = *(byte *)((long)puVar30 + 0x2e) >> (ulong)(uVar67 & 0x1f);
              puVar30 = puVar48;
            }
            uVar62 = (*(byte *)((long)puVar51 + 0x16) >> (ulong)(uVar67 & 0x1f) & 1) << 1 |
                     bVar45 & 1;
            puVar48 = puVar51;
            if (uVar62 == 1) {
LAB_0015c2f0:
              uVar46 = (ulong)uVar58;
              uVar58 = uVar58 + 1;
              geometry_clipped_vertex_interpolate_edge(puVar31 + uVar46 * 3,puVar48,puVar30,uVar67);
            }
            else if (uVar62 == 2) {
LAB_0015c2b8:
              puVar43 = puVar31 + (ulong)uVar58 * 3;
              uVar62 = uVar58 + 1;
              uVar20 = puVar30[1];
              uVar58 = uVar58 + 2;
              *puVar43 = *puVar30;
              puVar43[1] = uVar20;
              puVar43[2] = puVar30[2];
              geometry_clipped_vertex_interpolate_edge
                        (puVar31 + (ulong)uVar62 * 3,puVar30,puVar48,uVar67);
            }
            else {
              if (uVar62 != 0) break;
LAB_0015c288:
              puVar48 = puVar31 + (ulong)uVar58 * 3;
              uVar20 = puVar30[1];
              uVar58 = uVar58 + 1;
              *puVar48 = *puVar30;
              puVar48[1] = uVar20;
              puVar48[2] = puVar30[2];
            }
            puVar30 = puVar30 + 3;
          } while (uVar59 != uVar66);
          if (uVar58 == 0) goto joined_r0x0015b1fc;
          uVar67 = uVar67 + 1;
          puVar30 = puVar31;
          uVar66 = uVar58;
        } while (uVar67 != 6);
        bVar45 = *(byte *)(param_1 + 0x9ac0);
        uVar46 = (ulong)bVar45;
        uVar66 = *(uint *)(param_1 + (long)(int)(uint)bVar45 * 0x18004 + 0x21ad4);
        uVar67 = uVar66 + uVar58;
        if (*(short *)(param_1 + 0x9aa0) != 0x800) {
          if (0x1800 < uVar67) goto joined_r0x0015b1fc;
          uVar59 = *(uint *)(param_1 + 0x30c);
          uVar67 = *(byte *)((long)puVar55 + 5) + 2;
          uVar62 = *puVar55;
          if (*(byte *)(param_1 + ((ulong)uVar59 + 0xffe) * 8 + 0xe) < uVar67) {
            puVar22 = (uint *)(param_1 + ((ulong)uVar59 + 0xfff) * 8);
            do {
              uVar56 = *(ushort *)(puVar22 + 1);
              uVar57 = *puVar22;
              uVar59 = uVar59 + 1;
              *(uint *)(param_1 + 0x30c) = uVar59;
              *(uint *)(param_1 + 0x63c) = uVar57;
              *(uint *)(param_1 + 0x640) = (uint)uVar56;
              pbVar32 = (byte *)((long)puVar22 + 0xe);
              puVar22 = puVar22 + 2;
            } while (*pbVar32 < uVar67);
          }
          else {
            uVar56 = *(ushort *)(param_1 + 0x640);
            uVar57 = *(uint *)(param_1 + 0x63c);
          }
          lVar21 = (uVar46 * 0x2000 + (ulong)bVar45) * 8;
          if (((uVar62 >> 0x10 & 0x1f) - 1 < 0x1e) ||
             (uVar67 = uVar57 >> 0x1a & 7, uVar67 == 1 || uVar67 == 6)) {
            lVar21 = lVar21 + 0x59af0;
          }
          else {
            lVar21 = lVar21 + 0x39ae0;
          }
          lVar21 = param_1 + lVar21;
          uVar67 = *(uint *)(lVar21 + 0x10000);
          lVar64 = (ulong)uVar67 * 0x20;
          lVar27 = lVar21 + lVar64;
          *(uint *)(lVar27 + 4) = uVar62;
          *(uint *)(lVar21 + lVar64) = uVar57;
          *(uint *)(lVar27 + 8) = uVar58;
          *(ushort *)(lVar27 + 0x18) = uVar56;
          *(short *)(lVar27 + 0x1a) = (short)uVar66;
          sVar12 = *(short *)(param_1 + 0x9aa0);
          *(uint *)(lVar21 + 0x10000) = uVar67 + 1;
          *(short *)(param_1 + 0x9aa0) = sVar12 + 1;
          uVar46 = (ulong)*(byte *)(param_1 + 0x9ac0);
          uVar66 = *(uint *)(param_1 + (ulong)*(byte *)(param_1 + 0x9ac0) * 0x18004 + 0x21ad4);
          uVar67 = uVar58 + uVar66;
        }
        iVar53 = (int)uVar46;
        if (0x1800 < uVar67) goto joined_r0x0015b1fc;
        lVar27 = (ulong)*(uint *)(param_1 + 0x64c) * 4;
        puVar25 = (undefined4 *)(param_1 + (long)iVar53 * 0x18004 + (ulong)uVar66 * 0x10 + 0x9ad4);
        lVar21 = 0;
        do {
          *(undefined4 *)(*pauVar6 + lVar21 * 4 + lVar27) = *(undefined4 *)puVar31;
          uVar40 = *(undefined4 *)(puVar31 + 1);
          *(undefined4 *)(lVar35 + lVar27 + lVar21 * 4) = *(undefined4 *)((long)puVar31 + 4);
          *(undefined4 *)(lVar29 + lVar27 + lVar21 * 4) = uVar40;
          uVar40 = *(undefined4 *)((long)puVar31 + 0xc);
          uVar10 = *(undefined4 *)(puVar31 + 2);
          *(undefined4 *)(lVar7 + lVar27 + lVar21 * 4) = uVar40;
          uVar13 = *(undefined2 *)((long)puVar31 + 0x14);
          *puVar25 = uVar40;
          *(undefined2 *)((long)puVar25 + 10) = uVar13;
          *(short *)(puVar25 + 3) = (short)uVar10;
          *(short *)((long)puVar25 + 0xe) = (short)((uint)uVar10 >> 0x10);
          lVar21 = lVar21 + 1;
          puVar31 = puVar31 + 3;
          puVar25 = puVar25 + 4;
        } while ((uint)lVar21 < uVar58);
LAB_0015c6ac:
        lVar21 = param_1 + (long)iVar53 * 0x18004;
        if (uVar58 == 0) {
          uVar58 = 1;
        }
        iVar53 = *(int *)(lVar21 + 0x21ad4);
        *(uint *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + uVar58;
        *(uint *)(lVar21 + 0x21ad4) = iVar53 + uVar58;
      }
      else if (bVar45 < 5) {
        if (bVar45 == 2) {
          uVar20 = geometry_submit_polygons_constprop_2(param_1,puVar55,0);
          geometry_submit_vertexes(uVar20,uVar46,uVar66 + 2);
        }
        else if (bVar45 == 3) {
          uVar20 = geometry_submit_polygons_constprop_3(param_1,puVar55,0);
          geometry_submit_vertexes(uVar20,uVar46,(uVar66 + 1) * 2);
        }
        else if (bVar45 == 0) {
          uVar58 = *puVar55;
          uVar59 = *(uint *)(param_1 + 0x30c);
          uVar63 = (ulong)uVar59;
          uVar14 = (uVar58 >> 0x10 & 0x1f) - 1;
          uVar62 = *(uint *)(param_1 + 0x63c);
          uVar57 = *(uint *)(param_1 + 0x640);
          iVar53 = *(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x9ac0) * 0x18004 + 0x21ad4);
          lVar21 = (ulong)*(byte *)(param_1 + 0x9ac0) * 0x10008;
          if ((uVar14 < 0x1e) || (uVar41 = uVar62 >> 0x1a & 7, uVar41 == 1 || uVar41 == 6)) {
            lVar21 = lVar21 + 0x59af0;
          }
          else {
            lVar21 = lVar21 + 0x39ae0;
          }
          lVar21 = param_1 + lVar21;
          uVar56 = *(ushort *)(param_1 + 0x9aa0);
          uVar40 = 3;
          if (*(char *)((long)puVar55 + 7) != '\0') {
            uVar40 = 0x43;
          }
          uVar41 = uVar66;
          if (0x800 < uVar66 + uVar56) {
            uVar41 = 0x800 - uVar56;
          }
          if (uVar41 * 3 + iVar53 < 0x1801) {
LAB_0015c3b0:
            if (0 < (int)uVar41) {
              puVar22 = (uint *)(param_1 + (uVar63 + 0xfff) * 8);
              uVar42 = (uint)*(byte *)(param_1 + (uVar63 + 0xffe) * 8 + 0xe);
              iVar5 = uVar41 * 3 + iVar53;
              uVar67 = uVar67 + 2;
              do {
                uVar56 = (ushort)uVar57;
                if (uVar42 < uVar67) {
                  lVar27 = (ulong)*(byte *)(param_1 + 0x9ac0) * 0x10008;
                  do {
                    uVar62 = *puVar22;
                    uVar56 = *(ushort *)(puVar22 + 1);
                    uVar57 = (uint)uVar56;
                    uVar63 = (ulong)((int)uVar63 + 1);
                    uVar59 = uVar62 >> 0x1a & 7;
                    pbVar32 = (byte *)((long)puVar22 + 0xe);
                    uVar42 = (uint)*pbVar32;
                    puVar22 = puVar22 + 2;
                    lVar21 = lVar27 + 0x39ae0;
                    if ((uVar59 == 6 || uVar59 == 1) || uVar14 < 0x1e) {
                      lVar21 = lVar27 + 0x59af0;
                    }
                    lVar21 = param_1 + lVar21;
                  } while (*pbVar32 < uVar67);
                }
                uVar59 = (uint)uVar63;
                uVar67 = uVar67 + 3;
                uVar9 = *(uint *)(lVar21 + 0x10000);
                lVar64 = (ulong)uVar9 * 0x20;
                lVar27 = lVar21 + lVar64;
                *(uint *)(lVar27 + 4) = uVar58;
                *(uint *)(lVar21 + lVar64) = uVar62;
                *(undefined4 *)(lVar27 + 8) = uVar40;
                *(ushort *)(lVar27 + 0x18) = uVar56;
                *(short *)(lVar27 + 0x1a) = (short)iVar53;
                *(uint *)(lVar21 + 0x10000) = uVar9 + 1;
                iVar53 = iVar53 + 3;
              } while (iVar53 != iVar5);
              uVar56 = *(ushort *)(param_1 + 0x9aa0);
            }
            *(uint *)(param_1 + 0x30c) = uVar59;
            *(uint *)(param_1 + 0x63c) = uVar62;
            *(uint *)(param_1 + 0x640) = uVar57;
            *(ushort *)(param_1 + 0x9aa0) = uVar56 + (short)uVar41;
          }
          else if (2 < 0x1800U - iVar53) {
            uVar41 = (0x17fdU - iVar53) / 3;
            goto LAB_0015c3b0;
          }
          geometry_submit_vertexes(param_1,uVar46,uVar66 * 3);
        }
        else {
          if (bVar45 != 1) goto joined_r0x0015b1fc;
          uVar58 = *puVar55;
          uVar59 = *(uint *)(param_1 + 0x30c);
          uVar63 = (ulong)uVar59;
          uVar14 = (uVar58 >> 0x10 & 0x1f) - 1;
          uVar62 = *(uint *)(param_1 + 0x63c);
          uVar57 = *(uint *)(param_1 + 0x640);
          iVar53 = *(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x9ac0) * 0x18004 + 0x21ad4);
          lVar21 = (ulong)*(byte *)(param_1 + 0x9ac0) * 0x10008;
          if ((uVar14 < 0x1e) || (uVar41 = uVar62 >> 0x1a & 7, uVar41 == 1 || uVar41 == 6)) {
            lVar21 = lVar21 + 0x59af0;
          }
          else {
            lVar21 = lVar21 + 0x39ae0;
          }
          lVar21 = param_1 + lVar21;
          uVar56 = *(ushort *)(param_1 + 0x9aa0);
          uVar40 = 4;
          if (*(char *)((long)puVar55 + 7) != '\0') {
            uVar40 = 0x44;
          }
          if (0x800 < uVar66 + uVar56) {
            uVar66 = 0x800 - uVar56;
          }
          if (iVar53 + uVar66 * 4 < 0x1801) {
LAB_0015b2d4:
            if (0 < (int)uVar66) {
              puVar22 = (uint *)(param_1 + (uVar63 + 0xfff) * 8);
              uVar41 = (uint)*(byte *)(param_1 + (uVar63 + 0xffe) * 8 + 0xe);
              uVar67 = uVar67 + 3;
              iVar5 = iVar53 + uVar66 * 4;
              do {
                uVar56 = (ushort)uVar57;
                if (uVar41 < uVar67) {
                  lVar27 = (ulong)*(byte *)(param_1 + 0x9ac0) * 0x10008;
                  do {
                    uVar62 = *puVar22;
                    uVar56 = *(ushort *)(puVar22 + 1);
                    uVar57 = (uint)uVar56;
                    uVar63 = (ulong)((int)uVar63 + 1);
                    uVar59 = uVar62 >> 0x1a & 7;
                    pbVar32 = (byte *)((long)puVar22 + 0xe);
                    uVar41 = (uint)*pbVar32;
                    puVar22 = puVar22 + 2;
                    lVar21 = lVar27 + 0x39ae0;
                    if ((uVar59 == 6 || uVar59 == 1) || uVar14 < 0x1e) {
                      lVar21 = lVar27 + 0x59af0;
                    }
                    lVar21 = param_1 + lVar21;
                  } while (*pbVar32 < uVar67);
                }
                uVar59 = (uint)uVar63;
                uVar67 = uVar67 + 4;
                uVar42 = *(uint *)(lVar21 + 0x10000);
                lVar64 = (ulong)uVar42 * 0x20;
                lVar27 = lVar21 + lVar64;
                *(uint *)(lVar27 + 4) = uVar58;
                *(uint *)(lVar21 + lVar64) = uVar62;
                *(undefined4 *)(lVar27 + 8) = uVar40;
                *(ushort *)(lVar27 + 0x18) = uVar56;
                *(short *)(lVar27 + 0x1a) = (short)iVar53;
                *(uint *)(lVar21 + 0x10000) = uVar42 + 1;
                iVar53 = iVar53 + 4;
              } while (iVar53 != iVar5);
              uVar56 = *(ushort *)(param_1 + 0x9aa0);
            }
            *(uint *)(param_1 + 0x30c) = uVar59;
            *(uint *)(param_1 + 0x63c) = uVar62;
            *(uint *)(param_1 + 0x640) = uVar57;
            *(ushort *)(param_1 + 0x9aa0) = uVar56 + (short)uVar66;
          }
          else if (3 < 0x1800U - iVar53) {
            uVar66 = 0x17fcU - iVar53 >> 2;
            goto LAB_0015b2d4;
          }
          geometry_submit_vertexes(param_1,uVar46,(ulong)bVar60 << 2);
        }
      }
      else if (bVar45 == 6) {
        uVar20 = geometry_submit_polygons_constprop_2(param_1,puVar55,2);
        geometry_submit_vertexes(uVar20,uVar58 + 2,uVar66);
      }
      else if (bVar45 == 7) {
        uVar20 = geometry_submit_polygons_constprop_3(param_1,puVar55,2);
        geometry_submit_vertexes(uVar20,uVar58 + 2,(ulong)bVar60 << 1);
      }
      else if (bVar45 == 5) {
        uVar63 = (ulong)(uVar58 + 3);
        uVar34 = (ulong)(uVar58 + 2);
        if (*(char *)((long)puVar55 + 7) != '\0') {
          uVar63 = (ulong)(uVar58 + 2);
          uVar34 = (ulong)(uVar58 + 3);
        }
        lVar21 = param_1 + 0x650;
        auVar72 = *(undefined (*) [16])(lVar21 + uVar34 * 0x10);
        auVar80 = *(undefined (*) [16])(lVar21 + uVar63 * 0x10);
        uStack_3aa8 = auVar72._8_8_;
        local_3ab0 = auVar72._0_8_;
        uVar47 = (ulong)(uVar67 + 1);
        auVar72 = *(undefined (*) [16])(lVar21 + (ulong)bVar49 * 0x10);
        auVar84 = *(undefined (*) [16])(lVar21 + (ulong)(uVar67 * 4 + 4) * 4);
        local_3aca = *(undefined *)(param_1 + uVar46 + 0x1290);
        uStack_3ab4 = *(undefined2 *)(param_1 + uVar47 * 2 + 0x1354);
        uVar67 = 0;
        uVar58 = 4;
        uStack_3ad8 = auVar72._8_8_;
        local_3ae0 = auVar72._0_8_;
        local_3ad0 = *(undefined4 *)(param_1 + uVar46 * 4 + 0x14dc);
        local_3acc = *(undefined2 *)(param_1 + uVar46 * 2 + 0x1354);
        uStack_3ac0 = auVar84._8_8_;
        local_3ac8 = auVar84._0_8_;
        local_3ab8 = *(undefined4 *)(param_1 + uVar47 * 4 + 0x14dc);
        uStack_3ab2 = *(undefined *)(param_1 + uVar47 + 0x1290);
        local_3aa0 = *(undefined4 *)(param_1 + uVar34 * 4 + 0x14dc);
        local_3a9c = *(undefined2 *)(param_1 + uVar34 * 2 + 0x1354);
        local_3a9a = *(undefined *)(param_1 + uVar34 + 0x1290);
        uStack_3a90 = auVar80._8_8_;
        local_3a98 = auVar80._0_8_;
        local_3a88 = *(undefined4 *)(param_1 + uVar63 * 4 + 0x14dc);
        local_3a84 = *(undefined2 *)(param_1 + uVar63 * 2 + 0x1354);
        local_3a82 = *(undefined *)(param_1 + uVar63 + 0x1290);
        puVar30 = &local_3ae0;
        puVar51 = &local_3358;
        do {
          puVar31 = puVar51;
          puVar51 = puVar30;
          uVar66 = 0;
          uVar59 = 0;
          puVar30 = puVar51;
          do {
            bVar45 = *(byte *)((long)puVar30 + 0x16) >> (ulong)(uVar67 & 0x1f);
            while( true ) {
              uVar59 = uVar59 + 1;
              if (uVar59 == uVar58) break;
              puVar48 = puVar30 + 3;
              uVar62 = (*(byte *)((long)puVar30 + 0x2e) >> (ulong)(uVar67 & 0x1f) & 1) << 1 |
                       bVar45 & 1;
              if (uVar62 == 1) goto LAB_0015bd44;
              if (uVar62 == 2) goto LAB_0015bd0c;
              if (uVar62 == 0) goto LAB_0015bcdc;
              bVar45 = *(byte *)((long)puVar30 + 0x2e) >> (ulong)(uVar67 & 0x1f);
              puVar30 = puVar48;
            }
            uVar62 = (*(byte *)((long)puVar51 + 0x16) >> (ulong)(uVar67 & 0x1f) & 1) << 1 |
                     bVar45 & 1;
            puVar48 = puVar51;
            if (uVar62 == 1) {
LAB_0015bd44:
              uVar46 = (ulong)uVar66;
              uVar66 = uVar66 + 1;
              geometry_clipped_vertex_interpolate_edge(puVar31 + uVar46 * 3,puVar48,puVar30,uVar67);
            }
            else if (uVar62 == 2) {
LAB_0015bd0c:
              puVar43 = puVar31 + (ulong)uVar66 * 3;
              uVar62 = uVar66 + 1;
              uVar20 = puVar30[1];
              uVar66 = uVar66 + 2;
              *puVar43 = *puVar30;
              puVar43[1] = uVar20;
              puVar43[2] = puVar30[2];
              geometry_clipped_vertex_interpolate_edge
                        (puVar31 + (ulong)uVar62 * 3,puVar30,puVar48,uVar67);
            }
            else {
              if (uVar62 != 0) break;
LAB_0015bcdc:
              puVar48 = puVar31 + (ulong)uVar66 * 3;
              uVar20 = puVar30[1];
              uVar66 = uVar66 + 1;
              *puVar48 = *puVar30;
              puVar48[1] = uVar20;
              puVar48[2] = puVar30[2];
            }
            puVar30 = puVar30 + 3;
          } while (uVar59 != uVar58);
          uVar58 = uVar66;
          if (uVar58 == 0) goto joined_r0x0015b1fc;
          uVar67 = uVar67 + 1;
          puVar30 = puVar31;
        } while (uVar67 != 6);
        bVar45 = *(byte *)(param_1 + 0x9ac0);
        uVar46 = (ulong)bVar45;
        uVar66 = *(uint *)(param_1 + (long)(int)(uint)bVar45 * 0x18004 + 0x21ad4);
        uVar67 = uVar66 + uVar58;
        if (*(short *)(param_1 + 0x9aa0) != 0x800) {
          if (0x1800 < uVar67) goto joined_r0x0015b1fc;
          uVar59 = *(uint *)(param_1 + 0x30c);
          uVar67 = *(byte *)((long)puVar55 + 5) + 3;
          uVar62 = *puVar55;
          if (*(byte *)(param_1 + ((ulong)uVar59 + 0xffe) * 8 + 0xe) < uVar67) {
            puVar22 = (uint *)(param_1 + ((ulong)uVar59 + 0xfff) * 8);
            do {
              uVar56 = *(ushort *)(puVar22 + 1);
              uVar57 = *puVar22;
              uVar59 = uVar59 + 1;
              *(uint *)(param_1 + 0x30c) = uVar59;
              *(uint *)(param_1 + 0x63c) = uVar57;
              *(uint *)(param_1 + 0x640) = (uint)uVar56;
              pbVar32 = (byte *)((long)puVar22 + 0xe);
              puVar22 = puVar22 + 2;
            } while (*pbVar32 < uVar67);
          }
          else {
            uVar56 = *(ushort *)(param_1 + 0x640);
            uVar57 = *(uint *)(param_1 + 0x63c);
          }
          lVar21 = (uVar46 * 0x2000 + (ulong)bVar45) * 8;
          if (((uVar62 >> 0x10 & 0x1f) - 1 < 0x1e) ||
             (uVar67 = uVar57 >> 0x1a & 7, uVar67 == 1 || uVar67 == 6)) {
            lVar21 = lVar21 + 0x59af0;
          }
          else {
            lVar21 = lVar21 + 0x39ae0;
          }
          lVar21 = param_1 + lVar21;
          uVar67 = *(uint *)(lVar21 + 0x10000);
          lVar64 = (ulong)uVar67 * 0x20;
          lVar27 = lVar21 + lVar64;
          *(uint *)(lVar27 + 4) = uVar62;
          *(uint *)(lVar21 + lVar64) = uVar57;
          *(uint *)(lVar27 + 8) = uVar58;
          *(ushort *)(lVar27 + 0x18) = uVar56;
          *(short *)(lVar27 + 0x1a) = (short)uVar66;
          sVar12 = *(short *)(param_1 + 0x9aa0);
          *(uint *)(lVar21 + 0x10000) = uVar67 + 1;
          *(short *)(param_1 + 0x9aa0) = sVar12 + 1;
          uVar46 = (ulong)*(byte *)(param_1 + 0x9ac0);
          uVar66 = *(uint *)(param_1 + (ulong)*(byte *)(param_1 + 0x9ac0) * 0x18004 + 0x21ad4);
          uVar67 = uVar58 + uVar66;
        }
        iVar53 = (int)uVar46;
        if (uVar67 < 0x1801) {
          puVar25 = (undefined4 *)(param_1 + (long)iVar53 * 0x18004 + (ulong)uVar66 * 0x10 + 0x9ad4)
          ;
          lVar27 = (ulong)*(uint *)(param_1 + 0x64c) * 4;
          lVar21 = 0;
          do {
            *(undefined4 *)(*pauVar6 + lVar21 * 4 + lVar27) = *(undefined4 *)puVar31;
            uVar40 = *(undefined4 *)(puVar31 + 1);
            *(undefined4 *)(lVar35 + lVar27 + lVar21 * 4) = *(undefined4 *)((long)puVar31 + 4);
            *(undefined4 *)(lVar29 + lVar27 + lVar21 * 4) = uVar40;
            uVar40 = *(undefined4 *)((long)puVar31 + 0xc);
            uVar10 = *(undefined4 *)(puVar31 + 2);
            *(undefined4 *)(lVar7 + lVar27 + lVar21 * 4) = uVar40;
            uVar13 = *(undefined2 *)((long)puVar31 + 0x14);
            *puVar25 = uVar40;
            *(undefined2 *)((long)puVar25 + 10) = uVar13;
            *(short *)(puVar25 + 3) = (short)uVar10;
            *(short *)((long)puVar25 + 0xe) = (short)((uint)uVar10 >> 0x10);
            lVar21 = lVar21 + 1;
            puVar31 = puVar31 + 3;
            puVar25 = puVar25 + 4;
          } while ((uint)lVar21 < uVar58);
          goto LAB_0015c6ac;
        }
      }
joined_r0x0015b1fc:
      puVar55 = puVar55 + 2;
    } while (puVar55 != puVar54);
    uVar63 = (ulong)*(uint *)(param_1 + 0x64c);
  }
LAB_0015b3ec:
  local_3b10 = &local_3358;
  puVar30 = local_3350;
  if (((ulong)local_3b10 & 8) == 0) {
    puVar30 = local_3b10;
  }
  lVar27 = (ulong)*(byte *)(param_1 + 0x9ac0) * 0x18004;
  iVar53 = *(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x9ac0) * 0x18004 + 0x21ad4);
  geometry_perspective_reciprocals_asm(puVar30,puVar30 + 0x310,lVar7,uVar63);
  uVar67 = (uint)uVar63;
  uVar46 = (ulong)(iVar53 - uVar67);
  lVar64 = uVar46 * 0x10;
  lVar21 = lVar27 + 0x9ad4 + lVar64;
  puVar25 = (undefined4 *)(param_1 + lVar21);
  if (*(int *)(*(long *)(param_1 + 0x9a30) + 0x85a48) == 0) {
    geometry_perspective_apply_normal_asm(param_1,puVar30,puVar30 + 0x310);
  }
  else {
    geometry_perspective_apply_hires_asm(param_1);
  }
  if (uVar67 != 0) {
    lVar27 = lVar27 + 0x9ad8;
    bVar19 = pauVar6 < (undefined (*) [16])(param_1 + lVar27 + ((uVar63 - 1) + uVar46) * 0x10);
    bVar18 = false;
    if (bVar19) {
      bVar18 = (long)(lVar21 + (uVar63 + 0x185c) * -4) < 0;
    }
    bVar18 = bVar18 != (bVar19 && SBORROW8(lVar21,(uVar63 + 0x185c) * 4));
    if ((bVar18 || uVar67 - 1 < 6) || !bVar18 && uVar67 - 1 == 6) {
      lVar21 = 0;
      do {
        uVar40 = *(undefined4 *)(lVar29 + lVar21 * 4);
        uVar10 = *(undefined4 *)(lVar35 + lVar21 * 4);
        *(short *)(puVar25 + 1) = (short)*(undefined4 *)(*pauVar6 + lVar21 * 4);
        *(short *)((long)puVar25 + 6) = (short)uVar10;
        *(short *)(puVar25 + 2) = (short)uVar40;
        *puVar25 = *(undefined4 *)(lVar7 + lVar21 * 4);
        lVar21 = lVar21 + 1;
        puVar25 = puVar25 + 4;
      } while ((uint)lVar21 < uVar67);
    }
    else {
      puVar65 = (undefined2 *)(param_1 + lVar64 + lVar27);
      pauVar23 = pauVar6;
      puVar28 = puVar25;
      do {
        auVar80 = *pauVar23;
        auVar72 = pauVar23[1];
        uVar92 = *(undefined8 *)(pauVar23[0x188] + 8);
        uVar91 = *(undefined8 *)pauVar23[0x188];
        uVar90 = *(undefined8 *)(pauVar23[0x189] + 8);
        uVar20 = *(undefined8 *)pauVar23[0x189];
        auVar84 = pauVar23[0x310];
        auVar88 = pauVar23[0x311];
        *puVar65 = auVar80._0_2_;
        puVar65[8] = auVar80._4_2_;
        puVar65[0x10] = auVar80._8_2_;
        puVar65[0x18] = auVar80._12_2_;
        puVar65[0x20] = auVar72._0_2_;
        puVar65[0x28] = auVar72._4_2_;
        puVar65[0x30] = auVar72._8_2_;
        puVar65[0x38] = auVar72._12_2_;
        puVar65[1] = (short)uVar91;
        puVar65[9] = (short)((ulong)uVar91 >> 0x20);
        puVar65[0x11] = (short)uVar92;
        puVar65[0x19] = (short)((ulong)uVar92 >> 0x20);
        puVar65[0x21] = (short)uVar20;
        puVar65[0x29] = (short)((ulong)uVar20 >> 0x20);
        puVar65[0x31] = (short)uVar90;
        puVar65[0x39] = (short)((ulong)uVar90 >> 0x20);
        puVar65[2] = auVar84._0_2_;
        puVar65[10] = auVar84._4_2_;
        puVar65[0x12] = auVar84._8_2_;
        puVar65[0x1a] = auVar84._12_2_;
        puVar65[0x22] = auVar88._0_2_;
        auVar72 = pauVar23[0x498];
        puVar65[0x2a] = auVar88._4_2_;
        puVar65[0x32] = auVar88._8_2_;
        puVar65[0x3a] = auVar88._12_2_;
        auVar80 = pauVar23[0x499];
        *puVar28 = auVar72._0_4_;
        puVar1 = puVar28 + 0x14;
        puVar28[4] = auVar72._4_4_;
        puVar28[8] = auVar72._8_4_;
        puVar2 = puVar28 + 0x18;
        puVar28[0xc] = auVar72._12_4_;
        puVar3 = puVar28 + 0x1c;
        puVar28[0x10] = auVar80._0_4_;
        puVar28 = puVar28 + 0x20;
        *puVar1 = auVar80._4_4_;
        *puVar2 = auVar80._8_4_;
        *puVar3 = auVar80._12_4_;
        puVar65 = puVar65 + 0x40;
        pauVar23 = pauVar23 + 2;
      } while (puVar25 + ((ulong)((uVar67 >> 3) - 1) + 1) * 0x20 != puVar28);
      uVar46 = uVar63 & 0xfffffff8;
      lVar21 = uVar46 * 0x10;
      uVar66 = uVar67 & 0xfffffff8;
      if ((uVar63 & 7) != 0) {
        uVar40 = *(undefined4 *)(lVar35 + uVar46 * 4);
        uVar10 = *(undefined4 *)(lVar29 + uVar46 * 4);
        uVar11 = *(undefined4 *)(lVar7 + uVar46 * 4);
        *(short *)(puVar25 + uVar46 * 4 + 1) = (short)*(undefined4 *)(*pauVar6 + uVar46 * 4);
        *(short *)((long)puVar25 + lVar21 + 6) = (short)uVar40;
        *(short *)(puVar25 + uVar46 * 4 + 2) = (short)uVar10;
        puVar25[uVar46 * 4] = uVar11;
        uVar63 = (ulong)(uVar66 + 1);
        if (uVar66 + 1 < uVar67) {
          uVar40 = *(undefined4 *)(*pauVar6 + uVar63 * 4);
          uVar10 = *(undefined4 *)(lVar35 + uVar63 * 4);
          uVar11 = *(undefined4 *)(lVar29 + uVar63 * 4);
          puVar25[uVar46 * 4 + 4] = *(undefined4 *)(lVar7 + uVar63 * 4);
          *(short *)(puVar25 + uVar46 * 4 + 5) = (short)uVar40;
          *(short *)((long)puVar25 + lVar21 + 0x16) = (short)uVar10;
          *(short *)(puVar25 + uVar46 * 4 + 6) = (short)uVar11;
          if (uVar66 + 2 < uVar67) {
            uVar63 = (ulong)(uVar66 + 2);
            uVar40 = *(undefined4 *)(*pauVar6 + uVar63 * 4);
            uVar10 = *(undefined4 *)(lVar35 + uVar63 * 4);
            uVar11 = *(undefined4 *)(lVar29 + uVar63 * 4);
            puVar25[uVar46 * 4 + 8] = *(undefined4 *)(lVar7 + uVar63 * 4);
            *(short *)(puVar25 + uVar46 * 4 + 9) = (short)uVar40;
            *(short *)((long)puVar25 + lVar21 + 0x26) = (short)uVar10;
            *(short *)(puVar25 + uVar46 * 4 + 10) = (short)uVar11;
            if (uVar66 + 3 < uVar67) {
              uVar63 = (ulong)(uVar66 + 3);
              uVar40 = *(undefined4 *)(*pauVar6 + uVar63 * 4);
              uVar10 = *(undefined4 *)(lVar35 + uVar63 * 4);
              uVar11 = *(undefined4 *)(lVar29 + uVar63 * 4);
              puVar25[uVar46 * 4 + 0xc] = *(undefined4 *)(lVar7 + uVar63 * 4);
              *(short *)(puVar25 + uVar46 * 4 + 0xd) = (short)uVar40;
              *(short *)((long)puVar25 + lVar21 + 0x36) = (short)uVar10;
              *(short *)(puVar25 + uVar46 * 4 + 0xe) = (short)uVar11;
              if (uVar66 + 4 < uVar67) {
                uVar63 = (ulong)(uVar66 + 4);
                uVar40 = *(undefined4 *)(*pauVar6 + uVar63 * 4);
                uVar10 = *(undefined4 *)(lVar35 + uVar63 * 4);
                uVar11 = *(undefined4 *)(lVar29 + uVar63 * 4);
                puVar25[uVar46 * 4 + 0x10] = *(undefined4 *)(lVar7 + uVar63 * 4);
                *(short *)(puVar25 + uVar46 * 4 + 0x11) = (short)uVar40;
                *(short *)((long)puVar25 + lVar21 + 0x46) = (short)uVar10;
                *(short *)(puVar25 + uVar46 * 4 + 0x12) = (short)uVar11;
                if (uVar66 + 5 < uVar67) {
                  uVar34 = (ulong)(uVar66 + 5);
                  uVar63 = (ulong)(uVar66 + 6);
                  uVar40 = *(undefined4 *)(*pauVar6 + uVar34 * 4);
                  uVar10 = *(undefined4 *)(lVar35 + uVar34 * 4);
                  uVar11 = *(undefined4 *)(lVar29 + uVar34 * 4);
                  puVar25[uVar46 * 4 + 0x14] = *(undefined4 *)(lVar7 + uVar34 * 4);
                  *(short *)(puVar25 + uVar46 * 4 + 0x15) = (short)uVar40;
                  *(short *)((long)puVar25 + lVar21 + 0x56) = (short)uVar10;
                  *(short *)(puVar25 + uVar46 * 4 + 0x16) = (short)uVar11;
                  if (uVar66 + 6 < uVar67) {
                    uVar40 = *(undefined4 *)(*pauVar6 + uVar63 * 4);
                    uVar10 = *(undefined4 *)(lVar35 + uVar63 * 4);
                    uVar11 = *(undefined4 *)(lVar29 + uVar63 * 4);
                    puVar25[uVar46 * 4 + 0x18] = *(undefined4 *)(lVar7 + uVar63 * 4);
                    *(short *)(puVar25 + uVar46 * 4 + 0x19) = (short)uVar40;
                    *(short *)((long)puVar25 + lVar21 + 0x66) = (short)uVar10;
                    *(short *)(puVar25 + uVar46 * 4 + 0x1a) = (short)uVar11;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (uVar8 == 0) goto LAB_0015b8b8;
  lVar21 = param_1 + (ulong)(uVar8 - 1) * 8;
  lVar35 = ((ulong)(uVar8 - 1) + 0xf3e) * 8;
  bVar45 = *(byte *)(lVar21 + 0x79f4);
  uVar56 = (ushort)bVar45;
  if (bVar45 == 3) {
    uVar40 = *(undefined4 *)(param_1 + lVar35);
    lVar21 = param_1 + 0x650;
    if (local_3ae4 < 4) {
      *(undefined4 *)(param_1 + 0x79f0) = uVar40;
      *(undefined *)(param_1 + 0x79f7) = 1;
      *(ushort *)(param_1 + 0x79f4) = uVar56;
      iVar53 = *(int *)(param_1 + 0x330) - local_3ae4;
      if (iVar53 < 0) goto LAB_0015b8b8;
      if (local_3ae4 != 0) {
        lVar29 = (long)iVar53;
        lVar35 = lVar21 + (long)(iVar53 * 4) * 4;
        *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(lVar21 + (long)(iVar53 * 4) * 4);
        *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(lVar35 + 4);
        *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(lVar35 + 8);
        *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(lVar35 + 0xc);
        *(undefined *)(param_1 + 0x1290) = *(undefined *)(param_1 + lVar29 + 0x1290);
        uVar40 = *(undefined4 *)(param_1 + lVar29 * 4 + 0x14dc);
        *(undefined2 *)(param_1 + 0x1354) = *(undefined2 *)(param_1 + lVar29 * 2 + 0x1354);
        *(undefined4 *)(param_1 + 0x14dc) = uVar40;
        if (local_3ae4 != 1) {
          *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(lVar35 + 0x10);
          lVar21 = (long)(iVar53 + 1);
          *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(lVar35 + 0x14);
          *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(lVar35 + 0x18);
          *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(lVar35 + 0x1c);
          *(undefined *)(param_1 + 0x1291) = *(undefined *)(param_1 + lVar21 + 0x1290);
          uVar40 = *(undefined4 *)(param_1 + lVar21 * 4 + 0x14dc);
          *(undefined2 *)(param_1 + 0x1356) = *(undefined2 *)(param_1 + lVar21 * 2 + 0x1354);
          *(undefined4 *)(param_1 + 0x14e0) = uVar40;
          if (local_3ae4 == 3) {
            *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(lVar35 + 0x20);
            lVar21 = (long)(iVar53 + 2);
            *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(lVar35 + 0x24);
            *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(lVar35 + 0x28);
            *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(lVar35 + 0x2c);
            *(undefined *)(param_1 + 0x1292) = *(undefined *)(param_1 + lVar21 + 0x1290);
            uVar40 = *(undefined4 *)(param_1 + lVar21 * 4 + 0x14dc);
            *(undefined2 *)(param_1 + 0x1358) = *(undefined2 *)(param_1 + lVar21 * 2 + 0x1354);
            *(undefined4 *)(param_1 + 0x14e4) = uVar40;
          }
        }
      }
LAB_0015de8c:
      *(uint *)(param_1 + 0x330) = local_3ae4;
      *(undefined4 *)(param_1 + 0x334) = 1;
      *(uint *)(param_1 + 0x338) = local_3ae4;
      goto LAB_0015b8b8;
    }
    local_3ae4 = (local_3ae4 & 1) + 2;
    iVar53 = *(int *)(param_1 + 0x330) - local_3ae4;
    lVar35 = lVar21 + (long)(iVar53 * 4) * 4;
    if (*(int *)(param_1 + 0x648) == 0) {
      *(undefined4 *)(param_1 + 0x79f0) = uVar40;
      *(undefined *)(param_1 + 0x79f7) = 1;
      *(undefined2 *)(param_1 + 0x79f4) = 7;
    }
    else {
      *(undefined4 *)(param_1 + 0x79f0) = uVar40;
      *(undefined *)(param_1 + 0x79f7) = 1;
      *(ushort *)(param_1 + 0x79f4) = uVar56;
    }
    if (iVar53 < 0) goto LAB_0015b8b8;
    *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(lVar21 + (long)(iVar53 * 4) * 4);
    lVar21 = (long)iVar53;
    *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(lVar35 + 4);
    *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(lVar35 + 8);
    *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(lVar35 + 0xc);
    *(undefined *)(param_1 + 0x1290) = *(undefined *)(param_1 + lVar21 + 0x1290);
    uVar13 = *(undefined2 *)(param_1 + lVar21 * 2 + 0x1354);
    *(undefined4 *)(param_1 + 0x14dc) = *(undefined4 *)(param_1 + lVar21 * 4 + 0x14dc);
    lVar21 = (long)(iVar53 + 1);
    *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(lVar35 + 0x10);
    *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(lVar35 + 0x14);
    *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(lVar35 + 0x18);
    *(undefined2 *)(param_1 + 0x1354) = uVar13;
    *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(lVar35 + 0x1c);
    *(undefined *)(param_1 + 0x1291) = *(undefined *)(param_1 + lVar21 + 0x1290);
    uVar40 = *(undefined4 *)(param_1 + lVar21 * 4 + 0x14dc);
    *(undefined2 *)(param_1 + 0x1356) = *(undefined2 *)(param_1 + lVar21 * 2 + 0x1354);
    *(undefined4 *)(param_1 + 0x14e0) = uVar40;
    if (local_3ae4 == 3) {
      *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(lVar35 + 0x20);
      lVar21 = (long)(iVar53 + 2);
      *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(lVar35 + 0x24);
      *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(lVar35 + 0x28);
      *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(lVar35 + 0x2c);
      *(undefined *)(param_1 + 0x1292) = *(undefined *)(param_1 + lVar21 + 0x1290);
      uVar40 = *(undefined4 *)(param_1 + lVar21 * 4 + 0x14dc);
      *(undefined2 *)(param_1 + 0x1358) = *(undefined2 *)(param_1 + lVar21 * 2 + 0x1354);
      *(undefined4 *)(param_1 + 0x14e4) = uVar40;
    }
LAB_0015dad4:
    *(uint *)(param_1 + 0x330) = local_3ae4;
    *(undefined4 *)(param_1 + 0x334) = 1;
    *(uint *)(param_1 + 0x338) = local_3ae4;
  }
  else {
    if (bVar45 < 4) {
      if (bVar45 == 1) {
        *(undefined4 *)(param_1 + 0x79f0) = *(undefined4 *)(param_1 + lVar35);
        *(undefined *)(param_1 + 0x79f7) = 0;
        *(undefined2 *)(param_1 + 0x79f4) = 1;
        local_3ae4 = local_3ae4 & 3;
        iVar53 = *(int *)(param_1 + 0x330) - local_3ae4;
        if (iVar53 < 0) goto LAB_0015b8b8;
        if (local_3ae4 != 0) {
          lVar21 = param_1 + 0x650 + (long)(iVar53 * 4) * 4;
          lVar35 = (long)iVar53;
          *(undefined4 *)(param_1 + 0x650) =
               *(undefined4 *)(param_1 + 0x650 + (long)(iVar53 * 4) * 4);
          *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(lVar21 + 4);
          *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(lVar21 + 8);
          *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(lVar21 + 0xc);
          *(undefined *)(param_1 + 0x1290) = *(undefined *)(param_1 + lVar35 + 0x1290);
          uVar40 = *(undefined4 *)(param_1 + lVar35 * 4 + 0x14dc);
          *(undefined2 *)(param_1 + 0x1354) = *(undefined2 *)(param_1 + lVar35 * 2 + 0x1354);
          *(undefined4 *)(param_1 + 0x14dc) = uVar40;
          if (local_3ae4 != 1) {
            *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(lVar21 + 0x10);
            lVar35 = (long)(iVar53 + 1);
            *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(lVar21 + 0x14);
            *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(lVar21 + 0x18);
            *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(lVar21 + 0x1c);
            *(undefined *)(param_1 + 0x1291) = *(undefined *)(param_1 + lVar35 + 0x1290);
            uVar40 = *(undefined4 *)(param_1 + lVar35 * 4 + 0x14dc);
            *(undefined2 *)(param_1 + 0x1356) = *(undefined2 *)(param_1 + lVar35 * 2 + 0x1354);
            *(undefined4 *)(param_1 + 0x14e0) = uVar40;
            if (local_3ae4 == 3) {
              *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(lVar21 + 0x20);
              lVar35 = (long)(iVar53 + 2);
              *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(lVar21 + 0x24);
              *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(lVar21 + 0x28);
              *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(lVar21 + 0x2c);
              *(undefined *)(param_1 + 0x1292) = *(undefined *)(param_1 + lVar35 + 0x1290);
              uVar40 = *(undefined4 *)(param_1 + lVar35 * 4 + 0x14dc);
              *(undefined2 *)(param_1 + 0x1358) = *(undefined2 *)(param_1 + lVar35 * 2 + 0x1354);
              *(undefined4 *)(param_1 + 0x14e4) = uVar40;
            }
          }
        }
        goto LAB_0015dad4;
      }
      if (bVar45 != 2) {
        if (bVar45 == 0) {
          *(undefined4 *)(param_1 + 0x79f0) = *(undefined4 *)(param_1 + lVar35);
          *(undefined *)(param_1 + 0x79f7) = 0;
          *(undefined2 *)(param_1 + 0x79f4) = 0;
          iVar53 = local_3ae4 -
                   (local_3ae4 / 3 + ((uint)((ulong)local_3ae4 * 0xaaaaaaab >> 0x20) & 0xfffffffe));
          iVar5 = *(int *)(param_1 + 0x330) - iVar53;
          if (-1 < iVar5) {
            if (iVar53 != 0) {
              lVar21 = param_1 + 0x650 + (long)(iVar5 * 4) * 4;
              lVar35 = (long)iVar5;
              *(undefined4 *)(param_1 + 0x650) =
                   *(undefined4 *)(param_1 + 0x650 + (long)(iVar5 * 4) * 4);
              *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(lVar21 + 4);
              *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(lVar21 + 8);
              *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(lVar21 + 0xc);
              *(undefined *)(param_1 + 0x1290) = *(undefined *)(param_1 + lVar35 + 0x1290);
              uVar40 = *(undefined4 *)(param_1 + lVar35 * 4 + 0x14dc);
              *(undefined2 *)(param_1 + 0x1354) = *(undefined2 *)(param_1 + lVar35 * 2 + 0x1354);
              *(undefined4 *)(param_1 + 0x14dc) = uVar40;
              if (iVar53 == 2) {
                *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(lVar21 + 0x10);
                lVar35 = (long)(iVar5 + 1);
                *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(lVar21 + 0x14);
                *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(lVar21 + 0x18);
                *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(lVar21 + 0x1c);
                *(undefined *)(param_1 + 0x1291) = *(undefined *)(param_1 + lVar35 + 0x1290);
                uVar40 = *(undefined4 *)(param_1 + lVar35 * 4 + 0x14dc);
                *(undefined2 *)(param_1 + 0x1356) = *(undefined2 *)(param_1 + lVar35 * 2 + 0x1354);
                *(undefined4 *)(param_1 + 0x14e0) = uVar40;
              }
            }
            *(int *)(param_1 + 0x330) = iVar53;
            *(undefined4 *)(param_1 + 0x334) = 1;
            *(int *)(param_1 + 0x338) = iVar53;
          }
        }
        goto LAB_0015b8b8;
      }
      uVar40 = *(undefined4 *)(param_1 + lVar35);
      bVar45 = *(byte *)(param_1 + lVar35 + 7);
      iVar53 = *(int *)(param_1 + 0x330);
      lVar21 = param_1 + 0x650;
      if (local_3ae4 < 3) {
        *(undefined4 *)(param_1 + 0x79f0) = uVar40;
        *(byte *)(param_1 + 0x79f7) = bVar45;
        *(ushort *)(param_1 + 0x79f4) = uVar56;
        iVar53 = iVar53 - local_3ae4;
        if (iVar53 < 0) goto LAB_0015b8b8;
        if (local_3ae4 != 0) {
          lVar29 = (long)iVar53;
          lVar35 = lVar21 + (long)(iVar53 * 4) * 4;
          *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(lVar21 + (long)(iVar53 * 4) * 4);
          *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(lVar35 + 4);
          *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(lVar35 + 8);
          *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(lVar35 + 0xc);
          *(undefined *)(param_1 + 0x1290) = *(undefined *)(param_1 + lVar29 + 0x1290);
          uVar40 = *(undefined4 *)(param_1 + lVar29 * 4 + 0x14dc);
          *(undefined2 *)(param_1 + 0x1354) = *(undefined2 *)(param_1 + lVar29 * 2 + 0x1354);
          *(undefined4 *)(param_1 + 0x14dc) = uVar40;
          if (local_3ae4 == 2) {
            *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(lVar35 + 0x10);
            lVar21 = (long)(iVar53 + 1);
            *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(lVar35 + 0x14);
            *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(lVar35 + 0x18);
            *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(lVar35 + 0x1c);
            *(undefined *)(param_1 + 0x1291) = *(undefined *)(param_1 + lVar21 + 0x1290);
            uVar40 = *(undefined4 *)(param_1 + lVar21 * 4 + 0x14dc);
            *(undefined2 *)(param_1 + 0x1356) = *(undefined2 *)(param_1 + lVar21 * 2 + 0x1354);
            *(undefined4 *)(param_1 + 0x14e0) = uVar40;
          }
        }
        goto LAB_0015de8c;
      }
      iVar5 = iVar53 + -2;
      bVar45 = (byte)local_3ae4 & 1 ^ bVar45;
      lVar35 = lVar21 + (long)(iVar5 * 4) * 4;
      if (*(int *)(param_1 + 0x648) == 0) {
        *(undefined4 *)(param_1 + 0x79f0) = uVar40;
        *(byte *)(param_1 + 0x79f7) = bVar45;
        *(undefined2 *)(param_1 + 0x79f4) = 6;
      }
      else {
        *(undefined4 *)(param_1 + 0x79f0) = uVar40;
        *(byte *)(param_1 + 0x79f7) = bVar45;
        *(ushort *)(param_1 + 0x79f4) = uVar56;
      }
      if (iVar5 < 0) goto LAB_0015b8b8;
      *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(lVar21 + (long)(iVar5 * 4) * 4);
      lVar29 = (long)iVar5;
      *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(lVar35 + 4);
      *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(lVar35 + 8);
      *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(lVar35 + 0xc);
      lVar21 = param_1 + lVar29 * 2;
      *(undefined *)(param_1 + 0x1290) = *(undefined *)(param_1 + lVar29 + 0x1290);
      lVar29 = param_1 + lVar29 * 4;
      *(undefined2 *)(param_1 + 0x1354) = *(undefined2 *)(lVar21 + 0x1354);
      *(undefined4 *)(param_1 + 0x14dc) = *(undefined4 *)(lVar29 + 0x14dc);
      *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(lVar35 + 0x10);
      *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(lVar35 + 0x14);
      *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(lVar35 + 0x18);
      *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(lVar35 + 0x1c);
      *(undefined *)(param_1 + 0x1291) = *(undefined *)(param_1 + (iVar53 + -1) + 0x1290);
      *(undefined2 *)(param_1 + 0x1356) = *(undefined2 *)(lVar21 + 0x1356);
      *(undefined4 *)(param_1 + 0x14e0) = *(undefined4 *)(lVar29 + 0x14e0);
    }
    else {
      if (bVar45 != 6) {
        if (bVar45 == 7) {
          iVar53 = (local_3ae4 & 1) + 2;
          iVar5 = *(int *)(param_1 + 0x330) - iVar53;
          lVar21 = param_1 + 0x650 + (long)(iVar5 * 4) * 4;
          if (*(int *)(param_1 + 0x648) == 0) {
            *(undefined4 *)(param_1 + 0x79f0) = *(undefined4 *)(param_1 + lVar35);
            *(undefined *)(param_1 + 0x79f7) = 1;
            *(ushort *)(param_1 + 0x79f4) = uVar56;
          }
          else {
            *(undefined4 *)(param_1 + 0x79f0) = *(undefined4 *)(param_1 + lVar35);
            *(undefined *)(param_1 + 0x79f7) = 1;
            *(undefined2 *)(param_1 + 0x79f4) = 3;
          }
          if (-1 < iVar5) {
            *(undefined4 *)(param_1 + 0x650) =
                 *(undefined4 *)(param_1 + 0x650 + (long)(iVar5 * 4) * 4);
            lVar35 = (long)iVar5;
            *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(lVar21 + 4);
            *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(lVar21 + 8);
            *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(lVar21 + 0xc);
            *(undefined *)(param_1 + 0x1290) = *(undefined *)(param_1 + lVar35 + 0x1290);
            uVar13 = *(undefined2 *)(param_1 + lVar35 * 2 + 0x1354);
            *(undefined4 *)(param_1 + 0x14dc) = *(undefined4 *)(param_1 + lVar35 * 4 + 0x14dc);
            lVar35 = (long)(iVar5 + 1);
            *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(lVar21 + 0x10);
            *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(lVar21 + 0x14);
            *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(lVar21 + 0x18);
            *(undefined2 *)(param_1 + 0x1354) = uVar13;
            *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(lVar21 + 0x1c);
            *(undefined *)(param_1 + 0x1291) = *(undefined *)(param_1 + lVar35 + 0x1290);
            uVar40 = *(undefined4 *)(param_1 + lVar35 * 4 + 0x14dc);
            *(undefined2 *)(param_1 + 0x1356) = *(undefined2 *)(param_1 + lVar35 * 2 + 0x1354);
            *(undefined4 *)(param_1 + 0x14e0) = uVar40;
            if (iVar53 == 3) {
              *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(lVar21 + 0x20);
              lVar35 = (long)(iVar5 + 2);
              *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(lVar21 + 0x24);
              *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(lVar21 + 0x28);
              *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(lVar21 + 0x2c);
              *(undefined *)(param_1 + 0x1292) = *(undefined *)(param_1 + lVar35 + 0x1290);
              uVar40 = *(undefined4 *)(param_1 + lVar35 * 4 + 0x14dc);
              *(undefined2 *)(param_1 + 0x1358) = *(undefined2 *)(param_1 + lVar35 * 2 + 0x1354);
              *(undefined4 *)(param_1 + 0x14e4) = uVar40;
            }
            *(int *)(param_1 + 0x330) = iVar53;
            *(undefined4 *)(param_1 + 0x334) = 1;
            *(int *)(param_1 + 0x338) = iVar53;
          }
        }
        goto LAB_0015b8b8;
      }
      iVar53 = *(int *)(param_1 + 0x330) + -2;
      lVar29 = param_1 + 0x650 + (long)(iVar53 * 4) * 4;
      bVar45 = *(byte *)(lVar21 + 0x79f7) ^ (byte)local_3ae4 & 1;
      if (*(int *)(param_1 + 0x648) == 0) {
        *(undefined4 *)(param_1 + 0x79f0) = *(undefined4 *)(param_1 + lVar35);
        *(byte *)(param_1 + 0x79f7) = bVar45;
        *(ushort *)(param_1 + 0x79f4) = uVar56;
      }
      else {
        *(undefined4 *)(param_1 + 0x79f0) = *(undefined4 *)(param_1 + lVar35);
        *(byte *)(param_1 + 0x79f7) = bVar45;
        *(undefined2 *)(param_1 + 0x79f4) = 2;
      }
      if (iVar53 < 0) goto LAB_0015b8b8;
      *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(param_1 + 0x650 + (long)(iVar53 * 4) * 4);
      lVar35 = (long)iVar53;
      *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(lVar29 + 4);
      *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(lVar29 + 8);
      *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(lVar29 + 0xc);
      lVar21 = param_1 + lVar35 * 2;
      *(undefined *)(param_1 + 0x1290) = *(undefined *)(param_1 + lVar35 + 0x1290);
      lVar35 = param_1 + lVar35 * 4;
      *(undefined2 *)(param_1 + 0x1354) = *(undefined2 *)(lVar21 + 0x1354);
      *(undefined4 *)(param_1 + 0x14dc) = *(undefined4 *)(lVar35 + 0x14dc);
      *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(lVar29 + 0x10);
      *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(lVar29 + 0x14);
      *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(lVar29 + 0x18);
      *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(lVar29 + 0x1c);
      *(undefined *)(param_1 + 0x1291) =
           *(undefined *)(param_1 + (*(int *)(param_1 + 0x330) + -1) + 0x1290);
      *(undefined2 *)(param_1 + 0x1356) = *(undefined2 *)(lVar21 + 0x1356);
      *(undefined4 *)(param_1 + 0x14e0) = *(undefined4 *)(lVar35 + 0x14e0);
    }
    *(undefined4 *)(param_1 + 0x338) = 2;
    *(undefined8 *)(param_1 + 0x330) = 0x100000002;
  }
LAB_0015b8b8:
  if (*(int *)(param_1 + 0x308) != 0) {
    lVar21 = param_1 + (ulong)(*(int *)(param_1 + 0x308) - 1) * 8;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(lVar21 + 0x7ff8);
    *(uint *)(param_1 + 0x640) = (uint)*(ushort *)(lVar21 + 0x7ffc);
  }
  *(undefined8 *)(param_1 + 0x304) = 0xff;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,&__stack_chk_guard,0);
}


