/*
 * Ghidra decompilation
 *
 * Function : find_custom_cheat
 * Address  : 00181ea0
 * Program  : drastic64
 */


int find_custom_cheat(long param_1,void *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x420);
  if (iVar1 != 0) {
    iVar4 = 0;
    ppvVar3 = *(void ***)(param_1 + 0x410);
    do {
      if ((*(uint *)(ppvVar3 + 3) == param_3) &&
         (iVar2 = memcmp(*ppvVar3,param_2,(ulong)param_3 << 2), iVar2 == 0)) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      ppvVar3 = ppvVar3 + 5;
    } while (iVar4 != iVar1);
  }
  return -1;
}


