/*
 * Ghidra decompilation
 *
 * Function : match
 * Address  : 0810a030
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

bool match(wchar *pattern,wchar *string,bool ForceCase)

{
  bool bVar1;
  wchar *dot_3;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar *dot_2;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar *dot_4;
  wchar *dot;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t wVar8;
  wchar *dot_1;
  wchar_t *__wcs;
  wchar_t *__wcs_00;
  wchar_t wVar9;
  wchar_t *__wcs_01;
  wchar_t *pwVar10;
  wchar_t *__wcs_02;
  wchar_t *__wcs_03;
  wchar_t *__wcs_04;
  wchar_t *local_40;
  
  while( true ) {
    pwVar6 = (wchar_t *)string;
    __wcs = (wchar_t *)pattern + 1;
    wVar8 = *pattern;
    wVar9 = *pwVar6;
    if (wVar8 == L'*') break;
    string = (wchar *)(pwVar6 + 1);
    pattern = (wchar *)__wcs;
    if (wVar8 == L'?') {
      if (wVar9 == L'\0') {
        return false;
      }
    }
    else {
      if (wVar8 == L'\0') {
        return wVar9 == L'\0';
      }
      if (wVar9 != wVar8) {
        if (wVar8 != L'.') {
          return (bool)0;
        }
        string = (wchar *)pwVar6;
        if (wVar9 != L'.' && (wVar9 != L'\\' && wVar9 != L'\0')) {
          return (bool)0;
        }
      }
    }
  }
  if (((wchar_t *)pattern)[1] == L'\0') {
    return (bool)1;
  }
  if (((wchar_t *)pattern)[1] == L'.') {
    wVar8 = ((wchar_t *)pattern)[2];
    if (wVar8 == L'*') {
      if (((wchar_t *)pattern)[3] == L'\0') {
        return (bool)1;
      }
      pwVar2 = wcschr(pwVar6,L'.');
    }
    else {
      pwVar2 = wcschr(pwVar6,L'.');
      if (wVar8 == L'\0') {
        if (pwVar2 == (wchar_t *)0x0) {
          return true;
        }
        return pwVar2[1] == L'\0';
      }
    }
    if (pwVar2 != (wchar_t *)0x0) {
      pwVar6 = wcspbrk(__wcs,L"*?");
      if (pwVar6 == (wchar_t *)0x0) {
        pwVar6 = wcschr(pwVar2 + 1,L'.');
        if (pwVar6 == (wchar_t *)0x0) {
          iVar7 = mwcsicompc((wchar *)((wchar_t *)pattern + 2),(wchar *)(pwVar2 + 1),ForceCase);
          return iVar7 == 0;
        }
      }
      wVar9 = *pwVar2;
      pwVar6 = pwVar2;
    }
  }
LAB_0810a0ec:
  pwVar2 = pwVar6;
  pwVar10 = __wcs;
  if (wVar9 == L'\0') {
    return (bool)0;
  }
  do {
    while( true ) {
      local_40 = pwVar2;
      __wcs_00 = pwVar10 + 1;
      wVar9 = *pwVar10;
      wVar8 = *local_40;
      if (wVar9 == L'*') {
        if (pwVar10[1] == L'\0') {
          return (bool)1;
        }
        if (pwVar10[1] == L'.') {
          wVar9 = pwVar10[2];
          if (wVar9 == L'*') {
            if (pwVar10[3] == L'\0') {
              return (bool)1;
            }
            pwVar2 = wcschr(local_40,L'.');
          }
          else {
            pwVar2 = wcschr(local_40,L'.');
            if (wVar9 == L'\0') {
              if (pwVar2 == (wchar_t *)0x0) {
                return (bool)1;
              }
              wVar8 = pwVar2[1];
              goto joined_r0x0810a650;
            }
          }
          if (pwVar2 != (wchar_t *)0x0) {
            pwVar5 = wcspbrk(__wcs_00,L"*?");
            if (pwVar5 == (wchar_t *)0x0) {
              pwVar5 = wcschr(pwVar2 + 1,L'.');
              if (pwVar5 == (wchar_t *)0x0) {
                wVar8 = mwcsicompc((wchar *)(pwVar10 + 2),(wchar *)(pwVar2 + 1),ForceCase);
                goto joined_r0x0810a650;
              }
            }
            wVar8 = *pwVar2;
            local_40 = pwVar2;
          }
        }
        goto LAB_0810a228;
      }
      pwVar2 = local_40 + 1;
      pwVar10 = __wcs_00;
      if (wVar9 == L'?') break;
      if (wVar9 == L'\0') {
joined_r0x0810a650:
        if (wVar8 == L'\0') {
          return (bool)1;
        }
        goto LAB_0810a1e8;
      }
      if ((wVar8 != wVar9) &&
         ((wVar9 != L'.' || (pwVar2 = local_40, wVar8 != L'.' && (wVar8 != L'\\' && wVar8 != L'\0'))
          ))) goto LAB_0810a1e8;
    }
  } while (wVar8 != L'\0');
  goto LAB_0810a1e8;
LAB_0810a228:
  pwVar2 = local_40;
  pwVar10 = __wcs_00;
  if (wVar8 != L'\0') {
    while( true ) {
      pwVar5 = pwVar2;
      __wcs_04 = pwVar10 + 1;
      wVar9 = *pwVar10;
      wVar8 = *pwVar5;
      if (wVar9 == L'*') break;
      pwVar2 = pwVar5 + 1;
      pwVar10 = __wcs_04;
      if (wVar9 == L'?') {
        if (wVar8 == L'\0') {
          wVar8 = local_40[1];
          local_40 = local_40 + 1;
          goto LAB_0810a228;
        }
      }
      else {
        if (wVar9 == L'\0') {
joined_r0x0810a198:
          if (wVar8 == L'\0') {
            return (bool)1;
          }
          goto LAB_0810a358;
        }
        if ((wVar8 != wVar9) &&
           ((wVar9 != L'.' || (pwVar2 = pwVar5, wVar8 != L'.' && (wVar8 != L'\\' && wVar8 != L'\0'))
            ))) goto LAB_0810a358;
      }
    }
    if (pwVar10[1] == L'\0') {
      return (bool)1;
    }
    if (pwVar10[1] == L'.') {
      wVar9 = pwVar10[2];
      if (wVar9 == L'*') {
        if (pwVar10[3] == L'\0') {
          return (bool)1;
        }
        pwVar2 = wcschr(pwVar5,L'.');
      }
      else {
        pwVar2 = wcschr(pwVar5,L'.');
        if (wVar9 == L'\0') {
          if (pwVar2 == (wchar_t *)0x0) {
            return (bool)1;
          }
          wVar8 = pwVar2[1];
          goto joined_r0x0810a198;
        }
      }
      if (pwVar2 != (wchar_t *)0x0) {
        pwVar5 = wcspbrk(__wcs_04,L"*?");
        if (pwVar5 == (wchar_t *)0x0) {
          pwVar5 = wcschr(pwVar2 + 1,L'.');
          if (pwVar5 == (wchar_t *)0x0) {
            wVar8 = mwcsicompc((wchar *)(pwVar10 + 2),(wchar *)(pwVar2 + 1),ForceCase);
            goto joined_r0x0810a198;
          }
        }
        wVar8 = *pwVar2;
        pwVar5 = pwVar2;
      }
    }
    while (pwVar2 = pwVar5, pwVar10 = __wcs_04, wVar8 != L'\0') {
      do {
        while( true ) {
          pwVar4 = pwVar2;
          __wcs_03 = pwVar10 + 1;
          wVar9 = *pwVar10;
          wVar8 = *pwVar4;
          if (wVar9 == L'*') {
            if (pwVar10[1] == L'\0') {
              return (bool)1;
            }
            if (pwVar10[1] != L'.') goto LAB_0810a38c;
            wVar9 = pwVar10[2];
            if (wVar9 == L'*') {
              if (pwVar10[3] == L'\0') {
                return (bool)1;
              }
              pwVar2 = wcschr(pwVar4,L'.');
            }
            else {
              pwVar2 = wcschr(pwVar4,L'.');
              if (wVar9 == L'\0') {
                if (pwVar2 == (wchar_t *)0x0) {
                  return (bool)1;
                }
                if (pwVar2[1] == L'\0') {
                  return (bool)1;
                }
                wVar8 = pwVar5[1];
                goto LAB_0810a34c;
              }
            }
            if (pwVar2 != (wchar_t *)0x0) {
              pwVar4 = wcspbrk(__wcs_03,L"*?");
              if (pwVar4 == (wchar_t *)0x0) {
                pwVar4 = wcschr(pwVar2 + 1,L'.');
                if (pwVar4 == (wchar_t *)0x0) {
                  wVar8 = mwcsicompc((wchar *)(pwVar10 + 2),(wchar *)(pwVar2 + 1),ForceCase);
                  goto LAB_0810a340;
                }
              }
              wVar8 = *pwVar2;
              pwVar4 = pwVar2;
            }
            goto LAB_0810a38c;
          }
          pwVar2 = pwVar4 + 1;
          pwVar10 = __wcs_03;
          if (wVar9 == L'?') break;
          if (wVar9 == L'\0') {
LAB_0810a340:
            if (wVar8 == L'\0') {
              return (bool)1;
            }
            goto LAB_0810a348;
          }
          if ((wVar8 != wVar9) &&
             ((wVar9 != L'.' ||
              (pwVar2 = pwVar4, wVar8 != L'.' && (wVar8 != L'\\' && wVar8 != L'\0')))))
          goto LAB_0810a348;
        }
      } while (wVar8 != L'\0');
LAB_0810a348:
      wVar8 = pwVar5[1];
LAB_0810a34c:
      pwVar5 = pwVar5 + 1;
    }
LAB_0810a358:
    wVar8 = local_40[1];
    local_40 = local_40 + 1;
    goto LAB_0810a228;
  }
LAB_0810a1e8:
  wVar9 = pwVar6[1];
  pwVar6 = pwVar6 + 1;
  goto LAB_0810a0ec;
LAB_0810a38c:
  pwVar2 = pwVar4;
  pwVar10 = __wcs_03;
  if (wVar8 != L'\0') {
LAB_0810a3a0:
    do {
      __wcs_01 = pwVar2;
      __wcs_02 = pwVar10 + 1;
      wVar9 = *pwVar10;
      wVar8 = *__wcs_01;
      if (wVar9 == L'*') {
        if (pwVar10[1] == L'\0') {
          return (bool)1;
        }
        if (pwVar10[1] != L'.') goto LAB_0810a480;
        wVar8 = pwVar10[2];
        if (wVar8 == L'*') {
          if (pwVar10[3] == L'\0') {
            return (bool)1;
          }
          pwVar2 = wcschr(__wcs_01,L'.');
        }
        else {
          pwVar2 = wcschr(__wcs_01,L'.');
          if (wVar8 == L'\0') {
            if (pwVar2 == (wchar_t *)0x0) {
              return (bool)1;
            }
            if (pwVar2[1] == L'\0') {
              return (bool)1;
            }
            wVar8 = pwVar4[1];
            pwVar4 = pwVar4 + 1;
            goto LAB_0810a38c;
          }
        }
        if ((pwVar2 == (wchar_t *)0x0) ||
           (pwVar3 = wcspbrk(__wcs_02,L"*?"), __wcs_01 = pwVar2, pwVar3 != (wchar_t *)0x0))
        goto LAB_0810a480;
        pwVar2 = wcschr(pwVar2 + 1,L'.');
        if (pwVar2 != (wchar_t *)0x0) goto LAB_0810a480;
        wVar8 = mwcsicompc((wchar *)(pwVar10 + 2),(wchar *)(pwVar2 + 1),ForceCase);
LAB_0810a438:
        if (wVar8 == L'\0') {
          return (bool)1;
        }
        goto LAB_0810a448;
      }
      pwVar2 = __wcs_01 + 1;
      pwVar10 = __wcs_02;
      if (wVar9 == L'?') {
        if (wVar8 == L'\0') goto LAB_0810a448;
        goto LAB_0810a3a0;
      }
      if (wVar9 == L'\0') goto LAB_0810a438;
      if ((wVar8 != wVar9) &&
         ((wVar9 != L'.' || (pwVar2 = __wcs_01, wVar8 != L'.' && (wVar8 != L'\\' && wVar8 != L'\0'))
          ))) goto LAB_0810a448;
    } while( true );
  }
  goto LAB_0810a348;
LAB_0810a480:
  while (*__wcs_01 != L'\0') {
    bVar1 = match((wchar *)__wcs_02,(wchar *)__wcs_01,ForceCase);
    __wcs_01 = __wcs_01 + 1;
    if (bVar1) {
      return (bool)1;
    }
  }
  wVar8 = pwVar4[1];
  pwVar4 = pwVar4 + 1;
  goto LAB_0810a38c;
LAB_0810a448:
  wVar8 = pwVar4[1];
  pwVar4 = pwVar4 + 1;
  goto LAB_0810a38c;
}


