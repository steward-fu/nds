/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData9TimeCheckER7RarTime
 * Address  : 08105c08
 * Program  : drastic
 */


/* DWARF original prototype: bool TimeCheck(CommandData * this, RarTime * ft) */

bool __thiscall CommandData::TimeCheck(CommandData *this,RarTime *ft)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar3 = *(uint *)&(this->super_RAROptions).FileTimeBefore.itime;
  uVar4 = *(uint *)((int)&(this->super_RAROptions).FileTimeBefore.itime + 4);
  if ((uVar3 | uVar4) != 0) {
    uVar5 = *(uint *)((int)&ft->itime + 4);
    bVar6 = uVar4 <= uVar5;
    if (uVar5 == uVar4) {
      bVar6 = uVar3 <= *(uint *)&ft->itime;
    }
    if (bVar6) {
      return true;
    }
  }
  uVar3 = *(uint *)&(this->super_RAROptions).FileTimeAfter.itime;
  uVar4 = *(uint *)((int)&(this->super_RAROptions).FileTimeAfter.itime + 4);
  if ((uVar3 | uVar4) == 0) {
    return false;
  }
  uVar5 = *(uint *)&ft->itime;
  uVar2 = *(uint *)((int)&ft->itime + 4);
  bVar6 = uVar2 <= uVar4;
  if (uVar4 == uVar2) {
    bVar6 = uVar5 <= uVar3;
  }
  if (bVar6) {
    uVar5 = 1;
  }
  uVar1 = (undefined)uVar5;
  if (!bVar6) {
    uVar1 = 0;
  }
  return (bool)uVar1;
}


