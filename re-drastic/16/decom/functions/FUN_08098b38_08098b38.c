/*
 * Ghidra decompilation
 *
 * Function : FUN_08098b38
 * Address  : 08098b38
 * Program  : drastic16
 */


int FUN_08098b38(int *param_1,undefined4 param_2,uint param_3,int *param_4,int *param_5,
                uint *param_6,int *param_7,int *param_8,code **param_9)

{
  int iVar1;
  uint *puVar2;
  undefined4 extraout_r1;
  int iVar3;
  int *piVar4;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 local_40;
  int *piVar5;
  
  iVar3 = *(int *)(param_1[0xf] + param_3 * 4);
  *param_7 = 0;
  *param_8 = 0;
  if (iVar3 == -1) {
    (*param_9[1])(param_9,*param_5);
    *param_4 = -1;
    *param_5 = 0;
    *param_6 = 0;
    return 0;
  }
  if ((*param_5 != 0) && (*param_4 == iVar3)) {
    iVar10 = *param_4 << 2;
    goto LAB_08098d7c;
  }
  iVar10 = iVar3 * 4;
  iVar9 = param_1[3] + iVar3 * 0x28;
  if (*(int *)(iVar9 + 0x10) == 0) {
LAB_08098c84:
    uVar7 = 0;
    local_40 = VectorAdd(*(undefined8 *)(param_1 + 10),
                         *(undefined8 *)(param_1[0xd] + *(int *)(param_1[0xc] + iVar3 * 4) * 8),8);
  }
  else {
    iVar1 = 0;
    iVar8 = 0;
    do {
      iVar6 = *(int *)(param_1[3] + iVar3 * 0x28) + iVar1;
      iVar1 = iVar1 + 0x18;
      iVar8 = iVar8 + *(int *)(iVar6 + 4);
    } while (iVar1 != *(int *)(iVar9 + 0x10) * 0x18);
    if ((iVar8 == 0) || (iVar8 = iVar8 + -1, iVar8 < 0)) goto LAB_08098c84;
    if (*(int *)(iVar9 + 0x14) != 0) {
      do {
        if (iVar8 != *(int *)(*(int *)(iVar9 + 4) + 4)) {
          iVar6 = 0;
          iVar1 = *(int *)(iVar9 + 4);
          do {
            iVar6 = iVar6 + 1;
            if (iVar6 == *(int *)(iVar9 + 0x14)) goto LAB_08098bf4;
            piVar4 = (int *)(iVar1 + 0xc);
            iVar1 = iVar1 + 8;
          } while (iVar8 != *piVar4);
          if (iVar6 < 0) goto LAB_08098bf4;
        }
        bVar11 = iVar8 != 0;
        iVar8 = iVar8 + -1;
      } while (bVar11);
      goto LAB_08098c84;
    }
LAB_08098bf4:
    puVar2 = (uint *)(*(int *)(iVar9 + 0xc) + iVar8 * 8);
    uVar7 = *puVar2;
    if (puVar2[1] != 0) {
      return 2;
    }
    local_40 = VectorAdd(*(undefined8 *)(param_1 + 10),
                         *(undefined8 *)(param_1[0xd] + *(int *)(param_1[0xc] + iVar3 * 4) * 8),8);
  }
  *param_4 = iVar3;
  (*param_9[1])();
  *param_5 = 0;
  iVar3 = FUN_080995a8(param_2,extraout_r1,(undefined4)local_40,local_40._4_4_);
  if (iVar3 != 0) {
    return iVar3;
  }
  *param_6 = uVar7;
  if (uVar7 != 0) {
    iVar3 = (**param_9)(param_9,uVar7);
    *param_5 = iVar3;
    if (iVar3 == 0) {
      return 2;
    }
  }
  iVar3 = FUN_080db948(iVar9,*param_1 + *(int *)(param_1[0xc] + iVar10) * 8,param_2);
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((*(int *)(iVar9 + 0x1c) != 0) &&
     (iVar3 = FUN_08097080(*param_5,uVar7), iVar3 != *(int *)(iVar9 + 0x20))) {
    return 3;
  }
LAB_08098d7c:
  iVar3 = 0;
  iVar9 = param_1[0xe];
  iVar1 = param_1[4];
  *param_7 = 0;
  if (*(uint *)(iVar9 + iVar10) < param_3) {
    iVar8 = param_3 * 0x20;
    piVar4 = (int *)(iVar1 + *(uint *)(iVar9 + iVar10) * 0x20 + 8);
    do {
      piVar5 = piVar4 + 8;
      iVar3 = iVar3 + *piVar4;
      piVar4 = piVar5;
    } while (piVar5 != (int *)(iVar1 + 8 + iVar8));
    *param_7 = iVar3;
  }
  else {
    iVar8 = param_3 << 5;
  }
  iVar1 = iVar1 + iVar8;
  iVar3 = *(int *)(iVar1 + 8);
  *param_8 = iVar3;
  if ((uint)(*param_7 + iVar3) <= *param_6) {
    if ((*(char *)(iVar1 + 0x1b) != '\0') &&
       (iVar3 = FUN_08097080(*param_5 + *param_7), iVar3 != *(int *)(iVar1 + 0x10))) {
      return 3;
    }
    return 0;
  }
  return 0xb;
}


