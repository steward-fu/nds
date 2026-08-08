/*
 * Ghidra decompilation
 *
 * Function : FUN_080d5aec
 * Address  : 080d5aec
 * Program  : drastic16
 */


void FUN_080d5aec(void **param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  param_1[1] = (void *)((int)param_1[1] + param_2);
  if (param_1[2] < param_1[1]) {
    if ((param_1[3] != (void *)0x0) && (param_1[3] < param_1[1])) {
      FUN_080b7044(&DAT_081cd0a0,L"Maximum allowed array size (%u) is exceeded",param_1[3]);
      FUN_080b6efc(&DAT_081cd0a0);
    }
    pvVar2 = (void *)((int)param_1[2] + ((uint)param_1[2] >> 2) + 0x20);
    if (pvVar2 < param_1[1]) {
      pvVar2 = param_1[1];
    }
    pvVar1 = realloc(*param_1,(int)pvVar2 << 2);
    if (pvVar1 == (void *)0x0) {
      FUN_080b6efc(&DAT_081cd0a0);
    }
    *param_1 = pvVar1;
    param_1[2] = pvVar2;
  }
  return;
}


