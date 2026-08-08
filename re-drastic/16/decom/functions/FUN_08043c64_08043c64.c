/*
 * Ghidra decompilation
 *
 * Function : FUN_08043c64
 * Address  : 08043c64
 * Program  : drastic16
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_08043c64(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined uVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  ushort uVar8;
  undefined *puVar9;
  uint uVar10;
  int *piVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint uVar16;
  undefined *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined *puVar22;
  bool bVar23;
  undefined *local_712c;
  undefined *local_711c;
  int *apiStack_7110 [2];
  int local_7108;
  int *local_7104;
  int local_7100;
  int local_70fc;
  int local_70f8;
  int local_70f4;
  int iStack_70f0;
  undefined auStack_70e8 [8];
  undefined auStack_70e0 [28860];
  
  uVar21 = *(uint *)(param_2 + 8);
  puVar9 = auStack_70e8;
  uVar18 = uVar21 & 0xf;
  if (((uint)puVar9 & 8) != 0) {
    puVar9 = auStack_70e0;
  }
  puVar15 = (undefined *)(uVar21 >> 0x18);
  uVar16 = uVar21 >> 8 & 0xff;
  param_3 = param_3 + (uint)*(ushort *)(param_2 + 0x12) * 0x10;
  uVar10 = *(uint *)(&DAT_080e68b0 + ((uVar21 << 8) >> 0x18) * 4);
  iVar7 = *(int *)(param_1 + 0x9004);
  puVar12 = puVar9 + 0x700;
  if (uVar18 != 0) {
    apiStack_7110[0] = (int *)(param_3 + (uVar10 & 0xf) * 0x10);
    if (1 < uVar18) {
      apiStack_7110[1] = (int *)(param_3 + (uVar10 >> 4 & 0xf) * 0x10);
      if (2 < uVar18) {
        local_7108 = param_3 + (uVar10 >> 8 & 0xf) * 0x10;
        if (3 < uVar18) {
          local_7104 = (int *)(param_3 + (uVar10 >> 0xc & 0xf) * 0x10);
          if (4 < uVar18) {
            local_7100 = param_3 + (uVar10 >> 0x10 & 0xf) * 0x10;
            if (5 < uVar18) {
              local_70fc = param_3 + (uVar10 >> 0x14 & 0xf) * 0x10;
              if (6 < uVar18) {
                local_70f8 = param_3 + (uVar10 >> 0x18 & 0xf) * 0x10;
                if ((7 < uVar18) && (local_70f4 = param_3 + (uVar10 >> 0x1c) * 0x10, 8 < uVar18)) {
                  iStack_70f0 = param_3;
                }
              }
            }
          }
        }
      }
    }
  }
  apiStack_7110[uVar18] = apiStack_7110[0];
  puVar17 = (undefined *)(uint)*(ushort *)((int)apiStack_7110[0] + 6);
  if ((uVar21 >> 8 & 0x40) == 0) {
    bVar23 = puVar17 < param_4;
    puVar13 = puVar15 + -(int)puVar17;
    if (bVar23) {
      puVar22 = param_4 + -(int)puVar17;
      uVar4 = 3;
      puVar13 = puVar13 + -(int)puVar22;
      local_711c = puVar22;
    }
    else {
      puVar22 = (undefined *)0x2;
      uVar4 = 2;
      local_711c = (undefined *)0x0;
    }
    bVar1 = param_5 < puVar15;
    uVar3 = bVar23;
    if (bVar1) {
      puVar13 = param_5 + ((int)puVar13 - (int)puVar15);
      puVar22 = param_5;
      puVar15 = param_5;
      uVar3 = uVar4;
    }
    if (0 < (int)puVar13) {
      if ((*(uint *)(iVar7 + 0x9a50) & 0x20) == 0) {
        FUN_08042df4(puVar9,puVar9 + 0x460,apiStack_7110,param_4,puVar15,uVar16);
        FUN_08043068(puVar9 + 0x70,puVar9 + 0x460,apiStack_7110 + uVar18,param_4,puVar15,uVar16);
        puVar15 = (undefined *)0x0;
        puVar22 = puVar9 + 900;
        do {
          puVar15 = puVar15 + 1;
          *(ushort *)(puVar22 + -4) = (ushort)(((uint)*(ushort *)(puVar22 + -4) << 0x11) >> 0x11);
          *(ushort *)(puVar22 + 0x6c) =
               (ushort)(((uint)*(ushort *)(puVar22 + 0x6c) << 0x11) >> 0x11);
          puVar22 = puVar22 + 4;
        } while (puVar15 != puVar13);
        FUN_08092900(puVar9,puVar15);
      }
      else {
        if (bVar23) {
          puVar22 = puVar9 + 4;
        }
        puVar14 = puVar13;
        puVar2 = param_4;
        local_712c = puVar9;
        if (bVar23) {
          puVar14 = puVar13 + 1;
          puVar2 = param_4 + -1;
          local_712c = puVar22;
        }
        if (bVar1) {
          puVar15 = puVar15 + 1;
        }
        if (bVar1) {
          puVar14 = puVar14 + 1;
        }
        FUN_08042df4(puVar9,puVar9 + 0x460,apiStack_7110,puVar2,puVar15,uVar16);
        FUN_08043068(puVar9 + 0x70,puVar9 + 0x460,apiStack_7110 + uVar18,puVar2,puVar15,uVar16);
        puVar22 = puVar9 + 900;
        puVar15 = (undefined *)0x0;
        do {
          uVar5 = *(ushort *)(puVar22 + -4) & 0x7fff;
          uVar8 = *(ushort *)(puVar22 + 0x6c) & 0x7fff;
          if (uVar8 < uVar5) {
            if ((*(ushort *)(puVar22 + -4) & 0x8100) == 0) {
              uVar5 = uVar5 + 1;
            }
          }
          else if ((*(ushort *)(puVar22 + 0x6c) & 0x8100) == 0) {
            uVar8 = uVar8 + 1;
          }
          puVar15 = puVar15 + 1;
          *(ushort *)(puVar22 + -4) = uVar5;
          *(ushort *)(puVar22 + 0x6c) = uVar8;
          puVar22 = puVar22 + 4;
        } while (puVar15 != puVar14);
        FUN_08092900(puVar9);
        FUN_080439b4(local_712c,puVar13,uVar3);
        puVar9 = local_712c;
        puVar15 = puVar13;
      }
      FUN_08042a80(param_1,puVar9,param_2,puVar12,local_711c + ((int)puVar17 - (int)param_4),puVar15
                   ,uVar16,apiStack_7110[0]);
    }
  }
  else {
    puVar9 = (undefined *)(uint)*(ushort *)((int)apiStack_7110[1] + 6);
    piVar11 = apiStack_7110[0];
    if (puVar17 == puVar9) {
      uVar18 = (uint)*(ushort *)(apiStack_7110[1] + 1);
      uVar21 = (uint)*(ushort *)(apiStack_7110[0] + 1);
      if (uVar21 < uVar18) {
        uVar5 = *(ushort *)((int)local_7104 + 6);
        uVar18 = uVar21;
        uVar21 = uVar18;
      }
      else {
        uVar5 = *(ushort *)(local_7108 + 6);
        piVar11 = apiStack_7110[1];
      }
      puVar9 = (undefined *)(uint)uVar5;
    }
    else {
      uVar18 = (uint)*(ushort *)(apiStack_7110[0] + 1);
      uVar21 = (uint)*(ushort *)(local_7104 + 1);
      if (uVar21 <= uVar18) {
        puVar9 = (undefined *)(uint)*(ushort *)(local_7108 + 6);
        piVar11 = local_7104;
        uVar21 = uVar18;
        uVar18 = uVar21;
      }
    }
    puVar15 = puVar9 + -(int)puVar17;
    uVar5 = *(ushort *)(piVar11 + 3);
    iVar20 = (int)*(short *)((int)piVar11 + 0xe) >> 4;
    if ((*(byte *)(iVar7 + 0x9a91) & 2) == 0) {
      local_711c = (undefined *)((uint)*(ushort *)(piVar11 + 2) << 9);
    }
    else {
      local_711c = (undefined *)*piVar11;
    }
    if (puVar17 < param_4) {
      puVar15 = puVar15 + -((int)param_4 - (int)puVar17);
      iVar20 = iVar20 + ((int)param_4 - (int)puVar17);
      puVar17 = param_4;
    }
    if (param_5 < puVar9) {
      puVar15 = param_5 + ((int)puVar15 - (int)puVar9);
    }
    if (puVar15 != (undefined *)0x0) {
      iVar7 = uVar21 - uVar18;
      uVar6 = FUN_08055aa0(*(undefined2 *)((int)piVar11 + 10));
      iVar19 = (int)((uint)uVar5 << 0x10) >> 0x14;
      if ((uint)(iVar7 * (int)puVar15) < 0x201) {
        FUN_08035564(param_1,param_2 + 4,*(undefined4 *)(param_2 + 0xc),puVar12,uVar18,
                     puVar17 + -(int)param_4,iVar19,iVar20,iVar7,puVar15,local_711c,uVar6,uVar16);
      }
      else {
        puVar9 = (undefined *)__aeabi_uidiv(iVar7 + 0x1ff,iVar7);
        puVar17 = puVar17 + -(int)param_4;
        do {
          if (puVar15 <= puVar9) {
            puVar9 = puVar15;
          }
          FUN_08035564(param_1,param_2 + 4,*(undefined4 *)(param_2 + 0xc),puVar12,uVar18,puVar17,
                       iVar19,iVar20,iVar7,puVar9,local_711c,uVar6,uVar16);
          puVar15 = puVar15 + -(int)puVar9;
          puVar17 = puVar17 + (int)puVar9;
          iVar20 = iVar20 + (int)puVar9;
        } while (puVar15 != (undefined *)0x0);
      }
    }
  }
  return;
}


