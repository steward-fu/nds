/*
 * Ghidra decompilation
 *
 * Function : FUN_08042df4
 * Address  : 08042df4
 * Program  : drastic16
 */


void FUN_08042df4(int param_1,undefined4 param_2,int *param_3,uint param_4,uint param_5,uint param_6
                 )

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_cc;
  int local_c8;
  int local_c4;
  byte local_b8 [16];
  int local_a8 [33];
  
  piVar6 = param_3 + 1;
  uVar3 = (uint)*(ushort *)(*param_3 + 6);
  if (uVar3 < param_5) {
    iVar11 = 0;
    local_c8 = 0;
    local_cc = 0;
    iVar9 = *param_3;
    iVar13 = param_3[1];
    do {
      uVar5 = (uint)*(ushort *)(iVar13 + 6);
      iVar8 = param_4 - uVar3;
      iVar2 = uVar5 - uVar3;
      if (uVar3 < param_4) {
        iVar2 = iVar2 - iVar8;
      }
      else {
        iVar8 = 0;
      }
      if (param_5 < uVar5) {
        iVar2 = (param_5 - uVar5) + iVar2;
      }
      if (0 < iVar2) {
        local_b8[iVar11] = (byte)iVar2;
        if (iVar11 == 0) {
          local_cc = iVar8;
        }
        uVar5 = (uint)*(ushort *)(iVar13 + 6);
        local_c8 = local_c8 + iVar2;
        local_a8[iVar11 * 2] = iVar9;
        local_a8[iVar11 * 2 + 1] = iVar13;
        iVar11 = iVar11 + 1;
      }
      piVar6 = piVar6 + 1;
      uVar3 = uVar5;
      iVar9 = iVar13;
      iVar13 = *piVar6;
    } while (uVar5 < param_5);
    local_c4 = local_cc;
  }
  else {
    iVar11 = 0;
    local_c4 = 0;
    local_c8 = 0;
  }
  FUN_080923e8(param_2,local_a8,local_b8,iVar11,local_c4);
  FUN_08092504(param_2,param_2,local_c8);
  FUN_08092560(local_a8,param_1,param_2,local_b8,iVar11);
  FUN_08092618(local_a8,param_1,param_2,local_b8,iVar11);
  if ((param_6 & 0x18) == 0) {
    FUN_08042c10(local_a8,param_1,local_b8,iVar11,local_c4);
  }
  else {
    puVar10 = (ushort *)(param_1 + 0x380);
    if (iVar11 != 0) {
      piVar6 = local_a8 + 1;
      iVar9 = 0;
      do {
        uVar5 = (uint)local_b8[iVar9];
        uVar12 = (uint)*(ushort *)(piVar6[-1] + 4);
        uVar3 = *(ushort *)(*piVar6 + 4) - uVar12;
        iVar13 = uVar12 * 0x40000;
        uVar12 = *(uint *)(&DAT_0aaec110 +
                          ((uint)*(ushort *)(*piVar6 + 6) - (uint)*(ushort *)(piVar6[-1] + 6)) * 4);
        if (uVar3 == 0) {
          uVar7 = 0x8000;
LAB_08043030:
          uVar3 = (uint)((ulonglong)uVar3 * (ulonglong)uVar12) >> 0xc |
                  (uVar12 * ((int)uVar3 >> 0x1f) +
                  (int)((ulonglong)uVar3 * (ulonglong)uVar12 >> 0x20)) * 0x100000;
        }
        else {
          if (-1 < (int)uVar3) {
            uVar7 = 0;
            goto LAB_08043030;
          }
          uVar4 = (uint)((ulonglong)uVar3 * (ulonglong)uVar12);
          uVar7 = 0;
          uVar3 = uVar4 + 0xfff >> 0xc |
                  (uVar12 * ((int)uVar3 >> 0x1f) +
                   (int)((ulonglong)uVar3 * (ulonglong)uVar12 >> 0x20) + (uint)(0xfffff000 < uVar4))
                  * 0x100000;
        }
        if (iVar9 == 0) {
          iVar13 = local_c4 * uVar3 + iVar13;
        }
        uVar12 = uVar5;
        puVar1 = puVar10;
        if (uVar5 != 0) {
          do {
            uVar12 = uVar12 - 1;
            *puVar1 = uVar7 | (ushort)((uint)iVar13 >> 0x12);
            iVar13 = iVar13 + uVar3;
            puVar1 = puVar1 + 2;
          } while (uVar12 != 0);
          puVar10 = puVar10 + uVar5 * 2;
        }
        iVar9 = iVar9 + 1;
        piVar6 = piVar6 + 2;
      } while (iVar9 != iVar11);
    }
  }
  return;
}


