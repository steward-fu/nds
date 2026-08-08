/*
 * Ghidra decompilation
 *
 * Function : SzFolder_FindBindPairForOutStream
 * Address  : 001ad130
 * Program  : drastic64
 */


int SzFolder_FindBindPairForOutStream(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = 0;
    piVar3 = (int *)(*(long *)(param_1 + 8) + 4);
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 2;
      if (iVar1 == param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)(param_1 + 0x24));
  }
  return -1;
}


