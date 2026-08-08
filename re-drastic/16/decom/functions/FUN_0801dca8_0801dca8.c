/*
 * Ghidra decompilation
 *
 * Function : FUN_0801dca8
 * Address  : 0801dca8
 * Program  : drastic16
 */


void FUN_0801dca8(int *param_1,int param_2,uint param_3,undefined4 *param_4,int param_5)

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
  ushort uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  ushort uVar19;
  int *piVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined (*pauVar23) [16];
  int *piVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined8 *puVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined (*pauVar33) [16];
  uint uVar34;
  int iVar35;
  int *piVar36;
  int iVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  undefined (*pauVar43) [16];
  ushort *puVar44;
  ushort *puVar45;
  ushort *puVar46;
  undefined4 *puVar47;
  bool bVar48;
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
  uint local_138;
  uint local_130;
  int local_128;
  uint local_124;
  uint local_11c;
  int local_104;
  int local_fc;
  int local_f4;
  uint local_e4;
  uint local_4c [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c [2];
  
  bVar48 = ((uint)param_4 & 0x80) != 0;
  local_4c[0] = 0x80;
  local_4c[1] = 0x80;
  local_4c[2] = 0x80;
  local_4c[3] = 0x80;
  uVar28 = (uint)param_4 >> 3;
  local_138 = uVar28 & 3;
  iVar41 = *param_1;
  local_3c = 0x40;
  uStack_38 = 0x10;
  uStack_34 = 0x10;
  uStack_30 = 0x20;
  local_2c[0] = 0x10;
  puVar47 = local_2c;
  if (bVar48) {
    puVar47 = param_4;
  }
  local_11c = local_4c[param_3];
  if (bVar48) {
    local_130 = (uint)puVar47 & 7;
  }
  else {
    local_130 = 6;
  }
  if (param_5 != 0) {
    iVar37 = param_1[param_3 * 5 + 1];
    switch(iVar37) {
    case 0:
    case 1:
      uVar32 = param_1[param_3 * 5 + 4];
      iVar22 = param_1[param_3 * 5 + 3];
      iVar31 = iVar37 * 8 + 0x1d58;
      uVar38 = *(undefined4 *)(iVar41 + 0x15034);
      iVar35 = 0;
      puVar44 = (ushort *)((int)param_1 + iVar22 * 2 + iVar31);
      do {
        uVar34 = (uint)*puVar44 & ~(1 << (param_3 & 0xff)) & 0xffffU;
        puVar45 = puVar44 + 1;
        *puVar44 = (ushort)uVar34;
        if (uVar34 == 0) {
          *(undefined4 *)((int)param_1 + iVar35 + iVar22 * 4 + (iVar37 + 0x110) * 0x10) = uVar38;
        }
        iVar35 = iVar35 + 4;
        puVar44 = puVar45;
      } while (puVar45 != (ushort *)((int)param_1 + (iVar22 + (uVar32 >> 3)) * 2 + iVar31));
      iVar31 = param_1[iVar37 * 0x203d0 + 0x76a];
      param_1[iVar37 * 0x203d0 + 0x78f] =
           *(int *)(iVar31 + ((int)((uint)*(ushort *)(param_1 + iVar37 * 0x203d0 + 0x7a8) << 0x12)
                             >> 0x1f) * -8);
      param_1[iVar37 * 0x203d0 + 0x7b1] =
           *(int *)(iVar31 + (((int)((uint)*(ushort *)(param_1 + iVar37 * 0x203d0 + 0x7ca) << 0x12)
                              >> 0x1f) * -2 + 1) * 4);
      param_1[iVar37 * 0x203d0 + 0x7d3] = *(int *)(iVar31 + 8);
      param_1[iVar37 * 0x203d0 + 0x7f5] = *(int *)(iVar31 + 0xc);
      break;
    case 2:
    case 3:
      uVar32 = param_1[param_3 * 5 + 4];
      iVar22 = param_1[param_3 * 5 + 3];
      iVar31 = (iVar37 + -2) * 2 + 0x1d68;
      uVar38 = *(undefined4 *)(iVar41 + 0x15034);
      iVar35 = 0;
      puVar44 = (ushort *)((int)param_1 + iVar22 * 2 + iVar31);
      do {
        uVar34 = (uint)*puVar44 & ~(1 << (param_3 & 0xff)) & 0xffffU;
        puVar45 = puVar44 + 1;
        *puVar44 = (ushort)uVar34;
        if (uVar34 == 0) {
          *(undefined4 *)((int)param_1 + iVar35 + iVar22 * 4 + (iVar37 + 0x446) * 4) = uVar38;
        }
        iVar35 = iVar35 + 4;
        puVar44 = puVar45;
      } while (puVar45 != (ushort *)((int)param_1 + (iVar22 + (uVar32 >> 3)) * 2 + iVar31));
      param_1[(iVar37 + -2) * 0x203d0 + 0x76b] = 0;
      break;
    case 4:
      uVar32 = param_1[param_3 * 5 + 4];
      iVar31 = param_1[param_3 * 5 + 3];
      iVar37 = 0;
      puVar44 = (ushort *)((int)param_1 + iVar31 * 2 + 0x1d6c);
      do {
        uVar34 = (uint)*puVar44 & ~(1 << (param_3 & 0xff)) & 0xffffU;
        puVar45 = puVar44 + 1;
        *puVar44 = (ushort)uVar34;
        if (uVar34 == 0) {
          *(undefined4 *)((int)param_1 + iVar37 + iVar31 * 4 + 0x1128) = 0;
        }
        iVar37 = iVar37 + 4;
        puVar44 = puVar45;
      } while (puVar45 != (ushort *)((int)param_1 + (iVar31 + (uVar32 >> 7)) * 2 + 0x1d6c));
      param_1[0x61204] = param_1[0x61204] & ~(0xff << ((param_3 & 0x1f) << 3));
      break;
    case 5:
      uVar32 = ~(1 << (param_3 & 0xff));
      uVar34 = param_1[param_3 * 5 + 4];
      iVar31 = param_1[param_3 * 5 + 3];
      iVar37 = 0;
      puVar44 = (ushort *)((int)param_1 + iVar31 * 2 + 0x1d74);
      do {
        uVar27 = (uint)*puVar44 & uVar32 & 0xffff;
        puVar45 = puVar44 + 1;
        *puVar44 = (ushort)uVar27;
        if (uVar27 == 0) {
          *(undefined4 *)((int)param_1 + iVar37 + iVar31 * 4 + 0x1138) = 0;
        }
        iVar37 = iVar37 + 4;
        puVar44 = puVar45;
      } while (puVar45 != (ushort *)((int)param_1 + (iVar31 + (uVar34 >> 4)) * 2 + 0x1d74));
      if (param_3 == 4) {
        param_1[0x61206] = 0;
      }
      else {
        param_1[0x61206] = uVar32 & param_1[0x61206];
      }
      break;
    case 6:
      uVar34 = param_1[param_3 * 5 + 3];
      iVar31 = *(int *)(iVar41 + 0x15034);
      uVar32 = (uint)param_1[param_3 * 5 + 4] >> 4;
      iVar37 = uVar34 * 0x4000;
      FUN_0800a1fc(*(undefined4 *)(iVar41 + 0xfba2c),iVar37 + 0x6000000,uVar32 << 0xe);
      iVar31 = iVar31 + uVar34 * -0x4000;
      piVar20 = param_1 + uVar34 + 0x2d;
      puVar44 = (ushort *)((int)param_1 + uVar34 * 2 + 0x1158);
      do {
        bVar48 = uVar34 < 0x200;
        uVar19 = *puVar44 & ~(ushort)(1 << (param_3 & 0xff));
        *puVar44 = uVar19;
        piVar20 = piVar20 + 1;
        *piVar20 = iVar31;
        iVar31 = iVar31 + -0x4000;
        *(undefined *)((int)param_1 + uVar34 + 0x1958) = 0;
        uVar34 = uVar34 + 1;
        *(ushort *)(param_1 + 0x765) = uVar19 | *(ushort *)(param_1 + 0x765);
        if (bVar48) {
          FUN_08009808(*param_1,*(int *)(*param_1 + 0xfc814) + iVar37,0x4000,0xa4000);
        }
        uVar32 = uVar32 - 1;
        iVar37 = iVar37 + 0x4000;
        puVar44 = puVar44 + 1;
      } while (uVar32 != 0);
      break;
    case 7:
      FUN_0800cb50(*(undefined4 *)(iVar41 + 0xfba30),(param_1[param_3 * 5 + 3] + 0x1800) * 0x4000,
                   param_1[param_3 * 5 + 4] << 10);
      uVar32 = param_1[param_3 * 5 + 4];
      iVar31 = param_1[param_3 * 5 + 3];
      uVar38 = *(undefined4 *)(iVar41 + 0x15034);
      iVar37 = 0;
      puVar44 = (ushort *)((int)param_1 + iVar31 * 2 + 0x1d80);
      do {
        uVar34 = (uint)*puVar44 & ~(1 << (param_3 & 0xff)) & 0xffffU;
        puVar45 = puVar44 + 1;
        *puVar44 = (ushort)uVar34;
        if (uVar34 == 0) {
          *(undefined4 *)((int)param_1 + iVar37 + iVar31 * 4 + 0x1150) = uVar38;
        }
        iVar37 = iVar37 + 4;
        puVar44 = puVar45;
      } while (puVar45 != (ushort *)((int)param_1 + (iVar31 + (uVar32 >> 7)) * 2 + 0x1d80));
      break;
    case 8:
      uVar34 = param_1[param_3 * 5 + 3];
      iVar31 = *(int *)(iVar41 + 0x15034);
      uVar32 = (uint)param_1[param_3 * 5 + 4] >> 4;
      iVar37 = uVar34 * 0x4000;
      uVar19 = ~(ushort)(1 << (param_3 & 0xff));
      FUN_0800a1fc(*(undefined4 *)(iVar41 + 0xfba2c),iVar37 + 0x6000000,uVar32 << 0xe);
      piVar20 = param_1 + uVar34 + 0x4000002d;
      iVar31 = iVar31 + uVar34 * -0x4000;
      puVar44 = (ushort *)((int)param_1 + uVar34 * 2 + 0x1158);
      do {
        bVar48 = uVar34 < 0x200;
        uVar10 = *puVar44 & uVar19;
        *puVar44 = uVar10;
        piVar20 = piVar20 + 1;
        *piVar20 = iVar31;
        iVar31 = iVar31 + -0x4000;
        *(undefined *)((int)param_1 + uVar34 + 0x1958) = 0;
        uVar34 = uVar34 + 1;
        *(ushort *)(param_1 + 0x765) = uVar10 | *(ushort *)(param_1 + 0x765);
        if (bVar48) {
          FUN_08009808(*param_1,*(int *)(*param_1 + 0xfc814) + iVar37,0x4000,0xa4000);
        }
        uVar32 = uVar32 - 1;
        iVar37 = iVar37 + 0x4000;
        puVar44 = puVar44 + 1;
      } while (uVar32 != 0);
      uVar34 = param_1[param_3 * 5 + 5] + param_1[param_3 * 5 + 3];
      uVar32 = (uint)param_1[param_3 * 5 + 4] >> 4;
      iVar37 = uVar34 * 0x4000;
      iVar31 = *(int *)(*param_1 + 0x15034) + uVar34 * -0x4000;
      FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),iVar37 + 0x6000000,uVar32 << 0xe);
      piVar20 = param_1 + uVar34 + 0x4000002d;
      puVar44 = (ushort *)((int)param_1 + uVar34 * 2 + 0x1158);
      do {
        bVar48 = uVar34 < 0x200;
        uVar10 = *puVar44 & uVar19;
        *puVar44 = uVar10;
        piVar20 = piVar20 + 1;
        *piVar20 = iVar31;
        iVar31 = iVar31 + -0x4000;
        *(undefined *)((int)param_1 + uVar34 + 0x1958) = 0;
        uVar34 = uVar34 + 1;
        *(ushort *)(param_1 + 0x765) = uVar10 | *(ushort *)(param_1 + 0x765);
        if (bVar48) {
          FUN_08009808(*param_1,*(int *)(*param_1 + 0xfc814) + iVar37,0x4000,0xa4000);
        }
        uVar32 = uVar32 - 1;
        iVar37 = iVar37 + 0x4000;
        puVar44 = puVar44 + 1;
      } while (uVar32 != 0);
    }
  }
  switch(local_130) {
  case 0:
    switch(param_3) {
    case 0:
    case 1:
    case 2:
    case 3:
      local_138 = (param_3 + 0x40) * 8;
      local_124 = local_138 - 0x80;
      iVar41 = (local_138 + 0x1800) * 0x4000;
      iVar37 = (local_138 + 0x1800) * -0x4000 + 0x6000000;
      break;
    case 4:
      iVar37 = -0x880000;
      iVar41 = 0x6880000;
      local_124 = 0x1a0;
      local_138 = 0x220;
      break;
    case 5:
    case 6:
      local_138 = param_3 + 0x21f;
      local_124 = param_3 + 0x19f;
      iVar41 = (param_3 + 0x1a1f) * 0x4000;
      iVar37 = (param_3 + 0x1a1f) * -0x4000 + 0x6000000;
      break;
    case 7:
      iVar37 = -0x898000;
      iVar41 = 0x6898000;
      local_124 = 0x1a6;
      local_138 = 0x226;
      break;
    case 8:
      iVar37 = -0x8a0000;
      iVar41 = 0x68a0000;
      local_124 = 0x1a8;
      local_138 = 0x228;
      break;
    default:
switchD_0801defc_caseD_9:
      iVar37 = 0;
      iVar41 = 0x6000000;
      iVar31 = 0;
      local_138 = 0;
      local_124 = 0xffffff80;
      goto LAB_0801e69c;
    }
    iVar35 = (local_11c >> 4) << 0xe;
    FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),iVar41,iVar35);
    goto LAB_0801e6f4;
  case 1:
    switch(param_3) {
    case 0:
    case 1:
    case 2:
    case 3:
      local_138 = local_138 * 8;
      local_124 = local_138 - 0x80;
      iVar41 = (local_138 + 0x1800) * 0x4000;
      iVar31 = iVar41 + -0x6000000;
      iVar37 = -iVar31;
      goto LAB_0801e69c;
    default:
switchD_0801de9c_caseD_4:
      iVar37 = 0;
      iVar41 = 0x6000000;
      iVar31 = 0;
      local_138 = 0;
      local_124 = 0xffffff80;
      goto LAB_0801e69c;
    case 5:
    case 6:
      local_138 = (uVar28 & 1) + (uVar28 & 2) * 2;
LAB_0801f138:
      local_130 = local_138 + 2;
      uVar28 = 2;
      iVar41 = (local_138 + 0x1800) * 0x4000;
      iVar37 = iVar41 + -0x6000000;
      local_104 = iVar41 + 0x8000;
      local_128 = -iVar37;
      local_fc = iVar41 + -0x5ff8000;
      local_f4 = local_128 + -0x8000;
      break;
    case 7:
      iVar37 = 0x200000;
      iVar41 = 0x6200000;
      local_104 = 0x6210000;
      uVar28 = 4;
      local_f4 = -0x210000;
      local_128 = -0x200000;
      local_fc = 0x210000;
      local_130 = 0x84;
      local_138 = 0x80;
      break;
    case 8:
      local_f4 = -0x218000;
      local_fc = 0x218000;
      local_104 = 0x6218000;
      iVar41 = 0x6208000;
      local_128 = -0x208000;
      iVar37 = 0x208000;
      local_130 = 0x86;
      uVar28 = 4;
      local_138 = 0x82;
    }
    uVar32 = local_11c >> 4;
    iVar31 = uVar32 << 0xe;
    iVar35 = uVar32 * 2;
    FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),iVar41,iVar31);
    iVar41 = *param_1;
    uVar34 = local_11c;
    if (uVar32 < 0x10) {
      uVar34 = 0;
    }
    if (0xf < uVar32) {
      uVar34 = 1;
    }
    FUN_08009808(iVar41,*(int *)(iVar41 + 0xfc814) + iVar37,iVar31,
                 param_2 - *(int *)(iVar41 + 0xfc810));
    piVar24 = (int *)((int)param_1 + local_138 * 2 + 0x1158);
    piVar20 = (int *)((int)param_1 + local_138 + 0x1958);
    uVar27 = (int)param_1 + local_138 * 2 + 0x1158;
    uVar39 = (int)param_1 + local_138 + 0x1958;
    iVar41 = param_3 * 8;
    uVar19 = (ushort)(1 << (param_3 & 0xff));
    if ((uVar34 & ((param_1 + local_138 + 0x2e + uVar32 <= piVar24 ||
                   (int *)((int)piVar24 + iVar35) <= param_1 + local_138 + 0x2e) &&
                  ((int *)((int)piVar20 + uVar32) <= param_1 + local_138 + 0x2e ||
                  param_1 + local_138 + 0x2e + uVar32 <= piVar20)) &
        (uint)(uVar39 + uVar32 <= uVar27 || uVar27 + iVar35 <= uVar39)) == 0) {
      iVar22 = local_138 * 2 + 0x1158;
      piVar20 = param_1 + local_138 + 0x2d;
      iVar37 = 0;
      iVar25 = iVar41;
      do {
        uVar10 = *(ushort *)((int)param_1 + iVar37 + iVar22);
        piVar20 = piVar20 + 1;
        *piVar20 = param_2 + local_128;
        *(ushort *)((int)param_1 + iVar37 + iVar22) = uVar19 | uVar10;
        *(char *)((int)param_1 + iVar25 + local_138 + param_3 * -8 + 0x1958) = (char)iVar25;
        iVar25 = iVar25 + 1;
        iVar37 = iVar37 + 2;
      } while (iVar25 != uVar32 + iVar41);
    }
    else {
      auVar1 = SIMDExpandImmediate(0,0,0x10);
      auVar2 = SIMDExpandImmediate(0,0,4);
      uVar39 = local_11c >> 8;
      pauVar33 = (undefined (*) [16])((int)param_1 + local_138 * 2 + 0x1158);
      puVar29 = (undefined8 *)((int)param_1 + local_138 + 0x1958);
      uVar27 = uVar39 * 0x10;
      auVar4._4_4_ = CONCAT22(uVar19,uVar19);
      auVar4._0_4_ = CONCAT22(uVar19,uVar19);
      auVar4._8_8_ = 0;
      auVar4 = auVar4 & auVar4 << 0x40;
      uVar40 = 0;
      auVar57._4_4_ = iVar41 + 1;
      auVar57._0_4_ = iVar41;
      auVar57._8_4_ = iVar41 + 2;
      auVar57._12_4_ = iVar41 + 3;
      pauVar43 = pauVar33;
      puVar21 = (undefined8 *)(param_1 + local_138 + 0x2e);
      do {
        auVar63 = VectorAdd(auVar57,auVar2,4);
        pauVar23 = pauVar33 + 1;
        auVar61 = *pauVar33;
        auVar62 = VectorAdd(auVar63,auVar2,4);
        uVar40 = uVar40 + 1;
        uVar49 = VectorCopyNarrow(auVar57,4);
        uVar50 = VectorCopyNarrow(auVar63,4);
        *puVar21 = 0;
        puVar21[1] = 0;
        auVar63 = VectorAdd(auVar62,auVar2,4);
        auVar61 = auVar61 | auVar4;
        pauVar33 = pauVar33 + 2;
        auVar57 = VectorAdd(auVar57,auVar1,4);
        uVar51 = VectorCopyNarrow(auVar62,4);
        uVar52 = VectorCopyNarrow(auVar63,4);
        auVar62 = *pauVar23 | auVar4;
        puVar21[2] = 0;
        puVar21[3] = 0;
        auVar13._8_8_ = uVar50;
        auVar13._0_8_ = uVar49;
        uVar49 = VectorCopyNarrow(auVar13,2);
        auVar17._8_8_ = uVar52;
        auVar17._0_8_ = uVar51;
        uVar50 = VectorCopyNarrow(auVar17,2);
        puVar21[4] = 0;
        puVar21[5] = 0;
        puVar21[6] = 0;
        puVar21[7] = 0;
        *(longlong *)*pauVar43 = auVar61._0_8_;
        *(longlong *)(*pauVar43 + 8) = auVar61._8_8_;
        *(longlong *)pauVar43[1] = auVar62._0_8_;
        *(longlong *)(pauVar43[1] + 8) = auVar62._8_8_;
        *puVar29 = uVar49;
        puVar29[1] = uVar50;
        puVar29 = puVar29 + 2;
        pauVar43 = pauVar43 + 2;
        puVar21 = puVar21 + 8;
      } while (uVar40 < uVar39);
      iVar22 = local_138 + uVar27;
      iVar37 = uVar27 + iVar41;
      if (uVar32 != uVar27) {
        iVar30 = iVar22 - iVar37;
        piVar20 = param_1 + iVar22 + 0x4000002d;
        iVar22 = iVar22 * 2 + 0x1158;
        iVar26 = uVar32 + uVar39 * -0x10 + iVar37;
        iVar25 = 0;
        do {
          uVar10 = *(ushort *)((int)param_1 + iVar25 + iVar22);
          piVar20 = piVar20 + 1;
          *piVar20 = param_2 + local_128;
          *(ushort *)((int)param_1 + iVar25 + iVar22) = uVar19 | uVar10;
          *(char *)((int)param_1 + iVar37 + iVar30 + 0x1958) = (char)iVar37;
          iVar37 = iVar37 + 1;
          iVar25 = iVar25 + 2;
        } while (iVar37 != iVar26);
      }
    }
    FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),local_104,iVar31);
    iVar37 = *param_1;
    FUN_08009808(iVar37,*(int *)(iVar37 + 0xfc814) + local_fc,iVar31,
                 param_2 - *(int *)(iVar37 + 0xfc810));
    piVar24 = (int *)((int)param_1 + local_130 * 2 + 0x1158);
    uVar39 = (int)param_1 + local_130 * 2 + 0x1158;
    piVar20 = (int *)((int)param_1 + local_130 + 0x1958);
    uVar27 = (int)param_1 + local_130 + 0x1958;
    if ((uVar34 & ((uVar27 + uVar32 <= uVar39 || uVar39 + iVar35 <= uVar27) &&
                  ((int *)((int)piVar20 + uVar32) <= param_1 + local_130 + 0x2e ||
                  param_1 + local_130 + 0x2e + uVar32 <= piVar20)) &
        (uint)((int *)((int)piVar24 + iVar35) <= param_1 + local_130 + 0x2e ||
              param_1 + local_130 + 0x2e + uVar32 <= piVar24)) == 0) {
      iVar35 = uVar32 + iVar41;
      piVar20 = param_1 + local_130 + 0x2d;
      iVar31 = local_130 * 2 + 0x1158;
      iVar37 = 0;
      do {
        uVar10 = *(ushort *)((int)param_1 + iVar37 + iVar31);
        piVar20 = piVar20 + 1;
        *piVar20 = param_2 + local_f4;
        *(ushort *)((int)param_1 + iVar37 + iVar31) = uVar19 | uVar10;
        *(char *)((int)param_1 + iVar41 + local_130 + param_3 * -8 + 0x1958) = (char)iVar41;
        iVar41 = iVar41 + 1;
        iVar37 = iVar37 + 2;
      } while (iVar41 != iVar35);
    }
    else {
      auVar1 = SIMDExpandImmediate(0,0,0x10);
      auVar2 = SIMDExpandImmediate(0,0,4);
      uVar27 = local_11c >> 8;
      pauVar33 = (undefined (*) [16])((int)param_1 + local_130 * 2 + 0x1158);
      puVar29 = (undefined8 *)((int)param_1 + local_130 + 0x1958);
      auVar5._4_4_ = CONCAT22(uVar19,uVar19);
      auVar5._0_4_ = CONCAT22(uVar19,uVar19);
      auVar5._8_8_ = 0;
      auVar5 = auVar5 & auVar5 << 0x40;
      uVar34 = uVar27 * 0x10;
      uVar39 = 0;
      auVar58._4_4_ = iVar41 + 1;
      auVar58._0_4_ = iVar41;
      auVar58._8_4_ = iVar41 + 2;
      auVar58._12_4_ = iVar41 + 3;
      pauVar43 = pauVar33;
      puVar21 = (undefined8 *)(param_1 + local_130 + 0x2e);
      do {
        auVar63 = VectorAdd(auVar58,auVar2,4);
        pauVar23 = pauVar33 + 1;
        auVar61 = *pauVar33;
        auVar62 = VectorAdd(auVar63,auVar2,4);
        uVar39 = uVar39 + 1;
        uVar49 = VectorCopyNarrow(auVar58,4);
        uVar50 = VectorCopyNarrow(auVar63,4);
        *puVar21 = 0;
        puVar21[1] = 0;
        auVar63 = VectorAdd(auVar62,auVar2,4);
        auVar61 = auVar61 | auVar5;
        pauVar33 = pauVar33 + 2;
        auVar58 = VectorAdd(auVar58,auVar1,4);
        uVar51 = VectorCopyNarrow(auVar62,4);
        uVar52 = VectorCopyNarrow(auVar63,4);
        auVar62 = *pauVar23 | auVar5;
        puVar21[2] = 0;
        puVar21[3] = 0;
        auVar14._8_8_ = uVar50;
        auVar14._0_8_ = uVar49;
        uVar49 = VectorCopyNarrow(auVar14,2);
        auVar18._8_8_ = uVar52;
        auVar18._0_8_ = uVar51;
        uVar50 = VectorCopyNarrow(auVar18,2);
        puVar21[4] = 0;
        puVar21[5] = 0;
        puVar21[6] = 0;
        puVar21[7] = 0;
        *(longlong *)*pauVar43 = auVar61._0_8_;
        *(longlong *)(*pauVar43 + 8) = auVar61._8_8_;
        *(longlong *)pauVar43[1] = auVar62._0_8_;
        *(longlong *)(pauVar43[1] + 8) = auVar62._8_8_;
        *puVar29 = uVar49;
        puVar29[1] = uVar50;
        puVar29 = puVar29 + 2;
        pauVar43 = pauVar43 + 2;
        puVar21 = puVar21 + 8;
      } while (uVar39 < uVar27);
      iVar37 = local_130 + uVar34;
      iVar41 = uVar34 + iVar41;
      if (uVar32 != uVar34) {
        iVar22 = iVar37 - iVar41;
        iVar31 = iVar37 * 2 + 0x1158;
        piVar20 = param_1 + iVar37 + 0x4000002d;
        iVar37 = uVar32 + uVar27 * -0x10 + iVar41;
        iVar35 = 0;
        do {
          uVar10 = *(ushort *)((int)param_1 + iVar35 + iVar31);
          piVar20 = piVar20 + 1;
          *piVar20 = param_2 + local_f4;
          *(ushort *)((int)param_1 + iVar35 + iVar31) = uVar19 | uVar10;
          *(char *)((int)param_1 + iVar41 + iVar22 + 0x1958) = (char)iVar41;
          iVar41 = iVar41 + 1;
          iVar35 = iVar35 + 2;
        } while (iVar41 != iVar37);
      }
    }
    iVar41 = 8;
    goto LAB_0801de3c;
  case 2:
    switch(param_3) {
    case 0:
    case 1:
      local_138 = ((uVar28 & 1) + 0x20) * 8;
      local_124 = local_138 - 0x80;
      iVar41 = (local_138 + 0x1800) * 0x4000;
      iVar31 = iVar41 + -0x6000000;
      iVar37 = -iVar31;
      break;
    case 2:
    case 3:
      uVar28 = uVar28 & 1;
      local_138 = uVar28 * 8;
      FUN_0800cb50(*(undefined4 *)(iVar41 + 0xfba30),(local_138 + 0x1800) * 0x4000,local_11c << 10);
      uVar32 = local_11c >> 7;
      uVar19 = (ushort)(1 << (param_3 & 0xff));
      if (uVar32 < 8 ||
          param_1 + uVar28 * 4 + 0x760 < param_1 + uVar28 * 8 + 0x454 + uVar32 &&
          param_1 + uVar28 * 8 + 0x454 < (int *)((int)(param_1 + uVar28 * 4 + 0x760) + uVar32 * 2))
      {
        piVar24 = param_1 + local_138 + 0x40000453;
        piVar20 = param_1 + uVar28 * 4 + 0x760;
        do {
          uVar10 = *(ushort *)piVar20;
          piVar24 = piVar24 + 1;
          *piVar24 = param_2;
          param_2 = param_2 + 0x20000;
          piVar36 = (int *)((int)piVar20 + 2);
          *(ushort *)piVar20 = uVar10 | uVar19;
          piVar20 = piVar36;
        } while (piVar36 != (int *)((int)param_1 + (local_138 + uVar32) * 2 + 0x1d80));
      }
      else {
        auVar1 = SIMDExpandImmediate(0,4,0x10);
        uVar34 = local_11c >> 10;
        auVar2 = SIMDExpandImmediate(0,4,8);
        pauVar33 = (undefined (*) [16])(param_1 + uVar28 * 4 + 0x760);
        auVar8._4_4_ = CONCAT22(uVar19,uVar19);
        auVar8._0_4_ = CONCAT22(uVar19,uVar19);
        auVar8._8_8_ = 0;
        uVar27 = 0;
        auVar55._4_4_ = param_2 + 0x20000;
        auVar55._0_4_ = param_2;
        auVar55._8_4_ = param_2 + 0x40000;
        auVar55._12_4_ = param_2 + 0x60000;
        pauVar43 = pauVar33;
        puVar21 = (undefined8 *)(param_1 + uVar28 * 8 + 0x454);
        do {
          auVar61 = *pauVar33;
          pauVar33 = pauVar33 + 1;
          auVar62 = VectorAdd(auVar55,auVar2,4);
          uVar27 = uVar27 + 1;
          auVar61 = auVar61 | auVar8 & auVar8 << 0x40;
          *puVar21 = auVar55._0_8_;
          puVar21[1] = auVar55._8_8_;
          auVar55 = VectorAdd(auVar55,auVar1,4);
          puVar21[2] = auVar62._0_8_;
          puVar21[3] = auVar62._8_8_;
          *(longlong *)*pauVar43 = auVar61._0_8_;
          *(longlong *)(*pauVar43 + 8) = auVar61._8_8_;
          pauVar43 = pauVar43 + 1;
          puVar21 = puVar21 + 4;
        } while (uVar27 < uVar34);
        iVar37 = uVar32 + uVar34 * -8;
        param_2 = param_2 + uVar34 * 0x100000;
        iVar41 = local_138 + uVar34 * 8;
        if (uVar32 != uVar34 * 8) {
          param_1[iVar41 + 0x454] = param_2;
          *(ushort *)(param_1 + uVar34 * 4 + uVar28 * 4 + 0x760) =
               uVar19 | *(ushort *)(param_1 + uVar34 * 4 + uVar28 * 4 + 0x760);
          if (iVar37 != 1) {
            iVar31 = (iVar41 + 1) * 2;
            param_1[iVar41 + 0x455] = param_2 + 0x20000;
            *(ushort *)((int)param_1 + iVar31 + 0x1d80) =
                 uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d80);
            if (iVar37 != 2) {
              param_1[iVar41 + 0x456] = param_2 + 0x40000;
              *(ushort *)(param_1 + uVar34 * 4 + uVar28 * 4 + 0x761) =
                   uVar19 | *(ushort *)(param_1 + uVar34 * 4 + uVar28 * 4 + 0x761);
              if (iVar37 != 3) {
                iVar31 = (iVar41 + 3) * 2;
                param_1[iVar41 + 0x457] = param_2 + 0x60000;
                *(ushort *)((int)param_1 + iVar31 + 0x1d80) =
                     uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d80);
                if (iVar37 != 4) {
                  param_1[iVar41 + 0x458] = param_2 + 0x80000;
                  *(ushort *)(param_1 + uVar34 * 4 + uVar28 * 4 + 0x762) =
                       uVar19 | *(ushort *)(param_1 + uVar34 * 4 + uVar28 * 4 + 0x762);
                  if (iVar37 != 5) {
                    iVar31 = (iVar41 + 5) * 2;
                    param_1[iVar41 + 0x459] = param_2 + 0xa0000;
                    *(ushort *)((int)param_1 + iVar31 + 0x1d80) =
                         uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d80);
                    if (iVar37 != 6) {
                      param_1[iVar41 + 0x45a] = param_2 + 0xc0000;
                      *(ushort *)(param_1 + uVar34 * 4 + uVar28 * 4 + 0x763) =
                           uVar19 | *(ushort *)(param_1 + uVar34 * 4 + uVar28 * 4 + 0x763);
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar28 = 0;
      iVar41 = 7;
      goto LAB_0801de3c;
    case 4:
      iVar31 = 0x400000;
      iVar37 = -0x400000;
      iVar41 = 0x6400000;
      local_124 = 0x80;
      local_138 = 0x100;
      break;
    case 5:
    case 6:
      local_138 = (uVar28 & 1) + 0x100 + (uVar28 & 2) * 2;
      goto LAB_0801f138;
    case 7:
      iVar41 = 1;
      local_138 = 0;
      goto LAB_0801f7b8;
    case 8:
      iVar31 = 0x600000;
      iVar37 = -0x600000;
      iVar41 = 0x6600000;
      local_124 = 0x100;
      local_138 = 0x180;
      break;
    default:
      iVar37 = 0;
      iVar41 = 0x6000000;
      iVar31 = 0;
      local_138 = 0;
      local_124 = 0xffffff80;
    }
    break;
  case 3:
    switch(param_3) {
    case 0:
    case 1:
    case 2:
    case 3:
      uVar28 = local_11c >> 7;
      piVar20 = (int *)((int)param_1 + local_138 * 2 + 0x1d6c);
      uVar32 = param_1[0x9b8c5];
      uVar19 = (ushort)(1 << (param_3 & 0xff));
      if (uVar28 < 8 ||
          piVar20 < param_1 + local_138 + 0x44a + uVar28 &&
          param_1 + local_138 + 0x44a < (int *)((int)piVar20 + uVar28 * 2)) {
        piVar20 = param_1 + local_138 + 0x449;
        puVar44 = (ushort *)((int)param_1 + local_138 * 2 + 0x1d6c);
        do {
          uVar10 = *puVar44;
          piVar20 = piVar20 + 1;
          *piVar20 = param_2;
          param_2 = param_2 + 0x20000;
          puVar45 = puVar44 + 1;
          *puVar44 = uVar10 | uVar19;
          puVar44 = puVar45;
        } while (puVar45 != (ushort *)((int)param_1 + (local_138 + uVar28) * 2 + 0x1d6c));
      }
      else {
        uVar34 = local_11c >> 10;
        pauVar33 = (undefined (*) [16])((int)param_1 + local_138 * 2 + 0x1d6c);
        auVar6._4_4_ = CONCAT22(uVar19,uVar19);
        auVar6._0_4_ = CONCAT22(uVar19,uVar19);
        auVar6._8_8_ = 0;
        auVar1 = SIMDExpandImmediate(0,4,0x10);
        auVar2 = SIMDExpandImmediate(0,4,8);
        uVar27 = 0;
        auVar53._4_4_ = param_2 + 0x20000;
        auVar53._0_4_ = param_2;
        auVar53._8_4_ = param_2 + 0x40000;
        auVar53._12_4_ = param_2 + 0x60000;
        puVar21 = (undefined8 *)(param_1 + local_138 + 0x44a);
        pauVar43 = pauVar33;
        do {
          auVar61 = *pauVar33;
          pauVar33 = pauVar33 + 1;
          auVar62 = VectorAdd(auVar53,auVar2,4);
          uVar27 = uVar27 + 1;
          auVar61 = auVar61 | auVar6 & auVar6 << 0x40;
          *puVar21 = auVar53._0_8_;
          puVar21[1] = auVar53._8_8_;
          auVar53 = VectorAdd(auVar53,auVar1,4);
          puVar21[2] = auVar62._0_8_;
          puVar21[3] = auVar62._8_8_;
          *(longlong *)*pauVar43 = auVar61._0_8_;
          *(longlong *)(*pauVar43 + 8) = auVar61._8_8_;
          pauVar43 = pauVar43 + 1;
          puVar21 = puVar21 + 4;
        } while (uVar27 < uVar34);
        iVar37 = uVar28 + uVar34 * -8;
        param_2 = param_2 + uVar34 * 0x100000;
        iVar41 = uVar34 * 8 + local_138;
        if (uVar28 != uVar34 * 8) {
          param_1[iVar41 + 0x44a] = param_2;
          *(ushort *)((int)param_1 + iVar41 * 2 + 0x1d6c) =
               uVar19 | *(ushort *)((int)param_1 + iVar41 * 2 + 0x1d6c);
          if (iVar37 != 1) {
            iVar31 = (iVar41 + 1) * 2;
            param_1[iVar41 + 1099] = param_2 + 0x20000;
            *(ushort *)((int)param_1 + iVar31 + 0x1d6c) =
                 uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d6c);
            if (iVar37 != 2) {
              iVar31 = (iVar41 + 2) * 2;
              param_1[iVar41 + 0x44c] = param_2 + 0x40000;
              *(ushort *)((int)param_1 + iVar31 + 0x1d6c) =
                   uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d6c);
              if (iVar37 != 3) {
                iVar31 = (iVar41 + 3) * 2;
                param_1[iVar41 + 0x44d] = param_2 + 0x60000;
                *(ushort *)((int)param_1 + iVar31 + 0x1d6c) =
                     uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d6c);
                if (iVar37 != 4) {
                  iVar31 = (iVar41 + 4) * 2;
                  param_1[iVar41 + 0x44e] = param_2 + 0x80000;
                  *(ushort *)((int)param_1 + iVar31 + 0x1d6c) =
                       uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d6c);
                  if (iVar37 != 5) {
                    iVar31 = (iVar41 + 5) * 2;
                    param_1[iVar41 + 0x44f] = param_2 + 0xa0000;
                    *(ushort *)((int)param_1 + iVar31 + 0x1d6c) =
                         uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d6c);
                    if (iVar37 != 6) {
                      iVar37 = (iVar41 + 6) * 2;
                      param_1[iVar41 + 0x450] = param_2 + 0xc0000;
                      *(ushort *)((int)param_1 + iVar37 + 0x1d6c) =
                           uVar19 | *(ushort *)((int)param_1 + iVar37 + 0x1d6c);
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar34 = 0xff << (param_3 << 3 & 0xff);
      param_1[0x61202] =
           param_1[0x61202] | (uVar32 >> (param_3 << 3 & 0xff) & 0xff) << (local_138 << 3);
      uVar28 = 0;
      param_1[0x61204] = uVar34 | param_1[0x61204];
      iVar41 = 4;
      param_1[0x9b8c5] = uVar32 & ~uVar34;
      goto LAB_0801de3c;
    case 4:
      local_138 = 0;
      break;
    case 5:
    case 6:
      local_138 = (uVar28 & 1) + (uVar28 & 2) * 2;
      break;
    case 7:
switchD_0801defc_caseD_0:
      iVar41 = 10;
      goto LAB_0801de30;
    case 8:
      iVar37 = 1;
      iVar41 = 3;
LAB_0801df60:
      uVar28 = local_11c >> 4;
      piVar20 = (int *)((int)param_1 + iVar37 * 2 + 0x1d68);
      iVar31 = iVar37 + 0x448;
      uVar19 = (ushort)(1 << (param_3 & 0xff));
      puVar44 = (ushort *)((int)param_1 + iVar37 * 2 + 0x1d68);
      if (uVar28 < 8 ||
          piVar20 < param_1 + iVar37 + 0x448 + uVar28 &&
          param_1 + iVar37 + 0x448 < (int *)((int)piVar20 + uVar28 * 2)) {
        piVar20 = param_1 + iVar37 + 0x447;
        puVar45 = puVar44;
        do {
          uVar10 = *puVar45;
          piVar20 = piVar20 + 1;
          *piVar20 = param_2;
          param_2 = param_2 + 0x2000;
          puVar46 = puVar45 + 1;
          *puVar45 = uVar10 | uVar19;
          puVar45 = puVar46;
        } while (puVar46 != puVar44 + uVar28);
      }
      else {
        uVar34 = local_11c >> 7;
        pauVar33 = (undefined (*) [16])((int)param_1 + iVar37 * 2 + 0x1d68);
        auVar1 = SIMDExpandImmediate(0,4,1);
        auVar2 = SIMDExpandImmediate(0,2,0x80);
        auVar61._4_4_ = CONCAT22(uVar19,uVar19);
        auVar61._0_4_ = CONCAT22(uVar19,uVar19);
        auVar61._8_8_ = 0;
        uVar32 = uVar34 * 8;
        uVar27 = 0;
        auVar62._4_4_ = param_2 + 0x2000;
        auVar62._0_4_ = param_2;
        auVar62._8_4_ = param_2 + 0x4000;
        auVar62._12_4_ = param_2 + 0x6000;
        pauVar43 = pauVar33;
        puVar21 = (undefined8 *)(param_1 + iVar37 + 0x448);
        do {
          auVar63 = *pauVar33;
          pauVar33 = pauVar33 + 1;
          auVar60 = VectorAdd(auVar62,auVar2,4);
          uVar27 = uVar27 + 1;
          auVar63 = auVar63 | auVar61 & auVar61 << 0x40;
          *puVar21 = auVar62._0_8_;
          puVar21[1] = auVar62._8_8_;
          auVar62 = VectorAdd(auVar62,auVar1,4);
          puVar21[2] = auVar60._0_8_;
          puVar21[3] = auVar60._8_8_;
          *(longlong *)*pauVar43 = auVar63._0_8_;
          *(longlong *)(*pauVar43 + 8) = auVar63._8_8_;
          pauVar43 = pauVar43 + 1;
          puVar21 = puVar21 + 4;
        } while (uVar27 < uVar34);
        iVar35 = uVar28 + uVar34 * -8;
        param_2 = param_2 + uVar34 * 0x10000;
        if (uVar28 != uVar32) {
          param_1[iVar31 + uVar34 * 8] = param_2;
          iVar22 = uVar32 + 1;
          puVar44[uVar34 * 8] = uVar19 | puVar44[uVar34 * 8];
          if (iVar35 != 1) {
            param_1[iVar31 + iVar22] = param_2 + 0x2000;
            iVar25 = uVar32 + 2;
            puVar44[iVar22] = uVar19 | puVar44[iVar22];
            if (iVar35 != 2) {
              param_1[iVar31 + iVar25] = param_2 + 0x4000;
              iVar22 = uVar32 + 3;
              puVar44[iVar25] = uVar19 | puVar44[iVar25];
              if (iVar35 != 3) {
                param_1[iVar31 + iVar22] = param_2 + 0x6000;
                iVar25 = uVar32 + 4;
                puVar44[iVar22] = uVar19 | puVar44[iVar22];
                if (iVar35 != 4) {
                  param_1[iVar31 + iVar25] = param_2 + 0x8000;
                  iVar22 = uVar32 + 5;
                  puVar44[iVar25] = uVar19 | puVar44[iVar25];
                  if (iVar35 != 5) {
                    param_1[iVar31 + iVar22] = param_2 + 0xa000;
                    iVar25 = uVar32 + 6;
                    puVar44[iVar22] = uVar19 | puVar44[iVar22];
                    if (iVar35 != 6) {
                      param_1[iVar31 + iVar25] = param_2 + 0xc000;
                      puVar44[iVar25] = uVar19 | puVar44[iVar25];
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_138 = 0;
      param_1[iVar37 * 0x203d0 + 0x76b] = param_1[iVar37 + 0x448];
      uVar28 = local_138;
      local_11c = local_11c >> 1;
      goto LAB_0801de3c;
    default:
      goto switchD_0801de08_caseD_7;
    }
    uVar28 = local_11c >> 4;
    piVar20 = (int *)((int)param_1 + local_138 * 2 + 0x1d74);
    uVar32 = 1 << (param_3 & 0xff);
    uVar19 = (ushort)uVar32;
    if (uVar28 < 8 ||
        piVar20 < param_1 + local_138 + 0x44e + uVar28 &&
        param_1 + local_138 + 0x44e < (int *)((int)piVar20 + uVar28 * 2)) {
      piVar20 = param_1 + local_138 + 0x44d;
      puVar44 = (ushort *)((int)param_1 + local_138 * 2 + 0x1d74);
      do {
        uVar10 = *puVar44;
        piVar20 = piVar20 + 1;
        *piVar20 = param_2;
        param_2 = param_2 + 0x4000;
        puVar45 = puVar44 + 1;
        *puVar44 = uVar10 | uVar19;
        puVar44 = puVar45;
      } while (puVar45 != (ushort *)((int)param_1 + (local_138 + uVar28) * 2 + 0x1d74));
    }
    else {
      uVar34 = local_11c >> 7;
      pauVar33 = (undefined (*) [16])((int)param_1 + local_138 * 2 + 0x1d74);
      auVar1 = SIMDExpandImmediate(0,4,2);
      auVar2 = SIMDExpandImmediate(0,4,1);
      auVar63._4_4_ = CONCAT22(uVar19,uVar19);
      auVar63._0_4_ = CONCAT22(uVar19,uVar19);
      auVar63._8_8_ = 0;
      uVar27 = 0;
      auVar60._4_4_ = param_2 + 0x4000;
      auVar60._0_4_ = param_2;
      auVar60._8_4_ = param_2 + 0x8000;
      auVar60._12_4_ = param_2 + 0xc000;
      puVar21 = (undefined8 *)(param_1 + local_138 + 0x44e);
      pauVar43 = pauVar33;
      do {
        auVar61 = *pauVar43;
        pauVar43 = pauVar43 + 1;
        auVar62 = VectorAdd(auVar60,auVar2,4);
        uVar27 = uVar27 + 1;
        auVar61 = auVar61 | auVar63 & auVar63 << 0x40;
        *puVar21 = auVar60._0_8_;
        puVar21[1] = auVar60._8_8_;
        auVar60 = VectorAdd(auVar60,auVar1,4);
        puVar21[2] = auVar62._0_8_;
        puVar21[3] = auVar62._8_8_;
        *(longlong *)*pauVar33 = auVar61._0_8_;
        *(longlong *)(*pauVar33 + 8) = auVar61._8_8_;
        pauVar33 = pauVar33 + 1;
        puVar21 = puVar21 + 4;
      } while (uVar27 < uVar34);
      iVar37 = uVar28 + uVar34 * -8;
      param_2 = param_2 + uVar34 * 0x20000;
      iVar41 = local_138 + uVar34 * 8;
      if (uVar28 != uVar34 * 8) {
        param_1[iVar41 + 0x44e] = param_2;
        *(ushort *)((int)param_1 + iVar41 * 2 + 0x1d74) =
             uVar19 | *(ushort *)((int)param_1 + iVar41 * 2 + 0x1d74);
        if (iVar37 != 1) {
          iVar31 = (iVar41 + 1) * 2;
          param_1[iVar41 + 0x44f] = param_2 + 0x4000;
          *(ushort *)((int)param_1 + iVar31 + 0x1d74) =
               uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d74);
          if (iVar37 != 2) {
            iVar31 = (iVar41 + 2) * 2;
            param_1[iVar41 + 0x450] = param_2 + 0x8000;
            *(ushort *)((int)param_1 + iVar31 + 0x1d74) =
                 uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d74);
            if (iVar37 != 3) {
              iVar31 = (iVar41 + 3) * 2;
              param_1[iVar41 + 0x451] = param_2 + 0xc000;
              *(ushort *)((int)param_1 + iVar31 + 0x1d74) =
                   uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d74);
              if (iVar37 != 4) {
                iVar31 = (iVar41 + 4) * 2;
                param_1[iVar41 + 0x452] = param_2 + 0x10000;
                *(ushort *)((int)param_1 + iVar31 + 0x1d74) =
                     uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d74);
                if (iVar37 != 5) {
                  iVar31 = (iVar41 + 5) * 2;
                  param_1[iVar41 + 0x453] = param_2 + 0x14000;
                  *(ushort *)((int)param_1 + iVar31 + 0x1d74) =
                       uVar19 | *(ushort *)((int)param_1 + iVar31 + 0x1d74);
                  if (iVar37 != 6) {
                    iVar37 = (iVar41 + 6) * 2;
                    param_1[iVar41 + 0x454] = param_2 + 0x18000;
                    *(ushort *)((int)param_1 + iVar37 + 0x1d74) =
                         uVar19 | *(ushort *)((int)param_1 + iVar37 + 0x1d74);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (param_3 == 4) {
      uVar28 = 0;
      param_1[0x61203] = param_1[0x9b8c6] & 0xfU | param_1[0x61203];
      param_1[0x9b8c6] = param_1[0x9b8c6] & 0xffffff00;
      iVar41 = 5;
      param_1[0x61206] = 0xf;
    }
    else {
      uVar28 = (param_3 + 0x1ffffffc) * 8;
      param_1[0x61203] =
           param_1[0x61203] | ((uint)param_1[0x9b8c6] >> (uVar28 & 0xff) & 1) << (local_138 << 3);
      param_1[0x9b8c6] = param_1[0x9b8c6] & ~(0xff << (uVar28 & 0xff));
      uVar28 = 0;
      param_1[0x61206] = uVar32 | param_1[0x61206];
      iVar41 = 5;
    }
    goto LAB_0801de3c;
  case 4:
    switch(param_3) {
    case 0:
    case 1:
    case 7:
    case 8:
      goto switchD_0801defc_caseD_0;
    case 2:
      iVar31 = 0x200000;
      iVar37 = -0x200000;
      iVar41 = 0x6200000;
      local_124 = 0;
      local_138 = 0x80;
      break;
    case 3:
      iVar31 = 0x600000;
      iVar37 = -0x600000;
      iVar41 = 0x6600000;
      local_124 = 0x100;
      local_138 = 0x180;
      break;
    case 4:
      iVar41 = 0;
      local_138 = 0;
      local_11c = local_11c >> 1;
      goto LAB_0801f7b8;
    case 5:
    case 6:
      iVar41 = 0;
      local_138 = (uVar28 & 1) << 1;
LAB_0801f7b8:
      iVar37 = local_138 + iVar41 * 4;
      uVar28 = local_11c >> 3;
      puVar21 = (undefined8 *)(param_1 + iVar37 + 0x440);
      pauVar43 = (undefined (*) [16])((int)param_1 + iVar37 * 2 + 0x1d58);
      iVar31 = iVar41 + 0x110;
      uVar19 = (ushort)(1 << (param_3 & 0xff));
      iVar37 = iVar41 * 8 + 0x1d58;
      if (uVar28 < 8 ||
          pauVar43 < (undefined (*) [16])((int)puVar21 + uVar28 * 4) &&
          puVar21 < *pauVar43 + uVar28 * 2) {
        piVar20 = param_1 + iVar31 * 4 + local_138 + 0x3fffffff;
        puVar44 = (ushort *)((int)param_1 + local_138 * 2 + iVar37);
        do {
          uVar10 = *puVar44;
          piVar20 = piVar20 + 1;
          *piVar20 = param_2;
          param_2 = param_2 + 0x2000;
          puVar45 = puVar44 + 1;
          *puVar44 = uVar10 | uVar19;
          puVar44 = puVar45;
        } while (puVar45 != (ushort *)((int)param_1 + (uVar28 + local_138) * 2 + iVar37));
      }
      else {
        auVar1 = SIMDExpandImmediate(0,4,1);
        auVar2 = SIMDExpandImmediate(0,2,0x80);
        auVar7._4_4_ = CONCAT22(uVar19,uVar19);
        auVar7._0_4_ = CONCAT22(uVar19,uVar19);
        auVar7._8_8_ = 0;
        uVar34 = 0;
        uVar32 = local_11c >> 6;
        auVar54._4_4_ = param_2 + 0x2000;
        auVar54._0_4_ = param_2;
        auVar54._8_4_ = param_2 + 0x4000;
        auVar54._12_4_ = param_2 + 0x6000;
        pauVar33 = pauVar43;
        do {
          auVar61 = *pauVar43;
          pauVar43 = pauVar43 + 1;
          auVar62 = VectorAdd(auVar54,auVar2,4);
          uVar34 = uVar34 + 1;
          auVar61 = auVar61 | auVar7 & auVar7 << 0x40;
          *puVar21 = auVar54._0_8_;
          puVar21[1] = auVar54._8_8_;
          auVar54 = VectorAdd(auVar54,auVar1,4);
          puVar21[2] = auVar62._0_8_;
          puVar21[3] = auVar62._8_8_;
          *(longlong *)*pauVar33 = auVar61._0_8_;
          *(longlong *)(*pauVar33 + 8) = auVar61._8_8_;
          pauVar33 = pauVar33 + 1;
          puVar21 = puVar21 + 4;
        } while (uVar34 < uVar32);
        iVar35 = uVar28 + uVar32 * -8;
        param_2 = param_2 + uVar32 * 0x10000;
        iVar22 = uVar32 * 8 + local_138;
        if (uVar28 != uVar32 * 8) {
          param_1[iVar31 * 4 + iVar22] = param_2;
          *(ushort *)((int)param_1 + iVar22 * 2 + iVar37) =
               uVar19 | *(ushort *)((int)param_1 + iVar22 * 2 + iVar37);
          if (iVar35 != 1) {
            iVar25 = (iVar22 + 1) * 2;
            param_1[iVar31 * 4 + iVar22 + 1] = param_2 + 0x2000;
            *(ushort *)((int)param_1 + iVar25 + iVar37) =
                 uVar19 | *(ushort *)((int)param_1 + iVar25 + iVar37);
            if (iVar35 != 2) {
              iVar25 = (iVar22 + 2) * 2;
              param_1[iVar31 * 4 + iVar22 + 2] = param_2 + 0x4000;
              *(ushort *)((int)param_1 + iVar25 + iVar37) =
                   uVar19 | *(ushort *)((int)param_1 + iVar25 + iVar37);
              if (iVar35 != 3) {
                iVar25 = (iVar22 + 3) * 2;
                param_1[iVar31 * 4 + iVar22 + 3] = param_2 + 0x6000;
                *(ushort *)((int)param_1 + iVar25 + iVar37) =
                     uVar19 | *(ushort *)((int)param_1 + iVar25 + iVar37);
                if (iVar35 != 4) {
                  iVar25 = (iVar22 + 4) * 2;
                  param_1[iVar31 * 4 + iVar22 + 4] = param_2 + 0x8000;
                  *(ushort *)((int)param_1 + iVar25 + iVar37) =
                       uVar19 | *(ushort *)((int)param_1 + iVar25 + iVar37);
                  if (iVar35 != 5) {
                    iVar25 = (iVar22 + 5) * 2;
                    param_1[iVar31 * 4 + iVar22 + 5] = param_2 + 0xa000;
                    *(ushort *)((int)param_1 + iVar25 + iVar37) =
                         uVar19 | *(ushort *)((int)param_1 + iVar25 + iVar37);
                    if (iVar35 != 6) {
                      iVar35 = (iVar22 + 6) * 2;
                      param_1[iVar31 * 4 + iVar22 + 6] = param_2 + 0xc000;
                      *(ushort *)((int)param_1 + iVar35 + iVar37) =
                           uVar19 | *(ushort *)((int)param_1 + iVar35 + iVar37);
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar28 = 0;
      iVar37 = param_1[iVar41 * 0x203d0 + 0x76a];
      param_1[iVar41 * 0x203d0 + 0x78f] =
           *(int *)(iVar37 + ((int)((uint)*(ushort *)(param_1 + iVar41 * 0x203d0 + 0x7a8) << 0x12)
                             >> 0x1f) * -8);
      param_1[iVar41 * 0x203d0 + 0x7b1] =
           *(int *)(iVar37 + (((int)((uint)*(ushort *)(param_1 + iVar41 * 0x203d0 + 0x7ca) << 0x12)
                              >> 0x1f) * -2 + 1) * 4);
      param_1[iVar41 * 0x203d0 + 0x7d3] = *(int *)(iVar37 + 8);
      param_1[iVar41 * 0x203d0 + 0x7f5] = *(int *)(iVar37 + 0xc);
      goto LAB_0801de3c;
    default:
      goto switchD_0801defc_caseD_9;
    }
    break;
  case 5:
    if (8 < param_3) goto switchD_0801de9c_caseD_4;
    uVar28 = 1 << (param_3 & 0xff);
    if ((uVar28 & 0x19f) != 0) goto switchD_0801defc_caseD_0;
    if ((uVar28 & 0x60) != 0) {
      iVar41 = 2;
      iVar37 = 0;
      goto LAB_0801df60;
    }
    iVar41 = 0x6000000;
    local_124 = 0xffffff80;
    iVar37 = 0;
    iVar31 = 0;
    local_138 = 0;
    break;
  case 6:
    iVar41 = 9;
LAB_0801de30:
    local_138 = 0;
    uVar28 = 0;
    goto LAB_0801de3c;
  default:
switchD_0801de08_caseD_7:
    iVar37 = 0;
    iVar41 = 0x6000000;
    local_138 = 0;
    local_124 = 0xffffff80;
    iVar31 = iVar37;
  }
LAB_0801e69c:
  iVar35 = (local_11c >> 4) << 0xe;
  FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),iVar41,iVar35);
  iVar41 = *param_1;
  FUN_08009808(iVar41,*(int *)(iVar41 + 0xfc814) + iVar31,iVar35,
               param_2 - *(int *)(iVar41 + 0xfc810));
LAB_0801e6f4:
  uVar34 = local_11c >> 4;
  iVar41 = uVar34 * 2;
  piVar24 = (int *)((int)param_1 + local_138 + 0x1958);
  piVar20 = (int *)((int)param_1 + local_138 * 2 + 0x1158);
  uVar32 = (int)param_1 + local_138 * 2 + 0x1158;
  uVar28 = (int)param_1 + local_138 + 0x1958;
  uVar19 = (ushort)(1 << (param_3 & 0xff));
  iVar31 = param_3 * 8;
  if ((uVar34 < 0x10 ||
      (uVar32 < uVar28 + uVar34 && uVar28 < uVar32 + iVar41 ||
      param_1 + local_138 + 0x2e < (int *)((int)piVar24 + uVar34) &&
      piVar24 < param_1 + local_138 + 0x2e + uVar34)) ||
      param_1 + local_138 + 0x2e < (int *)((int)piVar20 + iVar41) &&
      piVar20 < param_1 + local_138 + 0x2e + uVar34) {
    piVar20 = param_1 + local_138 + 0x2d;
    iVar25 = local_138 * 2 + 0x1158;
    iVar22 = 0;
    iVar26 = iVar31;
    do {
      uVar10 = *(ushort *)((int)param_1 + iVar22 + iVar25);
      piVar20 = piVar20 + 1;
      *piVar20 = param_2 + iVar37;
      *(ushort *)((int)param_1 + iVar22 + iVar25) = uVar19 | uVar10;
      *(char *)((int)param_1 + iVar26 + local_138 + param_3 * -8 + 0x1958) = (char)iVar26;
      iVar26 = iVar26 + 1;
      iVar22 = iVar22 + 2;
    } while (iVar26 != uVar34 + iVar31);
  }
  else {
    auVar1 = SIMDExpandImmediate(0,0,0x10);
    auVar2 = SIMDExpandImmediate(0,0,4);
    pauVar33 = (undefined (*) [16])((int)param_1 + local_138 * 2 + 0x1158);
    puVar29 = (undefined8 *)((int)param_1 + local_138 + 0x1958);
    uVar28 = uVar34 & 0xfffffff0;
    auVar3._4_4_ = CONCAT22(uVar19,uVar19);
    auVar3._0_4_ = CONCAT22(uVar19,uVar19);
    auVar3._8_8_ = 0;
    auVar3 = auVar3 & auVar3 << 0x40;
    auVar56._4_4_ = iVar31 + 1;
    auVar56._0_4_ = iVar31;
    auVar56._8_4_ = iVar31 + 2;
    auVar56._12_4_ = iVar31 + 3;
    local_e4 = 0;
    puVar21 = (undefined8 *)(param_1 + local_138 + 0x2e);
    pauVar43 = pauVar33;
    do {
      auVar62 = VectorAdd(auVar56,auVar2,4);
      auVar61 = VectorAdd(auVar62,auVar2,4);
      local_e4 = local_e4 + 1;
      uVar49 = VectorCopyNarrow(auVar56,4);
      uVar50 = VectorCopyNarrow(auVar62,4);
      auVar62 = VectorAdd(auVar61,auVar2,4);
      auVar56 = VectorAdd(auVar56,auVar1,4);
      auVar63 = *pauVar33 | auVar3;
      uVar51 = VectorCopyNarrow(auVar61,4);
      uVar52 = VectorCopyNarrow(auVar62,4);
      auVar61 = pauVar33[1] | auVar3;
      *puVar21 = 0;
      puVar21[1] = 0;
      auVar11._8_8_ = uVar50;
      auVar11._0_8_ = uVar49;
      uVar49 = VectorCopyNarrow(auVar11,2);
      auVar15._8_8_ = uVar52;
      auVar15._0_8_ = uVar51;
      uVar50 = VectorCopyNarrow(auVar15,2);
      pauVar33 = pauVar33 + 2;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      puVar21[6] = 0;
      puVar21[7] = 0;
      *(longlong *)*pauVar43 = auVar63._0_8_;
      *(longlong *)(*pauVar43 + 8) = auVar63._8_8_;
      *(longlong *)pauVar43[1] = auVar61._0_8_;
      *(longlong *)(pauVar43[1] + 8) = auVar61._8_8_;
      *puVar29 = uVar49;
      puVar29[1] = uVar50;
      puVar29 = puVar29 + 2;
      puVar21 = puVar21 + 8;
      pauVar43 = pauVar43 + 2;
    } while (local_e4 < local_11c >> 8);
    iVar22 = local_138 + uVar28;
    iVar25 = uVar28 + iVar31;
    if (uVar34 != uVar28) {
      iVar42 = iVar22 - iVar25;
      iVar26 = iVar25 + (uVar34 - uVar28);
      iVar30 = 0;
      piVar20 = param_1 + iVar22 + 0x4000002d;
      iVar22 = iVar22 * 2 + 0x1158;
      do {
        uVar10 = *(ushort *)((int)param_1 + iVar30 + iVar22);
        piVar20 = piVar20 + 1;
        *piVar20 = param_2 + iVar37;
        *(ushort *)((int)param_1 + iVar30 + iVar22) = uVar19 | uVar10;
        *(char *)((int)param_1 + iVar25 + iVar42 + 0x1958) = (char)iVar25;
        iVar25 = iVar25 + 1;
        iVar30 = iVar30 + 2;
      } while (iVar25 != iVar26);
    }
  }
  if (local_124 < 0x80) {
    iVar37 = (local_138 + 0x1808) * 0x4000;
    iVar22 = iVar37 + -0x6000000;
    FUN_0800a1fc(*(undefined4 *)(*param_1 + 0xfba2c),iVar37,iVar35);
    iVar37 = *param_1;
    FUN_08009808(iVar37,*(int *)(iVar37 + 0xfc814) + iVar22,iVar35,
                 param_2 - *(int *)(iVar37 + 0xfc810));
    uVar32 = (int)param_1 + local_138 * 2 + 0x1168;
    piVar20 = (int *)((int)param_1 + local_138 * 2 + 0x1168);
    param_2 = param_2 - iVar22;
    piVar24 = (int *)((int)param_1 + local_138 + 0x1960);
    uVar28 = (int)param_1 + local_138 + 0x1960;
    if ((uVar34 < 0x10 ||
        (uVar32 < uVar28 + uVar34 && uVar28 < uVar32 + iVar41 ||
        param_1 + local_138 + 0x36 < (int *)((int)piVar24 + uVar34) &&
        piVar24 < param_1 + local_138 + 0x36 + uVar34)) ||
        param_1 + local_138 + 0x36 < (int *)((int)piVar20 + iVar41) &&
        piVar20 < param_1 + local_138 + 0x36 + uVar34) {
      iVar35 = uVar34 + iVar31;
      piVar20 = param_1 + local_138 + 0x35;
      iVar41 = (int)param_1 + local_138 + 0x1958;
      iVar37 = (int)param_1 + local_138 * 2 + 0x1158;
      do {
        uVar10 = *(ushort *)(iVar37 + 0x10);
        piVar20 = piVar20 + 1;
        *piVar20 = param_2;
        *(ushort *)(iVar37 + 0x10) = uVar19 | uVar10;
        *(char *)(iVar41 + 8) = (char)iVar31;
        iVar31 = iVar31 + 1;
        iVar41 = iVar41 + 1;
        iVar37 = iVar37 + 2;
      } while (iVar31 != iVar35);
    }
    else {
      auVar1 = SIMDExpandImmediate(0,0,0x10);
      auVar2 = SIMDExpandImmediate(0,0,4);
      pauVar33 = (undefined (*) [16])((int)param_1 + local_138 * 2 + 0x1168);
      puVar29 = (undefined8 *)((int)param_1 + local_138 + 0x1960);
      uVar28 = uVar34 & 0xfffffff0;
      auVar9._4_4_ = CONCAT22(uVar19,uVar19);
      auVar9._0_4_ = CONCAT22(uVar19,uVar19);
      auVar9._8_8_ = 0;
      auVar9 = auVar9 & auVar9 << 0x40;
      uVar32 = 0;
      auVar59._4_4_ = iVar31 + 1;
      auVar59._0_4_ = iVar31;
      auVar59._8_4_ = iVar31 + 2;
      auVar59._12_4_ = iVar31 + 3;
      puVar21 = (undefined8 *)(param_1 + local_138 + 0x36);
      pauVar43 = pauVar33;
      do {
        auVar63 = VectorAdd(auVar59,auVar2,4);
        pauVar23 = pauVar33 + 1;
        auVar61 = *pauVar33;
        auVar62 = VectorAdd(auVar63,auVar2,4);
        uVar32 = uVar32 + 1;
        uVar49 = VectorCopyNarrow(auVar59,4);
        uVar50 = VectorCopyNarrow(auVar63,4);
        *puVar21 = 0;
        puVar21[1] = 0;
        auVar63 = VectorAdd(auVar62,auVar2,4);
        auVar61 = auVar61 | auVar9;
        pauVar33 = pauVar33 + 2;
        auVar59 = VectorAdd(auVar59,auVar1,4);
        uVar51 = VectorCopyNarrow(auVar62,4);
        uVar52 = VectorCopyNarrow(auVar63,4);
        auVar62 = *pauVar23 | auVar9;
        puVar21[2] = 0;
        puVar21[3] = 0;
        auVar12._8_8_ = uVar50;
        auVar12._0_8_ = uVar49;
        uVar49 = VectorCopyNarrow(auVar12,2);
        auVar16._8_8_ = uVar52;
        auVar16._0_8_ = uVar51;
        uVar50 = VectorCopyNarrow(auVar16,2);
        puVar21[4] = 0;
        puVar21[5] = 0;
        puVar21[6] = 0;
        puVar21[7] = 0;
        *(longlong *)*pauVar43 = auVar61._0_8_;
        *(longlong *)(*pauVar43 + 8) = auVar61._8_8_;
        *(longlong *)pauVar43[1] = auVar62._0_8_;
        *(longlong *)(pauVar43[1] + 8) = auVar62._8_8_;
        *puVar29 = uVar49;
        puVar29[1] = uVar50;
        puVar29 = puVar29 + 2;
        puVar21 = puVar21 + 8;
        pauVar43 = pauVar43 + 2;
      } while (uVar32 < local_11c >> 8);
      iVar31 = uVar28 + iVar31;
      iVar41 = local_138 + 8 + uVar28;
      if (uVar34 != uVar28) {
        iVar35 = iVar41 - iVar31;
        iVar37 = iVar41 * 2 + 0x1158;
        piVar20 = param_1 + iVar41 + 0x4000002d;
        iVar22 = iVar31 + (uVar34 - uVar28);
        iVar41 = 0;
        do {
          uVar10 = *(ushort *)((int)param_1 + iVar41 + iVar37);
          piVar20 = piVar20 + 1;
          *piVar20 = param_2;
          *(ushort *)((int)param_1 + iVar41 + iVar37) = uVar19 | uVar10;
          *(char *)((int)param_1 + iVar31 + iVar35 + 0x1958) = (char)iVar31;
          iVar31 = iVar31 + 1;
          iVar41 = iVar41 + 2;
        } while (iVar31 != iVar22);
      }
    }
  }
  iVar41 = 6;
  uVar28 = 0;
LAB_0801de3c:
  param_1[param_3 * 5 + 2] = (int)param_4;
  param_1[param_3 * 5 + 1] = iVar41;
  param_1[param_3 * 5 + 3] = local_138;
  param_1[param_3 * 5 + 4] = local_11c;
  param_1[param_3 * 5 + 5] = uVar28;
  return;
}


