/*
 * Ghidra decompilation
 *
 * Function : FUN_080a1c78
 * Address  : 080a1c78
 * Program  : drastic16
 */


undefined4 FUN_080a1c78(wchar_t *param_1)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  
  if ((*param_1 == L'\0') || (pwVar1 = wcspbrk(param_1,L"?*<>|\""), pwVar1 != (wchar_t *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


