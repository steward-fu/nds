/*
 * Ghidra decompilation
 *
 * Function : ExtractUnixLink50
 * Address  : 0810d8a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool ExtractUnixLink50(wchar *Name,FileHeader *hd)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char Target [2048];
  char LinkNameA [2048];
  
  iVar1 = __stack_chk_guard;
  WideToChar(hd->RedirName,Target,0x800);
  if (hd->RedirType + ~FSREDIR_UNIXSYMLINK < 2) {
    iVar2 = strncmp(Target,"\\??\\",4);
    if (iVar2 == 0) goto LAB_0810d940;
    DosSlashToUnix(Target,Target,0x800);
  }
  CreatePath(Name,true);
  DelFile(Name);
  WideToChar(Name,LinkNameA,0x800);
  iVar2 = symlink(Target,LinkNameA);
  if (iVar2 == -1) {
    piVar3 = __errno_location();
    if (*piVar3 == 0x11) {
      iVar2 = 0;
    }
    else {
      ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
  }
LAB_0810d940:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return SUB41(iVar2,0);
}


