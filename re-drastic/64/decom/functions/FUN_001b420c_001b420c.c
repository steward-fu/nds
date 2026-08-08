/*
 * Ghidra decompilation
 *
 * Function : FUN_001b420c
 * Address  : 001b420c
 * Program  : drastic64
 */


undefined8 FUN_001b420c(long *param_1,char *param_2,ulong param_3)

{
  wchar_t *__s;
  wchar_t *__ptr;
  size_t sVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_3 == 0) {
    __ptr = (wchar_t *)0x0;
    uVar3 = param_1[4];
    if ((ulong)param_1[1] <= uVar3) {
      return 0;
    }
  }
  else {
    uVar3 = param_3;
    if (param_3 < 0x20) {
      uVar3 = 0x20;
    }
    __ptr = (wchar_t *)malloc(uVar3 << 2);
    if (__ptr == (wchar_t *)0x0) {
      ErrorHandler::MemoryError();
      uVar3 = param_1[4];
      if ((ulong)param_1[1] <= uVar3) {
        return 0;
      }
    }
    else {
      uVar3 = param_1[4];
      if ((ulong)param_1[1] <= uVar3) {
        uVar2 = 0;
        goto LAB_001b42a4;
      }
    }
  }
  __s = (wchar_t *)(*param_1 + uVar3 * 4);
  sVar1 = wcslen(__s);
  param_1[4] = uVar3 + sVar1 + 1;
  wcsncpyz(__ptr,__s,param_3);
  WideToChar(__ptr,param_2,param_3);
  uVar2 = 1;
  if (__ptr == (wchar_t *)0x0) {
    return 1;
  }
LAB_001b42a4:
  free(__ptr);
  return uVar2;
}


