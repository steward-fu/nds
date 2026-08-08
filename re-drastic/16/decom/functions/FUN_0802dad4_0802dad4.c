/*
 * Ghidra decompilation
 *
 * Function : FUN_0802dad4
 * Address  : 0802dad4
 * Program  : drastic16
 */


void FUN_0802dad4(int param_1,undefined (*param_2) [16],uint *param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined (*pauVar11) [16];
  undefined (*pauVar12) [16];
  uint uVar13;
  uint uVar14;
  undefined (*pauVar15) [16];
  uint uVar16;
  uint uVar20;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  undefined8 auStack_d8 [2];
  undefined auStack_c4 [4];
  undefined8 local_c0 [13];
  undefined local_58 [16];
  undefined local_48 [16];
  uint *local_38;
  uint local_34;
  undefined4 local_30;
  
  uVar14 = (uint)(*(int *)(param_1 + 0x70) << 0x10) >> 0x1d;
  if (uVar14 != 0) {
    uVar3 = *(ushort *)(param_1 + 0x8e);
    uVar4 = *(ushort *)(param_1 + 0x90);
    bVar1 = *(byte *)(param_1 + 0x95);
    bVar2 = *(byte *)(param_1 + 0x94);
    local_38 = param_3;
    local_34 = param_4;
    memset(auStack_d8,0,0xa0);
    memset(param_3,0,0x20);
    pauVar12 = param_2 + 0x10;
    pauVar11 = (undefined (*) [16])(param_1 + 0x24);
    local_30 = *(uint *)(param_1 + 0x7c) ^ 0x3f3f3f3f;
    if ((bVar1 & 1) != 0) {
      FUN_0802d948(pauVar11,*(undefined2 *)(param_1 + 0x8a));
    }
    if ((bVar1 & 2) != 0) {
      FUN_0802d948(param_1 + 0x44,*(undefined2 *)(param_1 + 0x8c));
    }
    uVar13 = local_34;
    *(undefined *)(param_1 + 0x95) = 0;
    if (param_5 == uVar3 >> 8) {
      uVar16 = bVar2 | 5;
    }
    else {
      uVar16 = bVar2 | 4;
    }
    if (param_5 == (uVar3 & 0xff)) {
      uVar16 = uVar16 & 0xfffffffe;
    }
    if (param_5 == uVar4 >> 8) {
      uVar16 = uVar16 | 2;
    }
    if (param_5 == (uVar4 & 0xff)) {
      uVar16 = uVar16 & 0xfffffffd;
    }
    *(char *)(param_1 + 0x94) = (char)uVar16;
    switch(uVar16 & uVar14) {
    case 1:
      FUN_0802aee4(pauVar11,local_30);
      break;
    case 2:
      FUN_0802aee4(param_1 + 0x44,local_30 >> 8);
      break;
    case 3:
      FUN_0802a9ac(pauVar11,param_1 + 0x44,local_30,local_30 >> 8);
      break;
    case 4:
      FUN_0802aee4(pauVar12,local_30._3_1_);
      break;
    case 5:
      FUN_0802a9ac(pauVar11,pauVar12,local_30,local_30 >> 0x18);
      break;
    case 6:
      FUN_0802a9ac(param_1 + 0x44,pauVar12,local_30 >> 8,local_30 >> 0x18);
      break;
    case 7:
      pauVar15 = (undefined (*) [16])(param_1 + 0x34);
      uVar16 = *(uint *)*pauVar11 | *(uint *)*(undefined (*) [16])(param_1 + 0x44);
      uVar20 = *(uint *)(param_1 + 0x28) | *(uint *)(param_1 + 0x48);
      uVar14 = local_34 & local_30;
      auVar24 = *pauVar15 | *(undefined (*) [16])(param_1 + 0x54);
      if ((local_30 & 0x20) != 0) {
        *local_38 = *local_38 | *(uint *)(param_1 + 0x24);
        local_38[1] = local_38[1] | *(uint *)(param_1 + 0x28);
        local_38[2] = local_38[2] | *(uint *)(param_1 + 0x2c);
        local_38[3] = local_38[3] | *(uint *)(param_1 + 0x30);
        local_38[4] = local_38[4] | *(uint *)(param_1 + 0x34);
        local_38[5] = local_38[5] | *(uint *)(param_1 + 0x38);
        local_38[6] = local_38[6] | *(uint *)(param_1 + 0x3c);
        local_38[7] = local_38[7] | *(uint *)(param_1 + 0x40);
      }
      puVar10 = &stack0xffffff38 + 4;
      puVar8 = puVar10;
      for (; uVar14 != 0; uVar14 = uVar14 >> 1) {
        if ((uVar14 & 1) != 0) {
          auVar19 = *pauVar15;
          auVar22._0_8_ = *(undefined8 *)(puVar8 + -4);
          auVar22._8_8_ = *(undefined8 *)(puVar8 + 4);
          auVar5 = *(undefined (*) [16])(puVar8 + -0x14);
          auVar23 = *pauVar11;
          *(longlong *)(puVar8 + -4) = SUB168(auVar19 | auVar22,0);
          *(longlong *)(puVar8 + 4) = SUB168(auVar19 | auVar22,8);
          *(longlong *)(puVar8 + -0x14) = SUB168(auVar5 | auVar23,0);
          *(longlong *)(puVar8 + -0xc) = SUB168(auVar5 | auVar23,8);
        }
        puVar8 = puVar8 + 0x20;
      }
      uVar14 = uVar13 & local_30 >> 8;
      puVar8 = puVar10;
      if ((local_30 >> 8 & 0x20) != 0) {
        *local_38 = *local_38 | *(uint *)(param_1 + 0x44) & ~*(uint *)(param_1 + 0x24);
        local_38[1] = local_38[1] | *(uint *)(param_1 + 0x48) & ~*(uint *)(param_1 + 0x28);
        local_38[2] = local_38[2] | *(uint *)(param_1 + 0x4c) & ~*(uint *)(param_1 + 0x2c);
        local_38[3] = local_38[3] | *(uint *)(param_1 + 0x50) & ~*(uint *)(param_1 + 0x30);
        local_38[4] = local_38[4] | *(uint *)(param_1 + 0x54) & ~*(uint *)(param_1 + 0x34);
        local_38[5] = local_38[5] | *(uint *)(param_1 + 0x58) & ~*(uint *)(param_1 + 0x38);
        local_38[6] = local_38[6] | *(uint *)(param_1 + 0x5c) & ~*(uint *)(param_1 + 0x3c);
        local_38[7] = local_38[7] | *(uint *)(param_1 + 0x60) & ~*(uint *)(param_1 + 0x40);
        uVar13 = local_34;
      }
      for (; uVar14 != 0; uVar14 = uVar14 >> 1) {
        if ((uVar14 & 1) != 0) {
          auVar23._0_8_ = *(undefined8 *)(puVar8 + -4);
          auVar23._8_8_ = *(undefined8 *)(puVar8 + 4);
          auVar19 = *pauVar11;
          auVar23 = *(undefined (*) [16])(param_1 + 0x54) & ~*pauVar15 | auVar23;
          *(longlong *)(puVar8 + -4) = auVar23._0_8_;
          *(longlong *)(puVar8 + 4) = auVar23._8_8_;
          auVar19 = *(undefined (*) [16])(puVar8 + -0x14) |
                    *(undefined (*) [16])(param_1 + 0x44) & ~auVar19;
          *(longlong *)(puVar8 + -0x14) = auVar19._0_8_;
          *(longlong *)(puVar8 + -0xc) = auVar19._8_8_;
        }
        puVar8 = puVar8 + 0x20;
      }
      uVar14 = uVar13 & local_30 >> 0x18;
      local_e8 = auVar24._0_4_;
      uStack_e4 = auVar24._4_4_;
      local_e0 = auVar24._8_4_;
      uStack_dc = auVar24._12_4_;
      if ((local_30 >> 0x18 & 0x20) != 0) {
        *local_38 = *local_38 | *(uint *)param_2[0x10] & ~uVar16;
        local_38[1] = local_38[1] | *(uint *)(param_2[0x10] + 4) & ~uVar20;
        local_38[2] = local_38[2] | *(uint *)(param_2[0x10] + 8) & ~local_f0;
        local_38[3] = local_38[3] | *(uint *)(param_2[0x10] + 0xc) & ~uStack_ec;
        local_38[4] = local_38[4] | *(uint *)param_2[0x11] & ~local_e8;
        local_38[5] = local_38[5] | *(uint *)(param_2[0x11] + 4) & ~uStack_e4;
        local_38[6] = local_38[6] | *(uint *)(param_2[0x11] + 8) & ~local_e0;
        local_38[7] = local_38[7] | *(uint *)(param_2[0x11] + 0xc) & ~uStack_dc;
        uVar13 = local_34;
      }
      if (uVar14 != 0) {
        do {
          if ((uVar14 & 1) != 0) {
            auVar25._0_8_ = *(undefined8 *)(puVar10 + -4);
            auVar25._8_8_ = *(undefined8 *)(puVar10 + 4);
            auVar7._4_4_ = ~uStack_e4;
            auVar7._0_4_ = ~local_e8;
            auVar7._8_4_ = ~local_e0;
            auVar7._12_4_ = ~uStack_dc;
            auVar5._4_4_ = ~uVar20;
            auVar5._0_4_ = ~uVar16;
            auVar5._8_4_ = ~local_f0;
            auVar5._12_4_ = ~uStack_ec;
            auVar19 = *pauVar12;
            auVar25 = param_2[0x11] & auVar7 | auVar25;
            *(longlong *)(puVar10 + -4) = auVar25._0_8_;
            *(longlong *)(puVar10 + 4) = auVar25._8_8_;
            auVar19 = *(undefined (*) [16])(puVar10 + -0x14) | auVar19 & auVar5;
            *(longlong *)(puVar10 + -0x14) = auVar19._0_8_;
            *(longlong *)(puVar10 + -0xc) = auVar19._8_8_;
          }
          uVar14 = uVar14 >> 1;
          puVar10 = puVar10 + 0x20;
        } while (uVar14 != 0);
      }
      puVar8 = &stack0xffffff38 + 4;
      uVar14 = uVar13 & local_30 >> 0x10;
      if ((local_30 >> 0x10 & 0x20) != 0) {
        *local_38 = *local_38 | ~(*(uint *)param_2[0x10] | uVar16);
        local_38[1] = local_38[1] | ~(*(uint *)(param_2[0x10] + 4) | uVar20);
        local_38[2] = local_38[2] | ~(*(uint *)(param_2[0x10] + 8) | local_f0);
        local_38[3] = local_38[3] | ~(*(uint *)(param_2[0x10] + 0xc) | uStack_ec);
        local_38[4] = local_38[4] | ~(*(uint *)param_2[0x11] | local_e8);
        local_38[5] = local_38[5] | ~(*(uint *)(param_2[0x11] + 4) | uStack_e4);
        local_38[6] = local_38[6] | ~(*(uint *)(param_2[0x11] + 8) | local_e0);
        local_38[7] = local_38[7] | ~(*(uint *)(param_2[0x11] + 0xc) | uStack_dc);
        uVar13 = local_34;
      }
      for (; local_34 = uVar13, uVar14 != 0; uVar14 = uVar14 >> 1) {
        if ((uVar14 & 1) != 0) {
          auVar26._0_8_ = *(undefined8 *)(puVar8 + -4);
          auVar26._8_8_ = *(undefined8 *)(puVar8 + 4);
          auVar6._4_4_ = uVar20;
          auVar6._0_4_ = uVar16;
          auVar6._8_4_ = local_f0;
          auVar6._12_4_ = uStack_ec;
          auVar19 = *pauVar12;
          auVar26 = auVar26 | ~(param_2[0x11] | auVar24);
          *(longlong *)(puVar8 + -4) = auVar26._0_8_;
          *(longlong *)(puVar8 + 4) = auVar26._8_8_;
          auVar19 = *(undefined (*) [16])(puVar8 + -0x14) | ~(auVar19 | auVar6);
          *(longlong *)(puVar8 + -0x14) = auVar19._0_8_;
          *(longlong *)(puVar8 + -0xc) = auVar19._8_8_;
        }
        puVar8 = puVar8 + 0x20;
      }
      break;
    default:
      uVar14 = local_30 >> 0x10 & local_34;
      if ((local_30 & 0x200000) != 0) {
        *local_38 = 0xffffffff;
        local_38[1] = 0xffffffff;
        local_38[2] = 0xffffffff;
        local_38[3] = 0xffffffff;
        local_38[4] = 0xffffffff;
        local_38[5] = 0xffffffff;
        local_38[6] = 0xffffffff;
        local_38[7] = 0xffffffff;
      }
      auVar24 = SIMDExpandImmediate(0,0xe,0xff);
      puVar9 = (undefined8 *)&stack0xffffff38;
      for (; uVar14 != 0; uVar14 = uVar14 >> 1) {
        if ((uVar14 & 1) != 0) {
          puVar9[-2] = auVar24._0_8_;
          puVar9[-1] = auVar24._8_8_;
          *puVar9 = auVar24._0_8_;
          puVar9[1] = auVar24._8_8_;
        }
        puVar9 = puVar9 + 4;
      }
    }
    puVar8 = &stack0xffffff38 + 4;
    pauVar12 = param_2 + 1;
    pauVar11 = param_2;
    do {
      uVar14 = local_34 & 1;
      local_34 = local_34 >> 1;
      if (uVar14 != 0) {
        auVar19 = *(undefined (*) [16])(puVar8 + -0x14);
        auVar17._0_8_ = *(undefined8 *)(puVar8 + -4);
        auVar17._8_8_ = *(undefined8 *)(puVar8 + 4);
        auVar24 = *pauVar12;
        *(longlong *)*pauVar11 = SUB168(*pauVar11 & ~auVar19,0);
        *(longlong *)(*pauVar11 + 8) = SUB168(*pauVar11 & ~auVar19,8);
        *(longlong *)*pauVar12 = SUB168(auVar24 & ~auVar17,0);
        *(longlong *)(*pauVar12 + 8) = SUB168(auVar24 & ~auVar17,8);
      }
      puVar8 = puVar8 + 0x20;
      pauVar11 = pauVar11 + 2;
      pauVar12 = pauVar12 + 2;
    } while (puVar8 != local_48 + 4);
    if ((local_34 & 1) != 0) {
      auVar24._8_8_ = 0;
      auVar24._0_8_ = ~local_58._0_8_;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = ~local_58._8_8_;
      auVar21 = auVar24 << 8 | auVar21;
      auVar24 = param_2[8] & auVar21;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = ~local_48._0_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ~local_48._8_8_;
      auVar18 = auVar19 << 8 | auVar18;
      *(longlong *)param_2[8] = auVar24._0_8_;
      *(longlong *)(param_2[8] + 8) = auVar24._8_8_;
      auVar24 = param_2[10] & auVar21;
      *(longlong *)param_2[10] = auVar24._0_8_;
      *(longlong *)(param_2[10] + 8) = auVar24._8_8_;
      auVar24 = param_2[0xc] & auVar21;
      *(longlong *)param_2[0xc] = auVar24._0_8_;
      *(longlong *)(param_2[0xc] + 8) = auVar24._8_8_;
      auVar21 = param_2[0xe] & auVar21;
      *(longlong *)param_2[0xe] = auVar21._0_8_;
      *(longlong *)(param_2[0xe] + 8) = auVar21._8_8_;
      auVar24 = param_2[9] & auVar18;
      *(longlong *)param_2[9] = auVar24._0_8_;
      *(longlong *)(param_2[9] + 8) = auVar24._8_8_;
      auVar24 = param_2[0xb] & auVar18;
      *(longlong *)param_2[0xb] = auVar24._0_8_;
      *(longlong *)(param_2[0xb] + 8) = auVar24._8_8_;
      auVar24 = param_2[0xd] & auVar18;
      *(longlong *)param_2[0xd] = auVar24._0_8_;
      *(longlong *)(param_2[0xd] + 8) = auVar24._8_8_;
      auVar18 = param_2[0xf] & auVar18;
      *(longlong *)param_2[0xf] = auVar18._0_8_;
      *(longlong *)(param_2[0xf] + 8) = auVar18._8_8_;
      return;
    }
  }
  return;
}


