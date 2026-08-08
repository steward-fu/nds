/*
 * Ghidra decompilation
 *
 * Function : ConvertNameCase
 * Address  : 001bc180
 * Program  : drastic64
 */


/* Archive::ConvertNameCase(wchar_t*) */

void __thiscall Archive::ConvertNameCase(Archive *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x7600) + 0xc2a4);
  if (iVar1 == 1) {
    wcsupper(param_1);
    iVar1 = *(int *)(*(long *)(this + 0x7600) + 0xc2a4);
  }
  if (iVar1 == 2) {
    wcslower(param_1);
    return;
  }
  return;
}


