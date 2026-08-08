/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_wrap_clamp_c
 * Address  : 00146af0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_generate_texture_addresses_wrap_clamp_c
               (undefined8 *param_1,ushort *param_2,ulong param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined6 uVar6;
  ushort uVar7;
  int iVar8;
  short sVar9;
  undefined4 uVar10;
  undefined6 uVar11;
  int iVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  ushort uVar15;
  long lVar16;
  ushort *puVar17;
  uint uVar24;
  undefined8 *puVar25;
  ushort *puVar26;
  uint uVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  byte bVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  short sVar39;
  undefined2 uVar40;
  byte bVar41;
  byte bVar42;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  
  lVar16 = ___stack_chk_guard;
  uVar24 = (uint)param_3;
  if (uVar24 != 0) {
    iVar2 = param_4 + -1;
    uVar15 = (ushort)iVar2;
    sVar39 = (short)param_5;
    if (uVar24 - 1 < 7) {
      uVar27 = 0;
    }
    else {
      uVar40 = (undefined2)(param_5 >> 0x10);
      puVar25 = param_1;
      puVar26 = param_2;
      do {
        uVar7 = *puVar26;
        auVar32._0_2_ = puVar26[1];
        puVar17 = puVar26 + 2;
        auVar32._2_2_ = puVar26[3];
        puVar18 = puVar26 + 4;
        auVar32._4_2_ = puVar26[5];
        puVar19 = puVar26 + 6;
        auVar32._6_2_ = puVar26[7];
        puVar20 = puVar26 + 8;
        auVar32._8_2_ = puVar26[9];
        puVar21 = puVar26 + 10;
        auVar32._10_2_ = puVar26[0xb];
        puVar22 = puVar26 + 0xc;
        auVar32._12_2_ = puVar26[0xd];
        puVar23 = puVar26 + 0xe;
        auVar32._14_2_ = puVar26[0xf];
        puVar26 = puVar26 + 0x10;
        auVar34 = NEON_smax(ZEXT816(0),auVar32,2);
        bVar41 = (byte)iVar2;
        bVar42 = (byte)((uint)iVar2 >> 8);
        bVar31 = bVar42 & (byte)(*puVar20 >> 8);
        auVar33._0_4_ = (int)auVar34._8_2_;
        auVar33._4_4_ = (int)auVar34._10_2_;
        auVar33._8_4_ = (int)auVar34._12_2_;
        auVar33._12_4_ = (int)auVar34._14_2_;
        sVar4 = CONCAT11(bVar42 & (byte)(uVar7 >> 8),bVar41 & (byte)uVar7);
        uVar5 = CONCAT13(bVar42 & (byte)(*puVar17 >> 8),CONCAT12(bVar41 & (byte)*puVar17,sVar4));
        uVar6 = CONCAT15(bVar42 & (byte)(*puVar18 >> 8),CONCAT14(bVar41 & (byte)*puVar18,uVar5));
        sVar9 = CONCAT11(bVar31,bVar41 & (byte)*puVar20);
        uVar10 = CONCAT13(bVar42 & (byte)(*puVar21 >> 8),CONCAT12(bVar41 & (byte)*puVar21,sVar9));
        uVar11 = CONCAT15(bVar42 & (byte)(*puVar22 >> 8),CONCAT14(bVar41 & (byte)*puVar22,uVar10));
        sVar28 = (short)((uint)uVar10 >> 0x10);
        sVar29 = (short)((uint6)uVar11 >> 0x20);
        sVar30 = (short)(CONCAT17(bVar42 & (byte)(*puVar23 >> 8),
                                  CONCAT16(bVar41 & (byte)*puVar23,uVar11)) >> 0x30);
        auVar36._4_4_ = (int)auVar34._2_2_;
        auVar36._0_4_ = (int)auVar34._0_2_;
        auVar36._8_4_ = (int)auVar34._4_2_;
        auVar36._12_4_ = (int)auVar34._6_2_;
        auVar37._4_2_ = sVar39;
        auVar37._0_4_ = param_5;
        auVar37._6_2_ = uVar40;
        auVar37._8_2_ = sVar39;
        auVar37._10_2_ = uVar40;
        auVar37._12_2_ = sVar39;
        auVar37._14_2_ = uVar40;
        auVar37 = NEON_cmhi(auVar37,auVar36,4);
        auVar13._4_2_ = sVar39;
        auVar13._0_4_ = param_5;
        auVar13._6_2_ = uVar40;
        auVar13._8_2_ = sVar39;
        auVar13._10_2_ = uVar40;
        auVar13._12_2_ = sVar39;
        auVar13._14_2_ = uVar40;
        auVar36 = NEON_cmhi(auVar13,auVar33,4);
        auVar38._4_4_ = (int)auVar34._2_2_;
        auVar38._0_4_ = (int)auVar34._0_2_;
        auVar38._8_4_ = (int)auVar34._4_2_;
        auVar38._12_4_ = (int)auVar34._6_2_;
        auVar14._4_4_ = (int)(short)(sVar39 + -1);
        auVar14._0_4_ = (int)(short)(sVar39 + -1);
        auVar14._8_4_ = (int)(short)(sVar39 + -1);
        auVar14._12_4_ = (int)(short)(sVar39 + -1);
        auVar38 = NEON_bsl(auVar37,auVar38,auVar14,1);
        auVar34._4_2_ = sVar39 + -1;
        auVar34._0_4_ = (int)(short)(sVar39 + -1);
        auVar34._6_2_ = (short)(sVar39 + -1) >> 0xf;
        auVar34._8_2_ = sVar39 + -1;
        auVar34._10_2_ = (short)(sVar39 + -1) >> 0xf;
        auVar34._12_2_ = sVar39 + -1;
        auVar34._14_2_ = (short)(sVar39 + -1) >> 0xf;
        auVar34 = NEON_bif(auVar33,auVar34,auVar36,1);
        auVar35._0_8_ =
             CONCAT44((int)(short)((uint)uVar5 >> 0x10) + auVar38._4_4_ * param_4,
                      (int)sVar4 + auVar38._0_4_ * param_4);
        auVar35._8_4_ = (int)(short)((uint6)uVar6 >> 0x20) + auVar38._8_4_ * param_4;
        auVar35._12_4_ =
             (int)(short)(CONCAT17(bVar42 & (byte)(*puVar19 >> 8),
                                   CONCAT16(bVar41 & (byte)*puVar19,uVar6)) >> 0x30) +
             auVar38._12_4_ * param_4;
        iVar8 = CONCAT13(sVar28 >> 0xf,(int3)sVar28) + auVar34._4_4_ * param_4;
        iVar12 = CONCAT13(sVar30 >> 0xf,(int3)sVar30) + auVar34._12_4_ * param_4;
        puVar25[1] = auVar35._8_8_;
        *puVar25 = auVar35._0_8_;
        puVar25[3] = CONCAT17((char)((uint)iVar12 >> 0x18),
                              CONCAT16((char)((uint)iVar12 >> 0x10),
                                       CONCAT15((char)((uint)iVar12 >> 8),
                                                CONCAT14((char)iVar12,
                                                         CONCAT13(sVar29 >> 0xf,(int3)sVar29) +
                                                         auVar34._8_4_ * param_4))));
        puVar25[2] = CONCAT17((char)((uint)iVar8 >> 0x18),
                              CONCAT16((char)((uint)iVar8 >> 0x10),
                                       CONCAT15((char)((uint)iVar8 >> 8),
                                                CONCAT14((char)iVar8,
                                                         CONCAT13((short)(char)bVar31 >> 7,
                                                                  (int3)sVar9) +
                                                         auVar34._0_4_ * param_4))));
        puVar25 = puVar25 + 4;
      } while (puVar26 != param_2 + (ulong)((uVar24 >> 3) - 1) * 0x10 + 0x10);
      param_1 = (undefined8 *)((long)param_1 + (param_3 & 0xfffffff8) * 4);
      param_2 = param_2 + (param_3 & 0xfffffff8) * 2;
      uVar27 = uVar24 & 0xfffffff8;
      if ((param_3 & 7) == 0) goto LAB_00146d4c;
    }
    uVar7 = param_2[1];
    if ((short)uVar7 < 0) {
      uVar7 = 0;
    }
    uVar3 = (uint)(short)(sVar39 + -1);
    uVar1 = uVar3;
    if ((uint)(int)(short)uVar7 < param_5) {
      uVar1 = (int)(short)uVar7;
    }
    *(uint *)param_1 = param_4 * uVar1 + (int)(short)(uVar15 & *param_2);
    if (uVar27 + 1 < uVar24) {
      uVar7 = param_2[3];
      if ((short)uVar7 < 0) {
        uVar7 = 0;
      }
      uVar1 = uVar3;
      if ((uint)(int)(short)uVar7 < param_5) {
        uVar1 = (int)(short)uVar7;
      }
      *(uint *)((long)param_1 + 4) = param_4 * uVar1 + (int)(short)(uVar15 & param_2[2]);
      if (uVar27 + 2 < uVar24) {
        uVar7 = param_2[5];
        if ((short)uVar7 < 0) {
          uVar7 = 0;
        }
        uVar1 = uVar3;
        if ((uint)(int)(short)uVar7 < param_5) {
          uVar1 = (int)(short)uVar7;
        }
        *(uint *)(param_1 + 1) = param_4 * uVar1 + (int)(short)(uVar15 & param_2[4]);
        if (uVar27 + 3 < uVar24) {
          uVar7 = param_2[7];
          if ((short)uVar7 < 0) {
            uVar7 = 0;
          }
          uVar1 = uVar3;
          if ((uint)(int)(short)uVar7 < param_5) {
            uVar1 = (int)(short)uVar7;
          }
          *(uint *)((long)param_1 + 0xc) = param_4 * uVar1 + (int)(short)(uVar15 & param_2[6]);
          if (uVar27 + 4 < uVar24) {
            uVar7 = param_2[9];
            if ((short)uVar7 < 0) {
              uVar7 = 0;
            }
            uVar1 = uVar3;
            if ((uint)(int)(short)uVar7 < param_5) {
              uVar1 = (int)(short)uVar7;
            }
            *(uint *)(param_1 + 2) = param_4 * uVar1 + (int)(short)(uVar15 & param_2[8]);
            if (uVar27 + 5 < uVar24) {
              uVar7 = param_2[0xb];
              if ((short)uVar7 < 0) {
                uVar7 = 0;
              }
              uVar1 = uVar3;
              if ((uint)(int)(short)uVar7 < param_5) {
                uVar1 = (int)(short)uVar7;
              }
              *(uint *)((long)param_1 + 0x14) = param_4 * uVar1 + (int)(short)(uVar15 & param_2[10])
              ;
              if (uVar27 + 6 < uVar24) {
                uVar7 = param_2[0xd];
                if ((short)uVar7 < 0) {
                  uVar7 = 0;
                }
                if ((uint)(int)(short)uVar7 < param_5) {
                  uVar3 = (int)(short)uVar7;
                }
                *(uint *)(param_1 + 3) = param_4 * uVar3 + (int)(short)(uVar15 & param_2[0xc]);
              }
            }
          }
        }
      }
    }
  }
LAB_00146d4c:
  if (lVar16 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar16 - ___stack_chk_guard,0);
}


