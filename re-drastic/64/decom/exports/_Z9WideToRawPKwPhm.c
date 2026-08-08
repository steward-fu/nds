/*
 * Ghidra decompilation
 *
 * Function : _Z9WideToRawPKwPhm
 * Address  : 001beb10
 * Program  : drastic64
 */


/* WideToRaw(wchar_t const*, unsigned char*, unsigned long) */

uchar * WideToRaw(wchar_t *param_1,uchar *param_2,ulong param_3)

{
  wchar_t *pwVar1;
  ulong uVar2;
  uchar *puVar3;
  
  if (param_3 != 0) {
    uVar2 = 0;
    puVar3 = param_2;
    do {
      *puVar3 = (uchar)param_1[uVar2];
      puVar3[1] = (uchar)((uint)param_1[uVar2] >> 8);
      pwVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
      if (*pwVar1 == L'\0') {
        return param_2;
      }
      puVar3 = puVar3 + 2;
    } while (param_3 != uVar2);
  }
  return param_2;
}


