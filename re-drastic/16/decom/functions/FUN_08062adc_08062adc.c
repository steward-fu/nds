/*
 * Ghidra decompilation
 *
 * Function : FUN_08062adc
 * Address  : 08062adc
 * Program  : drastic16
 */


void FUN_08062adc(void **param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  if (param_1[3] != (void *)0x0) {
    pvVar2 = (void *)0x0;
    do {
      iVar1 = (int)pvVar2 * 4;
      pvVar2 = (void *)((int)pvVar2 + 1);
      free(*(void **)((int)param_1[1] + iVar1));
    } while (pvVar2 < param_1[3]);
  }
  free(param_1[1]);
  return;
}


