/*
 * Ghidra decompilation
 *
 * Function : WideToUtf
 * Address  : 001beba0
 * Program  : drastic64
 */


/* WideToUtf(wchar_t const*, char*, unsigned long) */

void WideToUtf(wchar_t *param_1,char *param_2,ulong param_3)

{
  wchar_t wVar1;
  byte bVar2;
  wchar_t *pwVar3;
  long lVar4;
  long lVar5;
  
  wVar1 = *param_1;
  lVar4 = param_3 - 1;
  if ((wVar1 != L'\0') && (lVar5 = param_3 - 2, -1 < lVar5)) {
    do {
      pwVar3 = param_1 + 1;
      bVar2 = (byte)wVar1;
      if ((uint)wVar1 < 0x80) {
        *param_2 = bVar2;
        param_2 = (char *)((byte *)param_2 + 1);
LAB_001bebd8:
        wVar1 = *pwVar3;
        param_1 = pwVar3;
        lVar4 = lVar5;
      }
      else {
        if (0x7ff < (uint)wVar1) {
          if ((uint)(wVar1 + L'\xffff2800') < 0x400) {
            if ((uint)(param_1[1] + L'\xffff2400') < 0x400) {
              wVar1 = param_1[1] + L'␀' + (wVar1 + L'\xffff2800') * 0x400;
              pwVar3 = param_1 + 2;
            }
            else {
LAB_001bec58:
              lVar5 = lVar5 + -2;
              if (-1 < lVar5) {
                *param_2 = (byte)((uint)wVar1 >> 0xc) | 0xe0;
                ((byte *)param_2)[1] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
                ((byte *)param_2)[2] = bVar2 & 0x3f | 0x80;
                param_2 = (char *)((byte *)param_2 + 3);
                goto LAB_001bebd8;
              }
            }
          }
          else {
            if ((uint)wVar1 < 0x10000) goto LAB_001bec58;
            if (0x1fffff < (uint)wVar1) goto LAB_001bebd8;
          }
          lVar5 = lVar5 + -3;
          if (-1 < lVar5) {
            *param_2 = (byte)((uint)wVar1 >> 0x12) | 0xf0;
            ((byte *)param_2)[1] = (byte)((uint)wVar1 >> 0xc) & 0x3f | 0x80;
            ((byte *)param_2)[2] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
            ((byte *)param_2)[3] = (byte)wVar1 & 0x3f | 0x80;
            param_2 = (char *)((byte *)param_2 + 4);
          }
          goto LAB_001bebd8;
        }
        lVar4 = lVar4 + -2;
        if (lVar4 == -1) break;
        *param_2 = (byte)((uint)wVar1 >> 6) | 0xc0;
        ((byte *)param_2)[1] = bVar2 & 0x3f | 0x80;
        wVar1 = *pwVar3;
        param_1 = pwVar3;
        param_2 = (char *)((byte *)param_2 + 2);
      }
      if ((wVar1 == L'\0') || (lVar5 = lVar4 + -1, lVar5 < 0)) break;
    } while( true );
  }
  *param_2 = 0;
  return;
}


