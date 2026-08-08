/*
 * Ghidra decompilation
 *
 * Function : FUN_080bcae4
 * Address  : 080bcae4
 * Program  : drastic16
 */


void FUN_080bcae4(int param_1,void *param_2,uint param_3,undefined param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_64 [18];
  size_t local_1c;
  
  local_64[16] = param_3 * 8;
  local_64[17] = *(uint *)(param_1 + 0x14) >> 3 & 0x3f;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + local_64[16];
  if (*(uint *)(param_1 + 0x14) < local_64[16]) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (param_3 >> 0x1d);
  if (local_64[17] + param_3 < 0x40) {
    local_1c = 0;
  }
  else {
    local_1c = 0x40 - local_64[17];
    memcpy((void *)(param_1 + local_64[17] + 0x1c),param_2,local_1c);
    FUN_080b9cf8(param_1,param_1 + 0x5c,param_1 + 0x1c,param_4);
    for (; local_1c + 0x3f < param_3; local_1c = local_1c + 0x40) {
      puVar3 = (uint *)((int)param_2 + local_1c);
      puVar5 = local_64;
      puVar6 = puVar3 + 0x10;
      do {
        uVar1 = puVar3[1];
        uVar2 = puVar3[2];
        uVar4 = puVar3[3];
        *puVar5 = *puVar3;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar4;
        puVar3 = puVar3 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar3 != puVar6);
      FUN_080b9cf8(param_1,param_1 + 0x5c,local_64,param_4);
      puVar3 = (uint *)((int)param_2 + local_1c);
      puVar5 = local_64;
      do {
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar4 = puVar5[3];
        *puVar3 = *puVar5;
        puVar3[1] = uVar1;
        puVar3[2] = uVar2;
        puVar3[3] = uVar4;
        puVar5 = puVar5 + 4;
        puVar3 = puVar3 + 4;
      } while (puVar5 != local_64 + 0x10);
    }
    local_64[17] = 0;
  }
  if (local_1c < param_3) {
    memcpy((void *)(param_1 + local_64[17] + 0x1c),(void *)((int)param_2 + local_1c),
           param_3 - local_1c);
  }
  return;
}


