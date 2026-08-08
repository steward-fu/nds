/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_flip_wrap_c
 * Address  : 00147330
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_generate_texture_addresses_flip_wrap_c
               (undefined8 *param_1,ushort *param_2,ulong param_3,uint param_4,int param_5)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined6 uVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  ushort uVar12;
  long lVar13;
  ushort *puVar14;
  uint uVar22;
  undefined8 *puVar23;
  ushort *puVar24;
  uint uVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  undefined auVar38 [16];
  undefined auVar40 [16];
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
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  undefined4 uVar33;
  undefined6 uVar34;
  undefined8 uVar35;
  undefined auVar36 [12];
  undefined auVar37 [14];
  undefined auVar39 [16];
  byte bVar41;
  
  lVar13 = ___stack_chk_guard;
  uVar22 = (uint)param_3;
  if (uVar22 != 0) {
    param_5 = param_5 + -1;
    iVar1 = param_4 - 1;
    uVar12 = (ushort)iVar1;
    if (uVar22 - 1 < 7) {
      uVar25 = 0;
    }
    else {
      puVar23 = param_1;
      puVar24 = param_2;
      do {
        uVar6 = *puVar24;
        puVar14 = puVar24 + 1;
        bVar41 = (byte)puVar24[2];
        bVar43 = (byte)(puVar24[2] >> 8);
        puVar15 = puVar24 + 3;
        bVar44 = (byte)puVar24[4];
        bVar45 = (byte)(puVar24[4] >> 8);
        puVar16 = puVar24 + 5;
        bVar46 = (byte)puVar24[6];
        bVar47 = (byte)(puVar24[6] >> 8);
        puVar17 = puVar24 + 7;
        uVar8 = puVar24[8];
        bVar48 = (byte)(uVar8 >> 8);
        puVar18 = puVar24 + 9;
        bVar49 = (byte)puVar24[10];
        bVar50 = (byte)(puVar24[10] >> 8);
        puVar19 = puVar24 + 0xb;
        bVar51 = (byte)puVar24[0xc];
        bVar52 = (byte)(puVar24[0xc] >> 8);
        puVar20 = puVar24 + 0xd;
        bVar53 = (byte)puVar24[0xe];
        bVar54 = (byte)(puVar24[0xe] >> 8);
        puVar21 = puVar24 + 0xf;
        puVar24 = puVar24 + 0x10;
        uVar3 = CONCAT13(bVar43,CONCAT12(bVar41,uVar6));
        uVar4 = CONCAT15(bVar45,CONCAT14(bVar44,uVar3));
        auVar57._0_4_ = (int)(short)uVar6;
        auVar57._4_4_ = (int)(short)((uint)uVar3 >> 0x10);
        auVar57._8_4_ = (int)(short)((uint6)uVar4 >> 0x20);
        auVar57._12_4_ = (int)(short)(CONCAT17(bVar47,CONCAT16(bVar46,uVar4)) >> 0x30);
        uVar3 = CONCAT13(bVar50,CONCAT12(bVar49,uVar8));
        uVar4 = CONCAT15(bVar52,CONCAT14(bVar51,uVar3));
        auVar55._0_4_ = (int)(short)uVar8;
        auVar55._4_4_ = (int)(short)((uint)uVar3 >> 0x10);
        auVar55._8_4_ = (int)(short)((uint6)uVar4 >> 0x20);
        auVar55._12_4_ = (int)(short)(CONCAT17(bVar54,CONCAT16(bVar53,uVar4)) >> 0x30);
        bVar59 = (byte)iVar1;
        bVar60 = (byte)((uint)iVar1 >> 8);
        bVar61 = (byte)param_5;
        bVar62 = (byte)((uint)param_5 >> 8);
        bVar42 = bVar62 & (byte)(*puVar18 >> 8);
        auVar58._4_4_ = param_4;
        auVar58._0_4_ = param_4;
        auVar58._8_4_ = param_4;
        auVar58._12_4_ = param_4;
        auVar58 = NEON_cmtst(auVar57,auVar58,4);
        auVar10._4_4_ = param_4;
        auVar10._0_4_ = param_4;
        auVar10._8_4_ = param_4;
        auVar10._12_4_ = param_4;
        auVar56 = NEON_cmtst(auVar55,auVar10,4);
        sVar2 = CONCAT11(bVar62 & (byte)(*puVar14 >> 8),bVar61 & (byte)*puVar14);
        uVar3 = CONCAT13(bVar62 & (byte)(*puVar15 >> 8),CONCAT12(bVar61 & (byte)*puVar15,sVar2));
        uVar4 = CONCAT15(bVar62 & (byte)(*puVar16 >> 8),CONCAT14(bVar61 & (byte)*puVar16,uVar3));
        sVar5 = CONCAT11(bVar42,bVar61 & (byte)*puVar18);
        uVar33 = CONCAT13(bVar62 & (byte)(*puVar19 >> 8),CONCAT12(bVar61 & (byte)*puVar19,sVar5));
        uVar34 = CONCAT15(bVar62 & (byte)(*puVar20 >> 8),CONCAT14(bVar61 & (byte)*puVar20,uVar33));
        sVar26 = (short)((uint)uVar33 >> 0x10);
        sVar28 = (short)((uint6)uVar34 >> 0x20);
        sVar30 = (short)(CONCAT17(bVar62 & (byte)(*puVar21 >> 8),
                                  CONCAT16(bVar61 & (byte)*puVar21,uVar34)) >> 0x30);
        auVar38._2_2_ = auVar58._4_2_;
        auVar38._0_2_ = auVar58._0_2_;
        auVar38._4_2_ = auVar58._8_2_;
        auVar38._6_2_ = auVar58._12_2_;
        auVar38._8_2_ = auVar56._0_2_;
        auVar38._10_2_ = auVar56._4_2_;
        auVar38._12_2_ = auVar56._8_2_;
        auVar38._14_2_ = auVar56._12_2_;
        auVar56[2] = bVar41;
        auVar56._0_2_ = uVar6;
        auVar56[3] = bVar43;
        auVar56[4] = bVar44;
        auVar56[5] = bVar45;
        auVar56[6] = bVar46;
        auVar56[7] = bVar47;
        auVar56[8] = (byte)uVar8;
        auVar56[9] = bVar48;
        auVar56[10] = bVar49;
        auVar56[11] = bVar50;
        auVar56[12] = bVar51;
        auVar56[13] = bVar52;
        auVar56[14] = bVar53;
        auVar56[15] = bVar54;
        auVar11[1] = bVar60 ^ (byte)(uVar6 >> 8);
        auVar11[0] = bVar59 ^ (byte)uVar6;
        auVar11[2] = bVar59 ^ bVar41;
        auVar11[3] = bVar60 ^ bVar43;
        auVar11[4] = bVar59 ^ bVar44;
        auVar11[5] = bVar60 ^ bVar45;
        auVar11[6] = bVar59 ^ bVar46;
        auVar11[7] = bVar60 ^ bVar47;
        auVar11[8] = bVar59 ^ (byte)uVar8;
        auVar11[9] = bVar60 ^ bVar48;
        auVar11[10] = bVar59 ^ bVar49;
        auVar11[11] = bVar60 ^ bVar50;
        auVar11[12] = bVar59 ^ bVar51;
        auVar11[13] = bVar60 ^ bVar52;
        auVar11[14] = bVar59 ^ bVar53;
        auVar11[15] = bVar60 ^ bVar54;
        auVar56 = NEON_bsl(auVar38,auVar11,auVar56,1);
        bVar41 = auVar56[1] & bVar60;
        sVar32 = CONCAT11(bVar41,auVar56[0] & bVar59);
        uVar33 = CONCAT13(auVar56[3] & bVar60,CONCAT12(auVar56[2] & bVar59,sVar32));
        uVar34 = CONCAT15(auVar56[5] & bVar60,CONCAT14(auVar56[4] & bVar59,uVar33));
        uVar35 = CONCAT17(auVar56[7] & bVar60,CONCAT16(auVar56[6] & bVar59,uVar34));
        auVar36._0_10_ = CONCAT19(auVar56[9] & bVar60,CONCAT18(auVar56[8] & bVar59,uVar35));
        auVar36[10] = auVar56[10] & bVar59;
        auVar36[11] = auVar56[11] & bVar60;
        auVar37[12] = auVar56[12] & bVar59;
        auVar37._0_12_ = auVar36;
        auVar37[13] = auVar56[13] & bVar60;
        auVar39[14] = auVar56[14] & bVar59;
        auVar39._0_14_ = auVar37;
        auVar39[15] = auVar56[15] & bVar60;
        sVar27 = (short)((uint)uVar33 >> 0x10);
        sVar29 = (short)((uint6)uVar34 >> 0x20);
        sVar31 = (short)((ulong)uVar35 >> 0x30);
        iVar7 = CONCAT13(sVar27 >> 0xf,(int3)sVar27) + (int)(short)((uint)uVar3 >> 0x10) * param_4;
        iVar9 = CONCAT13(sVar31 >> 0xf,(int3)sVar31) +
                (int)(short)(CONCAT17(bVar62 & (byte)(*puVar17 >> 8),
                                      CONCAT16(bVar61 & (byte)*puVar17,uVar4)) >> 0x30) * param_4;
        auVar40._0_8_ =
             CONCAT44((int)auVar36._10_2_ + CONCAT13(sVar26 >> 0xf,(int3)sVar26) * param_4,
                      (int)(short)((unkuint10)auVar36._0_10_ >> 0x40) +
                      CONCAT13((short)(char)bVar42 >> 7,(int3)sVar5) * param_4);
        auVar40._8_4_ = (int)auVar37._12_2_ + CONCAT13(sVar28 >> 0xf,(int3)sVar28) * param_4;
        auVar40._12_4_ = (int)auVar39._14_2_ + CONCAT13(sVar30 >> 0xf,(int3)sVar30) * param_4;
        puVar23[1] = CONCAT17((char)((uint)iVar9 >> 0x18),
                              CONCAT16((char)((uint)iVar9 >> 0x10),
                                       CONCAT15((char)((uint)iVar9 >> 8),
                                                CONCAT14((char)iVar9,
                                                         CONCAT13(sVar29 >> 0xf,(int3)sVar29) +
                                                         (int)(short)((uint6)uVar4 >> 0x20) *
                                                         param_4))));
        *puVar23 = CONCAT17((char)((uint)iVar7 >> 0x18),
                            CONCAT16((char)((uint)iVar7 >> 0x10),
                                     CONCAT15((char)((uint)iVar7 >> 8),
                                              CONCAT14((char)iVar7,
                                                       CONCAT13((short)(char)bVar41 >> 7,
                                                                (int3)sVar32) + (int)sVar2 * param_4
                                                      ))));
        puVar23[3] = auVar40._8_8_;
        puVar23[2] = auVar40._0_8_;
        puVar23 = puVar23 + 4;
      } while (puVar24 != param_2 + (ulong)((uVar22 >> 3) - 1) * 0x10 + 0x10);
      param_1 = (undefined8 *)((long)param_1 + (param_3 & 0xfffffff8) * 4);
      param_2 = param_2 + (param_3 & 0xfffffff8) * 2;
      uVar25 = uVar22 & 0xfffffff8;
      if ((param_3 & 7) == 0) goto LAB_001475a0;
    }
    uVar6 = *param_2;
    if (((int)(short)uVar6 & param_4) != 0) {
      uVar6 = uVar12 ^ uVar6;
    }
    uVar8 = (ushort)param_5;
    *(uint *)param_1 = (int)(short)(uVar12 & uVar6) + (int)(short)(uVar8 & param_2[1]) * param_4;
    if (uVar25 + 1 < uVar22) {
      uVar6 = param_2[2];
      if (((int)(short)uVar6 & param_4) != 0) {
        uVar6 = uVar6 ^ uVar12;
      }
      *(uint *)((long)param_1 + 4) =
           (int)(short)(uVar6 & uVar12) + (int)(short)(uVar8 & param_2[3]) * param_4;
      if (uVar25 + 2 < uVar22) {
        uVar6 = param_2[4];
        if (((int)(short)uVar6 & param_4) != 0) {
          uVar6 = uVar12 ^ uVar6;
        }
        *(uint *)(param_1 + 1) =
             (int)(short)(uVar12 & uVar6) + (int)(short)(uVar8 & param_2[5]) * param_4;
        if (uVar25 + 3 < uVar22) {
          uVar6 = param_2[6];
          if (((int)(short)uVar6 & param_4) != 0) {
            uVar6 = uVar12 ^ uVar6;
          }
          *(uint *)((long)param_1 + 0xc) =
               (int)(short)(uVar12 & uVar6) + (int)(short)(uVar8 & param_2[7]) * param_4;
          if (uVar25 + 4 < uVar22) {
            uVar6 = param_2[8];
            if (((int)(short)uVar6 & param_4) != 0) {
              uVar6 = uVar12 ^ uVar6;
            }
            *(uint *)(param_1 + 2) =
                 (int)(short)(uVar12 & uVar6) + (int)(short)(uVar8 & param_2[9]) * param_4;
            if (uVar25 + 5 < uVar22) {
              uVar6 = param_2[10];
              if (((int)(short)uVar6 & param_4) != 0) {
                uVar6 = uVar12 ^ uVar6;
              }
              *(uint *)((long)param_1 + 0x14) =
                   (int)(short)(uVar12 & uVar6) + (int)(short)(uVar8 & param_2[0xb]) * param_4;
              if (uVar25 + 6 < uVar22) {
                uVar6 = param_2[0xc];
                if (((int)(short)uVar6 & param_4) != 0) {
                  uVar6 = uVar6 ^ uVar12;
                }
                *(uint *)(param_1 + 3) =
                     (int)(short)(uVar6 & uVar12) + (int)(short)(uVar8 & param_2[0xd]) * param_4;
              }
            }
          }
        }
      }
    }
  }
LAB_001475a0:
  if (lVar13 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar13 - ___stack_chk_guard,0);
}


