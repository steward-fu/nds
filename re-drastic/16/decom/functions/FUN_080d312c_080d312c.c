/*
 * Ghidra decompilation
 *
 * Function : FUN_080d312c
 * Address  : 080d312c
 * Program  : drastic16
 */


void * FUN_080d312c(int param_1,void *param_2,int param_3)

{
  char cVar1;
  void *__dest;
  size_t __n;
  
  cVar1 = *(char *)(param_1 + param_3 + 0x29);
  __dest = param_2;
  if ((cVar1 != *(char *)(param_1 + param_3 + 0x2a)) &&
     (__dest = (void *)FUN_080d2f90(param_1,param_3 + 1), __dest != (void *)0x0)) {
    __n = FUN_080d2ad4(param_1,param_3);
    memcpy(__dest,param_2,__n);
    FUN_080d2a30(param_1,param_2,cVar1);
  }
  return __dest;
}


