/*
 * Ghidra decompilation
 *
 * Function : FUN_08069418
 * Address  : 08069418
 * Program  : drastic16
 */


int FUN_08069418(int param_1,void *param_2,void *param_3)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x410);
  if (iVar4 != 0) {
    ppvVar2 = *(void ***)(param_1 + 0x408);
    iVar3 = 0;
    do {
      if ((ppvVar2[3] == param_3) &&
         (iVar1 = memcmp(*ppvVar2,param_2,(int)param_3 << 2), iVar1 == 0)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      ppvVar2 = ppvVar2 + 6;
    } while (iVar3 != iVar4);
  }
  return -1;
}


