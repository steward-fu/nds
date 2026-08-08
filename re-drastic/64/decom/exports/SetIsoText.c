/*
 * Ghidra decompilation
 *
 * Function : SetIsoText
 * Address  : 001c2bc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RarTime::SetIsoText(wchar_t const*) */

void __thiscall RarTime::SetIsoText(RarTime *this,wchar_t *param_1)

{
  char cVar1;
  time_t tVar2;
  int iVar3;
  uint uVar4;
  wchar_t wVar5;
  uint uVar6;
  tm local_60;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  wVar5 = *param_1;
  local_8 = ___stack_chk_guard;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (wVar5 == L'\0') {
    local_10._4_4_ = 0;
    local_10._0_4_ = 0;
    local_18._4_4_ = 0;
    local_60.tm_year = -0x76c;
    iVar3 = 1;
    local_60.tm_mon = 0;
  }
  else {
    uVar6 = 0;
    do {
      cVar1 = IsDigit(wVar5);
      if (cVar1 != '\0') {
        if (uVar6 < 4) {
          uVar4 = 0;
LAB_001c2ce4:
          *(wchar_t *)((long)&local_20 + (long)(int)uVar4 * 4) =
               *param_1 + L'\xffffffd0' + *(int *)((long)&local_20 + (long)(int)uVar4 * 4) * 10;
        }
        else {
          uVar4 = (uVar6 - 4 >> 1) + 1;
          if (uVar4 < 6) goto LAB_001c2ce4;
        }
        uVar6 = uVar6 + 1;
      }
      param_1 = param_1 + 1;
      wVar5 = *param_1;
    } while (wVar5 != L'\0');
    iVar3 = (int)local_18;
    if ((int)local_18 == 0) {
      iVar3 = 1;
    }
    local_60.tm_mon = local_20._4_4_ - (uint)(local_20._4_4_ != 0);
    local_60.tm_year = (int)local_20 + -0x76c;
  }
  local_60.tm_isdst = -1;
  local_60.tm_mday = iVar3;
  local_60.tm_hour = local_18._4_4_;
  local_60.tm_min = (int)local_10;
  local_60.tm_sec = local_10._4_4_;
  tVar2 = mktime(&local_60);
  *(time_t *)this = tVar2 * 10000000 + 0x19db1ded53e8000;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


