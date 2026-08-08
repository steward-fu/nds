/*
 * Ghidra decompilation
 *
 * Function : FUN_08068774
 * Address  : 08068774
 * Program  : drastic16
 */


void FUN_08068774(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x410) != 0) {
    uVar1 = 0;
    uVar2 = uVar1;
    do {
      iVar3 = *(int *)(param_1 + 0x408);
      uVar2 = uVar2 + 1;
      free(*(void **)(iVar3 + uVar1 + 4));
      free(*(void **)(iVar3 + uVar1));
      uVar1 = uVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x410));
  }
  free(*(void **)(param_1 + 0x408));
  free(*(void **)(param_1 + 0x40c));
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  return;
}


