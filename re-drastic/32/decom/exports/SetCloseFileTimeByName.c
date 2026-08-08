/*
 * Ghidra decompilation
 *
 * Function : SetCloseFileTimeByName
 * Address  : 080d6270
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void File::SetCloseFileTimeByName(wchar *Name,RarTime *ftm,RarTime *fta)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  utimbuf ut;
  char NameA [2048];
  
  iVar2 = __stack_chk_guard;
  if (ftm == (RarTime *)0x0) {
    if ((fta == (RarTime *)0x0) || ((*(uint *)&fta->itime | *(uint *)((int)&fta->itime + 4)) == 0))
    goto LAB_080d6308;
LAB_080d62c8:
    ut.modtime = RarTime::GetUnix(fta);
LAB_080d62d4:
    ut.actime = RarTime::GetUnix(fta);
  }
  else {
    uVar3 = *(uint *)((int)&ftm->itime + 4);
    if ((fta == (RarTime *)0x0) || ((*(uint *)&fta->itime | *(uint *)((int)&fta->itime + 4)) == 0))
    {
      if ((*(uint *)&ftm->itime | uVar3) == 0) goto LAB_080d6308;
      bVar1 = false;
    }
    else {
      if ((*(uint *)&ftm->itime | uVar3) == 0) goto LAB_080d62c8;
      bVar1 = true;
    }
    ut.actime = RarTime::GetUnix(ftm);
    ut.modtime = ut.actime;
    if (bVar1) goto LAB_080d62d4;
  }
  WideToChar(Name,NameA,0x800);
  utime(NameA,(utimbuf *)&ut);
LAB_080d6308:
  if (iVar2 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


