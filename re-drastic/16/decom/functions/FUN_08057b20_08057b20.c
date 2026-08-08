/*
 * Ghidra decompilation
 *
 * Function : FUN_08057b20
 * Address  : 08057b20
 * Program  : drastic16
 */


void FUN_08057b20(uint *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 uint param_7)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  uint *local_84;
  ushort *local_80;
  uint *local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_30 [2];
  ulonglong local_28;
  
  uVar2 = param_6 >> 2;
  if (param_7 >> 2 != 0) {
    local_4c = 0;
    local_50 = param_1;
    local_48 = param_2;
    local_44 = param_3;
    do {
      if (uVar2 != 0) {
        uVar12 = 0;
        local_84 = (uint *)(local_48 + -4);
        local_80 = (ushort *)(local_44 + -2);
        puVar4 = local_50 + param_6 * 3;
        puVar5 = local_50;
        puVar16 = local_50 + param_6 * 2;
        do {
          local_80 = local_80 + 1;
          uVar3 = *local_80 >> 0xe;
          uVar6 = param_4 + (*local_80 & 0x3fff) * 2;
          iVar1 = (uVar6 & 0x1fff) * 2;
          puVar7 = *(undefined **)(param_5 + (uVar6 >> 0xd) * 4);
          if (puVar7 == (undefined *)0x0) {
            puVar7 = &DAT_081c4390;
          }
          uVar6 = (uint)*(ushort *)(puVar7 + iVar1);
          uVar9 = (uint)*(ushort *)(puVar7 + iVar1 + 2);
          uVar10 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 | uVar9 & 0x1f
          ;
          uVar9 = ((uVar6 << 0x11) >> 0x1b) << 0x10 | ((uVar6 << 0x16) >> 0x1b) << 8 | uVar6 & 0x1f;
          local_84 = local_84 + 1;
          uVar6 = *local_84;
          local_30[1] = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
          local_30[0] = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2 | 0x1f000000;
          if (uVar3 == 2) {
            uVar9 = (uint)*(ushort *)(puVar7 + iVar1 + 6);
            uVar10 = (uint)*(ushort *)(puVar7 + iVar1 + 4);
            uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 |
                     uVar10 & 0x1f;
            uVar9 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 |
                    uVar9 & 0x1f;
            local_28 = CONCAT44((uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2,
                                (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2) |
                       0x1f0000001f000000;
          }
          else if (uVar3 == 3) {
            VectorMultiply(CONCAT44(uVar9,uVar9),0x300000005,4);
            uVar17 = VectorMultiplyAccumulate(CONCAT44(uVar10,uVar10),0x500000003,4,0);
            uVar18 = VectorShiftRight(uVar17,3);
            uVar20 = VectorAdd(uVar18 & 0x1f1f1f001f1f1f,0x1f1f1f001f1f1f,4);
            uVar17 = VectorShiftLeft(uVar18 & 0x1f1f1f001f1f1f,1,0x20,0);
            uVar18 = VectorShiftRight(uVar20,5);
            uVar19 = VectorAdd(uVar18 & 0x1010100010101,uVar17,4);
            uVar18 = SIMDExpandImmediate(0,7,0x1f);
            local_28 = uVar19 | uVar18;
          }
          else if (uVar3 == 1) {
            uVar9 = uVar10 + uVar9 >> 1 & 0x1f1f1f;
            local_28 = (ulonglong)((uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2) | 0x1f000000;
          }
          else {
            uVar9 = (uint)*(ushort *)(puVar7 + iVar1 + 4);
            uVar9 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 |
                    uVar9 & 0x1f;
            local_28 = (ulonglong)((uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2) | 0x1f000000;
          }
          uVar9 = local_30[(uVar6 << 0x14) >> 0x1e];
          uVar12 = uVar12 + 1;
          uVar14 = local_30[(uVar6 << 0x18) >> 0x1e];
          uVar10 = local_30[(uVar6 << 0x1a) >> 0x1e];
          *puVar5 = local_30[uVar6 & 3];
          puVar5[2] = uVar10;
          uVar13 = local_30[(uVar6 << 0x12) >> 0x1e];
          uVar11 = local_30[(uVar6 << 0x10) >> 0x1e];
          uVar15 = local_30[(uVar6 << 0x16) >> 0x1e];
          uVar10 = *(uint *)((int)local_30 + (uVar6 & 0xc));
          uVar8 = local_30[(uVar6 << 0xe) >> 0x1e];
          puVar5[3] = uVar14;
          puVar5[1] = uVar10;
          uVar14 = local_30[(uVar6 << 0xc) >> 0x1e];
          puVar5[param_6] = uVar15;
          uVar10 = local_30[(uVar6 << 10) >> 0x1e];
          puVar5[param_6 + 1] = uVar9;
          puVar5[param_6 + 2] = uVar13;
          uVar13 = local_30[(uVar6 << 8) >> 0x1e];
          puVar5[param_6 + 3] = uVar11;
          uVar11 = local_30[(uVar6 << 6) >> 0x1e];
          puVar5[param_6 * 2] = uVar8;
          uVar8 = local_30[(uVar6 << 4) >> 0x1e];
          puVar16[1] = uVar14;
          puVar5[param_6 * 2 + 2] = uVar10;
          uVar9 = local_30[(uVar6 << 2) >> 0x1e];
          uVar6 = local_30[uVar6 >> 0x1e];
          puVar16[3] = uVar13;
          puVar5[param_6 * 3] = uVar11;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar5[param_6 * 3 + 3] = uVar6;
          puVar5 = puVar5 + 4;
          puVar4 = puVar4 + 4;
          puVar16 = puVar16 + 4;
        } while (uVar12 != uVar2);
        local_48 = local_48 + (param_6 & 0xfffffffc);
        local_44 = local_44 + uVar2 * 2;
        local_50 = local_50 + (param_6 & 0xfffffffc);
      }
      local_4c = local_4c + 1;
      local_50 = local_50 + param_6 * 3;
    } while (local_4c != param_7 >> 2);
  }
  return;
}


