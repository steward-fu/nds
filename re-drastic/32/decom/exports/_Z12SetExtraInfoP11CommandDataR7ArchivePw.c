/*
 * Ghidra decompilation
 *
 * Function : _Z12SetExtraInfoP11CommandDataR7ArchivePw
 * Address  : 0810da10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SetExtraInfo(CommandData *Cmd,Archive *Arc,wchar *Name)

{
  int iVar1;
  
  if ((Cmd->super_RAROptions).ProcessOwners == false) {
    return;
  }
  if (Arc->Format != RARFMT15) {
    return;
  }
  iVar1 = wcscmp((wchar_t *)(Arc->SubHead).FileName,L"UOW");
  if (iVar1 != 0) {
    return;
  }
  ExtractUnixOwner30(Arc,Name);
  return;
}


