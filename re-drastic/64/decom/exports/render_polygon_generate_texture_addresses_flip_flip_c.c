/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_flip_flip_c
 * Address  : 001467c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_generate_texture_addresses_flip_flip_c
               (undefined8 *param_1,ushort *param_2,ulong param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  ushort uVar13;
  ushort uVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  ushort *puVar18;
  uint uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  undefined auVar32 [16];
  undefined auVar34 [16];
  short sVar36;
  undefined auVar42 [16];
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
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  undefined4 uVar27;
  undefined6 uVar28;
  undefined8 uVar29;
  undefined auVar30 [12];
  undefined auVar31 [14];
  undefined auVar33 [16];
  byte bVar35;
  undefined4 uVar37;
  undefined6 uVar38;
  undefined8 uVar39;
  undefined auVar40 [12];
  undefined auVar41 [14];
  undefined auVar43 [16];
  byte bVar44;
  
  lVar15 = ___stack_chk_guard;
  uVar16 = (uint)param_3;
  if (uVar16 != 0) {
    iVar1 = param_4 - 1;
    iVar2 = param_5 - 1;
    uVar13 = (ushort)iVar1;
    uVar14 = (ushort)iVar2;
    if (uVar16 - 1 < 7) {
      uVar19 = 0;
    }
    else {
      puVar17 = param_1;
      puVar18 = param_2;
      do {
        uVar3 = *puVar18;
        uVar7 = puVar18[1];
        bVar35 = (byte)puVar18[2];
        bVar44 = (byte)(puVar18[2] >> 8);
        bVar56 = (byte)puVar18[3];
        bVar57 = (byte)(puVar18[3] >> 8);
        bVar45 = (byte)puVar18[4];
        bVar46 = (byte)(puVar18[4] >> 8);
        bVar58 = (byte)puVar18[5];
        bVar59 = (byte)(puVar18[5] >> 8);
        bVar47 = (byte)puVar18[6];
        bVar48 = (byte)(puVar18[6] >> 8);
        bVar60 = (byte)puVar18[7];
        bVar61 = (byte)(puVar18[7] >> 8);
        uVar5 = puVar18[8];
        bVar49 = (byte)(uVar5 >> 8);
        uVar8 = puVar18[9];
        bVar62 = (byte)(uVar8 >> 8);
        bVar50 = (byte)puVar18[10];
        bVar51 = (byte)(puVar18[10] >> 8);
        bVar63 = (byte)puVar18[0xb];
        bVar64 = (byte)(puVar18[0xb] >> 8);
        bVar52 = (byte)puVar18[0xc];
        bVar53 = (byte)(puVar18[0xc] >> 8);
        bVar65 = (byte)puVar18[0xd];
        bVar66 = (byte)(puVar18[0xd] >> 8);
        bVar54 = (byte)puVar18[0xe];
        bVar55 = (byte)(puVar18[0xe] >> 8);
        bVar67 = (byte)puVar18[0xf];
        bVar68 = (byte)(puVar18[0xf] >> 8);
        puVar18 = puVar18 + 0x10;
        uVar27 = CONCAT13(bVar44,CONCAT12(bVar35,uVar3));
        uVar28 = CONCAT15(bVar46,CONCAT14(bVar45,uVar27));
        auVar75._0_4_ = (int)(short)uVar3;
        auVar75._4_4_ = (int)(short)((uint)uVar27 >> 0x10);
        auVar75._8_4_ = (int)(short)((uint6)uVar28 >> 0x20);
        auVar75._12_4_ = (int)(short)(CONCAT17(bVar48,CONCAT16(bVar47,uVar28)) >> 0x30);
        uVar27 = CONCAT13(bVar51,CONCAT12(bVar50,uVar5));
        uVar28 = CONCAT15(bVar53,CONCAT14(bVar52,uVar27));
        auVar73._0_4_ = (int)(short)uVar5;
        auVar73._4_4_ = (int)(short)((uint)uVar27 >> 0x10);
        auVar73._8_4_ = (int)(short)((uint6)uVar28 >> 0x20);
        auVar73._12_4_ = (int)(short)(CONCAT17(bVar55,CONCAT16(bVar54,uVar28)) >> 0x30);
        uVar27 = CONCAT13(bVar57,CONCAT12(bVar56,uVar7));
        uVar28 = CONCAT15(bVar59,CONCAT14(bVar58,uVar27));
        auVar71._0_4_ = (int)(short)uVar7;
        auVar71._4_4_ = (int)(short)((uint)uVar27 >> 0x10);
        auVar71._8_4_ = (int)(short)((uint6)uVar28 >> 0x20);
        auVar71._12_4_ = (int)(short)(CONCAT17(bVar61,CONCAT16(bVar60,uVar28)) >> 0x30);
        uVar27 = CONCAT13(bVar64,CONCAT12(bVar63,uVar8));
        uVar28 = CONCAT15(bVar66,CONCAT14(bVar65,uVar27));
        auVar69._0_4_ = (int)(short)uVar8;
        auVar69._4_4_ = (int)(short)((uint)uVar27 >> 0x10);
        auVar69._8_4_ = (int)(short)((uint6)uVar28 >> 0x20);
        auVar69._12_4_ = (int)(short)(CONCAT17(bVar68,CONCAT16(bVar67,uVar28)) >> 0x30);
        auVar74._4_4_ = param_4;
        auVar74._0_4_ = param_4;
        auVar74._8_4_ = param_4;
        auVar74._12_4_ = param_4;
        auVar76 = NEON_cmtst(auVar75,auVar74,4);
        auVar9._4_4_ = param_4;
        auVar9._0_4_ = param_4;
        auVar9._8_4_ = param_4;
        auVar9._12_4_ = param_4;
        auVar74 = NEON_cmtst(auVar73,auVar9,4);
        auVar10._4_4_ = param_5;
        auVar10._0_4_ = param_5;
        auVar10._8_4_ = param_5;
        auVar10._12_4_ = param_5;
        auVar72 = NEON_cmtst(auVar71,auVar10,4);
        auVar11._4_4_ = param_5;
        auVar11._0_4_ = param_5;
        auVar11._8_4_ = param_5;
        auVar11._12_4_ = param_5;
        auVar70 = NEON_cmtst(auVar69,auVar11,4);
        bVar79 = (byte)iVar1;
        bVar80 = (byte)((uint)iVar1 >> 8);
        bVar77 = (byte)iVar2;
        bVar78 = (byte)((uint)iVar2 >> 8);
        auVar32._2_2_ = auVar76._4_2_;
        auVar32._0_2_ = auVar76._0_2_;
        auVar32._4_2_ = auVar76._8_2_;
        auVar32._6_2_ = auVar76._12_2_;
        auVar32._8_2_ = auVar74._0_2_;
        auVar32._10_2_ = auVar74._4_2_;
        auVar32._12_2_ = auVar74._8_2_;
        auVar32._14_2_ = auVar74._12_2_;
        auVar42._2_2_ = auVar72._4_2_;
        auVar42._0_2_ = auVar72._0_2_;
        auVar42._4_2_ = auVar72._8_2_;
        auVar42._6_2_ = auVar72._12_2_;
        auVar42._8_2_ = auVar70._0_2_;
        auVar42._10_2_ = auVar70._4_2_;
        auVar42._12_2_ = auVar70._8_2_;
        auVar42._14_2_ = auVar70._12_2_;
        auVar70[2] = bVar35;
        auVar70._0_2_ = uVar3;
        auVar70[3] = bVar44;
        auVar70[4] = bVar45;
        auVar70[5] = bVar46;
        auVar70[6] = bVar47;
        auVar70[7] = bVar48;
        auVar70[8] = (byte)uVar5;
        auVar70[9] = bVar49;
        auVar70[10] = bVar50;
        auVar70[11] = bVar51;
        auVar70[12] = bVar52;
        auVar70[13] = bVar53;
        auVar70[14] = bVar54;
        auVar70[15] = bVar55;
        auVar12[1] = bVar80 ^ (byte)(uVar3 >> 8);
        auVar12[0] = bVar79 ^ (byte)uVar3;
        auVar12[2] = bVar79 ^ bVar35;
        auVar12[3] = bVar80 ^ bVar44;
        auVar12[4] = bVar79 ^ bVar45;
        auVar12[5] = bVar80 ^ bVar46;
        auVar12[6] = bVar79 ^ bVar47;
        auVar12[7] = bVar80 ^ bVar48;
        auVar12[8] = bVar79 ^ (byte)uVar5;
        auVar12[9] = bVar80 ^ bVar49;
        auVar12[10] = bVar79 ^ bVar50;
        auVar12[11] = bVar80 ^ bVar51;
        auVar12[12] = bVar79 ^ bVar52;
        auVar12[13] = bVar80 ^ bVar53;
        auVar12[14] = bVar79 ^ bVar54;
        auVar12[15] = bVar80 ^ bVar55;
        auVar70 = NEON_bsl(auVar32,auVar12,auVar70,1);
        auVar72[2] = bVar56;
        auVar72._0_2_ = uVar7;
        auVar72[3] = bVar57;
        auVar72[4] = bVar58;
        auVar72[5] = bVar59;
        auVar72[6] = bVar60;
        auVar72[7] = bVar61;
        auVar72[8] = (byte)uVar8;
        auVar72[9] = bVar62;
        auVar72[10] = bVar63;
        auVar72[11] = bVar64;
        auVar72[12] = bVar65;
        auVar72[13] = bVar66;
        auVar72[14] = bVar67;
        auVar72[15] = bVar68;
        auVar76[1] = bVar78 ^ (byte)(uVar7 >> 8);
        auVar76[0] = bVar77 ^ (byte)uVar7;
        auVar76[2] = bVar77 ^ bVar56;
        auVar76[3] = bVar78 ^ bVar57;
        auVar76[4] = bVar77 ^ bVar58;
        auVar76[5] = bVar78 ^ bVar59;
        auVar76[6] = bVar77 ^ bVar60;
        auVar76[7] = bVar78 ^ bVar61;
        auVar76[8] = bVar77 ^ (byte)uVar8;
        auVar76[9] = bVar78 ^ bVar62;
        auVar76[10] = bVar77 ^ bVar63;
        auVar76[11] = bVar78 ^ bVar64;
        auVar76[12] = bVar77 ^ bVar65;
        auVar76[13] = bVar78 ^ bVar66;
        auVar76[14] = bVar77 ^ bVar67;
        auVar76[15] = bVar78 ^ bVar68;
        auVar72 = NEON_bsl(auVar42,auVar76,auVar72,1);
        bVar35 = auVar70[1] & bVar80;
        sVar26 = CONCAT11(bVar35,auVar70[0] & bVar79);
        uVar27 = CONCAT13(auVar70[3] & bVar80,CONCAT12(auVar70[2] & bVar79,sVar26));
        uVar28 = CONCAT15(auVar70[5] & bVar80,CONCAT14(auVar70[4] & bVar79,uVar27));
        uVar29 = CONCAT17(auVar70[7] & bVar80,CONCAT16(auVar70[6] & bVar79,uVar28));
        auVar30._0_10_ = CONCAT19(auVar70[9] & bVar80,CONCAT18(auVar70[8] & bVar79,uVar29));
        auVar30[10] = auVar70[10] & bVar79;
        auVar30[11] = auVar70[11] & bVar80;
        auVar31[12] = auVar70[12] & bVar79;
        auVar31._0_12_ = auVar30;
        auVar31[13] = auVar70[13] & bVar80;
        auVar33[14] = auVar70[14] & bVar79;
        auVar33._0_14_ = auVar31;
        auVar33[15] = auVar70[15] & bVar80;
        bVar44 = auVar72[1] & bVar78;
        sVar36 = CONCAT11(bVar44,auVar72[0] & bVar77);
        uVar37 = CONCAT13(auVar72[3] & bVar78,CONCAT12(auVar72[2] & bVar77,sVar36));
        uVar38 = CONCAT15(auVar72[5] & bVar78,CONCAT14(auVar72[4] & bVar77,uVar37));
        uVar39 = CONCAT17(auVar72[7] & bVar78,CONCAT16(auVar72[6] & bVar77,uVar38));
        auVar40._0_10_ = CONCAT19(auVar72[9] & bVar78,CONCAT18(auVar72[8] & bVar77,uVar39));
        auVar40[10] = auVar72[10] & bVar77;
        auVar40[11] = auVar72[11] & bVar78;
        auVar41[12] = auVar72[12] & bVar77;
        auVar41._0_12_ = auVar40;
        auVar41[13] = auVar72[13] & bVar78;
        auVar43[14] = auVar72[14] & bVar77;
        auVar43._0_14_ = auVar41;
        auVar43[15] = auVar72[15] & bVar78;
        sVar20 = (short)((uint)uVar27 >> 0x10);
        sVar22 = (short)((uint6)uVar28 >> 0x20);
        sVar24 = (short)((ulong)uVar29 >> 0x30);
        sVar21 = (short)((uint)uVar37 >> 0x10);
        sVar23 = (short)((uint6)uVar38 >> 0x20);
        sVar25 = (short)((ulong)uVar39 >> 0x30);
        iVar4 = CONCAT13(sVar20 >> 0xf,(int3)sVar20) +
                CONCAT13(sVar21 >> 0xf,(int3)sVar21) * param_4;
        iVar6 = CONCAT13(sVar24 >> 0xf,(int3)sVar24) +
                CONCAT13(sVar25 >> 0xf,(int3)sVar25) * param_4;
        auVar34._0_8_ =
             CONCAT44((int)auVar30._10_2_ + (int)auVar40._10_2_ * param_4,
                      (int)(short)((unkuint10)auVar30._0_10_ >> 0x40) +
                      (int)(short)((unkuint10)auVar40._0_10_ >> 0x40) * param_4);
        auVar34._8_4_ = (int)auVar31._12_2_ + (int)auVar41._12_2_ * param_4;
        auVar34._12_4_ = (int)auVar33._14_2_ + (int)auVar43._14_2_ * param_4;
        puVar17[1] = CONCAT17((char)((uint)iVar6 >> 0x18),
                              CONCAT16((char)((uint)iVar6 >> 0x10),
                                       CONCAT15((char)((uint)iVar6 >> 8),
                                                CONCAT14((char)iVar6,
                                                         CONCAT13(sVar22 >> 0xf,(int3)sVar22) +
                                                         CONCAT13(sVar23 >> 0xf,(int3)sVar23) *
                                                         param_4))));
        *puVar17 = CONCAT17((char)((uint)iVar4 >> 0x18),
                            CONCAT16((char)((uint)iVar4 >> 0x10),
                                     CONCAT15((char)((uint)iVar4 >> 8),
                                              CONCAT14((char)iVar4,
                                                       CONCAT13((short)(char)bVar35 >> 7,
                                                                (int3)sVar26) +
                                                       CONCAT13((short)(char)bVar44 >> 7,
                                                                (int3)sVar36) * param_4))));
        puVar17[3] = auVar34._8_8_;
        puVar17[2] = auVar34._0_8_;
        puVar17 = puVar17 + 4;
      } while (puVar18 != param_2 + (ulong)((uVar16 >> 3) - 1) * 0x10 + 0x10);
      param_1 = (undefined8 *)((long)param_1 + (param_3 & 0xfffffff8) * 4);
      param_2 = param_2 + (param_3 & 0xfffffff8) * 2;
      uVar19 = uVar16 & 0xfffffff8;
      if ((param_3 & 7) == 0) goto LAB_00146ac0;
    }
    uVar3 = *param_2;
    uVar5 = param_2[1];
    if (((int)(short)uVar3 & param_4) != 0) {
      uVar3 = uVar13 ^ uVar3;
    }
    if (((int)(short)uVar5 & param_5) != 0) {
      uVar5 = uVar14 ^ uVar5;
    }
    *(uint *)param_1 = (int)(short)(uVar14 & uVar5) * param_4 + (int)(short)(uVar13 & uVar3);
    if (uVar19 + 1 < uVar16) {
      uVar3 = param_2[2];
      uVar5 = param_2[3];
      if (((int)(short)uVar3 & param_4) != 0) {
        uVar3 = uVar3 ^ uVar13;
      }
      if (((int)(short)uVar5 & param_5) != 0) {
        uVar5 = uVar5 ^ uVar14;
      }
      *(uint *)((long)param_1 + 4) =
           (int)(short)(uVar5 & uVar14) * param_4 + (int)(short)(uVar3 & uVar13);
      if (uVar19 + 2 < uVar16) {
        uVar3 = param_2[4];
        uVar5 = param_2[5];
        if (((int)(short)uVar3 & param_4) != 0) {
          uVar3 = uVar3 ^ uVar13;
        }
        if (((int)(short)uVar5 & param_5) != 0) {
          uVar5 = uVar14 ^ uVar5;
        }
        *(uint *)(param_1 + 1) =
             (int)(short)(uVar14 & uVar5) * param_4 + (int)(short)(uVar13 & uVar3);
        if (uVar19 + 3 < uVar16) {
          uVar3 = param_2[6];
          uVar5 = param_2[7];
          if (((int)(short)uVar3 & param_4) != 0) {
            uVar3 = uVar13 ^ uVar3;
          }
          if (((int)(short)uVar5 & param_5) != 0) {
            uVar5 = uVar14 ^ uVar5;
          }
          *(uint *)((long)param_1 + 0xc) =
               (int)(short)(uVar14 & uVar5) * param_4 + (int)(short)(uVar13 & uVar3);
          if (uVar19 + 4 < uVar16) {
            uVar3 = param_2[8];
            uVar5 = param_2[9];
            if (((int)(short)uVar3 & param_4) != 0) {
              uVar3 = uVar13 ^ uVar3;
            }
            if (((int)(short)uVar5 & param_5) != 0) {
              uVar5 = uVar14 ^ uVar5;
            }
            *(uint *)(param_1 + 2) =
                 (int)(short)(uVar14 & uVar5) * param_4 + (int)(short)(uVar13 & uVar3);
            if (uVar19 + 5 < uVar16) {
              uVar3 = param_2[10];
              uVar5 = param_2[0xb];
              if (((int)(short)uVar3 & param_4) != 0) {
                uVar3 = uVar13 ^ uVar3;
              }
              if (((int)(short)uVar5 & param_5) != 0) {
                uVar5 = uVar14 ^ uVar5;
              }
              *(uint *)((long)param_1 + 0x14) =
                   (int)(short)(uVar14 & uVar5) * param_4 + (int)(short)(uVar13 & uVar3);
              if (uVar19 + 6 < uVar16) {
                uVar3 = param_2[0xc];
                uVar5 = param_2[0xd];
                if (((int)(short)uVar3 & param_4) != 0) {
                  uVar3 = uVar3 ^ uVar13;
                }
                if (((int)(short)uVar5 & param_5) != 0) {
                  uVar5 = uVar14 ^ uVar5;
                }
                *(uint *)(param_1 + 3) =
                     (int)(short)(uVar5 & uVar14) * param_4 + (int)(short)(uVar13 & uVar3);
              }
            }
          }
        }
      }
    }
  }
LAB_00146ac0:
  if (lVar15 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar15 - ___stack_chk_guard,0);
}


