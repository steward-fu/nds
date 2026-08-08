/*
 * Ghidra decompilation
 *
 * Function : _ZN7ArchiveC1EP10RAROptions
 * Address  : 080d76b4
 * Program  : drastic
 */


/* DWARF original prototype: Archive * Archive(Archive * this, RAROptions * InitCmd) */

Archive * __thiscall Archive::Archive(Archive *this,RAROptions *InitCmd)

{
  int64 iVar1;
  bool bVar2;
  
  File::File(&this->super_File);
  (this->super_File)._vptr_File = (_func_int_varargs **)&PTR__Archive_08144d68;
  CryptData::CryptData(&this->HeadersCrypt);
  ComprDataIO::ComprDataIO(&this->SubDataIO);
  RarTime::RarTime(&this->LatestTime);
  QuickOpen::QuickOpen(&this->QOpen);
  (this->FileHead).SubData.Buffer = (uchar *)0x0;
  (this->FileHead).SubData.BufSize = 0;
  (this->FileHead).SubData.AllocSize = 0;
  (this->FileHead).SubData.MaxSize = 0;
  RarTime::RarTime(&(this->FileHead).mtime);
  RarTime::RarTime(&(this->FileHead).ctime);
  RarTime::RarTime(&(this->FileHead).atime);
  (this->SubHead).SubData.Buffer = (uchar *)0x0;
  (this->SubHead).SubData.BufSize = 0;
  (this->SubHead).SubData.AllocSize = 0;
  (this->SubHead).SubData.MaxSize = 0;
  RarTime::RarTime(&(this->SubHead).mtime);
  RarTime::RarTime(&(this->SubHead).ctime);
  RarTime::RarTime(&(this->SubHead).atime);
  this->DummyCmd = InitCmd == (RAROptions *)0x0;
  this->Cmd = (RAROptions *)0x0;
  if (InitCmd == (RAROptions *)0x0) {
    InitCmd = (RAROptions *)operator_new(0x125c0);
    RAROptions::RAROptions(InitCmd);
  }
  bVar2 = InitCmd->OpenShared;
  iVar1 = SIMDExpandImmediate(0,0xe,0xff);
  this->Cmd = InitCmd;
  (this->super_File).OpenShared = bVar2;
  this->Format = RARFMT15;
  this->Solid = false;
  this->Volume = false;
  this->MainComment = false;
  this->Locked = false;
  this->Signed = false;
  this->FirstVolume = false;
  this->NewNumbering = false;
  this->SFXSize = 0;
  (this->LatestTime).itime = 0;
  this->Protected = false;
  this->Encrypted = false;
  this->BrokenHeader = false;
  this->FailedHeaderDecryption = false;
  this->LastReadBlock = 0;
  this->CurBlockPos = 0;
  this->NextBlockPos = 0;
  this->RecoverySize = iVar1;
  this->RecoveryPercent = -1;
  (this->MainHead).super_BaseBlock.HeadCRC = 0;
  (this->MainHead).super_BaseBlock.HeaderType = HEAD_MARK;
  (this->MainHead).super_BaseBlock.Flags = 0;
  (this->MainHead).super_BaseBlock.HeadSize = 0;
  *(undefined8 *)&(this->MainHead).super_BaseBlock.SkipIfUnknown = 0;
  (this->MainHead).PosAV = 0;
  (this->MainHead).CommentInHeader = false;
  (this->MainHead).PackComment = false;
  (this->MainHead).Locator = false;
  (this->MainHead).field_0x1f = 0;
  (this->MainHead).QOpenOffset = 0;
  (this->MainHead).QOpenMaxSize = 0;
  (this->MainHead).RROffset = 0;
  (this->MainHead).RRMaxSize = 0;
  (this->CryptHead).super_BaseBlock.HeadCRC = 0;
  (this->CryptHead).super_BaseBlock.HeaderType = HEAD_MARK;
  (this->CryptHead).super_BaseBlock.Flags = 0;
  (this->CryptHead).super_BaseBlock.HeadSize = 0;
  *(undefined8 *)&(this->CryptHead).super_BaseBlock.SkipIfUnknown = 0;
  (this->CryptHead).Lg2Count = 0;
  (this->CryptHead).Salt[0] = '\0';
  (this->CryptHead).Salt[1] = '\0';
  (this->CryptHead).Salt[2] = '\0';
  (this->CryptHead).Salt[3] = '\0';
  *(undefined8 *)((this->CryptHead).Salt + 4) = 0;
  *(undefined8 *)((this->CryptHead).Salt + 0xc) = 0;
  *(undefined8 *)(this->CryptHead).PswCheck = 0;
  (this->EndArcHead).super_BaseBlock.HeadCRC = 0;
  (this->EndArcHead).super_BaseBlock.HeaderType = HEAD_MARK;
  (this->EndArcHead).super_BaseBlock.Flags = 0;
  (this->EndArcHead).super_BaseBlock.HeadSize = 0;
  *(undefined8 *)&(this->EndArcHead).super_BaseBlock.SkipIfUnknown = 0;
  (this->EndArcHead).VolNumber = 0;
  (this->EndArcHead).NextVolume = false;
  (this->EndArcHead).DataCRC = false;
  (this->EndArcHead).RevSpace = false;
  (this->EndArcHead).StoreVolNumber = false;
  this->VolNumber = 0;
  this->VolWrite = 0;
  this->AddingFilesSize = 0;
  this->AddingHeadersSize = 0;
  this->Splitting = false;
  this->NewArchive = false;
  this->FirstVolumeName[0] = 0;
  this->SilentOpen = false;
  return this;
}


