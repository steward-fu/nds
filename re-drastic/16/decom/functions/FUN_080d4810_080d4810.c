/*
 * Ghidra decompilation
 *
 * Function : FUN_080d4810
 * Address  : 080d4810
 * Program  : drastic16
 */


undefined4 FUN_080d4810(ushort *param_1,int param_2)

{
  ushort **ppuVar1;
  ushort *puVar2;
  undefined4 uVar3;
  ushort *local_424;
  ushort *local_420 [256];
  int local_20;
  short *local_1c;
  ushort *local_18;
  ushort **local_14;
  int local_10;
  int local_c;
  
  local_10 = (uint)*param_1 - *(int *)(param_2 + 0x654);
  local_424 = param_1;
  local_1c = (short *)FUN_080d46b0(param_1,param_2,local_10);
  local_14 = local_420;
  local_c = 0;
  puVar2 = (ushort *)(*(int *)(local_424 + 2) + -6);
  do {
    do {
      local_18 = puVar2;
      puVar2 = local_18 + 3;
    } while (*(char *)(param_2 + (uint)*(byte *)puVar2 + 0x66c) == *(char *)(param_2 + 0xa6c));
    local_c = local_c + (uint)*(byte *)((int)local_18 + 7);
    local_18 = puVar2;
    ppuVar1 = local_14 + 1;
    *local_14 = puVar2;
    local_14 = ppuVar1;
    local_10 = local_10 + -1;
    puVar2 = local_18;
  } while (local_10 != 0);
  *(int *)(param_2 + 0x4a84) = *(int *)(param_2 + 0x4a84) + local_c;
  local_20 = FUN_080d28ec(param_2 + 0x4a70);
  if (local_20 < *(int *)(param_2 + 0x4a84)) {
    local_14 = local_420;
    local_18 = local_420[0];
    if (local_20 < local_c) {
      local_c = 0;
      while (local_c = local_c + (uint)*(byte *)((int)local_18 + 1), local_c <= local_20) {
        local_14 = local_14 + 1;
        local_18 = *local_14;
      }
      *(int *)(param_2 + 0x4a80) = local_c;
      *(uint *)(param_2 + 0x4a7c) = *(int *)(param_2 + 0x4a80) - (uint)*(byte *)((int)local_18 + 1);
      FUN_080d2708(local_1c);
      FUN_080d460c(local_424,param_2,local_18);
    }
    else {
      *(int *)(param_2 + 0x4a7c) = local_c;
      *(undefined4 *)(param_2 + 0x4a80) = *(undefined4 *)(param_2 + 0x4a84);
      local_10 = (uint)*local_424 - *(int *)(param_2 + 0x654);
      local_14 = &local_424;
      do {
        local_14 = local_14 + 1;
        *(undefined *)(param_2 + (uint)*(byte *)*local_14 + 0x66c) = *(undefined *)(param_2 + 0xa6c)
        ;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      *local_1c = *local_1c + (short)*(undefined4 *)(param_2 + 0x4a84);
      *(uint *)(param_2 + 0x654) = (uint)*local_424;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


