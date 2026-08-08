/*
 * Ghidra decompilation
 *
 * Function : GenArcName
 * Address  : 001b5460
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenArcName(wchar_t*, wchar_t*, unsigned int, bool&) */

void GenArcName(wchar_t *param_1,wchar_t *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  wchar_t wVar6;
  int iVar7;
  uint uVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  wchar_t *local_44b0;
  RarTime aRStack_44a0 [8];
  int local_4498;
  int local_4494;
  undefined4 local_4490;
  undefined4 local_448c;
  undefined4 local_4488;
  undefined4 local_4484;
  int local_447c;
  int local_4478;
  undefined8 local_4470;
  undefined8 uStack_4468;
  undefined8 local_4460;
  undefined8 uStack_4458;
  undefined8 local_4450;
  byte abStack_4448 [6];
  undefined auStack_4442 [6];
  undefined auStack_443c [6];
  undefined auStack_4436 [6];
  undefined auStack_4430 [6];
  undefined auStack_442a [6];
  undefined auStack_4424 [6];
  undefined auStack_441e [6];
  undefined auStack_4418 [6];
  undefined auStack_4412 [10];
  wchar_t local_4408 [128];
  wchar_t local_4208 [128];
  wchar_t local_4008 [2047];
  int iStack_200c;
  wchar_t awStack_2008 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  wVar6 = *param_2;
  bVar3 = wVar6 == L'+';
  if (bVar3) {
    wVar6 = param_2[1];
    param_2 = param_2 + 1;
  }
  pwVar10 = L"yyyymmddhhmmss";
  if (wVar6 != L'\0') {
    pwVar10 = param_2;
  }
  wcsncpyz(local_4408,pwVar10,0x80);
  uVar16 = 0;
  bVar2 = false;
  bVar4 = false;
  wVar6 = local_4408[0];
  while (wVar6 != L'\0') {
    while (iVar15 = (int)uVar16, (wVar6 + L'\xffffff85' & 0xfffffffdU) != 0) {
      if (!bVar4) {
        iVar7 = toupperw(wVar6);
        if (iVar7 == 0x48) {
          bVar2 = true;
        }
        else {
          bVar1 = bVar2;
          if (iVar7 != 0x4d) {
            bVar1 = false;
          }
          if (bVar1) {
            local_4408[uVar16] = L'I';
            bVar2 = bVar1;
          }
          else if (iVar7 == 0x4e) {
            uVar17 = 0;
            uVar8 = GetDigits(param_3);
            while (iVar7 = toupperw(local_4408[uVar17 + iVar15]), iVar7 == 0x4e) {
              uVar17 = uVar17 + 1;
            }
            if (uVar17 < uVar8) {
              pwVar10 = local_4408 + uVar16 + uVar17;
              sVar9 = wcslen(pwVar10);
              wmemmove(local_4408 + uVar16 + uVar8,pwVar10,sVar9 + 1);
              wmemset(local_4408 + uVar16,L'N',(ulong)uVar8);
              uVar17 = uVar8;
            }
            iVar15 = iVar15 + (uVar17 - 1);
            bVar4 = false;
            *param_4 = true;
          }
        }
      }
      uVar16 = (ulong)(iVar15 + 1);
      wVar6 = local_4408[uVar16];
      if (wVar6 == L'\0') goto LAB_001b5554;
    }
    uVar16 = (ulong)(iVar15 + 1);
    bVar4 = wVar6 == L'{';
    wVar6 = local_4408[uVar16];
  }
LAB_001b5554:
  RarTime::RarTime(aRStack_44a0);
  RarTime::SetCurrentTime();
  RarTime::GetLocal(aRStack_44a0,(RarLocalTime *)&local_4498);
  sVar9 = wcslen(param_1);
  iVar15 = (int)sVar9 + -1;
  pwVar10 = param_1;
  if (-1 < iVar15) {
    lVar12 = (long)iVar15;
    do {
      if (param_1[lVar12] == L'/') {
        pwVar10 = param_1 + lVar12 + 1;
        break;
      }
      lVar12 = lVar12 + -1;
    } while (-1 < (int)lVar12);
  }
  pwVar10 = wcsrchr(pwVar10,L'.');
  local_4008[0] = L'\0';
  if (pwVar10 == (wchar_t *)0x0) {
    sVar9 = wcslen(param_1);
    iVar15 = (int)sVar9 + -1;
    pwVar10 = param_1;
    if (-1 < iVar15) {
      lVar12 = (long)iVar15;
      do {
        if (param_1[lVar12] == L'/') {
          pwVar10 = param_1 + lVar12 + 1;
          break;
        }
        lVar12 = lVar12 + -1;
      } while (-1 < (int)lVar12);
    }
    pwVar11 = L".rar";
    if (*pwVar10 != L'\0') {
      pwVar11 = L"";
    }
    __wcscpy_chk(local_4008,pwVar11,0x800);
  }
  else {
    wcsncpyz(local_4008,pwVar10,0x800);
    *pwVar10 = L'\0';
  }
  local_44b0 = local_4008;
  if (local_447c == 0) {
    iVar15 = local_4478 + -6;
    iVar7 = 7;
  }
  else {
    iVar15 = local_4478 - (local_447c + -1);
    iVar7 = local_447c;
  }
  if (iVar15 < 0) {
    iVar13 = 1;
    if (iVar15 + 3 < 0 == SCARRY4(iVar15,3)) goto LAB_001b5624;
    cVar5 = IsLeapYear(local_4498 + -1);
    iVar15 = iVar15 + (cVar5 != '\0') + 0x16d;
  }
  iVar13 = iVar15 / 7;
  if (3 < iVar15 % 7) {
    iVar13 = iVar13 + 1;
  }
  iVar13 = iVar13 + 1;
LAB_001b5624:
  __sprintf_chk(abStack_4448,1,0x3c,&DAT_002289e0,local_4498);
  __sprintf_chk(auStack_4442,1,0x36,&DAT_002289e8,local_4494);
  __sprintf_chk(auStack_443c,1,0x30,&DAT_002289e8,local_4490);
  __sprintf_chk(auStack_4436,1,0x2a,&DAT_002289e8,local_448c);
  __sprintf_chk(auStack_4430,1,0x24,&DAT_002289e8,local_4488);
  __sprintf_chk(auStack_442a,1,0x1e,&DAT_002289e8,local_4484);
  __sprintf_chk(auStack_4424,1,0x18,&DAT_002289e8,iVar13);
  __sprintf_chk(auStack_441e,1,0x12,"%d",iVar7);
  __sprintf_chk(auStack_4418,1,0xc,&DAT_002289f0,local_4478 + 1);
  __sprintf_chk(auStack_4412,1,6,&DAT_002289f8,param_3);
  local_4470 = 0;
  uStack_4468 = 0;
  local_4460 = 0;
  uStack_4458 = 0;
  local_4450 = 0;
  if (local_4408[0] == L'\0') {
    local_4208[0] = L'\0';
  }
  else {
    bVar4 = false;
    pwVar10 = local_4408;
    wVar6 = local_4408[0];
    do {
      while ((wVar6 + L'\xffffff85' & 0xfffffffdU) == 0) {
        bVar4 = wVar6 == L'{';
        pwVar10 = pwVar10 + 1;
        wVar6 = *pwVar10;
        if (wVar6 == L'\0') goto LAB_001b57ac;
      }
      if (!bVar4) {
        wVar6 = toupperw(wVar6);
        pwVar11 = wcschr(L"YMDHISWAEN",wVar6);
        if (pwVar11 != (wchar_t *)0x0) {
          *(int *)((long)&local_4470 + ((long)(pwVar11 + -0x8a216) >> 2) * 4) =
               *(int *)((long)&local_4470 + ((long)(pwVar11 + -0x8a216) >> 2) * 4) + 1;
        }
      }
      pwVar10 = pwVar10 + 1;
      wVar6 = *pwVar10;
    } while (wVar6 != L'\0');
LAB_001b57ac:
    local_4208[0] = L'\0';
    if (local_4408[0] != L'\0') {
      uVar16 = 0;
      bVar4 = false;
      lVar12 = 0;
      do {
        lVar18 = lVar12 + 1;
        if ((local_4408[0] + L'\xffffff85' & 0xfffffffdU) == 0) {
          bVar4 = local_4408[0] == L'{';
        }
        else {
          wVar6 = toupperw(local_4408[0]);
          pwVar10 = wcschr(L"YMDHISWAEN",wVar6);
          bVar2 = bVar4;
          if (pwVar10 == (wchar_t *)0x0) {
            bVar2 = true;
          }
          if (bVar2) {
LAB_001b5970:
            local_4208[uVar16] = local_4408[lVar12];
          }
          else {
            lVar14 = (long)(pwVar10 + -0x8a216) >> 2;
            sVar9 = strlen((char *)(abStack_4448 + lVar14 * 6));
            iVar15 = *(int *)((long)&local_4470 + lVar14 * 4);
            *(int *)((long)&local_4470 + lVar14 * 4) = iVar15 + -1;
            iVar15 = (int)sVar9 - iVar15;
            if (((lVar14 == 1) && (iVar7 = toupperw(local_4408[lVar18]), iVar7 == 0x4d)) &&
               (iVar7 = toupperw(local_4408[lVar12 + 2]), iVar7 == 0x4d)) {
              lVar18 = lVar12 + 3;
              pwVar10 = (wchar_t *)GetMonthName(local_4494 + -1);
              wcsncpyz(local_4208 + uVar16,pwVar10,0x80 - uVar16);
              bVar4 = false;
              uVar16 = wcslen(local_4208);
              goto LAB_001b5870;
            }
            if (iVar15 < 0) goto LAB_001b5970;
            local_4208[uVar16] = (uint)abStack_4448[(long)iVar15 + lVar14 * 6];
          }
          uVar16 = uVar16 + 1;
          local_4208[uVar16] = L'\0';
        }
LAB_001b5870:
        local_4408[0] = local_4408[lVar18];
        lVar12 = lVar18;
      } while (uVar16 < 0x7f && local_4408[0] != L'\0');
    }
  }
  if (bVar3) {
    sVar9 = wcslen(param_1);
    iVar15 = (int)sVar9 + -1;
    if (-1 < iVar15) {
      lVar12 = (long)iVar15;
      do {
        if (param_1[lVar12] == L'/') {
          uVar16 = (lVar12 + 1) * 4 >> 2;
          if (0x7ff < uVar16) {
            uVar16 = 0x7ff;
          }
          pwVar10 = awStack_2008 + uVar16;
          goto LAB_001b5b10;
        }
        lVar12 = lVar12 + -1;
      } while (-1 < (int)lVar12);
    }
    pwVar10 = awStack_2008;
    uVar16 = 0;
LAB_001b5b10:
    __wcsncpy_chk(awStack_2008,param_1,uVar16,0x800);
    *pwVar10 = L'\0';
    sVar9 = wcslen(awStack_2008);
    if (((sVar9 != 0) && ((&iStack_200c)[sVar9] != 0x2f)) && (sVar9 + 1 < 0x800)) {
      __wcscat_chk(awStack_2008,&DAT_00228888,0x800);
    }
    wcsncatz(awStack_2008,local_4208,0x800);
    sVar9 = wcslen(param_1);
    iVar15 = (int)sVar9 + -1;
    pwVar10 = param_1;
    if (-1 < iVar15) {
      lVar12 = (long)iVar15;
      do {
        if (param_1[lVar12] == L'/') {
          pwVar10 = param_1 + lVar12 + 1;
          break;
        }
        lVar12 = lVar12 + -1;
      } while (-1 < (int)lVar12);
    }
    wcsncatz(awStack_2008,pwVar10,0x800);
    wcscpy(param_1,awStack_2008);
  }
  else {
    wcscat(param_1,local_4208);
  }
  wcscat(param_1,local_44b0);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


