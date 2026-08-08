/*
 * Ghidra decompilation
 *
 * Function : ProcessSwitch
 * Address  : 001e81b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandData::ProcessSwitch(wchar_t const*) */

void __thiscall CommandData::ProcessSwitch(CommandData *this,wchar_t *param_1)

{
  StringList *this_00;
  wchar_t *pwVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  wchar_t wVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  size_t sVar10;
  undefined8 uVar11;
  long lVar12;
  wchar_t *pwVar13;
  uint uVar14;
  ulong uVar15;
  wchar_t local_3008 [1024];
  wchar_t awStack_2008 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = toupperw(*param_1);
  switch(uVar3) {
  case 0x3f:
    break;
  case 0x40:
    *(uint *)(this + 0x125ec) = (param_1[1] == L'+') + 1;
    break;
  case 0x41:
    iVar4 = toupperw(param_1[1]);
    if (iVar4 == 0x4e) break;
    if (iVar4 < 0x4f) {
      if (iVar4 == 0x47) {
        if ((param_1[2] == L'-') && (param_1[3] == L'\0')) {
          this[0xc2b7] = (CommandData)0x0;
        }
        else {
          this[0xc2b7] = (CommandData)0x1;
          wcsncpyz((wchar_t *)(this + 0xc2b8),param_1 + 2,0x80);
        }
        break;
      }
      if (iVar4 < 0x48) {
        if (iVar4 == 0x43) {
          this[0xc25c] = (CommandData)0x1;
          break;
        }
        if (iVar4 == 0x44) {
          this[0xe5a8] = (CommandData)0x1;
          break;
        }
      }
      else if (iVar4 == 0x49) {
        this[0xc4bc] = (CommandData)0x1;
        break;
      }
    }
    else {
      if (iVar4 == 0x50) {
        __wcscpy_chk(this + 0x802c,param_1 + 2,0x800);
        break;
      }
      if (iVar4 == 0x53) {
        this[0xc4b8] = (CommandData)0x1;
        break;
      }
      if (iVar4 == 0x4f) {
        this[0xc25d] = (CommandData)0x1;
        break;
      }
    }
  default:
    goto switchD_001e824c_caseD_42;
  case 0x43:
    if (param_1[2] == L'\0') {
      iVar4 = toupperw(param_1[1]);
      if (iVar4 == 0x4c) {
        *(undefined4 *)(this + 0xc2a4) = 2;
      }
      else if (iVar4 == 0x55) {
        *(undefined4 *)(this + 0xc2a4) = 1;
      }
      else if (iVar4 == 0x2d) {
        this[0xc25e] = (CommandData)0x1;
      }
    }
    break;
  case 0x44:
    if (param_1[2] == L'\0') {
      iVar4 = toupperw(param_1[1]);
      if (iVar4 == 0x48) {
        this[0xc2b5] = (CommandData)0x1;
      }
      else if (iVar4 == 0x53) {
        this[0xc29d] = (CommandData)0x1;
      }
      else if (iVar4 == 0x46) {
        this[0xc2b6] = (CommandData)0x1;
      }
    }
    break;
  case 0x45:
    iVar4 = toupperw(param_1[1]);
    if (iVar4 == 0x45) {
      this[0xc4b9] = (CommandData)0x0;
    }
    else if (iVar4 == 0x50) {
      wVar5 = param_1[2];
      if (wVar5 == L'2') {
        *(undefined4 *)(this + 0xc264) = 3;
      }
      else if ((uint)wVar5 < 0x33) {
        if (wVar5 == L'\0') {
          *(undefined4 *)(this + 0xc264) = 1;
        }
        else if (wVar5 == L'1') {
          *(undefined4 *)(this + 0xc264) = 2;
        }
      }
      else if (wVar5 == L'3') {
        *(undefined4 *)(this + 0xc264) = 4;
      }
    }
    else if (param_1[1] == L'+') {
      pwVar9 = param_1 + 2;
      cVar2 = IsDigit(param_1[2]);
      if (cVar2 == '\0') {
        wVar5 = param_1[2];
        uVar7 = 0;
        while (wVar5 != L'\0') {
          iVar4 = toupperw(wVar5);
          if (iVar4 == 0x44) {
            uVar14 = uVar7 | 0x4000;
          }
          else {
            uVar14 = uVar7 | 0x2000;
            if (iVar4 != 0x56) {
              uVar14 = uVar7;
            }
          }
          pwVar9 = pwVar9 + 1;
          uVar7 = uVar14;
          wVar5 = *pwVar9;
        }
      }
      else {
        lVar12 = wcstol(pwVar9,(wchar_t **)0x0,0);
        uVar7 = (uint)lVar12;
      }
      *(uint *)(this + 4) = uVar7;
      this[8] = (CommandData)0x1;
    }
    else {
      cVar2 = IsDigit(param_1[1]);
      pwVar9 = param_1 + 1;
      if (cVar2 == '\0') {
        wVar5 = param_1[1];
        uVar7 = 0;
        while (wVar5 != L'\0') {
          iVar4 = toupperw(wVar5);
          if (iVar4 == 0x44) {
            uVar14 = uVar7 | 0x4000;
          }
          else {
            uVar14 = uVar7 | 0x2000;
            if (iVar4 != 0x56) {
              uVar14 = uVar7;
            }
          }
          pwVar9 = pwVar9 + 1;
          uVar7 = uVar14;
          wVar5 = *pwVar9;
        }
      }
      else {
        lVar12 = wcstol(pwVar9,(wchar_t **)0x0,0);
        uVar7 = (uint)lVar12;
      }
      *(uint *)this = uVar7;
    }
    break;
  case 0x46:
    if (param_1[1] == L'\0') {
      this[0xc25f] = (CommandData)0x1;
      break;
    }
    goto LAB_001e85e8;
  case 0x48:
    iVar4 = toupperw(param_1[1]);
    if (iVar4 == 0x50) {
      wVar5 = param_1[2];
      this[0xa230] = (CommandData)0x1;
      if (wVar5 == L'\0') {
        if (this[0xa22c] == (CommandData)0x0) {
          GetPassword(0,(wchar_t *)0x0,(SecPassword *)(this + 0xa02c));
        }
      }
      else {
        SecPassword::Set((SecPassword *)(this + 0xa02c),param_1 + 2);
        sVar10 = wcslen(param_1);
        cleandata(param_1,sVar10 << 2);
      }
      break;
    }
    goto LAB_001e85e8;
  case 0x49:
    pwVar9 = param_1 + 1;
    iVar4 = wcsnicomp(pwVar9,L"LOG",3);
    if (iVar4 == 0) {
      pwVar9 = L".rarlog";
      if (param_1[4] != L'\0') {
        pwVar9 = param_1 + 4;
      }
      wcsncpyz((wchar_t *)(this + 0xa234),pwVar9,0x800);
    }
    else {
      iVar4 = wcsicomp(pwVar9,L"SND");
      if (iVar4 == 0) {
        this[0xc238] = (CommandData)0x1;
      }
      else {
        iVar4 = wcsicomp(pwVar9,L"ERR");
        if (iVar4 == 0) {
          *(undefined4 *)(this + 0xc234) = 1;
        }
        else {
          iVar4 = wcsnicomp(pwVar9,L"EML",3);
          if (iVar4 == 0) {
            pwVar9 = L"@";
            if (param_1[4] != L'\0') {
              pwVar9 = param_1 + 4;
            }
            wcsncpyz((wchar_t *)(this + 0xc5a4),pwVar9,0x800);
          }
          else {
            iVar4 = wcsicomp(pwVar9,L"NUL");
            if (iVar4 == 0) {
              *(undefined4 *)(this + 0xc234) = 3;
            }
            else {
              iVar4 = toupperw(param_1[1]);
              if (iVar4 == 0x44) {
                uVar15 = 2;
                while (param_1[uVar15] != L'\0') {
                  iVar4 = toupperw(param_1[uVar15]);
                  iVar6 = (int)uVar15;
                  if (iVar4 == 0x50) {
                    uVar15 = (ulong)(iVar6 + 1);
                    this[0xc250] = (CommandData)0x1;
                  }
                  else if (iVar4 < 0x51) {
                    if (iVar4 == 0x43) {
                      uVar15 = (ulong)(iVar6 + 1);
                      this[0xc251] = (CommandData)0x1;
                    }
                    else {
                      if (iVar4 == 0x44) {
                        this[0xc252] = (CommandData)0x1;
                      }
LAB_001e9164:
                      uVar15 = (ulong)(iVar6 + 1);
                    }
                  }
                  else {
                    if (iVar4 != 0x51) goto LAB_001e9164;
                    uVar15 = (ulong)(iVar6 + 1);
                    *(undefined4 *)(this + 0xc234) = 2;
                  }
                }
              }
              else {
                iVar4 = wcsicomp(pwVar9,L"OFF");
                if (iVar4 == 0) {
                  this[0xe5a9] = (CommandData)0x1;
                }
              }
            }
          }
        }
      }
    }
    break;
  case 0x4b:
    iVar4 = toupperw(param_1[1]);
    if (iVar4 == 0) {
      this[0xc4e0] = (CommandData)0x1;
    }
    else if (iVar4 == 0x42) {
      this[0xc2b4] = (CommandData)0x1;
    }
    break;
  case 0x4d:
    iVar4 = toupperw(param_1[1]);
    if (iVar4 == 0x53) {
      pwVar9 = local_3008;
      pwVar13 = L"7z;ace;arj;bz2;cab;gz;jpeg;jpg;lha;lzh;mp3;rar;taz;tgz;xz;z;zip";
      if (param_1[2] != L'\0') {
        pwVar13 = param_1 + 2;
      }
      wcsncpyz(pwVar9,pwVar13,0x400);
      if (local_3008[0] != L'\0') {
        wVar5 = local_3008[0];
        do {
          pwVar13 = wcschr(pwVar9,L';');
          if (pwVar13 != (wchar_t *)0x0) {
            *pwVar13 = L'\0';
            wVar5 = *pwVar9;
          }
          pwVar1 = pwVar9 + 1;
          if (wVar5 != L'.') {
            pwVar1 = pwVar9;
          }
          pwVar9 = wcspbrk(pwVar1,L"*?.");
          if (pwVar9 == (wchar_t *)0x0) {
            __swprintf_chk(awStack_2008,0x800,1,0x800,&DAT_00229350,pwVar1);
          }
          else {
            wcsncpyz(awStack_2008,pwVar1,0x800);
          }
          StringList::AddString((StringList *)(this + 0x16918),awStack_2008);
          if (pwVar13 == (wchar_t *)0x0) break;
          wVar5 = pwVar13[1];
          pwVar9 = pwVar13 + 1;
        } while (wVar5 != L'\0');
      }
      break;
    }
    if (iVar4 < 0x54) {
      if ((iVar4 == 0x44) || (iVar4 == 0x4d)) break;
      if (iVar4 == 0x43) {
        wVar5 = param_1[2];
        if (wVar5 == L'-') {
          *(undefined4 *)(this + 0xc4e4) = 3;
          *(undefined4 *)(this + 0xc4f0) = 3;
          *(undefined4 *)(this + 0xc4fc) = 3;
          *(undefined4 *)(this + 0xc508) = 3;
          *(undefined4 *)(this + 0xc514) = 3;
          *(undefined4 *)(this + 0xc520) = 3;
          *(undefined4 *)(this + 0xc52c) = 3;
          *(undefined4 *)(this + 0xc538) = 3;
          *(undefined4 *)(this + 0xc544) = 3;
          *(undefined4 *)(this + 0xc550) = 3;
          *(undefined4 *)(this + 0xc55c) = 3;
          *(undefined4 *)(this + 0xc568) = 3;
          *(undefined4 *)(this + 0xc574) = 3;
          *(undefined4 *)(this + 0xc580) = 3;
          *(undefined4 *)(this + 0xc58c) = 3;
          *(undefined4 *)(this + 0xc598) = 3;
        }
        else if (wVar5 != L'\0') {
          pwVar9 = param_1 + 2;
          do {
            cVar2 = IsDigit(wVar5);
            uVar3 = 0;
            pwVar13 = pwVar9;
            pwVar1 = pwVar9 + 1;
            if (cVar2 != '\0') {
              uVar3 = atoiw(pwVar9);
              do {
                pwVar13 = pwVar9;
                cVar2 = IsDigit(*pwVar13);
                pwVar9 = pwVar13 + 1;
                pwVar1 = pwVar13 + 1;
              } while (cVar2 != '\0');
            }
            pwVar9 = pwVar1;
            wVar5 = *pwVar13;
            uVar8 = 0;
            if (wVar5 == L':') {
              cVar2 = IsDigit(pwVar13[1]);
              if (cVar2 == '\0') {
                wVar5 = *pwVar13;
              }
              else {
                uVar8 = atoiw(pwVar9);
                do {
                  pwVar13 = pwVar9;
                  pwVar9 = pwVar13 + 1;
                  cVar2 = IsDigit(*pwVar13);
                } while (cVar2 != '\0');
                wVar5 = *pwVar13;
              }
            }
            iVar6 = toupperw(wVar5);
            iVar4 = 8;
            if (iVar6 - 0x41U < 0x14) {
              iVar4 = *(int *)(CSWTCH_143 + (ulong)(iVar6 - 0x41U) * 4);
            }
            if ((pwVar13[1] + L'\xffffffd5' & 0xfffffffdU) == 0) {
              pwVar9 = pwVar13 + 2;
              iVar6 = (pwVar13[1] != L'+') + 2;
            }
            else {
              iVar6 = 1;
            }
            *(undefined4 *)(this + (long)iVar4 * 0xc + 0xc4e8) = uVar3;
            *(undefined4 *)(this + (long)iVar4 * 0xc + 0xc4ec) = uVar8;
            *(int *)(this + (long)iVar4 * 0xc + 0xc4e4) = iVar6;
            wVar5 = *pwVar9;
          } while (wVar5 != L'\0');
        }
        break;
      }
    }
    else if (iVar4 == 0x54) {
      iVar4 = atoiw(param_1 + 2);
      *(int *)(this + 67000) = iVar4;
      if (iVar4 - 1U < 0x20) break;
      goto LAB_001e85e8;
    }
    wVar5 = param_1[1];
    *(wchar_t *)(this + 0xc240) = wVar5 + L'\xffffffd0';
    if ((uint)(wVar5 + L'\xffffffd0') < 6) break;
    goto LAB_001e85e8;
  case 0x4e:
  case 0x58:
    if (param_1[1] != L'\0') {
      iVar4 = toupperw(*param_1);
      this_00 = (StringList *)(this + 0x166f0);
      if (iVar4 == 0x4e) {
        this_00 = (StringList *)(this + 0x167a8);
      }
      if ((param_1[1] == L'@') && (cVar2 = IsWildcard(param_1), cVar2 == '\0')) {
        ReadTextFile(param_1 + 2,this_00,false,true,*(RAR_CHARSET *)(this + 0x8024),true,true,true);
      }
      else {
        StringList::AddString(this_00,param_1 + 1);
      }
    }
    break;
  case 0x4f:
    iVar4 = toupperw(param_1[1]);
    if (iVar4 == 0x48) {
      this[0xc2aa] = (CommandData)0x1;
      break;
    }
    if (iVar4 < 0x49) {
      if (iVar4 == 0x2b) {
        *(undefined4 *)(this + 0xc23c) = 1;
        break;
      }
      if (iVar4 == 0x2d) {
        *(undefined4 *)(this + 0xc23c) = 2;
        break;
      }
      if (iVar4 == 0) {
        *(undefined4 *)(this + 0xc23c) = 4;
        break;
      }
    }
    else {
      if (iVar4 == 0x52) {
        *(undefined4 *)(this + 0xc23c) = 3;
        break;
      }
      if (iVar4 == 0x57) {
        this[0xc2a8] = (CommandData)0x1;
        break;
      }
      if (iVar4 == 0x4c) {
        this[0xc2a9] = (CommandData)0x1;
        break;
      }
    }
    goto switchD_001e824c_caseD_42;
  case 0x50:
    if (param_1[1] == L'\0') {
      GetPassword(0,(wchar_t *)0x0,(SecPassword *)(this + 0xa02c));
    }
    else {
      SecPassword::Set((SecPassword *)(this + 0xa02c),param_1 + 1);
      sVar10 = wcslen(param_1);
      cleandata(param_1,sVar10 << 2);
    }
    break;
  case 0x51:
    iVar4 = toupperw(param_1[1]);
    if (iVar4 != 0x4f) goto LAB_001e85e8;
    iVar4 = toupperw(param_1[2]);
    if (iVar4 == 0x2b) {
      *(undefined4 *)(this + 0x4018) = 2;
      break;
    }
    if (iVar4 == 0x2d) {
      *(undefined4 *)(this + 0x4018) = 0;
      break;
    }
    if (iVar4 == 0) {
      *(undefined4 *)(this + 0x4018) = 1;
      break;
    }
    goto switchD_001e824c_caseD_42;
  case 0x52:
    iVar4 = toupperw(param_1[1]);
    if (iVar4 == 0x30) {
      *(undefined4 *)(this + 0xc268) = 3;
    }
    else if (iVar4 < 0x31) {
      if (iVar4 == 0) {
        *(undefined4 *)(this + 0xc268) = 2;
      }
      else if (iVar4 == 0x2d) {
        *(undefined4 *)(this + 0xc268) = 1;
      }
    }
    else if (iVar4 == 0x49) {
      uVar7 = atoiw(param_1 + 2);
      *(uint *)(this + 0xc2ac) = uVar7;
      if (0xf < uVar7) {
        ErrorHandler::Exit((ErrorHandler *)&ErrHandler,7);
      }
      pwVar9 = wcschr(param_1 + 2,L':');
      if (pwVar9 != (wchar_t *)0x0) {
        iVar4 = atoiw(pwVar9 + 1);
        *(int *)(this + 0xc2b0) = iVar4;
        if (1000 < iVar4) {
          ErrorHandler::Exit((ErrorHandler *)&ErrHandler,7);
          iVar4 = *(int *)(this + 0xc2b0);
        }
        InitSystemOptions(iVar4);
      }
      SetPriority(*(int *)(this + 0xc2ac));
    }
    break;
  case 0x53:
    cVar2 = IsDigit(param_1[1]);
    if (cVar2 != '\0') {
      *(uint *)(this + 0xc254) = *(uint *)(this + 0xc254) | 2;
      uVar3 = atoiw(param_1 + 1);
      *(undefined4 *)(this + 0xc258) = uVar3;
      break;
    }
    iVar4 = toupperw(param_1[1]);
    if (iVar4 == 0x45) {
      *(uint *)(this + 0xc254) = *(uint *)(this + 0xc254) | 4;
      break;
    }
    if (0x45 < iVar4) {
      if (iVar4 == 0x4d) {
        cVar2 = IsDigit(param_1[2]);
        if (cVar2 != '\0') {
          uVar11 = atoilw(param_1 + 2);
          *(undefined8 *)(this + 0xc4d8) = uVar11;
        }
      }
      else if (iVar4 == 0x56) {
        uVar7 = 8;
        if (param_1[2] != L'-') {
          uVar7 = 0x10;
        }
        *(uint *)(this + 0xc254) = *(uint *)(this + 0xc254) | uVar7;
      }
      else if ((iVar4 == 0x4c) && (cVar2 = IsDigit(param_1[2]), cVar2 != '\0')) {
        uVar11 = atoilw(param_1 + 2);
        *(undefined8 *)(this + 0xc4d0) = uVar11;
      }
      break;
    }
    if (iVar4 != 0x43) {
      if (iVar4 == 0x44) {
        *(uint *)(this + 0xc254) = *(uint *)(this + 0xc254) | 8;
      }
      else if (iVar4 == 0) {
        *(uint *)(this + 0xc254) = *(uint *)(this + 0xc254) | 1;
      }
      else if (iVar4 == 0x2d) {
        *(undefined4 *)(this + 0xc254) = 0;
      }
      break;
    }
    iVar4 = toupperw(param_1[2]);
    if (iVar4 == 0x4f) {
      uVar3 = 2;
    }
    else if (iVar4 == 0x55) {
      uVar3 = 3;
    }
    else {
      uVar3 = 1;
      if (iVar4 != 0x41) goto switchD_001e824c_caseD_42;
    }
    wVar5 = param_1[3];
    if (wVar5 == L'\0') {
      *(ulong *)(this + 0x8020) = CONCAT44(uVar3,uVar3);
      *(undefined4 *)(this + 0x8028) = uVar3;
    }
    else {
      uVar7 = 3;
      do {
        iVar4 = toupperw(wVar5);
        if (iVar4 == 0x43) {
          *(undefined4 *)(this + 0x8020) = uVar3;
        }
        else {
          if (iVar4 != 0x4c) goto switchD_001e824c_caseD_42;
          *(undefined4 *)(this + 0x8024) = uVar3;
        }
        uVar7 = uVar7 + 1;
        wVar5 = param_1[uVar7];
      } while (wVar5 != L'\0');
    }
    break;
  case 0x54:
    iVar4 = toupperw(param_1[1]);
    if (iVar4 == 0x4b) {
      *(undefined4 *)(this + 0xc2a0) = 1;
      break;
    }
    if (iVar4 < 0x4c) {
      if (iVar4 == 0x41) {
        RarTime::SetIsoText((RarTime *)(this + 0xc4c8),param_1 + 2);
        break;
      }
      if (iVar4 < 0x42) {
        if (iVar4 == 0) {
          this[0xc4e1] = (CommandData)0x1;
          break;
        }
        if (iVar4 == 0x2d) {
          this[0xc4e1] = (CommandData)0x0;
          break;
        }
      }
      else if (iVar4 == 0x42) {
        RarTime::SetIsoText((RarTime *)(this + 0xc4c0),param_1 + 2);
        break;
      }
    }
    else {
      if (iVar4 == 0x4f) {
        RarTime::SetAgeText((RarTime *)(this + 0xc4c0),param_1 + 2);
        break;
      }
      if (iVar4 < 0x50) {
        if (iVar4 == 0x4c) {
          *(undefined4 *)(this + 0xc2a0) = 2;
          break;
        }
        if (iVar4 == 0x4e) {
          RarTime::SetAgeText((RarTime *)(this + 0xc4c8),param_1 + 2);
          break;
        }
      }
      else if (iVar4 == 0x53) {
        wVar5 = param_1[2];
        if (wVar5 == L'-') {
          uVar7 = 0;
LAB_001e8840:
          *(uint *)(this + 0xe5b4) = uVar7;
          *(ulong *)(this + 0xe5ac) = CONCAT44(uVar7,uVar7);
        }
        else {
          if ((uint)wVar5 < 0x35) {
            uVar7 = wVar5 + L'\xffffffd0';
            if (4 < uVar7) {
              uVar7 = 4;
            }
            if ((0x1f080000000001U >> ((ulong)(uint)wVar5 & 0x3f) & 1) != 0) goto LAB_001e8840;
          }
          else {
            uVar7 = 4;
          }
          uVar14 = param_1[3] + L'\xffffffd0';
          if ((4 < uVar14) && (uVar14 = uVar7, param_1[3] == L'-')) {
            uVar14 = 0;
          }
          iVar4 = toupperw(wVar5);
          if (iVar4 == 0x43) {
            *(uint *)(this + 0xe5b0) = uVar14;
          }
          else if (iVar4 == 0x4d) {
            *(uint *)(this + 0xe5ac) = uVar14;
          }
          else if (iVar4 == 0x41) {
            *(uint *)(this + 0xe5b4) = uVar14;
          }
        }
        break;
      }
    }
switchD_001e824c_caseD_42:
    ErrorHandler::Exit((ErrorHandler *)&ErrHandler,7);
    break;
  case 0x55:
    if (param_1[1] == L'\0') {
      this[0xc260] = (CommandData)0x1;
      break;
    }
LAB_001e85e8:
    ErrorHandler::Exit((ErrorHandler *)&ErrHandler,7);
    break;
  case 0x56:
    iVar4 = toupperw(param_1[1]);
    if (iVar4 == 0x45) {
      iVar4 = toupperw(param_1[2]);
      if (iVar4 == 0x52) {
        iVar4 = atoiw(param_1 + 3);
        *(int *)(this + 0xe5a4) = iVar4 + 1;
      }
    }
    else if (iVar4 == 0x50) {
      this[0xc4e2] = (CommandData)0x1;
    }
    else if (iVar4 == 0x2d) {
      *(undefined8 *)(this + 0xc270) = 0;
    }
    else {
      *(undefined8 *)(this + 0xc270) = 0x7fffffff7fffffff;
    }
    break;
  case 0x57:
    wcsncpyz((wchar_t *)(this + 0x18),param_1 + 1,0x800);
    AddEndSlash((wchar_t *)(this + 0x18),0x800);
    break;
  case 0x59:
    this[0xc29c] = (CommandData)0x1;
    break;
  case 0x5a:
    if (param_1[1] == L'\0') {
      __wcscpy_chk(this + 0x6020,L"stdin",0x800);
    }
    else {
      wcsncpyz((wchar_t *)(this + 0x6020),param_1 + 1,0x800);
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


