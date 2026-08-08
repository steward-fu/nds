/*
 * Ghidra decompilation
 *
 * Function : FUN_0805c03c
 * Address  : 0805c03c
 * Program  : drastic16
 */


void FUN_0805c03c(int param_1,undefined4 param_2)

{
  ssize_t sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_c;
  
  local_c = param_2;
  if ((*(char *)(param_1 + 0xce7) != '\0') && (*(char *)(param_1 + 0xce8) != '\0')) {
    FUN_0805d7f8(param_1 + 0x8b4);
    return;
  }
  if (*(int *)(param_1 + 0x89c) != 0) {
    sVar1 = write(*(int *)(param_1 + 0x898),&local_c,4);
    if (sVar1 < 0) {
      puts("ERROR: DLDI write failed");
    }
    iVar3 = *(int *)(param_1 + 0x89c) + -1;
    *(int *)(param_1 + 0x89c) = iVar3;
    if ((iVar3 == 0) &&
       (*(uint *)(*(int *)(param_1 + 0x888) + 0x1a4) =
             *(uint *)(*(int *)(param_1 + 0x888) + 0x1a4) & 0x7f7fffff,
       (*(uint *)(*(int *)(param_1 + 0x888) + 0x1a0) & 0x4000) != 0)) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x880) + 0x15a0c78);
      uVar2 = *(uint *)(iVar3 + 0x214) | 0x80000;
      *(uint *)(iVar3 + 0x214) = uVar2;
      iVar4 = *(int *)(param_1 + 0x880);
      if ((*(byte *)(iVar4 + 0x15a0cfd) & 6) == 0) {
        uVar2 = uVar2 & -*(int *)(iVar3 + 0x208) & *(uint *)(iVar3 + 0x210);
        *(uint *)(iVar4 + 0x15a0cf8) = uVar2;
      }
      else {
        uVar2 = *(uint *)(iVar4 + 0x15a0cf8);
      }
      if (uVar2 != 0) {
        *(uint *)(iVar4 + 0x15a0f74) = *(uint *)(iVar4 + 0x15a0f74) | 2;
      }
      return;
    }
  }
  return;
}


