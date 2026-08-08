/*
 * Ghidra decompilation
 *
 * Function : FUN_0805c338
 * Address  : 0805c338
 * Program  : drastic16
 */


void FUN_0805c338(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x8ac) = **(undefined4 **)(param_2 + 0x10);
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar1;
  *(undefined4 *)(param_1 + 0x8b0) = *puVar1;
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar1;
  *(undefined4 *)(param_1 + 0xcd8) = *puVar1;
  iVar2 = *(int *)(param_2 + 0x10);
  puVar1 = (undefined4 *)(iVar2 + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar1;
  if (param_3 < 4) {
    *(undefined8 *)(param_1 + 0x878) = 0;
LAB_0805c3a0:
    *(undefined *)(param_1 + 0xce5) = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(param_1 + 0x878) = *puVar1;
    *(undefined4 *)(param_1 + 0x87c) = uVar3;
    iVar2 = *(int *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = iVar2 + 8;
    if (param_3 == 4) goto LAB_0805c3a0;
    *(undefined *)(param_1 + 0xce5) = *(undefined *)(iVar2 + 8);
    puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 1);
    *(undefined4 **)(param_2 + 0x10) = puVar1;
    if (7 < param_3) {
      *(undefined4 *)(param_1 + 0xcdc) = *puVar1;
      puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
      *(undefined4 **)(param_2 + 0x10) = puVar1;
      *(undefined4 *)(param_1 + 0xce0) = *puVar1;
      iVar2 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar2 + 4;
      *(undefined *)(param_1 + 0xce7) = *(undefined *)(iVar2 + 4);
      iVar2 = *(int *)(param_2 + 0x10);
      *(int *)(param_2 + 0x10) = iVar2 + 1;
      *(undefined *)(param_1 + 0xce8) = *(undefined *)(iVar2 + 1);
      puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 1);
      *(undefined4 **)(param_2 + 0x10) = puVar1;
      if (9 < param_3) {
        *(undefined4 *)(param_1 + 0x8a8) = *puVar1;
        puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
        *(undefined4 **)(param_2 + 0x10) = puVar1;
        if (0xb < param_3) {
          *(undefined4 *)(param_1 + 0x868) = *puVar1;
          iVar2 = *(int *)(param_2 + 0x10);
          *(int *)(param_2 + 0x10) = iVar2 + 4;
          *(undefined *)(param_1 + 0x871) = *(undefined *)(iVar2 + 4);
          iVar2 = *(int *)(param_2 + 0x10);
          *(int *)(param_2 + 0x10) = iVar2 + 1;
          *(undefined *)(param_1 + 0x872) = *(undefined *)(iVar2 + 1);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          FUN_0805ddd8(param_1 + 0x8b4);
          return;
        }
        FUN_0805ddd8(param_1 + 0x8b4);
        return;
      }
      FUN_0805ddd8(param_1 + 0x8b4);
      goto LAB_0805c3c0;
    }
  }
  FUN_0805ddd8(param_1 + 0x8b4,param_2,param_3);
  if (9 < param_3) {
    return;
  }
LAB_0805c3c0:
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  return;
}


