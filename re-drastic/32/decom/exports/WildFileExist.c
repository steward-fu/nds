/*
 * Ghidra decompilation
 *
 * Function : WildFileExist
 * Address  : 080d6984
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool WildFileExist(wchar *Name)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int __in_chrg;
  FindFile Find;
  FindData fd;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  bVar2 = IsWildcard(Name);
  if (bVar2) {
    FindFile::FindFile(&Find);
    FindFile::SetMask(&Find,Name);
    RarTime::RarTime(&fd.mtime);
    RarTime::RarTime(&fd.ctime);
    RarTime::RarTime(&fd.atime);
    bVar2 = FindFile::Next(&Find,&fd,false);
    FindFile::~FindFile(&Find,__in_chrg);
  }
  else {
    WideToChar(Name,NameA,0x800);
    iVar3 = access(NameA,0);
    bVar2 = iVar3 == 0;
  }
  if (iVar1 == __stack_chk_guard) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


