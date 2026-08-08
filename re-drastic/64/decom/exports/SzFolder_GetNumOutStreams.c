/*
 * Ghidra decompilation
 *
 * Function : SzFolder_GetNumOutStreams
 * Address  : 001ad0b0
 * Program  : drastic64
 */


int SzFolder_GetNumOutStreams(long *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    uVar1 = iVar2 - 1;
    iVar2 = 0;
    piVar3 = (int *)(*param_1 + 4);
    do {
      piVar4 = piVar3 + 8;
      iVar2 = iVar2 + *piVar3;
      piVar3 = piVar4;
    } while ((int *)(*param_1 + 0x24 + (ulong)uVar1 * 0x20) != piVar4);
  }
  return iVar2;
}


