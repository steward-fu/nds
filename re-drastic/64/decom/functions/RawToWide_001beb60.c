/*
 * Ghidra decompilation
 *
 * Function : RawToWide
 * Address  : 001beb60
 * Program  : drastic64
 */


/* RawToWide(unsigned char const*, wchar_t*, unsigned long) */

void RawToWide(uchar *param_1,wchar_t *param_2,ulong param_3)

{
  byte *pbVar1;
  wchar_t wVar2;
  byte bVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      pbVar1 = param_1 + 1;
      bVar3 = *param_1;
      param_1 = param_1 + 2;
      wVar2 = (uint)bVar3 + (uint)*pbVar1 * 0x100;
      param_2[uVar4] = wVar2;
      uVar4 = uVar4 + 1;
      if (wVar2 == L'\0') {
        return;
      }
    } while (param_3 != uVar4);
  }
  return;
}


