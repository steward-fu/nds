/*
 * Ghidra decompilation
 *
 * Function : FUN_080bd604
 * Address  : 080bd604
 * Program  : drastic16
 */


void FUN_080bd604(int param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint local_24;
  uint local_10;
  void *local_c;
  
  local_10 = *(uint *)(param_1 + 0x20) & 0x3f;
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = param_3 + uVar1;
  *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)CARRY4(param_3,uVar1);
  local_24 = param_3;
  local_c = param_2;
  while (local_24 != 0) {
    uVar1 = local_24;
    if (0x40 - local_10 < local_24) {
      uVar1 = 0x40 - local_10;
    }
    if (uVar1 == 0x40) {
      *(void **)(param_1 + 0x28) = local_c;
    }
    else {
      *(int *)(param_1 + 0x28) = param_1 + 0x2c;
      memcpy((void *)(param_1 + local_10 + 0x2c),local_c,uVar1);
    }
    local_c = (void *)((int)local_c + uVar1);
    local_10 = local_10 + uVar1;
    local_24 = local_24 - uVar1;
    if (local_10 == 0x40) {
      local_10 = 0;
      FUN_080bcfb0(param_1);
    }
  }
  FUN_080bcfb0(0);
  return;
}


