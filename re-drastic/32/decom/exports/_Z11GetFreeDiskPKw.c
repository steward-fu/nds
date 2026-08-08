/*
 * Ghidra decompilation
 *
 * Function : _Z11GetFreeDiskPKw
 * Address  : 080d6854
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int64 GetFreeDisk(wchar *Name)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  statvfs sfs;
  wchar Root [2048];
  char RootA [2048];
  char *Dest;
  
  iVar1 = __stack_chk_guard;
  Dest = RootA;
  GetFilePath(Name,Root,0x800);
  WideToChar(Root,Dest,0x800);
  if (RootA[0] == '\0') {
    Dest = ".";
  }
  iVar2 = statvfs64(Dest,(statvfs64 *)&sfs);
  if (iVar2 == 0) {
    uVar3 = (undefined4)((ulonglong)sfs.f_bsize * (ulonglong)(uint)sfs.f_bavail);
    iVar2 = sfs.f_bsize * sfs.f_bavail._4_4_ +
            (int)((ulonglong)sfs.f_bsize * (ulonglong)(uint)sfs.f_bavail >> 0x20);
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
  }
  if (iVar1 == __stack_chk_guard) {
    return CONCAT44(iVar2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


