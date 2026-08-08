/*
 * Ghidra decompilation
 *
 * Function : FUN_080dfa28
 * Address  : 080dfa28
 * Program  : drastic16
 */


bool FUN_080dfa28(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  size_t __n;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint local_c;
  
  if (0x10000U - *(int *)(param_1 + 0x104c) < 0x100) {
    __n = *(int *)(param_1 + 0x1048) - *(int *)(param_1 + 0x104c);
    memcpy(*(void **)(param_1 + 0x10),
           (void *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x104c)),__n);
    *(undefined4 *)(param_1 + 0x104c) = 0;
    *(size_t *)(param_1 + 0x1048) = __n;
    FUN_080df7fc(param_1);
  }
  if (*(int *)(param_1 + 0x104c) + 7U <= *(uint *)(param_1 + 0x1048)) {
    FUN_080b4678(param_2,*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x104c),7);
    *(int *)(param_1 + 0x104c) = *(int *)(param_1 + 0x104c) + 7;
    iVar1 = FUN_080b4810(param_2);
    iVar2 = FUN_080b4a60(param_2,4);
    lVar5 = FUN_080b497c(param_2);
    local_c = ((int)lVar5 + iVar2) - 3;
    if ((((int)local_c < 0) || (iVar2 == 0)) || (lVar5 == 0)) {
      *(undefined *)(param_1 + 0x1020) = 0;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x1048) - *(int *)(param_1 + 0x104c);
      do {
        do {
          if ((int)local_c < 1) {
            iVar2 = FUN_080b4d1c(param_2);
            return iVar2 == iVar1;
          }
          uVar4 = uVar3;
          if (local_c <= uVar3) {
            uVar4 = local_c;
          }
          FUN_080b4678(param_2,*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x104c),uVar4);
          *(uint *)(param_1 + 0x104c) = *(int *)(param_1 + 0x104c) + uVar4;
          local_c = local_c - uVar4;
        } while ((int)local_c < 1);
        *(undefined4 *)(param_1 + 0x104c) = 0;
        *(undefined4 *)(param_1 + 0x1048) = 0;
        iVar2 = FUN_080df7fc(param_1);
      } while (iVar2 != 0);
    }
  }
  return false;
}


