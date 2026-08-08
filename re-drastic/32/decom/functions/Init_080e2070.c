/*
 * Ghidra decompilation
 *
 * Function : Init
 * Address  : 080e2070
 * Program  : drastic
 */


/* DWARF original prototype: void Init(ComprDataIO * this) */

void __thiscall ComprDataIO::Init(ComprDataIO *this)

{
  this->UnpackFromMemory = false;
  this->UnpackToMemory = false;
  this->UnpPackedSize = 0;
  this->ShowProgress = true;
  this->TestMode = false;
  this->SkipUnpCRC = false;
  this->PackVolume = false;
  this->UnpVolume = false;
  this->NextVolumeMissing = false;
  this->UnpWrSize = 0;
  this->SrcFile = (File *)0x0;
  this->DestFile = (File *)0x0;
  this->Command = (CmdAdd *)0x0;
  this->Encryption = false;
  this->Decryption = false;
  this->CurUnpRead = 0;
  this->CurUnpWrite = 0;
  this->CurPackRead = 0;
  this->CurPackWrite = 0;
  this->LastPercent = -1;
  this->SubHead = (FileHeader *)0x0;
  this->SubHeadPos = (int64 *)0x0;
  this->CurrentCommand = 0;
  this->ProcessedArcSize = 0;
  this->TotalArcSize = 0;
  return;
}


