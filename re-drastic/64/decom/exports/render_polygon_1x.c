/*
 * Ghidra decompilation
 *
 * Function : render_polygon_1x
 * Address  : 0014ea30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_1x(long param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  ushort *puVar1;
  int **ppiVar2;
  uint uVar3;
  short sVar4;
  uint6 uVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  ushort *puVar9;
  undefined4 uVar10;
  int *piVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined uVar20;
  undefined uVar21;
  undefined8 extraout_x18;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  ushort uVar29;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  undefined auVar31 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  ushort uVar37;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  uint uVar53;
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined *local_7438;
  int *local_73d8 [2];
  long local_73c8;
  int *local_73c0;
  long local_73b8;
  long local_73b0;
  long local_73a8;
  long local_73a0;
  long local_7398;
  undefined auStack_7390 [4];
  undefined auStack_738c [172];
  undefined auStack_72e0 [1232];
  ushort local_6e10 [88];
  ushort local_6d60 [88];
  undefined auStack_6cb0 [352];
  undefined auStack_6b50 [27464];
  long local_8;
  undefined auVar30 [12];
  undefined auVar38 [12];
  
  uVar22 = *(uint *)(param_2 + 8);
  local_8 = ___stack_chk_guard;
  uVar16 = (ulong)*(ushort *)(param_2 + 0x1a);
  uVar53 = *(uint *)(&vertex_orders + ((ulong)(uVar22 >> 0x10) & 0x7f) * 4);
  uVar13 = uVar22 >> 0x17;
  uVar3 = uVar22 >> 8 & 0xff;
  uVar18 = uVar22 & 0xf;
  lVar19 = *(long *)(param_1 + 0x24000);
  lVar17 = *(long *)(param_1 + 0x24008);
  if ((uVar22 & 0xf) != 0) {
    local_73d8[0] = (int *)(param_3 + (((ulong)uVar53 & 0xf) + uVar16) * 0x10);
    if (uVar18 != 1) {
      local_73d8[1] = (int *)(param_3 + (((ulong)(uVar53 >> 4) & 0xf) + uVar16) * 0x10);
      if (uVar18 != 2) {
        local_73c8 = param_3 + (((ulong)(uVar53 >> 8) & 0xf) + uVar16) * 0x10;
        if (uVar18 != 3) {
          local_73c0 = (int *)(param_3 + (((ulong)(uVar53 >> 0xc) & 0xf) + uVar16) * 0x10);
          if (uVar18 != 4) {
            local_73b8 = param_3 + (((ulong)(uVar53 >> 0x10) & 0xf) + uVar16) * 0x10;
            if (uVar18 != 5) {
              local_73b0 = param_3 + (((ulong)(uVar53 >> 0x14) & 0xf) + uVar16) * 0x10;
              if (uVar18 != 6) {
                local_73a8 = param_3 + (((ulong)(uVar53 >> 0x18) & 0xf) + uVar16) * 0x10;
                if ((uVar18 != 7) &&
                   (local_73a0 = param_3 + ((uVar53 >> 0x1c) + uVar16) * 0x10, uVar18 != 8)) {
                  local_7398 = param_3 + uVar16 * 0x10;
                }
              }
            }
          }
        }
      }
    }
  }
  piVar11 = local_73d8[0];
  uVar53 = uVar22 >> 8 & 0x40;
  local_73d8[uVar18] = local_73d8[0];
  uVar29 = *(ushort *)((long)piVar11 + 6);
  if ((uVar22 >> 0xe & 1) == 0) {
    bVar8 = uVar29 < param_4;
    uVar22 = uVar13 - uVar29;
    uVar25 = (uint)uVar29;
    if (bVar8) {
      iVar24 = param_4 - uVar25;
      uVar22 = uVar22 - iVar24;
      uVar20 = 3;
    }
    else {
      iVar24 = 0;
      uVar20 = 2;
    }
    uVar21 = bVar8;
    if (param_5 < uVar13) {
      uVar22 = (param_5 - uVar13) + uVar22;
      uVar53 = 2;
      uVar13 = param_5;
      uVar21 = uVar20;
    }
    if (0 < (int)uVar22) {
      puVar15 = local_6e10;
      ppiVar2 = local_73d8 + uVar18;
      puVar14 = local_6d60;
      if ((*(uint *)(polygon_sort_list_15121 + lVar19 + 0xe5500) >> 5 & 1) == 0) {
        render_polygon_interpolate_edges_constprop_0
                  (auStack_7390,auStack_6cb0,local_73d8,param_4,uVar13,uVar3);
        render_polygon_interpolate_edges_constprop_1
                  (auStack_72e0,auStack_6cb0,ppiVar2,param_4,uVar13,uVar3);
        uVar13 = uVar22 - 1;
        if (uVar13 < 8) {
          uVar18 = 0;
        }
        else {
          puVar12 = puVar15;
          do {
            uVar16 = CONCAT26(puVar12[6],CONCAT24(puVar12[4],CONCAT22(puVar12[2],*puVar12))) &
                     0x7fff7fff7fff7fff;
            *puVar12 = (ushort)uVar16;
            puVar12[2] = (ushort)(uVar16 >> 0x10);
            puVar12[4] = (ushort)(uVar16 >> 0x20);
            puVar12[6] = (ushort)(uVar16 >> 0x30);
            puVar12[8] = puVar12[8] & 0x7fff;
            puVar12[10] = puVar12[10] & 0x7fff;
            puVar12[0xc] = puVar12[0xc] & 0x7fff;
            puVar12[0xe] = puVar12[0xe] & 0x7fff;
            puVar9 = puVar12 + 0x66;
            uVar16 = CONCAT26(puVar12[0x5e],
                              CONCAT24(puVar12[0x5c],CONCAT22(puVar12[0x5a],puVar12[0x58]))) &
                     0x7fff7fff7fff7fff;
            puVar12[0x58] = (ushort)uVar16;
            puVar12[0x5a] = (ushort)(uVar16 >> 0x10);
            puVar12[0x5c] = (ushort)(uVar16 >> 0x20);
            puVar12[0x5e] = (ushort)(uVar16 >> 0x30);
            puVar1 = puVar12 + 0x66;
            puVar12[0x60] = puVar12[0x60] & 0x7fff;
            puVar12[0x62] = puVar12[0x62] & 0x7fff;
            puVar12[100] = puVar12[100] & 0x7fff;
            puVar12 = puVar12 + 0x10;
            *puVar1 = *puVar9 & 0x7fff;
          } while (puVar12 != puVar15 + (ulong)(uVar13 >> 3) * 0x10);
          uVar18 = uVar13 & 0xfffffff8;
          puVar15 = puVar15 + ((ulong)uVar13 & 0xfffffff8) * 2;
          puVar14 = puVar14 + ((ulong)uVar13 & 0xfffffff8) * 2;
        }
        *puVar15 = *puVar15 & 0x7fff;
        *puVar14 = *puVar14 & 0x7fff;
        if ((int)(uVar18 + 1) < (int)uVar22) {
          puVar15[2] = puVar15[2] & 0x7fff;
          puVar14[2] = puVar14[2] & 0x7fff;
          if ((int)(uVar18 + 2) < (int)uVar22) {
            puVar15[4] = puVar15[4] & 0x7fff;
            puVar14[4] = puVar14[4] & 0x7fff;
            if ((int)(uVar18 + 3) < (int)uVar22) {
              puVar15[6] = puVar15[6] & 0x7fff;
              puVar14[6] = puVar14[6] & 0x7fff;
              if ((int)(uVar18 + 4) < (int)uVar22) {
                puVar15[8] = puVar15[8] & 0x7fff;
                puVar14[8] = puVar14[8] & 0x7fff;
                if ((int)(uVar18 + 5) < (int)uVar22) {
                  puVar15[10] = puVar15[10] & 0x7fff;
                  puVar14[10] = puVar14[10] & 0x7fff;
                  if ((int)(uVar18 + 6) < (int)uVar22) {
                    puVar15[0xc] = puVar15[0xc] & 0x7fff;
                    puVar14[0xc] = puVar14[0xc] & 0x7fff;
                    if ((int)(uVar18 + 7) < (int)uVar22) {
                      puVar15[0xe] = puVar15[0xe] & 0x7fff;
                      puVar14[0xe] = puVar14[0xe] & 0x7fff;
                    }
                  }
                }
              }
            }
          }
        }
        render_polygon_setup_spans_asm_1x(auStack_7390,uVar22);
        render_polygon_setup_1x
                  (param_1,auStack_7390,param_2,auStack_6b50,(uVar25 - param_4) + iVar24,uVar22,
                   uVar3,local_73d8[0]);
      }
      else {
        uVar6 = param_4;
        uVar18 = uVar22;
        local_7438 = auStack_7390;
        if (bVar8) {
          uVar6 = param_4 - 1;
          uVar18 = uVar22 + 1;
          local_7438 = auStack_738c;
        }
        if (uVar53 != 0) {
          uVar18 = uVar18 + 1;
          uVar13 = uVar13 + 1;
        }
        render_polygon_interpolate_edges_constprop_0(auStack_7390);
        render_polygon_interpolate_edges_constprop_1
                  (auStack_72e0,auStack_6cb0,ppiVar2,uVar6,uVar13,uVar3);
        uVar13 = uVar18 - 1;
        if (uVar13 < 8) {
          uVar53 = 0;
        }
        else {
          puVar12 = puVar15;
          do {
            uVar29 = *puVar12;
            uVar32 = puVar12[2];
            uVar33 = puVar12[4];
            auVar30._0_6_ = CONCAT24(uVar33,CONCAT22(uVar32,uVar29));
            auVar30._6_2_ = puVar12[6];
            auVar30._8_2_ = puVar12[8];
            auVar30._10_2_ = puVar12[10];
            uVar34 = puVar12[0xc];
            uVar37 = puVar12[0x58];
            uVar41 = puVar12[0x5a];
            uVar42 = puVar12[0x5c];
            auVar38._0_6_ = CONCAT24(uVar42,CONCAT22(uVar41,uVar37));
            auVar38._6_2_ = puVar12[0x5e];
            auVar38._8_2_ = puVar12[0x60];
            auVar38._10_2_ = puVar12[0x62];
            uVar43 = puVar12[100];
            auVar35._0_8_ =
                 CONCAT17((char)(auVar30._6_2_ >> 8),
                          (uint7)(CONCAT15((char)(uVar33 >> 8),
                                           (uint5)(CONCAT13((char)(uVar32 >> 8),
                                                            (uint3)((byte)(uVar29 >> 8) & 0x81) << 8
                                                           ) & 0x81ffffff)) & 0x81ffffffffff)) &
                 0x81ffffffffffffff;
            auVar35[8] = 0;
            auVar35[9] = (byte)(auVar30._8_2_ >> 8) & 0x81;
            auVar35[10] = 0;
            auVar35[11] = (byte)(auVar30._10_2_ >> 8) & 0x81;
            auVar35[12] = 0;
            auVar35[13] = (byte)(uVar34 >> 8) & 0x81;
            auVar35[14] = 0;
            auVar35[15] = (byte)(puVar12[0xe] >> 8) & 0x81;
            auVar39._0_8_ =
                 CONCAT17((char)(auVar38._6_2_ >> 8),
                          (uint7)(CONCAT15((char)(uVar42 >> 8),
                                           (uint5)(CONCAT13((char)(uVar41 >> 8),
                                                            (uint3)((byte)(uVar37 >> 8) & 0x81) << 8
                                                           ) & 0x81ffffff)) & 0x81ffffffffff)) &
                 0x81ffffffffffffff;
            auVar39[8] = 0;
            auVar39[9] = (byte)(auVar38._8_2_ >> 8) & 0x81;
            auVar39[10] = 0;
            auVar39[11] = (byte)(auVar38._10_2_ >> 8) & 0x81;
            auVar39[12] = 0;
            auVar39[13] = (byte)(uVar43 >> 8) & 0x81;
            auVar39[14] = 0;
            auVar39[15] = (byte)(puVar12[0x66] >> 8) & 0x81;
            uVar47 = auVar30._6_2_ & 0x7fff;
            uVar48 = puVar12[0xe] & 0x7fff;
            auVar44 = NEON_cmeq(auVar35,0,2);
            uVar46 = puVar12[0x66] & 0x7fff;
            auVar40 = NEON_cmeq(auVar39,0,2);
            uVar5 = auVar30._0_6_ & 0x7fff7fff7fff;
            uVar53 = CONCAT22(0,(ushort)uVar5);
            uVar27 = (undefined2)(uVar5 >> 0x10);
            uVar28 = (undefined2)(uVar5 >> 0x20);
            uVar5 = CONCAT24(uVar34,auVar30._8_4_) & 0x7fff7fff7fff;
            auVar49._2_2_ = 0;
            auVar49._0_2_ = (ushort)uVar5;
            auVar49._4_2_ = (short)(uVar5 >> 0x10);
            auVar49._6_2_ = 0;
            auVar49._8_2_ = (short)(uVar5 >> 0x20);
            auVar49._10_2_ = 0;
            auVar49._12_2_ = uVar48;
            auVar49._14_2_ = 0;
            uVar5 = CONCAT24(uVar43,auVar38._8_4_) & 0x7fff7fff7fff;
            auVar31._2_2_ = 0;
            auVar31._0_2_ = (ushort)uVar5;
            auVar31._4_2_ = (short)(uVar5 >> 0x10);
            auVar31._6_2_ = 0;
            auVar31._8_2_ = (short)(uVar5 >> 0x20);
            auVar31._10_2_ = 0;
            auVar31._12_2_ = uVar46;
            auVar31._14_2_ = 0;
            uVar5 = auVar38._0_6_ & 0x7fff7fff7fff;
            auVar51._2_2_ = 0;
            auVar51._0_2_ = (ushort)uVar5;
            auVar51._4_2_ = (short)(uVar5 >> 0x10);
            auVar51._6_2_ = 0;
            auVar51._8_2_ = (short)(uVar5 >> 0x20);
            auVar51._10_2_ = 0;
            auVar51._12_2_ = auVar38._6_2_ & 0x7fff;
            auVar51._14_2_ = 0;
            auVar54 = NEON_cmhi(auVar49,auVar31,4);
            auVar50._4_2_ = uVar27;
            auVar50._0_4_ = uVar53;
            auVar50._6_2_ = 0;
            auVar50._8_2_ = uVar28;
            auVar50._10_2_ = 0;
            auVar50._12_2_ = uVar47;
            auVar50._14_2_ = 0;
            auVar55 = NEON_cmhi(auVar50,auVar51,4);
            auVar50 = NEON_cmhs(auVar31,auVar49,4);
            auVar52._4_2_ = uVar27;
            auVar52._0_4_ = uVar53;
            auVar52._6_2_ = 0;
            auVar52._8_2_ = uVar28;
            auVar52._10_2_ = 0;
            auVar52._12_2_ = uVar47;
            auVar52._14_2_ = 0;
            auVar52 = NEON_cmhs(auVar51,auVar52,4);
            auVar36[0] = auVar55[0] & auVar44[0];
            auVar36[1] = auVar55[1] & auVar44[1];
            auVar36[2] = auVar55[4] & auVar44[2];
            auVar36[3] = auVar55[5] & auVar44[3];
            auVar36[4] = auVar55[8] & auVar44[4];
            auVar36[5] = auVar55[9] & auVar44[5];
            auVar36[6] = auVar55[12] & auVar44[6];
            auVar36[7] = auVar55[13] & auVar44[7];
            auVar36[8] = auVar54[0] & auVar44[8];
            auVar36[9] = auVar54[1] & auVar44[9];
            auVar36[10] = auVar54[4] & auVar44[10];
            auVar36[11] = auVar54[5] & auVar44[11];
            auVar36[12] = auVar54[8] & auVar44[12];
            auVar36[13] = auVar54[9] & auVar44[13];
            auVar36[14] = auVar54[12] & auVar44[14];
            auVar36[15] = auVar54[13] & auVar44[15];
            auVar45._0_2_ = (uVar37 & 0x7fff) + 1;
            auVar45._2_2_ = (uVar41 & 0x7fff) + 1;
            auVar45._4_2_ = (uVar42 & 0x7fff) + 1;
            auVar45._6_2_ = (auVar38._6_2_ & 0x7fff) + 1;
            auVar45._8_2_ = (auVar38._8_2_ & 0x7fff) + 1;
            auVar45._10_2_ = (auVar38._10_2_ & 0x7fff) + 1;
            auVar45._12_2_ = (uVar43 & 0x7fff) + 1;
            auVar45._14_2_ = uVar46 + 1;
            auVar55[0] = auVar52[0] & auVar40[0];
            auVar55[1] = auVar52[1] & auVar40[1];
            auVar55[2] = auVar52[4] & auVar40[2];
            auVar55[3] = auVar52[5] & auVar40[3];
            auVar55[4] = auVar52[8] & auVar40[4];
            auVar55[5] = auVar52[9] & auVar40[5];
            auVar55[6] = auVar52[12] & auVar40[6];
            auVar55[7] = auVar52[13] & auVar40[7];
            auVar55[8] = auVar50[0] & auVar40[8];
            auVar55[9] = auVar50[1] & auVar40[9];
            auVar55[10] = auVar50[4] & auVar40[10];
            auVar55[11] = auVar50[5] & auVar40[11];
            auVar55[12] = auVar50[8] & auVar40[12];
            auVar55[13] = auVar50[9] & auVar40[13];
            auVar55[14] = auVar50[12] & auVar40[14];
            auVar55[15] = auVar50[13] & auVar40[15];
            uVar16 = CONCAT26(auVar30._6_2_,auVar30._0_6_);
            auVar44._8_2_ = auVar30._8_2_ & 0x7fff;
            auVar44._0_8_ = uVar16 & 0x7fff7fff7fff7fff;
            auVar44._10_2_ = auVar30._10_2_ & 0x7fff;
            auVar44._12_2_ = uVar34 & 0x7fff;
            auVar44._14_2_ = uVar48;
            auVar54._2_2_ = (uVar32 & 0x7fff) + 1;
            auVar54._0_2_ = (uVar29 & 0x7fff) + 1;
            auVar54._4_2_ = (uVar33 & 0x7fff) + 1;
            auVar54._6_2_ = uVar47 + 1;
            auVar54._8_2_ = (auVar30._8_2_ & 0x7fff) + 1;
            auVar54._10_2_ = (auVar30._10_2_ & 0x7fff) + 1;
            auVar54._12_2_ = (uVar34 & 0x7fff) + 1;
            auVar54._14_2_ = uVar48 + 1;
            auVar44 = NEON_bsl(auVar36,auVar54,auVar44,1);
            uVar16 = CONCAT26(auVar38._6_2_,auVar38._0_6_);
            auVar40._8_2_ = auVar38._8_2_ & 0x7fff;
            auVar40._0_8_ = uVar16 & 0x7fff7fff7fff7fff;
            auVar40._10_2_ = auVar38._10_2_ & 0x7fff;
            auVar40._12_2_ = uVar43 & 0x7fff;
            auVar40._14_2_ = uVar46;
            auVar40 = NEON_bsl(auVar55,auVar45,auVar40,1);
            *puVar12 = auVar44._0_2_;
            puVar12[2] = auVar44._2_2_;
            puVar12[4] = auVar44._4_2_;
            puVar12[6] = auVar44._6_2_;
            puVar12[8] = auVar44._8_2_;
            puVar12[10] = auVar44._10_2_;
            puVar12[0xc] = auVar44._12_2_;
            puVar12[0xe] = auVar44._14_2_;
            puVar12[0x58] = auVar40._0_2_;
            puVar12[0x5a] = auVar40._2_2_;
            puVar12[0x5c] = auVar40._4_2_;
            puVar12[0x5e] = auVar40._6_2_;
            puVar1 = puVar12 + 0x66;
            puVar12[0x60] = auVar40._8_2_;
            puVar12[0x62] = auVar40._10_2_;
            puVar12[100] = auVar40._12_2_;
            puVar12 = puVar12 + 0x10;
            *puVar1 = auVar40._14_2_;
          } while (puVar12 != puVar15 + (ulong)(uVar13 >> 3) * 0x10);
          uVar53 = uVar13 & 0xfffffff8;
          puVar15 = puVar15 + ((ulong)uVar13 & 0xfffffff8) * 2;
          puVar14 = puVar14 + ((ulong)uVar13 & 0xfffffff8) * 2;
        }
        uVar29 = *puVar15 & 0x7fff;
        uVar32 = *puVar14 & 0x7fff;
        uVar33 = uVar32;
        if (uVar32 < uVar29) {
          if ((*puVar15 & 0x8100) == 0) {
            uVar29 = uVar29 + 1;
          }
        }
        else {
          uVar33 = uVar32 + 1;
          if ((*puVar14 & 0x8100) != 0) {
            uVar33 = uVar32;
          }
        }
        *puVar15 = uVar29;
        *puVar14 = uVar33;
        if (uVar53 + 1 < uVar18) {
          uVar29 = puVar15[2] & 0x7fff;
          uVar32 = puVar14[2] & 0x7fff;
          uVar33 = uVar32;
          if (uVar32 < uVar29) {
            if ((puVar15[2] & 0x8100) == 0) {
              uVar29 = uVar29 + 1;
            }
          }
          else {
            uVar33 = uVar32 + 1;
            if ((puVar14[2] & 0x8100) != 0) {
              uVar33 = uVar32;
            }
          }
          puVar15[2] = uVar29;
          puVar14[2] = uVar33;
          if (uVar53 + 2 < uVar18) {
            uVar29 = puVar15[4] & 0x7fff;
            uVar32 = puVar14[4] & 0x7fff;
            uVar33 = uVar32;
            if (uVar32 < uVar29) {
              if ((puVar15[4] & 0x8100) == 0) {
                uVar29 = uVar29 + 1;
              }
            }
            else {
              uVar33 = uVar32 + 1;
              if ((puVar14[4] & 0x8100) != 0) {
                uVar33 = uVar32;
              }
            }
            puVar15[4] = uVar29;
            puVar14[4] = uVar33;
            if (uVar53 + 3 < uVar18) {
              uVar29 = puVar15[6] & 0x7fff;
              uVar32 = puVar14[6] & 0x7fff;
              uVar33 = uVar32;
              if (uVar32 < uVar29) {
                if ((puVar15[6] & 0x8100) == 0) {
                  uVar29 = uVar29 + 1;
                }
              }
              else {
                uVar33 = uVar32 + 1;
                if ((puVar14[6] & 0x8100) != 0) {
                  uVar33 = uVar32;
                }
              }
              puVar15[6] = uVar29;
              puVar14[6] = uVar33;
              if (uVar53 + 4 < uVar18) {
                uVar29 = puVar15[8] & 0x7fff;
                uVar32 = puVar14[8] & 0x7fff;
                uVar33 = uVar32;
                if (uVar32 < uVar29) {
                  if ((puVar15[8] & 0x8100) == 0) {
                    uVar29 = uVar29 + 1;
                  }
                }
                else {
                  uVar33 = uVar32 + 1;
                  if ((puVar14[8] & 0x8100) != 0) {
                    uVar33 = uVar32;
                  }
                }
                puVar15[8] = uVar29;
                puVar14[8] = uVar33;
                if (uVar53 + 5 < uVar18) {
                  uVar29 = puVar15[10] & 0x7fff;
                  uVar32 = puVar14[10] & 0x7fff;
                  uVar33 = uVar32;
                  if (uVar32 < uVar29) {
                    if ((puVar15[10] & 0x8100) == 0) {
                      uVar29 = uVar29 + 1;
                    }
                  }
                  else {
                    uVar33 = uVar32 + 1;
                    if ((puVar14[10] & 0x8100) != 0) {
                      uVar33 = uVar32;
                    }
                  }
                  puVar15[10] = uVar29;
                  puVar14[10] = uVar33;
                  if (uVar53 + 6 < uVar18) {
                    uVar29 = puVar15[0xc] & 0x7fff;
                    uVar32 = puVar14[0xc] & 0x7fff;
                    uVar33 = uVar32;
                    if (uVar32 < uVar29) {
                      if ((puVar15[0xc] & 0x8100) == 0) {
                        uVar29 = uVar29 + 1;
                      }
                    }
                    else {
                      uVar33 = uVar32 + 1;
                      if ((puVar14[0xc] & 0x8100) != 0) {
                        uVar33 = uVar32;
                      }
                    }
                    puVar15[0xc] = uVar29;
                    puVar14[0xc] = uVar33;
                    if (uVar53 + 7 < uVar18) {
                      uVar29 = puVar15[0xe] & 0x7fff;
                      uVar32 = puVar14[0xe] & 0x7fff;
                      uVar33 = uVar29;
                      uVar34 = uVar32;
                      if (uVar32 < uVar29) {
                        uVar33 = uVar29 + 1;
                        if ((puVar15[0xe] & 0x8100) != 0) {
                          uVar33 = uVar29;
                        }
                      }
                      else {
                        uVar34 = uVar32 + 1;
                        if ((puVar14[0xe] & 0x8100) != 0) {
                          uVar34 = uVar32;
                        }
                      }
                      puVar15[0xe] = uVar33;
                      puVar14[0xe] = uVar34;
                    }
                  }
                }
              }
            }
          }
        }
        render_polygon_setup_spans_asm_1x(auStack_7390,uVar18);
        render_polygon_setup_edge_markers_c(local_7438,uVar22,uVar21);
        render_polygon_setup_1x
                  (param_1,extraout_x18,param_2,auStack_6b50,(uVar25 - param_4) + iVar24,uVar22,
                   uVar3,local_73d8[0]);
      }
    }
    goto LAB_0014efd8;
  }
  uVar32 = *(ushort *)(piVar11 + 1);
  uVar22 = (uint)uVar32;
  uVar18 = (uint)*(ushort *)((long)local_73d8[1] + 6);
  uVar53 = (uint)uVar29;
  uVar13 = uVar22;
  if (uVar53 == *(ushort *)((long)local_73d8[1] + 6)) {
    uVar33 = *(ushort *)(local_73d8[1] + 1);
    uVar25 = (uint)uVar33;
    piVar7 = local_73d8[1];
    if (uVar33 <= uVar32) goto LAB_0014f058;
    uVar18 = (uint)*(ushort *)((long)local_73c0 + 6);
  }
  else {
    uVar33 = *(ushort *)(local_73c0 + 1);
    piVar7 = local_73c0;
    uVar25 = (uint)uVar33;
    if (uVar33 <= uVar32) {
LAB_0014f058:
      piVar11 = piVar7;
      uVar18 = (uint)*(ushort *)(local_73c8 + 6);
      uVar13 = (uint)uVar33;
      uVar25 = uVar22;
    }
  }
  if ((*(byte *)(lVar17 + 0x9acc) >> 1 & 1) == 0) {
    iVar24 = (uint)*(ushort *)(piVar11 + 2) << 9;
  }
  else {
    iVar24 = *piVar11;
  }
  iVar23 = (int)*(short *)((long)piVar11 + 0xe) >> 4;
  uVar22 = (uint)uVar29;
  if (uVar53 < param_4) {
    iVar23 = (param_4 - uVar53) + iVar23;
    uVar22 = param_4;
  }
  uVar53 = (uVar18 - uVar22) + (param_5 - uVar18);
  if (uVar18 <= param_5) {
    uVar53 = uVar18 - uVar22;
  }
  if (uVar53 != 0) {
    uVar25 = uVar25 - uVar13;
    sVar4 = *(short *)(piVar11 + 3);
    uVar10 = texture_cache_build_pixel(*(undefined2 *)((long)piVar11 + 10));
    iVar26 = uVar22 - param_4;
    if (uVar25 * uVar53 < 0x201) {
      render_sprite_block_1x_isra_0
                (param_1,param_2 + 4,*(undefined8 *)(param_2 + 0x10),auStack_6b50,uVar13,iVar26,
                 (int)sVar4 >> 4,iVar23,uVar25,uVar53,iVar24,uVar10,uVar3);
    }
    else {
      uVar18 = 0;
      if (uVar25 != 0) {
        uVar18 = (uVar25 + 0x1ff) / uVar25;
      }
      do {
        if (uVar53 < uVar18) {
          uVar18 = uVar53;
        }
        render_sprite_block_1x_isra_0
                  (param_1,param_2 + 4,*(undefined8 *)(param_2 + 0x10),auStack_6b50,uVar13,iVar26,
                   (int)sVar4 >> 4,iVar23,uVar25,uVar18,iVar24,uVar10,uVar3);
        iVar23 = iVar23 + uVar18;
        iVar26 = iVar26 + uVar18;
        uVar53 = uVar53 - uVar18;
      } while (uVar53 != 0);
    }
  }
LAB_0014efd8:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


