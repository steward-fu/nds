/*
 * Ghidra decompilation
 *
 * Function : FUN_001b403c
 * Address  : 001b403c
 * Program  : drastic64
 */


void FUN_001b403c(void **param_1,wchar_t *param_2)

{
  wchar_t *__s;
  size_t sVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar5 = param_1[1];
  __s = L"";
  if (param_2 != (wchar_t *)0x0) {
    __s = param_2;
  }
  sVar1 = wcslen(__s);
  pvVar3 = param_1[2];
  pvVar4 = (void *)((long)pvVar5 + sVar1 + 1);
  param_1[1] = pvVar4;
  if (pvVar3 < pvVar4) {
    pvVar2 = param_1[3];
    if ((pvVar2 != (void *)0x0 && pvVar2 <= pvVar4) && (pvVar2 == (void *)0x0 || pvVar4 != pvVar2))
    {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
      pvVar4 = param_1[1];
      pvVar3 = param_1[2];
    }
    pvVar3 = (void *)((long)pvVar3 + ((ulong)pvVar3 >> 2) + 0x20);
    if (pvVar3 < pvVar4) {
      pvVar3 = pvVar4;
    }
    pvVar4 = realloc(*param_1,(long)pvVar3 << 2);
    if (pvVar4 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    *param_1 = pvVar4;
    param_1[2] = pvVar3;
  }
  else {
    pvVar4 = *param_1;
  }
  wcscpy((wchar_t *)((long)pvVar4 + (long)pvVar5 * 4),__s);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
  return;
}


