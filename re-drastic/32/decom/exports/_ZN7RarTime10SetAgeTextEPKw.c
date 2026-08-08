/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime10SetAgeTextEPKw
 * Address  : 080e1cd0
 * Program  : drastic
 */


/* DWARF original prototype: void SetAgeText(RarTime * this, wchar * TimeText) */

void __thiscall RarTime::SetAgeText(RarTime *this,wchar *TimeText)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uchar uVar4;
  wchar ch;
  int Ch;
  uint uVar5;
  int iVar6;
  int iVar7;
  time_t st;
  int local_2c;
  
  ch = *TimeText;
  local_2c = __stack_chk_guard;
  if (ch != 0) {
    uVar5 = 0;
    iVar6 = 0;
LAB_080e1d3c:
    do {
      bVar3 = IsDigit(ch);
      if (bVar3) {
        iVar7 = (ch - 0x30) + iVar6 * 10;
        goto LAB_080e1d30;
      }
      uVar4 = etoupper((uchar)ch);
      switch(uVar4) {
      case 'D':
        uVar5 = iVar6 * 0x15180 + uVar5;
        iVar7 = 0;
        break;
      default:
        iVar7 = 0;
        break;
      case 'H':
        uVar5 = iVar6 * 0xe10 + uVar5;
        iVar7 = 0;
        break;
      case 'M':
        iVar7 = 0;
        uVar5 = uVar5 + iVar6 * 0x3c;
        break;
      case 'S':
        goto switchD_080e1d5c_caseD_53;
      }
LAB_080e1d30:
      TimeText = TimeText + 1;
      ch = *TimeText;
      iVar6 = iVar7;
    } while (ch != 0);
    goto LAB_080e1db8;
  }
  lVar2 = 0;
LAB_080e1dc4:
  time(&st);
  lVar1 = (longlong)st * 10000000 + 0x19db1ded53e8000;
  uVar5 = (uint)lVar1;
  bVar3 = local_2c == __stack_chk_guard;
  *(uint *)&this->itime = uVar5 - (uint)lVar2;
  *(uint *)((int)&this->itime + 4) =
       (int)((ulonglong)lVar1 >> 0x20) -
       ((int)((ulonglong)lVar2 >> 0x20) + (uint)(uVar5 < (uint)lVar2));
  if (bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_080e1d5c_caseD_53:
  TimeText = TimeText + 1;
  ch = *TimeText;
  uVar5 = uVar5 + iVar6;
  iVar6 = 0;
  if (ch == 0) goto LAB_080e1db8;
  goto LAB_080e1d3c;
LAB_080e1db8:
  lVar2 = (ulonglong)uVar5 * 10000000;
  goto LAB_080e1dc4;
}


