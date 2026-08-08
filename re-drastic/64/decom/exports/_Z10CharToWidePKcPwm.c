/*
 * Ghidra decompilation
 *
 * Function : _Z10CharToWidePKcPwm
 * Address  : 001be960
 * Program  : drastic64
 */


/* CharToWide(char const*, wchar_t*, unsigned long) */

undefined8 CharToWide(char *param_1,wchar_t *param_2,ulong param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  *param_2 = L'\0';
  sVar4 = mbstowcs(param_2,param_1,param_3);
  if ((sVar4 == 0xffffffffffffffff) || ((sVar4 == 0 && (*param_1 != '\0')))) {
    uVar5 = 0;
    if (1 < param_3) {
      uVar7 = 0;
      uVar9 = 0;
      bVar2 = false;
      uVar10 = 0;
      do {
        if (param_1[uVar10] == '\0') {
          uVar5 = 1;
          param_2[uVar7] = L'\0';
          goto LAB_001be9c8;
        }
        mbtowc((wchar_t *)0x0,(char *)0x0,0);
        sVar4 = __ctype_get_mb_cur_max();
        iVar3 = mbtowc(param_2 + uVar7,param_1 + uVar10,sVar4);
        if (iVar3 == -1) {
          uVar8 = (ulong)(uVar9 + 1);
          bVar1 = param_1[uVar10];
          if (-1 < param_1[uVar10]) break;
          if (bVar2) {
            uVar6 = (ulong)uVar9;
            uVar7 = uVar8;
            uVar9 = uVar9 + 1;
          }
          else {
            param_2[uVar7] = L'\xfffe';
            uVar9 = uVar9 + 2;
            uVar7 = (ulong)uVar9;
            if (param_3 <= uVar8) break;
            bVar1 = param_1[uVar10];
            uVar6 = uVar8;
          }
          uVar10 = uVar10 + 1;
          bVar2 = true;
          param_2[uVar6] = (uint)bVar1 + L'\xe000';
        }
        else {
          mblen((char *)0x0,0);
          sVar4 = __ctype_get_mb_cur_max();
          iVar3 = mblen(param_1 + uVar10,sVar4);
          uVar9 = uVar9 + 1;
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          uVar10 = uVar10 + iVar3;
          uVar7 = (ulong)uVar9;
        }
      } while (uVar7 < param_3);
      param_2[param_3 - 1] = L'\0';
      return 0;
    }
  }
  else {
    uVar5 = 1;
  }
  if (param_3 == 0) {
    return uVar5;
  }
LAB_001be9c8:
  param_2[param_3 - 1] = L'\0';
  return uVar5;
}


