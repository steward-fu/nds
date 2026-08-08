/*
 * Ghidra decompilation
 *
 * Function : FUN_0805c4e8
 * Address  : 0805c4e8
 * Program  : drastic16
 */


void FUN_0805c4e8(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  **(undefined4 **)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x8ac);
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar2 + 4;
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x8b0);
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar2 + 4;
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0xcd8);
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar2 + 4;
  if (param_3 < 4) {
    *(undefined8 *)(param_1 + 0x878) = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x87c);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x878);
    *(undefined4 *)(iVar2 + 8) = uVar1;
    iVar2 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar2 + 8;
    if (param_3 != 4) {
      *(undefined *)(iVar2 + 8) = *(undefined *)(param_1 + 0xce5);
      iVar2 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar2 + 1;
      if (7 < param_3) {
        *(undefined4 *)(iVar2 + 1) = *(undefined4 *)(param_1 + 0xcdc);
        iVar2 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar2 + 4;
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0xce0);
        iVar2 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar2 + 4;
        *(undefined *)(iVar2 + 4) = *(undefined *)(param_1 + 0xce7);
        iVar2 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar2 + 1;
        *(undefined *)(iVar2 + 1) = *(undefined *)(param_1 + 0xce8);
        iVar2 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar2 + 1;
        if (9 < param_3) {
          *(undefined4 *)(iVar2 + 1) = *(undefined4 *)(param_1 + 0x8a8);
          iVar2 = *(int *)(param_2 + 0x10);
          *(int *)(param_2 + 0x10) = iVar2 + 4;
          if (0xb < param_3) {
            *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x868);
            iVar2 = *(int *)(param_2 + 0x10);
            *(int *)(param_2 + 0x10) = iVar2 + 4;
            *(undefined *)(iVar2 + 4) = *(undefined *)(param_1 + 0x871);
            iVar2 = *(int *)(param_2 + 0x10);
            *(int *)(param_2 + 0x10) = iVar2 + 1;
            *(undefined *)(iVar2 + 1) = *(undefined *)(param_1 + 0x872);
            *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
            FUN_0805de48(param_1 + 0x8b4);
            return;
          }
        }
      }
      goto LAB_0805c554;
    }
  }
  *(undefined *)(param_1 + 0xce5) = 0;
LAB_0805c554:
  FUN_0805de48(param_1 + 0x8b4);
  return;
}


