/*
 * Ghidra decompilation
 *
 * Function : FUN_0809bd28
 * Address  : 0809bd28
 * Program  : drastic16
 */


undefined4 FUN_0809bd28(undefined8 *param_1,byte *param_2,uint param_3,code **param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (4 < param_3) {
    uVar2 = (uint)*param_2;
    uVar4 = (uint)param_2[3] << 0x10 | (uint)param_2[2] << 8 | (uint)param_2[1] |
            (uint)param_2[4] << 0x18;
    if (uVar4 < 0x1000) {
      uVar4 = 0x1000;
    }
    if (uVar2 < 0xe1) {
      uVar5 = (uVar2 / 9) % 5;
      iVar3 = (0x300 << uVar5 + uVar2 % 9) + 0x736;
      if ((*(int *)(param_1 + 2) == 0) || (iVar3 != *(int *)((int)param_1 + 0x54))) {
        (*param_4[1])(param_4);
        *(undefined4 *)(param_1 + 2) = 0;
        iVar1 = (**param_4)(param_4,iVar3 * 2);
        *(int *)((int)param_1 + 0x54) = iVar3;
        *(int *)(param_1 + 2) = iVar1;
        if (iVar1 == 0) {
          return 2;
        }
      }
      *param_1 = CONCAT44(uVar5,uVar2 % 9);
      param_1[1] = CONCAT44(uVar4,(uVar2 / 9) / 5);
      return 0;
    }
  }
  return 4;
}


