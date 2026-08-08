/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtractC2EP11CommandData
 * Address  : 080e99b4
 * Program  : drastic
 */


/* DWARF original prototype: CmdExtract * CmdExtract(CmdExtract * this, CommandData * Cmd) */

CmdExtract * __thiscall CmdExtract::CmdExtract(CmdExtract *this,CommandData *Cmd)

{
  Unpack *this_00;
  uint uVar1;
  
  RarTime::RarTime(&this->StartTime);
  ComprDataIO::ComprDataIO(&this->DataIO);
  SecPassword::SecPassword(&this->Password);
  this->ArcName[0] = 0;
  this->DestFileName[0] = 0;
  this->TotalFileCount = 0;
  SecPassword::Set(&this->Password,(wchar *)L"");
  this_00 = (Unpack *)operator_new(0xe700);
  Unpack::Unpack(this_00,&this->DataIO);
  uVar1 = (Cmd->super_RAROptions).Threads;
  this->Unp = this_00;
  if (7 < uVar1) {
    uVar1 = 8;
  }
  this_00->MaxUserThreads = uVar1;
  return this;
}


