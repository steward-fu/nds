/*
 * Ghidra decompilation
 *
 * Function : FUN_0806f56c
 * Address  : 0806f56c
 * Program  : drastic16
 */


void FUN_0806f56c(uint *param_1,int param_2,void *param_3)

{
  uint uVar1;
  void *__s;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      uVar1 = *param_1;
      *param_1 = 0;
      __s = param_3;
      for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
        if ((uVar1 & 1) != 0) {
          memset(__s,0,0x80);
        }
        __s = (void *)((int)__s + 0x80);
      }
      iVar2 = iVar2 + 1;
      param_3 = (void *)((int)param_3 + 0x1000);
      param_1 = param_1 + 1;
    } while (iVar2 != param_2);
    return;
  }
  return;
}


