/*
 * Ghidra decompilation
 *
 * Function : FUN_080b76e8
 * Address  : 080b76e8
 * Program  : drastic16
 */


void FUN_080b76e8(void *param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  if (*param_2 == L'\0') {
    *(undefined *)((int)param_1 + 0x200) = 0;
    memset(param_1,0,0x200);
  }
  else {
    *(undefined *)((int)param_1 + 0x200) = 1;
    sVar1 = wcslen(param_2);
    FUN_080b75ec(param_1,param_2,sVar1 + 1,param_1,0x80,1);
  }
  return;
}


