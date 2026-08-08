/*
 * Ghidra decompilation
 *
 * Function : FUN_080153f4
 * Address  : 080153f4
 * Program  : drastic16
 */


void FUN_080153f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_1 + param_2 * 0x18;
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar1 == 0) {
    piVar3 = *(int **)(iVar2 + 0xc);
    *(int **)(param_1 + 0x180) = piVar3;
  }
  else {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    piVar3 = *(int **)(iVar2 + 0xc);
  }
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + param_2 * 0x18);
    piVar3[4] = iVar1;
    *piVar3 = *piVar3 + iVar2;
  }
  return;
}


