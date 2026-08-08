/*
 * Ghidra decompilation
 *
 * Function : GenArcName
 * Address  : 080d30bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void GenArcName(wchar *ArcName,wchar *GenerateMask,uint ArcNumber,bool *ArcNumPresent)

{
  int iVar1;
  bool bVar2;
  int CurChar;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  wchar *ChPtr;
  wchar *ChPtr_1;
  size_t Length;
  int iVar6;
  wchar *pwVar7;
  uint uVar8;
  size_t PathLength;
  wchar *pwVar9;
  int iVar10;
  int WeekDay;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  size_t FieldPos;
  uint NCount;
  uint uVar14;
  int iVar15;
  int CharPos;
  uint uVar16;
  char *pcVar17;
  wchar wVar18;
  bool bVar19;
  bool Prefix;
  wchar_t *local_44d4;
  RarTime CurTime;
  RarLocalTime rlt;
  int CField [10];
  char Field [10] [6];
  wchar Mask [128];
  wchar DateText [128];
  wchar Ext [2048];
  wchar NewName [2048];
  
  iVar1 = __stack_chk_guard;
  wVar18 = *GenerateMask;
  bVar19 = wVar18 == 0x2b;
  if (bVar19) {
    wVar18 = GenerateMask[1];
    GenerateMask = GenerateMask + 1;
  }
  if (wVar18 == 0) {
    GenerateMask = (wchar *)&DAT_08144b80;
  }
  wcsncpyz(Mask,GenerateMask,0x80);
  if (Mask[0] != 0) {
    uVar11 = 0;
    wVar18 = Mask[0];
    uVar14 = uVar11;
    uVar16 = uVar11;
    do {
      if ((wVar18 - 0x7b & 0xfffffffd) == 0) {
        uVar14 = (uint)(wVar18 == 0x7b);
      }
      else if (uVar14 == 0) {
        iVar10 = toupperw(wVar18);
        if (iVar10 == 0x48) {
          uVar16 = 1;
        }
        else {
          uVar8 = uVar16;
          if (iVar10 != 0x4d) {
            uVar8 = 0;
          }
          if (uVar8 == 0) {
            if (iVar10 == 0x4e) {
              pcVar17 = Field[9] + uVar11 * 4 + 2;
              uVar13 = GetDigits(ArcNumber);
              NCount = 0;
              while( true ) {
                pcVar17 = pcVar17 + 4;
                iVar10 = toupperw(*(int *)pcVar17);
                if (iVar10 != 0x4e) break;
                NCount = NCount + 1;
              }
              if (NCount < uVar13) {
                sVar3 = wcslen((wchar_t *)(Mask + NCount + uVar11));
                wmemmove((wchar_t *)(Mask + uVar13 + uVar11),(wchar_t *)(Mask + NCount + uVar11),
                         sVar3 + 1);
                wmemset((wchar_t *)(Mask + uVar11),L'N',uVar13);
                NCount = uVar13;
              }
              uVar11 = uVar11 + (NCount - 1);
              *ArcNumPresent = true;
            }
          }
          else {
            uVar16 = 1;
            Mask[uVar11] = 0x49;
          }
        }
      }
      uVar11 = uVar11 + 1;
      wVar18 = Mask[uVar11];
    } while (wVar18 != 0);
  }
  RarTime::RarTime(&CurTime);
  RarTime::SetCurrentTime(&CurTime);
  RarTime::GetLocal(&CurTime,&rlt);
  if (ArcName == (wchar *)0x0) {
LAB_080d371c:
    Ext[0] = 0;
    sVar3 = wcslen((wchar_t *)ArcName);
    iVar10 = sVar3 - 1;
    pwVar7 = ArcName;
    if (-1 < iVar10) {
      if (ArcName[iVar10] != 0x2f) {
        pwVar9 = ArcName + sVar3 + 0x3fffffff;
        do {
          bVar2 = iVar10 == 0;
          iVar10 = iVar10 + -1;
          if (bVar2) goto LAB_080d375c;
          pwVar9 = pwVar9 + -1;
        } while (*pwVar9 != 0x2f);
      }
      pwVar7 = ArcName + iVar10 + 1;
    }
LAB_080d375c:
    pwVar4 = L"";
    if (*pwVar7 == 0) {
      pwVar4 = L".rar";
    }
    __wcscpy_chk(Ext,pwVar4,0x800);
  }
  else {
    sVar3 = wcslen((wchar_t *)ArcName);
    iVar10 = sVar3 - 1;
    pwVar4 = (wchar_t *)ArcName;
    if (-1 < iVar10) {
      if (ArcName[iVar10] != 0x2f) {
        pwVar7 = ArcName + sVar3 + 0x3fffffff;
        do {
          bVar2 = iVar10 == 0;
          iVar10 = iVar10 + -1;
          if (bVar2) goto LAB_080d322c;
          pwVar7 = pwVar7 + -1;
        } while (*pwVar7 != 0x2f);
      }
      pwVar4 = (wchar_t *)(ArcName + iVar10 + 1);
    }
LAB_080d322c:
    pwVar4 = wcsrchr(pwVar4,L'.');
    Ext[0] = 0;
    if (pwVar4 == (wchar_t *)0x0) goto LAB_080d371c;
    wcsncpyz(Ext,(wchar *)pwVar4,0x800);
    *pwVar4 = L'\0';
  }
  local_44d4 = (wchar_t *)Ext;
  if (rlt.wDay == 0) {
    iVar10 = 6;
    uVar13 = 7;
  }
  else {
    iVar10 = rlt.wDay - 1;
    uVar13 = rlt.wDay;
  }
  iVar10 = rlt.yDay - iVar10;
  if (iVar10 < 0) {
    if (iVar10 + 3 < 0 == SCARRY4(iVar10,3)) {
      iVar10 = 1;
      goto LAB_080d32b4;
    }
    bVar2 = IsLeapYear(rlt.Year - 1);
    if (bVar2) {
      iVar15 = 0x16e;
    }
    else {
      iVar15 = 0x16d;
    }
    iVar10 = iVar10 + iVar15;
  }
  if (iVar10 % 7 < 4) {
    iVar10 = iVar10 / 7 + 1;
  }
  else {
    iVar10 = iVar10 / 7 + 2;
  }
LAB_080d32b4:
  __sprintf_chk(Field,1,0x3c,&DAT_08144b4c,rlt.Year);
  __sprintf_chk(Field + 1,1,0x36,&DAT_08144b54,rlt.Month);
  __sprintf_chk(Field + 2,1,0x30,&DAT_08144b54,rlt.Day);
  __sprintf_chk(Field + 3,1,0x2a,&DAT_08144b54,rlt.Hour);
  __sprintf_chk(Field + 4,1,0x24,&DAT_08144b54,rlt.Minute);
  __sprintf_chk(Field + 5,1,0x1e,&DAT_08144b54,rlt.Second);
  __sprintf_chk(Field + 6,1,0x18,&DAT_08144b54,iVar10);
  __sprintf_chk(Field + 7,1,0x12,"%d",uVar13);
  __sprintf_chk(Field + 8,1,0xc,&DAT_08144b5c,rlt.yDay + 1);
  __sprintf_chk(Field + 9,1,6,&DAT_08144b64,ArcNumber);
  DateText[0] = Mask[0];
  CField[0] = 0;
  CField[1] = 0;
  CField[2] = 0;
  CField[3] = 0;
  CField[4] = 0;
  CField[5] = 0;
  CField[6] = 0;
  CField[7] = 0;
  CField[8] = 0;
  CField[9] = 0;
  if (Mask[0] != 0) {
    puVar12 = Mask;
    bVar2 = false;
    wVar18 = Mask[0];
LAB_080d3444:
    do {
      if ((wVar18 - 0x7b & 0xfffffffd) == 0) {
        bVar2 = wVar18 == 0x7b;
      }
      else if (!bVar2) {
        wVar5 = toupperw(wVar18);
        pwVar4 = wcschr(L"YMDHISWAEN",wVar5);
        if (pwVar4 != (wchar_t *)0x0) {
          puVar12 = puVar12 + 1;
          wVar18 = *puVar12;
          *(int *)((int)CField + ((uint)(pwVar4 + -0x20512f4) & 0xfffffffc)) =
               *(int *)((int)CField + ((uint)(pwVar4 + -0x20512f4) & 0xfffffffc)) + 1;
          if (wVar18 == 0) break;
          goto LAB_080d3444;
        }
      }
      puVar12 = puVar12 + 1;
      wVar18 = *puVar12;
    } while (wVar18 != 0);
    DateText[0] = wVar18;
    if (Mask[0] != 0) {
      uVar14 = wVar18;
      uVar16 = wVar18;
      do {
        if ((Mask[0] - 0x7b & 0xfffffffd) == 0) {
          uVar16 = uVar16 + 1;
          uVar11 = (uint)(Mask[0] == 0x7b);
        }
        else {
          wVar5 = toupperw(Mask[0]);
          pwVar4 = wcschr(L"YMDHISWAEN",wVar5);
          uVar11 = uVar14;
          if (pwVar4 == (wchar_t *)0x0) {
            uVar11 = uVar14 | 1;
          }
          if (uVar11 == 0) {
            iVar10 = (int)(pwVar4 + -0x20512f4) >> 2;
            sVar3 = strlen(Field[iVar10]);
            iVar15 = sVar3 - CField[iVar10];
            CField[iVar10] = CField[iVar10] + -1;
            if (((iVar10 == 1) && (iVar6 = toupperw(Mask[uVar16 + 1]), iVar6 == 0x4d)) &&
               (iVar6 = toupperw(Mask[uVar16 + 2]), iVar6 == 0x4d)) {
              uVar16 = uVar16 + 3;
              pwVar7 = GetMonthName(rlt.Month - 1);
              wcsncpyz(DateText + wVar18,pwVar7,0x80 - wVar18);
              wVar18 = wcslen((wchar_t *)DateText);
              goto LAB_080d34ec;
            }
            if (iVar15 < 0) {
              DateText[wVar18] = Mask[uVar16];
            }
            else {
              DateText[wVar18] = (uint)*(byte *)((int)Field + iVar15 + iVar10 * 6);
            }
          }
          else {
            DateText[wVar18] = Mask[uVar16];
          }
          uVar16 = uVar16 + 1;
          wVar18 = wVar18 + 1;
          DateText[wVar18] = 0;
          uVar11 = uVar14;
        }
LAB_080d34ec:
        Mask[0] = Mask[uVar16];
        uVar14 = uVar11;
      } while (Mask[0] != 0 && wVar18 < 0x7f);
    }
  }
  _Prefix = (wchar_t *)DateText;
  if (bVar19) {
    sVar3 = wcslen((wchar_t *)ArcName);
    iVar10 = sVar3 - 1;
    if (iVar10 < 0) {
LAB_080d37f4:
      PathLength = 0;
      pwVar7 = NewName;
    }
    else {
      if (ArcName[iVar10] != 0x2f) {
        pwVar7 = ArcName + sVar3 + 0x3fffffff;
        do {
          bVar19 = iVar10 == 0;
          iVar10 = iVar10 + -1;
          if (bVar19) goto LAB_080d37f4;
          pwVar7 = pwVar7 + -1;
        } while (*pwVar7 != 0x2f);
      }
      PathLength = (iVar10 + 1) * 4 >> 2;
      if (0x7fe < PathLength) {
        PathLength = 0x7ff;
      }
      pwVar7 = NewName + PathLength;
    }
    __wcsncpy_chk(NewName,ArcName,PathLength,0x800);
    *pwVar7 = 0;
    sVar3 = wcslen((wchar_t *)NewName);
    if (((sVar3 != 0) && (NewName[sVar3 + 0x3fffffff] != 0x2f)) && (sVar3 + 1 < 0x800)) {
      __wcscat_chk(NewName,&DAT_08144bfc,0x800);
    }
    wcsncatz(NewName,(wchar *)_Prefix,0x800);
    sVar3 = wcslen((wchar_t *)ArcName);
    iVar10 = sVar3 - 1;
    pwVar7 = ArcName;
    if (-1 < iVar10) {
      if (ArcName[iVar10] != 0x2f) {
        pwVar9 = ArcName + sVar3 + 0x3fffffff;
        do {
          bVar19 = iVar10 == 0;
          iVar10 = iVar10 + -1;
          if (bVar19) goto LAB_080d38bc;
          pwVar9 = pwVar9 + -1;
        } while (*pwVar9 != 0x2f);
      }
      pwVar7 = ArcName + iVar10 + 1;
    }
LAB_080d38bc:
    wcsncatz(NewName,pwVar7,0x800);
    wcscpy((wchar_t *)ArcName,(wchar_t *)NewName);
  }
  else {
    wcscat((wchar_t *)ArcName,_Prefix);
  }
  wcscat((wchar_t *)ArcName,local_44d4);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


