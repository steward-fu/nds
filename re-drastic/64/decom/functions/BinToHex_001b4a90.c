/*
 * Ghidra decompilation
 *
 * Function : BinToHex
 * Address  : 001b4a90
 * Program  : drastic64
 */


/* BinToHex(unsigned char const*, unsigned long, char*, wchar_t*, unsigned long) */

void BinToHex(uchar *param_1,ulong param_2,char *param_3,wchar_t *param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  wchar_t wVar7;
  wchar_t wVar8;
  char cVar9;
  bool bVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  
  if (param_2 == 0) {
    uVar12 = 0;
    uVar13 = 0;
LAB_001b4b20:
    bVar10 = param_3 != (char *)0x0 && param_5 != 0;
    if (param_3 == (char *)0x0 || param_5 == 0) {
LAB_001b4bcc:
      bVar10 = param_5 != 0;
      goto LAB_001b4b38;
    }
LAB_001b4b34:
    param_3[uVar13] = '\0';
  }
  else {
    if (param_4 == (wchar_t *)0x0) {
      if (param_3 != (char *)0x0) {
        uVar12 = 0;
        uVar13 = 0;
        uVar15 = 0;
        do {
          uVar14 = uVar13 + 1;
          uVar1 = param_1[uVar15] & 0xf;
          uVar2 = (int)(uint)param_1[uVar15] >> 4;
          cVar6 = (char)uVar2;
          cVar5 = cVar6 + 'W';
          if (uVar2 < 10) {
            cVar5 = cVar6 + '0';
          }
          cVar9 = (char)uVar1;
          cVar6 = cVar9 + 'W';
          if (uVar1 < 10) {
            cVar6 = cVar9 + '0';
          }
          uVar12 = uVar12 + 1;
          if ((ulong)uVar13 < param_5 - 2) {
            param_3[uVar13] = cVar5;
            uVar13 = uVar13 + 2;
            param_3[uVar14] = cVar6;
          }
          uVar15 = (ulong)uVar12;
        } while (uVar12 < param_2);
        bVar10 = param_3 != (char *)0x0 && param_5 != 0;
        uVar12 = 0;
        if (param_3 == (char *)0x0 || param_5 == 0) goto LAB_001b4bcc;
        goto LAB_001b4b34;
      }
      uVar13 = 0;
      do {
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_2);
      uVar12 = 0;
    }
    else {
      uVar15 = param_5 - 2;
      if (param_3 != (char *)0x0) {
        uVar14 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar11 = 0;
        do {
          uVar1 = uVar13 + 1;
          uVar2 = uVar12 + 1;
          uVar4 = (int)(uint)param_1[uVar11] >> 4;
          uVar3 = param_1[uVar11] & 0xf;
          wVar7 = uVar4 + L'0';
          if (9 < uVar4) {
            wVar7 = uVar4 + L'W';
          }
          wVar8 = uVar3 + L'0';
          if (9 < uVar3) {
            wVar8 = uVar3 + L'W';
          }
          uVar14 = uVar14 + 1;
          if (uVar13 < uVar15) {
            param_3[uVar13] = (char)wVar7;
            uVar13 = uVar13 + 2;
            param_3[uVar1] = (char)wVar8;
          }
          uVar11 = (ulong)uVar12;
          if (uVar12 < uVar15) {
            uVar12 = uVar12 + 2;
            param_4[uVar11] = wVar7;
            param_4[uVar2] = wVar8;
          }
          uVar11 = (ulong)uVar14;
        } while (uVar14 < param_2);
        goto LAB_001b4b20;
      }
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      do {
        uVar14 = uVar12 + 1;
        uVar1 = param_1[uVar11] & 0xf;
        uVar2 = (int)(uint)param_1[uVar11] >> 4;
        wVar7 = uVar2 + L'W';
        if (uVar2 < 10) {
          wVar7 = uVar2 + L'0';
        }
        wVar8 = uVar1 + L'W';
        if (uVar1 < 10) {
          wVar8 = uVar1 + L'0';
        }
        uVar13 = uVar13 + 1;
        uVar11 = (ulong)uVar12;
        if (uVar12 < uVar15) {
          uVar12 = uVar12 + 2;
          param_4[uVar11] = wVar7;
          param_4[uVar14] = wVar8;
        }
        uVar11 = (ulong)uVar13;
      } while (uVar13 < param_2);
    }
    bVar10 = param_5 != 0;
  }
LAB_001b4b38:
  if (param_4 != (wchar_t *)0x0 && bVar10) {
    param_4[uVar12] = L'\0';
  }
  return;
}


