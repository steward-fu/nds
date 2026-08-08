/*
 * Ghidra decompilation
 *
 * Function : FUN_080d7d3c
 * Address  : 080d7d3c
 * Program  : drastic16
 */


wchar_t * FUN_080d7d3c(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  char cVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  wchar_t wVar7;
  uint uVar8;
  undefined8 uVar9;
  wchar_t local_304c [1024];
  wchar_t awStack_204c [2048];
  char local_49;
  wchar_t *local_48;
  wchar_t local_44;
  wchar_t *local_40;
  wchar_t *local_3c;
  wchar_t local_38;
  int local_34;
  wchar_t local_30;
  char local_29;
  wchar_t *local_28;
  int local_24;
  wchar_t local_20;
  wchar_t local_1c;
  wchar_t local_18;
  uint local_14;
  wchar_t *local_10;
  int local_c;
  
  pwVar3 = (wchar_t *)FUN_080b0d5c(*param_2);
  switch(pwVar3) {
  case (wchar_t *)0x3f:
    pwVar3 = (wchar_t *)FUN_080da788(param_1,0);
    break;
  case (wchar_t *)0x40:
    if (param_2[1] == L'+') {
      wVar7 = L'\x02';
    }
    else {
      wVar7 = L'\x01';
    }
    param_1[0x4970] = wVar7;
    break;
  case (wchar_t *)0x41:
    pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[1]);
    switch(pwVar3) {
    case (wchar_t *)0x43:
      *(undefined *)(param_1 + 0x3095) = 1;
      break;
    case (wchar_t *)0x44:
      *(undefined *)(param_1 + 0x3964) = 1;
      break;
    default:
      pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
      break;
    case (wchar_t *)0x47:
      pwVar3 = (wchar_t *)&stack0xfffffff8;
      if ((param_2[2] == L'-') && (param_2[3] == L'\0')) {
        *(undefined *)((int)param_1 + 0xc29f) = 0;
      }
      else {
        *(undefined *)((int)param_1 + 0xc29f) = 1;
        pwVar3 = (wchar_t *)FUN_080a0620(param_1 + 0x30a8,param_2 + 2,0x80);
      }
      break;
    case (wchar_t *)0x49:
      pwVar3 = (wchar_t *)&stack0xfffffff8;
      *(undefined *)(param_1 + 0x3129) = 1;
      break;
    case (wchar_t *)0x4e:
      break;
    case (wchar_t *)0x4f:
      *(undefined *)((int)param_1 + 0xc255) = 1;
      break;
    case (wchar_t *)0x50:
      pwVar3 = wcscpy(param_1 + 0x2009,param_2 + 2);
      break;
    case (wchar_t *)0x53:
      pwVar3 = (wchar_t *)&stack0xfffffff8;
      *(undefined *)(param_1 + 0x3128) = 1;
    }
    break;
  default:
    pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
    break;
  case (wchar_t *)0x43:
    if (param_2[2] == L'\0') {
      pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[1]);
      if (pwVar3 == (wchar_t *)0x4c) {
        pwVar3 = (wchar_t *)&stack0xfffffff8;
        param_1[0x30a3] = L'\x02';
      }
      else if (pwVar3 == (wchar_t *)0x55) {
        param_1[0x30a3] = L'\x01';
      }
      else if (pwVar3 == (wchar_t *)0x2d) {
        *(undefined *)((int)param_1 + 0xc256) = 1;
      }
    }
    break;
  case (wchar_t *)0x44:
    if (param_2[2] == L'\0') {
      pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[1]);
      if (pwVar3 == (wchar_t *)0x48) {
        pwVar3 = (wchar_t *)&stack0xfffffff8;
        *(undefined *)((int)param_1 + 0xc29d) = 1;
      }
      else if (pwVar3 == (wchar_t *)0x53) {
        *(undefined *)((int)param_1 + 0xc285) = 1;
      }
      else if (pwVar3 == (wchar_t *)0x46) {
        *(undefined *)((int)param_1 + 0xc29e) = 1;
      }
    }
    break;
  case (wchar_t *)0x45:
    pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[1]);
    if (pwVar3 == (wchar_t *)0x45) {
      *(undefined *)((int)param_1 + 0xc4a1) = 0;
    }
    else if (pwVar3 == (wchar_t *)0x50) {
      wVar7 = param_2[2];
      if (wVar7 == L'1') {
        param_1[0x3097] = L'\x02';
      }
      else if ((uint)wVar7 < 0x32) {
        if (wVar7 == L'\0') {
          pwVar3 = (wchar_t *)&stack0xfffffff8;
          param_1[0x3097] = L'\x01';
        }
      }
      else if (wVar7 == L'2') {
        param_1[0x3097] = L'\x03';
      }
      else if (wVar7 == L'3') {
        pwVar3 = (wchar_t *)&stack0xfffffff8;
        param_1[0x3097] = L'\x04';
      }
    }
    else {
      pwVar3 = (wchar_t *)&stack0xfffffff8;
      if (param_2[1] == L'+') {
        wVar7 = FUN_080db660(param_1,param_2 + 2);
        param_1[1] = wVar7;
        *(undefined *)(param_1 + 2) = 1;
      }
      else {
        wVar7 = FUN_080db660(param_1,param_2 + 1);
        *param_1 = wVar7;
      }
    }
    break;
  case (wchar_t *)0x46:
    if (param_2[1] == L'\0') {
      *(undefined *)((int)param_1 + 0xc257) = 1;
    }
    else {
      pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
    }
    break;
  case (wchar_t *)0x48:
    iVar5 = FUN_080b0d5c(param_2[1]);
    if (iVar5 == 0x50) {
      *(undefined *)(param_1 + 0x288a) = 1;
      if (param_2[2] == L'\0') {
        pwVar3 = (wchar_t *)FUN_080af900(param_1 + 0x2809);
        if ((((uint)pwVar3 ^ 1) & 0xff) != 0) {
          FUN_080a0c00(0,0,param_1 + 0x2809);
          pwVar3 = (wchar_t *)FUN_080db8d0(&DAT_080ee90c);
        }
      }
      else {
        FUN_080b76e8(param_1 + 0x2809,param_2 + 2);
        sVar6 = wcslen(param_2);
        pwVar3 = (wchar_t *)FUN_080b7588(param_2,sVar6 << 2);
      }
    }
    else {
      pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
    }
    break;
  case (wchar_t *)0x49:
    iVar5 = FUN_080b0bb0(param_2 + 1,&DAT_080ee914,3);
    if (iVar5 == 0) {
      if (param_2[4] == L'\0') {
        param_2 = L".rarlog";
      }
      else {
        param_2 = param_2 + 4;
      }
      pwVar3 = (wchar_t *)FUN_080a0620(param_1 + 0x288b,param_2,0x800);
    }
    else {
      iVar5 = FUN_080b0b10(param_2 + 1,&DAT_080ee944);
      if (iVar5 == 0) {
        *(undefined *)(param_1 + 0x308c) = 1;
        pwVar3 = (wchar_t *)0x0;
      }
      else {
        iVar5 = FUN_080b0b10(param_2 + 1,&DAT_080ee954);
        if (iVar5 == 0) {
          param_1[0x308b] = L'\x01';
          pwVar3 = (wchar_t *)0x0;
        }
        else {
          iVar5 = FUN_080b0bb0(param_2 + 1,&DAT_080ee964,3);
          if (iVar5 == 0) {
            if (param_2[4] == L'\0') {
              param_2 = L"@";
            }
            else {
              param_2 = param_2 + 4;
            }
            pwVar3 = (wchar_t *)FUN_080a0620(param_1 + 0x3163,param_2,0x800);
          }
          else {
            iVar5 = FUN_080b0b10(param_2 + 1,&DAT_080ee97c);
            if (iVar5 == 0) {
              param_1[0x308b] = L'\x03';
              pwVar3 = (wchar_t *)0x0;
            }
            else {
              iVar5 = FUN_080b0d5c(param_2[1]);
              if (iVar5 == 0x44) {
                for (local_c = 2; pwVar3 = (wchar_t *)&stack0xfffffff8, param_2[local_c] != L'\0';
                    local_c = local_c + 1) {
                  uVar4 = FUN_080b0d5c(param_2[local_c]);
                  switch(uVar4) {
                  case 0x43:
                    *(undefined *)((int)param_1 + 0xc249) = 1;
                    break;
                  case 0x44:
                    *(undefined *)((int)param_1 + 0xc24a) = 1;
                    break;
                  case 0x50:
                    *(undefined *)(param_1 + 0x3092) = 1;
                    break;
                  case 0x51:
                    param_1[0x308b] = L'\x02';
                  }
                }
              }
              else {
                pwVar3 = (wchar_t *)FUN_080b0b10(param_2 + 1,&DAT_080ee98c);
                if (pwVar3 == (wchar_t *)0x0) {
                  *(undefined *)((int)param_1 + 0xe591) = 1;
                }
              }
            }
          }
        }
      }
    }
    break;
  case (wchar_t *)0x4b:
    pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[1]);
    if (pwVar3 == (wchar_t *)0x0) {
      *(undefined *)(param_1 + 0x3132) = 1;
    }
    else if (pwVar3 == (wchar_t *)0x42) {
      *(undefined *)(param_1 + 0x30a7) = 1;
    }
    break;
  case (wchar_t *)0x4d:
    pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[1]);
    switch(pwVar3) {
    case (wchar_t *)0x43:
      local_10 = param_2 + 2;
      if (*local_10 == L'-') {
        for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
          param_1[local_14 * 3 + 0x3133] = L'\x03';
          pwVar3 = param_1;
        }
      }
      else {
        while (*local_10 != L'\0') {
          local_18 = L'\0';
          local_1c = L'\0';
          local_20 = L'\x01';
          local_24 = 8;
          iVar5 = FUN_080a0128(*local_10);
          if (iVar5 != 0) {
            local_18 = FUN_080b0db4(local_10);
            while (iVar5 = FUN_080a0128(*local_10), iVar5 != 0) {
              local_10 = local_10 + 1;
            }
          }
          if ((*local_10 == L':') && (iVar5 = FUN_080a0128(local_10[1]), iVar5 != 0)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            local_10 = local_10 + 1;
            local_1c = FUN_080b0db4(local_10);
            while (iVar5 = FUN_080a0128(*local_10), iVar5 != 0) {
              local_10 = local_10 + 1;
            }
          }
          wVar7 = *local_10;
          local_10 = local_10 + 1;
          uVar4 = FUN_080b0d5c(wVar7);
          switch(uVar4) {
          case 0x41:
            local_24 = 4;
            break;
          case 0x43:
            local_24 = 5;
            break;
          case 0x44:
            local_24 = 0;
            break;
          case 0x45:
            local_24 = 1;
            break;
          case 0x49:
            local_24 = 6;
            break;
          case 0x52:
            local_24 = 3;
            break;
          case 0x54:
            local_24 = 7;
          }
          if ((*local_10 == L'+') || (*local_10 == L'-')) {
            if (*local_10 == L'+') {
              local_20 = L'\x02';
              local_10 = local_10 + 1;
            }
            else {
              local_20 = L'\x03';
              local_10 = local_10 + 1;
            }
          }
          param_1[local_24 * 3 + 0x3133] = local_20;
          param_1[local_24 * 3 + 0x3134] = local_18;
          param_1[local_24 * 3 + 0x3135] = local_1c;
          pwVar3 = param_1;
        }
      }
      break;
    case (wchar_t *)0x44:
    case (wchar_t *)0x4d:
      break;
    default:
      param_1[0x308e] = param_2[1] + L'\xffffffd0';
      if ((L'\x05' < param_1[0x308e]) ||
         (pwVar3 = (wchar_t *)&stack0xfffffff8, param_1[0x308e] < L'\0')) {
        pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
      }
      break;
    case (wchar_t *)0x53:
      if (param_2[2] == L'\0') {
        param_2 = L"7z;ace;arj;bz2;cab;gz;jpeg;jpg;lha;lzh;mp3;rar;taz;tgz;xz;z;zip";
      }
      else {
        param_2 = param_2 + 2;
      }
      pwVar3 = (wchar_t *)FUN_080a0620(local_304c,param_2,0x400);
      local_28 = local_304c;
      while (*local_28 != L'\0') {
        local_3c = wcschr(local_28,L';');
        if (local_3c != (wchar_t *)0x0) {
          *local_3c = L'\0';
        }
        if (*local_28 == L'.') {
          local_28 = local_28 + 1;
        }
        pwVar3 = wcspbrk(local_28,L"*?.");
        if (pwVar3 == (wchar_t *)0x0) {
          swprintf(awStack_204c,0x800,L"*.%s",local_28);
        }
        else {
          FUN_080a0620(awStack_204c,local_28,0x800);
        }
        pwVar3 = (wchar_t *)FUN_0809f558(param_1 + 0x59de,awStack_204c);
        if (local_3c == (wchar_t *)0x0) {
          return pwVar3;
        }
        local_28 = local_3c + 1;
      }
      break;
    case (wchar_t *)0x54:
      wVar7 = FUN_080b0db4(param_2 + 2);
      param_1[0x4168] = wVar7;
      if ((0x20 < (uint)param_1[0x4168]) ||
         (pwVar3 = (wchar_t *)&stack0xfffffff8, param_1[0x4168] == L'\0')) {
        pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
      }
    }
    break;
  case (wchar_t *)0x4e:
  case (wchar_t *)0x58:
    if (param_2[1] != L'\0') {
      iVar5 = FUN_080b0d5c(*param_2);
      if (iVar5 == 0x4e) {
        local_40 = param_1 + 0x59b0;
      }
      else {
        local_40 = param_1 + 0x5999;
      }
      if ((param_2[1] == L'@') && (cVar2 = FUN_080a1270(param_2), cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_44 = param_1[0x2007];
        pwVar3 = (wchar_t *)FUN_080dcebc(param_2 + 2,local_40,0,1,local_44,1,1,1);
      }
      else {
        pwVar3 = (wchar_t *)FUN_0809f558(local_40,param_2 + 1);
      }
    }
    break;
  case (wchar_t *)0x4f:
    iVar5 = FUN_080b0d5c(param_2[1]);
    if (iVar5 == 0x48) {
      *(undefined *)((int)param_1 + 0xc292) = 1;
      pwVar3 = (wchar_t *)0x48;
    }
    else {
      if (iVar5 < 0x49) {
        if (iVar5 == 0x2b) {
          param_1[0x308d] = L'\x01';
          return (wchar_t *)0x2b;
        }
        if (iVar5 == 0x2d) {
          param_1[0x308d] = L'\x02';
          return (wchar_t *)&stack0xfffffff8;
        }
        if (iVar5 == 0) {
          param_1[0x308d] = L'\x04';
          return (wchar_t *)0x0;
        }
      }
      else {
        if (iVar5 == 0x52) {
          param_1[0x308d] = L'\x03';
          return (wchar_t *)0x52;
        }
        if (iVar5 == 0x57) {
          *(undefined *)(param_1 + 0x30a4) = 1;
          return (wchar_t *)0x57;
        }
        if (iVar5 == 0x4c) {
          *(undefined *)((int)param_1 + 0xc291) = 1;
          return (wchar_t *)&stack0xfffffff8;
        }
      }
      pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
    }
    break;
  case (wchar_t *)0x50:
    if (param_2[1] == L'\0') {
      FUN_080a0c00(0,0,param_1 + 0x2809);
      pwVar3 = (wchar_t *)FUN_080db8d0(&DAT_080ee90c);
    }
    else {
      FUN_080b76e8(param_1 + 0x2809,param_2 + 1);
      sVar6 = wcslen(param_2);
      pwVar3 = (wchar_t *)FUN_080b7588(param_2,sVar6 << 2);
    }
    break;
  case (wchar_t *)0x51:
    iVar5 = FUN_080b0d5c(param_2[1]);
    if (iVar5 == 0x4f) {
      pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[2]);
      if (pwVar3 == (wchar_t *)0x2b) {
        param_1[0x1004] = L'\x02';
      }
      else if (pwVar3 == (wchar_t *)0x2d) {
        param_1[0x1004] = L'\0';
        pwVar3 = (wchar_t *)&stack0xfffffff8;
      }
      else if (pwVar3 == (wchar_t *)0x0) {
        param_1[0x1004] = L'\x01';
      }
      else {
        pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
      }
    }
    else {
      pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
    }
    break;
  case (wchar_t *)0x52:
    pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[1]);
    if (pwVar3 == (wchar_t *)0x2d) {
      param_1[0x3098] = L'\x01';
    }
    else if ((int)pwVar3 < 0x2e) {
      if (pwVar3 == (wchar_t *)0x0) {
        param_1[0x3098] = L'\x02';
        pwVar3 = (wchar_t *)&stack0xfffffff8;
      }
    }
    else if (pwVar3 == (wchar_t *)0x30) {
      param_1[0x3098] = L'\x03';
    }
    else if (pwVar3 == (wchar_t *)0x49) {
      wVar7 = FUN_080b0db4(param_2 + 2);
      param_1[0x30a5] = wVar7;
      if ((param_1[0x30a5] < L'\0') || (L'\x0f' < param_1[0x30a5])) {
        FUN_080da700(param_1,param_2);
      }
      local_48 = wcschr(param_2 + 2,L':');
      if (local_48 != (wchar_t *)0x0) {
        wVar7 = FUN_080b0db4(local_48 + 1);
        param_1[0x30a6] = wVar7;
        if (L'Ϩ' < param_1[0x30a6]) {
          FUN_080da700(param_1,param_2);
        }
        FUN_080b0e94(param_1[0x30a6]);
      }
      pwVar3 = (wchar_t *)FUN_080b0ec0(param_1[0x30a5]);
    }
    break;
  case (wchar_t *)0x53:
    iVar5 = FUN_080a0128(param_2[1]);
    if (iVar5 == 0) {
      pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[1]);
      if (pwVar3 == (wchar_t *)0x44) {
        param_1[0x3093] = param_1[0x3093] | 8;
        pwVar3 = (wchar_t *)&stack0xfffffff8;
      }
      else if ((int)pwVar3 < 0x45) {
        if (pwVar3 == (wchar_t *)0x2d) {
          param_1[0x3093] = L'\0';
          pwVar3 = (wchar_t *)&stack0xfffffff8;
        }
        else if (pwVar3 == (wchar_t *)0x43) {
          local_29 = '\0';
          local_30 = L'\0';
          pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[2]);
          if (pwVar3 == (wchar_t *)0x4f) {
            local_30 = L'\x02';
          }
          else if (pwVar3 == (wchar_t *)0x55) {
            local_30 = L'\x03';
          }
          else if (pwVar3 == (wchar_t *)0x41) {
            local_30 = L'\x01';
          }
          else {
            pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
            local_29 = '\x01';
          }
          if (local_29 != '\x01') {
            if (param_2[3] == L'\0') {
              param_1[0x2008] = local_30;
              param_1[0x2007] = param_1[0x2008];
              param_1[0x2006] = param_1[0x2007];
              pwVar3 = (wchar_t *)&stack0xfffffff8;
            }
            else {
              local_34 = 3;
              while ((param_2[local_34] != L'\0' && (local_29 != '\x01'))) {
                pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[local_34]);
                if (pwVar3 == (wchar_t *)0x43) {
                  param_1[0x2006] = local_30;
                }
                else if (pwVar3 == (wchar_t *)0x4c) {
                  param_1[0x2007] = local_30;
                }
                else {
                  pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
                  local_29 = '\x01';
                }
                local_34 = local_34 + 1;
              }
            }
          }
        }
        else if (pwVar3 == (wchar_t *)0x0) {
          param_1[0x3093] = param_1[0x3093] | 1;
        }
      }
      else if (pwVar3 == (wchar_t *)0x4c) {
        pwVar3 = (wchar_t *)FUN_080a0128(param_2[2]);
        if (pwVar3 != (wchar_t *)0x0) {
          uVar9 = FUN_080b0de4(param_2 + 2);
          *(undefined8 *)(param_1 + 0x312e) = uVar9;
          pwVar3 = (wchar_t *)uVar9;
        }
      }
      else if ((int)pwVar3 < 0x4d) {
        if (pwVar3 == (wchar_t *)0x45) {
          param_1[0x3093] = param_1[0x3093] | 4;
        }
      }
      else if (pwVar3 == (wchar_t *)0x4d) {
        pwVar3 = (wchar_t *)FUN_080a0128(param_2[2]);
        if (pwVar3 != (wchar_t *)0x0) {
          uVar9 = FUN_080b0de4(param_2 + 2);
          *(undefined8 *)(param_1 + 0x3130) = uVar9;
          pwVar3 = (wchar_t *)uVar9;
        }
      }
      else if (pwVar3 == (wchar_t *)0x56) {
        if (param_2[2] == L'-') {
          uVar8 = 8;
        }
        else {
          uVar8 = 0x10;
        }
        param_1[0x3093] = param_1[0x3093] | uVar8;
        pwVar3 = (wchar_t *)&stack0xfffffff8;
      }
    }
    else {
      param_1[0x3093] = param_1[0x3093] | 2;
      pwVar3 = (wchar_t *)FUN_080b0db4(param_2 + 1);
      param_1[0x3094] = (wchar_t)pwVar3;
    }
    break;
  case (wchar_t *)0x54:
    pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[1]);
    switch(pwVar3) {
    case (wchar_t *)0x0:
      *(undefined *)((int)param_1 + 0xc4c9) = 1;
      break;
    default:
      pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
      break;
    case (wchar_t *)0x2d:
      *(undefined *)((int)param_1 + 0xc4c9) = 0;
      break;
    case (wchar_t *)0x41:
      pwVar3 = (wchar_t *)FUN_080b57f4(param_1 + 0x312c,param_2 + 2);
      break;
    case (wchar_t *)0x42:
      pwVar3 = (wchar_t *)FUN_080b57f4(param_1 + 0x312a,param_2 + 2);
      break;
    case (wchar_t *)0x4b:
      param_1[0x30a2] = L'\x01';
      break;
    case (wchar_t *)0x4c:
      param_1[0x30a2] = L'\x02';
      break;
    case (wchar_t *)0x4e:
      pwVar3 = (wchar_t *)FUN_080b5984(param_1 + 0x312c,param_2 + 2);
      break;
    case (wchar_t *)0x4f:
      pwVar3 = (wchar_t *)FUN_080b5984(param_1 + 0x312a,param_2 + 2);
      break;
    case (wchar_t *)0x53:
      local_38 = L'\x04';
      if (((uint)param_2[2] < 0x30) || (0x34 < (uint)param_2[2])) {
        local_49 = '\0';
      }
      else {
        local_49 = '\x01';
      }
      if (local_49 != '\0') {
        local_38 = param_2[2] + L'\xffffffd0';
      }
      if (param_2[2] == L'-') {
        local_38 = L'\0';
      }
      if ((((local_49 == '\0') && (param_2[2] != L'-')) && (param_2[2] != L'+')) &&
         (param_2[2] != L'\0')) {
        if ((0x2f < (uint)param_2[3]) && ((uint)param_2[3] < 0x35)) {
          local_38 = param_2[3] + L'\xffffffd0';
        }
        if (param_2[3] == L'-') {
          local_38 = L'\0';
        }
        pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[2]);
        if (pwVar3 == (wchar_t *)0x43) {
          param_1[0x3966] = local_38;
        }
        else if (pwVar3 == (wchar_t *)0x4d) {
          param_1[0x3965] = local_38;
        }
        else if (pwVar3 == (wchar_t *)0x41) {
          param_1[0x3967] = local_38;
          pwVar3 = (wchar_t *)&stack0xfffffff8;
        }
      }
      else {
        param_1[0x3967] = local_38;
        param_1[0x3966] = param_1[0x3967];
        param_1[0x3965] = param_1[0x3966];
        pwVar3 = (wchar_t *)&stack0xfffffff8;
      }
    }
    break;
  case (wchar_t *)0x55:
    if (param_2[1] == L'\0') {
      *(undefined *)(param_1 + 0x3096) = 1;
      pwVar3 = (wchar_t *)&stack0xfffffff8;
    }
    else {
      pwVar3 = (wchar_t *)FUN_080da700(param_1,param_2);
    }
    break;
  case (wchar_t *)0x56:
    pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[1]);
    if (pwVar3 == (wchar_t *)0x45) {
      pwVar3 = (wchar_t *)FUN_080b0d5c(param_2[2]);
      if (pwVar3 == (wchar_t *)0x52) {
        pwVar3 = (wchar_t *)FUN_080b0db4(param_2 + 3);
        param_1[0x3963] = (int)pwVar3 + L'\x01';
      }
    }
    else if (pwVar3 == (wchar_t *)0x50) {
      *(undefined *)((int)param_1 + 0xc4ca) = 1;
      pwVar3 = (wchar_t *)&stack0xfffffff8;
    }
    else if (pwVar3 == (wchar_t *)0x2d) {
      *(undefined8 *)(param_1 + 0x309a) = 0;
      pwVar3 = (wchar_t *)&stack0xfffffff8;
    }
    else {
      uVar9 = SIMDExpandImmediate(1,6,0x80);
      *(undefined8 *)(param_1 + 0x309a) = uVar9;
    }
    break;
  case (wchar_t *)0x57:
    FUN_080a0620(param_1 + 4,param_2 + 1,0x800);
    pwVar3 = (wchar_t *)FUN_080a1368(param_1 + 4,0x800);
    break;
  case (wchar_t *)0x59:
    *(undefined *)(param_1 + 0x30a1) = 1;
    break;
  case (wchar_t *)0x5a:
    if (param_2[1] == L'\0') {
      pwVar3 = wcscpy(param_1 + 0x1806,L"stdin");
    }
    else {
      pwVar3 = (wchar_t *)FUN_080a0620(param_1 + 0x1806,param_2 + 1,0x800);
    }
  }
  return pwVar3;
}


