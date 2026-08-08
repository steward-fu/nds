/*
 * Ghidra decompilation
 *
 * Function : FUN_001b989c
 * Address  : 001b989c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001b989c(Archive *param_1,wchar_t **param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  uchar *puVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uchar *puStack_30;
  wchar_t *pwStack_28;
  wchar_t *pwStack_20;
  wchar_t *pwStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  puStack_30 = (uchar *)0x0;
  pwStack_28 = (wchar_t *)0x0;
  pwStack_20 = (wchar_t *)0x0;
  pwStack_18 = (wchar_t *)0x0;
  uVar1 = Archive::ReadSubData(param_1,(Array *)&puStack_30,(File *)0x0);
  pwVar5 = pwStack_28;
  if ((uVar1 & 0xff) == 0) goto LAB_001b98f8;
  pwVar3 = (wchar_t *)((long)pwStack_28 + 1);
  if (pwStack_20 < pwVar3) {
    pwStack_28 = pwVar3;
    if ((pwStack_18 != (wchar_t *)0x0 && pwStack_18 <= pwVar3) &&
        (pwStack_18 == (wchar_t *)0x0 || pwVar3 != pwStack_18)) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
    }
    pwVar6 = (wchar_t *)((long)pwStack_20 + ((ulong)pwStack_20 >> 2) + 0x20);
    if (pwVar6 < pwStack_28) {
      pwVar6 = pwStack_28;
    }
    puVar4 = (uchar *)realloc(puStack_30,(size_t)pwVar6);
    if (puVar4 == (uchar *)0x0) {
      ErrorHandler::MemoryError();
    }
    puVar4[(long)pwStack_28 - 1] = '\0';
    pwVar2 = param_2[2];
    puStack_30 = puVar4;
    pwStack_20 = pwVar6;
    if (pwVar2 < pwVar3) goto LAB_001b9a54;
LAB_001b9964:
    pwVar6 = *param_2;
    param_2[1] = pwVar3;
  }
  else {
    puStack_30[(long)pwStack_28] = '\0';
    pwVar2 = param_2[2];
    pwStack_28 = pwVar3;
    if (pwVar3 <= pwVar2) goto LAB_001b9964;
LAB_001b9a54:
    pwVar6 = param_2[3];
    param_2[1] = pwVar3;
    if ((pwVar6 != (wchar_t *)0x0 && pwVar6 <= pwVar3) &&
        (pwVar6 == (wchar_t *)0x0 || pwVar3 != pwVar6)) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
      pwVar3 = param_2[1];
      pwVar2 = param_2[2];
    }
    pwVar2 = (wchar_t *)((long)pwVar2 + ((ulong)pwVar2 >> 2) + 0x20);
    if (pwVar2 < pwVar3) {
      pwVar2 = pwVar3;
    }
    pwVar6 = (wchar_t *)realloc(*param_2,(long)pwVar2 << 2);
    if (pwVar6 == (wchar_t *)0x0) {
      ErrorHandler::MemoryError();
    }
    *param_2 = pwVar6;
    param_2[2] = pwVar2;
  }
  if (*(int *)(param_1 + 0x11208) == 3) {
    UtfToWide((char *)puStack_30,pwVar6,(ulong)param_2[1]);
LAB_001b9aa4:
    pwVar6 = *param_2;
    pwVar3 = (wchar_t *)wcslen(pwVar6);
    pwVar5 = param_2[2];
    if (pwVar3 <= pwVar5) {
LAB_001b9abc:
      param_2[1] = pwVar3;
      goto LAB_001b98f8;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0xcae4) & 1) == 0) {
      CharToWide((char *)puStack_30,pwVar6,(ulong)param_2[1]);
      goto LAB_001b9aa4;
    }
    RawToWide(puStack_30,pwVar6,(ulong)pwVar5 >> 1);
    pwVar6 = *param_2;
    pwVar6[(ulong)pwVar5 >> 1] = L'\0';
    pwVar3 = (wchar_t *)wcslen(pwVar6);
    pwVar5 = param_2[2];
    if (pwVar3 <= pwVar5) goto LAB_001b9abc;
  }
  pwVar2 = param_2[3];
  param_2[1] = pwVar3;
  if ((pwVar2 != (wchar_t *)0x0 && pwVar2 <= pwVar3) &&
      (pwVar2 == (wchar_t *)0x0 || pwVar3 != pwVar2)) {
    ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
    ErrorHandler::MemoryError();
    pwVar6 = *param_2;
    pwVar3 = param_2[1];
    pwVar5 = param_2[2];
  }
  pwVar5 = (wchar_t *)((long)pwVar5 + ((ulong)pwVar5 >> 2) + 0x20);
  if (pwVar5 < pwVar3) {
    pwVar5 = pwVar3;
  }
  pwVar3 = (wchar_t *)realloc(pwVar6,(long)pwVar5 << 2);
  if (pwVar3 == (wchar_t *)0x0) {
    ErrorHandler::MemoryError();
  }
  *param_2 = pwVar3;
  param_2[2] = pwVar5;
LAB_001b98f8:
  if (puStack_30 != (uchar *)0x0) {
    free(puStack_30);
  }
  if (lStack_8 - ___stack_chk_guard == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


