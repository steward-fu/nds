/*
 * Ghidra decompilation
 *
 * Function : ReadSubData
 * Address  : 080dc8d8
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadSubData(Archive * this, Array<unsigned_char> * UnpData, File *
   DestFile) */

bool __thiscall Archive::ReadSubData(Archive *this,Array<unsigned_char> *UnpData,File *DestFile)

{
  int iVar1;
  bool bVar2;
  uint Size;
  uchar *NewBuffer;
  int extraout_r1;
  undefined4 uVar3;
  int extraout_r1_00;
  int __in_chrg;
  uchar *Addr;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  size_t NewSize;
  byte bVar4;
  byte *Key;
  DataHash *this_00;
  uint uVar5;
  size_t Suggested;
  bool bVar6;
  int64 *piVar7;
  ComprDataIO *this_01;
  uint uVar8;
  byte *in_stack_ffff18a8;
  byte *in_stack_ffff18ac;
  Unpack Unpack;
  
  iVar1 = __stack_chk_guard;
  if (this->BrokenHeader != false) {
    bVar6 = false;
    ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
    goto LAB_080dcb04;
  }
  bVar6 = false;
  if (5 < (this->SubHead).Method) goto LAB_080dcb04;
  if (this->Format == RARFMT50) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0x1d;
  }
  if (bVar4 < (this->SubHead).UnpVer) goto LAB_080dcb04;
  piVar7 = &(this->SubHead).UnpSize;
  if (((*(uint *)&(this->SubHead).PackSize | *(uint *)((int)&(this->SubHead).PackSize + 4)) == 0) &&
     ((this->SubHead).SplitAfter == false)) {
    bVar6 = true;
    goto LAB_080dcb04;
  }
  this_01 = &this->SubDataIO;
  ComprDataIO::Init(this_01);
  ::Unpack::Unpack(&Unpack,this_01);
  ::Unpack::Init(&Unpack,(this->SubHead).WinSize,false);
  __in_chrg = extraout_r1;
  bVar2 = bVar6;
  if (DestFile == (File *)0x0) {
    Size = *(uint *)piVar7;
    __in_chrg = *(int *)((int)&(this->SubHead).UnpSize + 4);
    if (0 < (int)(__in_chrg + (uint)(0x1000000 < Size)) ==
        (SBORROW4(-__in_chrg,(uint)(0x1000000 < Size)) != false)) {
      uVar5 = UnpData->AllocSize;
      if (uVar5 < Size) {
        uVar8 = UnpData->MaxSize;
        UnpData->BufSize = Size;
        if (uVar8 != 0 && uVar8 < Size) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded",uVar8);
          ErrorHandler::MemoryError(&ErrHandler);
          Size = UnpData->BufSize;
          uVar5 = UnpData->AllocSize;
        }
        uVar5 = uVar5 + 0x20 + (uVar5 >> 2);
        if (uVar5 < Size) {
          uVar5 = Size;
        }
        Addr = (uchar *)realloc(UnpData->Buffer,uVar5);
        if (Addr == (uchar *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        UnpData->Buffer = Addr;
        UnpData->AllocSize = uVar5;
        Size = *(uint *)&(this->SubHead).UnpSize;
      }
      else {
        Addr = UnpData->Buffer;
        UnpData->BufSize = Size;
      }
      ComprDataIO::SetUnpackToMemory(this_01,Addr,Size);
      __in_chrg = extraout_r1_01;
      goto LAB_080dc9ac;
    }
  }
  else {
LAB_080dc9ac:
    if ((this->SubHead).Encrypted != false) {
      if ((this->Cmd->Password).PasswordSet == false) goto LAB_080dcafc;
      in_stack_ffff18a8 = (byte *)(uint)(this->SubHead).SaltSet;
      if (in_stack_ffff18a8 != (byte *)0x0) {
        in_stack_ffff18a8 = (this->SubHead).Salt;
      }
      in_stack_ffff18ac = (this->SubHead).InitV;
      ComprDataIO::SetEncryption
                (this_01,false,(this->SubHead).CryptMethod,&this->Cmd->Password,in_stack_ffff18a8,
                 in_stack_ffff18ac,(this->SubHead).Lg2Count,(this->SubHead).PswCheck,
                 (this->SubHead).HashKey);
    }
    this_00 = &(this->SubDataIO).UnpHash;
    DataHash::Init(this_00,(this->SubHead).FileHash.Type,1);
    uVar3 = *(undefined4 *)((int)&(this->SubHead).PackSize + 4);
    *(undefined4 *)&(this->SubDataIO).UnpPackedSize = *(undefined4 *)&(this->SubHead).PackSize;
    *(undefined4 *)((int)&(this->SubDataIO).UnpPackedSize + 4) = uVar3;
    (this->SubDataIO).ShowProgress = false;
    ComprDataIO::SetFiles(this_01,&this->super_File,DestFile);
    Unpack.DestUnpSize._0_4_ = *(undefined4 *)piVar7;
    Unpack.DestUnpSize._4_4_ = *(undefined4 *)((int)&(this->SubHead).UnpSize + 4);
    (this->SubDataIO).UnpVolume = (this->SubHead).SplitAfter;
    (this->SubDataIO).SubHead = &this->SubHead;
    (this->SubDataIO).SubHeadPos = (int64 *)0x0;
    Unpack.FileExtracted = false;
    if ((this->SubHead).Method == '\0') {
      CmdExtract::UnstoreFile(this_01,CONCAT44(in_stack_ffff18ac,in_stack_ffff18a8));
    }
    else {
      ::Unpack::DoUnpack(&Unpack,(uint)(this->SubHead).UnpVer,false);
    }
    Key = (byte *)(uint)(this->SubHead).UseHashKey;
    if (Key != (byte *)0x0) {
      Key = (this->SubHead).HashKey;
    }
    bVar2 = DataHash::Cmp(this_00,&(this->SubHead).FileHash,Key);
    __in_chrg = extraout_r1_00;
    if ((!bVar2) &&
       (ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC), __in_chrg = extraout_r1_02, bVar2 = bVar6,
       UnpData != (Array<unsigned_char> *)0x0)) {
      if (UnpData->Buffer != (uchar *)0x0) {
        free(UnpData->Buffer);
        UnpData->Buffer = (uchar *)0x0;
        __in_chrg = extraout_r1_03;
      }
      UnpData->BufSize = 0;
      UnpData->AllocSize = 0;
      bVar2 = false;
    }
  }
LAB_080dcafc:
  bVar6 = bVar2;
  ::Unpack::~Unpack(&Unpack,__in_chrg);
LAB_080dcb04:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


