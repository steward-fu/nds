/*
 * Ghidra decompilation
 *
 * Function : FUN_080203f8
 * Address  : 080203f8
 * Program  : drastic16
 */


void FUN_080203f8(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  byte bVar10;
  ushort uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  ushort uVar20;
  ushort *puVar21;
  undefined8 *puVar22;
  int iVar23;
  int *piVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  undefined8 *puVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  int *piVar33;
  undefined (*pauVar34) [16];
  ushort *puVar35;
  ushort *puVar36;
  int iVar37;
  undefined (*pauVar38) [16];
  uint uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int *piVar43;
  int *piVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined4 uVar64;
  int local_154;
  uint local_150;
  int local_14c;
  undefined (*local_144) [16];
  int local_140;
  undefined (*local_13c) [16];
  uint local_138;
  undefined (*local_134) [16];
  undefined (*local_130) [16];
  int local_120;
  uint local_118;
  undefined (*local_100) [16];
  undefined (*local_f8) [16];
  int local_f4;
  int local_f0;
  uint local_e4;
  uint local_4c [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  if (param_1[param_3 * 5 + 2] != param_4) {
    *(undefined2 *)(param_1 + 0x765) = 0;
    uVar64 = 1;
    FUN_0801dca8();
    uVar30 = (uint)*(ushort *)(param_1 + 0x765);
    if (uVar30 != 0) {
      uVar46 = 0;
      local_154 = 1;
      uVar45 = 0;
      piVar43 = param_1;
      piVar44 = param_1;
      do {
        if ((uVar30 & 1) == 0) goto LAB_0802049c;
        piVar44[2] = -1;
        local_4c[0] = 0x80;
        local_4c[1] = 0x80;
        local_4c[2] = 0x80;
        local_4c[3] = 0x80;
        bVar10 = *(byte *)piVar43[0x437];
        local_3c = 0x40;
        uStack_38 = 0x10;
        uStack_34 = 0x10;
        uStack_30 = 0x20;
        iVar40 = piVar43[0x42e];
        local_2c = 0x10;
        local_138 = local_4c[uVar45];
        iVar31 = *param_1;
        if (-1 < (char)bVar10) {
switchD_0802054c_caseD_6:
          iVar31 = 9;
LAB_0802057c:
          local_150 = 0;
          local_14c = 0;
          goto LAB_0802058c;
        }
        uVar27 = (uint)(bVar10 >> 3);
        local_150 = uVar27 & 3;
        switch(bVar10 & 7) {
        case 0:
          switch(uVar45) {
          case 0:
          case 1:
          case 2:
          case 3:
            iVar23 = (uVar45 + 0x340) * 0x20000;
            iVar26 = iVar23 + -0x6000000;
            iVar37 = uVar45 * -0x20000 + -0x800000;
            local_14c = (local_138 >> 4) << 0xe;
            local_150 = uVar46 + 0x200;
            FUN_0800a1fc(*(undefined4 *)(iVar31 + 0xfba2c),iVar23,local_14c);
            local_134 = (undefined (*) [16])(uVar46 + 0x180);
            if (local_150 < 0x200) goto LAB_08020a30;
            goto LAB_08020a60;
          case 4:
            iVar37 = -0x880000;
            iVar23 = 0x6880000;
            local_134 = (undefined (*) [16])0x1a0;
            local_150 = 0x220;
            break;
          case 5:
          case 6:
            local_150 = uVar45 + 0x21f;
            local_134 = (undefined (*) [16])(uVar45 + 0x19f);
            iVar23 = (uVar45 + 0x1a1f) * 0x4000;
            iVar37 = uVar45 * -0x4000 + -0x87c000;
            break;
          case 7:
            iVar37 = -0x898000;
            iVar23 = 0x6898000;
            local_134 = (undefined (*) [16])0x1a6;
            local_150 = 0x226;
            break;
          case 8:
            iVar37 = -0x8a0000;
            iVar23 = 0x68a0000;
            local_134 = (undefined (*) [16])0x1a8;
            local_150 = 0x228;
            break;
          default:
switchD_08020904_caseD_9:
            iVar37 = 0;
            iVar23 = 0x6000000;
            local_150 = 0;
            local_134 = (undefined (*) [16])0xffffff80;
            iVar26 = iVar37;
            goto LAB_08020a10;
          }
          local_14c = (local_138 >> 4) << 0xe;
          FUN_0800a1fc(*(undefined4 *)(iVar31 + 0xfba2c),iVar23,local_14c);
          goto LAB_08020a60;
        case 1:
          switch(uVar45) {
          case 0:
          case 1:
          case 2:
          case 3:
            local_150 = local_150 * 8;
            local_134 = (undefined (*) [16])(local_150 - 0x80);
            iVar23 = (local_150 + 0x1800) * 0x4000;
            iVar26 = iVar23 + -0x6000000;
            iVar37 = -iVar26;
            goto LAB_08020a10;
          default:
            goto switchD_0802054c_caseD_7;
          case 5:
          case 6:
            local_14c = 2;
            local_150 = (uVar27 & 1) + (uVar27 & 2) * 2;
            local_13c = (undefined (*) [16])(local_150 + 2);
            iVar23 = (local_150 + 0x1800) * 0x4000;
            iVar37 = iVar23 + -0x6000000;
            local_120 = iVar23 + 0x8000;
            local_118 = -iVar37;
            local_f0 = iVar23 + -0x5ff8000;
            local_f4 = local_118 + -0x8000;
            break;
          case 7:
            iVar23 = 0x6200000;
            local_f4 = -0x210000;
            iVar37 = 0x200000;
            local_120 = 0x6210000;
            local_f0 = 0x210000;
            local_118 = -0x200000;
            local_13c = (undefined (*) [16])0x84;
            local_14c = 4;
            local_150 = 0x80;
            break;
          case 8:
            local_f4 = -0x218000;
            iVar23 = 0x6208000;
            local_120 = 0x6218000;
            local_118 = -0x208000;
            local_f0 = 0x218000;
            iVar37 = 0x208000;
            local_13c = (undefined (*) [16])0x86;
            local_14c = 4;
            local_150 = 0x82;
          }
LAB_08020e44:
          uVar27 = local_138 >> 4;
          iVar26 = uVar27 << 0xe;
          iVar29 = uVar27 * 2;
          FUN_0800a1fc(*(undefined4 *)(iVar31 + 0xfba2c),iVar23,iVar26);
          iVar31 = *param_1;
          FUN_08009808(iVar31,*(int *)(iVar31 + 0xfc814) + iVar37,iVar26,
                       iVar40 - *(int *)(iVar31 + 0xfc810));
          piVar24 = (int *)((int)param_1 + local_150 + 0x1958);
          piVar25 = (int *)((int)param_1 + local_150 * 2 + 0x1158);
          uVar32 = (int)param_1 + local_150 * 2 + 0x1158;
          uVar39 = (int)param_1 + local_150 + 0x1958;
          iVar31 = iVar40 + local_118;
          uVar20 = (ushort)(1 << (uVar45 & 0xff));
          if ((uVar27 < 0x10 ||
              (piVar25 < param_1 + local_150 + 0x2e + uVar27 &&
               param_1 + local_150 + 0x2e < (int *)((int)piVar25 + iVar29) ||
              param_1 + local_150 + 0x2e < (int *)((int)piVar24 + uVar27) &&
              piVar24 < param_1 + local_150 + 0x2e + uVar27)) ||
              uVar32 < uVar39 + uVar27 && uVar39 < uVar32 + iVar29) {
            piVar24 = param_1 + local_150 + 0x2d;
            iVar37 = local_150 * 2 + 0x1158;
            iVar23 = 0;
            uVar32 = uVar46;
            do {
              uVar11 = *(ushort *)((int)param_1 + iVar23 + iVar37);
              piVar24 = piVar24 + 1;
              *piVar24 = iVar31;
              *(ushort *)((int)param_1 + iVar23 + iVar37) = uVar20 | uVar11;
              *(char *)((int)param_1 + uVar32 + (local_150 - uVar46) + 0x1958) = (char)uVar32;
              uVar32 = uVar32 + 1;
              iVar23 = iVar23 + 2;
            } while (uVar32 != uVar27 + uVar46);
          }
          else {
            auVar1 = SIMDExpandImmediate(0,0,0x10);
            auVar2 = SIMDExpandImmediate(0,0,4);
            uVar39 = local_138 >> 8;
            puVar28 = (undefined8 *)((int)param_1 + local_150 + 0x1958);
            uVar32 = uVar39 * 0x10;
            auVar4._4_4_ = CONCAT22(uVar20,uVar20);
            auVar4._0_4_ = CONCAT22(uVar20,uVar20);
            auVar4._8_8_ = 0;
            auVar4 = auVar4 & auVar4 << 0x40;
            pauVar38 = (undefined (*) [16])((int)param_1 + local_150 * 2 + 0x1158);
            auVar57._4_4_ = local_154;
            auVar57._0_4_ = uVar46;
            auVar57._8_4_ = uVar46 + 2;
            auVar57._12_4_ = uVar46 + 3;
            local_118 = 0;
            puVar22 = (undefined8 *)(param_1 + local_150 + 0x2e);
            local_100 = pauVar38;
            do {
              auVar63 = VectorAdd(auVar57,auVar2,4);
              pauVar34 = pauVar38 + 1;
              auVar62 = VectorAdd(auVar63,auVar2,4);
              auVar61 = *pauVar38;
              uVar49 = VectorCopyNarrow(auVar57,4);
              uVar50 = VectorCopyNarrow(auVar63,4);
              local_118 = local_118 + 1;
              auVar63 = VectorAdd(auVar62,auVar2,4);
              *puVar22 = 0;
              puVar22[1] = 0;
              auVar61 = auVar61 | auVar4;
              uVar51 = VectorCopyNarrow(auVar62,4);
              uVar52 = VectorCopyNarrow(auVar63,4);
              pauVar38 = pauVar38 + 2;
              auVar62 = *pauVar34 | auVar4;
              puVar22[2] = 0;
              puVar22[3] = 0;
              auVar14._8_8_ = uVar50;
              auVar14._0_8_ = uVar49;
              uVar49 = VectorCopyNarrow(auVar14,2);
              auVar18._8_8_ = uVar52;
              auVar18._0_8_ = uVar51;
              uVar50 = VectorCopyNarrow(auVar18,2);
              puVar22[4] = 0;
              puVar22[5] = 0;
              auVar57 = VectorAdd(auVar57,auVar1,4);
              puVar22[6] = 0;
              puVar22[7] = 0;
              *(longlong *)*local_100 = auVar61._0_8_;
              *(longlong *)(*local_100 + 8) = auVar61._8_8_;
              *(longlong *)local_100[1] = auVar62._0_8_;
              *(longlong *)(local_100[1] + 8) = auVar62._8_8_;
              *puVar28 = uVar49;
              puVar28[1] = uVar50;
              puVar28 = puVar28 + 2;
              puVar22 = puVar22 + 8;
              local_100 = local_100 + 2;
            } while (local_118 < uVar39);
            iVar37 = local_150 + uVar32;
            iVar23 = uVar32 + uVar46;
            if (uVar27 != uVar32) {
              iVar42 = iVar37 - iVar23;
              iVar48 = uVar27 + uVar39 * -0x10 + iVar23;
              iVar41 = 0;
              piVar24 = param_1 + iVar37 + 0x4000002d;
              iVar37 = iVar37 * 2 + 0x1158;
              do {
                uVar11 = *(ushort *)((int)param_1 + iVar41 + iVar37);
                piVar24 = piVar24 + 1;
                *piVar24 = iVar31;
                *(ushort *)((int)param_1 + iVar41 + iVar37) = uVar20 | uVar11;
                *(char *)((int)param_1 + iVar23 + iVar42 + 0x1958) = (char)iVar23;
                iVar23 = iVar23 + 1;
                iVar41 = iVar41 + 2;
              } while (iVar23 != iVar48);
            }
          }
          FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),local_120,iVar26);
          iVar31 = *param_1;
          FUN_08009808(iVar31,*(int *)(iVar31 + 0xfc814) + local_f0,iVar26,
                       iVar40 - *(int *)(iVar31 + 0xfc810));
          piVar24 = (int *)((int)param_1 + (int)local_13c * 2 + 0x1158);
          piVar25 = (int *)((int)param_1 + (int)local_13c + 0x1958);
          uVar39 = (int)param_1 + (int)local_13c * 2 + 0x1158;
          uVar32 = (int)param_1 + (int)local_13c + 0x1958;
          if ((uVar27 < 0x10 ||
              (piVar24 < param_1 + (int)local_13c + 0x2e + uVar27 &&
               param_1 + (int)local_13c + 0x2e < (int *)((int)piVar24 + iVar29) ||
              param_1 + (int)local_13c + 0x2e < (int *)((int)piVar25 + uVar27) &&
              piVar25 < param_1 + (int)local_13c + 0x2e + uVar27)) ||
              uVar39 < uVar32 + uVar27 && uVar32 < uVar39 + iVar29) {
            piVar24 = param_1 + (int)local_13c + 0x2d;
            iVar23 = (int)local_13c * 2 + 0x1158;
            iVar31 = 0;
            uVar32 = uVar46;
            do {
              uVar11 = *(ushort *)((int)param_1 + iVar31 + iVar23);
              piVar24 = piVar24 + 1;
              *piVar24 = iVar40 + local_f4;
              *(ushort *)((int)param_1 + iVar31 + iVar23) = uVar20 | uVar11;
              *(char *)((int)param_1 + uVar32 + ((int)local_13c - uVar46) + 0x1958) = (char)uVar32;
              uVar32 = uVar32 + 1;
              iVar31 = iVar31 + 2;
            } while (uVar32 != uVar27 + uVar46);
          }
          else {
            auVar1 = SIMDExpandImmediate(0,0,0x10);
            auVar2 = SIMDExpandImmediate(0,0,4);
            auVar5._4_4_ = CONCAT22(uVar20,uVar20);
            auVar5._0_4_ = CONCAT22(uVar20,uVar20);
            auVar5._8_8_ = 0;
            auVar5 = auVar5 & auVar5 << 0x40;
            puVar28 = (undefined8 *)((int)param_1 + (int)local_13c + 0x1958);
            uVar32 = uVar27 & 0xfffffff0;
            pauVar38 = (undefined (*) [16])((int)param_1 + (int)local_13c * 2 + 0x1158);
            auVar58._4_4_ = local_154;
            auVar58._0_4_ = uVar46;
            auVar58._8_4_ = uVar46 + 2;
            auVar58._12_4_ = uVar46 + 3;
            local_134 = (undefined (*) [16])0x0;
            puVar22 = (undefined8 *)(param_1 + (int)local_13c + 0x2e);
            local_130 = pauVar38;
            do {
              auVar63 = VectorAdd(auVar58,auVar2,4);
              pauVar34 = pauVar38 + 1;
              auVar62 = VectorAdd(auVar63,auVar2,4);
              auVar61 = *pauVar38;
              uVar49 = VectorCopyNarrow(auVar58,4);
              uVar50 = VectorCopyNarrow(auVar63,4);
              local_134 = (undefined (*) [16])((int)local_134 + 1);
              auVar63 = VectorAdd(auVar62,auVar2,4);
              *puVar22 = 0;
              puVar22[1] = 0;
              auVar61 = auVar61 | auVar5;
              uVar51 = VectorCopyNarrow(auVar62,4);
              uVar52 = VectorCopyNarrow(auVar63,4);
              pauVar38 = pauVar38 + 2;
              auVar62 = *pauVar34 | auVar5;
              puVar22[2] = 0;
              puVar22[3] = 0;
              auVar15._8_8_ = uVar50;
              auVar15._0_8_ = uVar49;
              uVar49 = VectorCopyNarrow(auVar15,2);
              auVar19._8_8_ = uVar52;
              auVar19._0_8_ = uVar51;
              uVar50 = VectorCopyNarrow(auVar19,2);
              puVar22[4] = 0;
              puVar22[5] = 0;
              auVar58 = VectorAdd(auVar58,auVar1,4);
              puVar22[6] = 0;
              puVar22[7] = 0;
              *(longlong *)*local_130 = auVar61._0_8_;
              *(longlong *)(*local_130 + 8) = auVar61._8_8_;
              *(longlong *)local_130[1] = auVar62._0_8_;
              *(longlong *)(local_130[1] + 8) = auVar62._8_8_;
              *puVar28 = uVar49;
              puVar28[1] = uVar50;
              puVar28 = puVar28 + 2;
              puVar22 = puVar22 + 8;
              local_130 = local_130 + 2;
            } while (local_134 < local_138 >> 8);
            iVar23 = (int)local_13c + uVar32;
            iVar31 = uVar32 + uVar46;
            if (uVar27 != uVar32) {
              iVar41 = iVar23 - iVar31;
              iVar37 = iVar23 * 2 + 0x1158;
              iVar29 = (uVar27 - uVar32) + iVar31;
              iVar26 = 0;
              piVar24 = param_1 + iVar23 + 0x4000002d;
              do {
                uVar11 = *(ushort *)((int)param_1 + iVar26 + iVar37);
                piVar24 = piVar24 + 1;
                *piVar24 = iVar40 + local_f4;
                *(ushort *)((int)param_1 + iVar26 + iVar37) = uVar20 | uVar11;
                *(char *)((int)param_1 + iVar31 + iVar41 + 0x1958) = (char)iVar31;
                iVar31 = iVar31 + 1;
                iVar26 = iVar26 + 2;
              } while (iVar31 != iVar29);
            }
          }
          iVar31 = 8;
          goto LAB_0802058c;
        case 2:
          switch(uVar45) {
          case 0:
          case 1:
            local_150 = ((uVar27 & 1) + 0x20) * 8;
            local_134 = (undefined (*) [16])(local_150 - 0x80);
            iVar23 = (local_150 + 0x1800) * 0x4000;
            iVar26 = iVar23 + -0x6000000;
            iVar37 = -iVar26;
            break;
          case 2:
          case 3:
            uVar27 = uVar27 & 1;
            local_150 = uVar27 * 8;
            FUN_0800cb50(*(undefined4 *)(iVar31 + 0xfba30),(local_150 + 0x1800) * 0x4000,
                         local_138 << 10,iVar31,uVar64);
            uVar32 = local_138 >> 7;
            uVar20 = (ushort)(1 << (uVar45 & 0xff));
            if (uVar32 < 8 ||
                param_1 + uVar27 * 4 + 0x760 < param_1 + uVar27 * 8 + 0x454 + uVar32 &&
                param_1 + uVar27 * 8 + 0x454 <
                (int *)((int)(param_1 + uVar27 * 4 + 0x760) + uVar32 * 2)) {
              piVar25 = param_1 + local_150 + 0x40000453;
              piVar24 = param_1 + uVar27 * 4 + 0x760;
              do {
                uVar11 = *(ushort *)piVar24;
                piVar25 = piVar25 + 1;
                *piVar25 = iVar40;
                iVar40 = iVar40 + 0x20000;
                piVar33 = (int *)((int)piVar24 + 2);
                *(ushort *)piVar24 = uVar11 | uVar20;
                piVar24 = piVar33;
              } while (piVar33 != (int *)((int)param_1 + (local_150 + uVar32) * 2 + 0x1d80));
            }
            else {
              auVar1 = SIMDExpandImmediate(0,4,0x10);
              auVar2 = SIMDExpandImmediate(0,4,8);
              pauVar34 = (undefined (*) [16])(param_1 + uVar27 * 4 + 0x760);
              auVar8._4_4_ = CONCAT22(uVar20,uVar20);
              auVar8._0_4_ = CONCAT22(uVar20,uVar20);
              auVar8._8_8_ = 0;
              uVar39 = local_138 >> 10;
              uVar47 = 0;
              auVar55._4_4_ = iVar40 + 0x20000;
              auVar55._0_4_ = iVar40;
              auVar55._8_4_ = iVar40 + 0x40000;
              auVar55._12_4_ = iVar40 + 0x60000;
              puVar22 = (undefined8 *)(param_1 + uVar27 * 8 + 0x454);
              pauVar38 = pauVar34;
              do {
                auVar61 = *pauVar38;
                pauVar38 = pauVar38 + 1;
                auVar62 = VectorAdd(auVar55,auVar2,4);
                uVar47 = uVar47 + 1;
                auVar61 = auVar61 | auVar8 & auVar8 << 0x40;
                *puVar22 = auVar55._0_8_;
                puVar22[1] = auVar55._8_8_;
                auVar55 = VectorAdd(auVar55,auVar1,4);
                puVar22[2] = auVar62._0_8_;
                puVar22[3] = auVar62._8_8_;
                *(longlong *)*pauVar34 = auVar61._0_8_;
                *(longlong *)(*pauVar34 + 8) = auVar61._8_8_;
                pauVar34 = pauVar34 + 1;
                puVar22 = puVar22 + 4;
              } while (uVar47 < uVar39);
              iVar23 = uVar32 + uVar39 * -8;
              iVar40 = iVar40 + uVar39 * 0x100000;
              iVar31 = local_150 + uVar39 * 8;
              if (uVar32 != uVar39 * 8) {
                param_1[iVar31 + 0x454] = iVar40;
                *(ushort *)(param_1 + uVar39 * 4 + uVar27 * 4 + 0x760) =
                     uVar20 | *(ushort *)(param_1 + uVar39 * 4 + uVar27 * 4 + 0x760);
                if (iVar23 != 1) {
                  iVar37 = (iVar31 + 1) * 2;
                  param_1[iVar31 + 0x455] = iVar40 + 0x20000;
                  *(ushort *)((int)param_1 + iVar37 + 0x1d80) =
                       uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d80);
                  if (iVar23 != 2) {
                    param_1[iVar31 + 0x456] = iVar40 + 0x40000;
                    *(ushort *)(param_1 + uVar39 * 4 + uVar27 * 4 + 0x761) =
                         uVar20 | *(ushort *)(param_1 + uVar39 * 4 + uVar27 * 4 + 0x761);
                    if (iVar23 != 3) {
                      iVar37 = (iVar31 + 3) * 2;
                      param_1[iVar31 + 0x457] = iVar40 + 0x60000;
                      *(ushort *)((int)param_1 + iVar37 + 0x1d80) =
                           uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d80);
                      if (iVar23 != 4) {
                        param_1[iVar31 + 0x458] = iVar40 + 0x80000;
                        *(ushort *)(param_1 + uVar39 * 4 + uVar27 * 4 + 0x762) =
                             uVar20 | *(ushort *)(param_1 + uVar39 * 4 + uVar27 * 4 + 0x762);
                        if (iVar23 != 5) {
                          iVar37 = (iVar31 + 5) * 2;
                          param_1[iVar31 + 0x459] = iVar40 + 0xa0000;
                          *(ushort *)((int)param_1 + iVar37 + 0x1d80) =
                               uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d80);
                          if (iVar23 != 6) {
                            param_1[iVar31 + 0x45a] = iVar40 + 0xc0000;
                            *(ushort *)(param_1 + uVar39 * 4 + uVar27 * 4 + 0x763) =
                                 uVar20 | *(ushort *)(param_1 + uVar39 * 4 + uVar27 * 4 + 0x763);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar31 = 7;
            local_14c = 0;
            goto LAB_0802058c;
          case 4:
            iVar26 = 0x400000;
            iVar37 = -0x400000;
            iVar23 = 0x6400000;
            local_134 = (undefined (*) [16])0x80;
            local_150 = 0x100;
            break;
          case 5:
          case 6:
            local_150 = (uVar27 & 1) + 0x100 + (uVar27 & 2) * 2;
            local_13c = (undefined (*) [16])(local_150 + 2);
            local_14c = 2;
            iVar23 = (local_150 + 0x1800) * 0x4000;
            iVar37 = iVar23 + -0x6000000;
            local_120 = iVar23 + 0x8000;
            local_118 = -iVar37;
            local_f0 = iVar23 + -0x5ff8000;
            local_f4 = local_118 + -0x8000;
            goto LAB_08020e44;
          case 7:
            iVar31 = 1;
            local_150 = 0;
            goto LAB_08021d34;
          case 8:
            iVar26 = 0x600000;
            iVar37 = -0x600000;
            iVar23 = 0x6600000;
            local_134 = (undefined (*) [16])0x100;
            local_150 = 0x180;
            break;
          default:
            goto switchD_08020904_caseD_9;
          }
          break;
        case 3:
          switch(uVar45) {
          case 0:
          case 1:
          case 2:
          case 3:
            uVar27 = local_138 >> 7;
            uVar32 = param_1[0x9b8c5];
            piVar24 = (int *)((int)param_1 + local_150 * 2 + 0x1d6c);
            uVar20 = (ushort)(1 << (uVar45 & 0xff));
            if (uVar27 < 8 ||
                piVar24 < param_1 + local_150 + 0x44a + uVar27 &&
                param_1 + local_150 + 0x44a < (int *)((int)piVar24 + uVar27 * 2)) {
              piVar24 = param_1 + local_150 + 0x449;
              puVar21 = (ushort *)((int)param_1 + local_150 * 2 + 0x1d6c);
              do {
                uVar11 = *puVar21;
                piVar24 = piVar24 + 1;
                *piVar24 = iVar40;
                iVar40 = iVar40 + 0x20000;
                puVar35 = puVar21 + 1;
                *puVar21 = uVar11 | uVar20;
                puVar21 = puVar35;
              } while (puVar35 != (ushort *)((int)param_1 + (local_150 + uVar27) * 2 + 0x1d6c));
            }
            else {
              auVar1 = SIMDExpandImmediate(0,4,0x10);
              auVar2 = SIMDExpandImmediate(0,4,8);
              auVar6._4_4_ = CONCAT22(uVar20,uVar20);
              auVar6._0_4_ = CONCAT22(uVar20,uVar20);
              auVar6._8_8_ = 0;
              pauVar34 = (undefined (*) [16])((int)param_1 + local_150 * 2 + 0x1d6c);
              uVar39 = local_138 >> 10;
              uVar47 = 0;
              auVar53._4_4_ = iVar40 + 0x20000;
              auVar53._0_4_ = iVar40;
              auVar53._8_4_ = iVar40 + 0x40000;
              auVar53._12_4_ = iVar40 + 0x60000;
              puVar22 = (undefined8 *)(param_1 + local_150 + 0x44a);
              pauVar38 = pauVar34;
              do {
                auVar61 = *pauVar38;
                pauVar38 = pauVar38 + 1;
                auVar62 = VectorAdd(auVar53,auVar2,4);
                uVar47 = uVar47 + 1;
                auVar61 = auVar61 | auVar6 & auVar6 << 0x40;
                *puVar22 = auVar53._0_8_;
                puVar22[1] = auVar53._8_8_;
                auVar53 = VectorAdd(auVar53,auVar1,4);
                puVar22[2] = auVar62._0_8_;
                puVar22[3] = auVar62._8_8_;
                *(longlong *)*pauVar34 = auVar61._0_8_;
                *(longlong *)(*pauVar34 + 8) = auVar61._8_8_;
                pauVar34 = pauVar34 + 1;
                puVar22 = puVar22 + 4;
              } while (uVar47 < uVar39);
              iVar40 = iVar40 + uVar39 * 0x100000;
              iVar23 = uVar27 + uVar39 * -8;
              iVar31 = local_150 + uVar39 * 8;
              if (uVar27 != uVar39 * 8) {
                uVar11 = *(ushort *)((int)param_1 + iVar31 * 2 + 0x1d6c);
                param_1[iVar31 + 0x44a] = iVar40;
                *(ushort *)((int)param_1 + iVar31 * 2 + 0x1d6c) = uVar20 | uVar11;
                if (iVar23 != 1) {
                  iVar37 = (iVar31 + 1) * 2;
                  param_1[iVar31 + 1099] = iVar40 + 0x20000;
                  *(ushort *)((int)param_1 + iVar37 + 0x1d6c) =
                       uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d6c);
                  if (iVar23 != 2) {
                    iVar37 = (iVar31 + 2) * 2;
                    param_1[iVar31 + 0x44c] = iVar40 + 0x40000;
                    *(ushort *)((int)param_1 + iVar37 + 0x1d6c) =
                         uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d6c);
                    if (iVar23 != 3) {
                      iVar37 = (iVar31 + 3) * 2;
                      param_1[iVar31 + 0x44d] = iVar40 + 0x60000;
                      *(ushort *)((int)param_1 + iVar37 + 0x1d6c) =
                           uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d6c);
                      if (iVar23 != 4) {
                        iVar37 = (iVar31 + 4) * 2;
                        param_1[iVar31 + 0x44e] = iVar40 + 0x80000;
                        *(ushort *)((int)param_1 + iVar37 + 0x1d6c) =
                             uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d6c);
                        if (iVar23 != 5) {
                          iVar37 = (iVar31 + 5) * 2;
                          param_1[iVar31 + 0x44f] = iVar40 + 0xa0000;
                          *(ushort *)((int)param_1 + iVar37 + 0x1d6c) =
                               uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d6c);
                          if (iVar23 != 6) {
                            iVar23 = (iVar31 + 6) * 2;
                            param_1[iVar31 + 0x450] = iVar40 + 0xc0000;
                            *(ushort *)((int)param_1 + iVar23 + 0x1d6c) =
                                 uVar20 | *(ushort *)((int)param_1 + iVar23 + 0x1d6c);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar27 = 0xff << (uVar46 & 0xff);
            local_14c = 0;
            param_1[0x61202] =
                 param_1[0x61202] | (uVar32 >> (uVar46 & 0xff) & 0xff) << (local_150 << 3);
            iVar31 = 4;
            param_1[0x61204] = uVar27 | param_1[0x61204];
            param_1[0x9b8c5] = uVar32 & ~uVar27;
            break;
          case 4:
            local_150 = 0;
            goto LAB_080215e4;
          case 5:
          case 6:
            local_150 = (uVar27 & 1) + (uVar27 & 2) * 2;
LAB_080215e4:
            uVar27 = local_138 >> 4;
            piVar24 = (int *)((int)param_1 + local_150 * 2 + 0x1d74);
            uVar32 = 1 << (uVar45 & 0xff);
            uVar20 = (ushort)uVar32;
            if (uVar27 < 8 ||
                piVar24 < param_1 + local_150 + 0x44e + uVar27 &&
                param_1 + local_150 + 0x44e < (int *)((int)piVar24 + uVar27 * 2)) {
              piVar24 = param_1 + local_150 + 0x44d;
              puVar21 = (ushort *)((int)param_1 + local_150 * 2 + 0x1d74);
              do {
                uVar11 = *puVar21;
                piVar24 = piVar24 + 1;
                *piVar24 = iVar40;
                iVar40 = iVar40 + 0x4000;
                puVar35 = puVar21 + 1;
                *puVar21 = uVar11 | uVar20;
                puVar21 = puVar35;
              } while (puVar35 != (ushort *)((int)param_1 + (local_150 + uVar27) * 2 + 0x1d74));
            }
            else {
              auVar1 = SIMDExpandImmediate(0,4,2);
              pauVar34 = (undefined (*) [16])((int)param_1 + local_150 * 2 + 0x1d74);
              auVar2 = SIMDExpandImmediate(0,4,1);
              uVar39 = local_138 >> 7;
              auVar63._4_4_ = CONCAT22(uVar20,uVar20);
              auVar63._0_4_ = CONCAT22(uVar20,uVar20);
              auVar63._8_8_ = 0;
              uVar47 = 0;
              auVar60._4_4_ = iVar40 + 0x4000;
              auVar60._0_4_ = iVar40;
              auVar60._8_4_ = iVar40 + 0x8000;
              auVar60._12_4_ = iVar40 + 0xc000;
              puVar22 = (undefined8 *)(param_1 + local_150 + 0x44e);
              pauVar38 = pauVar34;
              do {
                auVar61 = *pauVar38;
                pauVar38 = pauVar38 + 1;
                auVar62 = VectorAdd(auVar60,auVar2,4);
                uVar47 = uVar47 + 1;
                auVar61 = auVar61 | auVar63 & auVar63 << 0x40;
                *puVar22 = auVar60._0_8_;
                puVar22[1] = auVar60._8_8_;
                auVar60 = VectorAdd(auVar60,auVar1,4);
                puVar22[2] = auVar62._0_8_;
                puVar22[3] = auVar62._8_8_;
                *(longlong *)*pauVar34 = auVar61._0_8_;
                *(longlong *)(*pauVar34 + 8) = auVar61._8_8_;
                pauVar34 = pauVar34 + 1;
                puVar22 = puVar22 + 4;
              } while (uVar47 < uVar39);
              iVar23 = uVar27 + uVar39 * -8;
              iVar40 = iVar40 + uVar39 * 0x20000;
              iVar31 = local_150 + uVar39 * 8;
              if (uVar27 != uVar39 * 8) {
                uVar11 = *(ushort *)((int)param_1 + iVar31 * 2 + 0x1d74);
                param_1[iVar31 + 0x44e] = iVar40;
                *(ushort *)((int)param_1 + iVar31 * 2 + 0x1d74) = uVar20 | uVar11;
                if (iVar23 != 1) {
                  iVar37 = (iVar31 + 1) * 2;
                  param_1[iVar31 + 0x44f] = iVar40 + 0x4000;
                  *(ushort *)((int)param_1 + iVar37 + 0x1d74) =
                       uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d74);
                  if (iVar23 != 2) {
                    iVar37 = (iVar31 + 2) * 2;
                    param_1[iVar31 + 0x450] = iVar40 + 0x8000;
                    *(ushort *)((int)param_1 + iVar37 + 0x1d74) =
                         uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d74);
                    if (iVar23 != 3) {
                      iVar37 = (iVar31 + 3) * 2;
                      param_1[iVar31 + 0x451] = iVar40 + 0xc000;
                      *(ushort *)((int)param_1 + iVar37 + 0x1d74) =
                           uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d74);
                      if (iVar23 != 4) {
                        iVar37 = (iVar31 + 4) * 2;
                        param_1[iVar31 + 0x452] = iVar40 + 0x10000;
                        *(ushort *)((int)param_1 + iVar37 + 0x1d74) =
                             uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d74);
                        if (iVar23 != 5) {
                          iVar37 = (iVar31 + 5) * 2;
                          param_1[iVar31 + 0x453] = iVar40 + 0x14000;
                          *(ushort *)((int)param_1 + iVar37 + 0x1d74) =
                               uVar20 | *(ushort *)((int)param_1 + iVar37 + 0x1d74);
                          if (iVar23 != 6) {
                            iVar23 = (iVar31 + 6) * 2;
                            param_1[iVar31 + 0x454] = iVar40 + 0x18000;
                            *(ushort *)((int)param_1 + iVar23 + 0x1d74) =
                                 uVar20 | *(ushort *)((int)param_1 + iVar23 + 0x1d74);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (uVar45 == 4) {
              param_1[0x61203] = param_1[0x9b8c6] & 0xfU | param_1[0x61203];
              local_14c = 0;
              param_1[0x9b8c6] = param_1[0x9b8c6] & 0xffffff00;
              param_1[0x61206] = 0xf;
              iVar31 = 5;
            }
            else {
              iVar31 = 5;
              param_1[0x61203] =
                   param_1[0x61203] |
                   ((uint)param_1[0x9b8c6] >> (uVar46 - 0x20 & 0xff) & 1) << (local_150 << 3);
              param_1[0x9b8c6] = param_1[0x9b8c6] & ~(0xff << (uVar46 - 0x20 & 0xff));
              param_1[0x61206] = uVar32 | param_1[0x61206];
              local_14c = 0;
            }
            break;
          case 7:
switchD_08020904_caseD_0:
            iVar31 = 10;
            goto LAB_0802057c;
          case 8:
            iVar31 = 3;
            local_140 = 1;
LAB_080205e4:
            uVar27 = local_138 >> 4;
            piVar24 = (int *)((int)param_1 + local_140 * 2 + 0x1d68);
            iVar23 = local_140 + 0x448;
            uVar20 = (ushort)(1 << (uVar45 & 0xff));
            puVar21 = (ushort *)((int)param_1 + local_140 * 2 + 0x1d68);
            if (uVar27 < 8 ||
                piVar24 < param_1 + local_140 + 0x448 + uVar27 &&
                param_1 + local_140 + 0x448 < (int *)((int)piVar24 + uVar27 * 2)) {
              piVar24 = param_1 + local_140 + 0x447;
              puVar35 = puVar21;
              do {
                uVar11 = *puVar35;
                piVar24 = piVar24 + 1;
                *piVar24 = iVar40;
                iVar40 = iVar40 + 0x2000;
                puVar36 = puVar35 + 1;
                *puVar35 = uVar11 | uVar20;
                puVar35 = puVar36;
              } while (puVar36 != puVar21 + uVar27);
            }
            else {
              auVar1 = SIMDExpandImmediate(0,4,1);
              auVar2 = SIMDExpandImmediate(0,2,0x80);
              auVar61._4_4_ = CONCAT22(uVar20,uVar20);
              auVar61._0_4_ = CONCAT22(uVar20,uVar20);
              auVar61._8_8_ = 0;
              pauVar34 = (undefined (*) [16])((int)param_1 + local_140 * 2 + 0x1d68);
              uVar39 = local_138 >> 7;
              uVar32 = uVar39 * 8;
              uVar47 = 0;
              auVar62._4_4_ = iVar40 + 0x2000;
              auVar62._0_4_ = iVar40;
              auVar62._8_4_ = iVar40 + 0x4000;
              auVar62._12_4_ = iVar40 + 0x6000;
              puVar22 = (undefined8 *)(param_1 + local_140 + 0x448);
              pauVar38 = pauVar34;
              do {
                auVar63 = *pauVar34;
                pauVar34 = pauVar34 + 1;
                auVar60 = VectorAdd(auVar62,auVar2,4);
                uVar47 = uVar47 + 1;
                auVar63 = auVar63 | auVar61 & auVar61 << 0x40;
                *puVar22 = auVar62._0_8_;
                puVar22[1] = auVar62._8_8_;
                auVar62 = VectorAdd(auVar62,auVar1,4);
                puVar22[2] = auVar60._0_8_;
                puVar22[3] = auVar60._8_8_;
                *(longlong *)*pauVar38 = auVar63._0_8_;
                *(longlong *)(*pauVar38 + 8) = auVar63._8_8_;
                pauVar38 = pauVar38 + 1;
                puVar22 = puVar22 + 4;
              } while (uVar47 < uVar39);
              iVar37 = uVar27 + uVar39 * -8;
              iVar40 = iVar40 + uVar39 * 0x10000;
              if (uVar27 != uVar32) {
                param_1[iVar23 + uVar39 * 8] = iVar40;
                iVar26 = uVar32 + 1;
                puVar21[uVar39 * 8] = uVar20 | puVar21[uVar39 * 8];
                if (iVar37 != 1) {
                  param_1[iVar23 + iVar26] = iVar40 + 0x2000;
                  iVar29 = uVar32 + 2;
                  puVar21[iVar26] = uVar20 | puVar21[iVar26];
                  if (iVar37 != 2) {
                    param_1[iVar23 + iVar29] = iVar40 + 0x4000;
                    iVar26 = uVar32 + 3;
                    puVar21[iVar29] = uVar20 | puVar21[iVar29];
                    if (iVar37 != 3) {
                      param_1[iVar23 + iVar26] = iVar40 + 0x6000;
                      iVar29 = uVar32 + 4;
                      puVar21[iVar26] = uVar20 | puVar21[iVar26];
                      if (iVar37 != 4) {
                        param_1[iVar23 + iVar29] = iVar40 + 0x8000;
                        iVar26 = uVar32 + 5;
                        puVar21[iVar29] = uVar20 | puVar21[iVar29];
                        if (iVar37 != 5) {
                          iVar29 = uVar32 + 6;
                          param_1[iVar23 + iVar26] = iVar40 + 0xa000;
                          puVar21[iVar26] = uVar20 | puVar21[iVar26];
                          if (iVar37 != 6) {
                            param_1[iVar23 + iVar29] = iVar40 + 0xc000;
                            puVar21[iVar29] = uVar20 | puVar21[iVar29];
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            local_150 = 0;
            local_14c = 0;
            param_1[local_140 * 0x203d0 + 0x76b] = param_1[local_140 + 0x448];
            local_138 = local_138 >> 1;
            break;
          default:
            goto switchD_0802054c_caseD_7;
          }
          goto LAB_0802058c;
        case 4:
          switch(uVar45) {
          case 0:
          case 1:
          case 7:
          case 8:
            goto switchD_08020904_caseD_0;
          case 2:
            iVar26 = 0x200000;
            iVar37 = -0x200000;
            iVar23 = 0x6200000;
            local_134 = (undefined (*) [16])0x0;
            local_150 = 0x80;
            break;
          case 3:
            iVar26 = 0x600000;
            iVar37 = -0x600000;
            iVar23 = 0x6600000;
            local_134 = (undefined (*) [16])0x100;
            local_150 = 0x180;
            break;
          case 4:
            iVar31 = 0;
            local_150 = 0;
            local_138 = local_138 >> 1;
            goto LAB_08021d34;
          case 5:
          case 6:
            iVar31 = 0;
            local_150 = (uVar27 & 1) << 1;
LAB_08021d34:
            iVar23 = local_150 + iVar31 * 4;
            uVar27 = local_138 >> 3;
            puVar22 = (undefined8 *)(param_1 + iVar23 + 0x440);
            local_13c = (undefined (*) [16])((int)param_1 + iVar23 * 2 + 0x1d58);
            iVar37 = iVar31 + 0x110;
            iVar23 = iVar31 * 8 + 0x1d58;
            uVar20 = (ushort)(1 << (uVar45 & 0xff));
            if (uVar27 < 8 ||
                local_13c < (undefined (*) [16])((int)puVar22 + uVar27 * 4) &&
                puVar22 < *local_13c + uVar27 * 2) {
              piVar24 = param_1 + iVar37 * 4 + local_150 + 0x3fffffff;
              puVar21 = (ushort *)((int)param_1 + local_150 * 2 + iVar23);
              do {
                uVar11 = *puVar21;
                piVar24 = piVar24 + 1;
                *piVar24 = iVar40;
                iVar40 = iVar40 + 0x2000;
                puVar35 = puVar21 + 1;
                *puVar21 = uVar11 | uVar20;
                puVar21 = puVar35;
              } while (puVar35 != (ushort *)((int)param_1 + (uVar27 + local_150) * 2 + iVar23));
            }
            else {
              auVar1 = SIMDExpandImmediate(0,4,1);
              auVar2 = SIMDExpandImmediate(0,2,0x80);
              uVar32 = local_138 >> 6;
              auVar7._4_4_ = CONCAT22(uVar20,uVar20);
              auVar7._0_4_ = CONCAT22(uVar20,uVar20);
              auVar7._8_8_ = 0;
              uVar39 = 0;
              auVar54._4_4_ = iVar40 + 0x2000;
              auVar54._0_4_ = iVar40;
              auVar54._8_4_ = iVar40 + 0x4000;
              auVar54._12_4_ = iVar40 + 0x6000;
              local_134 = local_13c;
              do {
                auVar62 = VectorAdd(auVar54,auVar2,4);
                uVar39 = uVar39 + 1;
                auVar61 = *local_13c;
                local_13c = local_13c + 1;
                auVar61 = auVar61 | auVar7 & auVar7 << 0x40;
                *puVar22 = auVar54._0_8_;
                puVar22[1] = auVar54._8_8_;
                auVar54 = VectorAdd(auVar54,auVar1,4);
                puVar22[2] = auVar62._0_8_;
                puVar22[3] = auVar62._8_8_;
                *(longlong *)*local_134 = auVar61._0_8_;
                *(longlong *)(*local_134 + 8) = auVar61._8_8_;
                local_134 = local_134 + 1;
                puVar22 = puVar22 + 4;
              } while (uVar39 < uVar32);
              iVar26 = uVar27 + uVar32 * -8;
              iVar40 = iVar40 + uVar32 * 0x10000;
              iVar29 = uVar32 * 8 + local_150;
              if (uVar27 != uVar32 * 8) {
                param_1[iVar37 * 4 + iVar29] = iVar40;
                *(ushort *)((int)param_1 + iVar29 * 2 + iVar23) =
                     uVar20 | *(ushort *)((int)param_1 + iVar29 * 2 + iVar23);
                if (iVar26 != 1) {
                  iVar41 = (iVar29 + 1) * 2;
                  param_1[iVar37 * 4 + iVar29 + 1] = iVar40 + 0x2000;
                  *(ushort *)((int)param_1 + iVar41 + iVar23) =
                       uVar20 | *(ushort *)((int)param_1 + iVar41 + iVar23);
                  if (iVar26 != 2) {
                    iVar41 = (iVar29 + 2) * 2;
                    param_1[iVar37 * 4 + iVar29 + 2] = iVar40 + 0x4000;
                    *(ushort *)((int)param_1 + iVar41 + iVar23) =
                         uVar20 | *(ushort *)((int)param_1 + iVar41 + iVar23);
                    if (iVar26 != 3) {
                      iVar41 = (iVar29 + 3) * 2;
                      param_1[iVar37 * 4 + iVar29 + 3] = iVar40 + 0x6000;
                      *(ushort *)((int)param_1 + iVar41 + iVar23) =
                           uVar20 | *(ushort *)((int)param_1 + iVar41 + iVar23);
                      if (iVar26 != 4) {
                        iVar41 = (iVar29 + 4) * 2;
                        param_1[iVar37 * 4 + iVar29 + 4] = iVar40 + 0x8000;
                        *(ushort *)((int)param_1 + iVar41 + iVar23) =
                             uVar20 | *(ushort *)((int)param_1 + iVar41 + iVar23);
                        if (iVar26 != 5) {
                          iVar41 = (iVar29 + 5) * 2;
                          param_1[iVar37 * 4 + iVar29 + 5] = iVar40 + 0xa000;
                          *(ushort *)((int)param_1 + iVar41 + iVar23) =
                               uVar20 | *(ushort *)((int)param_1 + iVar41 + iVar23);
                          if (iVar26 != 6) {
                            iVar26 = (iVar29 + 6) * 2;
                            param_1[iVar37 * 4 + iVar29 + 6] = iVar40 + 0xc000;
                            *(ushort *)((int)param_1 + iVar26 + iVar23) =
                                 uVar20 | *(ushort *)((int)param_1 + iVar26 + iVar23);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar40 = param_1[iVar31 * 0x203d0 + 0x76a];
            local_14c = 0;
            param_1[iVar31 * 0x203d0 + 0x78f] =
                 *(int *)(iVar40 + ((int)((uint)*(ushort *)(param_1 + iVar31 * 0x203d0 + 0x7a8) <<
                                         0x12) >> 0x1f) * -8);
            param_1[iVar31 * 0x203d0 + 0x7b1] =
                 *(int *)(iVar40 + (((int)((uint)*(ushort *)(param_1 + iVar31 * 0x203d0 + 0x7ca) <<
                                          0x12) >> 0x1f) * -2 + 1) * 4);
            param_1[iVar31 * 0x203d0 + 0x7d3] = *(int *)(iVar40 + 8);
            param_1[iVar31 * 0x203d0 + 0x7f5] = *(int *)(iVar40 + 0xc);
            goto LAB_0802058c;
          default:
            goto switchD_08020904_caseD_9;
          }
          break;
        case 5:
          if (uVar45 < 9) {
            uVar27 = 1 << (uVar45 & 0xff);
            if ((uVar27 & 0x19f) != 0) goto switchD_08020904_caseD_0;
            if ((uVar27 & 0x60) != 0) {
              iVar31 = 2;
              local_140 = 0;
              goto LAB_080205e4;
            }
            iVar23 = 0x6000000;
            local_134 = (undefined (*) [16])0xffffff80;
            iVar37 = 0;
            local_150 = 0;
            iVar26 = 0;
            break;
          }
        default:
switchD_0802054c_caseD_7:
          iVar37 = 0;
          iVar23 = 0x6000000;
          local_150 = 0;
          local_134 = (undefined (*) [16])0xffffff80;
          iVar26 = 0;
          break;
        case 6:
          goto switchD_0802054c_caseD_6;
        }
LAB_08020a10:
        local_14c = (local_138 >> 4) << 0xe;
        FUN_0800a1fc(*(undefined4 *)(iVar31 + 0xfba2c),iVar23,local_14c);
LAB_08020a30:
        iVar31 = *param_1;
        FUN_08009808(iVar31,*(int *)(iVar31 + 0xfc814) + iVar26,local_14c,
                     iVar40 - *(int *)(iVar31 + 0xfc810));
LAB_08020a60:
        uVar39 = local_138 >> 4;
        iVar31 = uVar39 * 2;
        piVar24 = (int *)((int)param_1 + local_150 + 0x1958);
        piVar25 = (int *)((int)param_1 + local_150 * 2 + 0x1158);
        uVar27 = (int)param_1 + local_150 + 0x1958;
        uVar32 = (int)param_1 + local_150 * 2 + 0x1158;
        uVar20 = (ushort)(1 << (uVar45 & 0xff));
        if ((uVar39 < 0x10 ||
            (uVar32 < uVar27 + uVar39 && uVar27 < uVar32 + iVar31 ||
            param_1 + local_150 + 0x2e < (int *)((int)piVar24 + uVar39) &&
            piVar24 < param_1 + local_150 + 0x2e + uVar39)) ||
            param_1 + local_150 + 0x2e < (int *)((int)piVar25 + iVar31) &&
            piVar25 < param_1 + local_150 + 0x2e + uVar39) {
          piVar24 = param_1 + local_150 + 0x2d;
          iVar26 = local_150 * 2 + 0x1158;
          iVar23 = 0;
          uVar27 = uVar46;
          do {
            uVar11 = *(ushort *)((int)param_1 + iVar23 + iVar26);
            piVar24 = piVar24 + 1;
            *piVar24 = iVar40 + iVar37;
            *(ushort *)((int)param_1 + iVar23 + iVar26) = uVar20 | uVar11;
            *(char *)((int)param_1 + uVar27 + (local_150 - uVar46) + 0x1958) = (char)uVar27;
            uVar27 = uVar27 + 1;
            iVar23 = iVar23 + 2;
          } while (uVar27 != uVar39 + uVar46);
        }
        else {
          auVar1 = SIMDExpandImmediate(0,0,0x10);
          auVar2 = SIMDExpandImmediate(0,0,4);
          puVar28 = (undefined8 *)((int)param_1 + local_150 + 0x1958);
          auVar3._4_4_ = CONCAT22(uVar20,uVar20);
          auVar3._0_4_ = CONCAT22(uVar20,uVar20);
          auVar3._8_8_ = 0;
          auVar3 = auVar3 & auVar3 << 0x40;
          local_f8 = (undefined (*) [16])((int)param_1 + local_150 * 2 + 0x1158);
          uVar27 = uVar39 & 0xfffffff0;
          auVar56._4_4_ = local_154;
          auVar56._0_4_ = uVar46;
          auVar56._8_4_ = uVar46 + 2;
          auVar56._12_4_ = uVar46 + 3;
          local_e4 = 0;
          puVar22 = (undefined8 *)(param_1 + local_150 + 0x2e);
          pauVar38 = local_f8;
          do {
            auVar62 = VectorAdd(auVar56,auVar2,4);
            auVar61 = VectorAdd(auVar62,auVar2,4);
            local_e4 = local_e4 + 1;
            uVar49 = VectorCopyNarrow(auVar56,4);
            uVar50 = VectorCopyNarrow(auVar62,4);
            auVar62 = VectorAdd(auVar61,auVar2,4);
            auVar63 = *local_f8 | auVar3;
            uVar51 = VectorCopyNarrow(auVar61,4);
            uVar52 = VectorCopyNarrow(auVar62,4);
            auVar56 = VectorAdd(auVar56,auVar1,4);
            auVar61 = local_f8[1] | auVar3;
            auVar12._8_8_ = uVar50;
            auVar12._0_8_ = uVar49;
            uVar49 = VectorCopyNarrow(auVar12,2);
            auVar16._8_8_ = uVar52;
            auVar16._0_8_ = uVar51;
            uVar50 = VectorCopyNarrow(auVar16,2);
            *puVar22 = 0;
            puVar22[1] = 0;
            local_f8 = local_f8 + 2;
            puVar22[2] = 0;
            puVar22[3] = 0;
            puVar22[4] = 0;
            puVar22[5] = 0;
            puVar22[6] = 0;
            puVar22[7] = 0;
            *(longlong *)*pauVar38 = auVar63._0_8_;
            *(longlong *)(*pauVar38 + 8) = auVar63._8_8_;
            *(longlong *)pauVar38[1] = auVar61._0_8_;
            *(longlong *)(pauVar38[1] + 8) = auVar61._8_8_;
            *puVar28 = uVar49;
            puVar28[1] = uVar50;
            puVar28 = puVar28 + 2;
            puVar22 = puVar22 + 8;
            pauVar38 = pauVar38 + 2;
          } while (local_e4 < local_138 >> 8);
          iVar26 = local_150 + uVar27;
          iVar23 = uVar27 + uVar46;
          if (uVar27 != uVar39) {
            iVar48 = iVar23 + (uVar39 - uVar27);
            iVar41 = iVar26 - iVar23;
            piVar24 = param_1 + iVar26 + 0x4000002d;
            iVar29 = 0;
            iVar26 = iVar26 * 2 + 0x1158;
            do {
              uVar11 = *(ushort *)((int)param_1 + iVar29 + iVar26);
              piVar24 = piVar24 + 1;
              *piVar24 = iVar40 + iVar37;
              *(ushort *)((int)param_1 + iVar29 + iVar26) = uVar20 | uVar11;
              *(char *)((int)param_1 + iVar23 + iVar41 + 0x1958) = (char)iVar23;
              iVar23 = iVar23 + 1;
              iVar29 = iVar29 + 2;
            } while (iVar23 != iVar48);
          }
        }
        if (local_134 < 0x80) {
          iVar23 = (local_150 + 0x1808) * 0x4000;
          iVar37 = iVar23 + -0x6000000;
          FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),iVar23,local_14c);
          iVar23 = *param_1;
          FUN_08009808(iVar23,*(int *)(iVar23 + 0xfc814) + iVar37,local_14c,
                       iVar40 - *(int *)(iVar23 + 0xfc810));
          piVar24 = (int *)((int)param_1 + local_150 * 2 + 0x1168);
          uVar27 = (int)param_1 + local_150 * 2 + 0x1168;
          piVar25 = (int *)((int)param_1 + local_150 + 0x1960);
          uVar32 = (int)param_1 + local_150 + 0x1960;
          iVar40 = iVar40 - iVar37;
          if ((uVar39 < 0x10 ||
              (uVar27 < uVar32 + uVar39 && uVar32 < uVar27 + iVar31 ||
              param_1 + local_150 + 0x36 < (int *)((int)piVar25 + uVar39) &&
              piVar25 < param_1 + local_150 + 0x36 + uVar39)) ||
              param_1 + local_150 + 0x36 < (int *)((int)piVar24 + iVar31) &&
              piVar24 < param_1 + local_150 + 0x36 + uVar39) {
            piVar24 = param_1 + local_150 + 0x35;
            iVar31 = (int)param_1 + local_150 + 0x1958;
            iVar23 = (int)param_1 + local_150 * 2 + 0x1158;
            uVar27 = uVar46;
            do {
              uVar11 = *(ushort *)(iVar23 + 0x10);
              piVar24 = piVar24 + 1;
              *piVar24 = iVar40;
              *(ushort *)(iVar23 + 0x10) = uVar20 | uVar11;
              *(char *)(iVar31 + 8) = (char)uVar27;
              uVar27 = uVar27 + 1;
              iVar31 = iVar31 + 1;
              iVar23 = iVar23 + 2;
            } while (uVar27 != uVar39 + uVar46);
          }
          else {
            auVar1 = SIMDExpandImmediate(0,0,0x10);
            uVar32 = local_138 >> 8;
            auVar2 = SIMDExpandImmediate(0,0,4);
            puVar28 = (undefined8 *)((int)param_1 + local_150 + 0x1960);
            auVar9._4_4_ = CONCAT22(uVar20,uVar20);
            auVar9._0_4_ = CONCAT22(uVar20,uVar20);
            auVar9._8_8_ = 0;
            auVar9 = auVar9 & auVar9 << 0x40;
            local_144 = (undefined (*) [16])((int)param_1 + local_150 * 2 + 0x1168);
            auVar59._4_4_ = local_154;
            auVar59._0_4_ = uVar46;
            auVar59._8_4_ = uVar46 + 2;
            auVar59._12_4_ = uVar46 + 3;
            uVar27 = uVar32 * 0x10;
            local_134 = (undefined (*) [16])0x0;
            pauVar38 = local_144;
            puVar22 = (undefined8 *)(param_1 + local_150 + 0x36);
            do {
              auVar62 = VectorAdd(auVar59,auVar2,4);
              auVar61 = VectorAdd(auVar62,auVar2,4);
              local_134 = (undefined (*) [16])((int)local_134 + 1);
              uVar49 = VectorCopyNarrow(auVar59,4);
              uVar50 = VectorCopyNarrow(auVar62,4);
              auVar62 = VectorAdd(auVar61,auVar2,4);
              auVar63 = *local_144 | auVar9;
              uVar51 = VectorCopyNarrow(auVar61,4);
              uVar52 = VectorCopyNarrow(auVar62,4);
              auVar59 = VectorAdd(auVar59,auVar1,4);
              auVar61 = local_144[1] | auVar9;
              auVar13._8_8_ = uVar50;
              auVar13._0_8_ = uVar49;
              uVar49 = VectorCopyNarrow(auVar13,2);
              auVar17._8_8_ = uVar52;
              auVar17._0_8_ = uVar51;
              uVar50 = VectorCopyNarrow(auVar17,2);
              *puVar22 = 0;
              puVar22[1] = 0;
              local_144 = local_144 + 2;
              puVar22[2] = 0;
              puVar22[3] = 0;
              puVar22[4] = 0;
              puVar22[5] = 0;
              puVar22[6] = 0;
              puVar22[7] = 0;
              *(longlong *)*pauVar38 = auVar63._0_8_;
              *(longlong *)(*pauVar38 + 8) = auVar63._8_8_;
              *(longlong *)pauVar38[1] = auVar61._0_8_;
              *(longlong *)(pauVar38[1] + 8) = auVar61._8_8_;
              *puVar28 = uVar49;
              puVar28[1] = uVar50;
              puVar28 = puVar28 + 2;
              pauVar38 = pauVar38 + 2;
              puVar22 = puVar22 + 8;
            } while (local_134 < uVar32);
            iVar31 = local_150 + 8 + uVar27;
            iVar23 = uVar27 + uVar46;
            if (uVar39 != uVar27) {
              iVar29 = iVar23 + uVar39 + uVar32 * -0x10;
              iVar26 = iVar31 - iVar23;
              iVar37 = iVar31 * 2 + 0x1158;
              piVar24 = param_1 + iVar31 + 0x4000002d;
              iVar31 = 0;
              do {
                uVar11 = *(ushort *)((int)param_1 + iVar31 + iVar37);
                piVar24 = piVar24 + 1;
                *piVar24 = iVar40;
                *(ushort *)((int)param_1 + iVar31 + iVar37) = uVar20 | uVar11;
                *(char *)((int)param_1 + iVar23 + iVar26 + 0x1958) = (char)iVar23;
                iVar23 = iVar23 + 1;
                iVar31 = iVar31 + 2;
              } while (iVar23 != iVar29);
            }
          }
          local_14c = 0;
          iVar31 = 6;
        }
        else {
          iVar31 = 6;
          local_14c = 0;
        }
LAB_0802058c:
        piVar44[5] = local_14c;
        piVar44[1] = iVar31;
        piVar44[2] = (uint)bVar10;
        piVar44[3] = local_150;
        piVar44[4] = local_138;
LAB_0802049c:
        uVar30 = uVar30 >> 1;
        uVar45 = uVar45 + 1;
        piVar44 = piVar44 + 5;
        local_154 = local_154 + 8;
        uVar46 = uVar46 + 8;
        piVar43 = piVar43 + 1;
      } while (uVar30 != 0);
    }
  }
  return;
}


