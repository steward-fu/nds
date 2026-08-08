/*
 * Ghidra decompilation
 *
 * Function : _Z15ExtractHardlinkPwS_j
 * Address  : 0810d284
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool ExtractHardlink(wchar *NameNew,wchar *NameExisting,size_t NameExistingSize)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  bool Success;
  char NameExistingA [2048];
  char NameNewA [2048];
  
  iVar1 = __stack_chk_guard;
  bVar2 = FileExist(NameExisting);
  if (bVar2) {
    CreatePath(NameNew,true);
    DosSlashToUnix(NameExisting,NameExisting,NameExistingSize);
    WideToChar(NameExisting,NameExistingA,0x800);
    WideToChar(NameNew,NameNewA,0x800);
    iVar3 = link(NameExistingA,NameNewA);
    if (iVar3 == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
      ErrorHandler::SysErrMsg(&ErrHandler);
      ErrorHandler::SetErrorCode(&ErrHandler,RARX_CREATE);
    }
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


