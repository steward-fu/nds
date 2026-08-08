/*
 * Ghidra decompilation
 *
 * Function : _Z11ProcessFilePviPcS0_PwS1_
 * Address  : 001b37a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProcessFile(void*, int, char*, char*, wchar_t*, wchar_t*) */

void ProcessFile(void *param_1,int param_2,char *param_3,char *param_4,wchar_t *param_5,
                wchar_t *param_6)

{
  Archive *this;
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)((long)param_1 + 0x125c0) = 0;
  if (((*(uint *)((long)param_1 + 0x32428) & 0xfffffffd) == 0) ||
     ((param_2 == 0 && (*(char *)((long)param_1 + 0x27bdc) == '\0')))) {
    if (((*(char *)((long)param_1 + 0x27bdd) != '\0') && (*(int *)((long)param_1 + 0x1dff4) == 2))
       && (*(char *)((long)param_1 + 0x211d9) != '\0')) {
      cVar2 = MergeArchive((Archive *)((long)param_1 + 0x169d0),(ComprDataIO *)0x0,false,L'L');
      uVar3 = 0xf;
      if (cVar2 != '\0') {
        Archive::Seek((Archive *)((long)param_1 + 0x169d0),*(longlong *)((long)param_1 + 0x27bc8),0)
        ;
        uVar3 = 0;
      }
      goto LAB_001b3820;
    }
                    /* try { // try from 001b3818 to 001b3a33 has its CatchHandler @ 001b3a40 */
    Archive::SeekToNext();
  }
  else {
    *(int *)((long)param_1 + 0x125bc) = param_2;
    *(undefined4 *)((long)param_1 + 0x4020) = 0;
    *(undefined4 *)((long)param_1 + 0x105bc) = 0;
    if (param_3 != (char *)0x0) {
      strncpyz(acStack_808,param_3,0x7fe);
      CharToWide(acStack_808,(wchar_t *)((long)param_1 + 0x4020),0x800);
      AddEndSlash((wchar_t *)((long)param_1 + 0x4020),0x800);
    }
    if (param_4 != (char *)0x0) {
      strncpyz(acStack_808,param_4,0x7fe);
      CharToWide(acStack_808,(wchar_t *)((long)param_1 + 0x105bc),0x800);
    }
    if (param_5 != (wchar_t *)0x0) {
      wcsncpy((wchar_t *)((long)param_1 + 0x4020),param_5,0x800);
      AddEndSlash((wchar_t *)((long)param_1 + 0x4020),0x800);
    }
    if (param_6 != (wchar_t *)0x0) {
      wcsncpyz((wchar_t *)((long)param_1 + 0x105bc),param_6,0x800);
    }
    puVar1 = &UNK_002286f0;
    if (param_2 != 2) {
      puVar1 = &DAT_00228a38;
    }
    __wcscpy_chk((long)param_1 + 0x125f4,puVar1,0x810);
    *(bool *)((long)param_1 + 0xc4e1) = param_2 != 2;
    this = (Archive *)((long)param_1 + 0x169d0);
    CmdExtract::ExtractCurrentFile
              ((CommandData *)((long)param_1 + 0x29c28),(Archive *)param_1,(ulong)this,
               (bool *)(long)*(int *)((long)param_1 + 0x3242c));
    while (((*(long *)((long)param_1 + 0x169d8) != 0 && (lVar4 = Archive::ReadHeader(), lVar4 != 0))
           && (*(int *)((long)param_1 + 0x1dff4) == 3))) {
      CmdExtract::ExtractCurrentFile
                ((CommandData *)((long)param_1 + 0x29c28),(Archive *)param_1,(ulong)this,
                 (bool *)(long)*(int *)((long)param_1 + 0x3242c));
      Archive::SeekToNext();
    }
    Archive::Seek(this,*(longlong *)((long)param_1 + 0x27bc8),0);
  }
  uVar3 = *(undefined4 *)((long)param_1 + 0x125c0);
LAB_001b3820:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
}


