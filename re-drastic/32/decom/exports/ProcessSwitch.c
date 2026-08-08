/*
 * Ghidra decompilation
 *
 * Function : ProcessSwitch
 * Address  : 08103f64
 * Program  : drastic
 */


/* DWARF original prototype: void ProcessSwitch(CommandData * this, wchar * Switch) */

void __thiscall CommandData::ProcessSwitch(CommandData *this,wchar *Switch)

{
  int64 iVar1;
  int iVar2;
  wchar *pwVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar *ChPtr;
  size_t sVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t wVar10;
  wchar_t wVar11;
  uint uVar12;
  wchar wVar13;
  FilterState FVar14;
  wchar *pwVar15;
  uint uVar16;
  RAR_CMD_LIST_MODE RVar17;
  EXTTIME_MODE EVar18;
  StringList *Args;
  wchar *End;
  RAR_CHARSET RVar19;
  int Param1;
  uint64 uVar20;
  wchar StoreNames [1024];
  wchar Mask [2048];
  
  iVar2 = __stack_chk_guard;
  iVar5 = toupperw(*Switch);
  switch(iVar5) {
  case 0x3f:
    break;
  case 0x40:
    if (Switch[1] == 0x2b) {
      RVar17 = RCLM_ACCEPT_LISTS;
    }
    else {
      RVar17 = RCLM_REJECT_LISTS;
    }
    this->ListMode = RVar17;
    break;
  case 0x41:
    iVar5 = toupperw(Switch[1]);
    switch(iVar5) {
    case 0x43:
      (this->super_RAROptions).ClearArc = true;
      break;
    case 0x44:
      (this->super_RAROptions).AppendArcNameToPath = true;
      break;
    default:
      ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
      break;
    case 0x47:
      if ((Switch[2] == 0x2d) && (Switch[3] == 0)) {
        (this->super_RAROptions).GenerateArcName = false;
      }
      else {
        (this->super_RAROptions).GenerateArcName = true;
        wcsncpyz((this->super_RAROptions).GenerateMask,Switch + 2,0x80);
      }
      break;
    case 0x49:
      (this->super_RAROptions).IgnoreGeneralAttr = true;
      break;
    case 0x4e:
      break;
    case 0x4f:
      (this->super_RAROptions).AddArcOnly = true;
      break;
    case 0x50:
      __wcscpy_chk((this->super_RAROptions).ArcPath,Switch + 2,0x800);
      break;
    case 0x53:
      (this->super_RAROptions).SyncFiles = true;
    }
    break;
  default:
    ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
    break;
  case 0x43:
    if (Switch[2] == 0) {
      iVar5 = toupperw(Switch[1]);
      if (iVar5 == 0x4c) {
        (this->super_RAROptions).ConvertNames = 2;
      }
      else if (iVar5 == 0x55) {
        (this->super_RAROptions).ConvertNames = 1;
      }
      else if (iVar5 == 0x2d) {
        (this->super_RAROptions).DisableComment = true;
      }
    }
    break;
  case 0x44:
    if (Switch[2] == 0) {
      iVar5 = toupperw(Switch[1]);
      if (iVar5 == 0x48) {
        (this->super_RAROptions).OpenShared = true;
      }
      else if (iVar5 == 0x53) {
        (this->super_RAROptions).DisableSortSolid = true;
      }
      else if (iVar5 == 0x46) {
        (this->super_RAROptions).DeleteFiles = true;
      }
    }
    break;
  case 0x45:
    iVar5 = toupperw(Switch[1]);
    if (iVar5 == 0x45) {
      (this->super_RAROptions).ProcessEA = false;
    }
    else if (iVar5 == 0x50) {
      uVar16 = Switch[2];
      if (uVar16 == 0x31) {
        (this->super_RAROptions).ExclPath = EXCL_BASEPATH;
      }
      else if (uVar16 < 0x32) {
        if (uVar16 == 0) {
          (this->super_RAROptions).ExclPath = EXCL_SKIPWHOLEPATH;
        }
      }
      else if (uVar16 == 0x32) {
        (this->super_RAROptions).ExclPath = EXCL_SAVEFULLPATH;
      }
      else if (uVar16 == 0x33) {
        (this->super_RAROptions).ExclPath = EXCL_ABSPATH;
      }
    }
    else if (Switch[1] == 0x2b) {
      pwVar6 = (wchar_t *)(Switch + 2);
      bVar4 = IsDigit(Switch[2]);
      if (bVar4) {
        wVar10 = wcstol(pwVar6,(wchar_t **)0x0,0);
      }
      else {
        wVar10 = Switch[2];
        if (wVar10 != L'\0') {
          wVar11 = wVar10;
          wVar10 = L'\0';
          do {
            iVar5 = toupperw(wVar11);
            if (iVar5 == 0x44) {
              wVar10 = wVar10 | 0x4000;
            }
            else if (iVar5 == 0x56) {
              wVar10 = wVar10 | 0x2000;
            }
            pwVar6 = pwVar6 + 1;
            wVar11 = *pwVar6;
          } while (wVar11 != L'\0');
        }
      }
      (this->super_RAROptions).InclFileAttr = wVar10;
      (this->super_RAROptions).InclAttrSet = true;
    }
    else {
      bVar4 = IsDigit(Switch[1]);
      pwVar6 = (wchar_t *)(Switch + 1);
      if (bVar4) {
        wVar10 = wcstol(pwVar6,(wchar_t **)0x0,0);
      }
      else {
        wVar10 = Switch[1];
        if (wVar10 != L'\0') {
          wVar11 = wVar10;
          wVar10 = L'\0';
          do {
            iVar5 = toupperw(wVar11);
            if (iVar5 == 0x44) {
              wVar10 = wVar10 | 0x4000;
            }
            else if (iVar5 == 0x56) {
              wVar10 = wVar10 | 0x2000;
            }
            pwVar6 = pwVar6 + 1;
            wVar11 = *pwVar6;
          } while (wVar11 != L'\0');
        }
      }
      (this->super_RAROptions).ExclFileAttr = wVar10;
    }
    break;
  case 0x46:
    if (Switch[1] == 0) {
      (this->super_RAROptions).FreshFiles = true;
      break;
    }
    goto LAB_08104528;
  case 0x48:
    iVar5 = toupperw(Switch[1]);
    if (iVar5 != 0x50) {
      ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
      break;
    }
    wVar13 = Switch[2];
    (this->super_RAROptions).EncryptHeaders = true;
    if (wVar13 != 0) {
      SecPassword::Set(&(this->super_RAROptions).Password,Switch + 2);
      sVar7 = wcslen((wchar_t *)Switch);
      cleandata(Switch,sVar7 << 2);
      break;
    }
    if ((this->super_RAROptions).Password.PasswordSet != false) break;
    goto LAB_081044a0;
  case 0x49:
    pwVar15 = Switch + 1;
    iVar5 = wcsnicomp(pwVar15,(wchar *)&DAT_081455d0,3);
    if (iVar5 == 0) {
      if (Switch[4] == 0) {
        pwVar6 = L".rarlog";
      }
      else {
        pwVar6 = (wchar_t *)(Switch + 4);
      }
      wcsncpyz((this->super_RAROptions).LogName,(wchar *)pwVar6,0x800);
    }
    else {
      iVar5 = wcsicomp(pwVar15,(wchar *)&DAT_081455e0);
      if (iVar5 == 0) {
        (this->super_RAROptions).Sound = true;
      }
      else {
        iVar5 = wcsicomp(pwVar15,(wchar *)&DAT_081455f0);
        if (iVar5 == 0) {
          (this->super_RAROptions).MsgStream = MSG_STDERR;
        }
        else {
          iVar5 = wcsnicomp(pwVar15,(wchar *)&DAT_08145600,3);
          if (iVar5 == 0) {
            if (Switch[4] == 0) {
              pwVar15 = (wchar *)&UNK_081454c8;
            }
            else {
              pwVar15 = Switch + 4;
            }
            wcsncpyz((this->super_RAROptions).EmailTo,pwVar15,0x800);
          }
          else {
            iVar5 = wcsicomp(pwVar15,(wchar *)&DAT_08145610);
            if (iVar5 == 0) {
              (this->super_RAROptions).MsgStream = MSG_NULL;
            }
            else {
              iVar5 = toupperw(Switch[1]);
              if (iVar5 == 0x44) {
                wVar13 = Switch[2];
                if (wVar13 != 0) {
                  pwVar15 = Switch + 2;
                  do {
                    iVar5 = toupperw(wVar13);
                    switch(iVar5) {
                    case 0x43:
                      (this->super_RAROptions).DisableCopyright = true;
                      break;
                    case 0x44:
                      (this->super_RAROptions).DisableDone = true;
                      break;
                    case 0x50:
                      (this->super_RAROptions).DisablePercentage = true;
                      break;
                    case 0x51:
                      (this->super_RAROptions).MsgStream = MSG_ERRONLY;
                    }
                    pwVar15 = pwVar15 + 1;
                    wVar13 = *pwVar15;
                  } while (wVar13 != 0);
                }
              }
              else {
                iVar5 = wcsicomp(pwVar15,(wchar *)&DAT_08145620);
                if (iVar5 == 0) {
                  (this->super_RAROptions).Shutdown = true;
                }
              }
            }
          }
        }
      }
    }
    break;
  case 0x4b:
    iVar5 = toupperw(Switch[1]);
    if (iVar5 == 0) {
      (this->super_RAROptions).Lock = true;
    }
    else if (iVar5 == 0x42) {
      (this->super_RAROptions).KeepBroken = true;
    }
    break;
  case 0x4d:
    iVar5 = toupperw(Switch[1]);
    switch(iVar5) {
    case 0x43:
      wVar13 = Switch[2];
      if (wVar13 == 0x2d) {
        (this->super_RAROptions).FilterModes[0].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[1].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[2].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[3].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[4].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[5].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[6].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[7].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[8].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[9].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[10].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[0xb].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[0xc].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[0xd].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[0xe].State = FILTER_DISABLE;
        (this->super_RAROptions).FilterModes[0xf].State = FILTER_DISABLE;
      }
      else if (wVar13 != 0) {
        pwVar15 = Switch + 2;
        do {
          bVar4 = IsDigit(wVar13);
          if (bVar4) {
            Param1 = atoiw(pwVar15);
            pwVar3 = pwVar15;
            do {
              pwVar15 = pwVar3;
              bVar4 = IsDigit(*pwVar15);
              pwVar3 = pwVar15 + 1;
            } while (bVar4);
          }
          else {
            Param1 = 0;
          }
          wVar13 = *pwVar15;
          if (wVar13 == 0x3a) {
            bVar4 = IsDigit(pwVar15[1]);
            if (!bVar4) {
              wVar13 = *pwVar15;
              goto LAB_081047d0;
            }
            uVar12 = atoiw(pwVar15 + 1);
            pwVar3 = pwVar15 + 1;
            do {
              pwVar15 = pwVar3;
              bVar4 = IsDigit(*pwVar15);
              pwVar3 = pwVar15 + 1;
            } while (bVar4);
            wVar13 = *pwVar15;
          }
          else {
LAB_081047d0:
            uVar12 = 0;
          }
          iVar5 = toupperw(wVar13);
          pwVar3 = pwVar15 + 1;
          if (iVar5 - 0x41U < 0x14) {
            iVar5 = *(int *)(&CSWTCH_138 + (iVar5 - 0x41U) * 4);
          }
          else {
            iVar5 = 8;
          }
          if ((*pwVar3 - 0x2b & 0xfffffffd) == 0) {
            pwVar15 = pwVar15 + 2;
            if (*pwVar3 == 0x2b) {
              FVar14 = FILTER_FORCE;
            }
            else {
              FVar14 = FILTER_DISABLE;
            }
          }
          else {
            pwVar15 = pwVar15 + 1;
            FVar14 = FILTER_AUTO;
          }
          (this->super_RAROptions).FilterModes[iVar5].Param1 = Param1;
          (this->super_RAROptions).FilterModes[iVar5].Param2 = uVar12;
          wVar13 = *pwVar15;
          (this->super_RAROptions).FilterModes[iVar5].State = FVar14;
        } while (wVar13 != 0);
      }
      break;
    case 0x44:
    case 0x4d:
      break;
    default:
      wVar13 = Switch[1];
      (this->super_RAROptions).Method = wVar13 - 0x30;
      if (wVar13 - 0x30 < 6) break;
      goto LAB_08104528;
    case 0x53:
      if (Switch[2] == 0) {
        pwVar15 = (wchar *)&UNK_081454d0;
      }
      else {
        pwVar15 = Switch + 2;
      }
      wcsncpyz(StoreNames,pwVar15,0x400);
      if (StoreNames[0] != 0) {
        pwVar6 = (wchar_t *)StoreNames;
        wVar10 = StoreNames[0];
        do {
          pwVar8 = wcschr(pwVar6,L';');
          if (pwVar8 != (wchar_t *)0x0) {
            *pwVar8 = L'\0';
            wVar10 = *pwVar6;
          }
          if (wVar10 == L'.') {
            pwVar6 = pwVar6 + 1;
          }
          pwVar9 = wcspbrk(pwVar6,L"*?.");
          if (pwVar9 == (wchar_t *)0x0) {
            __swprintf_chk(Mask,0x800,1,0x800,&DAT_08145640,pwVar6);
          }
          else {
            wcsncpyz(Mask,(wchar *)pwVar6,0x800);
          }
          StringList::AddString(&this->StoreArgs,Mask);
          if (pwVar8 == (wchar_t *)0x0) break;
          wVar10 = pwVar8[1];
          pwVar6 = pwVar8 + 1;
        } while (wVar10 != L'\0');
      }
      break;
    case 0x54:
      uVar12 = atoiw(Switch + 2);
      (this->super_RAROptions).Threads = uVar12;
      if (uVar12 - 1 < 0x20) break;
      goto LAB_08104528;
    }
    break;
  case 0x4e:
  case 0x58:
    if (Switch[1] != 0) {
      iVar5 = toupperw(*Switch);
      if (iVar5 == 0x4e) {
        Args = &this->InclArgs;
      }
      else {
        Args = &this->ExclArgs;
      }
      if ((Switch[1] != 0x40) || (bVar4 = IsWildcard(Switch), bVar4)) {
        StringList::AddString(Args,Switch + 1);
      }
      else {
        ReadTextFile(Switch + 2,Args,bVar4,true,(this->super_RAROptions).FilelistCharset,true,true,
                     true);
      }
    }
    break;
  case 0x4f:
    iVar5 = toupperw(Switch[1]);
    if (iVar5 == 0x48) {
      (this->super_RAROptions).SaveHardLinks = true;
    }
    else {
      if (iVar5 < 0x49) {
        if (iVar5 == 0x2b) {
          (this->super_RAROptions).Overwrite = OVERWRITE_ALL;
          break;
        }
        if (iVar5 == 0x2d) {
          (this->super_RAROptions).Overwrite = OVERWRITE_NONE;
          break;
        }
        if (iVar5 == 0) {
          (this->super_RAROptions).Overwrite = OVERWRITE_FORCE_ASK;
          break;
        }
      }
      else {
        if (iVar5 == 0x52) {
          (this->super_RAROptions).Overwrite = OVERWRITE_AUTORENAME;
          break;
        }
        if (iVar5 == 0x57) {
          (this->super_RAROptions).ProcessOwners = true;
          break;
        }
        if (iVar5 == 0x4c) {
          (this->super_RAROptions).SaveSymLinks = true;
          break;
        }
      }
      ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
    }
    break;
  case 0x50:
    if (Switch[1] != 0) {
      SecPassword::Set(&(this->super_RAROptions).Password,Switch + 1);
      sVar7 = wcslen((wchar_t *)Switch);
      cleandata(Switch,sVar7 << 2);
      break;
    }
LAB_081044a0:
    GetPassword(PASSWORD_GLOBAL,(wchar *)0x0,&(this->super_RAROptions).Password);
    break;
  case 0x51:
    iVar5 = toupperw(Switch[1]);
    if (iVar5 == 0x4f) {
      iVar5 = toupperw(Switch[2]);
      if (iVar5 == 0x2b) {
        (this->super_RAROptions).QOpenMode = QOPEN_ALWAYS;
      }
      else if (iVar5 == 0x2d) {
        (this->super_RAROptions).QOpenMode = QOPEN_NONE;
      }
      else if (iVar5 == 0) {
        (this->super_RAROptions).QOpenMode = QOPEN_AUTO;
      }
      else {
        ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
      }
      break;
    }
    goto LAB_08104528;
  case 0x52:
    iVar5 = toupperw(Switch[1]);
    if (iVar5 == 0x2d) {
      (this->super_RAROptions).Recurse = RECURSE_DISABLE;
    }
    else if (iVar5 < 0x2e) {
      if (iVar5 == 0) {
        (this->super_RAROptions).Recurse = RECURSE_ALWAYS;
      }
    }
    else if (iVar5 == 0x30) {
      (this->super_RAROptions).Recurse = RECURSE_WILDCARDS;
    }
    else if (iVar5 == 0x49) {
      uVar12 = atoiw(Switch + 2);
      (this->super_RAROptions).Priority = uVar12;
      if (0xf < uVar12) {
        ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
      }
      pwVar6 = wcschr((wchar_t *)(Switch + 2),L':');
      if (pwVar6 != (wchar_t *)0x0) {
        uVar12 = atoiw((wchar *)(pwVar6 + 1));
        (this->super_RAROptions).SleepTime = uVar12;
        if (1000 < (int)uVar12) {
          ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
          uVar12 = (this->super_RAROptions).SleepTime;
        }
        InitSystemOptions(uVar12);
      }
      SetPriority((this->super_RAROptions).Priority);
    }
    break;
  case 0x53:
    bVar4 = IsDigit(Switch[1]);
    if (bVar4) {
      (this->super_RAROptions).Solid = (this->super_RAROptions).Solid | 2;
      uVar12 = atoiw(Switch + 1);
      (this->super_RAROptions).SolidCount = uVar12;
    }
    else {
      iVar5 = toupperw(Switch[1]);
      if (iVar5 == 0x44) {
        (this->super_RAROptions).Solid = (this->super_RAROptions).Solid | 8;
      }
      else if (iVar5 < 0x45) {
        if (iVar5 == 0x2d) {
          (this->super_RAROptions).Solid = 0;
        }
        else if (iVar5 == 0x43) {
          iVar5 = toupperw(Switch[2]);
          if (iVar5 == 0x4f) {
            RVar19 = RCH_OEM;
          }
          else if (iVar5 == 0x55) {
            RVar19 = RCH_UNICODE;
          }
          else {
            if (iVar5 != 0x41) {
              ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
              break;
            }
            RVar19 = RCH_ANSI;
          }
          wVar13 = Switch[3];
          if (wVar13 == 0) {
            (this->super_RAROptions).CommentCharset = RVar19;
            (this->super_RAROptions).FilelistCharset = RVar19;
            (this->super_RAROptions).ErrlogCharset = RVar19;
          }
          else {
            pwVar15 = Switch + 3;
            do {
              iVar5 = toupperw(wVar13);
              if (iVar5 == 0x43) {
                (this->super_RAROptions).CommentCharset = RVar19;
              }
              else {
                if (iVar5 != 0x4c) {
                  ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
                  break;
                }
                (this->super_RAROptions).FilelistCharset = RVar19;
              }
              pwVar15 = pwVar15 + 1;
              wVar13 = *pwVar15;
            } while (wVar13 != 0);
          }
        }
        else if (iVar5 == 0) {
          (this->super_RAROptions).Solid = (this->super_RAROptions).Solid | 1;
        }
      }
      else if (iVar5 == 0x4c) {
        bVar4 = IsDigit(Switch[2]);
        if (bVar4) {
          uVar20 = atoilw(Switch + 2);
          (this->super_RAROptions).FileSizeLess = uVar20;
        }
      }
      else if (iVar5 < 0x4d) {
        if (iVar5 == 0x45) {
          (this->super_RAROptions).Solid = (this->super_RAROptions).Solid | 4;
        }
      }
      else if (iVar5 == 0x4d) {
        bVar4 = IsDigit(Switch[2]);
        if (bVar4) {
          uVar20 = atoilw(Switch + 2);
          (this->super_RAROptions).FileSizeMore = uVar20;
        }
      }
      else if (iVar5 == 0x56) {
        if (Switch[2] == 0x2d) {
          uVar16 = 8;
        }
        else {
          uVar16 = 0x10;
        }
        (this->super_RAROptions).Solid = uVar16 | (this->super_RAROptions).Solid;
      }
    }
    break;
  case 0x54:
    iVar5 = toupperw(Switch[1]);
    switch(iVar5) {
    case 0:
      (this->super_RAROptions).Test = true;
      break;
    default:
      ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
      break;
    case 0x2d:
      (this->super_RAROptions).Test = false;
      break;
    case 0x41:
      RarTime::SetIsoText(&(this->super_RAROptions).FileTimeAfter,Switch + 2);
      break;
    case 0x42:
      RarTime::SetIsoText(&(this->super_RAROptions).FileTimeBefore,Switch + 2);
      break;
    case 0x4b:
      (this->super_RAROptions).ArcTime = 1;
      break;
    case 0x4c:
      (this->super_RAROptions).ArcTime = 2;
      break;
    case 0x4e:
      RarTime::SetAgeText(&(this->super_RAROptions).FileTimeAfter,Switch + 2);
      break;
    case 0x4f:
      RarTime::SetAgeText(&(this->super_RAROptions).FileTimeBefore,Switch + 2);
      break;
    case 0x53:
      wVar13 = Switch[2];
      EVar18 = wVar13 + 0xffffffd0;
      if (EXTTIME_HIGH3 < EVar18) {
        if (wVar13 == 0x2d) {
          EVar18 = EXTTIME_NONE;
        }
        else {
          if ((wVar13 - 0x2b & 0xfffffffd) != 0 && wVar13 != 0) {
            EVar18 = Switch[3] + 0xffffffd0;
            if (EXTTIME_HIGH3 < EVar18) {
              if (Switch[3] == 0x2d) {
                EVar18 = EXTTIME_NONE;
              }
              else {
                EVar18 = EXTTIME_HIGH3;
              }
            }
            iVar5 = toupperw(wVar13);
            if (iVar5 == 0x43) {
              (this->super_RAROptions).xctime = EVar18;
            }
            else if (iVar5 == 0x4d) {
              (this->super_RAROptions).xmtime = EVar18;
            }
            else if (iVar5 == 0x41) {
              (this->super_RAROptions).xatime = EVar18;
            }
            break;
          }
          EVar18 = EXTTIME_HIGH3;
        }
      }
      (this->super_RAROptions).xmtime = EVar18;
      (this->super_RAROptions).xctime = EVar18;
      (this->super_RAROptions).xatime = EVar18;
    }
    break;
  case 0x55:
    if (Switch[1] == 0) {
      (this->super_RAROptions).UpdateFiles = true;
      break;
    }
LAB_08104528:
    ErrorHandler::Exit(&ErrHandler,RARX_USERERROR);
    break;
  case 0x56:
    iVar5 = toupperw(Switch[1]);
    if (iVar5 == 0x45) {
      iVar5 = toupperw(Switch[2]);
      if (iVar5 == 0x52) {
        uVar12 = atoiw(Switch + 3);
        (this->super_RAROptions).VersionControl = uVar12 + 1;
      }
    }
    else if (iVar5 == 0x50) {
      (this->super_RAROptions).VolumePause = true;
    }
    else if (iVar5 == 0x2d) {
      (this->super_RAROptions).VolSize = 0;
    }
    else {
      iVar1 = SIMDExpandImmediate(1,6,0x80);
      (this->super_RAROptions).VolSize = iVar1;
    }
    break;
  case 0x57:
    pwVar15 = (this->super_RAROptions).TempPath;
    wcsncpyz(pwVar15,Switch + 1,0x800);
    AddEndSlash(pwVar15,0x800);
    break;
  case 0x59:
    (this->super_RAROptions).AllYes = true;
    break;
  case 0x5a:
    if (Switch[1] == 0) {
      __wcscpy_chk((this->super_RAROptions).CommentFile,L"stdin",0x800);
    }
    else {
      wcsncpyz((this->super_RAROptions).CommentFile,Switch + 1,0x800);
    }
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


