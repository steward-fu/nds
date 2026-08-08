/*
 * Ghidra decompilation
 *
 * Function : FUN_08092828
 * Address  : 08092828
 * Program  : drastic16
 */


void FUN_08092828(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,
                 undefined4 *param_5,undefined4 param_6,uint *param_7)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  iVar4 = 0;
  uVar3 = param_3;
  if ((param_3 & 3) == 0) {
    do {
      do {
        puVar1 = param_2;
        puVar7 = param_1;
        puVar2 = param_7 + 1;
        uVar5 = *param_7;
        uVar6 = *param_5;
        if ((uVar5 & 0xff) != 0) {
          *puVar1 = param_6;
          *puVar7 = uVar6;
        }
        uVar6 = param_5[1];
        if ((uVar5 & 0xff00) != 0) {
          puVar1[1] = param_6;
          puVar7[1] = uVar6;
        }
        puVar8 = param_5 + 3;
        uVar6 = param_5[2];
        if ((uVar5 & 0xff0000) != 0) {
          puVar1[2] = param_6;
          puVar7[2] = uVar6;
        }
        bVar9 = (uVar5 & 0xff000000) != 0;
        param_5 = param_5 + 4;
        uVar6 = *puVar8;
        if (bVar9) {
          puVar1[3] = param_6;
        }
        if (bVar9) {
          puVar7[3] = uVar6;
        }
        uVar3 = uVar3 - 4;
        param_1 = puVar7 + 4;
        param_2 = puVar1 + 4;
        param_7 = puVar2;
      } while (uVar3 != 0);
      param_4 = param_4 + -1;
      param_1 = puVar7 + (0x104 - param_3);
      param_2 = puVar1 + (0x104 - param_3);
      uVar3 = param_3;
    } while (param_4 != 0);
    return;
  }
  do {
    do {
      puVar2 = (uint *)((int)param_7 + 1);
      puVar7 = param_5 + 1;
      uVar6 = *param_5;
      if (*(char *)param_7 != '\0') {
        param_2[iVar4] = param_6;
        param_1[iVar4] = uVar6;
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 - 1;
      param_7 = puVar2;
      param_5 = puVar7;
    } while (uVar3 != 0);
    param_1 = param_1 + 0x100;
    param_2 = param_2 + 0x100;
    iVar4 = 0;
    param_4 = param_4 + -1;
    uVar3 = param_3;
  } while (param_4 != 0);
  return;
}


