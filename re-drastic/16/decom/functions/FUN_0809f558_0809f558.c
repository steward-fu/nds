/*
 * Ghidra decompilation
 *
 * Function : FUN_0809f558
 * Address  : 0809f558
 * Program  : drastic16
 */


void FUN_0809f558(int param_1,wchar_t *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  wchar_t *__dest;
  wchar_t *local_20;
  
  local_20 = param_2;
  if (param_2 == (wchar_t *)0x0) {
    local_20 = L"";
  }
  uVar1 = FUN_0809f0b8(param_1);
  sVar2 = wcslen(local_20);
  FUN_0809fb4c(param_1,sVar2 + 1);
  __dest = (wchar_t *)FUN_0809f21c(param_1,uVar1);
  wcscpy(__dest,local_20);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


