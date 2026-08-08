/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4678
 * Address  : 080b4678
 * Program  : drastic16
 */


void FUN_080b4678(int param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 != 0) {
    FUN_080a6194(param_1,param_3);
    __dest = (void *)FUN_080a609c(param_1,*(undefined4 *)(param_1 + 0x14));
    memcpy(__dest,param_2,param_3);
    *(size_t *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
  }
  return;
}


