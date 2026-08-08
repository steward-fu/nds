/*
 * Ghidra decompilation
 *
 * Function : ProcessFile
 * Address  : 080d0a48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int ProcessFile(void *hArcData,int Operation,char *DestPath,char *DestName,wchar *DestPathW,
               wchar *DestNameW)

{
  int iVar1;
  bool bVar2;
  size_t sVar3;
  undefined *puVar4;
  RAR_EXIT ErrCode;
  DataSet *Data;
  int iVar5;
  Archive *Arc;
  uint in_stack_fffff7c4;
  bool Repeat;
  char ExtrPathA [2048];
  
  *(undefined4 *)((int)hArcData + 0x125a8) = 0;
  iVar1 = __stack_chk_guard;
  if (((*(uint *)((int)hArcData + 0x31bb0) & 0xfffffffd) == 0) ||
     ((Operation == 0 && (*(char *)((int)hArcData + 0x27674) == '\0')))) {
    if ((*(char *)((int)hArcData + 0x27675) != '\0') &&
       ((*(int *)((int)hArcData + 0x1daec) == 2 && (*(char *)((int)hArcData + 0x20c91) != '\0')))) {
      bVar2 = MergeArchive((Archive *)((int)hArcData + 0x167d8),(ComprDataIO *)0x0,false,0x4c);
      if (bVar2) {
        Archive::Seek((Archive *)((int)hArcData + 0x167d8),(ulonglong)in_stack_fffff7c4 << 0x20,0);
        iVar5 = 0;
      }
      else {
        iVar5 = 0xf;
      }
      goto LAB_080d0c88;
    }
    Archive::SeekToNext((Archive *)((int)hArcData + 0x167d8));
  }
  else {
    *(int *)((int)hArcData + 0x125a4) = Operation;
    *(undefined4 *)((int)hArcData + 0x4018) = 0;
    *(undefined4 *)((int)hArcData + 0x105a4) = 0;
    if (DestPath != (char *)0x0) {
      strncpyz(ExtrPathA,DestPath,0x7fe);
      CharToWide(ExtrPathA,(wchar *)((int)hArcData + 0x4018),0x800);
      AddEndSlash((wchar *)((int)hArcData + 0x4018),0x800);
    }
    if (DestName != (char *)0x0) {
      strncpyz(ExtrPathA,DestName,0x7fe);
      CharToWide(ExtrPathA,(wchar *)((int)hArcData + 0x105a4),0x800);
    }
    if (DestPathW != (wchar *)0x0) {
      wcsncpy((wchar_t *)((int)hArcData + 0x4018),(wchar_t *)DestPathW,0x800);
      AddEndSlash((wchar *)(wchar_t *)((int)hArcData + 0x4018),0x800);
    }
    if (DestNameW != (wchar *)0x0) {
      wcsncpyz((wchar *)((int)hArcData + 0x105a4),DestNameW,0x800);
    }
    puVar4 = &UNK_08144a80;
    if (Operation != 2) {
      puVar4 = &DAT_08144da0;
    }
    __wcscpy_chk((int)hArcData + 0x125c8,puVar4,0x810);
    iVar5 = Operation + -2;
    if (iVar5 != 0) {
      iVar5 = 1;
    }
    Arc = (Archive *)((int)hArcData + 0x167d8);
    *(char *)((int)hArcData + 0xc4c9) = (char)iVar5;
    Repeat = false;
    CmdExtract::ExtractCurrentFile
              ((CmdExtract *)((int)hArcData + 0x296c0),(CommandData *)hArcData,Arc,
               *(size_t *)((int)hArcData + 0x31bb4),&Repeat);
    while (((*(int *)((int)hArcData + 0x167dc) != 0 &&
            (sVar3 = Archive::ReadHeader(Arc), sVar3 != 0)) &&
           (*(int *)((int)hArcData + 0x1daec) == 3))) {
      CmdExtract::ExtractCurrentFile
                ((CmdExtract *)((int)hArcData + 0x296c0),(CommandData *)hArcData,Arc,
                 *(size_t *)((int)hArcData + 0x31bb4),&Repeat);
      Archive::SeekToNext(Arc);
    }
    Archive::Seek(Arc,(ulonglong)in_stack_fffff7c4 << 0x20,0);
  }
  iVar5 = *(int *)((int)hArcData + 0x125a8);
LAB_080d0c88:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


