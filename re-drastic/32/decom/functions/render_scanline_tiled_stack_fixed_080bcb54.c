/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_stack_fixed
 * Address  : 080bcb54
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: register */

void render_scanline_tiled_stack_fixed
               (int param_1,undefined *param_2,undefined8 *param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  ushort uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined4 uVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  uint uVar29;
  undefined *puVar30;
  undefined8 *puVar31;
  undefined4 *puVar32;
  uint uVar33;
  undefined *puVar34;
  undefined4 uVar35;
  undefined *puVar36;
  int iVar37;
  bool bVar38;
  undefined uVar39;
  undefined *puVar40;
  longlong lVar41;
  undefined uVar47;
  undefined4 uVar48;
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined8 uVar49;
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined8 uVar50;
  undefined uVar53;
  undefined uVar55;
  undefined auVar51 [16];
  undefined8 uVar54;
  undefined auVar52 [16];
  undefined8 uVar56;
  undefined auVar57 [16];
  undefined8 uVar59;
  undefined auVar58 [16];
  undefined8 uVar60;
  undefined8 uVar64;
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined in_q4 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined in_q5 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined8 uVar73;
  undefined in_q6 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined in_q7 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined8 uVar85;
  undefined auVar86 [16];
  undefined8 uVar88;
  undefined auVar87 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined8 local_200 [2];
  undefined8 auStack_1f0 [2];
  undefined8 auStack_1e0 [2];
  undefined auStack_1d0 [16];
  undefined auStack_1c0 [16];
  undefined auStack_1b0 [16];
  undefined auStack_1a0 [16];
  undefined auStack_190 [16];
  undefined local_180 [16];
  undefined8 auStack_170 [2];
  undefined auStack_160 [16];
  undefined auStack_150 [16];
  undefined auStack_140 [16];
  undefined auStack_130 [16];
  undefined auStack_120 [16];
  undefined auStack_110 [32];
  undefined4 local_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_6c;
  uint local_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_64 = in_q4._0_8_;
  uStack_5c = in_q4._8_8_;
  uStack_54 = in_q5._0_8_;
  uStack_4c = in_q5._8_8_;
  uStack_44 = in_q6._0_8_;
  uStack_3c = in_q6._8_8_;
  uStack_34 = in_q7._0_8_;
  uStack_2c = in_q7._8_8_;
  iVar16 = *(int *)(param_1 + 4);
  iVar18 = *(int *)(param_1 + 8);
  uVar7 = *(ushort *)(param_1 + 0x7a);
  uVar19 = (uint)*(ushort *)(param_1 + 0x7c) + param_4;
  iVar12 = *(int *)(param_1 + 0x1c);
  uVar8 = *(ushort *)(param_1 + 0x78);
  bVar38 = (uVar19 & 0x100) == 0;
  if (!bVar38) {
    bVar38 = (uVar8 & 0x8000) == 0;
  }
  if (!bVar38) {
    iVar12 = iVar12 + 0x800;
    bVar38 = (uVar8 & 0x4000) == 0;
  }
  if (!bVar38) {
    iVar12 = iVar12 + 0x800;
  }
  iVar12 = iVar12 + (uVar19 & 0xf8) * 8;
  puVar22 = (undefined4 *)(iVar16 + iVar12);
  puVar13 = (undefined4 *)(iVar16 + iVar12);
  bVar38 = (uVar8 & 0x4000) == 0;
  if (!bVar38) {
    puVar22 = puVar22 + 0x200;
    bVar38 = (uVar7 & 0x100) == 0;
  }
  if (!bVar38) {
    puVar22 = puVar22 + -0x200;
    puVar13 = puVar13 + 0x200;
  }
  iVar16 = *(int *)(param_1 + 0x20) + iVar16;
  local_f0 = *puVar13;
  uStack_ec = puVar13[1];
  uStack_e0 = puVar13[4];
  local_dc = puVar13[5];
  local_d0 = puVar13[8];
  uStack_cc = puVar13[9];
  uStack_c0 = puVar13[0xc];
  local_bc = puVar13[0xd];
  local_b0 = *puVar22;
  uStack_ac = puVar22[1];
  uStack_a0 = puVar22[4];
  local_9c = puVar22[5];
  local_90 = SUB168(*(undefined (*) [16])(puVar22 + 8),0);
  uStack_88 = SUB168(*(undefined (*) [16])(puVar22 + 8),8);
  uStack_80 = SUB168(*(undefined (*) [16])(puVar22 + 0xc),0);
  uStack_78 = SUB168(*(undefined (*) [16])(puVar22 + 0xc),8);
  iVar12 = ((uVar7 & 0xff) >> 3) * 2;
  puVar14 = (undefined8 *)((int)&local_f0 + iVar12);
  uVar19 = uVar19 & 7;
  iVar17 = uVar19 * -2 + 7;
  local_68 = uVar7 & 7;
  auVar82 = SIMDExpandImmediate(0,10,4);
  if ((uVar8 & 0x80) != 0) {
    iVar16 = iVar16 + uVar19 * 8;
    puVar15 = local_200;
    if (*(char *)(param_1 + 0x8d) == '\0') {
      iVar12 = 0x20;
      do {
        uVar19 = *(uint *)puVar14;
        uVar20 = *(uint *)((int)puVar14 + 4);
        uVar48 = CONCAT22(*(undefined2 *)puVar14,*(undefined2 *)puVar14);
        auVar42._4_4_ = uVar48;
        auVar42._0_4_ = uVar48;
        uVar48 = CONCAT22(*(undefined2 *)((int)puVar14 + 1),*(undefined2 *)((int)puVar14 + 1));
        uVar73 = CONCAT44(uVar48,uVar48);
        auVar42._8_8_ = uVar73;
        puVar21 = (undefined8 *)(iVar16 + (uVar19 & 0x3ff) * 0x40);
        puVar23 = (undefined8 *)(iVar16 + ((uVar19 << 6) >> 0x16) * 0x40);
        uVar48 = CONCAT22(*(undefined2 *)((int)puVar14 + 2),*(undefined2 *)((int)puVar14 + 2));
        auVar51._4_4_ = uVar48;
        auVar51._0_4_ = uVar48;
        puVar27 = (undefined8 *)(iVar16 + (uVar20 & 0x3ff) * 0x40);
        puVar31 = (undefined8 *)(iVar16 + ((uVar20 << 6) >> 0x16) * 0x40);
        uVar48 = CONCAT22(*(undefined2 *)((int)puVar14 + 3),*(undefined2 *)((int)puVar14 + 3));
        auVar51._12_4_ = uVar48;
        auVar51._8_4_ = uVar48;
        puVar14 = (undefined8 *)((int)puVar14 + 4);
        auVar81 = VectorTest(auVar42,auVar82);
        auVar86 = VectorTest(auVar51,auVar82);
        if ((uVar19 & 0x800) != 0) {
          puVar21 = puVar21 + iVar17;
        }
        if ((uVar19 & 0x8000000) != 0) {
          puVar23 = puVar23 + iVar17;
        }
        if ((uVar20 & 0x800) != 0) {
          puVar27 = puVar27 + iVar17;
        }
        if ((uVar20 & 0x8000000) != 0) {
          puVar31 = puVar31 + iVar17;
        }
        auVar57._0_8_ = *puVar21;
        auVar57._8_8_ = *puVar23;
        auVar65._0_8_ = *puVar27;
        auVar65._8_8_ = *puVar31;
        auVar74 = vrev(auVar57,1);
        auVar77 = vrev(auVar65,1);
        auVar81 = VectorBitwiseInsertIfTrue(auVar57,auVar74,auVar81);
        auVar86 = VectorBitwiseInsertIfTrue(auVar65,auVar77,auVar86);
        *puVar15 = auVar81._0_8_;
        puVar15[1] = auVar81._8_8_;
        puVar5 = (undefined *)0x320;
        puVar6 = (undefined *)0x330;
        lVar41 = 8;
        puVar40 = param_2;
        while( true ) {
          *puVar40 = *puVar5;
          puVar40[1] = *puVar6;
          puVar40 = puVar40 + 2;
          lVar41 = lVar41 + -1;
          if (lVar41 == 0) break;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar5 = (undefined *)0x328;
        puVar6 = (undefined *)0x338;
        lVar41 = 8;
        while( true ) {
          *puVar40 = *puVar5;
          puVar40[1] = *puVar6;
          puVar40 = puVar40 + 2;
          lVar41 = lVar41 + -1;
          if (lVar41 == 0) break;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar40 = param_2 + 0x20;
        puVar15[2] = auVar86._0_8_;
        puVar15[3] = auVar86._8_8_;
        puVar15 = puVar15 + 4;
        puVar5 = (undefined *)0x340;
        puVar6 = (undefined *)0x350;
        lVar41 = 8;
        while( true ) {
          *puVar40 = *puVar5;
          puVar40[1] = *puVar6;
          puVar40 = puVar40 + 2;
          lVar41 = lVar41 + -1;
          if (lVar41 == 0) break;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar5 = (undefined *)0x348;
        puVar6 = (undefined *)0x358;
        lVar41 = 8;
        while( true ) {
          *puVar40 = *puVar5;
          puVar40[1] = *puVar6;
          puVar40 = puVar40 + 2;
          lVar41 = lVar41 + -1;
          if (lVar41 == 0) break;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        param_2 = param_2 + 0x40;
        iVar12 = iVar12 + -4;
      } while (iVar12 != 0);
      uVar48 = CONCAT22(*(undefined2 *)puVar14,*(undefined2 *)puVar14);
      auVar43._4_4_ = uVar48;
      auVar43._0_4_ = uVar48;
      auVar43._8_8_ = uVar73;
      puVar21 = (undefined8 *)(iVar16 + (*(uint *)puVar14 & 0x3ff) * 0x40);
      auVar82 = VectorTest(auVar43,auVar82);
      if ((*(uint *)puVar14 & 0x800) != 0) {
        puVar21 = puVar21 + iVar17;
      }
      uVar73 = vrev(*puVar21,1);
      uVar73 = VectorBitwiseInsertIfTrue(*puVar21,uVar73,auVar82._0_8_);
      *puVar15 = uVar73;
      puVar5 = (undefined *)0x320;
      puVar6 = (undefined *)0x330;
      lVar41 = 8;
      puVar40 = param_2;
      while( true ) {
        *puVar40 = *puVar5;
        puVar40[1] = *puVar6;
        puVar40 = puVar40 + 2;
        lVar41 = lVar41 + -1;
        if (lVar41 == 0) break;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    else {
      iVar18 = *(int *)(param_1 + 0xc);
      if (iVar18 == 0) {
        return;
      }
      iVar12 = 0x20;
      do {
        uVar19 = *(uint *)puVar14;
        uVar20 = *(uint *)((int)puVar14 + 4);
        uVar1 = *(undefined2 *)puVar14;
        auVar44._4_4_ = CONCAT22(uVar1,uVar1);
        auVar44._0_4_ = CONCAT22(uVar1,uVar1);
        uVar2 = *(undefined2 *)((int)puVar14 + 1);
        uVar73 = CONCAT44(CONCAT22(uVar2,uVar2),CONCAT22(uVar2,uVar2));
        auVar44._8_8_ = uVar73;
        puVar21 = (undefined8 *)(iVar16 + (uVar19 & 0x3ff) * 0x40);
        puVar23 = (undefined8 *)(iVar16 + ((uVar19 << 6) >> 0x16) * 0x40);
        uVar3 = *(undefined2 *)((int)puVar14 + 2);
        auVar52._4_4_ = CONCAT22(uVar3,uVar3);
        auVar52._0_4_ = CONCAT22(uVar3,uVar3);
        puVar27 = (undefined8 *)(iVar16 + (uVar20 & 0x3ff) * 0x40);
        puVar31 = (undefined8 *)(iVar16 + ((uVar20 << 6) >> 0x16) * 0x40);
        uVar4 = *(undefined2 *)((int)puVar14 + 3);
        auVar52._12_4_ = CONCAT22(uVar4,uVar4);
        auVar52._8_4_ = CONCAT22(uVar4,uVar4);
        puVar14 = (undefined8 *)((int)puVar14 + 4);
        uVar39 = (undefined)((ushort)uVar1 >> 8);
        uVar1 = CONCAT11(uVar39,uVar39);
        uVar48 = CONCAT22(uVar1,uVar1);
        auVar61._4_4_ = uVar48;
        auVar61._0_4_ = uVar48;
        uVar39 = (undefined)((ushort)uVar2 >> 8);
        uVar48 = CONCAT22(CONCAT11(uVar39,uVar39),CONCAT11(uVar39,uVar39));
        auVar61._12_4_ = uVar48;
        auVar61._8_4_ = uVar48;
        uVar53 = (undefined)((ushort)uVar3 >> 8);
        uVar48 = CONCAT22(CONCAT11(uVar53,uVar53),CONCAT11(uVar53,uVar53));
        auVar70._4_4_ = uVar48;
        auVar70._0_4_ = uVar48;
        uVar55 = (undefined)((ushort)uVar4 >> 8);
        uVar48 = CONCAT22(CONCAT11(uVar55,uVar55),CONCAT11(uVar55,uVar55));
        auVar70._12_4_ = uVar48;
        auVar70._8_4_ = uVar48;
        VectorShiftRight(auVar61,4);
        VectorShiftRight(auVar70,4);
        auVar81 = VectorTest(auVar44,auVar82);
        auVar86 = VectorTest(auVar52,auVar82);
        if ((uVar19 & 0x800) != 0) {
          puVar21 = puVar21 + iVar17;
        }
        if ((uVar19 & 0x8000000) != 0) {
          puVar23 = puVar23 + iVar17;
        }
        if ((uVar20 & 0x800) != 0) {
          puVar27 = puVar27 + iVar17;
        }
        if ((uVar20 & 0x8000000) != 0) {
          puVar31 = puVar31 + iVar17;
        }
        auVar58._0_8_ = *puVar21;
        auVar58._8_8_ = *puVar23;
        auVar66._0_8_ = *puVar27;
        auVar66._8_8_ = *puVar31;
        auVar74 = vrev(auVar58,1);
        auVar77 = vrev(auVar66,1);
        auVar81 = VectorBitwiseInsertIfTrue(auVar58,auVar74,auVar81);
        auVar86 = VectorBitwiseInsertIfTrue(auVar66,auVar77,auVar86);
        *puVar15 = auVar81._0_8_;
        puVar15[1] = auVar81._8_8_;
        puVar5 = (undefined *)0x320;
        puVar6 = (undefined *)0x330;
        lVar41 = 8;
        puVar40 = param_2;
        while( true ) {
          *puVar40 = *puVar5;
          puVar40[1] = *puVar6;
          puVar40 = puVar40 + 2;
          lVar41 = lVar41 + -1;
          if (lVar41 == 0) break;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar5 = (undefined *)0x328;
        puVar6 = (undefined *)0x338;
        lVar41 = 8;
        while( true ) {
          *puVar40 = *puVar5;
          puVar40[1] = *puVar6;
          puVar40 = puVar40 + 2;
          lVar41 = lVar41 + -1;
          if (lVar41 == 0) break;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar40 = param_2 + 0x20;
        puVar15[2] = auVar86._0_8_;
        puVar15[3] = auVar86._8_8_;
        puVar15 = puVar15 + 4;
        puVar5 = (undefined *)0x340;
        puVar6 = (undefined *)0x350;
        lVar41 = 8;
        while( true ) {
          *puVar40 = *puVar5;
          puVar40[1] = *puVar6;
          puVar40 = puVar40 + 2;
          lVar41 = lVar41 + -1;
          if (lVar41 == 0) break;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar5 = (undefined *)0x348;
        puVar6 = (undefined *)0x358;
        lVar41 = 8;
        while( true ) {
          *puVar40 = *puVar5;
          puVar40[1] = *puVar6;
          puVar40 = puVar40 + 2;
          lVar41 = lVar41 + -1;
          if (lVar41 == 0) break;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        param_2 = param_2 + 0x40;
        iVar12 = iVar12 + -4;
      } while (iVar12 != 0);
      uVar1 = *(undefined2 *)puVar14;
      auVar45._4_4_ = CONCAT22(uVar1,uVar1);
      auVar45._0_4_ = CONCAT22(uVar1,uVar1);
      auVar45._8_8_ = uVar73;
      puVar21 = (undefined8 *)(iVar16 + (*(uint *)puVar14 & 0x3ff) * 0x40);
      uVar47 = (undefined)((ushort)uVar1 >> 8);
      uVar1 = CONCAT11(uVar47,uVar47);
      uVar48 = CONCAT22(uVar1,uVar1);
      auVar62._4_4_ = uVar48;
      auVar62._0_4_ = uVar48;
      uVar48 = CONCAT22(CONCAT11(uVar39,uVar39),CONCAT11(uVar39,uVar39));
      auVar62._12_4_ = uVar48;
      auVar62._8_4_ = uVar48;
      uVar48 = CONCAT22(CONCAT11(uVar53,uVar53),CONCAT11(uVar53,uVar53));
      auVar71._4_4_ = uVar48;
      auVar71._0_4_ = uVar48;
      uVar48 = CONCAT22(CONCAT11(uVar55,uVar55),CONCAT11(uVar55,uVar55));
      auVar71._12_4_ = uVar48;
      auVar71._8_4_ = uVar48;
      VectorShiftRight(auVar62,4);
      VectorShiftRight(auVar71,4);
      auVar82 = VectorTest(auVar45,auVar82);
      if ((*(uint *)puVar14 & 0x800) != 0) {
        puVar21 = puVar21 + iVar17;
      }
      uVar73 = vrev(*puVar21,1);
      uVar73 = VectorBitwiseInsertIfTrue(*puVar21,uVar73,auVar82._0_8_);
      *puVar15 = uVar73;
      puVar5 = (undefined *)0x320;
      puVar6 = (undefined *)0x330;
      lVar41 = 8;
      puVar40 = param_2;
      while( true ) {
        *puVar40 = *puVar5;
        puVar40[1] = *puVar6;
        puVar40 = puVar40 + 2;
        lVar41 = lVar41 + -1;
        if (lVar41 == 0) break;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    puStack_6c = param_3;
    render_scanline_palette_lookup_8bpp
              (param_2 + -0x200,param_2 + -0x200 + local_68 * 2,iVar18,0xff);
    auVar83._8_8_ = 0x8040201008040201;
    auVar83._0_8_ = 0x8040201008040201;
    auVar82 = VectorTest(*(undefined (*) [16])((int)local_200 + local_68),
                         *(undefined (*) [16])((int)local_200 + local_68));
    auVar81 = VectorTest(*(undefined (*) [16])((int)auStack_1f0 + local_68),
                         *(undefined (*) [16])((int)auStack_1f0 + local_68));
    auVar86 = VectorTest(*(undefined (*) [16])((int)auStack_1e0 + local_68),
                         *(undefined (*) [16])((int)auStack_1e0 + local_68));
    auVar74 = VectorTest(*(undefined (*) [16])(auStack_1d0 + local_68),
                         *(undefined (*) [16])(auStack_1d0 + local_68));
    auVar77 = VectorTest(*(undefined (*) [16])(auStack_1c0 + local_68),
                         *(undefined (*) [16])(auStack_1c0 + local_68));
    auVar69 = VectorTest(*(undefined (*) [16])(auStack_1b0 + local_68),
                         *(undefined (*) [16])(auStack_1b0 + local_68));
    auVar75 = VectorTest(*(undefined (*) [16])(auStack_1a0 + local_68),
                         *(undefined (*) [16])(auStack_1a0 + local_68));
    auVar78 = VectorTest(*(undefined (*) [16])(auStack_190 + local_68),
                         *(undefined (*) [16])(auStack_190 + local_68));
    uVar73 = VectorPairwiseAdd(SUB168(auVar82 & auVar83,0),SUB168(auVar82 & auVar83,8),1);
    uVar49 = VectorPairwiseAdd(SUB168(auVar81 & auVar83,0),SUB168(auVar81 & auVar83,8),1);
    uVar50 = VectorPairwiseAdd(SUB168(auVar86 & auVar83,0),SUB168(auVar86 & auVar83,8),1);
    uVar54 = VectorPairwiseAdd(SUB168(auVar74 & auVar83,0),SUB168(auVar74 & auVar83,8),1);
    uVar56 = VectorPairwiseAdd(SUB168(auVar77 & auVar83,0),SUB168(auVar77 & auVar83,8),1);
    uVar59 = VectorPairwiseAdd(SUB168(auVar69 & auVar83,0),SUB168(auVar69 & auVar83,8),1);
    uVar60 = VectorPairwiseAdd(SUB168(auVar75 & auVar83,0),SUB168(auVar75 & auVar83,8),1);
    uVar64 = VectorPairwiseAdd(SUB168(auVar78 & auVar83,0),SUB168(auVar78 & auVar83,8),1);
    uVar73 = VectorPairwiseAdd(uVar73,uVar49,1);
    uVar49 = VectorPairwiseAdd(uVar50,uVar54,1);
    uVar50 = VectorPairwiseAdd(uVar56,uVar59,1);
    uVar54 = VectorPairwiseAdd(uVar60,uVar64,1);
    uVar85 = VectorPairwiseAdd(uVar73,uVar49,1);
    uVar88 = VectorPairwiseAdd(uVar50,uVar54,1);
    auVar82 = VectorTest(*(undefined (*) [16])(local_180 + local_68),
                         *(undefined (*) [16])(local_180 + local_68));
    auVar81 = VectorTest(*(undefined (*) [16])((int)auStack_170 + local_68),
                         *(undefined (*) [16])((int)auStack_170 + local_68));
    auVar86 = VectorTest(*(undefined (*) [16])(auStack_160 + local_68),
                         *(undefined (*) [16])(auStack_160 + local_68));
    auVar74 = VectorTest(*(undefined (*) [16])(auStack_150 + local_68),
                         *(undefined (*) [16])(auStack_150 + local_68));
    auVar77 = VectorTest(*(undefined (*) [16])(auStack_140 + local_68),
                         *(undefined (*) [16])(auStack_140 + local_68));
    auVar69 = VectorTest(*(undefined (*) [16])(auStack_130 + local_68),
                         *(undefined (*) [16])(auStack_130 + local_68));
    auVar75 = VectorTest(*(undefined (*) [16])(auStack_120 + local_68),
                         *(undefined (*) [16])(auStack_120 + local_68));
    auVar78 = VectorTest(*(undefined (*) [16])(auStack_110 + local_68),
                         *(undefined (*) [16])(auStack_110 + local_68));
    uVar73 = VectorPairwiseAdd(SUB168(auVar82 & auVar83,0),SUB168(auVar82 & auVar83,8),1);
    uVar49 = VectorPairwiseAdd(SUB168(auVar81 & auVar83,0),SUB168(auVar81 & auVar83,8),1);
    uVar50 = VectorPairwiseAdd(SUB168(auVar86 & auVar83,0),SUB168(auVar86 & auVar83,8),1);
    uVar54 = VectorPairwiseAdd(SUB168(auVar74 & auVar83,0),SUB168(auVar74 & auVar83,8),1);
    uVar56 = VectorPairwiseAdd(SUB168(auVar77 & auVar83,0),SUB168(auVar77 & auVar83,8),1);
    uVar59 = VectorPairwiseAdd(SUB168(auVar69 & auVar83,0),SUB168(auVar69 & auVar83,8),1);
    uVar60 = VectorPairwiseAdd(SUB168(auVar75 & auVar83,0),SUB168(auVar75 & auVar83,8),1);
    uVar64 = VectorPairwiseAdd(SUB168(auVar78 & auVar83,0),SUB168(auVar78 & auVar83,8),1);
    uVar73 = VectorPairwiseAdd(uVar73,uVar49,1);
    uVar49 = VectorPairwiseAdd(uVar50,uVar54,1);
    uVar50 = VectorPairwiseAdd(uVar56,uVar59,1);
    uVar54 = VectorPairwiseAdd(uVar60,uVar64,1);
    uVar73 = VectorPairwiseAdd(uVar73,uVar49,1);
    uVar49 = VectorPairwiseAdd(uVar50,uVar54,1);
    *puStack_6c = uVar85;
    puStack_6c[1] = uVar88;
    puStack_6c[2] = uVar73;
    puStack_6c[3] = uVar49;
    return;
  }
  iVar16 = iVar16 + uVar19 * 4;
  iVar37 = 0x1c;
  puVar15 = (undefined8 *)((int)&uStack_e8 + iVar12);
  uVar19 = *(uint *)puVar14;
  uVar20 = *(uint *)((int)&uStack_e8 + iVar12 + -4);
  puVar22 = (undefined4 *)(iVar16 + (uVar19 & 0x3ff) * 0x20);
  puVar13 = (undefined4 *)(iVar16 + ((uVar19 << 6) >> 0x16) * 0x20);
  puVar28 = (undefined4 *)(iVar16 + (uVar20 & 0x3ff) * 0x20);
  puVar32 = (undefined4 *)(iVar16 + ((uVar20 << 6) >> 0x16) * 0x20);
  uVar73 = VectorTest(*puVar14,auVar82._0_8_);
  if ((uVar19 & 0x800) != 0) {
    puVar22 = puVar22 + iVar17;
  }
  if ((uVar19 & 0x8000000) != 0) {
    puVar13 = puVar13 + iVar17;
  }
  if ((uVar20 & 0x800) != 0) {
    puVar28 = puVar28 + iVar17;
  }
  if ((uVar20 & 0x8000000) != 0) {
    puVar32 = puVar32 + iVar17;
  }
  auVar81._4_4_ = *puVar22;
  auVar81._0_4_ = *puVar22;
  auVar81._12_4_ = *puVar28;
  auVar81._8_4_ = *puVar28;
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar48 = *puVar13;
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar48 = *puVar32;
  auVar74 = VectorCopyLong(uVar73,2,0);
  auVar86 = VectorShiftLeft(auVar81,4,8,0);
  SIMDExpandImmediate(0,0xe,0xf);
  auVar86 = VectorShiftRightInsert(auVar86,auVar81,4);
  auVar86 = vrev(auVar86,1);
  auVar81 = VectorBitwiseInsertIfTrue(auVar81,auVar86,auVar74);
  puVar14 = auStack_170;
  do {
    auVar81 = VectorShiftRight(auVar81,4);
    auVar86._8_8_ = auVar74._8_8_;
    auVar86._0_8_ = *puVar15;
    uVar29 = (uVar20 << 0x10) >> 0x1c;
    uVar33 = uVar20 >> 0x1c;
    uVar11 = *(uint *)puVar15;
    puVar40 = (undefined *)(iVar18 + ((uVar19 << 0x10) >> 0x1c) * 0x20);
    uVar20 = *(uint *)((int)puVar15 + 4);
    puVar24 = (undefined *)(iVar18 + (uVar19 >> 0x1c) * 0x20);
    puVar5 = (undefined *)0x350;
    puVar6 = (undefined *)0x360;
    lVar41 = 8;
    puVar15 = puVar15 + 1;
    while( true ) {
      *puVar5 = *puVar40;
      puVar40 = puVar40 + 1;
      *puVar6 = *puVar40;
      puVar40 = puVar40 + 1;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined *)0x358;
    puVar6 = (undefined *)0x368;
    lVar41 = 8;
    while( true ) {
      *puVar5 = *puVar40;
      puVar40 = puVar40 + 1;
      *puVar6 = *puVar40;
      puVar40 = puVar40 + 1;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined *)0x370;
    puVar6 = (undefined *)0x380;
    lVar41 = 8;
    while( true ) {
      *puVar5 = *puVar24;
      puVar24 = puVar24 + 1;
      *puVar6 = *puVar24;
      puVar24 = puVar24 + 1;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined *)0x378;
    puVar6 = (undefined *)0x388;
    lVar41 = 8;
    while( true ) {
      *puVar5 = *puVar24;
      puVar24 = puVar24 + 1;
      *puVar6 = *puVar24;
      puVar24 = puVar24 + 1;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar40 = (undefined *)(iVar18 + uVar29 * 0x20);
    puVar24 = (undefined *)(iVar18 + uVar33 * 0x20);
    VectorZip(auVar81._0_8_,1);
    VectorZip(auVar81._8_8_,1);
    puVar5 = (undefined *)0x390;
    puVar6 = (undefined *)0x3a0;
    lVar41 = 8;
    while( true ) {
      *puVar5 = *puVar40;
      puVar40 = puVar40 + 1;
      *puVar6 = *puVar40;
      puVar40 = puVar40 + 1;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined *)0x398;
    puVar6 = (undefined *)0x3a8;
    lVar41 = 8;
    while( true ) {
      *puVar5 = *puVar40;
      puVar40 = puVar40 + 1;
      *puVar6 = *puVar40;
      puVar40 = puVar40 + 1;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auVar74._8_8_ = auVar86._8_8_;
    auVar74._0_8_ = VectorTest(auVar86._0_8_,auVar82._0_8_);
    puVar5 = (undefined *)0x3b0;
    puVar6 = (undefined *)0x3c0;
    lVar41 = 8;
    while( true ) {
      *puVar5 = *puVar24;
      puVar24 = puVar24 + 1;
      *puVar6 = *puVar24;
      puVar24 = puVar24 + 1;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined *)0x3b8;
    puVar6 = (undefined *)0x3c8;
    lVar41 = 8;
    while( true ) {
      *puVar5 = *puVar24;
      puVar24 = puVar24 + 1;
      *puVar6 = *puVar24;
      puVar24 = puVar24 + 1;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar22 = (undefined4 *)(iVar16 + (uVar11 & 0x3ff) * 0x20);
    puVar13 = (undefined4 *)(iVar16 + ((uVar11 << 6) >> 0x16) * 0x20);
    puVar28 = (undefined4 *)(iVar16 + (uVar20 & 0x3ff) * 0x20);
    puVar32 = (undefined4 *)(iVar16 + ((uVar20 << 6) >> 0x16) * 0x20);
    if ((uVar11 & 0x800) != 0) {
      puVar22 = puVar22 + iVar17;
    }
    if ((uVar11 & 0x8000000) != 0) {
      puVar13 = puVar13 + iVar17;
    }
    if ((uVar20 & 0x800) != 0) {
      puVar28 = puVar28 + iVar17;
    }
    if ((uVar20 & 0x8000000) != 0) {
      puVar32 = puVar32 + iVar17;
    }
    auVar77._4_4_ = *puVar22;
    auVar77._0_4_ = *puVar22;
    auVar77._12_4_ = *puVar28;
    auVar77._8_4_ = *puVar28;
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar48 = *puVar13;
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar48 = *puVar32;
    VectorTableLookup(puVar14,puVar13,2);
    auVar74 = VectorCopyLong(auVar74._0_8_,2,0);
    VectorTableLookup(puVar14,puVar32,2);
    auVar81 = VectorShiftLeft(auVar77,4,8,0);
    VectorTableLookup(iVar16,iVar37,2);
    VectorTableLookup(iVar16,uVar11,2);
    auVar81 = VectorShiftRightInsert(auVar81,auVar77,4);
    iVar37 = VectorTableLookup(uVar20,param_3,2);
    uVar19 = VectorTableLookup(uVar20,iVar17,2);
    auVar81 = vrev(auVar81,1);
    VectorTableLookup(puVar22,puVar14,2);
    puVar24 = (undefined *)VectorTableLookup(puVar22,iVar16,2);
    auVar81 = VectorBitwiseInsertIfTrue(auVar77,auVar81,auVar74);
    puVar5 = (undefined *)0x350;
    puVar6 = (undefined *)0x360;
    lVar41 = 8;
    puVar40 = puVar24;
    while( true ) {
      *puVar40 = *puVar5;
      puVar40[1] = *puVar6;
      puVar40 = puVar40 + 2;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined *)0x358;
    puVar6 = (undefined *)0x368;
    lVar41 = 8;
    while( true ) {
      *puVar40 = *puVar5;
      puVar40[1] = *puVar6;
      puVar40 = puVar40 + 2;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar40 = puVar24 + 0x20;
    *puVar14 = auVar81._0_8_;
    puVar14[1] = auVar81._8_8_;
    puVar14 = puVar14 + 2;
    puVar5 = (undefined *)0x370;
    puVar6 = (undefined *)0x380;
    lVar41 = 8;
    while( true ) {
      *puVar40 = *puVar5;
      puVar40[1] = *puVar6;
      puVar40 = puVar40 + 2;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined *)0x378;
    puVar6 = (undefined *)0x388;
    lVar41 = 8;
    while( true ) {
      *puVar40 = *puVar5;
      puVar40[1] = *puVar6;
      puVar40 = puVar40 + 2;
      lVar41 = lVar41 + -1;
      if (lVar41 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar24 = puVar24 + 0x40;
    iVar37 = iVar37 + -4;
  } while (iVar37 != 0);
  puVar40 = (undefined *)(iVar18 + ((uVar19 << 0x10) >> 0x1c) * 0x20);
  puVar25 = (undefined *)(iVar18 + (uVar19 >> 0x1c) * 0x20);
  puVar30 = (undefined *)(iVar18 + ((uVar20 << 0x10) >> 0x1c) * 0x20);
  puVar34 = (undefined *)(iVar18 + (uVar20 >> 0x1c) * 0x20);
  puVar5 = (undefined *)0x350;
  puVar6 = (undefined *)0x360;
  lVar41 = 8;
  uVar48 = 0;
  while( true ) {
    *puVar5 = *puVar40;
    puVar40 = puVar40 + 1;
    *puVar6 = *puVar40;
    puVar40 = puVar40 + 1;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined *)0x358;
  puVar6 = (undefined *)0x368;
  lVar41 = 8;
  while( true ) {
    *puVar5 = *puVar40;
    puVar40 = puVar40 + 1;
    *puVar6 = *puVar40;
    puVar40 = puVar40 + 1;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined *)0x370;
  puVar6 = (undefined *)0x380;
  lVar41 = 8;
  puVar40 = puVar25;
  while( true ) {
    *puVar5 = *puVar40;
    puVar40 = puVar40 + 1;
    *puVar6 = *puVar40;
    puVar40 = puVar40 + 1;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined *)0x378;
  puVar6 = (undefined *)0x388;
  lVar41 = 8;
  while( true ) {
    *puVar5 = *puVar40;
    puVar40 = puVar40 + 1;
    *puVar6 = *puVar40;
    puVar40 = puVar40 + 1;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined *)0x390;
  puVar6 = (undefined *)0x3a0;
  lVar41 = 8;
  while( true ) {
    *puVar5 = *puVar30;
    puVar30 = puVar30 + 1;
    *puVar6 = *puVar30;
    puVar30 = puVar30 + 1;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined *)0x398;
  puVar6 = (undefined *)0x3a8;
  lVar41 = 8;
  while( true ) {
    *puVar5 = *puVar30;
    puVar30 = puVar30 + 1;
    *puVar6 = *puVar30;
    puVar30 = puVar30 + 1;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined *)0x3b0;
  puVar6 = (undefined *)0x3c0;
  lVar41 = 8;
  puVar40 = puVar34;
  while( true ) {
    *puVar5 = *puVar40;
    puVar40 = puVar40 + 1;
    *puVar6 = *puVar40;
    puVar40 = puVar40 + 1;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined *)0x3b8;
  puVar6 = (undefined *)0x3c8;
  lVar41 = 8;
  while( true ) {
    *puVar5 = *puVar40;
    puVar40 = puVar40 + 1;
    *puVar6 = *puVar40;
    puVar40 = puVar40 + 1;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  auVar81 = VectorShiftRight(auVar81,4);
  uVar26 = CONCAT22(*(ushort *)puVar15,*(ushort *)puVar15);
  auVar69._8_8_ = auVar74._8_8_;
  uVar7 = *(ushort *)puVar15;
  uVar19 = (uint)uVar7;
  VectorZip(auVar81._0_8_,1);
  auVar69._0_8_ = VectorTest(CONCAT44(uVar26,uVar26),auVar82._0_8_);
  VectorZip(auVar81._8_8_,1);
  uVar26 = VectorTableLookup(puVar14,puVar25,2);
  uVar35 = VectorTableLookup(puVar14,puVar34,2);
  VectorTableLookup(iVar16,uVar48,2);
  puVar36 = (undefined *)VectorTableLookup(iVar16,uVar19,2);
  puVar5 = (undefined *)0x350;
  puVar6 = (undefined *)0x360;
  lVar41 = 8;
  while( true ) {
    *puVar24 = *puVar5;
    puVar24[1] = *puVar6;
    puVar24 = puVar24 + 2;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined *)0x358;
  puVar6 = (undefined *)0x368;
  lVar41 = 8;
  while( true ) {
    *puVar24 = *puVar5;
    puVar24[1] = *puVar6;
    puVar24 = puVar24 + 2;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar24 = (undefined *)(iVar18 + ((uVar19 << 0x10) >> 0x1c) * 0x20);
  puVar22 = (undefined4 *)(iVar16 + (uVar19 & 0x3ff) * 0x20);
  uVar39 = (uVar7 & 0x800) == 0;
  puVar5 = (undefined *)0x350;
  puVar6 = (undefined *)0x360;
  lVar41 = 8;
  puVar40 = puVar24;
  while( true ) {
    *puVar5 = *puVar40;
    puVar40 = puVar40 + 1;
    *puVar6 = *puVar40;
    puVar40 = puVar40 + 1;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined *)0x358;
  puVar6 = (undefined *)0x368;
  lVar41 = 8;
  while( true ) {
    *puVar5 = *puVar40;
    puVar40 = puVar40 + 1;
    *puVar6 = *puVar40;
    puVar40 = puVar40 + 1;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (!(bool)uVar39) {
    puVar22 = puVar22 + iVar17;
  }
  uVar73 = CONCAT44(*puVar22,*puVar22);
  uVar49 = VectorShiftLeft(uVar73,4,8,0);
  VectorTableLookup(puVar24,param_3,2);
  VectorTableLookup(puVar24,iVar17,2);
  uVar49 = VectorShiftRightInsert(uVar49,uVar73,4);
  VectorTableLookup(puVar22,puVar14,2);
  puVar24 = (undefined *)VectorTableLookup(puVar22,iVar16,2);
  uVar49 = vrev(uVar49,1);
  puVar5 = (undefined *)0x370;
  puVar6 = (undefined *)0x380;
  lVar41 = 8;
  puVar40 = puVar24;
  while( true ) {
    *puVar40 = *puVar5;
    puVar40[1] = *puVar6;
    puVar40 = puVar40 + 2;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar40 = puVar24 + 0x10;
  uVar73 = VectorBitwiseInsertIfTrue(uVar73,uVar49,auVar69._0_8_);
  puVar5 = (undefined *)0x378;
  puVar6 = (undefined *)0x388;
  lVar41 = 8;
  while( true ) {
    *puVar40 = *puVar5;
    puVar40[1] = *puVar6;
    puVar40 = puVar40 + 2;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar24 = puVar24 + 0x20;
  *(int *)puVar14 = (int)uVar73;
  uVar73 = VectorShiftRight(uVar73,4);
  VectorZip(uVar73,1);
  VectorTableLookup(puVar14,uVar26,2);
  VectorTableLookup(puVar14,uVar35,2);
  puVar5 = (undefined *)0x350;
  puVar6 = (undefined *)0x360;
  lVar41 = 8;
  while( true ) {
    *puVar24 = *puVar5;
    puVar24[1] = *puVar6;
    puVar24 = puVar24 + 2;
    lVar41 = lVar41 + -1;
    if (lVar41 == 0) break;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar12 = -*(int *)(puVar36 + -4);
  auVar82 = SIMDExpandImmediate(0,0xe,0xf);
  uVar73 = CONCAT44(iVar12,iVar12);
  auVar81 = SIMDExpandImmediate(0,0xe,0xf0);
  auVar75._8_8_ = 0x4010040140100401;
  auVar75._0_8_ = 0x4010040140100401;
  auVar89 = VectorShiftLeft(auVar75,1,8,0);
  uVar49 = CONCAT44(iVar12 + 0x40,iVar12 + 0x40);
  auVar75 = VectorTest(*(undefined (*) [16])(puVar36 + -0x11c),auVar82);
  auVar72 = VectorTest(*(undefined (*) [16])(puVar36 + -0x10c),auVar82);
  auVar76 = VectorTest(*(undefined (*) [16])(puVar36 + -0xfc),auVar82);
  auVar79 = VectorTest(*(undefined (*) [16])(puVar36 + -0xec),auVar82);
  auVar86 = VectorTest(*(undefined (*) [16])(puVar36 + -0x11c),auVar81);
  auVar74 = VectorTest(*(undefined (*) [16])(puVar36 + -0x10c),auVar81);
  auVar77 = VectorTest(*(undefined (*) [16])(puVar36 + -0xfc),auVar81);
  auVar69 = VectorTest(*(undefined (*) [16])(puVar36 + -0xec),auVar81);
  auVar78._8_8_ = 0x4010040140100401;
  auVar78._0_8_ = 0x4010040140100401;
  auVar80._8_8_ = 0x4010040140100401;
  auVar80._0_8_ = 0x4010040140100401;
  auVar9._8_8_ = 0x4010040140100401;
  auVar9._0_8_ = 0x4010040140100401;
  auVar10._8_8_ = 0x4010040140100401;
  auVar10._0_8_ = 0x4010040140100401;
  uVar60 = VectorPairwiseAdd(SUB168(auVar75 & auVar78,0),SUB168(auVar75 & auVar78,8),1);
  uVar64 = VectorPairwiseAdd(SUB168(auVar72 & auVar80,0),SUB168(auVar72 & auVar80,8),1);
  uVar85 = VectorPairwiseAdd(SUB168(auVar76 & auVar9,0),SUB168(auVar76 & auVar9,8),1);
  uVar88 = VectorPairwiseAdd(SUB168(auVar79 & auVar10,0),SUB168(auVar79 & auVar10,8),1);
  uVar50 = VectorPairwiseAdd(SUB168(auVar86 & auVar89,0),SUB168(auVar86 & auVar89,8),1);
  uVar54 = VectorPairwiseAdd(SUB168(auVar74 & auVar89,0),SUB168(auVar74 & auVar89,8),1);
  uVar56 = VectorPairwiseAdd(SUB168(auVar77 & auVar89,0),SUB168(auVar77 & auVar89,8),1);
  uVar59 = VectorPairwiseAdd(SUB168(auVar69 & auVar89,0),SUB168(auVar69 & auVar89,8),1);
  auVar87._0_8_ = VectorPairwiseAdd(uVar50,uVar54,1);
  auVar87._8_8_ = VectorPairwiseAdd(uVar56,uVar59,1);
  auVar84._0_8_ = VectorPairwiseAdd(uVar60,uVar64,1);
  auVar84._8_8_ = VectorPairwiseAdd(uVar85,uVar88,1);
  auVar69 = VectorTest(*(undefined (*) [16])(puVar36 + -0xdc),auVar82);
  auVar75 = VectorTest(*(undefined (*) [16])(puVar36 + -0xcc),auVar82);
  uVar19 = *(uint *)(puVar36 + -0x9c) | *(uint *)(puVar36 + -0x9c) >> 2;
  auVar78 = VectorTest(*(undefined (*) [16])(puVar36 + -0xbc),auVar82);
  auVar80 = VectorTest(*(undefined (*) [16])(puVar36 + -0xac),auVar82);
  auVar86 = VectorTest(*(undefined (*) [16])(puVar36 + -0xdc),auVar81);
  auVar74 = VectorTest(*(undefined (*) [16])(puVar36 + -0xcc),auVar81);
  auVar77 = VectorTest(*(undefined (*) [16])(puVar36 + -0xbc),auVar81);
  uVar19 = (uVar19 | uVar19 >> 1) & 0x11111111;
  auVar81 = VectorTest(*(undefined (*) [16])(puVar36 + -0xac),auVar81);
  uVar19 = uVar19 | uVar19 >> 3;
  auVar82._8_8_ = 0x4010040140100401;
  auVar82._0_8_ = 0x4010040140100401;
  uVar19 = uVar19 | uVar19 >> 6;
  auVar72._8_8_ = 0x4010040140100401;
  auVar72._0_8_ = 0x4010040140100401;
  auVar76._8_8_ = 0x4010040140100401;
  auVar76._0_8_ = 0x4010040140100401;
  auVar79._8_8_ = 0x4010040140100401;
  auVar79._0_8_ = 0x4010040140100401;
  uVar19 = uVar19 & 0xffff000f | (uVar19 & 0xffff00ff) >> 0xc;
  uVar60 = VectorPairwiseAdd(SUB168(auVar69 & auVar82,0),SUB168(auVar69 & auVar82,8),1);
  uVar64 = VectorPairwiseAdd(SUB168(auVar75 & auVar72,0),SUB168(auVar75 & auVar72,8),1);
  uVar85 = VectorPairwiseAdd(SUB168(auVar78 & auVar76,0),SUB168(auVar78 & auVar76,8),1);
  uVar88 = VectorPairwiseAdd(SUB168(auVar80 & auVar79,0),SUB168(auVar80 & auVar79,8),1);
  uVar50 = VectorPairwiseAdd(SUB168(auVar86 & auVar89,0),SUB168(auVar86 & auVar89,8),1);
  uVar54 = VectorPairwiseAdd(SUB168(auVar74 & auVar89,0),SUB168(auVar74 & auVar89,8),1);
  uVar56 = VectorPairwiseAdd(SUB168(auVar77 & auVar89,0),SUB168(auVar77 & auVar89,8),1);
  uVar59 = VectorPairwiseAdd(SUB168(auVar81 & auVar89,0),SUB168(auVar81 & auVar89,8),1);
  auVar67._0_8_ = VectorPairwiseAdd(uVar60,uVar64,1);
  auVar67._8_8_ = VectorPairwiseAdd(uVar85,uVar88,1);
  auVar46._0_8_ = VectorPairwiseAdd(uVar50,uVar54,1);
  auVar46._8_8_ = VectorPairwiseAdd(uVar56,uVar59,1);
  uVar50 = SUB168(auVar84 | auVar87,8);
  auVar90._0_8_ = VectorShiftLeft(uVar50,uVar49,8,1);
  uVar54 = SUB168(auVar67 | auVar46,0);
  auVar90._8_8_ = VectorShiftLeft(uVar54,uVar49,8,1);
  uVar56 = SUB168(auVar67 | auVar46,8);
  uVar59 = VectorShiftLeft(uVar56,uVar49,8,1);
  uVar49 = VectorShiftLeft(CONCAT44(uVar19,uVar19),uVar49,8,1);
  auVar63._0_8_ = VectorShiftLeft(SUB168(auVar84 | auVar87,0),uVar73,8,1);
  auVar63._8_8_ = VectorShiftLeft(uVar50,uVar73,8,1);
  auVar68._0_8_ = VectorShiftLeft(uVar54,uVar73,8,1);
  auVar68._8_8_ = VectorShiftLeft(uVar56,uVar73,8,1);
  auVar89._8_8_ = uVar49;
  auVar89._0_8_ = uVar59;
  *param_3 = SUB168(auVar63 | auVar90,0);
  param_3[1] = SUB168(auVar63 | auVar90,8);
  param_3[2] = SUB168(auVar68 | auVar89,0);
  param_3[3] = SUB168(auVar68 | auVar89,8);
  return;
}


