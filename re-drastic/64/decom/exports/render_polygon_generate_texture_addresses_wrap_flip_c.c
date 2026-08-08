/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_wrap_flip_c
 * Address  : 001478f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_generate_texture_addresses_wrap_flip_c
               (undefined8 *param_1,ushort *param_2,ulong param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  undefined6 uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  ushort uVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar22;
  undefined8 *puVar23;
  uint uVar24;
  ushort *puVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  undefined auVar35 [16];
  byte bVar37;
  ushort uVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
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
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  undefined4 uVar30;
  undefined6 uVar31;
  undefined8 uVar32;
  undefined auVar33 [12];
  undefined auVar34 [14];
  undefined auVar36 [16];
  
  lVar14 = ___stack_chk_guard;
  uVar22 = (uint)param_3;
  if (uVar22 != 0) {
    iVar1 = param_4 + -1;
    iVar2 = param_5 - 1;
    uVar13 = (ushort)iVar2;
    if (uVar22 - 1 < 7) {
      uVar24 = 0;
    }
    else {
      puVar23 = param_1;
      puVar25 = param_2;
      do {
        uVar38 = *puVar25;
        uVar9 = puVar25[1];
        puVar15 = puVar25 + 2;
        bVar39 = (byte)puVar25[3];
        bVar40 = (byte)(puVar25[3] >> 8);
        puVar16 = puVar25 + 4;
        bVar41 = (byte)puVar25[5];
        bVar42 = (byte)(puVar25[5] >> 8);
        puVar17 = puVar25 + 6;
        bVar43 = (byte)puVar25[7];
        bVar44 = (byte)(puVar25[7] >> 8);
        puVar18 = puVar25 + 8;
        uVar10 = puVar25[9];
        bVar45 = (byte)(uVar10 >> 8);
        puVar19 = puVar25 + 10;
        bVar46 = (byte)puVar25[0xb];
        bVar47 = (byte)(puVar25[0xb] >> 8);
        puVar20 = puVar25 + 0xc;
        bVar48 = (byte)puVar25[0xd];
        bVar49 = (byte)(puVar25[0xd] >> 8);
        puVar21 = puVar25 + 0xe;
        bVar50 = (byte)puVar25[0xf];
        bVar51 = (byte)(puVar25[0xf] >> 8);
        puVar25 = puVar25 + 0x10;
        uVar4 = CONCAT13(bVar40,CONCAT12(bVar39,uVar9));
        uVar5 = CONCAT15(bVar42,CONCAT14(bVar41,uVar4));
        auVar54._0_4_ = (int)(short)uVar9;
        auVar54._4_4_ = (int)(short)((uint)uVar4 >> 0x10);
        auVar54._8_4_ = (int)(short)((uint6)uVar5 >> 0x20);
        auVar54._12_4_ = (int)(short)(CONCAT17(bVar44,CONCAT16(bVar43,uVar5)) >> 0x30);
        uVar4 = CONCAT13(bVar47,CONCAT12(bVar46,uVar10));
        uVar5 = CONCAT15(bVar49,CONCAT14(bVar48,uVar4));
        auVar52._0_4_ = (int)(short)uVar10;
        auVar52._4_4_ = (int)(short)((uint)uVar4 >> 0x10);
        auVar52._8_4_ = (int)(short)((uint6)uVar5 >> 0x20);
        auVar52._12_4_ = (int)(short)(CONCAT17(bVar51,CONCAT16(bVar50,uVar5)) >> 0x30);
        bVar56 = (byte)iVar2;
        bVar57 = (byte)((uint)iVar2 >> 8);
        bVar58 = (byte)iVar1;
        bVar59 = (byte)((uint)iVar1 >> 8);
        bVar37 = bVar59 & (byte)(*puVar18 >> 8);
        auVar55._4_4_ = param_5;
        auVar55._0_4_ = param_5;
        auVar55._8_4_ = param_5;
        auVar55._12_4_ = param_5;
        auVar55 = NEON_cmtst(auVar54,auVar55,4);
        auVar11._4_4_ = param_5;
        auVar11._0_4_ = param_5;
        auVar11._8_4_ = param_5;
        auVar11._12_4_ = param_5;
        auVar53 = NEON_cmtst(auVar52,auVar11,4);
        sVar3 = CONCAT11(bVar59 & (byte)(uVar38 >> 8),bVar58 & (byte)uVar38);
        uVar4 = CONCAT13(bVar59 & (byte)(*puVar15 >> 8),CONCAT12(bVar58 & (byte)*puVar15,sVar3));
        uVar5 = CONCAT15(bVar59 & (byte)(*puVar16 >> 8),CONCAT14(bVar58 & (byte)*puVar16,uVar4));
        sVar7 = CONCAT11(bVar37,bVar58 & (byte)*puVar18);
        uVar30 = CONCAT13(bVar59 & (byte)(*puVar19 >> 8),CONCAT12(bVar58 & (byte)*puVar19,sVar7));
        uVar31 = CONCAT15(bVar59 & (byte)(*puVar20 >> 8),CONCAT14(bVar58 & (byte)*puVar20,uVar30));
        sVar26 = (short)((uint)uVar30 >> 0x10);
        sVar27 = (short)((uint6)uVar31 >> 0x20);
        sVar28 = (short)(CONCAT17(bVar59 & (byte)(*puVar21 >> 8),
                                  CONCAT16(bVar58 & (byte)*puVar21,uVar31)) >> 0x30);
        auVar35._2_2_ = auVar55._4_2_;
        auVar35._0_2_ = auVar55._0_2_;
        auVar35._4_2_ = auVar55._8_2_;
        auVar35._6_2_ = auVar55._12_2_;
        auVar35._8_2_ = auVar53._0_2_;
        auVar35._10_2_ = auVar53._4_2_;
        auVar35._12_2_ = auVar53._8_2_;
        auVar35._14_2_ = auVar53._12_2_;
        auVar53[2] = bVar39;
        auVar53._0_2_ = uVar9;
        auVar53[3] = bVar40;
        auVar53[4] = bVar41;
        auVar53[5] = bVar42;
        auVar53[6] = bVar43;
        auVar53[7] = bVar44;
        auVar53[8] = (byte)uVar10;
        auVar53[9] = bVar45;
        auVar53[10] = bVar46;
        auVar53[11] = bVar47;
        auVar53[12] = bVar48;
        auVar53[13] = bVar49;
        auVar53[14] = bVar50;
        auVar53[15] = bVar51;
        auVar12[1] = bVar57 ^ (byte)(uVar9 >> 8);
        auVar12[0] = bVar56 ^ (byte)uVar9;
        auVar12[2] = bVar56 ^ bVar39;
        auVar12[3] = bVar57 ^ bVar40;
        auVar12[4] = bVar56 ^ bVar41;
        auVar12[5] = bVar57 ^ bVar42;
        auVar12[6] = bVar56 ^ bVar43;
        auVar12[7] = bVar57 ^ bVar44;
        auVar12[8] = bVar56 ^ (byte)uVar10;
        auVar12[9] = bVar57 ^ bVar45;
        auVar12[10] = bVar56 ^ bVar46;
        auVar12[11] = bVar57 ^ bVar47;
        auVar12[12] = bVar56 ^ bVar48;
        auVar12[13] = bVar57 ^ bVar49;
        auVar12[14] = bVar56 ^ bVar50;
        auVar12[15] = bVar57 ^ bVar51;
        auVar53 = NEON_bsl(auVar35,auVar12,auVar53,1);
        sVar29 = CONCAT11(auVar53[1] & bVar57,auVar53[0] & bVar56);
        uVar30 = CONCAT13(auVar53[3] & bVar57,CONCAT12(auVar53[2] & bVar56,sVar29));
        uVar31 = CONCAT15(auVar53[5] & bVar57,CONCAT14(auVar53[4] & bVar56,uVar30));
        uVar32 = CONCAT17(auVar53[7] & bVar57,CONCAT16(auVar53[6] & bVar56,uVar31));
        auVar33._0_10_ = CONCAT19(auVar53[9] & bVar57,CONCAT18(auVar53[8] & bVar56,uVar32));
        auVar33[10] = auVar53[10] & bVar56;
        auVar33[11] = auVar53[11] & bVar57;
        auVar34[12] = auVar53[12] & bVar56;
        auVar34._0_12_ = auVar33;
        auVar34[13] = auVar53[13] & bVar57;
        auVar36[14] = auVar53[14] & bVar56;
        auVar36._0_14_ = auVar34;
        auVar36[15] = auVar53[15] & bVar57;
        iVar6 = CONCAT13(sVar26 >> 0xf,(int3)sVar26) + auVar33._10_2_ * param_4;
        iVar8 = CONCAT13(sVar28 >> 0xf,(int3)sVar28) + auVar36._14_2_ * param_4;
        puVar23[1] = CONCAT44((int)(short)(CONCAT17(bVar59 & (byte)(*puVar17 >> 8),
                                                    CONCAT16(bVar58 & (byte)*puVar17,uVar5)) >> 0x30
                                          ) + (short)((ulong)uVar32 >> 0x30) * param_4,
                              (int)(short)((uint6)uVar5 >> 0x20) +
                              (short)((uint6)uVar31 >> 0x20) * param_4);
        *puVar23 = CONCAT44((int)(short)((uint)uVar4 >> 0x10) +
                            (short)((uint)uVar30 >> 0x10) * param_4,(int)sVar3 + sVar29 * param_4);
        puVar23[3] = CONCAT17((char)((uint)iVar8 >> 0x18),
                              CONCAT16((char)((uint)iVar8 >> 0x10),
                                       CONCAT15((char)((uint)iVar8 >> 8),
                                                CONCAT14((char)iVar8,
                                                         CONCAT13(sVar27 >> 0xf,(int3)sVar27) +
                                                         auVar34._12_2_ * param_4))));
        puVar23[2] = CONCAT17((char)((uint)iVar6 >> 0x18),
                              CONCAT16((char)((uint)iVar6 >> 0x10),
                                       CONCAT15((char)((uint)iVar6 >> 8),
                                                CONCAT14((char)iVar6,
                                                         CONCAT13((short)(char)bVar37 >> 7,
                                                                  (int3)sVar7) +
                                                         (short)((unkuint10)auVar33._0_10_ >> 0x40)
                                                         * param_4))));
        puVar23 = puVar23 + 4;
      } while (puVar25 != param_2 + (ulong)((uVar22 >> 3) - 1) * 0x10 + 0x10);
      param_1 = (undefined8 *)((long)param_1 + (param_3 & 0xfffffff8) * 4);
      param_2 = param_2 + (param_3 & 0xfffffff8) * 2;
      uVar24 = uVar22 & 0xfffffff8;
      if ((param_3 & 7) == 0) goto LAB_00147b60;
    }
    uVar9 = param_2[1];
    if (((int)(short)uVar9 & param_5) != 0) {
      uVar9 = uVar13 ^ uVar9;
    }
    uVar10 = (ushort)iVar1;
    *(int *)param_1 = (short)(uVar13 & uVar9) * param_4 + (int)(short)(uVar10 & *param_2);
    if (uVar24 + 1 < uVar22) {
      uVar9 = param_2[3];
      if (((int)(short)uVar9 & param_5) != 0) {
        uVar9 = uVar9 ^ uVar13;
      }
      *(int *)((long)param_1 + 4) =
           (short)(uVar13 & uVar9) * param_4 + (int)(short)(uVar10 & param_2[2]);
      if (uVar24 + 2 < uVar22) {
        uVar9 = param_2[5];
        if (((int)(short)uVar9 & param_5) != 0) {
          uVar9 = uVar13 ^ uVar9;
        }
        *(int *)(param_1 + 1) =
             (short)(uVar13 & uVar9) * param_4 + (int)(short)(uVar10 & param_2[4]);
        if (uVar24 + 3 < uVar22) {
          uVar9 = param_2[7];
          if (((int)(short)uVar9 & param_5) != 0) {
            uVar9 = uVar13 ^ uVar9;
          }
          *(int *)((long)param_1 + 0xc) =
               (short)(uVar13 & uVar9) * param_4 + (int)(short)(uVar10 & param_2[6]);
          if (uVar24 + 4 < uVar22) {
            uVar9 = param_2[9];
            if (((int)(short)uVar9 & param_5) != 0) {
              uVar9 = uVar13 ^ uVar9;
            }
            *(int *)(param_1 + 2) =
                 (short)(uVar13 & uVar9) * param_4 + (int)(short)(uVar10 & param_2[8]);
            if (uVar24 + 5 < uVar22) {
              uVar9 = param_2[0xb];
              if (((int)(short)uVar9 & param_5) != 0) {
                uVar9 = uVar13 ^ uVar9;
              }
              *(int *)((long)param_1 + 0x14) =
                   (short)(uVar13 & uVar9) * param_4 + (int)(short)(uVar10 & param_2[10]);
              if (uVar24 + 6 < uVar22) {
                uVar9 = param_2[0xd];
                if (((int)(short)uVar9 & param_5) != 0) {
                  uVar9 = uVar9 ^ uVar13;
                }
                *(int *)(param_1 + 3) =
                     (short)(uVar9 & uVar13) * param_4 + (int)(short)(uVar10 & param_2[0xc]);
              }
            }
          }
        }
      }
    }
  }
LAB_00147b60:
  if (lVar14 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar14 - ___stack_chk_guard,0);
}


