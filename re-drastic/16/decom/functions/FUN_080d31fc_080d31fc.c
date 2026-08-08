/*
 * Ghidra decompilation
 *
 * Function : FUN_080d31fc
 * Address  : 080d31fc
 * Program  : drastic16
 */


void * FUN_080d31fc(int param_1,void *param_2,int param_3,int param_4)

{
  void *__dest;
  size_t __n;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + param_3 + 0x29);
  uVar2 = (uint)*(byte *)(param_1 + param_4 + 0x29);
  if (uVar1 != uVar2) {
    if (*(int *)(param_1 + (uVar2 + 0x2e) * 4) == 0) {
      FUN_080d2b48(param_1,param_2,uVar1,uVar2);
    }
    else {
      __dest = (void *)FUN_080d2a80(param_1,uVar2);
      __n = FUN_080d2ad4(param_1,param_4);
      memcpy(__dest,param_2,__n);
      FUN_080d2a30(param_1,param_2,uVar1);
      param_2 = __dest;
    }
  }
  return param_2;
}


