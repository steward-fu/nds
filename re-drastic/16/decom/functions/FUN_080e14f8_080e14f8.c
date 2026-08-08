/*
 * Ghidra decompilation
 *
 * Function : FUN_080e14f8
 * Address  : 080e14f8
 * Program  : drastic16
 */


void FUN_080e14f8(int param_1,byte *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint __n;
  int iVar3;
  int local_14;
  uint local_10;
  byte local_9;
  
  FUN_080d21fc(param_1);
  __n = param_3;
  if (0x7fff < param_3) {
    __n = 0x8000;
  }
  memcpy(*(void **)(param_1 + 0xc),param_2,__n);
  local_9 = 0;
  for (local_10 = 1; local_10 < param_3; local_10 = local_10 + 1) {
    local_9 = param_2[local_10] ^ local_9;
  }
  FUN_080e2c30(param_1,8);
  *(undefined4 *)(param_4 + 0x14) = 0;
  if ((local_9 == *param_2) && (iVar1 = FUN_080e194c(param_1,param_2,param_3), iVar1 != 0)) {
    FUN_080e2a0c(param_4,1);
    iVar3 = *(int *)(param_4 + 0x14);
    *(int *)(param_4 + 0x14) = iVar3 + 1;
    puVar2 = (undefined4 *)FUN_080d56d8(param_4,iVar3);
    *puVar2 = 0x28;
    puVar2[3] = iVar1;
    puVar2[5] = puVar2 + 3;
    puVar2[9] = puVar2 + 7;
    puVar2[6] = 3;
    puVar2[2] = puVar2[6];
    return;
  }
  FUN_080e2a0c(param_4,1);
  iVar1 = *(int *)(param_4 + 0x14);
  *(int *)(param_4 + 0x14) = iVar1 + 1;
  puVar2 = (undefined4 *)FUN_080d56d8(param_4,iVar1);
  *puVar2 = 0x16;
  puVar2[5] = puVar2 + 3;
  puVar2[9] = puVar2 + 7;
  puVar2[6] = 3;
  puVar2[2] = puVar2[6];
  for (local_14 = 0; local_14 < *(int *)(param_4 + 0x14); local_14 = local_14 + 1) {
    iVar1 = FUN_080d56d8(param_4,local_14);
    if (*(int *)(iVar1 + 0x14) == 0) {
      *(int *)(iVar1 + 0x14) = iVar1 + 0xc;
    }
    if (*(int *)(iVar1 + 0x24) == 0) {
      *(int *)(iVar1 + 0x24) = iVar1 + 0x1c;
    }
  }
  return;
}


