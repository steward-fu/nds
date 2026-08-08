/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen8ReadNextEv
 * Address  : 081091f0
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadNext(QuickOpen * this) */

bool __thiscall QuickOpen::ReadNext(QuickOpen *this)

{
  int iVar1;
  uint uVar2;
  uint SavedCRC;
  uint uVar3;
  uint SizeBytes;
  int SizeToRead;
  size_t HeaderSize;
  uchar *NewBuffer;
  size_t sVar4;
  uchar *Field;
  int iVar5;
  size_t Suggested;
  uint uVar6;
  size_t __n;
  size_t DataLeft_1;
  size_t CurSizeToRead;
  size_t NewSize;
  uint uVar7;
  size_t DataLeft;
  bool bVar8;
  uint64 uVar9;
  uint64 uVar10;
  RawRead Raw;
  
  iVar1 = __stack_chk_guard;
  RawRead::RawRead(&Raw,(File *)0x0);
  sVar4 = this->ReadBufPos;
  if (0x10000 - sVar4 < 0x100) {
    __n = this->ReadBufSize - sVar4;
    memcpy(this->Buf,this->Buf + sVar4,__n);
    this->ReadBufSize = __n;
    this->ReadBufPos = 0;
    ReadBuffer(this);
    sVar4 = this->ReadBufPos;
  }
  if (sVar4 + 7 <= this->ReadBufSize) {
    RawRead::Read(&Raw,this->Buf + sVar4,7);
    this->ReadBufPos = this->ReadBufPos + 7;
    uVar2 = RawRead::Get4(&Raw);
    uVar3 = RawRead::GetVSize(&Raw,4);
    SizeBytes = (uint)&Raw;
    uVar9 = RawRead::GetV((RawRead *)SizeBytes);
    uVar6 = (uVar3 - 3) + (int)uVar9;
    if (((uint)(uVar9 == 0 || uVar3 == 0) | uVar6 >> 0x1f) == 0) {
      sVar4 = this->ReadBufPos;
      uVar7 = this->ReadBufSize - sVar4;
      if (uVar6 == 0) {
LAB_0810934c:
        uVar3 = RawRead::GetCRC50(&Raw);
        if (uVar2 == uVar3) {
          RawRead::GetV(&Raw);
          uVar9 = RawRead::GetV(&Raw);
          uVar10 = RawRead::GetV(&Raw);
          sVar4 = (size_t)uVar10;
          uVar6 = (this->LastReadHeader).AllocSize;
          if (uVar6 < sVar4) {
            uVar7 = (this->LastReadHeader).MaxSize;
            (this->LastReadHeader).BufSize = sVar4;
            bVar8 = uVar7 == 0;
            NewSize = uVar7;
            if (!bVar8 && uVar7 > sVar4 || (bVar8 || sVar4 == uVar7)) {
              NewSize = sVar4;
            }
            if ((bVar8 || uVar7 <= sVar4) && (!bVar8 && sVar4 != uVar7)) {
              ErrorHandler::GeneralErrMsg
                        (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
              ErrorHandler::MemoryError(&ErrHandler);
              NewSize = (this->LastReadHeader).BufSize;
              uVar6 = (this->LastReadHeader).AllocSize;
            }
            uVar6 = uVar6 + 0x20 + (uVar6 >> 2);
            if (NewSize < uVar6) {
              NewSize = uVar6;
            }
            Field = (uchar *)realloc((this->LastReadHeader).Buffer,NewSize);
            if (Field == (uchar *)0x0) {
              ErrorHandler::MemoryError(&ErrHandler);
            }
            (this->LastReadHeader).Buffer = Field;
            (this->LastReadHeader).AllocSize = NewSize;
          }
          else {
            Field = (this->LastReadHeader).Buffer;
            (this->LastReadHeader).BufSize = sVar4;
          }
          RawRead::GetB(&Raw,Field,sVar4);
          iVar5 = *(int *)((int)&this->QLHeaderPos + 4);
          bVar8 = true;
          *(uint *)&this->LastReadHeaderPos = *(uint *)&this->QLHeaderPos - (uint)uVar9;
          *(uint *)((int)&this->LastReadHeaderPos + 4) =
               iVar5 - ((int)(uVar9 >> 0x20) + (uint)(*(uint *)&this->QLHeaderPos < (uint)uVar9));
          goto LAB_08109250;
        }
      }
      else {
        while( true ) {
          CurSizeToRead = uVar7;
          if (uVar6 <= uVar7) {
            CurSizeToRead = uVar6;
          }
          RawRead::Read(&Raw,this->Buf + sVar4,CurSizeToRead);
          uVar6 = uVar6 - CurSizeToRead;
          if ((int)uVar6 < 1) {
            this->ReadBufPos = this->ReadBufPos + CurSizeToRead;
            goto LAB_0810934c;
          }
          this->ReadBufSize = 0;
          this->ReadBufPos = 0;
          uVar3 = ReadBuffer(this);
          if (uVar3 == 0) break;
          sVar4 = this->ReadBufPos;
        }
      }
    }
    else {
      this->Loaded = false;
    }
  }
  bVar8 = false;
LAB_08109250:
  if (Raw.Data.Buffer != (uchar *)0x0) {
    free(Raw.Data.Buffer);
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}


