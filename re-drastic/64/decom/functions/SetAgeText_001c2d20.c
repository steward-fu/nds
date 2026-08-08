/*
 * Ghidra decompilation
 *
 * Function : SetAgeText
 * Address  : 001c2d20
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RarTime::SetAgeText(wchar_t const*) */

void __thiscall RarTime::SetAgeText(RarTime *this,wchar_t *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long local_10;
  long local_8;
  
  wVar4 = *param_1;
  local_8 = ___stack_chk_guard;
  if (wVar4 == L'\0') {
    lVar8 = 0;
  }
  else {
    iVar6 = 0;
    uVar7 = 0;
    pwVar5 = param_1 + 1;
LAB_001c2d90:
    do {
      cVar2 = IsDigit(wVar4);
      if (cVar2 == '\0') {
        bVar3 = etoupper((uchar)wVar4);
        if (bVar3 == 0x4d) {
          uVar7 = uVar7 + iVar6 * 0x3c;
          iVar6 = 0;
        }
        else {
          if (bVar3 < 0x4e) {
            if (bVar3 == 0x44) {
              uVar7 = uVar7 + iVar6 * 0x15180;
              iVar6 = 0;
              goto LAB_001c2d88;
            }
            if (bVar3 == 0x48) {
              wVar4 = *pwVar5;
              uVar7 = uVar7 + iVar6 * 0xe10;
              iVar6 = 0;
              pwVar5 = pwVar5 + 1;
              if (wVar4 == L'\0') break;
              goto LAB_001c2d90;
            }
          }
          else if (bVar3 == 0x53) {
            uVar7 = uVar7 + iVar6;
          }
          iVar6 = 0;
        }
      }
      else {
        iVar6 = wVar4 + L'\xffffffd0' + iVar6 * 10;
      }
LAB_001c2d88:
      wVar4 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar4 != L'\0');
    lVar8 = (ulong)uVar7 * 10000000;
  }
  time(&local_10);
  lVar1 = local_8 - ___stack_chk_guard;
  *(long *)this = (local_10 * 10000000 + 0x19db1ded53e8000) - lVar8;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1,0);
}


