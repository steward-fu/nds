/*
 * Ghidra decompilation
 *
 * Function : _ZN8ScanTree11GetNextMaskEv
 * Address  : 001ec010
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScanTree::GetNextMask() */

uint ScanTree::GetNextMask(void)

{
  wchar_t *pwVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long in_x0;
  int *piVar6;
  
  pwVar1 = (wchar_t *)(in_x0 + 0x2024);
  uVar4 = StringList::GetString(*(StringList **)(in_x0 + 0x2008),pwVar1,0x800);
  if ((uVar4 & 0xff) == 0) {
    return uVar4;
  }
  *(undefined4 *)(in_x0 + 0x4020) = 0;
  cVar3 = IsDiskLetter(pwVar1);
  if ((cVar3 == '\0') || (cVar3 = IsPathDiv(*(int *)(in_x0 + 0x202c)), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(in_x0 + 0x2030) == 0;
  }
  *(bool *)(in_x0 + 0x2020) = bVar2;
  piVar6 = (int *)PointToName(pwVar1);
  iVar5 = *piVar6;
  if (iVar5 == 0) {
    wcsncatz(pwVar1,L"*",0x800);
    iVar5 = *piVar6;
  }
  if ((iVar5 == 0x2e) && ((piVar6[1] == 0 || ((piVar6[1] == 0x2e && (piVar6[2] == 0)))))) {
    AddEndSlash(pwVar1,0x800);
    wcsncatz(pwVar1,L"*",0x800);
  }
  *(undefined4 *)(in_x0 + 0x2000) = 0;
  *(long *)(in_x0 + 0x6028) = (long)piVar6 - (long)pwVar1 >> 2;
  __wcscpy_chk(in_x0 + 0x4024,pwVar1,0x800);
  return uVar4;
}


