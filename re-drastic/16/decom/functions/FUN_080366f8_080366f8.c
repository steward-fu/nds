/*
 * Ghidra decompilation
 *
 * Function : FUN_080366f8
 * Address  : 080366f8
 * Program  : drastic16
 */


void FUN_080366f8(int param_1,int param_2,uint *param_3,int param_4,byte *param_5,int param_6,
                 int param_7,int param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint *local_34;
  byte *pbVar9;
  
  uVar5 = (uint)(*(int *)(param_2 + 4) << 0x1a) >> 0x1e;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      if ((*(uint *)(param_1 + 0x9a50) & 2) != 0) {
        FUN_08091ec4(param_3,param_4,param_5,param_6,param_7,param_8);
        if (param_8 == 0) {
          return;
        }
        pbVar9 = param_5;
        do {
          pbVar8 = pbVar9 + 1;
          uVar6 = *param_3;
          uVar5 = (uint)(*pbVar9 >> 1);
          uVar10 = (uint)*(byte *)(param_1 + 0x99d8 + uVar5) + ((uVar6 << 0x12) >> 0x1a);
          if (0x3e < uVar10) {
            uVar10 = 0x3f;
          }
          uVar7 = (uint)*(byte *)(param_1 + 0x99b8 + uVar5) + (uVar6 & 0x3f);
          uVar5 = (uint)*(byte *)(param_1 + 0x99f8 + uVar5) + ((uVar6 << 10) >> 0x1a);
          if (uVar7 < 0x40) {
            uVar7 = uVar6 & 0x1f000000 | uVar7;
          }
          else {
            uVar7 = uVar6 & 0x1f000000 | 0x3f;
          }
          if (0x3e < uVar5) {
            uVar5 = 0x3f;
          }
          *param_3 = uVar7 | uVar10 << 8 | uVar5 << 0x10;
          pbVar9 = pbVar8;
          param_3 = param_3 + 1;
        } while (pbVar8 != param_5 + param_8);
        return;
      }
      if (param_8 != 0) {
        local_34 = param_3;
      }
      if (param_8 != 0) {
        iVar12 = 0;
        do {
          bVar1 = param_5[iVar12];
          param_5[iVar12] = *(byte *)(param_1 + 0x99b8 + (uint)(bVar1 >> 1));
          param_5[iVar12 + param_6] = *(byte *)(param_1 + 0x99d8 + (uint)(bVar1 >> 1));
          param_5[iVar12 + param_6 * 2] = *(byte *)(param_1 + 0x99f8 + (uint)(bVar1 >> 1));
          iVar12 = iVar12 + 1;
          param_3 = local_34;
        } while (iVar12 != param_8);
      }
    }
    FUN_08091ec4(param_3,param_4,param_5,param_6);
    return;
  }
  if (param_8 != 0) {
    puVar11 = (uint *)(param_4 + -4);
    iVar12 = 0;
    do {
      puVar11 = puVar11 + 1;
      uVar6 = *puVar11;
      iVar4 = 0x20;
      iVar2 = iVar12 + param_6;
      pbVar9 = param_5 + iVar12;
      uVar5 = uVar6 >> 0x18;
      iVar3 = iVar12 + param_6 * 2;
      if (uVar5 == 0x1f) {
        uVar10 = 0x20;
LAB_08036878:
        iVar4 = 0x1f - uVar5;
        uVar5 = uVar10;
      }
      else {
        uVar10 = uVar5;
        if (uVar5 != 0) goto LAB_08036878;
      }
      iVar12 = iVar12 + 1;
      *param_3 = param_7 << 0x18 | (uint)*pbVar9 * iVar4 + (uVar6 & 0xff) * uVar5 >> 5 |
                 ((uint)param_5[iVar2] * iVar4 + ((uVar6 << 0x10) >> 0x18) * uVar5 >> 5) << 8 |
                 ((uint)param_5[iVar3] * iVar4 + ((uVar6 << 8) >> 0x18) * uVar5 >> 5) << 0x10;
      param_3 = param_3 + 1;
    } while (iVar12 != param_8);
  }
  return;
}


