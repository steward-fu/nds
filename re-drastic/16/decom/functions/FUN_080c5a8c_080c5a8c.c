/*
 * Ghidra decompilation
 *
 * Function : FUN_080c5a8c
 * Address  : 080c5a8c
 * Program  : drastic16
 */


void FUN_080c5a8c(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint local_24;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    pvVar2 = operator_new__(0x400400);
    *(void **)(param_1 + 0x20) = pvVar2;
    memset(*(void **)(param_1 + 0x20),0,0x400400);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
    uVar1 = iVar4 * 2;
    if (uVar1 < 0x1b401) {
      uVar5 = iVar4 * 0x95c8 + 8;
    }
    else {
      uVar5 = 0xffffffff;
    }
    puVar3 = (undefined4 *)operator_new__(uVar5);
    *puVar3 = 0x4ae4;
    puVar3[1] = uVar1;
    puVar6 = puVar3 + 2;
    uVar5 = uVar1;
    while (uVar5 = uVar5 - 1, uVar5 != 0xffffffff) {
      FUN_080d27c4(puVar6);
      puVar6 = puVar6 + 0x12b9;
    }
    *(undefined4 **)(param_1 + 0x18) = puVar3 + 2;
    memset(*(void **)(param_1 + 0x18),0,iVar4 * 0x95c8);
    for (local_24 = 0; local_24 < uVar1; local_24 = local_24 + 1) {
      iVar4 = *(int *)(param_1 + 0x18) + local_24 * 0x4ae4;
      if (*(int *)(iVar4 + 0x4ad4) == 0) {
        *(undefined4 *)(iVar4 + 0x4adc) = 0x4100;
        pvVar2 = malloc(*(int *)(iVar4 + 0x4adc) * 0xc);
        *(void **)(iVar4 + 0x4ad4) = pvVar2;
        if (*(int *)(iVar4 + 0x4ad4) == 0) {
          FUN_080b6efc(&DAT_081cd0a0);
        }
      }
    }
  }
  return;
}


