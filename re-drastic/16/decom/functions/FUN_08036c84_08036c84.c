/*
 * Ghidra decompilation
 *
 * Function : FUN_08036c84
 * Address  : 08036c84
 * Program  : drastic16
 */


void FUN_08036c84(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  void *__s;
  int iVar2;
  size_t __n;
  
  if (param_3 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    uVar1 = *(ushort *)(param_1 + 0x462);
    __s = (void *)(param_2 + (uint)*(ushort *)(param_1 + 0x460));
    iVar2 = iVar2 + 1;
    __n = (uint)*(ushort *)(param_1 + 0x3f0) - ((uint)*(ushort *)(param_1 + 0x460) + (uint)uVar1);
    if (__n != 0) {
      memset(__s,-1,__n);
      __s = (void *)((int)__s + __n);
    }
    param_2 = (int)__s + (uint)uVar1;
  } while (iVar2 != param_3);
  return;
}


