/*
 * Ghidra decompilation
 *
 * Function : FUN_08050844
 * Address  : 08050844
 * Program  : drastic16
 */


void FUN_08050844(int param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  if (*(byte *)(param_1 + 0x9a86) != 0) {
    iVar5 = *(byte *)(param_1 + 0x9a86) - 1;
    puVar2 = *(undefined4 **)(param_1 + 0x9a4c) + 1;
    **(undefined4 **)(param_1 + 0x9a4c) = param_3;
    *(undefined4 **)(param_1 + 0x9a4c) = puVar2;
    if (iVar5 == 0) {
      iVar3 = *(int *)(param_1 + 0x9a40) + 1;
      *(undefined4 **)(param_1 + 0x9a44) = puVar2;
      *(int *)(param_1 + 0x9a40) = iVar3;
      *(int *)(param_1 + 0x9a48) = iVar3;
      if (0x400 < iVar3 - (param_1 + 0x61ab0)) {
        FUN_08050498();
      }
    }
    *(char *)(param_1 + 0x9a86) = (char)iVar5;
    return;
  }
  param_2 = param_2 & 0x7f;
  puVar4 = *(undefined **)(param_1 + 0x9a40);
  if (*(char *)(param_1 + 0x9a8f) == '\0') {
    if (param_2 == 0x50) {
      *(undefined *)(param_1 + 0x9a8f) = 1;
    }
  }
  else if (0x1c < param_2) {
    iVar5 = *(int *)(param_1 + 0x9a18);
    *(uint *)(param_1 + 0xe9ab0) = param_2;
    *(undefined4 *)(param_1 + 0xe9ab4) = param_3;
    *(undefined *)(param_1 + 0x9a8e) = 1;
    *(uint *)(iVar5 + 0x15a0f74) = *(uint *)(iVar5 + 0x15a0f74) | 0x10;
    *(byte *)(iVar5 + 0x15a0cfd) = *(byte *)(iVar5 + 0x15a0cfd) | 4;
    *(undefined4 *)(iVar5 + 0x15a0cf8) = 0;
    return;
  }
  *puVar4 = (char)param_2;
  bVar1 = (&DAT_080e6df8)[param_2];
  if (bVar1 < 2) {
    puVar4 = puVar4 + 1;
    if (bVar1 != 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x9a44) + 1;
      **(undefined4 **)(param_1 + 0x9a44) = param_3;
      *(undefined4 **)(param_1 + 0x9a44) = puVar2;
      *(undefined4 **)(param_1 + 0x9a4c) = puVar2;
    }
    *(undefined **)(param_1 + 0x9a48) = puVar4;
    *(undefined **)(param_1 + 0x9a40) = puVar4;
    if (0x400 < (int)puVar4 - (param_1 + 0x61ab0)) {
      FUN_08050498(param_1);
    }
    if (*(char *)(param_1 + 0x9a8f) != '\0') {
      FUN_08050498(param_1);
      *(undefined *)(param_1 + 0x9a8f) = 1;
      return;
    }
    return;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x9a44);
  *puVar2 = param_3;
  *(byte *)(param_1 + 0x9a86) = bVar1 - 1;
  *(undefined4 **)(param_1 + 0x9a4c) = puVar2 + 1;
  return;
}


