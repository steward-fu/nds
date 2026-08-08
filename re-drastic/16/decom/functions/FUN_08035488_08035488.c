/*
 * Ghidra decompilation
 *
 * Function : FUN_08035488
 * Address  : 08035488
 * Program  : drastic16
 */


void FUN_08035488(undefined4 *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_4 & 3) == 0) {
    iVar3 = 0;
    if (param_5 != 0) {
      do {
        if (param_4 != 0) {
          uVar5 = 0;
          puVar2 = param_1;
          iVar4 = param_2;
          do {
            pbVar1 = (byte *)(param_2 + uVar5);
            uVar5 = uVar5 + 4;
            param_1 = puVar2 + 4;
            *puVar2 = *(undefined4 *)(param_3 + (uint)*pbVar1 * 4);
            puVar2[1] = *(undefined4 *)(param_3 + (uint)*(byte *)(iVar4 + 1) * 4);
            puVar2[2] = *(undefined4 *)(param_3 + (uint)*(byte *)(iVar4 + 2) * 4);
            puVar2[3] = *(undefined4 *)(param_3 + (uint)*(byte *)(iVar4 + 3) * 4);
            puVar2 = param_1;
            iVar4 = iVar4 + 4;
          } while (uVar5 < param_4);
        }
        iVar3 = iVar3 + 1;
        param_2 = param_2 + param_6;
      } while (iVar3 != param_5);
      return;
    }
  }
  else if (param_5 != 0) {
    iVar3 = 0;
    if (param_4 == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = param_4 << 2;
    }
    do {
      uVar5 = 0;
      puVar2 = param_1;
      do {
        pbVar1 = (byte *)(param_2 + uVar5);
        uVar5 = uVar5 + 1;
        *puVar2 = *(undefined4 *)(param_3 + (uint)*pbVar1 * 4);
        puVar2 = puVar2 + 1;
      } while (uVar5 < param_4);
      iVar3 = iVar3 + 1;
      param_2 = param_2 + param_6;
      param_1 = (undefined4 *)((int)param_1 + iVar4);
    } while (iVar3 != param_5);
  }
  return;
}


