/*
 * Ghidra decompilation
 *
 * Function : SetIsoText
 * Address  : 080e1b68
 * Program  : drastic
 */


/* DWARF original prototype: void SetIsoText(RarTime * this, wchar * TimeText) */

void __thiscall RarTime::SetIsoText(RarTime *this,wchar *TimeText)

{
  int iVar1;
  bool bVar2;
  time_t tVar3;
  wchar ch;
  int FieldPos;
  uint uVar4;
  uint uVar5;
  tm t;
  int Field [6];
  
  iVar1 = __stack_chk_guard;
  ch = *TimeText;
  Field[0] = 0;
  Field[1] = 0;
  Field[2] = 0;
  Field[3] = 0;
  Field[4] = 0;
  Field[5] = 0;
  if (ch == 0) {
    t.tm_year = -0x76c;
    t.tm_mday = 1;
    t.tm_sec = 0;
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_mon = 0;
  }
  else {
    uVar5 = 0;
    do {
      bVar2 = IsDigit(ch);
      if (bVar2) {
        if (uVar5 < 4) {
          uVar4 = 0;
LAB_080e1bf4:
          Field[uVar4] = (*TimeText - 0x30) + Field[uVar4] * 10;
        }
        else {
          uVar4 = (uVar5 - 4 >> 1) + 1;
          if (uVar4 < 6) goto LAB_080e1bf4;
        }
        uVar5 = uVar5 + 1;
      }
      TimeText = TimeText + 1;
      ch = *TimeText;
    } while (ch != 0);
    t.tm_year = Field[0] + -0x76c;
    t.tm_mday = Field[2];
    if (Field[2] == 0) {
      t.tm_mday = 1;
    }
    t.tm_sec = Field[5];
    t.tm_hour = Field[3];
    t.tm_min = Field[4];
    t.tm_mon = Field[1];
    if (Field[1] != 0) {
      t.tm_mon = Field[1] + -1;
    }
  }
  t.tm_isdst = -1;
  tVar3 = mktime((tm *)&t);
  bVar2 = iVar1 == __stack_chk_guard;
  this->itime = (longlong)tVar3 * 10000000 + 0x19db1ded53e8000;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


