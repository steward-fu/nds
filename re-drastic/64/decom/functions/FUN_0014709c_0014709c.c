/*
 * Ghidra decompilation
 *
 * Function : FUN_0014709c
 * Address  : 0014709c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014709c(undefined8 *param_1,short *param_2,ulong param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined6 uVar4;
  short sVar5;
  undefined4 uVar6;
  undefined6 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  ushort uVar13;
  long lVar14;
  short *psVar15;
  uint uVar30;
  undefined8 *puVar31;
  short *psVar32;
  uint uVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  short sVar46;
  byte bVar47;
  short sVar48;
  undefined2 uVar49;
  byte bVar50;
  byte bVar51;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  
  lVar14 = ___stack_chk_guard;
  uVar30 = (uint)param_3;
  if (uVar30 != 0) {
    param_5 = param_5 + -1;
    sVar48 = (short)param_4;
    if (uVar30 - 1 < 7) {
      uVar33 = 0;
    }
    else {
      uVar49 = (undefined2)(param_4 >> 0x10);
      puVar31 = param_1;
      psVar32 = param_2;
      do {
        sVar46 = *psVar32;
        psVar15 = psVar32 + 1;
        psVar16 = psVar32 + 2;
        psVar17 = psVar32 + 3;
        psVar18 = psVar32 + 4;
        psVar19 = psVar32 + 5;
        psVar20 = psVar32 + 6;
        psVar21 = psVar32 + 7;
        psVar22 = psVar32 + 8;
        psVar23 = psVar32 + 9;
        psVar24 = psVar32 + 10;
        psVar25 = psVar32 + 0xb;
        psVar26 = psVar32 + 0xc;
        psVar27 = psVar32 + 0xd;
        psVar28 = psVar32 + 0xe;
        psVar29 = psVar32 + 0xf;
        psVar32 = psVar32 + 0x10;
        auVar40._2_2_ = *psVar16;
        auVar40._0_2_ = sVar46;
        auVar40._4_2_ = *psVar18;
        auVar40._6_2_ = *psVar20;
        auVar40._8_2_ = *psVar22;
        auVar40._10_2_ = *psVar24;
        auVar40._12_2_ = *psVar26;
        auVar40._14_2_ = *psVar28;
        auVar40 = NEON_smax(ZEXT816(0),auVar40,2);
        bVar50 = (byte)param_5;
        bVar51 = (byte)((uint)param_5 >> 8);
        bVar47 = bVar51 & (byte)((ushort)*psVar23 >> 8);
        sVar34 = auVar40._10_2_;
        sVar36 = auVar40._12_2_;
        sVar38 = auVar40._14_2_;
        sVar46 = CONCAT11(bVar51 & (byte)((ushort)*psVar15 >> 8),bVar50 & (byte)*psVar15);
        uVar3 = CONCAT13(bVar51 & (byte)((ushort)*psVar17 >> 8),
                         CONCAT12(bVar50 & (byte)*psVar17,sVar46));
        uVar4 = CONCAT15(bVar51 & (byte)((ushort)*psVar19 >> 8),
                         CONCAT14(bVar50 & (byte)*psVar19,uVar3));
        sVar5 = CONCAT11(bVar47,bVar50 & (byte)*psVar23);
        uVar6 = CONCAT13(bVar51 & (byte)((ushort)*psVar25 >> 8),
                         CONCAT12(bVar50 & (byte)*psVar25,sVar5));
        uVar7 = CONCAT15(bVar51 & (byte)((ushort)*psVar27 >> 8),
                         CONCAT14(bVar50 & (byte)*psVar27,uVar6));
        sVar35 = (short)((uint)uVar6 >> 0x10);
        sVar37 = (short)((uint6)uVar7 >> 0x20);
        sVar39 = (short)(CONCAT17(bVar51 & (byte)((ushort)*psVar29 >> 8),
                                  CONCAT16(bVar50 & (byte)*psVar29,uVar7)) >> 0x30);
        auVar44._4_2_ = sVar48;
        auVar44._0_4_ = param_4;
        auVar44._6_2_ = uVar49;
        auVar44._8_2_ = sVar48;
        auVar44._10_2_ = uVar49;
        auVar44._12_2_ = sVar48;
        auVar44._14_2_ = uVar49;
        auVar10._4_4_ = (int)auVar40._2_2_;
        auVar10._0_4_ = (int)auVar40._0_2_;
        auVar10._8_4_ = (int)auVar40._4_2_;
        auVar10._12_4_ = (int)auVar40._6_2_;
        auVar43 = NEON_cmhi(auVar44,auVar10,4);
        auVar41._4_2_ = sVar34;
        auVar41._0_4_ = (int)auVar40._8_2_;
        auVar41._6_2_ = sVar34 >> 0xf;
        auVar41._8_2_ = sVar36;
        auVar41._10_2_ = sVar36 >> 0xf;
        auVar41._12_2_ = sVar38;
        auVar41._14_2_ = sVar38 >> 0xf;
        auVar8._4_2_ = sVar48;
        auVar8._0_4_ = param_4;
        auVar8._6_2_ = uVar49;
        auVar8._8_2_ = sVar48;
        auVar8._10_2_ = uVar49;
        auVar8._12_2_ = sVar48;
        auVar8._14_2_ = uVar49;
        auVar41 = NEON_cmhi(auVar8,auVar41,4);
        auVar11._4_4_ = (int)auVar40._2_2_;
        auVar11._0_4_ = (int)auVar40._0_2_;
        auVar11._8_4_ = (int)auVar40._4_2_;
        auVar11._12_4_ = (int)auVar40._6_2_;
        auVar12._4_4_ = (int)(short)(sVar48 + -1);
        auVar12._0_4_ = (int)(short)(sVar48 + -1);
        auVar12._8_4_ = (int)(short)(sVar48 + -1);
        auVar12._12_4_ = (int)(short)(sVar48 + -1);
        auVar44 = NEON_bsl(auVar43,auVar11,auVar12,1);
        auVar43._4_2_ = sVar34;
        auVar43._0_4_ = (int)auVar40._8_2_;
        auVar43._6_2_ = sVar34 >> 0xf;
        auVar43._8_2_ = sVar36;
        auVar43._10_2_ = sVar36 >> 0xf;
        auVar43._12_2_ = sVar38;
        auVar43._14_2_ = sVar38 >> 0xf;
        auVar9._4_2_ = sVar48 + -1;
        auVar9._0_4_ = (int)(short)(sVar48 + -1);
        auVar9._6_2_ = (short)(sVar48 + -1) >> 0xf;
        auVar9._8_2_ = sVar48 + -1;
        auVar9._10_2_ = (short)(sVar48 + -1) >> 0xf;
        auVar9._12_2_ = sVar48 + -1;
        auVar9._14_2_ = (short)(sVar48 + -1) >> 0xf;
        auVar40 = NEON_bsl(auVar41,auVar43,auVar9,1);
        auVar45._0_8_ =
             CONCAT44(auVar44._4_4_ + (int)(short)((uint)uVar3 >> 0x10) * param_4,
                      auVar44._0_4_ + (int)sVar46 * param_4);
        auVar45._8_4_ = auVar44._8_4_ + (int)(short)((uint6)uVar4 >> 0x20) * param_4;
        auVar45._12_4_ =
             auVar44._12_4_ +
             (int)(short)(CONCAT17(bVar51 & (byte)((ushort)*psVar21 >> 8),
                                   CONCAT16(bVar50 & (byte)*psVar21,uVar4)) >> 0x30) * param_4;
        auVar42._0_8_ =
             CONCAT44(auVar40._4_4_ + CONCAT13(sVar35 >> 0xf,(int3)sVar35) * param_4,
                      auVar40._0_4_ + CONCAT13((short)(char)bVar47 >> 7,(int3)sVar5) * param_4);
        auVar42._8_4_ = auVar40._8_4_ + CONCAT13(sVar37 >> 0xf,(int3)sVar37) * param_4;
        auVar42._12_4_ = auVar40._12_4_ + CONCAT13(sVar39 >> 0xf,(int3)sVar39) * param_4;
        puVar31[1] = auVar45._8_8_;
        *puVar31 = auVar45._0_8_;
        puVar31[3] = auVar42._8_8_;
        puVar31[2] = auVar42._0_8_;
        puVar31 = puVar31 + 4;
      } while (psVar32 != param_2 + (ulong)((uVar30 >> 3) - 1) * 0x10 + 0x10);
      param_1 = (undefined8 *)((long)param_1 + (param_3 & 0xfffffff8) * 4);
      param_2 = param_2 + (param_3 & 0xfffffff8) * 2;
      uVar33 = uVar30 & 0xfffffff8;
      if ((param_3 & 7) == 0) goto LAB_001472fc;
    }
    sVar46 = *param_2;
    if (sVar46 < 0) {
      sVar46 = 0;
    }
    uVar13 = (ushort)param_5;
    uVar2 = (uint)(short)(sVar48 + -1);
    uVar1 = uVar2;
    if ((uint)(int)sVar46 < param_4) {
      uVar1 = (int)sVar46;
    }
    *(uint *)param_1 = uVar1 + (int)(short)(uVar13 & param_2[1]) * param_4;
    if (uVar33 + 1 < uVar30) {
      sVar48 = param_2[2];
      if (sVar48 < 0) {
        sVar48 = 0;
      }
      uVar1 = uVar2;
      if ((uint)(int)sVar48 < param_4) {
        uVar1 = (int)sVar48;
      }
      *(uint *)((long)param_1 + 4) = uVar1 + (int)(short)(uVar13 & param_2[3]) * param_4;
      if (uVar33 + 2 < uVar30) {
        sVar48 = param_2[4];
        if (sVar48 < 0) {
          sVar48 = 0;
        }
        uVar1 = uVar2;
        if ((uint)(int)sVar48 < param_4) {
          uVar1 = (int)sVar48;
        }
        *(uint *)(param_1 + 1) = uVar1 + (int)(short)(uVar13 & param_2[5]) * param_4;
        if (uVar33 + 3 < uVar30) {
          sVar48 = param_2[6];
          if (sVar48 < 0) {
            sVar48 = 0;
          }
          uVar1 = uVar2;
          if ((uint)(int)sVar48 < param_4) {
            uVar1 = (int)sVar48;
          }
          *(uint *)((long)param_1 + 0xc) = uVar1 + (int)(short)(uVar13 & param_2[7]) * param_4;
          if (uVar33 + 4 < uVar30) {
            sVar48 = param_2[8];
            if (sVar48 < 0) {
              sVar48 = 0;
            }
            uVar1 = uVar2;
            if ((uint)(int)sVar48 < param_4) {
              uVar1 = (int)sVar48;
            }
            *(uint *)(param_1 + 2) = uVar1 + (int)(short)(uVar13 & param_2[9]) * param_4;
            if (uVar33 + 5 < uVar30) {
              sVar48 = param_2[10];
              if (sVar48 < 0) {
                sVar48 = 0;
              }
              uVar1 = uVar2;
              if ((uint)(int)sVar48 < param_4) {
                uVar1 = (int)sVar48;
              }
              *(uint *)((long)param_1 + 0x14) =
                   uVar1 + (int)(short)(uVar13 & param_2[0xb]) * param_4;
              if (uVar33 + 6 < uVar30) {
                sVar48 = param_2[0xc];
                if (sVar48 < 0) {
                  sVar48 = 0;
                }
                if ((uint)(int)sVar48 < param_4) {
                  uVar2 = (int)sVar48;
                }
                *(uint *)(param_1 + 3) = uVar2 + (int)(short)(uVar13 & param_2[0xd]) * param_4;
              }
            }
          }
        }
      }
    }
  }
LAB_001472fc:
  if (lVar14 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar14 - ___stack_chk_guard,0);
}


