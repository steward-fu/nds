/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIOC1Ev
 * Address  : 080e1f48
 * Program  : drastic
 */


/* DWARF original prototype: ComprDataIO * ComprDataIO(ComprDataIO * this) */

ComprDataIO * __thiscall ComprDataIO::ComprDataIO(ComprDataIO *this)

{
  CryptData::CryptData(&this->Crypt);
  CryptData::CryptData(&this->Decrypt);
  DataHash::DataHash(&this->PackedDataHash);
  DataHash::DataHash(&this->PackHash);
  DataHash::DataHash(&this->UnpHash);
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
  return this;
}


