/*
 * Ghidra decompilation
 *
 * Function : FUN_080433e0
 * Address  : 080433e0
 * Program  : drastic16
 */


void FUN_080433e0(undefined4 param_1,int param_2,undefined4 param_3,int *param_4,uint param_5,
                 uint param_6,int param_7,uint param_8)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ushort uVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_cc;
  int local_c8;
  byte local_b8 [16];
  int local_a8 [33];
  
  uVar4 = (uint)*(ushort *)(*param_4 + 6);
  piVar7 = param_4 + param_7;
  if (uVar4 < param_6) {
    local_cc = 0;
    iVar6 = 0;
    local_c8 = 0;
    iVar3 = param_4[param_7];
    iVar12 = *param_4;
    do {
      iVar2 = iVar3;
      uVar13 = (uint)*(ushort *)(iVar2 + 6);
      iVar9 = param_5 - uVar4;
      iVar3 = uVar13 - uVar4;
      if (uVar4 < param_5) {
        iVar3 = iVar3 - iVar9;
      }
      else {
        iVar9 = 0;
      }
      if (param_6 < uVar13) {
        iVar3 = (param_6 - uVar13) + iVar3;
      }
      if (0 < iVar3) {
        local_b8[iVar6] = (byte)iVar3;
        uVar13 = (uint)*(ushort *)(iVar2 + 6);
        if (iVar6 == 0) {
          local_c8 = iVar9;
        }
        local_cc = local_cc + iVar3;
        local_a8[iVar6 * 2] = iVar12;
        local_a8[iVar6 * 2 + 1] = iVar2;
        iVar6 = iVar6 + 1;
      }
      piVar7 = piVar7 + param_7;
      iVar3 = *piVar7;
      uVar4 = uVar13;
      iVar12 = iVar2;
    } while (uVar13 < param_6);
  }
  else {
    iVar6 = 0;
    local_c8 = 0;
    local_cc = 0;
  }
  FUN_080923e8(param_3,local_a8,local_b8,iVar6,local_c8);
  FUN_08092504(param_3,param_3,local_cc);
  FUN_08092560(local_a8,param_2,param_3,local_b8,iVar6);
  FUN_08092618(local_a8,param_2,param_3,local_b8,iVar6);
  if ((param_8 & 0x18) == 0) {
    FUN_08042c10(local_a8,param_2,local_b8,iVar6,local_c8);
  }
  else {
    puVar10 = (ushort *)(param_2 + 0x380);
    if (iVar6 != 0) {
      piVar7 = local_a8 + 1;
      iVar3 = 0;
      do {
        uVar13 = (uint)local_b8[iVar3];
        uVar11 = (uint)*(ushort *)(piVar7[-1] + 4);
        uVar4 = *(ushort *)(*piVar7 + 4) - uVar11;
        iVar12 = uVar11 * 0x40000;
        uVar11 = *(uint *)(&DAT_0aaec110 +
                          ((uint)*(ushort *)(*piVar7 + 6) - (uint)*(ushort *)(piVar7[-1] + 6)) * 4);
        if (uVar4 == 0) {
          uVar8 = 0x8000;
LAB_08043638:
          uVar4 = (uint)((ulonglong)uVar4 * (ulonglong)uVar11) >> 0xc |
                  (uVar11 * ((int)uVar4 >> 0x1f) +
                  (int)((ulonglong)uVar4 * (ulonglong)uVar11 >> 0x20)) * 0x100000;
        }
        else {
          if (-1 < (int)uVar4) {
            uVar8 = 0;
            goto LAB_08043638;
          }
          uVar5 = (uint)((ulonglong)uVar4 * (ulonglong)uVar11);
          uVar8 = 0;
          uVar4 = uVar5 + 0xfff >> 0xc |
                  (uVar11 * ((int)uVar4 >> 0x1f) +
                   (int)((ulonglong)uVar4 * (ulonglong)uVar11 >> 0x20) + (uint)(0xfffff000 < uVar5))
                  * 0x100000;
        }
        if (iVar3 == 0) {
          iVar12 = local_c8 * uVar4 + iVar12;
        }
        uVar11 = uVar13;
        puVar1 = puVar10;
        if (uVar13 != 0) {
          do {
            uVar11 = uVar11 - 1;
            *puVar1 = uVar8 | (ushort)((uint)iVar12 >> 0x12);
            iVar12 = iVar12 + uVar4;
            puVar1 = puVar1 + 2;
          } while (uVar11 != 0);
          puVar10 = puVar10 + uVar13 * 2;
        }
        iVar3 = iVar3 + 1;
        piVar7 = piVar7 + 2;
      } while (iVar3 != iVar6);
    }
  }
  return;
}


