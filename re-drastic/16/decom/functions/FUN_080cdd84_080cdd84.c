/*
 * Ghidra decompilation
 *
 * Function : FUN_080cdd84
 * Address  : 080cdd84
 * Program  : drastic16
 */


void FUN_080cdd84(int param_1)

{
  uint uVar1;
  void **ppvVar2;
  void *pvVar3;
  uint local_18;
  uint local_14;
  
  FUN_080d571c(param_1 + 0xe6e0);
  *(undefined4 *)(param_1 + 0xe6f0) = 0;
  for (local_14 = 0; uVar1 = FUN_080d5490(param_1 + 0xe6c0), local_14 < uVar1;
      local_14 = local_14 + 1) {
    ppvVar2 = (void **)FUN_080d5618(param_1 + 0xe6c0,local_14);
    pvVar3 = *ppvVar2;
    if (pvVar3 != (void *)0x0) {
      FUN_080d5274(pvVar3);
      operator_delete(pvVar3);
    }
  }
  FUN_080d5778(param_1 + 0xe6c0);
  for (local_18 = 0; uVar1 = FUN_080d5490(param_1 + 0xe6d0), local_18 < uVar1;
      local_18 = local_18 + 1) {
    ppvVar2 = (void **)FUN_080d5618(param_1 + 0xe6d0,local_18);
    pvVar3 = *ppvVar2;
    if (pvVar3 != (void *)0x0) {
      FUN_080d5274(pvVar3);
      operator_delete(pvVar3);
    }
  }
  FUN_080d5778(param_1 + 0xe6d0);
  return;
}


