/*
 * Ghidra decompilation
 *
 * Function : ReadCommentData
 * Address  : 001b98a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Archive::ReadCommentData(Array<wchar_t>*) */

uint __thiscall Archive::ReadCommentData(Archive *this,Array *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  uchar *puVar5;
  ulong uVar6;
  ulong uVar7;
  wchar_t *pwVar8;
  uchar *local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = (uchar *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
                    /* try { // try from 001b98e8 to 001b9b73 has its CatchHandler @ 001b9b78 */
  uVar1 = ReadSubData(this,(Array *)&local_30,(File *)0x0);
  uVar3 = local_28;
  if ((uVar1 & 0xff) == 0) goto LAB_001b98f8;
  uVar6 = local_28 + 1;
  if (local_20 < uVar6) {
    local_28 = uVar6;
    if ((local_18 != 0 && local_18 <= uVar6) && (local_18 == 0 || uVar6 != local_18)) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
    }
    uVar7 = local_20 + 0x20 + (local_20 >> 2);
    if (uVar7 < local_28) {
      uVar7 = local_28;
    }
    puVar5 = (uchar *)realloc(local_30,uVar7);
    if (puVar5 == (uchar *)0x0) {
      ErrorHandler::MemoryError();
    }
    puVar5[local_28 - 1] = '\0';
    uVar2 = *(ulong *)(param_1 + 0x10);
    local_30 = puVar5;
    local_20 = uVar7;
    if (uVar2 < uVar6) goto LAB_001b9a54;
LAB_001b9964:
    pwVar8 = *(wchar_t **)param_1;
    *(ulong *)(param_1 + 8) = uVar6;
  }
  else {
    local_30[local_28] = '\0';
    uVar2 = *(ulong *)(param_1 + 0x10);
    local_28 = uVar6;
    if (uVar6 <= uVar2) goto LAB_001b9964;
LAB_001b9a54:
    uVar7 = *(ulong *)(param_1 + 0x18);
    *(ulong *)(param_1 + 8) = uVar6;
    if ((uVar7 != 0 && uVar7 <= uVar6) && (uVar7 == 0 || uVar6 != uVar7)) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
      uVar6 = *(ulong *)(param_1 + 8);
      uVar2 = *(ulong *)(param_1 + 0x10);
    }
    uVar7 = uVar2 + 0x20 + (uVar2 >> 2);
    if (uVar7 < uVar6) {
      uVar7 = uVar6;
    }
    pwVar8 = (wchar_t *)realloc(*(void **)param_1,uVar7 << 2);
    if (pwVar8 == (wchar_t *)0x0) {
      ErrorHandler::MemoryError();
    }
    *(wchar_t **)param_1 = pwVar8;
    *(ulong *)(param_1 + 0x10) = uVar7;
  }
  if (*(int *)(this + 0x11208) == 3) {
    UtfToWide((char *)local_30,pwVar8,*(ulong *)(param_1 + 8));
LAB_001b9aa4:
    pwVar8 = *(wchar_t **)param_1;
    uVar3 = wcslen(pwVar8);
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar3 <= uVar6) {
LAB_001b9abc:
      *(ulong *)(param_1 + 8) = uVar3;
      goto LAB_001b98f8;
    }
  }
  else {
    if ((*(uint *)(this + 0xcae4) & 1) == 0) {
      CharToWide((char *)local_30,pwVar8,*(ulong *)(param_1 + 8));
      goto LAB_001b9aa4;
    }
    RawToWide(local_30,pwVar8,uVar3 >> 1);
    pwVar8 = *(wchar_t **)param_1;
    pwVar8[uVar3 >> 1] = L'\0';
    uVar3 = wcslen(pwVar8);
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar3 <= uVar6) goto LAB_001b9abc;
  }
  uVar7 = *(ulong *)(param_1 + 0x18);
  *(ulong *)(param_1 + 8) = uVar3;
  if ((uVar7 != 0 && uVar7 <= uVar3) && (uVar7 == 0 || uVar3 != uVar7)) {
    ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
    ErrorHandler::MemoryError();
    pwVar8 = *(wchar_t **)param_1;
    uVar3 = *(ulong *)(param_1 + 8);
    uVar6 = *(ulong *)(param_1 + 0x10);
  }
  uVar6 = uVar6 + 0x20 + (uVar6 >> 2);
  if (uVar6 < uVar3) {
    uVar6 = uVar3;
  }
  pvVar4 = realloc(pwVar8,uVar6 << 2);
  if (pvVar4 == (void *)0x0) {
    ErrorHandler::MemoryError();
  }
  *(void **)param_1 = pvVar4;
  *(ulong *)(param_1 + 0x10) = uVar6;
LAB_001b98f8:
  if (local_30 != (uchar *)0x0) {
    free(local_30);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


