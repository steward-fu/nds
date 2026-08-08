/*
 * Ghidra decompilation
 *
 * Function : FUN_001b453c
 * Address  : 001b453c
 * Program  : drastic64
 */


undefined8 FUN_001b453c(long *param_1,wchar_t **param_2)

{
  wchar_t *__s;
  size_t sVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_1[4];
  if (uVar3 < (ulong)param_1[1]) {
    __s = (wchar_t *)(*param_1 + uVar3 * 4);
    sVar1 = wcslen(__s);
    param_1[4] = uVar3 + 1 + sVar1;
    uVar2 = 1;
    if (param_2 != (wchar_t **)0x0) {
      *param_2 = __s;
    }
  }
  else {
    uVar2 = 0;
    if (param_2 != (wchar_t **)0x0) {
      *param_2 = (wchar_t *)0x0;
      return uVar2;
    }
  }
  return uVar2;
}


