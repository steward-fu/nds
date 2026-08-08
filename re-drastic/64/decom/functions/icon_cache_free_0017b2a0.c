/*
 * Ghidra decompilation
 *
 * Function : icon_cache_free
 * Address  : 0017b2a0
 * Program  : drastic64
 */


void icon_cache_free(void **param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  if (*(int *)(param_1 + 3) != 0) {
    uVar3 = 0;
    do {
      lVar1 = uVar3 * 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar2;
      free(*(void **)((long)param_1[1] + lVar1));
    } while (uVar2 < *(uint *)(param_1 + 3));
  }
  free(param_1[1]);
  return;
}


