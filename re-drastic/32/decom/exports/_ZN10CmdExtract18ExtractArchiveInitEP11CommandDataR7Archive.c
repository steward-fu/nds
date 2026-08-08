/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract18ExtractArchiveInitEP11CommandDataR7Archive
 * Address  : 080e9b68
 * Program  : drastic
 */


/* DWARF original prototype: void ExtractArchiveInit(CmdExtract * this, CommandData * Cmd, Archive *
   Arc) */

void __thiscall CmdExtract::ExtractArchiveInit(CmdExtract *this,CommandData *Cmd,Archive *Arc)

{
  bool bVar1;
  int64 iVar2;
  
  iVar2 = File::FileLength(&Arc->super_File);
  (this->DataIO).UnpArcSize = iVar2;
  this->FirstFile = true;
  bVar1 = (Cmd->super_RAROptions).Password.PasswordSet;
  this->FileCount = 0;
  this->MatchedArgs = 0;
  this->PasswordAll = bVar1;
  if (bVar1 != false) {
    memcpy(&this->Password,&(Cmd->super_RAROptions).Password,0x201);
  }
  (this->DataIO).UnpVolume = false;
  this->PrevExtracted = false;
  this->AllMatchesExact = true;
  this->ReconstructDone = false;
  this->AnySolidDataUnpackedWell = false;
  RarTime::SetCurrentTime(&this->StartTime);
  return;
}


