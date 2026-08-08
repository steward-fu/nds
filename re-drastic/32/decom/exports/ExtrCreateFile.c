/*
 * Ghidra decompilation
 *
 * Function : ExtrCreateFile
 * Address  : 080ea230
 * Program  : drastic
 */


/* DWARF original prototype: bool ExtrCreateFile(CmdExtract * this, CommandData * Cmd, Archive *
   Arc, File * CurFile) */

bool __thiscall
CmdExtract::ExtrCreateFile(CmdExtract *this,CommandData *Cmd,Archive *Arc,File *CurFile)

{
  bool bVar1;
  wchar wVar2;
  wchar Command;
  
  wVar2 = Cmd->Command[0];
  if (wVar2 == 0x50) {
    CurFile->HandleType = FILE_HANDLESTD;
  }
  else if ((wVar2 == 0x58 || wVar2 == 0x45) && ((Cmd->super_RAROptions).Test == false)) {
    bVar1 = ExtrCreateFile(this,Cmd,Arc,CurFile);
    return bVar1;
  }
  return true;
}


