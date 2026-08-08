/*
 * Ghidra decompilation
 *
 * Function : FUN_080233c0
 * Address  : 080233c0
 * Program  : drastic16
 */


void FUN_080233c0(int *param_1)

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
  int *piVar21;
  undefined8 *puVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  undefined8 *puVar27;
  undefined4 uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  undefined8 *puVar35;
  undefined (*pauVar36) [16];
  int iVar37;
  int *__s;
  uint uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int *piVar42;
  int *piVar43;
  int *__s_00;
  int iVar44;
  ushort *puVar45;
  ushort *puVar46;
  ushort *puVar47;
  int *piVar48;
  uint uVar49;
  int *__s_01;
  int iVar50;
  undefined (*pauVar51) [16];
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  uint local_17c;
  int local_178;
  uint local_174;
  int *local_16c;
  int local_164;
  int *local_160;
  uint local_15c;
  uint local_158;
  undefined (*local_154) [16];
  undefined (*local_14c) [16];
  undefined (*local_148) [16];
  uint local_140;
  undefined (*local_13c) [16];
  undefined (*local_128) [16];
  int local_110;
  int local_10c;
  int local_104;
  uint local_e8;
  uint local_4c [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  iVar37 = *param_1;
  __s_01 = param_1 + 0x44a;
  __s_00 = param_1 + 0x456;
  __s = param_1 + 0x44e;
  puVar35 = (undefined8 *)(param_1 + 0x2e);
  local_164 = 0;
  local_16c = param_1;
  local_160 = param_1 + 0x42d;
  do {
    local_16c[1] = 9;
    iVar24 = local_160[1];
    bVar10 = *(byte *)local_160[10];
    if ((uint)bVar10 != local_16c[2]) {
      *(undefined2 *)(param_1 + 0x765) = 0;
      FUN_0801dca8(param_1,iVar24,local_164,(uint)bVar10,1);
      uVar32 = (uint)*(ushort *)(param_1 + 0x765);
      if (uVar32 != 0) {
        local_17c = 0;
        uVar49 = 0;
        local_178 = 1;
        piVar43 = param_1;
        piVar48 = param_1;
        do {
          if ((uVar32 & 1) == 0) goto LAB_0802350c;
          piVar43[2] = -1;
          local_4c[0] = 0x80;
          local_4c[1] = 0x80;
          local_4c[2] = 0x80;
          local_4c[3] = 0x80;
          bVar10 = *(byte *)piVar48[0x437];
          local_3c = 0x40;
          uStack_38 = 0x10;
          uStack_34 = 0x10;
          uStack_30 = 0x20;
          local_2c = 0x10;
          iVar24 = piVar48[0x42e];
          local_158 = local_4c[uVar49];
          iVar33 = *param_1;
          if (-1 < (char)bVar10) {
switchD_080235bc_caseD_6:
            iVar33 = 9;
LAB_08023604:
            iVar44 = 0;
            local_174 = 0;
            goto LAB_08023610;
          }
          uVar29 = (uint)(bVar10 >> 3);
          local_174 = uVar29 & 3;
          switch(bVar10 & 7) {
          case 0:
            switch(uVar49) {
            case 0:
            case 1:
            case 2:
            case 3:
              iVar25 = (uVar49 + 0x340) * 0x20000;
              local_15c = (local_158 >> 4) << 0xe;
              iVar39 = iVar25 + -0x6000000;
              local_174 = local_17c + 0x200;
              FUN_0800a1fc(*(undefined4 *)(iVar33 + 0xfba2c),iVar25,local_15c);
              iVar44 = uVar49 * -0x20000 + -0x800000;
              local_14c = (undefined (*) [16])(local_17c + 0x180);
              if (local_174 < 0x200) goto LAB_08023754;
              goto LAB_08023780;
            case 4:
              iVar44 = -0x880000;
              iVar25 = 0x6880000;
              local_14c = (undefined (*) [16])0x1a0;
              local_174 = 0x220;
              break;
            case 5:
            case 6:
              local_174 = uVar49 + 0x21f;
              local_14c = (undefined (*) [16])(uVar49 + 0x19f);
              iVar25 = (uVar49 + 0x1a1f) * 0x4000;
              iVar44 = uVar49 * -0x4000 + -0x87c000;
              break;
            case 7:
              iVar44 = -0x898000;
              iVar25 = 0x6898000;
              local_14c = (undefined (*) [16])0x1a6;
              local_174 = 0x226;
              break;
            case 8:
              iVar44 = -0x8a0000;
              iVar25 = 0x68a0000;
              local_14c = (undefined (*) [16])0x1a8;
              local_174 = 0x228;
              break;
            default:
switchD_08023630_caseD_9:
              iVar39 = 0;
              iVar25 = 0x6000000;
              local_174 = 0;
              local_14c = (undefined (*) [16])0xffffff80;
              iVar44 = iVar39;
              goto LAB_08023734;
            }
            local_15c = (local_158 >> 4) << 0xe;
            FUN_0800a1fc(*(undefined4 *)(iVar33 + 0xfba2c),iVar25,local_15c);
            goto LAB_08023780;
          case 1:
            switch(uVar49) {
            case 0:
            case 1:
            case 2:
            case 3:
              local_174 = local_174 * 8;
              local_14c = (undefined (*) [16])(local_174 - 0x80);
              iVar25 = (local_174 + 0x1800) * 0x4000;
              iVar39 = iVar25 + -0x6000000;
              iVar44 = -iVar39;
              goto LAB_08023734;
            default:
              goto switchD_080235bc_caseD_7;
            case 5:
            case 6:
              local_174 = (uVar29 & 1) + (uVar29 & 2) * 2;
LAB_080243d4:
              local_154 = (undefined (*) [16])(local_174 + 2);
              iVar44 = 2;
              iVar25 = (local_174 + 0x1800) * 0x4000;
              iVar30 = iVar25 + -0x6000000;
              local_110 = iVar25 + 0x8000;
              iVar39 = -iVar30;
              local_104 = iVar25 + -0x5ff8000;
              local_10c = iVar39 + -0x8000;
              break;
            case 7:
              local_110 = 0x6210000;
              iVar39 = -0x200000;
              local_104 = 0x210000;
              iVar25 = 0x6200000;
              local_10c = -0x210000;
              iVar44 = 4;
              iVar30 = 0x200000;
              local_154 = (undefined (*) [16])0x84;
              local_174 = 0x80;
              break;
            case 8:
              local_10c = -0x218000;
              local_110 = 0x6218000;
              iVar39 = -0x208000;
              local_104 = 0x218000;
              local_154 = (undefined (*) [16])0x86;
              iVar25 = 0x6208000;
              iVar30 = 0x208000;
              iVar44 = 4;
              local_174 = 0x82;
            }
            uVar29 = local_158 >> 4;
            iVar31 = uVar29 << 0xe;
            iVar40 = uVar29 * 2;
            FUN_0800a1fc(*(undefined4 *)(iVar33 + 0xfba2c),iVar25,iVar31);
            iVar33 = *param_1;
            FUN_08009808(iVar33,*(int *)(iVar33 + 0xfc814) + iVar30,iVar31,
                         iVar24 - *(int *)(iVar33 + 0xfc810));
            piVar21 = (int *)((int)param_1 + local_174 * 2 + 0x1158);
            piVar26 = (int *)((int)param_1 + local_174 + 0x1958);
            uVar34 = (int)param_1 + local_174 * 2 + 0x1158;
            uVar38 = (int)param_1 + local_174 + 0x1958;
            uVar20 = (ushort)(1 << (uVar49 & 0xff));
            if ((uVar29 < 0x10 ||
                (piVar21 < param_1 + local_174 + 0x2e + uVar29 &&
                 param_1 + local_174 + 0x2e < (int *)((int)piVar21 + iVar40) ||
                param_1 + local_174 + 0x2e < (int *)((int)piVar26 + uVar29) &&
                piVar26 < param_1 + local_174 + 0x2e + uVar29)) ||
                uVar34 < uVar38 + uVar29 && uVar38 < uVar34 + iVar40) {
              piVar21 = (int *)((int)puVar35 + local_174 * 4 + -4);
              iVar33 = 0;
              uVar34 = local_17c;
              do {
                uVar11 = *(ushort *)((int)__s_00 + iVar33 + local_174 * 2);
                piVar21 = piVar21 + 1;
                *piVar21 = iVar24 + iVar39;
                *(ushort *)((int)__s_00 + iVar33 + local_174 * 2) = uVar20 | uVar11;
                *(char *)((int)param_1 + uVar34 + (local_174 - local_17c) + 0x1958) = (char)uVar34;
                uVar34 = uVar34 + 1;
                iVar33 = iVar33 + 2;
              } while (uVar34 != uVar29 + local_17c);
            }
            else {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              auVar2 = SIMDExpandImmediate(0,0,4);
              auVar4._4_4_ = CONCAT22(uVar20,uVar20);
              auVar4._0_4_ = CONCAT22(uVar20,uVar20);
              auVar4._8_8_ = 0;
              auVar4 = auVar4 & auVar4 << 0x40;
              puVar27 = (undefined8 *)((int)param_1 + local_174 + 0x1958);
              uVar38 = local_158 >> 8;
              pauVar36 = (undefined (*) [16])((int)param_1 + local_174 * 2 + 0x1158);
              uVar34 = uVar38 * 0x10;
              auVar61._4_4_ = local_178;
              auVar61._0_4_ = local_17c;
              auVar61._8_4_ = local_17c + 2;
              auVar61._12_4_ = local_17c + 3;
              local_140 = 0;
              puVar22 = (undefined8 *)(param_1 + local_174 + 0x2e);
              local_13c = pauVar36;
              do {
                auVar65 = VectorAdd(auVar61,auVar2,4);
                auVar66 = VectorAdd(auVar65,auVar2,4);
                local_140 = local_140 + 1;
                uVar52 = VectorCopyNarrow(auVar61,4);
                uVar53 = VectorCopyNarrow(auVar65,4);
                auVar67 = VectorAdd(auVar66,auVar2,4);
                pauVar51 = pauVar36 + 1;
                auVar65 = *pauVar36;
                auVar61 = VectorAdd(auVar61,auVar1,4);
                uVar54 = VectorCopyNarrow(auVar66,4);
                uVar55 = VectorCopyNarrow(auVar67,4);
                pauVar36 = pauVar36 + 2;
                auVar66 = *pauVar51;
                auVar65 = auVar65 | auVar4;
                *puVar22 = 0;
                puVar22[1] = 0;
                auVar66 = auVar66 | auVar4;
                auVar14._8_8_ = uVar53;
                auVar14._0_8_ = uVar52;
                uVar52 = VectorCopyNarrow(auVar14,2);
                auVar18._8_8_ = uVar55;
                auVar18._0_8_ = uVar54;
                uVar53 = VectorCopyNarrow(auVar18,2);
                puVar22[2] = 0;
                puVar22[3] = 0;
                puVar22[4] = 0;
                puVar22[5] = 0;
                puVar22[6] = 0;
                puVar22[7] = 0;
                *(longlong *)*local_13c = auVar65._0_8_;
                *(longlong *)(*local_13c + 8) = auVar65._8_8_;
                *(longlong *)local_13c[1] = auVar66._0_8_;
                *(longlong *)(local_13c[1] + 8) = auVar66._8_8_;
                *puVar27 = uVar52;
                puVar27[1] = uVar53;
                puVar27 = puVar27 + 2;
                puVar22 = puVar22 + 8;
                local_13c = local_13c + 2;
              } while (local_140 < uVar38);
              iVar25 = local_174 + uVar34;
              iVar33 = uVar34 + local_17c;
              if (uVar29 != uVar34) {
                iVar41 = iVar25 - iVar33;
                iVar30 = uVar29 + uVar38 * -0x10 + iVar33;
                piVar21 = (int *)((int)puVar35 + (iVar25 + 0x3fffffff) * 4);
                iVar50 = 0;
                do {
                  uVar11 = *(ushort *)((int)__s_00 + iVar50 + iVar25 * 2);
                  piVar21 = piVar21 + 1;
                  *piVar21 = iVar24 + iVar39;
                  *(ushort *)((int)__s_00 + iVar50 + iVar25 * 2) = uVar20 | uVar11;
                  *(char *)((int)param_1 + iVar33 + iVar41 + 0x1958) = (char)iVar33;
                  iVar33 = iVar33 + 1;
                  iVar50 = iVar50 + 2;
                } while (iVar33 != iVar30);
              }
            }
            FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),local_110,iVar31);
            iVar33 = *param_1;
            FUN_08009808(iVar33,*(int *)(iVar33 + 0xfc814) + local_104,iVar31,
                         iVar24 - *(int *)(iVar33 + 0xfc810));
            piVar21 = (int *)((int)param_1 + (int)local_154 * 2 + 0x1158);
            piVar26 = (int *)((int)param_1 + (int)local_154 + 0x1958);
            uVar38 = (int)param_1 + (int)local_154 * 2 + 0x1158;
            uVar34 = (int)param_1 + (int)local_154 + 0x1958;
            if ((uVar29 < 0x10 ||
                (piVar21 < param_1 + (int)local_154 + 0x2e + uVar29 &&
                 param_1 + (int)local_154 + 0x2e < (int *)((int)piVar21 + iVar40) ||
                param_1 + (int)local_154 + 0x2e < (int *)((int)piVar26 + uVar29) &&
                piVar26 < param_1 + (int)local_154 + 0x2e + uVar29)) ||
                uVar38 < uVar34 + uVar29 && uVar34 < uVar38 + iVar40) {
              piVar21 = (int *)((int)puVar35 + (int)local_154 * 4 + -4);
              iVar33 = 0;
              uVar34 = local_17c;
              do {
                uVar11 = *(ushort *)((int)__s_00 + iVar33 + (int)local_154 * 2);
                piVar21 = piVar21 + 1;
                *piVar21 = iVar24 + local_10c;
                *(ushort *)((int)__s_00 + iVar33 + (int)local_154 * 2) = uVar20 | uVar11;
                *(char *)((int)param_1 + uVar34 + ((int)local_154 - local_17c) + 0x1958) =
                     (char)uVar34;
                uVar34 = uVar34 + 1;
                iVar33 = iVar33 + 2;
              } while (uVar34 != uVar29 + local_17c);
              iVar33 = 8;
            }
            else {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              auVar2 = SIMDExpandImmediate(0,0,4);
              auVar5._4_4_ = CONCAT22(uVar20,uVar20);
              auVar5._0_4_ = CONCAT22(uVar20,uVar20);
              auVar5._8_8_ = 0;
              auVar5 = auVar5 & auVar5 << 0x40;
              puVar27 = (undefined8 *)((int)param_1 + (int)local_154 + 0x1958);
              uVar34 = uVar29 & 0xfffffff0;
              pauVar36 = (undefined (*) [16])((int)param_1 + (int)local_154 * 2 + 0x1158);
              auVar62._4_4_ = local_178;
              auVar62._0_4_ = local_17c;
              auVar62._8_4_ = local_17c + 2;
              auVar62._12_4_ = local_17c + 3;
              local_14c = (undefined (*) [16])0x0;
              puVar22 = (undefined8 *)(param_1 + (int)local_154 + 0x2e);
              local_148 = pauVar36;
              do {
                auVar67 = VectorAdd(auVar62,auVar2,4);
                pauVar51 = pauVar36 + 1;
                auVar66 = VectorAdd(auVar67,auVar2,4);
                auVar65 = *pauVar36;
                uVar52 = VectorCopyNarrow(auVar62,4);
                uVar53 = VectorCopyNarrow(auVar67,4);
                local_14c = (undefined (*) [16])((int)local_14c + 1);
                auVar67 = VectorAdd(auVar66,auVar2,4);
                *puVar22 = 0;
                puVar22[1] = 0;
                auVar65 = auVar65 | auVar5;
                uVar54 = VectorCopyNarrow(auVar66,4);
                uVar55 = VectorCopyNarrow(auVar67,4);
                pauVar36 = pauVar36 + 2;
                auVar66 = *pauVar51 | auVar5;
                puVar22[2] = 0;
                puVar22[3] = 0;
                auVar15._8_8_ = uVar53;
                auVar15._0_8_ = uVar52;
                uVar52 = VectorCopyNarrow(auVar15,2);
                auVar19._8_8_ = uVar55;
                auVar19._0_8_ = uVar54;
                uVar53 = VectorCopyNarrow(auVar19,2);
                puVar22[4] = 0;
                puVar22[5] = 0;
                auVar62 = VectorAdd(auVar62,auVar1,4);
                puVar22[6] = 0;
                puVar22[7] = 0;
                *(longlong *)*local_148 = auVar65._0_8_;
                *(longlong *)(*local_148 + 8) = auVar65._8_8_;
                *(longlong *)local_148[1] = auVar66._0_8_;
                *(longlong *)(local_148[1] + 8) = auVar66._8_8_;
                *puVar27 = uVar52;
                puVar27[1] = uVar53;
                puVar27 = puVar27 + 2;
                puVar22 = puVar22 + 8;
                local_148 = local_148 + 2;
              } while (local_14c < local_158 >> 8);
              iVar33 = (int)local_154 + uVar34;
              iVar25 = uVar34 + local_17c;
              if (uVar29 != uVar34) {
                iVar31 = (uVar29 - uVar34) + iVar25;
                iVar30 = iVar33 - iVar25;
                piVar21 = (int *)((int)puVar35 + (iVar33 + 0x3fffffff) * 4);
                iVar39 = 0;
                do {
                  uVar11 = *(ushort *)((int)__s_00 + iVar39 + iVar33 * 2);
                  piVar21 = piVar21 + 1;
                  *piVar21 = iVar24 + local_10c;
                  *(ushort *)((int)__s_00 + iVar39 + iVar33 * 2) = uVar20 | uVar11;
                  *(char *)((int)param_1 + iVar25 + iVar30 + 0x1958) = (char)iVar25;
                  iVar25 = iVar25 + 1;
                  iVar39 = iVar39 + 2;
                } while (iVar25 != iVar31);
              }
              iVar33 = 8;
            }
            goto LAB_08023610;
          case 2:
            switch(uVar49) {
            case 0:
            case 1:
              local_174 = ((uVar29 & 1) + 0x20) * 8;
              local_14c = (undefined (*) [16])(local_174 - 0x80);
              iVar25 = (local_174 + 0x1800) * 0x4000;
              iVar39 = iVar25 + -0x6000000;
              iVar44 = -iVar39;
              break;
            case 2:
            case 3:
              uVar29 = uVar29 & 1;
              local_174 = uVar29 * 8;
              FUN_0800cb50(*(undefined4 *)(iVar33 + 0xfba30),(local_174 + 0x1800) * 0x4000,
                           local_158 << 10);
              uVar34 = local_158 >> 7;
              uVar20 = (ushort)(1 << (uVar49 & 0xff));
              if (uVar34 < 8 ||
                  param_1 + uVar29 * 4 + 0x760 < param_1 + uVar29 * 8 + 0x454 + uVar34 &&
                  param_1 + uVar29 * 8 + 0x454 <
                  (int *)((int)(param_1 + uVar29 * 4 + 0x760) + uVar34 * 2)) {
                piVar26 = param_1 + local_174 + 0x40000453;
                piVar21 = param_1 + uVar29 * 4 + 0x760;
                do {
                  uVar11 = *(ushort *)piVar21;
                  piVar26 = piVar26 + 1;
                  *piVar26 = iVar24;
                  iVar24 = iVar24 + 0x20000;
                  piVar42 = (int *)((int)piVar21 + 2);
                  *(ushort *)piVar21 = uVar11 | uVar20;
                  piVar21 = piVar42;
                } while (piVar42 != (int *)((int)param_1 + (local_174 + uVar34) * 2 + 0x1d80));
              }
              else {
                pauVar51 = (undefined (*) [16])(param_1 + uVar29 * 4 + 0x760);
                uVar38 = local_158 >> 10;
                auVar9._4_4_ = CONCAT22(uVar20,uVar20);
                auVar9._0_4_ = CONCAT22(uVar20,uVar20);
                auVar9._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,4,0x10);
                auVar2 = SIMDExpandImmediate(0,4,8);
                uVar23 = 0;
                auVar59._4_4_ = iVar24 + 0x20000;
                auVar59._0_4_ = iVar24;
                auVar59._8_4_ = iVar24 + 0x40000;
                auVar59._12_4_ = iVar24 + 0x60000;
                puVar22 = (undefined8 *)(param_1 + uVar29 * 8 + 0x454);
                pauVar36 = pauVar51;
                do {
                  auVar65 = *pauVar51;
                  pauVar51 = pauVar51 + 1;
                  auVar66 = VectorAdd(auVar59,auVar2,4);
                  uVar23 = uVar23 + 1;
                  auVar65 = auVar65 | auVar9 & auVar9 << 0x40;
                  *puVar22 = auVar59._0_8_;
                  puVar22[1] = auVar59._8_8_;
                  auVar59 = VectorAdd(auVar59,auVar1,4);
                  puVar22[2] = auVar66._0_8_;
                  puVar22[3] = auVar66._8_8_;
                  *(longlong *)*pauVar36 = auVar65._0_8_;
                  *(longlong *)(*pauVar36 + 8) = auVar65._8_8_;
                  pauVar36 = pauVar36 + 1;
                  puVar22 = puVar22 + 4;
                } while (uVar23 < uVar38);
                iVar24 = iVar24 + uVar38 * 0x100000;
                iVar25 = uVar34 + uVar38 * -8;
                iVar33 = local_174 + uVar38 * 8;
                if (uVar34 != uVar38 * 8) {
                  param_1[iVar33 + 0x454] = iVar24;
                  *(ushort *)(param_1 + uVar38 * 4 + uVar29 * 4 + 0x760) =
                       uVar20 | *(ushort *)(param_1 + uVar38 * 4 + uVar29 * 4 + 0x760);
                  if (iVar25 != 1) {
                    iVar44 = (iVar33 + 1) * 2;
                    param_1[iVar33 + 0x455] = iVar24 + 0x20000;
                    *(ushort *)((int)param_1 + iVar44 + 0x1d80) =
                         uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d80);
                    if (iVar25 != 2) {
                      param_1[iVar33 + 0x456] = iVar24 + 0x40000;
                      *(ushort *)(param_1 + uVar38 * 4 + uVar29 * 4 + 0x761) =
                           uVar20 | *(ushort *)(param_1 + uVar38 * 4 + uVar29 * 4 + 0x761);
                      if (iVar25 != 3) {
                        iVar44 = (iVar33 + 3) * 2;
                        param_1[iVar33 + 0x457] = iVar24 + 0x60000;
                        *(ushort *)((int)param_1 + iVar44 + 0x1d80) =
                             uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d80);
                        if (iVar25 != 4) {
                          param_1[iVar33 + 0x458] = iVar24 + 0x80000;
                          *(ushort *)(param_1 + uVar38 * 4 + uVar29 * 4 + 0x762) =
                               uVar20 | *(ushort *)(param_1 + uVar38 * 4 + uVar29 * 4 + 0x762);
                          if (iVar25 != 5) {
                            iVar44 = (iVar33 + 5) * 2;
                            param_1[iVar33 + 0x459] = iVar24 + 0xa0000;
                            *(ushort *)((int)param_1 + iVar44 + 0x1d80) =
                                 uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d80);
                            if (iVar25 != 6) {
                              param_1[iVar33 + 0x45a] = iVar24 + 0xc0000;
                              *(ushort *)(param_1 + uVar38 * 4 + uVar29 * 4 + 0x763) =
                                   uVar20 | *(ushort *)(param_1 + uVar38 * 4 + uVar29 * 4 + 0x763);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar44 = 0;
              iVar33 = 7;
              goto LAB_08023610;
            case 4:
              iVar39 = 0x400000;
              iVar44 = -0x400000;
              iVar25 = 0x6400000;
              local_14c = (undefined (*) [16])0x80;
              local_174 = 0x100;
              break;
            case 5:
            case 6:
              local_174 = (uVar29 & 1) + 0x100 + (uVar29 & 2) * 2;
              goto LAB_080243d4;
            case 7:
              iVar33 = 1;
              local_174 = 0;
              goto LAB_08024ebc;
            case 8:
              iVar39 = 0x600000;
              iVar44 = -0x600000;
              iVar25 = 0x6600000;
              local_14c = (undefined (*) [16])0x100;
              local_174 = 0x180;
              break;
            default:
              goto switchD_08023630_caseD_9;
            }
            break;
          case 3:
            switch(uVar49) {
            case 0:
            case 1:
            case 2:
            case 3:
              uVar29 = local_158 >> 7;
              uVar34 = param_1[0x9b8c5];
              piVar21 = (int *)((int)param_1 + local_174 * 2 + 0x1d6c);
              uVar20 = (ushort)(1 << (uVar49 & 0xff));
              if (uVar29 < 8 ||
                  piVar21 < param_1 + local_174 + 0x44a + uVar29 &&
                  param_1 + local_174 + 0x44a < (int *)((int)piVar21 + uVar29 * 2)) {
                piVar21 = __s_01 + (local_174 - 1);
                puVar45 = (ushort *)((int)param_1 + local_174 * 2 + 0x1d6c);
                do {
                  uVar11 = *puVar45;
                  piVar21 = piVar21 + 1;
                  *piVar21 = iVar24;
                  iVar24 = iVar24 + 0x20000;
                  puVar46 = puVar45 + 1;
                  *puVar45 = uVar11 | uVar20;
                  puVar45 = puVar46;
                } while (puVar46 != (ushort *)((int)param_1 + (local_174 + uVar29) * 2 + 0x1d6c));
              }
              else {
                auVar8._4_4_ = CONCAT22(uVar20,uVar20);
                auVar8._0_4_ = CONCAT22(uVar20,uVar20);
                auVar8._8_8_ = 0;
                uVar38 = local_158 >> 10;
                pauVar51 = (undefined (*) [16])((int)param_1 + local_174 * 2 + 0x1d6c);
                auVar1 = SIMDExpandImmediate(0,4,0x10);
                auVar2 = SIMDExpandImmediate(0,4,8);
                uVar23 = 0;
                auVar58._4_4_ = iVar24 + 0x20000;
                auVar58._0_4_ = iVar24;
                auVar58._8_4_ = iVar24 + 0x40000;
                auVar58._12_4_ = iVar24 + 0x60000;
                puVar22 = (undefined8 *)(param_1 + local_174 + 0x44a);
                pauVar36 = pauVar51;
                do {
                  auVar65 = *pauVar51;
                  pauVar51 = pauVar51 + 1;
                  auVar66 = VectorAdd(auVar58,auVar2,4);
                  uVar23 = uVar23 + 1;
                  auVar65 = auVar65 | auVar8 & auVar8 << 0x40;
                  *puVar22 = auVar58._0_8_;
                  puVar22[1] = auVar58._8_8_;
                  auVar58 = VectorAdd(auVar58,auVar1,4);
                  puVar22[2] = auVar66._0_8_;
                  puVar22[3] = auVar66._8_8_;
                  *(longlong *)*pauVar36 = auVar65._0_8_;
                  *(longlong *)(*pauVar36 + 8) = auVar65._8_8_;
                  pauVar36 = pauVar36 + 1;
                  puVar22 = puVar22 + 4;
                } while (uVar23 < uVar38);
                iVar24 = iVar24 + uVar38 * 0x100000;
                iVar25 = uVar29 + uVar38 * -8;
                iVar33 = local_174 + uVar38 * 8;
                if (uVar29 != uVar38 * 8) {
                  uVar11 = *(ushort *)((int)param_1 + iVar33 * 2 + 0x1d6c);
                  __s_01[iVar33] = iVar24;
                  *(ushort *)((int)param_1 + iVar33 * 2 + 0x1d6c) = uVar20 | uVar11;
                  if (iVar25 != 1) {
                    iVar44 = (iVar33 + 1) * 2;
                    uVar11 = *(ushort *)((int)param_1 + iVar44 + 0x1d6c);
                    __s_01[iVar33 + 1] = iVar24 + 0x20000;
                    *(ushort *)((int)param_1 + iVar44 + 0x1d6c) = uVar20 | uVar11;
                    if (iVar25 != 2) {
                      iVar44 = (iVar33 + 2) * 2;
                      __s_01[iVar33 + 2] = iVar24 + 0x40000;
                      *(ushort *)((int)param_1 + iVar44 + 0x1d6c) =
                           uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d6c);
                      if (iVar25 != 3) {
                        iVar44 = (iVar33 + 3) * 2;
                        __s_01[iVar33 + 3] = iVar24 + 0x60000;
                        *(ushort *)((int)param_1 + iVar44 + 0x1d6c) =
                             uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d6c);
                        if (iVar25 != 4) {
                          iVar44 = (iVar33 + 4) * 2;
                          __s_01[iVar33 + 4] = iVar24 + 0x80000;
                          *(ushort *)((int)param_1 + iVar44 + 0x1d6c) =
                               uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d6c);
                          if (iVar25 != 5) {
                            iVar44 = (iVar33 + 5) * 2;
                            __s_01[iVar33 + 5] = iVar24 + 0xa0000;
                            *(ushort *)((int)param_1 + iVar44 + 0x1d6c) =
                                 uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d6c);
                            if (iVar25 != 6) {
                              iVar25 = (iVar33 + 6) * 2;
                              __s_01[iVar33 + 6] = iVar24 + 0xc0000;
                              *(ushort *)((int)param_1 + iVar25 + 0x1d6c) =
                                   uVar20 | *(ushort *)((int)param_1 + iVar25 + 0x1d6c);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar44 = 0;
              uVar29 = 0xff << (local_17c & 0xff);
              param_1[0x61202] =
                   param_1[0x61202] | (uVar34 >> (local_17c & 0xff) & 0xff) << (local_174 << 3);
              param_1[0x61204] = uVar29 | param_1[0x61204];
              iVar33 = 4;
              param_1[0x9b8c5] = uVar34 & ~uVar29;
              break;
            case 4:
              local_174 = 0;
              goto LAB_0802447c;
            case 5:
            case 6:
              local_174 = (uVar29 & 1) + (uVar29 & 2) * 2;
LAB_0802447c:
              uVar29 = local_158 >> 4;
              piVar21 = (int *)((int)param_1 + local_174 * 2 + 0x1d74);
              uVar34 = 1 << (uVar49 & 0xff);
              uVar20 = (ushort)uVar34;
              if (uVar29 < 8 ||
                  piVar21 < param_1 + local_174 + 0x44e + uVar29 &&
                  param_1 + local_174 + 0x44e < (int *)((int)piVar21 + uVar29 * 2)) {
                piVar21 = __s + (local_174 - 1);
                puVar45 = (ushort *)((int)param_1 + local_174 * 2 + 0x1d74);
                do {
                  uVar11 = *puVar45;
                  piVar21 = piVar21 + 1;
                  *piVar21 = iVar24;
                  iVar24 = iVar24 + 0x4000;
                  puVar46 = puVar45 + 1;
                  *puVar45 = uVar11 | uVar20;
                  puVar45 = puVar46;
                } while (puVar46 != (ushort *)((int)param_1 + (local_174 + uVar29) * 2 + 0x1d74));
              }
              else {
                auVar1 = SIMDExpandImmediate(0,4,2);
                auVar2 = SIMDExpandImmediate(0,4,1);
                pauVar51 = (undefined (*) [16])((int)param_1 + local_174 * 2 + 0x1d74);
                uVar38 = local_158 >> 7;
                auVar67._4_4_ = CONCAT22(uVar20,uVar20);
                auVar67._0_4_ = CONCAT22(uVar20,uVar20);
                auVar67._8_8_ = 0;
                uVar23 = 0;
                auVar64._4_4_ = iVar24 + 0x4000;
                auVar64._0_4_ = iVar24;
                auVar64._8_4_ = iVar24 + 0x8000;
                auVar64._12_4_ = iVar24 + 0xc000;
                puVar22 = (undefined8 *)(param_1 + local_174 + 0x44e);
                pauVar36 = pauVar51;
                do {
                  auVar65 = *pauVar36;
                  pauVar36 = pauVar36 + 1;
                  auVar66 = VectorAdd(auVar64,auVar2,4);
                  uVar23 = uVar23 + 1;
                  auVar65 = auVar65 | auVar67 & auVar67 << 0x40;
                  *puVar22 = auVar64._0_8_;
                  puVar22[1] = auVar64._8_8_;
                  auVar64 = VectorAdd(auVar64,auVar1,4);
                  puVar22[2] = auVar66._0_8_;
                  puVar22[3] = auVar66._8_8_;
                  *(longlong *)*pauVar51 = auVar65._0_8_;
                  *(longlong *)(*pauVar51 + 8) = auVar65._8_8_;
                  pauVar51 = pauVar51 + 1;
                  puVar22 = puVar22 + 4;
                } while (uVar23 < uVar38);
                iVar24 = iVar24 + uVar38 * 0x20000;
                iVar25 = uVar29 + uVar38 * -8;
                iVar33 = local_174 + uVar38 * 8;
                if (uVar29 != uVar38 * 8) {
                  uVar11 = *(ushort *)((int)param_1 + iVar33 * 2 + 0x1d74);
                  __s[iVar33] = iVar24;
                  *(ushort *)((int)param_1 + iVar33 * 2 + 0x1d74) = uVar20 | uVar11;
                  if (iVar25 != 1) {
                    iVar44 = (iVar33 + 1) * 2;
                    __s[iVar33 + 1] = iVar24 + 0x4000;
                    *(ushort *)((int)param_1 + iVar44 + 0x1d74) =
                         uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d74);
                    if (iVar25 != 2) {
                      iVar44 = (iVar33 + 2) * 2;
                      __s[iVar33 + 2] = iVar24 + 0x8000;
                      *(ushort *)((int)param_1 + iVar44 + 0x1d74) =
                           uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d74);
                      if (iVar25 != 3) {
                        iVar44 = (iVar33 + 3) * 2;
                        __s[iVar33 + 3] = iVar24 + 0xc000;
                        *(ushort *)((int)param_1 + iVar44 + 0x1d74) =
                             uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d74);
                        if (iVar25 != 4) {
                          iVar44 = (iVar33 + 4) * 2;
                          __s[iVar33 + 4] = iVar24 + 0x10000;
                          *(ushort *)((int)param_1 + iVar44 + 0x1d74) =
                               uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d74);
                          if (iVar25 != 5) {
                            iVar44 = (iVar33 + 5) * 2;
                            __s[iVar33 + 5] = iVar24 + 0x14000;
                            *(ushort *)((int)param_1 + iVar44 + 0x1d74) =
                                 uVar20 | *(ushort *)((int)param_1 + iVar44 + 0x1d74);
                            if (iVar25 != 6) {
                              iVar25 = (iVar33 + 6) * 2;
                              __s[iVar33 + 6] = iVar24 + 0x18000;
                              *(ushort *)((int)param_1 + iVar25 + 0x1d74) =
                                   uVar20 | *(ushort *)((int)param_1 + iVar25 + 0x1d74);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (uVar49 == 4) {
                param_1[0x61203] = param_1[0x9b8c6] & 0xfU | param_1[0x61203];
                param_1[0x9b8c6] = param_1[0x9b8c6] & 0xffffff00;
                iVar44 = 0;
                param_1[0x61206] = 0xf;
                iVar33 = 5;
              }
              else {
                iVar33 = 5;
                param_1[0x61203] =
                     param_1[0x61203] |
                     ((uint)param_1[0x9b8c6] >> (local_17c - 0x20 & 0xff) & 1) << (local_174 << 3);
                param_1[0x9b8c6] = param_1[0x9b8c6] & ~(0xff << (local_17c - 0x20 & 0xff));
                iVar44 = 0;
                param_1[0x61206] = uVar34 | param_1[0x61206];
              }
              break;
            case 7:
switchD_08023630_caseD_0:
              iVar33 = 10;
              goto LAB_08023604;
            case 8:
              iVar33 = 3;
              local_174 = 1;
LAB_08024bc8:
              iVar25 = local_174;
              uVar29 = local_158 >> 4;
              piVar21 = (int *)((int)param_1 + local_174 * 2 + 0x1d68);
              iVar44 = local_174 + 0x448;
              puVar45 = (ushort *)((int)param_1 + local_174 * 2 + 0x1d68);
              uVar20 = (ushort)(1 << (uVar49 & 0xff));
              if (uVar29 < 8 ||
                  piVar21 < param_1 + local_174 + 0x448 + uVar29 &&
                  param_1 + local_174 + 0x448 < (int *)((int)piVar21 + uVar29 * 2)) {
                piVar21 = param_1 + local_174 + 0x447;
                puVar46 = puVar45;
                do {
                  uVar11 = *puVar46;
                  piVar21 = piVar21 + 1;
                  *piVar21 = iVar24;
                  iVar24 = iVar24 + 0x2000;
                  puVar47 = puVar46 + 1;
                  *puVar46 = uVar11 | uVar20;
                  puVar46 = puVar47;
                } while (puVar47 != puVar45 + uVar29);
              }
              else {
                uVar38 = local_158 >> 7;
                pauVar51 = (undefined (*) [16])((int)param_1 + local_174 * 2 + 0x1d68);
                auVar1 = SIMDExpandImmediate(0,4,1);
                auVar2 = SIMDExpandImmediate(0,2,0x80);
                auVar65._4_4_ = CONCAT22(uVar20,uVar20);
                auVar65._0_4_ = CONCAT22(uVar20,uVar20);
                auVar65._8_8_ = 0;
                uVar34 = uVar38 * 8;
                uVar23 = 0;
                auVar66._4_4_ = iVar24 + 0x2000;
                auVar66._0_4_ = iVar24;
                auVar66._8_4_ = iVar24 + 0x4000;
                auVar66._12_4_ = iVar24 + 0x6000;
                puVar22 = (undefined8 *)(param_1 + local_174 + 0x448);
                pauVar36 = pauVar51;
                do {
                  auVar67 = *pauVar51;
                  pauVar51 = pauVar51 + 1;
                  auVar64 = VectorAdd(auVar66,auVar2,4);
                  uVar23 = uVar23 + 1;
                  auVar67 = auVar67 | auVar65 & auVar65 << 0x40;
                  *puVar22 = auVar66._0_8_;
                  puVar22[1] = auVar66._8_8_;
                  auVar66 = VectorAdd(auVar66,auVar1,4);
                  puVar22[2] = auVar64._0_8_;
                  puVar22[3] = auVar64._8_8_;
                  *(longlong *)*pauVar36 = auVar67._0_8_;
                  *(longlong *)(*pauVar36 + 8) = auVar67._8_8_;
                  pauVar36 = pauVar36 + 1;
                  puVar22 = puVar22 + 4;
                } while (uVar23 < uVar38);
                iVar24 = iVar24 + uVar38 * 0x10000;
                iVar39 = uVar29 + uVar38 * -8;
                if (uVar29 != uVar34) {
                  iVar30 = uVar34 + 1;
                  uVar11 = puVar45[uVar38 * 8];
                  param_1[iVar44 + uVar38 * 8] = iVar24;
                  puVar45[uVar38 * 8] = uVar20 | uVar11;
                  if (iVar39 != 1) {
                    param_1[iVar44 + iVar30] = iVar24 + 0x2000;
                    iVar31 = uVar34 + 2;
                    puVar45[iVar30] = uVar20 | puVar45[iVar30];
                    if (iVar39 != 2) {
                      param_1[iVar44 + iVar31] = iVar24 + 0x4000;
                      iVar30 = uVar34 + 3;
                      puVar45[iVar31] = uVar20 | puVar45[iVar31];
                      if (iVar39 != 3) {
                        param_1[iVar44 + iVar30] = iVar24 + 0x6000;
                        iVar31 = uVar34 + 4;
                        puVar45[iVar30] = uVar20 | puVar45[iVar30];
                        if (iVar39 != 4) {
                          param_1[iVar44 + iVar31] = iVar24 + 0x8000;
                          iVar30 = uVar34 + 5;
                          puVar45[iVar31] = uVar20 | puVar45[iVar31];
                          if (iVar39 != 5) {
                            param_1[iVar44 + iVar30] = iVar24 + 0xa000;
                            iVar31 = uVar34 + 6;
                            puVar45[iVar30] = uVar20 | puVar45[iVar30];
                            if (iVar39 != 6) {
                              param_1[iVar44 + iVar31] = iVar24 + 0xc000;
                              puVar45[iVar31] = uVar20 | puVar45[iVar31];
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar24 = local_174 + 0x448;
              iVar44 = 0;
              local_174 = 0;
              param_1[iVar25 * 0x203d0 + 0x76b] = param_1[iVar24];
              local_158 = local_158 >> 1;
              break;
            default:
              goto switchD_080235bc_caseD_7;
            }
            goto LAB_08023610;
          case 4:
            switch(uVar49) {
            case 0:
            case 1:
            case 7:
            case 8:
              goto switchD_08023630_caseD_0;
            case 2:
              iVar39 = 0x200000;
              iVar44 = -0x200000;
              iVar25 = 0x6200000;
              local_14c = (undefined (*) [16])0x0;
              local_174 = 0x80;
              break;
            case 3:
              iVar39 = 0x600000;
              iVar44 = -0x600000;
              iVar25 = 0x6600000;
              local_14c = (undefined (*) [16])0x100;
              local_174 = 0x180;
              break;
            case 4:
              iVar33 = 0;
              local_174 = 0;
              local_158 = local_158 >> 1;
              goto LAB_08024ebc;
            case 5:
            case 6:
              iVar33 = 0;
              local_174 = (uVar29 & 1) << 1;
LAB_08024ebc:
              iVar25 = local_174 + iVar33 * 4;
              uVar29 = local_158 >> 3;
              puVar22 = (undefined8 *)(param_1 + iVar25 + 0x440);
              local_154 = (undefined (*) [16])((int)param_1 + iVar25 * 2 + 0x1d58);
              iVar44 = iVar33 + 0x110;
              uVar20 = (ushort)(1 << (uVar49 & 0xff));
              iVar25 = iVar33 * 8 + 0x1d58;
              if (uVar29 < 8 ||
                  local_154 < (undefined (*) [16])((int)puVar22 + uVar29 * 4) &&
                  puVar22 < *local_154 + uVar29 * 2) {
                piVar21 = param_1 + iVar44 * 4 + local_174 + 0x3fffffff;
                puVar45 = (ushort *)((int)param_1 + local_174 * 2 + iVar25);
                do {
                  uVar11 = *puVar45;
                  piVar21 = piVar21 + 1;
                  *piVar21 = iVar24;
                  iVar24 = iVar24 + 0x2000;
                  puVar46 = puVar45 + 1;
                  *puVar45 = uVar11 | uVar20;
                  puVar45 = puVar46;
                } while (puVar46 != (ushort *)((int)param_1 + (uVar29 + local_174) * 2 + iVar25));
              }
              else {
                auVar1 = SIMDExpandImmediate(0,4,1);
                auVar2 = SIMDExpandImmediate(0,2,0x80);
                auVar7._4_4_ = CONCAT22(uVar20,uVar20);
                auVar7._0_4_ = CONCAT22(uVar20,uVar20);
                auVar7._8_8_ = 0;
                uVar34 = local_158 >> 6;
                auVar57._4_4_ = iVar24 + 0x2000;
                auVar57._0_4_ = iVar24;
                auVar57._8_4_ = iVar24 + 0x4000;
                auVar57._12_4_ = iVar24 + 0x6000;
                uVar38 = 0;
                local_14c = local_154;
                do {
                  auVar66 = VectorAdd(auVar57,auVar2,4);
                  uVar38 = uVar38 + 1;
                  auVar65 = *local_154;
                  local_154 = local_154 + 1;
                  auVar65 = auVar65 | auVar7 & auVar7 << 0x40;
                  *puVar22 = auVar57._0_8_;
                  puVar22[1] = auVar57._8_8_;
                  auVar57 = VectorAdd(auVar57,auVar1,4);
                  puVar22[2] = auVar66._0_8_;
                  puVar22[3] = auVar66._8_8_;
                  *(longlong *)*local_14c = auVar65._0_8_;
                  *(longlong *)(*local_14c + 8) = auVar65._8_8_;
                  local_14c = local_14c + 1;
                  puVar22 = puVar22 + 4;
                } while (uVar38 < uVar34);
                iVar24 = iVar24 + uVar34 * 0x10000;
                iVar39 = uVar29 + uVar34 * -8;
                iVar30 = uVar34 * 8 + local_174;
                if (uVar29 != uVar34 * 8) {
                  param_1[iVar44 * 4 + iVar30] = iVar24;
                  *(ushort *)((int)param_1 + iVar30 * 2 + iVar25) =
                       uVar20 | *(ushort *)((int)param_1 + iVar30 * 2 + iVar25);
                  if (iVar39 != 1) {
                    iVar31 = (iVar30 + 1) * 2;
                    param_1[iVar44 * 4 + iVar30 + 1] = iVar24 + 0x2000;
                    *(ushort *)((int)param_1 + iVar31 + iVar25) =
                         uVar20 | *(ushort *)((int)param_1 + iVar31 + iVar25);
                    if (iVar39 != 2) {
                      iVar31 = (iVar30 + 2) * 2;
                      param_1[iVar44 * 4 + iVar30 + 2] = iVar24 + 0x4000;
                      *(ushort *)((int)param_1 + iVar31 + iVar25) =
                           uVar20 | *(ushort *)((int)param_1 + iVar31 + iVar25);
                      if (iVar39 != 3) {
                        iVar31 = (iVar30 + 3) * 2;
                        param_1[iVar44 * 4 + iVar30 + 3] = iVar24 + 0x6000;
                        *(ushort *)((int)param_1 + iVar31 + iVar25) =
                             uVar20 | *(ushort *)((int)param_1 + iVar31 + iVar25);
                        if (iVar39 != 4) {
                          iVar31 = (iVar30 + 4) * 2;
                          param_1[iVar44 * 4 + iVar30 + 4] = iVar24 + 0x8000;
                          *(ushort *)((int)param_1 + iVar31 + iVar25) =
                               uVar20 | *(ushort *)((int)param_1 + iVar31 + iVar25);
                          if (iVar39 != 5) {
                            iVar31 = (iVar30 + 5) * 2;
                            param_1[iVar44 * 4 + iVar30 + 5] = iVar24 + 0xa000;
                            *(ushort *)((int)param_1 + iVar31 + iVar25) =
                                 uVar20 | *(ushort *)((int)param_1 + iVar31 + iVar25);
                            if (iVar39 != 6) {
                              iVar39 = (iVar30 + 6) * 2;
                              param_1[iVar44 * 4 + iVar30 + 6] = iVar24 + 0xc000;
                              *(ushort *)((int)param_1 + iVar39 + iVar25) =
                                   uVar20 | *(ushort *)((int)param_1 + iVar39 + iVar25);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar44 = 0;
              iVar24 = param_1[iVar33 * 0x203d0 + 0x76a];
              param_1[iVar33 * 0x203d0 + 0x78f] =
                   *(int *)(iVar24 + ((int)((uint)*(ushort *)(param_1 + iVar33 * 0x203d0 + 0x7a8) <<
                                           0x12) >> 0x1f) * -8);
              param_1[iVar33 * 0x203d0 + 0x7b1] =
                   *(int *)(iVar24 + (((int)((uint)*(ushort *)(param_1 + iVar33 * 0x203d0 + 0x7ca)
                                            << 0x12) >> 0x1f) * -2 + 1) * 4);
              param_1[iVar33 * 0x203d0 + 0x7d3] = *(int *)(iVar24 + 8);
              param_1[iVar33 * 0x203d0 + 0x7f5] = *(int *)(iVar24 + 0xc);
              goto LAB_08023610;
            default:
              goto switchD_08023630_caseD_9;
            }
            break;
          case 5:
            if (uVar49 < 9) {
              uVar29 = 1 << (uVar49 & 0xff);
              if ((uVar29 & 0x19f) != 0) goto switchD_08023630_caseD_0;
              if ((uVar29 & 0x60) != 0) {
                iVar33 = 2;
                local_174 = 0;
                goto LAB_08024bc8;
              }
              iVar25 = 0x6000000;
              local_14c = (undefined (*) [16])0xffffff80;
              iVar39 = 0;
              local_174 = 0;
              iVar44 = 0;
              break;
            }
          default:
switchD_080235bc_caseD_7:
            iVar25 = 0x6000000;
            iVar39 = 0;
            local_174 = 0;
            local_14c = (undefined (*) [16])0xffffff80;
            iVar44 = 0;
            break;
          case 6:
            goto switchD_080235bc_caseD_6;
          }
LAB_08023734:
          local_15c = (local_158 >> 4) << 0xe;
          FUN_0800a1fc(*(undefined4 *)(iVar33 + 0xfba2c),iVar25,local_15c);
LAB_08023754:
          iVar33 = *param_1;
          FUN_08009808(iVar33,*(int *)(iVar33 + 0xfc814) + iVar39,local_15c,
                       iVar24 - *(int *)(iVar33 + 0xfc810));
LAB_08023780:
          uVar38 = local_158 >> 4;
          iVar33 = local_174 * 2;
          iVar25 = uVar38 * 2;
          piVar21 = (int *)((int)param_1 + local_174 * 2 + 0x1158);
          piVar26 = (int *)((int)param_1 + local_174 + 0x1958);
          uVar29 = (int)param_1 + local_174 + 0x1958;
          uVar34 = (int)param_1 + local_174 * 2 + 0x1158;
          uVar20 = (ushort)(1 << (uVar49 & 0xff));
          if ((uVar38 < 0x10 ||
              (uVar34 < uVar29 + uVar38 && uVar29 < uVar34 + iVar25 ||
              param_1 + local_174 + 0x2e < (int *)((int)piVar26 + uVar38) &&
              piVar26 < param_1 + local_174 + 0x2e + uVar38)) ||
              param_1 + local_174 + 0x2e < (int *)((int)piVar21 + iVar25) &&
              piVar21 < param_1 + local_174 + 0x2e + uVar38) {
            piVar21 = (int *)((int)puVar35 + local_174 * 4 + -4);
            iVar39 = 0;
            uVar29 = local_17c;
            do {
              uVar11 = *(ushort *)((int)__s_00 + iVar39 + iVar33);
              piVar21 = piVar21 + 1;
              *piVar21 = iVar24 + iVar44;
              *(ushort *)((int)__s_00 + iVar39 + iVar33) = uVar20 | uVar11;
              *(char *)((int)param_1 + uVar29 + (local_174 - local_17c) + 0x1958) = (char)uVar29;
              uVar29 = uVar29 + 1;
              iVar39 = iVar39 + 2;
            } while (uVar29 != uVar38 + local_17c);
          }
          else {
            auVar1 = SIMDExpandImmediate(0,0,0x10);
            auVar2 = SIMDExpandImmediate(0,0,4);
            auVar3._4_4_ = CONCAT22(uVar20,uVar20);
            auVar3._0_4_ = CONCAT22(uVar20,uVar20);
            auVar3._8_8_ = 0;
            auVar3 = auVar3 & auVar3 << 0x40;
            local_128 = (undefined (*) [16])((int)param_1 + local_174 * 2 + 0x1158);
            puVar27 = (undefined8 *)((int)param_1 + local_174 + 0x1958);
            uVar29 = uVar38 & 0xfffffff0;
            auVar60._4_4_ = local_178;
            auVar60._0_4_ = local_17c;
            auVar60._8_4_ = local_17c + 2;
            auVar60._12_4_ = local_17c + 3;
            local_e8 = 0;
            pauVar36 = local_128;
            puVar22 = (undefined8 *)(param_1 + local_174 + 0x2e);
            do {
              auVar66 = VectorAdd(auVar60,auVar2,4);
              auVar65 = VectorAdd(auVar66,auVar2,4);
              local_e8 = local_e8 + 1;
              uVar52 = VectorCopyNarrow(auVar60,4);
              uVar53 = VectorCopyNarrow(auVar66,4);
              auVar66 = VectorAdd(auVar65,auVar2,4);
              auVar67 = *local_128 | auVar3;
              uVar54 = VectorCopyNarrow(auVar65,4);
              uVar55 = VectorCopyNarrow(auVar66,4);
              auVar60 = VectorAdd(auVar60,auVar1,4);
              auVar65 = local_128[1] | auVar3;
              auVar12._8_8_ = uVar53;
              auVar12._0_8_ = uVar52;
              uVar52 = VectorCopyNarrow(auVar12,2);
              auVar16._8_8_ = uVar55;
              auVar16._0_8_ = uVar54;
              uVar53 = VectorCopyNarrow(auVar16,2);
              *puVar22 = 0;
              puVar22[1] = 0;
              local_128 = local_128 + 2;
              puVar22[2] = 0;
              puVar22[3] = 0;
              puVar22[4] = 0;
              puVar22[5] = 0;
              puVar22[6] = 0;
              puVar22[7] = 0;
              *(longlong *)*pauVar36 = auVar67._0_8_;
              *(longlong *)(*pauVar36 + 8) = auVar67._8_8_;
              *(longlong *)pauVar36[1] = auVar65._0_8_;
              *(longlong *)(pauVar36[1] + 8) = auVar65._8_8_;
              *puVar27 = uVar52;
              puVar27[1] = uVar53;
              puVar27 = puVar27 + 2;
              pauVar36 = pauVar36 + 2;
              puVar22 = puVar22 + 8;
            } while (local_e8 < local_158 >> 8);
            iVar39 = local_174 + uVar29;
            iVar30 = uVar29 + local_17c;
            if (uVar29 != uVar38) {
              iVar40 = iVar39 - iVar30;
              iVar50 = iVar30 + (uVar38 - uVar29);
              piVar21 = (int *)((int)puVar35 + (iVar39 + 0x3fffffff) * 4);
              iVar31 = 0;
              do {
                uVar11 = *(ushort *)((int)__s_00 + iVar31 + iVar39 * 2);
                piVar21 = piVar21 + 1;
                *piVar21 = iVar24 + iVar44;
                *(ushort *)((int)__s_00 + iVar31 + iVar39 * 2) = uVar20 | uVar11;
                *(char *)((int)param_1 + iVar30 + iVar40 + 0x1958) = (char)iVar30;
                iVar30 = iVar30 + 1;
                iVar31 = iVar31 + 2;
              } while (iVar30 != iVar50);
            }
          }
          if (local_14c < 0x80) {
            iVar44 = (local_174 + 0x1808) * 0x4000;
            iVar39 = iVar44 + -0x6000000;
            FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),iVar44,local_15c);
            iVar44 = *param_1;
            FUN_08009808(iVar44,*(int *)(iVar44 + 0xfc814) + iVar39,local_15c,
                         iVar24 - *(int *)(iVar44 + 0xfc810));
            piVar21 = (int *)((int)param_1 + local_174 * 2 + 0x1168);
            uVar34 = (int)param_1 + local_174 * 2 + 0x1168;
            piVar26 = (int *)((int)param_1 + local_174 + 0x1960);
            uVar29 = (int)param_1 + local_174 + 0x1960;
            iVar24 = iVar24 - iVar39;
            if ((uVar38 < 0x10 ||
                (uVar34 < uVar29 + uVar38 && uVar29 < uVar34 + iVar25 ||
                param_1 + local_174 + 0x36 < (int *)((int)piVar26 + uVar38) &&
                piVar26 < param_1 + local_174 + 0x36 + uVar38)) ||
                param_1 + local_174 + 0x36 < (int *)((int)piVar21 + iVar25) &&
                piVar21 < param_1 + local_174 + 0x36 + uVar38) {
              piVar21 = (int *)((int)puVar35 + local_174 * 4 + 0x1c);
              iVar25 = (int)param_1 + local_174 + 0x1958;
              iVar33 = (int)__s_00 + iVar33;
              uVar29 = local_17c;
              do {
                uVar11 = *(ushort *)(iVar33 + 0x10);
                piVar21 = piVar21 + 1;
                *piVar21 = iVar24;
                *(ushort *)(iVar33 + 0x10) = uVar20 | uVar11;
                *(char *)(iVar25 + 8) = (char)uVar29;
                uVar29 = uVar29 + 1;
                iVar25 = iVar25 + 1;
                iVar33 = iVar33 + 2;
              } while (uVar29 != uVar38 + local_17c);
            }
            else {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              auVar2 = SIMDExpandImmediate(0,0,4);
              auVar6._4_4_ = CONCAT22(uVar20,uVar20);
              auVar6._0_4_ = CONCAT22(uVar20,uVar20);
              auVar6._8_8_ = 0;
              auVar6 = auVar6 & auVar6 << 0x40;
              pauVar51 = (undefined (*) [16])((int)param_1 + local_174 * 2 + 0x1168);
              puVar27 = (undefined8 *)((int)param_1 + local_174 + 0x1960);
              uVar29 = uVar38 & 0xfffffff0;
              auVar63._4_4_ = local_178;
              auVar63._0_4_ = local_17c;
              auVar63._8_4_ = local_17c + 2;
              auVar63._12_4_ = local_17c + 3;
              local_15c = 0;
              puVar22 = (undefined8 *)(param_1 + local_174 + 0x36);
              pauVar36 = pauVar51;
              do {
                auVar66 = VectorAdd(auVar63,auVar2,4);
                auVar65 = VectorAdd(auVar66,auVar2,4);
                local_15c = local_15c + 1;
                uVar52 = VectorCopyNarrow(auVar63,4);
                uVar53 = VectorCopyNarrow(auVar66,4);
                auVar66 = VectorAdd(auVar65,auVar2,4);
                auVar67 = *pauVar51 | auVar6;
                uVar54 = VectorCopyNarrow(auVar65,4);
                uVar55 = VectorCopyNarrow(auVar66,4);
                auVar65 = pauVar51[1] | auVar6;
                *puVar22 = 0;
                puVar22[1] = 0;
                auVar63 = VectorAdd(auVar63,auVar1,4);
                auVar13._8_8_ = uVar53;
                auVar13._0_8_ = uVar52;
                uVar52 = VectorCopyNarrow(auVar13,2);
                auVar17._8_8_ = uVar55;
                auVar17._0_8_ = uVar54;
                uVar53 = VectorCopyNarrow(auVar17,2);
                pauVar51 = pauVar51 + 2;
                puVar22[2] = 0;
                puVar22[3] = 0;
                puVar22[4] = 0;
                puVar22[5] = 0;
                puVar22[6] = 0;
                puVar22[7] = 0;
                *(longlong *)*pauVar36 = auVar67._0_8_;
                *(longlong *)(*pauVar36 + 8) = auVar67._8_8_;
                *(longlong *)pauVar36[1] = auVar65._0_8_;
                *(longlong *)(pauVar36[1] + 8) = auVar65._8_8_;
                *puVar27 = uVar52;
                puVar27[1] = uVar53;
                puVar27 = puVar27 + 2;
                puVar22 = puVar22 + 8;
                pauVar36 = pauVar36 + 2;
              } while (local_15c < local_158 >> 8);
              iVar33 = local_174 + 8 + uVar29;
              iVar25 = uVar29 + local_17c;
              if (uVar38 != uVar29) {
                iVar30 = iVar33 - iVar25;
                piVar21 = (int *)((int)puVar35 + (iVar33 + 0x3fffffff) * 4);
                iVar39 = iVar25 + (uVar38 - uVar29);
                iVar44 = 0;
                do {
                  uVar11 = *(ushort *)((int)__s_00 + iVar44 + iVar33 * 2);
                  piVar21 = piVar21 + 1;
                  *piVar21 = iVar24;
                  *(ushort *)((int)__s_00 + iVar44 + iVar33 * 2) = uVar20 | uVar11;
                  *(char *)((int)param_1 + iVar25 + iVar30 + 0x1958) = (char)iVar25;
                  iVar25 = iVar25 + 1;
                  iVar44 = iVar44 + 2;
                } while (iVar25 != iVar39);
              }
            }
          }
          iVar44 = 0;
          iVar33 = 6;
LAB_08023610:
          piVar43[3] = local_174;
          piVar43[1] = iVar33;
          piVar43[2] = (uint)bVar10;
          piVar43[4] = local_158;
          piVar43[5] = iVar44;
LAB_0802350c:
          uVar32 = uVar32 >> 1;
          uVar49 = uVar49 + 1;
          local_178 = local_178 + 8;
          piVar43 = piVar43 + 5;
          local_17c = local_17c + 8;
          piVar48 = piVar48 + 1;
        } while (uVar32 != 0);
      }
    }
    local_164 = local_164 + 1;
    local_16c = local_16c + 5;
    local_160 = local_160 + 1;
    if (local_164 == 9) {
      auVar1 = SIMDExpandImmediate(0,0,4);
      uVar28 = *(undefined4 *)(iVar37 + 0x15034);
      auVar56._8_8_ = 0x300000002;
      auVar56._0_8_ = 0x100000000;
      auVar2._4_4_ = uVar28;
      auVar2._0_4_ = uVar28;
      auVar2._8_8_ = 0;
      do {
        auVar65 = VectorShiftLeft(auVar56,0xe,0x20,0);
        auVar56 = VectorAdd(auVar56,auVar1,4);
        auVar65 = VectorSub(auVar2 & auVar2 << 0x40,auVar65,4);
        *puVar35 = auVar65._0_8_;
        puVar35[1] = auVar65._8_8_;
        puVar35 = puVar35 + 2;
      } while (puVar35 != (undefined8 *)(param_1 + 0x42e));
      memset(__s_00,0,0x800);
      param_1[0x448] = 0;
      *(undefined2 *)(param_1 + 0x75a) = 0;
      param_1[0x440] = 0;
      *(undefined2 *)(param_1 + 0x756) = 0;
      param_1[0x441] = 0;
      *(undefined2 *)((int)param_1 + 0x1d5a) = 0;
      param_1[0x442] = 0;
      *(undefined2 *)(param_1 + 0x757) = 0;
      param_1[0x443] = 0;
      *(undefined2 *)((int)param_1 + 0x1d5e) = 0;
      param_1[0x449] = 0;
      *(undefined2 *)((int)param_1 + 0x1d6a) = 0;
      param_1[0x444] = 0;
      *(undefined2 *)(param_1 + 0x758) = 0;
      param_1[0x445] = 0;
      *(undefined2 *)((int)param_1 + 0x1d62) = 0;
      param_1[0x446] = 0;
      *(undefined2 *)(param_1 + 0x759) = 0;
      param_1[0x447] = 0;
      *(undefined2 *)((int)param_1 + 0x1d66) = 0;
      memset(__s_01,0,0x10);
      *(undefined *)(param_1 + 0x75b) = 0;
      *(undefined *)((int)param_1 + 0x1d6d) = 0;
      iVar37 = iVar37 + 0x6b040;
      *(undefined *)((int)param_1 + 0x1d6e) = 0;
      *(undefined *)((int)param_1 + 0x1d6f) = 0;
      *(undefined *)(param_1 + 0x75c) = 0;
      *(undefined *)((int)param_1 + 0x1d71) = 0;
      *(undefined *)((int)param_1 + 0x1d72) = 0;
      *(undefined *)((int)param_1 + 0x1d73) = 0;
      param_1[0x454] = iVar37;
      param_1[0x455] = iVar37;
      *(undefined2 *)(param_1 + 0x760) = 0;
      *(undefined2 *)((int)param_1 + 0x1d82) = 0;
      memset(__s,0,0x18);
      *(undefined *)(param_1 + 0x75d) = 0;
      *(undefined *)((int)param_1 + 0x1d75) = 0;
      *(undefined *)((int)param_1 + 0x1d76) = 0;
      *(undefined *)((int)param_1 + 0x1d77) = 0;
      *(undefined *)(param_1 + 0x75e) = 0;
      *(undefined *)((int)param_1 + 0x1d79) = 0;
      *(undefined *)((int)param_1 + 0x1d7a) = 0;
      *(undefined *)((int)param_1 + 0x1d7b) = 0;
      *(undefined *)(param_1 + 0x75f) = 0;
      *(undefined *)((int)param_1 + 0x1d7d) = 0;
      *(undefined *)((int)param_1 + 0x1d7e) = 0;
      *(undefined *)((int)param_1 + 0x1d7f) = 0;
      *(undefined2 *)(param_1 + 0x9b8c9) = 0;
      FUN_08033d3c(param_1 + 0x766);
      FUN_08033d3c(param_1 + 0x20b36);
      FUN_08058980(param_1 + 0x60200);
      FUN_080519e0(param_1 + 0x6120c);
      memset(param_1 + 0x40f10,0,0x30000);
      return;
    }
  } while( true );
}


