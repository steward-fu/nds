/*
 * Ghidra decompilation
 *
 * Function : FUN_08062708
 * Address  : 08062708
 * Program  : drastic16
 */


void FUN_08062708(void **param_1)

{
  void *__ptr;
  int iVar1;
  void *pvVar2;
  
  __ptr = *param_1;
  if (__ptr == (void *)0x0) {
    return;
  }
  if (param_1[2] != (void *)0x0) {
    pvVar2 = (void *)0x0;
    iVar1 = 0;
    do {
      pvVar2 = (void *)((int)pvVar2 + 1);
      free(*(void **)((int)__ptr + iVar1 + 0x14));
      __ptr = *param_1;
      iVar1 = iVar1 + 0x18;
    } while (pvVar2 < param_1[2]);
  }
  free(__ptr);
  free(param_1[1]);
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  param_1[2] = (void *)0x0;
  return;
}


