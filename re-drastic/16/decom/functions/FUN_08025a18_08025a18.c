/*
 * Ghidra decompilation
 *
 * Function : FUN_08025a18
 * Address  : 08025a18
 * Program  : drastic16
 */


void FUN_08025a18(int *param_1,int param_2,undefined4 param_3)

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
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  byte bVar19;
  ushort uVar20;
  ushort uVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  void *__ptr;
  int iVar38;
  undefined8 *puVar39;
  undefined (*pauVar40) [16];
  void *__ptr_00;
  int iVar41;
  int iVar42;
  int *piVar43;
  int *piVar44;
  undefined8 *puVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  undefined (*pauVar50) [16];
  int *piVar51;
  int iVar52;
  ushort *puVar53;
  ushort *puVar54;
  int *piVar55;
  int iVar56;
  int *piVar57;
  uint uVar58;
  int iVar59;
  int iVar60;
  void *pvVar61;
  int *piVar62;
  int *piVar63;
  uint uVar64;
  uint uVar65;
  uint *puVar66;
  uint uVar67;
  ushort *puVar68;
  uint uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar93 [16];
  int local_200;
  uint local_1fc;
  int *local_1f8;
  uint local_1f4;
  undefined (*local_1f0) [16];
  uint local_1ec;
  int *local_1e8;
  uint local_1e4;
  undefined (*local_1e0) [16];
  uint local_1dc;
  int *local_1d8;
  undefined (*local_1d4) [16];
  undefined (*local_1d0) [16];
  undefined (*local_1cc) [16];
  undefined (*local_1c8) [16];
  undefined (*local_1c4) [16];
  uint local_1c0;
  int local_1b0;
  undefined (*local_1a4) [16];
  int local_1a0;
  undefined (*local_19c) [16];
  int local_190;
  uint local_184;
  uint local_17c;
  undefined (*local_174) [16];
  uint local_4c [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  piVar55 = param_1 + 0x766;
  piVar57 = param_1 + 0x20b36;
  FUN_08034174(piVar55);
  FUN_08034174(piVar57,param_2,param_3);
  FUN_08053bac(param_1 + 0x6120c,param_2,param_3);
  puVar66 = (uint *)(param_1 + 0x61203);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 2;
  local_200 = 0;
  local_1f8 = param_1;
  local_1e8 = param_1 + 0x42d;
  do {
    local_1e8 = local_1e8 + 1;
    iVar41 = *local_1e8;
    if (local_1f8[2] != 0) {
      *(undefined2 *)(param_1 + 0x765) = 0;
      FUN_0801dca8(param_1,iVar41,local_200,0,1);
      uVar47 = (uint)*(ushort *)(param_1 + 0x765);
      if (uVar47 != 0) {
        uVar65 = 0;
        uVar64 = 0;
        piVar62 = param_1;
        piVar63 = param_1;
        do {
          if ((uVar47 & 1) == 0) goto LAB_08025b80;
          piVar62[2] = -1;
          local_4c[0] = 0x80;
          local_4c[1] = 0x80;
          local_4c[2] = 0x80;
          local_4c[3] = 0x80;
          bVar19 = *(byte *)piVar63[0x437];
          local_3c = 0x40;
          uStack_38 = 0x10;
          uStack_34 = 0x10;
          uStack_30 = 0x20;
          iVar41 = piVar63[0x42e];
          local_2c = 0x10;
          uVar67 = local_4c[uVar65];
          iVar48 = *param_1;
          local_1e4 = uVar67;
          if (-1 < (char)bVar19) {
switchD_08025c24_caseD_6:
            iVar48 = 9;
LAB_0802610c:
            local_1ec = 0;
            local_1f4 = 0;
            goto LAB_08026120;
          }
          uVar49 = (uint)(bVar19 >> 3);
          local_1f4 = uVar49 & 3;
          switch(bVar19 & 7) {
          case 0:
            switch(uVar65) {
            case 0:
            case 1:
            case 2:
            case 3:
              iVar38 = (uVar65 + 0x340) * 0x20000;
              local_1e0 = (undefined (*) [16])((uVar67 >> 4) << 0xe);
              local_1f4 = uVar64 + 0x200;
              FUN_0800a1fc(*(undefined4 *)(iVar48 + 0xfba2c),iVar38,local_1e0);
              local_1cc = (undefined (*) [16])(uVar64 + 0x180);
              iVar38 = iVar38 + -0x6000000;
              iVar52 = uVar65 * -0x20000 + -0x800000;
              if (local_1f4 < 0x200) goto LAB_08025c8c;
              goto LAB_08025cbc;
            case 4:
              iVar52 = -0x880000;
              iVar38 = 0x6880000;
              local_1cc = (undefined (*) [16])0x1a0;
              local_1f4 = 0x220;
              break;
            case 5:
            case 6:
              local_1f4 = uVar65 + 0x21f;
              local_1cc = (undefined (*) [16])(uVar65 + 0x19f);
              iVar38 = (uVar65 + 0x1a1f) * 0x4000;
              iVar52 = uVar65 * -0x4000 + -0x87c000;
              break;
            case 7:
              iVar52 = -0x898000;
              iVar38 = 0x6898000;
              local_1cc = (undefined (*) [16])0x1a6;
              local_1f4 = 0x226;
              break;
            case 8:
              iVar52 = -0x8a0000;
              iVar38 = 0x68a0000;
              local_1cc = (undefined (*) [16])0x1a8;
              local_1f4 = 0x228;
              break;
            default:
switchD_0802601c_caseD_9:
              iVar52 = 0;
              iVar42 = 0x6000000;
              local_1f4 = 0;
              local_1cc = (undefined (*) [16])0xffffff80;
              iVar38 = iVar52;
              goto LAB_08025c68;
            }
            local_1e0 = (undefined (*) [16])((uVar67 >> 4) << 0xe);
            FUN_0800a1fc(*(undefined4 *)(iVar48 + 0xfba2c),iVar38,local_1e0);
            goto LAB_08025cbc;
          case 1:
            switch(uVar65) {
            case 0:
            case 1:
            case 2:
            case 3:
              local_1f4 = local_1f4 * 8;
              local_1cc = (undefined (*) [16])(local_1f4 - 0x80);
              iVar42 = (local_1f4 + 0x1800) * 0x4000;
              iVar38 = iVar42 + -0x6000000;
              iVar52 = -iVar38;
              goto LAB_08025c68;
            default:
              goto switchD_08025c24_caseD_7;
            case 5:
            case 6:
              local_1f4 = (uVar49 & 1) + (uVar49 & 2) * 2;
LAB_0802918c:
              local_1ec = 2;
              local_1c8 = (undefined (*) [16])(local_1f4 + 2);
              iVar38 = (local_1f4 + 0x1800) * 0x4000;
              iVar52 = iVar38 + -0x6000000;
              local_1a0 = iVar38 + 0x8000;
              iVar42 = -iVar52;
              local_190 = iVar38 + -0x5ff8000;
              local_19c = (undefined (*) [16])(iVar42 + -0x8000);
              break;
            case 7:
              iVar42 = -0x200000;
              iVar38 = 0x6200000;
              local_19c = (undefined (*) [16])0xffdf0000;
              iVar52 = 0x200000;
              local_1a0 = 0x6210000;
              local_190 = 0x210000;
              local_1c8 = (undefined (*) [16])0x84;
              local_1ec = 4;
              local_1f4 = 0x80;
              break;
            case 8:
              local_19c = (undefined (*) [16])0xffde8000;
              local_1a0 = 0x6218000;
              local_190 = 0x218000;
              local_1c8 = (undefined (*) [16])0x86;
              iVar42 = -0x208000;
              iVar38 = 0x6208000;
              iVar52 = 0x208000;
              local_1ec = 4;
              local_1f4 = 0x82;
            }
            uVar49 = uVar67 >> 4;
            iVar46 = uVar49 << 0xe;
            iVar56 = uVar49 * 2;
            FUN_0800a1fc(*(undefined4 *)(iVar48 + 0xfba2c),iVar38,iVar46);
            iVar48 = *param_1;
            FUN_08009808(iVar48,*(int *)(iVar48 + 0xfc814) + iVar52,iVar46,
                         iVar41 - *(int *)(iVar48 + 0xfc810));
            piVar43 = (int *)((int)param_1 + local_1f4 * 2 + 0x1158);
            piVar44 = (int *)((int)param_1 + local_1f4 + 0x1958);
            uVar58 = (int)param_1 + local_1f4 * 2 + 0x1158;
            uVar69 = (int)param_1 + local_1f4 + 0x1958;
            uVar21 = (ushort)(1 << (uVar65 & 0xff));
            if ((uVar49 < 0x10 ||
                (piVar43 < param_1 + local_1f4 + 0x2e + uVar49 &&
                 param_1 + local_1f4 + 0x2e < (int *)((int)piVar43 + iVar56) ||
                param_1 + local_1f4 + 0x2e < (int *)((int)piVar44 + uVar49) &&
                piVar44 < param_1 + local_1f4 + 0x2e + uVar49)) ||
                uVar58 < uVar69 + uVar49 && uVar69 < uVar58 + iVar56) {
              piVar43 = param_1 + local_1f4 + 0x2d;
              iVar38 = local_1f4 * 2 + 0x1158;
              iVar48 = 0;
              uVar58 = uVar64;
              do {
                uVar20 = *(ushort *)((int)param_1 + iVar48 + iVar38);
                piVar43 = piVar43 + 1;
                *piVar43 = iVar41 + iVar42;
                *(ushort *)((int)param_1 + iVar48 + iVar38) = uVar21 | uVar20;
                *(char *)((int)param_1 + uVar58 + (local_1f4 - uVar64) + 0x1958) = (char)uVar58;
                uVar58 = uVar58 + 1;
                iVar48 = iVar48 + 2;
              } while (uVar58 != uVar49 + uVar64);
            }
            else {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              uVar69 = uVar67 >> 8;
              auVar2 = SIMDExpandImmediate(0,0,4);
              puVar45 = (undefined8 *)((int)param_1 + local_1f4 + 0x1958);
              uVar58 = uVar69 * 0x10;
              auVar13._4_4_ = CONCAT22(uVar21,uVar21);
              auVar13._0_4_ = CONCAT22(uVar21,uVar21);
              auVar13._8_8_ = 0;
              auVar13 = auVar13 & auVar13 << 0x40;
              pauVar50 = (undefined (*) [16])((int)param_1 + local_1f4 * 2 + 0x1158);
              auVar87._4_4_ = uVar64 + 1;
              auVar87._0_4_ = uVar64;
              auVar87._8_4_ = uVar64 + 2;
              auVar87._12_4_ = uVar64 + 3;
              local_1c4 = (undefined (*) [16])0x0;
              puVar39 = (undefined8 *)(param_1 + local_1f4 + 0x2e);
              local_1a4 = pauVar50;
              do {
                auVar92 = VectorAdd(auVar87,auVar2,4);
                auVar93 = *pauVar50;
                auVar91 = VectorAdd(auVar92,auVar2,4);
                local_1c4 = (undefined (*) [16])((int)local_1c4 + 1);
                uVar70 = VectorCopyNarrow(auVar87,4);
                uVar71 = VectorCopyNarrow(auVar92,4);
                auVar92 = VectorAdd(auVar91,auVar2,4);
                pauVar40 = pauVar50 + 1;
                *puVar39 = 0;
                puVar39[1] = 0;
                auVar93 = auVar93 | auVar13;
                pauVar50 = pauVar50 + 2;
                uVar72 = VectorCopyNarrow(auVar91,4);
                uVar73 = VectorCopyNarrow(auVar92,4);
                auVar91 = *pauVar40 | auVar13;
                puVar39[2] = 0;
                puVar39[3] = 0;
                auVar26._8_8_ = uVar71;
                auVar26._0_8_ = uVar70;
                uVar70 = VectorCopyNarrow(auVar26,2);
                auVar34._8_8_ = uVar73;
                auVar34._0_8_ = uVar72;
                uVar71 = VectorCopyNarrow(auVar34,2);
                puVar39[4] = 0;
                puVar39[5] = 0;
                auVar87 = VectorAdd(auVar87,auVar1,4);
                puVar39[6] = 0;
                puVar39[7] = 0;
                *(longlong *)*local_1a4 = auVar93._0_8_;
                *(longlong *)(*local_1a4 + 8) = auVar93._8_8_;
                *(longlong *)local_1a4[1] = auVar91._0_8_;
                *(longlong *)(local_1a4[1] + 8) = auVar91._8_8_;
                *puVar45 = uVar70;
                puVar45[1] = uVar71;
                puVar45 = puVar45 + 2;
                puVar39 = puVar39 + 8;
                local_1a4 = local_1a4 + 2;
              } while (local_1c4 < uVar69);
              iVar38 = local_1f4 + uVar58;
              iVar48 = uVar58 + uVar64;
              if (uVar49 != uVar58) {
                iVar60 = uVar49 + uVar69 * -0x10 + iVar48;
                iVar59 = iVar38 - iVar48;
                piVar43 = param_1 + iVar38 + 0x4000002d;
                iVar52 = 0;
                iVar38 = iVar38 * 2 + 0x1158;
                do {
                  uVar20 = *(ushort *)((int)param_1 + iVar52 + iVar38);
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41 + iVar42;
                  *(ushort *)((int)param_1 + iVar52 + iVar38) = uVar21 | uVar20;
                  *(char *)((int)param_1 + iVar48 + iVar59 + 0x1958) = (char)iVar48;
                  iVar48 = iVar48 + 1;
                  iVar52 = iVar52 + 2;
                } while (iVar48 != iVar60);
              }
            }
            FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),local_1a0,iVar46);
            iVar48 = *param_1;
            FUN_08009808(iVar48,*(int *)(iVar48 + 0xfc814) + local_190,iVar46,
                         iVar41 - *(int *)(iVar48 + 0xfc810));
            piVar43 = (int *)((int)param_1 + (int)local_1c8 * 2 + 0x1158);
            piVar44 = (int *)((int)param_1 + (int)local_1c8 + 0x1958);
            uVar58 = (int)param_1 + (int)local_1c8 * 2 + 0x1158;
            uVar69 = (int)param_1 + (int)local_1c8 + 0x1958;
            if ((uVar49 < 0x10 ||
                (piVar43 < param_1 + (int)local_1c8 + 0x2e + uVar49 &&
                 param_1 + (int)local_1c8 + 0x2e < (int *)((int)piVar43 + iVar56) ||
                param_1 + (int)local_1c8 + 0x2e < (int *)((int)piVar44 + uVar49) &&
                piVar44 < param_1 + (int)local_1c8 + 0x2e + uVar49)) ||
                uVar58 < uVar69 + uVar49 && uVar69 < uVar58 + iVar56) {
              piVar43 = param_1 + (int)local_1c8 + 0x2d;
              iVar38 = (int)local_1c8 * 2 + 0x1158;
              iVar48 = 0;
              uVar67 = uVar64;
              do {
                uVar20 = *(ushort *)((int)param_1 + iVar48 + iVar38);
                piVar43 = piVar43 + 1;
                *piVar43 = iVar41 + (int)local_19c;
                *(ushort *)((int)param_1 + iVar48 + iVar38) = uVar21 | uVar20;
                *(char *)((int)param_1 + uVar67 + ((int)local_1c8 - uVar64) + 0x1958) = (char)uVar67
                ;
                uVar67 = uVar67 + 1;
                iVar48 = iVar48 + 2;
              } while (uVar67 != uVar49 + uVar64);
            }
            else {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              auVar2 = SIMDExpandImmediate(0,0,4);
              puVar45 = (undefined8 *)((int)param_1 + (int)local_1c8 + 0x1958);
              auVar14._4_4_ = CONCAT22(uVar21,uVar21);
              auVar14._0_4_ = CONCAT22(uVar21,uVar21);
              auVar14._8_8_ = 0;
              auVar14 = auVar14 & auVar14 << 0x40;
              uVar67 = uVar49 & 0xfffffff0;
              pauVar50 = (undefined (*) [16])((int)param_1 + (int)local_1c8 * 2 + 0x1158);
              auVar88._4_4_ = uVar64 + 1;
              auVar88._0_4_ = uVar64;
              auVar88._8_4_ = uVar64 + 2;
              auVar88._12_4_ = uVar64 + 3;
              local_1d0 = (undefined (*) [16])0x0;
              puVar39 = (undefined8 *)(param_1 + (int)local_1c8 + 0x2e);
              local_1cc = pauVar50;
              do {
                auVar92 = VectorAdd(auVar88,auVar2,4);
                auVar93 = *pauVar50;
                auVar91 = VectorAdd(auVar92,auVar2,4);
                local_1d0 = (undefined (*) [16])((int)local_1d0 + 1);
                uVar70 = VectorCopyNarrow(auVar88,4);
                uVar71 = VectorCopyNarrow(auVar92,4);
                auVar92 = VectorAdd(auVar91,auVar2,4);
                pauVar40 = pauVar50 + 1;
                *puVar39 = 0;
                puVar39[1] = 0;
                auVar93 = auVar93 | auVar14;
                pauVar50 = pauVar50 + 2;
                uVar72 = VectorCopyNarrow(auVar91,4);
                uVar73 = VectorCopyNarrow(auVar92,4);
                auVar91 = *pauVar40 | auVar14;
                puVar39[2] = 0;
                puVar39[3] = 0;
                auVar27._8_8_ = uVar71;
                auVar27._0_8_ = uVar70;
                uVar70 = VectorCopyNarrow(auVar27,2);
                auVar35._8_8_ = uVar73;
                auVar35._0_8_ = uVar72;
                uVar71 = VectorCopyNarrow(auVar35,2);
                puVar39[4] = 0;
                puVar39[5] = 0;
                auVar88 = VectorAdd(auVar88,auVar1,4);
                puVar39[6] = 0;
                puVar39[7] = 0;
                *(longlong *)*local_1cc = auVar93._0_8_;
                *(longlong *)(*local_1cc + 8) = auVar93._8_8_;
                *(longlong *)local_1cc[1] = auVar91._0_8_;
                *(longlong *)(local_1cc[1] + 8) = auVar91._8_8_;
                *puVar45 = uVar70;
                puVar45[1] = uVar71;
                puVar45 = puVar45 + 2;
                puVar39 = puVar39 + 8;
                local_1cc = local_1cc + 2;
              } while (local_1d0 < uVar67 >> 8);
              iVar48 = (int)local_1c8 + uVar67;
              iVar38 = uVar67 + uVar64;
              if (uVar49 != uVar67) {
                iVar56 = (uVar49 - uVar67) + iVar38;
                iVar46 = iVar48 - iVar38;
                iVar42 = iVar48 * 2 + 0x1158;
                iVar52 = 0;
                piVar43 = param_1 + iVar48 + 0x4000002d;
                do {
                  uVar20 = *(ushort *)((int)param_1 + iVar52 + iVar42);
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41 + (int)local_19c;
                  *(ushort *)((int)param_1 + iVar52 + iVar42) = uVar21 | uVar20;
                  *(char *)((int)param_1 + iVar38 + iVar46 + 0x1958) = (char)iVar38;
                  iVar38 = iVar38 + 1;
                  iVar52 = iVar52 + 2;
                } while (iVar38 != iVar56);
              }
            }
            iVar48 = 8;
            break;
          case 2:
            switch(uVar65) {
            case 0:
            case 1:
              local_1f4 = ((uVar49 & 1) + 0x20) * 8;
              local_1cc = (undefined (*) [16])(local_1f4 - 0x80);
              iVar42 = (local_1f4 + 0x1800) * 0x4000;
              iVar38 = iVar42 + -0x6000000;
              iVar52 = -iVar38;
              break;
            case 2:
            case 3:
              uVar49 = uVar49 & 1;
              local_1f4 = uVar49 * 8;
              uVar58 = uVar67 >> 7;
              FUN_0800cb50(*(undefined4 *)(iVar48 + 0xfba30),(local_1f4 + 0x1800) * 0x4000,
                           uVar67 << 10);
              uVar21 = (ushort)(1 << (uVar65 & 0xff));
              if (uVar58 < 8 ||
                  param_1 + uVar49 * 4 + 0x760 < param_1 + uVar49 * 8 + 0x454 + uVar58 &&
                  param_1 + uVar49 * 8 + 0x454 <
                  (int *)((int)(param_1 + uVar49 * 4 + 0x760) + uVar58 * 2)) {
                piVar44 = param_1 + local_1f4 + 0x40000453;
                piVar43 = param_1 + uVar49 * 4 + 0x760;
                do {
                  uVar20 = *(ushort *)piVar43;
                  piVar44 = piVar44 + 1;
                  *piVar44 = iVar41;
                  iVar41 = iVar41 + 0x20000;
                  piVar51 = (int *)((int)piVar43 + 2);
                  *(ushort *)piVar43 = uVar20 | uVar21;
                  piVar43 = piVar51;
                } while (piVar51 != (int *)((int)param_1 + (local_1f4 + uVar58) * 2 + 0x1d80));
              }
              else {
                pauVar40 = (undefined (*) [16])(param_1 + uVar49 * 4 + 0x760);
                auVar1 = SIMDExpandImmediate(0,4,0x10);
                uVar67 = uVar67 >> 10;
                auVar2 = SIMDExpandImmediate(0,4,8);
                auVar17._4_4_ = CONCAT22(uVar21,uVar21);
                auVar17._0_4_ = CONCAT22(uVar21,uVar21);
                auVar17._8_8_ = 0;
                uVar69 = 0;
                auVar81._4_4_ = iVar41 + 0x20000;
                auVar81._0_4_ = iVar41;
                auVar81._8_4_ = iVar41 + 0x40000;
                auVar81._12_4_ = iVar41 + 0x60000;
                puVar39 = (undefined8 *)(param_1 + uVar49 * 8 + 0x454);
                pauVar50 = pauVar40;
                do {
                  auVar93 = *pauVar50;
                  pauVar50 = pauVar50 + 1;
                  auVar91 = VectorAdd(auVar81,auVar2,4);
                  uVar69 = uVar69 + 1;
                  auVar93 = auVar93 | auVar17 & auVar17 << 0x40;
                  *puVar39 = auVar81._0_8_;
                  puVar39[1] = auVar81._8_8_;
                  auVar81 = VectorAdd(auVar81,auVar1,4);
                  puVar39[2] = auVar91._0_8_;
                  puVar39[3] = auVar91._8_8_;
                  *(longlong *)*pauVar40 = auVar93._0_8_;
                  *(longlong *)(*pauVar40 + 8) = auVar93._8_8_;
                  pauVar40 = pauVar40 + 1;
                  puVar39 = puVar39 + 4;
                } while (uVar69 < uVar67);
                iVar38 = uVar58 + uVar67 * -8;
                iVar41 = iVar41 + uVar67 * 0x100000;
                iVar48 = local_1f4 + uVar67 * 8;
                if (uVar58 != uVar67 * 8) {
                  param_1[iVar48 + 0x454] = iVar41;
                  *(ushort *)(param_1 + uVar67 * 4 + uVar49 * 4 + 0x760) =
                       uVar21 | *(ushort *)(param_1 + uVar67 * 4 + uVar49 * 4 + 0x760);
                  if (iVar38 != 1) {
                    iVar42 = (iVar48 + 1) * 2;
                    param_1[iVar48 + 0x455] = iVar41 + 0x20000;
                    *(ushort *)((int)param_1 + iVar42 + 0x1d80) =
                         uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d80);
                    if (iVar38 != 2) {
                      param_1[iVar48 + 0x456] = iVar41 + 0x40000;
                      *(ushort *)(param_1 + uVar67 * 4 + uVar49 * 4 + 0x761) =
                           uVar21 | *(ushort *)(param_1 + uVar67 * 4 + uVar49 * 4 + 0x761);
                      if (iVar38 != 3) {
                        iVar42 = (iVar48 + 3) * 2;
                        param_1[iVar48 + 0x457] = iVar41 + 0x60000;
                        *(ushort *)((int)param_1 + iVar42 + 0x1d80) =
                             uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d80);
                        if (iVar38 != 4) {
                          param_1[iVar48 + 0x458] = iVar41 + 0x80000;
                          *(ushort *)(param_1 + uVar67 * 4 + uVar49 * 4 + 0x762) =
                               uVar21 | *(ushort *)(param_1 + uVar67 * 4 + uVar49 * 4 + 0x762);
                          if (iVar38 != 5) {
                            iVar42 = (iVar48 + 5) * 2;
                            param_1[iVar48 + 0x459] = iVar41 + 0xa0000;
                            *(ushort *)((int)param_1 + iVar42 + 0x1d80) =
                                 uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d80);
                            if (iVar38 != 6) {
                              param_1[iVar48 + 0x45a] = iVar41 + 0xc0000;
                              *(ushort *)(param_1 + uVar67 * 4 + uVar49 * 4 + 0x763) =
                                   uVar21 | *(ushort *)(param_1 + uVar67 * 4 + uVar49 * 4 + 0x763);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar48 = 7;
              local_1ec = 0;
              goto LAB_08026120;
            case 4:
              iVar38 = 0x400000;
              iVar52 = -0x400000;
              iVar42 = 0x6400000;
              local_1cc = (undefined (*) [16])0x80;
              local_1f4 = 0x100;
              break;
            case 5:
            case 6:
              local_1f4 = (uVar49 & 1) + 0x100 + (uVar49 & 2) * 2;
              goto LAB_0802918c;
            case 7:
              local_1f4 = 0;
              iVar48 = 1;
              piVar43 = piVar57;
              goto LAB_080295b8;
            case 8:
switchD_0802601c_caseD_3:
              iVar38 = 0x600000;
              iVar52 = -0x600000;
              iVar42 = 0x6600000;
              local_1cc = (undefined (*) [16])0x100;
              local_1f4 = 0x180;
              break;
            default:
              goto switchD_0802601c_caseD_9;
            }
            goto LAB_08025c68;
          case 3:
            switch(uVar65) {
            case 0:
            case 1:
            case 2:
            case 3:
              uVar49 = uVar67 >> 7;
              piVar43 = (int *)((int)param_1 + local_1f4 * 2 + 0x1d6c);
              uVar58 = param_1[0x9b8c5];
              uVar21 = (ushort)(1 << (uVar65 & 0xff));
              if (uVar49 < 8 ||
                  piVar43 < param_1 + local_1f4 + 0x44a + uVar49 &&
                  param_1 + local_1f4 + 0x44a < (int *)((int)piVar43 + uVar49 * 2)) {
                piVar43 = param_1 + local_1f4 + 0x449;
                puVar68 = (ushort *)((int)param_1 + local_1f4 * 2 + 0x1d6c);
                do {
                  uVar20 = *puVar68;
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41;
                  iVar41 = iVar41 + 0x20000;
                  puVar53 = puVar68 + 1;
                  *puVar68 = uVar20 | uVar21;
                  puVar68 = puVar53;
                } while (puVar53 != (ushort *)((int)param_1 + (local_1f4 + uVar49) * 2 + 0x1d6c));
              }
              else {
                auVar1 = SIMDExpandImmediate(0,4,0x10);
                pauVar40 = (undefined (*) [16])((int)param_1 + local_1f4 * 2 + 0x1d6c);
                auVar2 = SIMDExpandImmediate(0,4,8);
                uVar67 = uVar67 >> 10;
                auVar16._4_4_ = CONCAT22(uVar21,uVar21);
                auVar16._0_4_ = CONCAT22(uVar21,uVar21);
                auVar16._8_8_ = 0;
                uVar69 = 0;
                auVar80._4_4_ = iVar41 + 0x20000;
                auVar80._0_4_ = iVar41;
                auVar80._8_4_ = iVar41 + 0x40000;
                auVar80._12_4_ = iVar41 + 0x60000;
                puVar39 = (undefined8 *)(param_1 + local_1f4 + 0x44a);
                pauVar50 = pauVar40;
                do {
                  auVar93 = *pauVar50;
                  pauVar50 = pauVar50 + 1;
                  auVar91 = VectorAdd(auVar80,auVar2,4);
                  uVar69 = uVar69 + 1;
                  auVar93 = auVar93 | auVar16 & auVar16 << 0x40;
                  *puVar39 = auVar80._0_8_;
                  puVar39[1] = auVar80._8_8_;
                  auVar80 = VectorAdd(auVar80,auVar1,4);
                  puVar39[2] = auVar91._0_8_;
                  puVar39[3] = auVar91._8_8_;
                  *(longlong *)*pauVar40 = auVar93._0_8_;
                  *(longlong *)(*pauVar40 + 8) = auVar93._8_8_;
                  pauVar40 = pauVar40 + 1;
                  puVar39 = puVar39 + 4;
                } while (uVar69 < uVar67);
                iVar48 = uVar49 + uVar67 * -8;
                iVar41 = iVar41 + uVar67 * 0x100000;
                iVar38 = local_1f4 + uVar67 * 8;
                if (uVar49 != uVar67 * 8) {
                  param_1[iVar38 + 0x44a] = iVar41;
                  *(ushort *)((int)param_1 + iVar38 * 2 + 0x1d6c) =
                       uVar21 | *(ushort *)((int)param_1 + iVar38 * 2 + 0x1d6c);
                  if (iVar48 != 1) {
                    iVar42 = (iVar38 + 1) * 2;
                    param_1[iVar38 + 1099] = iVar41 + 0x20000;
                    *(ushort *)((int)param_1 + iVar42 + 0x1d6c) =
                         uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d6c);
                    if (iVar48 != 2) {
                      iVar42 = (iVar38 + 2) * 2;
                      param_1[iVar38 + 0x44c] = iVar41 + 0x40000;
                      *(ushort *)((int)param_1 + iVar42 + 0x1d6c) =
                           uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d6c);
                      if (iVar48 != 3) {
                        iVar42 = (iVar38 + 3) * 2;
                        param_1[iVar38 + 0x44d] = iVar41 + 0x60000;
                        *(ushort *)((int)param_1 + iVar42 + 0x1d6c) =
                             uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d6c);
                        if (iVar48 != 4) {
                          iVar42 = (iVar38 + 4) * 2;
                          param_1[iVar38 + 0x44e] = iVar41 + 0x80000;
                          *(ushort *)((int)param_1 + iVar42 + 0x1d6c) =
                               uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d6c);
                          if (iVar48 != 5) {
                            iVar42 = (iVar38 + 5) * 2;
                            param_1[iVar38 + 0x44f] = iVar41 + 0xa0000;
                            *(ushort *)((int)param_1 + iVar42 + 0x1d6c) =
                                 uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d6c);
                            if (iVar48 != 6) {
                              iVar48 = (iVar38 + 6) * 2;
                              param_1[iVar38 + 0x450] = iVar41 + 0xc0000;
                              *(ushort *)((int)param_1 + iVar48 + 0x1d6c) =
                                   uVar21 | *(ushort *)((int)param_1 + iVar48 + 0x1d6c);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar67 = 0xff << (uVar64 & 0xff);
              param_1[0x61202] =
                   param_1[0x61202] | (uVar58 >> (uVar64 & 0xff) & 0xff) << (local_1f4 << 3);
              local_1ec = 0;
              param_1[0x61204] = uVar67 | param_1[0x61204];
              iVar48 = 4;
              param_1[0x9b8c5] = uVar58 & ~uVar67;
              break;
            case 4:
              local_1f4 = 0;
              goto LAB_08029258;
            case 5:
            case 6:
              local_1f4 = (uVar49 & 1) + (uVar49 & 2) * 2;
LAB_08029258:
              uVar49 = uVar67 >> 4;
              piVar43 = (int *)((int)param_1 + local_1f4 * 2 + 0x1d74);
              uVar58 = 1 << (uVar65 & 0xff);
              uVar21 = (ushort)uVar58;
              if (uVar49 < 8 ||
                  piVar43 < param_1 + local_1f4 + 0x44e + uVar49 &&
                  param_1 + local_1f4 + 0x44e < (int *)((int)piVar43 + uVar49 * 2)) {
                piVar43 = param_1 + local_1f4 + 0x44d;
                puVar68 = (ushort *)((int)param_1 + local_1f4 * 2 + 0x1d74);
                do {
                  uVar20 = *puVar68;
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41;
                  iVar41 = iVar41 + 0x4000;
                  puVar53 = puVar68 + 1;
                  *puVar68 = uVar20 | uVar21;
                  puVar68 = puVar53;
                } while (puVar53 != (ushort *)((int)param_1 + (local_1f4 + uVar49) * 2 + 0x1d74));
              }
              else {
                auVar1 = SIMDExpandImmediate(0,4,2);
                pauVar40 = (undefined (*) [16])((int)param_1 + local_1f4 * 2 + 0x1d74);
                auVar2 = SIMDExpandImmediate(0,4,1);
                uVar67 = uVar67 >> 7;
                auVar92._4_4_ = CONCAT22(uVar21,uVar21);
                auVar92._0_4_ = CONCAT22(uVar21,uVar21);
                auVar92._8_8_ = 0;
                uVar69 = 0;
                auVar90._4_4_ = iVar41 + 0x4000;
                auVar90._0_4_ = iVar41;
                auVar90._8_4_ = iVar41 + 0x8000;
                auVar90._12_4_ = iVar41 + 0xc000;
                puVar39 = (undefined8 *)(param_1 + local_1f4 + 0x44e);
                pauVar50 = pauVar40;
                do {
                  auVar93 = *pauVar40;
                  pauVar40 = pauVar40 + 1;
                  auVar91 = VectorAdd(auVar90,auVar2,4);
                  uVar69 = uVar69 + 1;
                  auVar93 = auVar93 | auVar92 & auVar92 << 0x40;
                  *puVar39 = auVar90._0_8_;
                  puVar39[1] = auVar90._8_8_;
                  auVar90 = VectorAdd(auVar90,auVar1,4);
                  puVar39[2] = auVar91._0_8_;
                  puVar39[3] = auVar91._8_8_;
                  *(longlong *)*pauVar50 = auVar93._0_8_;
                  *(longlong *)(*pauVar50 + 8) = auVar93._8_8_;
                  pauVar50 = pauVar50 + 1;
                  puVar39 = puVar39 + 4;
                } while (uVar69 < uVar67);
                iVar41 = iVar41 + uVar67 * 0x20000;
                iVar38 = uVar49 + uVar67 * -8;
                iVar48 = local_1f4 + uVar67 * 8;
                if (uVar49 != uVar67 * 8) {
                  uVar20 = *(ushort *)((int)param_1 + iVar48 * 2 + 0x1d74);
                  param_1[iVar48 + 0x44e] = iVar41;
                  *(ushort *)((int)param_1 + iVar48 * 2 + 0x1d74) = uVar21 | uVar20;
                  if (iVar38 != 1) {
                    iVar42 = (iVar48 + 1) * 2;
                    param_1[iVar48 + 0x44f] = iVar41 + 0x4000;
                    *(ushort *)((int)param_1 + iVar42 + 0x1d74) =
                         uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d74);
                    if (iVar38 != 2) {
                      iVar42 = (iVar48 + 2) * 2;
                      param_1[iVar48 + 0x450] = iVar41 + 0x8000;
                      *(ushort *)((int)param_1 + iVar42 + 0x1d74) =
                           uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d74);
                      if (iVar38 != 3) {
                        iVar42 = (iVar48 + 3) * 2;
                        param_1[iVar48 + 0x451] = iVar41 + 0xc000;
                        *(ushort *)((int)param_1 + iVar42 + 0x1d74) =
                             uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d74);
                        if (iVar38 != 4) {
                          iVar42 = (iVar48 + 4) * 2;
                          param_1[iVar48 + 0x452] = iVar41 + 0x10000;
                          *(ushort *)((int)param_1 + iVar42 + 0x1d74) =
                               uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d74);
                          if (iVar38 != 5) {
                            iVar42 = (iVar48 + 5) * 2;
                            param_1[iVar48 + 0x453] = iVar41 + 0x14000;
                            *(ushort *)((int)param_1 + iVar42 + 0x1d74) =
                                 uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d74);
                            if (iVar38 != 6) {
                              iVar38 = (iVar48 + 6) * 2;
                              param_1[iVar48 + 0x454] = iVar41 + 0x18000;
                              *(ushort *)((int)param_1 + iVar38 + 0x1d74) =
                                   uVar21 | *(ushort *)((int)param_1 + iVar38 + 0x1d74);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (uVar65 == 4) {
                *puVar66 = param_1[0x9b8c6] & 0xfU | *puVar66;
                param_1[0x9b8c6] = param_1[0x9b8c6] & 0xffffff00;
                local_1ec = 0;
                param_1[0x61206] = 0xf;
                iVar48 = 5;
              }
              else {
                *puVar66 = *puVar66 |
                           ((uint)param_1[0x9b8c6] >> (uVar64 - 0x20 & 0xff) & 1) <<
                           (local_1f4 << 3);
                local_1ec = 0;
                param_1[0x9b8c6] = param_1[0x9b8c6] & ~(0xff << (uVar64 - 0x20 & 0xff));
                iVar48 = 5;
                param_1[0x61206] = uVar58 | param_1[0x61206];
              }
              break;
            case 7:
switchD_0802601c_caseD_0:
              iVar48 = 10;
              goto LAB_0802610c;
            case 8:
              local_1e0 = (undefined (*) [16])0x1;
              iVar48 = 3;
LAB_080268c0:
              local_1e4 = uVar67 >> 1;
              uVar49 = uVar67 >> 4;
              piVar43 = (int *)((int)param_1 + (int)local_1e0 * 2 + 0x1d68);
              iVar38 = (int)local_1e0 + 0x448;
              uVar21 = (ushort)(1 << (uVar65 & 0xff));
              puVar68 = (ushort *)((int)param_1 + (int)local_1e0 * 2 + 0x1d68);
              if (uVar49 < 8 ||
                  piVar43 < param_1 + (int)local_1e0 + 0x448 + uVar49 &&
                  param_1 + (int)local_1e0 + 0x448 < (int *)((int)piVar43 + uVar49 * 2)) {
                piVar43 = param_1 + (int)local_1e0 + 0x447;
                puVar53 = puVar68;
                do {
                  uVar20 = *puVar53;
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41;
                  iVar41 = iVar41 + 0x2000;
                  puVar54 = puVar53 + 1;
                  *puVar53 = uVar20 | uVar21;
                  puVar53 = puVar54;
                } while (puVar54 != puVar68 + uVar49);
              }
              else {
                pauVar40 = (undefined (*) [16])((int)param_1 + (int)local_1e0 * 2 + 0x1d68);
                uVar67 = uVar67 >> 7;
                auVar1 = SIMDExpandImmediate(0,4,1);
                auVar2 = SIMDExpandImmediate(0,2,0x80);
                auVar93._4_4_ = CONCAT22(uVar21,uVar21);
                auVar93._0_4_ = CONCAT22(uVar21,uVar21);
                auVar93._8_8_ = 0;
                uVar58 = uVar67 * 8;
                uVar69 = 0;
                auVar91._4_4_ = iVar41 + 0x2000;
                auVar91._0_4_ = iVar41;
                auVar91._8_4_ = iVar41 + 0x4000;
                auVar91._12_4_ = iVar41 + 0x6000;
                puVar39 = (undefined8 *)(param_1 + (int)local_1e0 + 0x448);
                pauVar50 = pauVar40;
                do {
                  auVar92 = *pauVar40;
                  pauVar40 = pauVar40 + 1;
                  auVar90 = VectorAdd(auVar91,auVar2,4);
                  uVar69 = uVar69 + 1;
                  auVar92 = auVar92 | auVar93 & auVar93 << 0x40;
                  *puVar39 = auVar91._0_8_;
                  puVar39[1] = auVar91._8_8_;
                  auVar91 = VectorAdd(auVar91,auVar1,4);
                  puVar39[2] = auVar90._0_8_;
                  puVar39[3] = auVar90._8_8_;
                  *(longlong *)*pauVar50 = auVar92._0_8_;
                  *(longlong *)(*pauVar50 + 8) = auVar92._8_8_;
                  pauVar50 = pauVar50 + 1;
                  puVar39 = puVar39 + 4;
                } while (uVar69 < uVar67);
                iVar42 = uVar49 + uVar67 * -8;
                iVar41 = iVar41 + uVar67 * 0x10000;
                if (uVar49 != uVar58) {
                  uVar20 = puVar68[uVar67 * 8];
                  param_1[iVar38 + uVar67 * 8] = iVar41;
                  iVar52 = uVar58 + 1;
                  puVar68[uVar67 * 8] = uVar21 | uVar20;
                  if (iVar42 != 1) {
                    param_1[iVar38 + iVar52] = iVar41 + 0x2000;
                    iVar46 = uVar58 + 2;
                    puVar68[iVar52] = uVar21 | puVar68[iVar52];
                    if (iVar42 != 2) {
                      param_1[iVar38 + iVar46] = iVar41 + 0x4000;
                      iVar52 = uVar58 + 3;
                      puVar68[iVar46] = uVar21 | puVar68[iVar46];
                      if (iVar42 != 3) {
                        param_1[iVar38 + iVar52] = iVar41 + 0x6000;
                        iVar46 = uVar58 + 4;
                        puVar68[iVar52] = uVar21 | puVar68[iVar52];
                        if (iVar42 != 4) {
                          param_1[iVar38 + iVar46] = iVar41 + 0x8000;
                          iVar52 = uVar58 + 5;
                          puVar68[iVar46] = uVar21 | puVar68[iVar46];
                          if (iVar42 != 5) {
                            iVar46 = uVar58 + 6;
                            param_1[iVar38 + iVar52] = iVar41 + 0xa000;
                            puVar68[iVar52] = uVar21 | puVar68[iVar52];
                            if (iVar42 != 6) {
                              param_1[iVar38 + iVar46] = iVar41 + 0xc000;
                              puVar68[iVar46] = uVar21 | puVar68[iVar46];
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              local_1ec = 0;
              local_1f4 = 0;
              param_1[(int)local_1e0 * 0x203d0 + 0x76b] = param_1[(int)local_1e0 + 0x448];
              break;
            default:
              goto switchD_08025c24_caseD_7;
            }
            break;
          case 4:
            piVar43 = piVar55;
            switch(uVar65) {
            case 0:
            case 1:
            case 7:
            case 8:
              goto switchD_0802601c_caseD_0;
            case 2:
              iVar38 = 0x200000;
              iVar52 = -0x200000;
              iVar42 = 0x6200000;
              local_1cc = (undefined (*) [16])0x0;
              local_1f4 = 0x80;
              goto LAB_08025c68;
            case 3:
              goto switchD_0802601c_caseD_3;
            case 4:
              iVar48 = 0;
              local_1f4 = 0;
              local_1e4 = uVar67 >> 1;
              break;
            case 5:
            case 6:
              iVar48 = 0;
              local_1f4 = (uVar49 & 1) << 1;
              break;
            default:
              goto switchD_0802601c_caseD_9;
            }
LAB_080295b8:
            iVar38 = local_1f4 + iVar48 * 4;
            uVar67 = local_1e4 >> 3;
            puVar39 = (undefined8 *)(param_1 + iVar38 + 0x440);
            local_1d0 = (undefined (*) [16])((int)param_1 + iVar38 * 2 + 0x1d58);
            uVar21 = (ushort)(1 << (uVar65 & 0xff));
            iVar42 = iVar48 + 0x110;
            iVar38 = iVar48 * 8 + 0x1d58;
            if (uVar67 < 8 ||
                local_1d0 < (undefined (*) [16])((int)puVar39 + uVar67 * 4) &&
                puVar39 < *local_1d0 + uVar67 * 2) {
              piVar44 = param_1 + iVar42 * 4 + local_1f4 + 0x3fffffff;
              puVar68 = (ushort *)((int)param_1 + local_1f4 * 2 + iVar38);
              do {
                uVar20 = *puVar68;
                piVar44 = piVar44 + 1;
                *piVar44 = iVar41;
                iVar41 = iVar41 + 0x2000;
                puVar53 = puVar68 + 1;
                *puVar68 = uVar20 | uVar21;
                puVar68 = puVar53;
              } while (puVar53 != (ushort *)((int)param_1 + (uVar67 + local_1f4) * 2 + iVar38));
            }
            else {
              auVar1 = SIMDExpandImmediate(0,4,1);
              auVar2 = SIMDExpandImmediate(0,2,0x80);
              auVar15._4_4_ = CONCAT22(uVar21,uVar21);
              auVar15._0_4_ = CONCAT22(uVar21,uVar21);
              auVar15._8_8_ = 0;
              uVar58 = 0;
              uVar49 = local_1e4 >> 6;
              auVar79._4_4_ = iVar41 + 0x2000;
              auVar79._0_4_ = iVar41;
              auVar79._8_4_ = iVar41 + 0x4000;
              auVar79._12_4_ = iVar41 + 0x6000;
              local_1c8 = local_1d0;
              do {
                auVar91 = VectorAdd(auVar79,auVar2,4);
                uVar58 = uVar58 + 1;
                auVar93 = *local_1c8;
                local_1c8 = local_1c8 + 1;
                auVar93 = auVar93 | auVar15 & auVar15 << 0x40;
                *puVar39 = auVar79._0_8_;
                puVar39[1] = auVar79._8_8_;
                auVar79 = VectorAdd(auVar79,auVar1,4);
                puVar39[2] = auVar91._0_8_;
                puVar39[3] = auVar91._8_8_;
                *(longlong *)*local_1d0 = auVar93._0_8_;
                *(longlong *)(*local_1d0 + 8) = auVar93._8_8_;
                local_1d0 = local_1d0 + 1;
                puVar39 = puVar39 + 4;
              } while (uVar58 < uVar49);
              iVar46 = uVar67 + uVar49 * -8;
              iVar41 = iVar41 + uVar49 * 0x10000;
              iVar52 = uVar49 * 8 + local_1f4;
              if (uVar67 != uVar49 * 8) {
                param_1[iVar42 * 4 + iVar52] = iVar41;
                *(ushort *)((int)param_1 + iVar52 * 2 + iVar38) =
                     uVar21 | *(ushort *)((int)param_1 + iVar52 * 2 + iVar38);
                if (iVar46 != 1) {
                  iVar56 = (iVar52 + 1) * 2;
                  param_1[iVar42 * 4 + iVar52 + 1] = iVar41 + 0x2000;
                  *(ushort *)((int)param_1 + iVar56 + iVar38) =
                       uVar21 | *(ushort *)((int)param_1 + iVar56 + iVar38);
                  if (iVar46 != 2) {
                    iVar56 = (iVar52 + 2) * 2;
                    param_1[iVar42 * 4 + iVar52 + 2] = iVar41 + 0x4000;
                    *(ushort *)((int)param_1 + iVar56 + iVar38) =
                         uVar21 | *(ushort *)((int)param_1 + iVar56 + iVar38);
                    if (iVar46 != 3) {
                      iVar56 = (iVar52 + 3) * 2;
                      param_1[iVar42 * 4 + iVar52 + 3] = iVar41 + 0x6000;
                      *(ushort *)((int)param_1 + iVar56 + iVar38) =
                           uVar21 | *(ushort *)((int)param_1 + iVar56 + iVar38);
                      if (iVar46 != 4) {
                        iVar56 = (iVar52 + 4) * 2;
                        param_1[iVar42 * 4 + iVar52 + 4] = iVar41 + 0x8000;
                        *(ushort *)((int)param_1 + iVar56 + iVar38) =
                             uVar21 | *(ushort *)((int)param_1 + iVar56 + iVar38);
                        if (iVar46 != 5) {
                          iVar56 = (iVar52 + 5) * 2;
                          param_1[iVar42 * 4 + iVar52 + 5] = iVar41 + 0xa000;
                          *(ushort *)((int)param_1 + iVar56 + iVar38) =
                               uVar21 | *(ushort *)((int)param_1 + iVar56 + iVar38);
                          if (iVar46 != 6) {
                            iVar46 = (iVar52 + 6) * 2;
                            param_1[iVar42 * 4 + iVar52 + 6] = iVar41 + 0xc000;
                            *(ushort *)((int)param_1 + iVar46 + iVar38) =
                                 uVar21 | *(ushort *)((int)param_1 + iVar46 + iVar38);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar41 = piVar43[4];
            local_1ec = 0;
            piVar43[0x29] =
                 *(int *)(iVar41 + ((int)((uint)*(ushort *)(piVar43 + 0x42) << 0x12) >> 0x1f) * -8);
            piVar43[0x4b] =
                 *(int *)(iVar41 + (((int)((uint)*(ushort *)(piVar43 + 100) << 0x12) >> 0x1f) * -2 +
                                   1) * 4);
            piVar43[0x6d] = *(int *)(iVar41 + 8);
            piVar43[0x8f] = *(int *)(iVar41 + 0xc);
            break;
          case 5:
            if (uVar65 < 9) {
              uVar49 = 1 << (uVar65 & 0xff);
              if ((uVar49 & 0x19f) != 0) goto switchD_0802601c_caseD_0;
              if ((uVar49 & 0x60) != 0) {
                iVar48 = 2;
                local_1e0 = (undefined (*) [16])0x0;
                goto LAB_080268c0;
              }
              iVar42 = 0x6000000;
              local_1cc = (undefined (*) [16])0xffffff80;
              iVar52 = 0;
              local_1f4 = 0;
              iVar38 = 0;
              goto LAB_08025c68;
            }
          default:
switchD_08025c24_caseD_7:
            iVar52 = 0;
            iVar42 = 0x6000000;
            local_1f4 = 0;
            local_1cc = (undefined (*) [16])0xffffff80;
            iVar38 = 0;
LAB_08025c68:
            local_1e0 = (undefined (*) [16])((uVar67 >> 4) << 0xe);
            FUN_0800a1fc(*(undefined4 *)(iVar48 + 0xfba2c),iVar42,local_1e0);
LAB_08025c8c:
            iVar48 = *param_1;
            FUN_08009808(iVar48,*(int *)(iVar48 + 0xfc814) + iVar38,local_1e0,
                         iVar41 - *(int *)(iVar48 + 0xfc810));
LAB_08025cbc:
            local_1ec = uVar67 >> 4;
            piVar43 = (int *)((int)param_1 + local_1f4 * 2 + 0x1158);
            iVar48 = local_1ec * 2;
            piVar44 = (int *)((int)param_1 + local_1f4 + 0x1958);
            uVar49 = (int)param_1 + local_1f4 * 2 + 0x1158;
            uVar58 = (int)param_1 + local_1f4 + 0x1958;
            uVar21 = (ushort)(1 << (uVar65 & 0xff));
            if ((local_1ec < 0x10 ||
                (piVar43 < param_1 + local_1f4 + 0x2e + local_1ec &&
                 param_1 + local_1f4 + 0x2e < (int *)((int)piVar43 + iVar48) ||
                param_1 + local_1f4 + 0x2e < (int *)((int)piVar44 + local_1ec) &&
                piVar44 < param_1 + local_1f4 + 0x2e + local_1ec)) ||
                uVar49 < uVar58 + local_1ec && uVar58 < uVar49 + iVar48) {
              piVar43 = param_1 + local_1f4 + 0x2d;
              iVar42 = local_1f4 * 2 + 0x1158;
              iVar38 = 0;
              uVar49 = uVar64;
              do {
                uVar20 = *(ushort *)((int)param_1 + iVar38 + iVar42);
                piVar43 = piVar43 + 1;
                *piVar43 = iVar41 + iVar52;
                *(ushort *)((int)param_1 + iVar38 + iVar42) = uVar21 | uVar20;
                *(char *)((int)param_1 + uVar49 + (local_1f4 - uVar64) + 0x1958) = (char)uVar49;
                uVar49 = uVar49 + 1;
                iVar38 = iVar38 + 2;
              } while (uVar49 != local_1ec + uVar64);
            }
            else {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              auVar2 = SIMDExpandImmediate(0,0,4);
              puVar45 = (undefined8 *)((int)param_1 + local_1f4 + 0x1958);
              uVar49 = local_1ec & 0xfffffff0;
              auVar3._4_4_ = CONCAT22(uVar21,uVar21);
              auVar3._0_4_ = CONCAT22(uVar21,uVar21);
              auVar3._8_8_ = 0;
              auVar3 = auVar3 & auVar3 << 0x40;
              pauVar50 = (undefined (*) [16])((int)param_1 + local_1f4 * 2 + 0x1158);
              auVar82._4_4_ = uVar64 + 1;
              auVar82._0_4_ = uVar64;
              auVar82._8_4_ = uVar64 + 2;
              auVar82._12_4_ = uVar64 + 3;
              local_17c = 0;
              puVar39 = (undefined8 *)(param_1 + local_1f4 + 0x2e);
              local_174 = pauVar50;
              do {
                auVar92 = VectorAdd(auVar82,auVar2,4);
                pauVar40 = pauVar50 + 1;
                auVar91 = VectorAdd(auVar92,auVar2,4);
                auVar93 = *pauVar50;
                uVar70 = VectorCopyNarrow(auVar82,4);
                uVar71 = VectorCopyNarrow(auVar92,4);
                local_17c = local_17c + 1;
                auVar92 = VectorAdd(auVar91,auVar2,4);
                *puVar39 = 0;
                puVar39[1] = 0;
                auVar93 = auVar93 | auVar3;
                uVar72 = VectorCopyNarrow(auVar91,4);
                uVar73 = VectorCopyNarrow(auVar92,4);
                pauVar50 = pauVar50 + 2;
                auVar91 = *pauVar40 | auVar3;
                puVar39[2] = 0;
                puVar39[3] = 0;
                auVar22._8_8_ = uVar71;
                auVar22._0_8_ = uVar70;
                uVar70 = VectorCopyNarrow(auVar22,2);
                auVar30._8_8_ = uVar73;
                auVar30._0_8_ = uVar72;
                uVar71 = VectorCopyNarrow(auVar30,2);
                puVar39[4] = 0;
                puVar39[5] = 0;
                auVar82 = VectorAdd(auVar82,auVar1,4);
                puVar39[6] = 0;
                puVar39[7] = 0;
                *(longlong *)*local_174 = auVar93._0_8_;
                *(longlong *)(*local_174 + 8) = auVar93._8_8_;
                *(longlong *)local_174[1] = auVar91._0_8_;
                *(longlong *)(local_174[1] + 8) = auVar91._8_8_;
                *puVar45 = uVar70;
                puVar45[1] = uVar71;
                puVar45 = puVar45 + 2;
                puVar39 = puVar39 + 8;
                local_174 = local_174 + 2;
              } while (local_17c < uVar67 >> 8);
              iVar42 = local_1f4 + uVar49;
              iVar38 = uVar49 + uVar64;
              if (local_1ec != uVar49) {
                iVar59 = (local_1ec - uVar49) + iVar38;
                iVar56 = iVar42 - iVar38;
                piVar43 = param_1 + iVar42 + 0x4000002d;
                iVar46 = 0;
                iVar42 = iVar42 * 2 + 0x1158;
                do {
                  uVar20 = *(ushort *)((int)param_1 + iVar46 + iVar42);
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41 + iVar52;
                  *(ushort *)((int)param_1 + iVar46 + iVar42) = uVar21 | uVar20;
                  *(char *)((int)param_1 + iVar38 + iVar56 + 0x1958) = (char)iVar38;
                  iVar38 = iVar38 + 1;
                  iVar46 = iVar46 + 2;
                } while (iVar38 != iVar59);
              }
            }
            if (local_1cc < 0x80) {
              iVar38 = (local_1f4 + 0x1808) * 0x4000;
              iVar42 = iVar38 + -0x6000000;
              FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),iVar38,local_1e0);
              iVar38 = *param_1;
              FUN_08009808(iVar38,*(int *)(iVar38 + 0xfc814) + iVar42,local_1e0,
                           iVar41 - *(int *)(iVar38 + 0xfc810));
              piVar43 = (int *)((int)param_1 + local_1f4 * 2 + 0x1168);
              iVar41 = iVar41 - iVar42;
              piVar44 = (int *)((int)param_1 + local_1f4 + 0x1960);
              uVar49 = (int)param_1 + local_1f4 * 2 + 0x1168;
              uVar58 = (int)param_1 + local_1f4 + 0x1960;
              if ((local_1ec < 0x10 ||
                  (piVar43 < param_1 + local_1f4 + 0x36 + local_1ec &&
                   param_1 + local_1f4 + 0x36 < (int *)((int)piVar43 + iVar48) ||
                  param_1 + local_1f4 + 0x36 < (int *)((int)piVar44 + local_1ec) &&
                  piVar44 < param_1 + local_1f4 + 0x36 + local_1ec)) ||
                  uVar49 < uVar58 + local_1ec && uVar58 < uVar49 + iVar48) {
                piVar43 = param_1 + local_1f4 + 0x35;
                iVar48 = (int)param_1 + local_1f4 + 0x1958;
                iVar38 = (int)param_1 + local_1f4 * 2 + 0x1158;
                uVar67 = uVar64;
                do {
                  uVar20 = *(ushort *)(iVar38 + 0x10);
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41;
                  *(ushort *)(iVar38 + 0x10) = uVar21 | uVar20;
                  *(char *)(iVar48 + 8) = (char)uVar67;
                  uVar67 = uVar67 + 1;
                  iVar48 = iVar48 + 1;
                  iVar38 = iVar38 + 2;
                } while (uVar67 != local_1ec + uVar64);
              }
              else {
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                auVar2 = SIMDExpandImmediate(0,0,4);
                pauVar40 = (undefined (*) [16])((int)param_1 + local_1f4 * 2 + 0x1168);
                puVar45 = (undefined8 *)((int)param_1 + local_1f4 + 0x1960);
                auVar18._4_4_ = CONCAT22(uVar21,uVar21);
                auVar18._0_4_ = CONCAT22(uVar21,uVar21);
                auVar18._8_8_ = 0;
                auVar18 = auVar18 & auVar18 << 0x40;
                auVar89._4_4_ = uVar64 + 1;
                auVar89._0_4_ = uVar64;
                auVar89._8_4_ = uVar64 + 2;
                auVar89._12_4_ = uVar64 + 3;
                uVar67 = local_1ec & 0xfffffff0;
                local_1e0 = (undefined (*) [16])0x0;
                puVar39 = (undefined8 *)(param_1 + local_1f4 + 0x36);
                pauVar50 = pauVar40;
                do {
                  auVar91 = VectorAdd(auVar89,auVar2,4);
                  auVar93 = VectorAdd(auVar91,auVar2,4);
                  local_1e0 = (undefined (*) [16])((int)local_1e0 + 1);
                  uVar70 = VectorCopyNarrow(auVar89,4);
                  uVar71 = VectorCopyNarrow(auVar91,4);
                  auVar91 = VectorAdd(auVar93,auVar2,4);
                  auVar92 = *pauVar40 | auVar18;
                  uVar72 = VectorCopyNarrow(auVar93,4);
                  uVar73 = VectorCopyNarrow(auVar91,4);
                  auVar93 = pauVar40[1] | auVar18;
                  *puVar39 = 0;
                  puVar39[1] = 0;
                  auVar89 = VectorAdd(auVar89,auVar1,4);
                  auVar25._8_8_ = uVar71;
                  auVar25._0_8_ = uVar70;
                  uVar70 = VectorCopyNarrow(auVar25,2);
                  auVar33._8_8_ = uVar73;
                  auVar33._0_8_ = uVar72;
                  uVar71 = VectorCopyNarrow(auVar33,2);
                  pauVar40 = pauVar40 + 2;
                  puVar39[2] = 0;
                  puVar39[3] = 0;
                  puVar39[4] = 0;
                  puVar39[5] = 0;
                  puVar39[6] = 0;
                  puVar39[7] = 0;
                  *(longlong *)*pauVar50 = auVar92._0_8_;
                  *(longlong *)(*pauVar50 + 8) = auVar92._8_8_;
                  *(longlong *)pauVar50[1] = auVar93._0_8_;
                  *(longlong *)(pauVar50[1] + 8) = auVar93._8_8_;
                  *puVar45 = uVar70;
                  puVar45[1] = uVar71;
                  puVar45 = puVar45 + 2;
                  puVar39 = puVar39 + 8;
                  pauVar50 = pauVar50 + 2;
                } while (local_1e0 < uVar67 >> 8);
                iVar38 = uVar67 + uVar64;
                iVar48 = local_1f4 + 8 + uVar67;
                if (local_1ec != uVar67) {
                  iVar46 = iVar48 - iVar38;
                  iVar42 = iVar48 * 2 + 0x1158;
                  iVar56 = local_1ec + (uVar67 >> 8) * -0x10 + iVar38;
                  iVar52 = 0;
                  piVar43 = param_1 + iVar48 + 0x4000002d;
                  do {
                    uVar20 = *(ushort *)((int)param_1 + iVar52 + iVar42);
                    piVar43 = piVar43 + 1;
                    *piVar43 = iVar41;
                    *(ushort *)((int)param_1 + iVar52 + iVar42) = uVar21 | uVar20;
                    *(char *)((int)param_1 + iVar38 + iVar46 + 0x1958) = (char)iVar38;
                    iVar38 = iVar38 + 1;
                    iVar52 = iVar52 + 2;
                  } while (iVar38 != iVar56);
                }
              }
              iVar48 = 6;
              local_1ec = 0;
            }
            else {
              iVar48 = 6;
              local_1ec = 0;
            }
            break;
          case 6:
            goto switchD_08025c24_caseD_6;
          }
LAB_08026120:
          piVar62[5] = local_1ec;
          piVar62[1] = iVar48;
          piVar62[2] = (uint)bVar19;
          piVar62[3] = local_1f4;
          piVar62[4] = local_1e4;
LAB_08025b80:
          uVar47 = uVar47 >> 1;
          uVar65 = uVar65 + 1;
          piVar62 = piVar62 + 5;
          uVar64 = uVar64 + 8;
          piVar63 = piVar63 + 1;
        } while (uVar47 != 0);
      }
    }
    local_200 = local_200 + 1;
    local_1f8 = local_1f8 + 5;
  } while (local_200 != 9);
  puVar66 = (uint *)(param_1 + 0x61203);
  local_1f4 = 0;
  local_1e8 = param_1;
  local_1d8 = param_1 + 0x42d;
  do {
    iVar41 = local_1d8[1];
    bVar19 = *(byte *)local_1d8[10];
    if ((uint)bVar19 != local_1e8[2]) {
      *(undefined2 *)(param_1 + 0x765) = 0;
      FUN_0801dca8(param_1,iVar41,local_1f4,(uint)bVar19,1);
      uVar47 = (uint)*(ushort *)(param_1 + 0x765);
      if (uVar47 != 0) {
        uVar65 = 0;
        uVar64 = 0;
        piVar62 = param_1;
        piVar63 = param_1;
        do {
          if ((uVar47 & 1) == 0) goto LAB_080261f8;
          piVar63[2] = -1;
          local_4c[0] = 0x80;
          local_4c[1] = 0x80;
          local_4c[2] = 0x80;
          local_4c[3] = 0x80;
          bVar19 = *(byte *)piVar62[0x437];
          local_3c = 0x40;
          uStack_38 = 0x10;
          uStack_34 = 0x10;
          uStack_30 = 0x20;
          iVar41 = piVar62[0x42e];
          local_2c = 0x10;
          local_1dc = local_4c[uVar65];
          iVar48 = *param_1;
          if (-1 < (char)bVar19) {
switchD_0802629c_caseD_6:
            iVar48 = 9;
LAB_080262e4:
            local_1f0 = (undefined (*) [16])0x0;
            local_1fc = 0;
            goto LAB_080262f8;
          }
          uVar67 = (uint)(bVar19 >> 3);
          local_1fc = uVar67 & 3;
          switch(bVar19 & 7) {
          case 0:
            switch(uVar65) {
            case 0:
            case 1:
            case 2:
            case 3:
              iVar38 = (uVar65 + 0x340) * 0x20000;
              iVar52 = iVar38 + -0x6000000;
              iVar42 = uVar65 * -0x20000 + -0x800000;
              local_1f0 = (undefined (*) [16])((local_1dc >> 4) << 0xe);
              local_1fc = uVar64 + 0x200;
              FUN_0800a1fc(*(undefined4 *)(iVar48 + 0xfba2c),iVar38,local_1f0);
              local_1d4 = (undefined (*) [16])(uVar64 + 0x180);
              if (local_1fc < 0x200) goto LAB_08026438;
              goto LAB_08026468;
            case 4:
              iVar42 = -0x880000;
              iVar38 = 0x6880000;
              local_1d4 = (undefined (*) [16])0x1a0;
              local_1fc = 0x220;
              break;
            case 5:
            case 6:
              local_1fc = uVar65 + 0x21f;
              local_1d4 = (undefined (*) [16])(uVar65 + 0x19f);
              iVar38 = (uVar65 + 0x1a1f) * 0x4000;
              iVar42 = uVar65 * -0x4000 + -0x87c000;
              break;
            case 7:
              iVar42 = -0x898000;
              iVar38 = 0x6898000;
              local_1d4 = (undefined (*) [16])0x1a6;
              local_1fc = 0x226;
              break;
            case 8:
              iVar42 = -0x8a0000;
              iVar38 = 0x68a0000;
              local_1d4 = (undefined (*) [16])0x1a8;
              local_1fc = 0x228;
              break;
            default:
switchD_08026314_caseD_9:
              iVar42 = 0;
              iVar38 = 0x6000000;
              local_1fc = 0;
              local_1d4 = (undefined (*) [16])0xffffff80;
              iVar52 = iVar42;
              goto LAB_08026418;
            }
            local_1f0 = (undefined (*) [16])((local_1dc >> 4) << 0xe);
            FUN_0800a1fc(*(undefined4 *)(iVar48 + 0xfba2c),iVar38,local_1f0);
            goto LAB_08026468;
          case 1:
            switch(uVar65) {
            case 0:
            case 1:
            case 2:
            case 3:
              local_1fc = local_1fc * 8;
              local_1d4 = (undefined (*) [16])(local_1fc - 0x80);
              iVar38 = (local_1fc + 0x1800) * 0x4000;
              iVar52 = iVar38 + -0x6000000;
              iVar42 = -iVar52;
              goto LAB_08026418;
            default:
              goto switchD_0802629c_caseD_7;
            case 5:
            case 6:
              local_1fc = (uVar67 & 1) + (uVar67 & 2) * 2;
LAB_080272fc:
              local_1f0 = (undefined (*) [16])0x2;
              local_1e0 = (undefined (*) [16])(local_1fc + 2);
              iVar38 = (local_1fc + 0x1800) * 0x4000;
              iVar52 = iVar38 + -0x6000000;
              local_1b0 = iVar38 + 0x8000;
              iVar42 = -iVar52;
              local_190 = iVar38 + -0x5ff8000;
              local_19c = (undefined (*) [16])(iVar42 + -0x8000);
              break;
            case 7:
              iVar38 = 0x6200000;
              local_1b0 = 0x6210000;
              iVar42 = -0x200000;
              local_19c = (undefined (*) [16])0xffdf0000;
              iVar52 = 0x200000;
              local_190 = 0x210000;
              local_1e0 = (undefined (*) [16])0x84;
              local_1f0 = (undefined (*) [16])0x4;
              local_1fc = 0x80;
              break;
            case 8:
              local_19c = (undefined (*) [16])0xffde8000;
              local_1b0 = 0x6218000;
              iVar42 = -0x208000;
              local_190 = 0x218000;
              local_1e0 = (undefined (*) [16])0x86;
              iVar38 = 0x6208000;
              iVar52 = 0x208000;
              local_1f0 = (undefined (*) [16])0x4;
              local_1fc = 0x82;
            }
            uVar67 = local_1dc >> 4;
            iVar46 = uVar67 << 0xe;
            iVar56 = uVar67 * 2;
            FUN_0800a1fc(*(undefined4 *)(iVar48 + 0xfba2c),iVar38,iVar46);
            iVar48 = *param_1;
            FUN_08009808(iVar48,*(int *)(iVar48 + 0xfc814) + iVar52,iVar46,
                         iVar41 - *(int *)(iVar48 + 0xfc810));
            piVar44 = (int *)((int)param_1 + local_1fc * 2 + 0x1158);
            piVar43 = (int *)((int)param_1 + local_1fc + 0x1958);
            uVar58 = (int)param_1 + local_1fc * 2 + 0x1158;
            uVar49 = (int)param_1 + local_1fc + 0x1958;
            uVar21 = (ushort)(1 << (uVar65 & 0xff));
            if ((uVar67 < 0x10 ||
                (uVar58 < uVar49 + uVar67 && uVar49 < uVar58 + iVar56 ||
                param_1 + local_1fc + 0x2e < (int *)((int)piVar43 + uVar67) &&
                piVar43 < param_1 + local_1fc + 0x2e + uVar67)) ||
                param_1 + local_1fc + 0x2e < (int *)((int)piVar44 + iVar56) &&
                piVar44 < param_1 + local_1fc + 0x2e + uVar67) {
              iVar38 = local_1fc * 2 + 0x1158;
              piVar43 = param_1 + local_1fc + 0x2d;
              iVar48 = 0;
              uVar49 = uVar64;
              do {
                uVar20 = *(ushort *)((int)param_1 + iVar48 + iVar38);
                piVar43 = piVar43 + 1;
                *piVar43 = iVar41 + iVar42;
                *(ushort *)((int)param_1 + iVar48 + iVar38) = uVar21 | uVar20;
                *(char *)((int)param_1 + uVar49 + (local_1fc - uVar64) + 0x1958) = (char)uVar49;
                uVar49 = uVar49 + 1;
                iVar48 = iVar48 + 2;
              } while (uVar49 != uVar67 + uVar64);
            }
            else {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              auVar2 = SIMDExpandImmediate(0,0,4);
              uVar58 = local_1dc >> 8;
              puVar45 = (undefined8 *)((int)param_1 + local_1fc + 0x1958);
              auVar5._4_4_ = CONCAT22(uVar21,uVar21);
              auVar5._0_4_ = CONCAT22(uVar21,uVar21);
              auVar5._8_8_ = 0;
              auVar5 = auVar5 & auVar5 << 0x40;
              uVar49 = uVar58 * 0x10;
              uVar69 = 0;
              pauVar50 = (undefined (*) [16])((int)param_1 + local_1fc * 2 + 0x1158);
              auVar84._4_4_ = uVar64 + 1;
              auVar84._0_4_ = uVar64;
              auVar84._8_4_ = uVar64 + 2;
              auVar84._12_4_ = uVar64 + 3;
              puVar39 = (undefined8 *)(param_1 + local_1fc + 0x2e);
              local_1c4 = pauVar50;
              do {
                auVar92 = VectorAdd(auVar84,auVar2,4);
                pauVar40 = pauVar50 + 1;
                auVar93 = *pauVar50;
                auVar91 = VectorAdd(auVar92,auVar2,4);
                uVar69 = uVar69 + 1;
                uVar70 = VectorCopyNarrow(auVar84,4);
                uVar71 = VectorCopyNarrow(auVar92,4);
                *puVar39 = 0;
                puVar39[1] = 0;
                auVar92 = VectorAdd(auVar91,auVar2,4);
                auVar93 = auVar93 | auVar5;
                pauVar50 = pauVar50 + 2;
                auVar84 = VectorAdd(auVar84,auVar1,4);
                uVar72 = VectorCopyNarrow(auVar91,4);
                uVar73 = VectorCopyNarrow(auVar92,4);
                auVar91 = *pauVar40 | auVar5;
                puVar39[2] = 0;
                puVar39[3] = 0;
                auVar28._8_8_ = uVar71;
                auVar28._0_8_ = uVar70;
                uVar70 = VectorCopyNarrow(auVar28,2);
                auVar36._8_8_ = uVar73;
                auVar36._0_8_ = uVar72;
                uVar71 = VectorCopyNarrow(auVar36,2);
                puVar39[4] = 0;
                puVar39[5] = 0;
                puVar39[6] = 0;
                puVar39[7] = 0;
                *(longlong *)*local_1c4 = auVar93._0_8_;
                *(longlong *)(*local_1c4 + 8) = auVar93._8_8_;
                *(longlong *)local_1c4[1] = auVar91._0_8_;
                *(longlong *)(local_1c4[1] + 8) = auVar91._8_8_;
                *puVar45 = uVar70;
                puVar45[1] = uVar71;
                puVar45 = puVar45 + 2;
                puVar39 = puVar39 + 8;
                local_1c4 = local_1c4 + 2;
              } while (uVar69 < uVar58);
              iVar38 = local_1fc + uVar49;
              iVar48 = uVar49 + uVar64;
              if (uVar67 != uVar49) {
                iVar60 = iVar38 - iVar48;
                piVar43 = param_1 + iVar38 + 0x4000002d;
                iVar38 = iVar38 * 2 + 0x1158;
                iVar59 = iVar48 + uVar67 + uVar58 * -0x10;
                iVar52 = 0;
                do {
                  uVar20 = *(ushort *)((int)param_1 + iVar52 + iVar38);
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41 + iVar42;
                  *(ushort *)((int)param_1 + iVar52 + iVar38) = uVar21 | uVar20;
                  *(char *)((int)param_1 + iVar48 + iVar60 + 0x1958) = (char)iVar48;
                  iVar48 = iVar48 + 1;
                  iVar52 = iVar52 + 2;
                } while (iVar48 != iVar59);
              }
            }
            FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),local_1b0,iVar46);
            iVar48 = *param_1;
            FUN_08009808(iVar48,*(int *)(iVar48 + 0xfc814) + local_190,iVar46,
                         iVar41 - *(int *)(iVar48 + 0xfc810));
            piVar44 = (int *)((int)param_1 + (int)local_1e0 * 2 + 0x1158);
            uVar58 = (int)param_1 + (int)local_1e0 * 2 + 0x1158;
            piVar43 = (int *)((int)param_1 + (int)local_1e0 + 0x1958);
            uVar49 = (int)param_1 + (int)local_1e0 + 0x1958;
            if ((uVar67 < 0x10 ||
                (uVar58 < uVar49 + uVar67 && uVar49 < uVar58 + iVar56 ||
                param_1 + (int)local_1e0 + 0x2e < (int *)((int)piVar43 + uVar67) &&
                piVar43 < param_1 + (int)local_1e0 + 0x2e + uVar67)) ||
                param_1 + (int)local_1e0 + 0x2e < (int *)((int)piVar44 + iVar56) &&
                piVar44 < param_1 + (int)local_1e0 + 0x2e + uVar67) {
              piVar43 = param_1 + (int)local_1e0 + 0x2d;
              iVar38 = (int)local_1e0 * 2 + 0x1158;
              iVar48 = 0;
              uVar49 = uVar64;
              do {
                uVar20 = *(ushort *)((int)param_1 + iVar48 + iVar38);
                piVar43 = piVar43 + 1;
                *piVar43 = iVar41 + (int)local_19c;
                *(ushort *)((int)param_1 + iVar48 + iVar38) = uVar21 | uVar20;
                *(char *)((int)param_1 + uVar49 + ((int)local_1e0 - uVar64) + 0x1958) = (char)uVar49
                ;
                uVar49 = uVar49 + 1;
                iVar48 = iVar48 + 2;
              } while (uVar49 != uVar67 + uVar64);
            }
            else {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              auVar2 = SIMDExpandImmediate(0,0,4);
              pauVar40 = (undefined (*) [16])((int)param_1 + (int)local_1e0 * 2 + 0x1158);
              puVar45 = (undefined8 *)((int)param_1 + (int)local_1e0 + 0x1958);
              uVar49 = uVar67 & 0xfffffff0;
              auVar6._4_4_ = CONCAT22(uVar21,uVar21);
              auVar6._0_4_ = CONCAT22(uVar21,uVar21);
              auVar6._8_8_ = 0;
              auVar6 = auVar6 & auVar6 << 0x40;
              auVar85._4_4_ = uVar64 + 1;
              auVar85._0_4_ = uVar64;
              auVar85._8_4_ = uVar64 + 2;
              auVar85._12_4_ = uVar64 + 3;
              local_1d4 = (undefined (*) [16])0x0;
              pauVar50 = pauVar40;
              puVar39 = (undefined8 *)(param_1 + (int)local_1e0 + 0x2e);
              do {
                auVar91 = VectorAdd(auVar85,auVar2,4);
                auVar93 = VectorAdd(auVar91,auVar2,4);
                local_1d4 = (undefined (*) [16])((int)local_1d4 + 1);
                uVar70 = VectorCopyNarrow(auVar85,4);
                uVar71 = VectorCopyNarrow(auVar91,4);
                auVar91 = VectorAdd(auVar93,auVar2,4);
                auVar85 = VectorAdd(auVar85,auVar1,4);
                auVar92 = *pauVar40 | auVar6;
                uVar72 = VectorCopyNarrow(auVar93,4);
                uVar73 = VectorCopyNarrow(auVar91,4);
                auVar93 = pauVar40[1] | auVar6;
                *puVar39 = 0;
                puVar39[1] = 0;
                auVar29._8_8_ = uVar71;
                auVar29._0_8_ = uVar70;
                uVar70 = VectorCopyNarrow(auVar29,2);
                auVar37._8_8_ = uVar73;
                auVar37._0_8_ = uVar72;
                uVar71 = VectorCopyNarrow(auVar37,2);
                pauVar40 = pauVar40 + 2;
                puVar39[2] = 0;
                puVar39[3] = 0;
                puVar39[4] = 0;
                puVar39[5] = 0;
                puVar39[6] = 0;
                puVar39[7] = 0;
                *(longlong *)*pauVar50 = auVar92._0_8_;
                *(longlong *)(*pauVar50 + 8) = auVar92._8_8_;
                *(longlong *)pauVar50[1] = auVar93._0_8_;
                *(longlong *)(pauVar50[1] + 8) = auVar93._8_8_;
                *puVar45 = uVar70;
                puVar45[1] = uVar71;
                puVar45 = puVar45 + 2;
                pauVar50 = pauVar50 + 2;
                puVar39 = puVar39 + 8;
              } while (local_1d4 < local_1dc >> 8);
              iVar38 = (int)local_1e0 + uVar49;
              iVar48 = uVar49 + uVar64;
              if (uVar49 != uVar67) {
                iVar56 = iVar38 - iVar48;
                iVar42 = iVar38 * 2 + 0x1158;
                iVar52 = iVar48 + (uVar67 - uVar49);
                iVar46 = 0;
                piVar43 = param_1 + iVar38 + 0x4000002d;
                do {
                  uVar20 = *(ushort *)((int)param_1 + iVar46 + iVar42);
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41 + (int)local_19c;
                  *(ushort *)((int)param_1 + iVar46 + iVar42) = uVar21 | uVar20;
                  *(char *)((int)param_1 + iVar48 + iVar56 + 0x1958) = (char)iVar48;
                  iVar48 = iVar48 + 1;
                  iVar46 = iVar46 + 2;
                } while (iVar48 != iVar52);
              }
            }
            iVar48 = 8;
            goto LAB_080262f8;
          case 2:
            switch(uVar65) {
            case 0:
            case 1:
              local_1fc = ((uVar67 & 1) + 0x20) * 8;
              local_1d4 = (undefined (*) [16])(local_1fc - 0x80);
              iVar38 = (local_1fc + 0x1800) * 0x4000;
              iVar52 = iVar38 + -0x6000000;
              iVar42 = -iVar52;
              break;
            case 2:
            case 3:
              uVar67 = uVar67 & 1;
              local_1fc = uVar67 * 8;
              uVar49 = local_1dc >> 7;
              FUN_0800cb50(*(undefined4 *)(iVar48 + 0xfba30),(local_1fc + 0x1800) * 0x4000,
                           local_1dc << 10);
              uVar21 = (ushort)(1 << (uVar65 & 0xff));
              if (uVar49 < 8 ||
                  param_1 + uVar67 * 4 + 0x760 < param_1 + uVar67 * 8 + 0x454 + uVar49 &&
                  param_1 + uVar67 * 8 + 0x454 <
                  (int *)((int)(param_1 + uVar67 * 4 + 0x760) + uVar49 * 2)) {
                piVar44 = param_1 + local_1fc + 0x40000453;
                piVar43 = param_1 + uVar67 * 4 + 0x760;
                do {
                  uVar20 = *(ushort *)piVar43;
                  piVar44 = piVar44 + 1;
                  *piVar44 = iVar41;
                  iVar41 = iVar41 + 0x20000;
                  piVar51 = (int *)((int)piVar43 + 2);
                  *(ushort *)piVar43 = uVar20 | uVar21;
                  piVar43 = piVar51;
                } while (piVar51 != (int *)((int)param_1 + (local_1fc + uVar49) * 2 + 0x1d80));
              }
              else {
                auVar1 = SIMDExpandImmediate(0,4,0x10);
                auVar2 = SIMDExpandImmediate(0,4,8);
                pauVar40 = (undefined (*) [16])(param_1 + uVar67 * 4 + 0x760);
                auVar12._4_4_ = CONCAT22(uVar21,uVar21);
                auVar12._0_4_ = CONCAT22(uVar21,uVar21);
                auVar12._8_8_ = 0;
                uVar58 = local_1dc >> 10;
                uVar69 = 0;
                auVar78._4_4_ = iVar41 + 0x20000;
                auVar78._0_4_ = iVar41;
                auVar78._8_4_ = iVar41 + 0x40000;
                auVar78._12_4_ = iVar41 + 0x60000;
                puVar39 = (undefined8 *)(param_1 + uVar67 * 8 + 0x454);
                pauVar50 = pauVar40;
                do {
                  auVar93 = *pauVar50;
                  pauVar50 = pauVar50 + 1;
                  auVar91 = VectorAdd(auVar78,auVar2,4);
                  uVar69 = uVar69 + 1;
                  auVar93 = auVar93 | auVar12 & auVar12 << 0x40;
                  *puVar39 = auVar78._0_8_;
                  puVar39[1] = auVar78._8_8_;
                  auVar78 = VectorAdd(auVar78,auVar1,4);
                  puVar39[2] = auVar91._0_8_;
                  puVar39[3] = auVar91._8_8_;
                  *(longlong *)*pauVar40 = auVar93._0_8_;
                  *(longlong *)(*pauVar40 + 8) = auVar93._8_8_;
                  pauVar40 = pauVar40 + 1;
                  puVar39 = puVar39 + 4;
                } while (uVar69 < uVar58);
                iVar38 = uVar49 + uVar58 * -8;
                iVar41 = iVar41 + uVar58 * 0x100000;
                iVar48 = local_1fc + uVar58 * 8;
                if (uVar49 != uVar58 * 8) {
                  param_1[iVar48 + 0x454] = iVar41;
                  *(ushort *)(param_1 + uVar58 * 4 + uVar67 * 4 + 0x760) =
                       uVar21 | *(ushort *)(param_1 + uVar58 * 4 + uVar67 * 4 + 0x760);
                  if (iVar38 != 1) {
                    iVar42 = (iVar48 + 1) * 2;
                    param_1[iVar48 + 0x455] = iVar41 + 0x20000;
                    *(ushort *)((int)param_1 + iVar42 + 0x1d80) =
                         uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d80);
                    if (iVar38 != 2) {
                      param_1[iVar48 + 0x456] = iVar41 + 0x40000;
                      *(ushort *)(param_1 + uVar58 * 4 + uVar67 * 4 + 0x761) =
                           uVar21 | *(ushort *)(param_1 + uVar58 * 4 + uVar67 * 4 + 0x761);
                      if (iVar38 != 3) {
                        iVar42 = (iVar48 + 3) * 2;
                        param_1[iVar48 + 0x457] = iVar41 + 0x60000;
                        *(ushort *)((int)param_1 + iVar42 + 0x1d80) =
                             uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d80);
                        if (iVar38 != 4) {
                          param_1[iVar48 + 0x458] = iVar41 + 0x80000;
                          *(ushort *)(param_1 + uVar58 * 4 + uVar67 * 4 + 0x762) =
                               uVar21 | *(ushort *)(param_1 + uVar58 * 4 + uVar67 * 4 + 0x762);
                          if (iVar38 != 5) {
                            iVar42 = (iVar48 + 5) * 2;
                            param_1[iVar48 + 0x459] = iVar41 + 0xa0000;
                            *(ushort *)((int)param_1 + iVar42 + 0x1d80) =
                                 uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d80);
                            if (iVar38 != 6) {
                              param_1[iVar48 + 0x45a] = iVar41 + 0xc0000;
                              *(ushort *)(param_1 + uVar58 * 4 + uVar67 * 4 + 0x763) =
                                   uVar21 | *(ushort *)(param_1 + uVar58 * 4 + uVar67 * 4 + 0x763);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar48 = 7;
              local_1f0 = (undefined (*) [16])0x0;
              goto LAB_080262f8;
            case 4:
              iVar52 = 0x400000;
              iVar42 = -0x400000;
              iVar38 = 0x6400000;
              local_1d4 = (undefined (*) [16])0x80;
              local_1fc = 0x100;
              break;
            case 5:
            case 6:
              local_1fc = (uVar67 & 1) + 0x100 + (uVar67 & 2) * 2;
              goto LAB_080272fc;
            case 7:
              local_1fc = 0;
              iVar48 = 1;
              piVar43 = piVar57;
              goto LAB_08027bd0;
            case 8:
              iVar52 = 0x600000;
              iVar42 = -0x600000;
              iVar38 = 0x6600000;
              local_1d4 = (undefined (*) [16])0x100;
              local_1fc = 0x180;
              break;
            default:
              goto switchD_08026314_caseD_9;
            }
            break;
          case 3:
            switch(uVar65) {
            case 0:
            case 1:
            case 2:
            case 3:
              uVar67 = local_1dc >> 7;
              piVar43 = (int *)((int)param_1 + local_1fc * 2 + 0x1d6c);
              uVar49 = param_1[0x9b8c5];
              uVar21 = (ushort)(1 << (uVar65 & 0xff));
              if (uVar67 < 8 ||
                  piVar43 < param_1 + local_1fc + 0x44a + uVar67 &&
                  param_1 + local_1fc + 0x44a < (int *)((int)piVar43 + uVar67 * 2)) {
                piVar43 = param_1 + local_1fc + 0x449;
                puVar68 = (ushort *)((int)param_1 + local_1fc * 2 + 0x1d6c);
                do {
                  uVar20 = *puVar68;
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41;
                  iVar41 = iVar41 + 0x20000;
                  puVar53 = puVar68 + 1;
                  *puVar68 = uVar20 | uVar21;
                  puVar68 = puVar53;
                } while (puVar53 != (ushort *)((int)param_1 + (local_1fc + uVar67) * 2 + 0x1d6c));
              }
              else {
                auVar1 = SIMDExpandImmediate(0,4,0x10);
                auVar2 = SIMDExpandImmediate(0,4,8);
                auVar11._4_4_ = CONCAT22(uVar21,uVar21);
                auVar11._0_4_ = CONCAT22(uVar21,uVar21);
                auVar11._8_8_ = 0;
                uVar58 = local_1dc >> 10;
                pauVar40 = (undefined (*) [16])((int)param_1 + local_1fc * 2 + 0x1d6c);
                uVar69 = 0;
                auVar77._4_4_ = iVar41 + 0x20000;
                auVar77._0_4_ = iVar41;
                auVar77._8_4_ = iVar41 + 0x40000;
                auVar77._12_4_ = iVar41 + 0x60000;
                puVar39 = (undefined8 *)(param_1 + local_1fc + 0x44a);
                pauVar50 = pauVar40;
                do {
                  auVar93 = *pauVar50;
                  pauVar50 = pauVar50 + 1;
                  auVar91 = VectorAdd(auVar77,auVar2,4);
                  uVar69 = uVar69 + 1;
                  auVar93 = auVar93 | auVar11 & auVar11 << 0x40;
                  *puVar39 = auVar77._0_8_;
                  puVar39[1] = auVar77._8_8_;
                  auVar77 = VectorAdd(auVar77,auVar1,4);
                  puVar39[2] = auVar91._0_8_;
                  puVar39[3] = auVar91._8_8_;
                  *(longlong *)*pauVar40 = auVar93._0_8_;
                  *(longlong *)(*pauVar40 + 8) = auVar93._8_8_;
                  pauVar40 = pauVar40 + 1;
                  puVar39 = puVar39 + 4;
                } while (uVar69 < uVar58);
                iVar41 = iVar41 + uVar58 * 0x100000;
                iVar38 = uVar67 + uVar58 * -8;
                iVar48 = local_1fc + uVar58 * 8;
                if (uVar67 != uVar58 * 8) {
                  uVar20 = *(ushort *)((int)param_1 + iVar48 * 2 + 0x1d6c);
                  param_1[iVar48 + 0x44a] = iVar41;
                  *(ushort *)((int)param_1 + iVar48 * 2 + 0x1d6c) = uVar21 | uVar20;
                  if (iVar38 != 1) {
                    iVar42 = (iVar48 + 1) * 2;
                    param_1[iVar48 + 1099] = iVar41 + 0x20000;
                    *(ushort *)((int)param_1 + iVar42 + 0x1d6c) =
                         uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d6c);
                    if (iVar38 != 2) {
                      iVar42 = (iVar48 + 2) * 2;
                      param_1[iVar48 + 0x44c] = iVar41 + 0x40000;
                      *(ushort *)((int)param_1 + iVar42 + 0x1d6c) =
                           uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d6c);
                      if (iVar38 != 3) {
                        iVar42 = (iVar48 + 3) * 2;
                        param_1[iVar48 + 0x44d] = iVar41 + 0x60000;
                        *(ushort *)((int)param_1 + iVar42 + 0x1d6c) =
                             uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d6c);
                        if (iVar38 != 4) {
                          iVar42 = (iVar48 + 4) * 2;
                          param_1[iVar48 + 0x44e] = iVar41 + 0x80000;
                          *(ushort *)((int)param_1 + iVar42 + 0x1d6c) =
                               uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d6c);
                          if (iVar38 != 5) {
                            iVar42 = (iVar48 + 5) * 2;
                            param_1[iVar48 + 0x44f] = iVar41 + 0xa0000;
                            *(ushort *)((int)param_1 + iVar42 + 0x1d6c) =
                                 uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d6c);
                            if (iVar38 != 6) {
                              iVar38 = (iVar48 + 6) * 2;
                              param_1[iVar48 + 0x450] = iVar41 + 0xc0000;
                              *(ushort *)((int)param_1 + iVar38 + 0x1d6c) =
                                   uVar21 | *(ushort *)((int)param_1 + iVar38 + 0x1d6c);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar67 = 0xff << (uVar64 & 0xff);
              local_1f0 = (undefined (*) [16])0x0;
              param_1[0x61202] =
                   param_1[0x61202] | (uVar49 >> (uVar64 & 0xff) & 0xff) << (local_1fc << 3);
              param_1[0x61204] = uVar67 | param_1[0x61204];
              iVar48 = 4;
              param_1[0x9b8c5] = uVar49 & ~uVar67;
              break;
            case 4:
              local_1fc = 0;
              goto LAB_080273b8;
            case 5:
            case 6:
              local_1fc = (uVar67 & 1) + (uVar67 & 2) * 2;
LAB_080273b8:
              uVar67 = local_1dc >> 4;
              piVar43 = (int *)((int)param_1 + local_1fc * 2 + 0x1d74);
              uVar49 = 1 << (uVar65 & 0xff);
              uVar21 = (ushort)uVar49;
              if (uVar67 < 8 ||
                  piVar43 < param_1 + local_1fc + 0x44e + uVar67 &&
                  param_1 + local_1fc + 0x44e < (int *)((int)piVar43 + uVar67 * 2)) {
                piVar43 = param_1 + local_1fc + 0x44d;
                puVar68 = (ushort *)((int)param_1 + local_1fc * 2 + 0x1d74);
                do {
                  uVar20 = *puVar68;
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41;
                  iVar41 = iVar41 + 0x4000;
                  puVar53 = puVar68 + 1;
                  *puVar68 = uVar20 | uVar21;
                  puVar68 = puVar53;
                } while (puVar53 != (ushort *)((int)param_1 + (local_1fc + uVar67) * 2 + 0x1d74));
              }
              else {
                auVar1 = SIMDExpandImmediate(0,4,2);
                pauVar40 = (undefined (*) [16])((int)param_1 + local_1fc * 2 + 0x1d74);
                auVar2 = SIMDExpandImmediate(0,4,1);
                uVar58 = local_1dc >> 7;
                auVar7._4_4_ = CONCAT22(uVar21,uVar21);
                auVar7._0_4_ = CONCAT22(uVar21,uVar21);
                auVar7._8_8_ = 0;
                uVar69 = 0;
                auVar74._4_4_ = iVar41 + 0x4000;
                auVar74._0_4_ = iVar41;
                auVar74._8_4_ = iVar41 + 0x8000;
                auVar74._12_4_ = iVar41 + 0xc000;
                puVar39 = (undefined8 *)(param_1 + local_1fc + 0x44e);
                pauVar50 = pauVar40;
                do {
                  auVar93 = *pauVar50;
                  pauVar50 = pauVar50 + 1;
                  auVar91 = VectorAdd(auVar74,auVar2,4);
                  uVar69 = uVar69 + 1;
                  auVar93 = auVar93 | auVar7 & auVar7 << 0x40;
                  *puVar39 = auVar74._0_8_;
                  puVar39[1] = auVar74._8_8_;
                  auVar74 = VectorAdd(auVar74,auVar1,4);
                  puVar39[2] = auVar91._0_8_;
                  puVar39[3] = auVar91._8_8_;
                  *(longlong *)*pauVar40 = auVar93._0_8_;
                  *(longlong *)(*pauVar40 + 8) = auVar93._8_8_;
                  pauVar40 = pauVar40 + 1;
                  puVar39 = puVar39 + 4;
                } while (uVar69 < uVar58);
                iVar38 = uVar67 + uVar58 * -8;
                iVar41 = iVar41 + uVar58 * 0x20000;
                iVar48 = local_1fc + uVar58 * 8;
                if (uVar67 != uVar58 * 8) {
                  uVar20 = *(ushort *)((int)param_1 + iVar48 * 2 + 0x1d74);
                  param_1[iVar48 + 0x44e] = iVar41;
                  *(ushort *)((int)param_1 + iVar48 * 2 + 0x1d74) = uVar21 | uVar20;
                  if (iVar38 != 1) {
                    iVar42 = (iVar48 + 1) * 2;
                    param_1[iVar48 + 0x44f] = iVar41 + 0x4000;
                    *(ushort *)((int)param_1 + iVar42 + 0x1d74) =
                         uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d74);
                    if (iVar38 != 2) {
                      iVar42 = (iVar48 + 2) * 2;
                      param_1[iVar48 + 0x450] = iVar41 + 0x8000;
                      *(ushort *)((int)param_1 + iVar42 + 0x1d74) =
                           uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d74);
                      if (iVar38 != 3) {
                        iVar42 = (iVar48 + 3) * 2;
                        param_1[iVar48 + 0x451] = iVar41 + 0xc000;
                        *(ushort *)((int)param_1 + iVar42 + 0x1d74) =
                             uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d74);
                        if (iVar38 != 4) {
                          iVar42 = (iVar48 + 4) * 2;
                          param_1[iVar48 + 0x452] = iVar41 + 0x10000;
                          *(ushort *)((int)param_1 + iVar42 + 0x1d74) =
                               uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d74);
                          if (iVar38 != 5) {
                            iVar42 = (iVar48 + 5) * 2;
                            param_1[iVar48 + 0x453] = iVar41 + 0x14000;
                            *(ushort *)((int)param_1 + iVar42 + 0x1d74) =
                                 uVar21 | *(ushort *)((int)param_1 + iVar42 + 0x1d74);
                            if (iVar38 != 6) {
                              iVar38 = (iVar48 + 6) * 2;
                              param_1[iVar48 + 0x454] = iVar41 + 0x18000;
                              *(ushort *)((int)param_1 + iVar38 + 0x1d74) =
                                   uVar21 | *(ushort *)((int)param_1 + iVar38 + 0x1d74);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (uVar65 == 4) {
                *puVar66 = param_1[0x9b8c6] & 0xfU | *puVar66;
                param_1[0x9b8c6] = param_1[0x9b8c6] & 0xffffff00;
                param_1[0x61206] = 0xf;
                iVar48 = 5;
                local_1f0 = (undefined (*) [16])0x0;
              }
              else {
                *puVar66 = *puVar66 |
                           ((uint)param_1[0x9b8c6] >> (uVar64 - 0x20 & 0xff) & 1) <<
                           (local_1fc << 3);
                local_1f0 = (undefined (*) [16])0x0;
                param_1[0x9b8c6] = param_1[0x9b8c6] & ~(0xff << (uVar64 - 0x20 & 0xff));
                iVar48 = 5;
                param_1[0x61206] = uVar49 | param_1[0x61206];
              }
              break;
            case 7:
switchD_08026314_caseD_0:
              iVar48 = 10;
              goto LAB_080262e4;
            case 8:
              iVar48 = 3;
              local_1ec = 1;
LAB_08027fe0:
              uVar67 = local_1dc >> 4;
              piVar43 = (int *)((int)param_1 + local_1ec * 2 + 0x1d68);
              iVar38 = local_1ec + 0x448;
              uVar21 = (ushort)(1 << (uVar65 & 0xff));
              puVar68 = (ushort *)((int)param_1 + local_1ec * 2 + 0x1d68);
              if (uVar67 < 8 ||
                  piVar43 < param_1 + local_1ec + 0x448 + uVar67 &&
                  param_1 + local_1ec + 0x448 < (int *)((int)piVar43 + uVar67 * 2)) {
                piVar43 = param_1 + local_1ec + 0x447;
                puVar53 = puVar68;
                do {
                  uVar20 = *puVar53;
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41;
                  iVar41 = iVar41 + 0x2000;
                  puVar54 = puVar53 + 1;
                  *puVar53 = uVar20 | uVar21;
                  puVar53 = puVar54;
                } while (puVar54 != puVar68 + uVar67);
              }
              else {
                auVar1 = SIMDExpandImmediate(0,4,1);
                auVar2 = SIMDExpandImmediate(0,2,0x80);
                uVar58 = local_1dc >> 7;
                pauVar40 = (undefined (*) [16])((int)param_1 + local_1ec * 2 + 0x1d68);
                auVar10._4_4_ = CONCAT22(uVar21,uVar21);
                auVar10._0_4_ = CONCAT22(uVar21,uVar21);
                auVar10._8_8_ = 0;
                uVar49 = uVar58 * 8;
                uVar69 = 0;
                auVar76._4_4_ = iVar41 + 0x2000;
                auVar76._0_4_ = iVar41;
                auVar76._8_4_ = iVar41 + 0x4000;
                auVar76._12_4_ = iVar41 + 0x6000;
                puVar39 = (undefined8 *)(param_1 + local_1ec + 0x448);
                pauVar50 = pauVar40;
                do {
                  auVar93 = *pauVar40;
                  pauVar40 = pauVar40 + 1;
                  auVar91 = VectorAdd(auVar76,auVar2,4);
                  uVar69 = uVar69 + 1;
                  auVar93 = auVar93 | auVar10 & auVar10 << 0x40;
                  *puVar39 = auVar76._0_8_;
                  puVar39[1] = auVar76._8_8_;
                  auVar76 = VectorAdd(auVar76,auVar1,4);
                  puVar39[2] = auVar91._0_8_;
                  puVar39[3] = auVar91._8_8_;
                  *(longlong *)*pauVar50 = auVar93._0_8_;
                  *(longlong *)(*pauVar50 + 8) = auVar93._8_8_;
                  pauVar50 = pauVar50 + 1;
                  puVar39 = puVar39 + 4;
                } while (uVar69 < uVar58);
                iVar42 = uVar67 + uVar58 * -8;
                iVar41 = iVar41 + uVar58 * 0x10000;
                if (uVar67 != uVar49) {
                  param_1[iVar38 + uVar58 * 8] = iVar41;
                  iVar52 = uVar49 + 1;
                  puVar68[uVar58 * 8] = uVar21 | puVar68[uVar58 * 8];
                  if (iVar42 != 1) {
                    param_1[iVar38 + iVar52] = iVar41 + 0x2000;
                    iVar46 = uVar49 + 2;
                    puVar68[iVar52] = uVar21 | puVar68[iVar52];
                    if (iVar42 != 2) {
                      param_1[iVar38 + iVar46] = iVar41 + 0x4000;
                      iVar52 = uVar49 + 3;
                      puVar68[iVar46] = uVar21 | puVar68[iVar46];
                      if (iVar42 != 3) {
                        param_1[iVar38 + iVar52] = iVar41 + 0x6000;
                        iVar46 = uVar49 + 4;
                        puVar68[iVar52] = uVar21 | puVar68[iVar52];
                        if (iVar42 != 4) {
                          param_1[iVar38 + iVar46] = iVar41 + 0x8000;
                          iVar52 = uVar49 + 5;
                          puVar68[iVar46] = uVar21 | puVar68[iVar46];
                          if (iVar42 != 5) {
                            iVar46 = uVar49 + 6;
                            param_1[iVar38 + iVar52] = iVar41 + 0xa000;
                            puVar68[iVar52] = uVar21 | puVar68[iVar52];
                            if (iVar42 != 6) {
                              param_1[iVar38 + iVar46] = iVar41 + 0xc000;
                              puVar68[iVar46] = uVar21 | puVar68[iVar46];
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              local_1f0 = (undefined (*) [16])0x0;
              local_1fc = 0;
              param_1[local_1ec * 0x203d0 + 0x76b] = param_1[local_1ec + 0x448];
              local_1dc = local_1dc >> 1;
              break;
            default:
              goto switchD_0802629c_caseD_7;
            }
            goto LAB_080262f8;
          case 4:
            piVar43 = piVar55;
            switch(uVar65) {
            case 0:
            case 1:
            case 7:
            case 8:
              goto switchD_08026314_caseD_0;
            case 2:
              iVar52 = 0x200000;
              iVar42 = -0x200000;
              iVar38 = 0x6200000;
              local_1d4 = (undefined (*) [16])0x0;
              local_1fc = 0x80;
              break;
            case 3:
              iVar52 = 0x600000;
              iVar42 = -0x600000;
              iVar38 = 0x6600000;
              local_1d4 = (undefined (*) [16])0x100;
              local_1fc = 0x180;
              break;
            case 4:
              iVar48 = 0;
              local_1fc = 0;
              local_1dc = local_1dc >> 1;
              goto LAB_08027bd0;
            case 5:
            case 6:
              iVar48 = 0;
              local_1fc = (uVar67 & 1) << 1;
LAB_08027bd0:
              iVar38 = local_1fc + iVar48 * 4;
              uVar67 = local_1dc >> 3;
              puVar39 = (undefined8 *)(param_1 + iVar38 + 0x440);
              local_1e0 = (undefined (*) [16])((int)param_1 + iVar38 * 2 + 0x1d58);
              iVar42 = iVar48 + 0x110;
              iVar38 = iVar48 * 8 + 0x1d58;
              uVar21 = (ushort)(1 << (uVar65 & 0xff));
              if (uVar67 < 8 ||
                  local_1e0 < (undefined (*) [16])((int)puVar39 + uVar67 * 4) &&
                  puVar39 < *local_1e0 + uVar67 * 2) {
                piVar44 = param_1 + iVar42 * 4 + local_1fc + 0x3fffffff;
                puVar68 = (ushort *)((int)param_1 + local_1fc * 2 + iVar38);
                do {
                  uVar20 = *puVar68;
                  piVar44 = piVar44 + 1;
                  *piVar44 = iVar41;
                  iVar41 = iVar41 + 0x2000;
                  puVar53 = puVar68 + 1;
                  *puVar68 = uVar20 | uVar21;
                  puVar68 = puVar53;
                } while (puVar53 != (ushort *)((int)param_1 + (uVar67 + local_1fc) * 2 + iVar38));
              }
              else {
                auVar1 = SIMDExpandImmediate(0,4,1);
                auVar2 = SIMDExpandImmediate(0,2,0x80);
                auVar75._4_4_ = iVar41 + 0x2000;
                auVar75._0_4_ = iVar41;
                auVar75._8_4_ = iVar41 + 0x4000;
                auVar75._12_4_ = iVar41 + 0x6000;
                uVar49 = local_1dc >> 6;
                uVar58 = 0;
                auVar9._4_4_ = CONCAT22(uVar21,uVar21);
                auVar9._0_4_ = CONCAT22(uVar21,uVar21);
                auVar9._8_8_ = 0;
                local_1d4 = local_1e0;
                do {
                  auVar91 = VectorAdd(auVar75,auVar2,4);
                  uVar58 = uVar58 + 1;
                  auVar93 = *local_1e0;
                  local_1e0 = local_1e0 + 1;
                  auVar93 = auVar93 | auVar9 & auVar9 << 0x40;
                  *puVar39 = auVar75._0_8_;
                  puVar39[1] = auVar75._8_8_;
                  auVar75 = VectorAdd(auVar75,auVar1,4);
                  puVar39[2] = auVar91._0_8_;
                  puVar39[3] = auVar91._8_8_;
                  *(longlong *)*local_1d4 = auVar93._0_8_;
                  *(longlong *)(*local_1d4 + 8) = auVar93._8_8_;
                  local_1d4 = local_1d4 + 1;
                  puVar39 = puVar39 + 4;
                } while (uVar58 < uVar49);
                iVar46 = uVar67 + uVar49 * -8;
                iVar41 = iVar41 + uVar49 * 0x10000;
                iVar52 = uVar49 * 8 + local_1fc;
                if (uVar67 != uVar49 * 8) {
                  param_1[iVar42 * 4 + iVar52] = iVar41;
                  *(ushort *)((int)param_1 + iVar52 * 2 + iVar38) =
                       uVar21 | *(ushort *)((int)param_1 + iVar52 * 2 + iVar38);
                  if (iVar46 != 1) {
                    iVar56 = (iVar52 + 1) * 2;
                    param_1[iVar42 * 4 + iVar52 + 1] = iVar41 + 0x2000;
                    *(ushort *)((int)param_1 + iVar56 + iVar38) =
                         uVar21 | *(ushort *)((int)param_1 + iVar56 + iVar38);
                    if (iVar46 != 2) {
                      iVar56 = (iVar52 + 2) * 2;
                      param_1[iVar42 * 4 + iVar52 + 2] = iVar41 + 0x4000;
                      *(ushort *)((int)param_1 + iVar56 + iVar38) =
                           uVar21 | *(ushort *)((int)param_1 + iVar56 + iVar38);
                      if (iVar46 != 3) {
                        iVar56 = (iVar52 + 3) * 2;
                        param_1[iVar42 * 4 + iVar52 + 3] = iVar41 + 0x6000;
                        *(ushort *)((int)param_1 + iVar56 + iVar38) =
                             uVar21 | *(ushort *)((int)param_1 + iVar56 + iVar38);
                        if (iVar46 != 4) {
                          iVar56 = (iVar52 + 4) * 2;
                          param_1[iVar42 * 4 + iVar52 + 4] = iVar41 + 0x8000;
                          *(ushort *)((int)param_1 + iVar56 + iVar38) =
                               uVar21 | *(ushort *)((int)param_1 + iVar56 + iVar38);
                          if (iVar46 != 5) {
                            iVar56 = (iVar52 + 5) * 2;
                            param_1[iVar42 * 4 + iVar52 + 5] = iVar41 + 0xa000;
                            *(ushort *)((int)param_1 + iVar56 + iVar38) =
                                 uVar21 | *(ushort *)((int)param_1 + iVar56 + iVar38);
                            if (iVar46 != 6) {
                              iVar46 = (iVar52 + 6) * 2;
                              param_1[iVar42 * 4 + iVar52 + 6] = iVar41 + 0xc000;
                              *(ushort *)((int)param_1 + iVar46 + iVar38) =
                                   uVar21 | *(ushort *)((int)param_1 + iVar46 + iVar38);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar41 = piVar43[4];
              local_1f0 = (undefined (*) [16])0x0;
              piVar43[0x29] =
                   *(int *)(iVar41 + ((int)((uint)*(ushort *)(piVar43 + 0x42) << 0x12) >> 0x1f) * -8
                           );
              piVar43[0x4b] =
                   *(int *)(iVar41 + (((int)((uint)*(ushort *)(piVar43 + 100) << 0x12) >> 0x1f) * -2
                                     + 1) * 4);
              piVar43[0x6d] = *(int *)(iVar41 + 8);
              piVar43[0x8f] = *(int *)(iVar41 + 0xc);
              goto LAB_080262f8;
            default:
              goto switchD_08026314_caseD_9;
            }
            break;
          case 5:
            if (uVar65 < 9) {
              uVar67 = 1 << (uVar65 & 0xff);
              if ((uVar67 & 0x19f) != 0) goto switchD_08026314_caseD_0;
              if ((uVar67 & 0x60) != 0) {
                iVar48 = 2;
                local_1ec = 0;
                goto LAB_08027fe0;
              }
              iVar38 = 0x6000000;
              local_1d4 = (undefined (*) [16])0xffffff80;
              iVar42 = 0;
              local_1fc = 0;
              iVar52 = 0;
              break;
            }
          default:
switchD_0802629c_caseD_7:
            iVar42 = 0;
            iVar38 = 0x6000000;
            local_1fc = 0;
            local_1d4 = (undefined (*) [16])0xffffff80;
            iVar52 = 0;
            break;
          case 6:
            goto switchD_0802629c_caseD_6;
          }
LAB_08026418:
          local_1f0 = (undefined (*) [16])((local_1dc >> 4) << 0xe);
          FUN_0800a1fc(*(undefined4 *)(iVar48 + 0xfba2c),iVar38,local_1f0);
LAB_08026438:
          iVar48 = *param_1;
          FUN_08009808(iVar48,*(int *)(iVar48 + 0xfc814) + iVar52,local_1f0,
                       iVar41 - *(int *)(iVar48 + 0xfc810));
LAB_08026468:
          uVar58 = local_1dc >> 4;
          iVar48 = uVar58 * 2;
          piVar43 = (int *)((int)param_1 + local_1fc + 0x1958);
          piVar44 = (int *)((int)param_1 + local_1fc * 2 + 0x1158);
          uVar67 = (int)param_1 + local_1fc + 0x1958;
          uVar49 = (int)param_1 + local_1fc * 2 + 0x1158;
          uVar21 = (ushort)(1 << (uVar65 & 0xff));
          if ((uVar58 < 0x10 ||
              (uVar49 < uVar67 + uVar58 && uVar67 < uVar49 + iVar48 ||
              param_1 + local_1fc + 0x2e < (int *)((int)piVar43 + uVar58) &&
              piVar43 < param_1 + local_1fc + 0x2e + uVar58)) ||
              param_1 + local_1fc + 0x2e < (int *)((int)piVar44 + iVar48) &&
              piVar44 < param_1 + local_1fc + 0x2e + uVar58) {
            piVar43 = param_1 + local_1fc + 0x2d;
            iVar52 = local_1fc * 2 + 0x1158;
            iVar38 = 0;
            uVar67 = uVar64;
            do {
              uVar20 = *(ushort *)((int)param_1 + iVar38 + iVar52);
              piVar43 = piVar43 + 1;
              *piVar43 = iVar41 + iVar42;
              *(ushort *)((int)param_1 + iVar38 + iVar52) = uVar21 | uVar20;
              *(char *)((int)param_1 + uVar67 + (local_1fc - uVar64) + 0x1958) = (char)uVar67;
              uVar67 = uVar67 + 1;
              iVar38 = iVar38 + 2;
            } while (uVar67 != uVar58 + uVar64);
          }
          else {
            auVar1 = SIMDExpandImmediate(0,0,0x10);
            auVar2 = SIMDExpandImmediate(0,0,4);
            puVar45 = (undefined8 *)((int)param_1 + local_1fc + 0x1958);
            uVar67 = uVar58 & 0xfffffff0;
            auVar4._4_4_ = CONCAT22(uVar21,uVar21);
            auVar4._0_4_ = CONCAT22(uVar21,uVar21);
            auVar4._8_8_ = 0;
            auVar4 = auVar4 & auVar4 << 0x40;
            local_19c = (undefined (*) [16])((int)param_1 + local_1fc * 2 + 0x1158);
            auVar83._4_4_ = uVar64 + 1;
            auVar83._0_4_ = uVar64;
            auVar83._8_4_ = uVar64 + 2;
            auVar83._12_4_ = uVar64 + 3;
            local_184 = 0;
            puVar39 = (undefined8 *)(param_1 + local_1fc + 0x2e);
            pauVar50 = local_19c;
            do {
              auVar91 = VectorAdd(auVar83,auVar2,4);
              auVar93 = VectorAdd(auVar91,auVar2,4);
              local_184 = local_184 + 1;
              uVar70 = VectorCopyNarrow(auVar83,4);
              uVar71 = VectorCopyNarrow(auVar91,4);
              auVar91 = VectorAdd(auVar93,auVar2,4);
              auVar92 = *local_19c | auVar4;
              uVar72 = VectorCopyNarrow(auVar93,4);
              uVar73 = VectorCopyNarrow(auVar91,4);
              auVar83 = VectorAdd(auVar83,auVar1,4);
              auVar93 = local_19c[1] | auVar4;
              auVar23._8_8_ = uVar71;
              auVar23._0_8_ = uVar70;
              uVar70 = VectorCopyNarrow(auVar23,2);
              auVar31._8_8_ = uVar73;
              auVar31._0_8_ = uVar72;
              uVar71 = VectorCopyNarrow(auVar31,2);
              *puVar39 = 0;
              puVar39[1] = 0;
              local_19c = local_19c + 2;
              puVar39[2] = 0;
              puVar39[3] = 0;
              puVar39[4] = 0;
              puVar39[5] = 0;
              puVar39[6] = 0;
              puVar39[7] = 0;
              *(longlong *)*pauVar50 = auVar92._0_8_;
              *(longlong *)(*pauVar50 + 8) = auVar92._8_8_;
              *(longlong *)pauVar50[1] = auVar93._0_8_;
              *(longlong *)(pauVar50[1] + 8) = auVar93._8_8_;
              *puVar45 = uVar70;
              puVar45[1] = uVar71;
              puVar45 = puVar45 + 2;
              puVar39 = puVar39 + 8;
              pauVar50 = pauVar50 + 2;
            } while (local_184 < local_1dc >> 8);
            iVar52 = local_1fc + uVar67;
            iVar38 = uVar67 + uVar64;
            if (uVar67 != uVar58) {
              iVar59 = iVar52 - iVar38;
              iVar46 = iVar38 + (uVar58 - uVar67);
              piVar43 = param_1 + iVar52 + 0x4000002d;
              iVar56 = 0;
              iVar52 = iVar52 * 2 + 0x1158;
              do {
                uVar20 = *(ushort *)((int)param_1 + iVar56 + iVar52);
                piVar43 = piVar43 + 1;
                *piVar43 = iVar41 + iVar42;
                *(ushort *)((int)param_1 + iVar56 + iVar52) = uVar21 | uVar20;
                *(char *)((int)param_1 + iVar38 + iVar59 + 0x1958) = (char)iVar38;
                iVar38 = iVar38 + 1;
                iVar56 = iVar56 + 2;
              } while (iVar38 != iVar46);
            }
          }
          if (local_1d4 < 0x80) {
            iVar38 = (local_1fc + 0x1808) * 0x4000;
            iVar42 = iVar38 + -0x6000000;
            FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),iVar38,local_1f0);
            iVar38 = *param_1;
            FUN_08009808(iVar38,*(int *)(iVar38 + 0xfc814) + iVar42,local_1f0,
                         iVar41 - *(int *)(iVar38 + 0xfc810));
            piVar43 = (int *)((int)param_1 + local_1fc * 2 + 0x1168);
            iVar41 = iVar41 - iVar42;
            piVar44 = (int *)((int)param_1 + local_1fc + 0x1960);
            uVar49 = (int)param_1 + local_1fc * 2 + 0x1168;
            uVar67 = (int)param_1 + local_1fc + 0x1960;
            if ((uVar58 < 0x10 ||
                (param_1 + local_1fc + 0x36 < (int *)((int)piVar43 + iVar48) &&
                 piVar43 < param_1 + local_1fc + 0x36 + uVar58 ||
                param_1 + local_1fc + 0x36 < (int *)((int)piVar44 + uVar58) &&
                piVar44 < param_1 + local_1fc + 0x36 + uVar58)) ||
                uVar49 < uVar67 + uVar58 && uVar67 < uVar49 + iVar48) {
              piVar43 = param_1 + local_1fc + 0x35;
              iVar48 = (int)param_1 + local_1fc + 0x1958;
              iVar38 = (int)param_1 + local_1fc * 2 + 0x1158;
              uVar67 = uVar64;
              do {
                uVar20 = *(ushort *)(iVar38 + 0x10);
                piVar43 = piVar43 + 1;
                *piVar43 = iVar41;
                *(ushort *)(iVar38 + 0x10) = uVar21 | uVar20;
                *(char *)(iVar48 + 8) = (char)uVar67;
                uVar67 = uVar67 + 1;
                iVar48 = iVar48 + 1;
                iVar38 = iVar38 + 2;
              } while (uVar67 != uVar58 + uVar64);
            }
            else {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              uVar49 = local_1dc >> 8;
              auVar2 = SIMDExpandImmediate(0,0,4);
              puVar45 = (undefined8 *)((int)param_1 + local_1fc + 0x1960);
              auVar8._4_4_ = CONCAT22(uVar21,uVar21);
              auVar8._0_4_ = CONCAT22(uVar21,uVar21);
              auVar8._8_8_ = 0;
              auVar8 = auVar8 & auVar8 << 0x40;
              local_1f0 = (undefined (*) [16])((int)param_1 + local_1fc * 2 + 0x1168);
              auVar86._4_4_ = uVar64 + 1;
              auVar86._0_4_ = uVar64;
              auVar86._8_4_ = uVar64 + 2;
              auVar86._12_4_ = uVar64 + 3;
              uVar67 = uVar49 * 0x10;
              local_1c0 = 0;
              pauVar50 = local_1f0;
              puVar39 = (undefined8 *)(param_1 + local_1fc + 0x36);
              do {
                auVar91 = VectorAdd(auVar86,auVar2,4);
                auVar93 = VectorAdd(auVar91,auVar2,4);
                local_1c0 = local_1c0 + 1;
                uVar70 = VectorCopyNarrow(auVar86,4);
                uVar71 = VectorCopyNarrow(auVar91,4);
                auVar91 = VectorAdd(auVar93,auVar2,4);
                auVar92 = *local_1f0 | auVar8;
                uVar72 = VectorCopyNarrow(auVar93,4);
                uVar73 = VectorCopyNarrow(auVar91,4);
                auVar86 = VectorAdd(auVar86,auVar1,4);
                auVar93 = local_1f0[1] | auVar8;
                auVar24._8_8_ = uVar71;
                auVar24._0_8_ = uVar70;
                uVar70 = VectorCopyNarrow(auVar24,2);
                auVar32._8_8_ = uVar73;
                auVar32._0_8_ = uVar72;
                uVar71 = VectorCopyNarrow(auVar32,2);
                *puVar39 = 0;
                puVar39[1] = 0;
                local_1f0 = local_1f0 + 2;
                puVar39[2] = 0;
                puVar39[3] = 0;
                puVar39[4] = 0;
                puVar39[5] = 0;
                puVar39[6] = 0;
                puVar39[7] = 0;
                *(longlong *)*pauVar50 = auVar92._0_8_;
                *(longlong *)(*pauVar50 + 8) = auVar92._8_8_;
                *(longlong *)pauVar50[1] = auVar93._0_8_;
                *(longlong *)(pauVar50[1] + 8) = auVar93._8_8_;
                *puVar45 = uVar70;
                puVar45[1] = uVar71;
                puVar45 = puVar45 + 2;
                pauVar50 = pauVar50 + 2;
                puVar39 = puVar39 + 8;
              } while (local_1c0 < uVar49);
              iVar38 = uVar67 + uVar64;
              iVar48 = local_1fc + 8 + uVar67;
              if (uVar58 != uVar67) {
                iVar56 = iVar38 + uVar58 + uVar49 * -0x10;
                iVar46 = iVar48 - iVar38;
                iVar42 = iVar48 * 2 + 0x1158;
                iVar52 = 0;
                piVar43 = param_1 + iVar48 + 0x4000002d;
                do {
                  uVar20 = *(ushort *)((int)param_1 + iVar52 + iVar42);
                  piVar43 = piVar43 + 1;
                  *piVar43 = iVar41;
                  *(ushort *)((int)param_1 + iVar52 + iVar42) = uVar21 | uVar20;
                  *(char *)((int)param_1 + iVar38 + iVar46 + 0x1958) = (char)iVar38;
                  iVar38 = iVar38 + 1;
                  iVar52 = iVar52 + 2;
                } while (iVar38 != iVar56);
              }
            }
            iVar48 = 6;
            local_1f0 = (undefined (*) [16])0x0;
          }
          else {
            iVar48 = 6;
            local_1f0 = (undefined (*) [16])0x0;
          }
LAB_080262f8:
          piVar63[5] = (int)local_1f0;
          piVar63[1] = iVar48;
          piVar63[2] = (uint)bVar19;
          piVar63[3] = local_1fc;
          piVar63[4] = local_1dc;
LAB_080261f8:
          uVar47 = uVar47 >> 1;
          uVar65 = uVar65 + 1;
          piVar63 = piVar63 + 5;
          uVar64 = uVar64 + 8;
          piVar62 = piVar62 + 1;
        } while (uVar47 != 0);
      }
    }
    local_1f4 = local_1f4 + 1;
    local_1e8 = local_1e8 + 5;
    local_1d8 = local_1d8 + 1;
    if (local_1f4 == 9) {
      param_1[0x9b8c5] = 0;
      param_1[0x9b8c6] = 0;
      param_1[0x61202] = 0;
      param_1[0x61203] = 0;
      __ptr = (void *)param_1[0x61201];
      while (__ptr != (void *)0x0) {
        uVar21 = *(ushort *)((int)__ptr + 0x26);
        pvVar61 = *(void **)((int)__ptr + 0x1c);
        iVar41 = param_1[0x61208];
        if (*(int *)((int)__ptr + 0x18) == 0) {
          param_1[*(ushort *)((int)__ptr + 0x28) + 0x60201] = 0;
        }
        __ptr_00 = *(void **)((int)__ptr + 0xc);
        param_1[0x61208] =
             iVar41 - (uint)(byte)(&DAT_080e70f0)[*(byte *)((int)__ptr + 0x2d)] *
                      (uint)uVar21 * (uint)*(ushort *)((int)__ptr + 0x24);
        free(__ptr_00);
        if (*(void **)((int)__ptr + 0x10) != (void *)0x0) {
          free(*(void **)((int)__ptr + 0x10));
        }
        free(__ptr);
        param_1[0x61209] = param_1[0x61209] + -1;
        __ptr = pvVar61;
      }
      param_1[0x61201] = 0;
      param_1[0x61202] = 0;
      param_1[0x61203] = 0;
      return;
    }
  } while( true );
}


