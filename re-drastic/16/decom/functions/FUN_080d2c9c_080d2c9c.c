/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2c9c
 * Address  : 080d2c9c
 * Program  : drastic16
 */


void FUN_080d2c9c(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined auStack_28 [4];
  undefined *local_24;
  undefined *local_20;
  int local_1c;
  short *local_18;
  uint local_14;
  uint local_10;
  undefined *local_c;
  
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xb4)) {
    **(undefined **)(param_1 + 0xb0) = 0;
  }
  local_24 = auStack_28;
  local_20 = local_24;
  for (local_10 = 0; (int)local_10 < 0x26; local_10 = local_10 + 1) {
    while (*(int *)(param_1 + (local_10 + 0x2e) * 4) != 0) {
      local_c = (undefined *)FUN_080d2a80(param_1,local_10);
      FUN_080d2548(local_c,auStack_28);
      *local_c = 0xff;
      local_c[1] = 0xff;
      *(ushort *)(local_c + 2) = (ushort)*(byte *)(param_1 + local_10 + 4);
    }
  }
  for (local_c = local_24; local_c != auStack_28; local_c = *(undefined **)(local_c + 4)) {
    while( true ) {
      local_18 = (short *)FUN_080d2b0c(param_1,local_c,*(undefined2 *)(local_c + 2));
      if ((*local_18 == -1) &&
         ((uint)*(ushort *)(local_c + 2) + (uint)(ushort)local_18[1] < 0x10000)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      FUN_080d25a4(local_18);
      *(short *)(local_c + 2) = *(short *)(local_c + 2) + local_18[1];
    }
  }
  while (local_c = local_24, local_24 != auStack_28) {
    FUN_080d25a4(local_24);
    local_14 = (uint)*(ushort *)(local_c + 2);
    while (0x80 < (int)local_14) {
      FUN_080d2a30(param_1,local_c,0x25);
      local_14 = local_14 - 0x80;
      local_c = (undefined *)FUN_080d2b0c(param_1,local_c,0x80);
    }
    local_10 = (uint)*(byte *)(param_1 + local_14 + 0x29);
    if (*(byte *)(param_1 + local_10 + 4) != local_14) {
      local_10 = local_10 - 1;
      local_1c = local_14 - *(byte *)(param_1 + local_10 + 4);
      uVar1 = FUN_080d2b0c(param_1,local_c,local_14 - local_1c);
      FUN_080d2a30(param_1,uVar1,local_1c + -1);
    }
    FUN_080d2a30(param_1,local_c,local_10);
  }
  return;
}


