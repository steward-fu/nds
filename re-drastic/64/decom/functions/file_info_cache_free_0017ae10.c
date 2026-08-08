/*
 * Ghidra decompilation
 *
 * Function : file_info_cache_free
 * Address  : 0017ae10
 * Program  : drastic64
 */


void file_info_cache_free(void **param_1)

{
  uint uVar1;
  long lVar2;
  void *__ptr;
  ulong uVar3;
  
  __ptr = *param_1;
  if (__ptr != (void *)0x0) {
    if (*(int *)(param_1 + 2) != 0) {
      uVar3 = 0;
      do {
        lVar2 = uVar3 * 0x20;
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulong)uVar1;
        free(*(void **)((long)__ptr + lVar2 + 0x18));
        __ptr = *param_1;
      } while (uVar1 < *(uint *)(param_1 + 2));
    }
    free(__ptr);
    free(param_1[1]);
    *param_1 = (void *)0x0;
    param_1[1] = (void *)0x0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}


