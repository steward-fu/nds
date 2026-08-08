/*
 * Ghidra decompilation
 *
 * Function : UtfToWide
 * Address  : 001bedf0
 * Program  : drastic64
 */


/* UtfToWide(char const*, wchar_t*, unsigned long) */

undefined4 UtfToWide(char *param_1,wchar_t *param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  wchar_t wVar4;
  
  wVar4 = (wchar_t)(byte)*param_1;
  lVar2 = param_3 - 1;
  uVar1 = 1;
  if (*param_1 == 0) {
LAB_001bee34:
    if (param_2 != (wchar_t *)0x0) {
LAB_001bee38:
      *param_2 = L'\0';
    }
    return uVar1;
  }
LAB_001bee10:
  if ((uint)wVar4 < 0x80) {
    param_1 = (char *)((byte *)param_1 + 1);
LAB_001bee1c:
    if (param_2 == (wchar_t *)0x0) goto LAB_001bee2c;
    lVar3 = lVar2 + -1;
    if (lVar3 < 0) goto LAB_001bee38;
  }
  else {
    if ((uint)wVar4 >> 5 == 6) {
      if ((((byte *)param_1)[1] & 0xc0) != 0x80) goto LAB_001bef50;
      wVar4 = (wVar4 & 0x1fU) << 6 | ((byte *)param_1)[1] & 0x3f;
      param_1 = (char *)((byte *)param_1 + 2);
      goto LAB_001bee1c;
    }
    if ((uint)wVar4 >> 4 == 0xe) {
      if (((((byte *)param_1)[1] & 0xc0) == 0x80) && ((((byte *)param_1)[2] & 0xc0) == 0x80)) {
        wVar4 = (wVar4 & 0xfU) << 0xc | ((byte *)param_1)[2] & 0x3f |
                (((byte *)param_1)[1] & 0x3f) << 6;
        param_1 = (char *)((byte *)param_1 + 3);
        goto LAB_001bee1c;
      }
LAB_001bef50:
      uVar1 = 0;
      if (param_2 == (wchar_t *)0x0) {
        return 0;
      }
      goto LAB_001bee38;
    }
    if (((((uint)wVar4 >> 3 != 0x1e) || ((((byte *)param_1)[1] & 0xc0) != 0x80)) ||
        ((((byte *)param_1)[2] & 0xc0) != 0x80)) || ((((byte *)param_1)[3] & 0xc0) != 0x80))
    goto LAB_001bef50;
    wVar4 = (((byte *)param_1)[1] & 0x3f) << 0xc | (((byte *)param_1)[2] & 0x3f) << 6 |
            (wVar4 & 7U) << 0x12 | ((byte *)param_1)[3] & 0x3f;
    param_1 = (char *)((byte *)param_1 + 4);
    if (param_2 == (wchar_t *)0x0) {
      if (0x10ffff < (uint)wVar4) {
        uVar1 = 0;
      }
      goto LAB_001bee2c;
    }
    lVar3 = lVar2 + -1;
    if (lVar3 < 0) goto LAB_001bee38;
    if (0xffff < (uint)wVar4) {
      lVar3 = lVar2 + -2;
      if (lVar3 != -1) {
        if (0x10ffff < (uint)wVar4) {
          uVar1 = 0;
          lVar2 = lVar3;
          goto LAB_001bee2c;
        }
        goto LAB_001bee28;
      }
      goto LAB_001bee38;
    }
  }
LAB_001bee28:
  *param_2 = wVar4;
  param_2 = param_2 + 1;
  lVar2 = lVar3;
LAB_001bee2c:
  wVar4 = (wchar_t)(byte)*param_1;
  if (wVar4 == L'\0') goto LAB_001bee34;
  goto LAB_001bee10;
}


