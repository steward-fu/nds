/*
 * Ghidra decompilation
 *
 * Function : FUN_080c9484
 * Address  : 080c9484
 * Program  : drastic16
 */


void FUN_080c9484(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint local_14;
  
  uVar1 = *(uint *)(param_1 + 0x4c40);
  *(uint *)(param_1 + 0x4c40) = uVar1 - param_3;
  *(uint *)(param_1 + 0x4c44) = *(int *)(param_1 + 0x4c44) - (uint)(uVar1 < param_3);
  local_14 = param_3;
  while (local_14 != 0) {
    *(undefined *)(*(int *)(param_1 + 0x4b34) + *(int *)(param_1 + 0x70)) =
         *(undefined *)
          (*(int *)(param_1 + 0x4b34) +
          (*(int *)(param_1 + 0x70) - param_2 & *(uint *)(param_1 + 0xe6f8)));
    *(uint *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1U & *(uint *)(param_1 + 0xe6f8);
    local_14 = local_14 - 1;
  }
  return;
}


