/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime8GetLocalEP12RarLocalTime
 * Address  : 080e16a8
 * Program  : drastic
 */


/* DWARF original prototype: void GetLocal(RarTime * this, RarLocalTime * lt) */

void __thiscall RarTime::GetLocal(RarTime *this,RarLocalTime *lt)

{
  tm *ptVar1;
  tm *t;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  time_t ut;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  ut = __aeabi_uldivmod(*(uint *)&this->itime + 0x2ac18000,
                        *(int *)((int)&this->itime + 4) + -0x19db1df +
                        (uint)(0xd53e7fff < *(uint *)&this->itime),10000000,0);
  ptVar1 = localtime(&ut);
  iVar2 = ptVar1->tm_mon;
  uVar5 = ptVar1->tm_sec;
  uVar6 = ptVar1->tm_min;
  bVar9 = local_1c == __stack_chk_guard;
  uVar8 = ptVar1->tm_hour;
  uVar7 = ptVar1->tm_mday;
  lt->Year = ptVar1->tm_year + 0x76c;
  lt->Month = iVar2 + 1;
  uVar3 = ptVar1->tm_wday;
  uVar4 = ptVar1->tm_yday;
  lt->Day = uVar7;
  lt->Hour = uVar8;
  lt->Minute = uVar6;
  lt->Second = uVar5;
  lt->Reminder = 0;
  lt->wDay = uVar3;
  lt->yDay = uVar4;
  if (bVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


