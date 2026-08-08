/*
 * Ghidra decompilation
 *
 * Function : FUN_08036cec
 * Address  : 08036cec
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_08036cec(int param_1,int param_2,uint *param_3,byte *param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar5;
  
  if ((uint)(*(int *)(param_2 + 4) << 0x1a) >> 0x1e != 2) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if ((*(uint *)(param_1 + 0x9a50) & 2) == 0) {
    if (param_7 != 0) {
      pbVar5 = param_4;
      do {
        pbVar4 = pbVar5 + 1;
        uVar3 = (uint)(*pbVar5 >> 1);
        *param_3 = (uint)*(byte *)(param_1 + 0x99b8 + uVar3) | param_6 << 0x18 |
                   (uint)*(byte *)(param_1 + 0x99d8 + uVar3) << 8 |
                   (uint)*(byte *)(param_1 + 0x99f8 + uVar3) << 0x10;
        param_3 = param_3 + 1;
        pbVar5 = pbVar4;
      } while (pbVar4 != param_4 + param_7);
    }
  }
  else if (param_7 != 0) {
    iVar8 = 0;
    do {
      pbVar5 = param_4 + iVar8;
      iVar2 = iVar8 + param_5 * 2;
      uVar3 = (uint)(*pbVar5 >> 1);
      iVar1 = iVar8 + param_5;
      iVar8 = iVar8 + 1;
      uVar6 = (uint)*(byte *)(param_1 + 0x99b8 + uVar3) + (uint)*pbVar5;
      uVar7 = (uint)*(byte *)(param_1 + 0x99d8 + uVar3) + (uint)param_4[iVar1];
      if (uVar6 < 0x40) {
        uVar6 = param_6 << 0x18 | uVar6;
      }
      else {
        uVar6 = param_6 << 0x18 | 0x3f;
      }
      if (0x3e < uVar7) {
        uVar7 = 0x3f;
      }
      uVar3 = (uint)*(byte *)(param_1 + 0x99f8 + uVar3) + (uint)param_4[iVar2];
      if (0x3e < uVar3) {
        uVar3 = 0x3f;
      }
      *param_3 = uVar6 | uVar7 << 8 | uVar3 << 0x10;
      param_3 = param_3 + 1;
    } while (iVar8 != param_7);
    return;
  }
  return;
}


