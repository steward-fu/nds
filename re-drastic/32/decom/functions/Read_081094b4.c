/*
 * Ghidra decompilation
 *
 * Function : Read
 * Address  : 081094b4
 * Program  : drastic
 */


/* DWARF original prototype: bool Read(QuickOpen * this, void * Data, size_t Size, size_t * Result)
    */

bool __thiscall QuickOpen::Read(QuickOpen *this,void *Data,size_t Size,size_t *Result)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint SavedCRC;
  uint uVar4;
  uint SizeBytes;
  int SizeToRead;
  size_t HeaderSize;
  uchar *NewBuffer;
  uint uVar5;
  int ReadSize;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  size_t extraout_r1;
  size_t extraout_r1_00;
  uchar *Field;
  size_t extraout_r1_01;
  uint uVar9;
  uint uVar10;
  size_t Suggested;
  char cVar11;
  size_t __n;
  size_t DataLeft_1;
  size_t CurSizeToRead;
  size_t DataLeft;
  size_t NewSize;
  uint uVar12;
  uint64 *puVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  uint64 uVar17;
  uint64 uVar18;
  uint in_stack_ffffff7c;
  uint local_80;
  int iStack_7c;
  RawRead Raw;
  
  iVar1 = __stack_chk_guard;
  if (this->Loaded != false) {
    puVar13 = &this->LastReadHeaderPos;
    uVar2 = *(uint *)puVar13;
    iVar6 = *(int *)((int)&this->LastReadHeaderPos + 4);
    while( true ) {
      uVar7 = (this->LastReadHeader).BufSize;
      uVar10 = uVar2 + uVar7;
      sVar8 = *(uint *)((int)&this->SeekPos + 4);
      uVar2 = iVar6 + (uint)CARRY4(uVar2,uVar7);
      bVar15 = sVar8 <= uVar2;
      if (uVar2 == sVar8) {
        bVar15 = *(uint *)&this->SeekPos <= uVar10;
      }
      if (bVar15 && (uVar2 != sVar8 || uVar10 != *(uint *)&this->SeekPos)) goto LAB_08109590;
      RawRead::RawRead(&Raw,(File *)0x0);
      sVar8 = this->ReadBufPos;
      if (0x10000 - sVar8 < 0x100) {
        __n = this->ReadBufSize - sVar8;
        memcpy(this->Buf,this->Buf + sVar8,__n);
        this->ReadBufSize = __n;
        this->ReadBufPos = 0;
        ReadBuffer(this);
        sVar8 = this->ReadBufPos;
      }
      if (this->ReadBufSize < sVar8 + 7) goto LAB_08109580;
      RawRead::Read(&Raw,this->Buf + sVar8,7);
      this->ReadBufPos = this->ReadBufPos + 7;
      uVar3 = RawRead::Get4(&Raw);
      uVar4 = RawRead::GetVSize(&Raw,4);
      SizeBytes = (uint)&Raw;
      uVar17 = RawRead::GetV((RawRead *)SizeBytes);
      sVar8 = (uint)uVar17 | (uint)(uVar17 >> 0x20);
      uVar2 = (uVar4 - 3) + (uint)uVar17;
      if (((uint)(uVar17 == 0 || uVar4 == 0) | uVar2 >> 0x1f) != 0) break;
      sVar8 = this->ReadBufPos;
      uVar7 = this->ReadBufSize - sVar8;
      if (uVar2 != 0) {
        while( true ) {
          CurSizeToRead = uVar7;
          if (uVar2 <= uVar7) {
            CurSizeToRead = uVar2;
          }
          RawRead::Read(&Raw,this->Buf + sVar8,CurSizeToRead);
          uVar2 = uVar2 - CurSizeToRead;
          if ((int)uVar2 < 1) break;
          this->ReadBufSize = 0;
          this->ReadBufPos = 0;
          uVar4 = ReadBuffer(this);
          sVar8 = extraout_r1_01;
          if (uVar4 == 0) goto LAB_08109580;
          sVar8 = this->ReadBufPos;
        }
        this->ReadBufPos = this->ReadBufPos + CurSizeToRead;
      }
      uVar4 = RawRead::GetCRC50(&Raw);
      sVar8 = extraout_r1_00;
      if (uVar3 != uVar4) goto LAB_08109580;
      RawRead::GetV(&Raw);
      uVar17 = RawRead::GetV(&Raw);
      uVar18 = RawRead::GetV(&Raw);
      sVar8 = (size_t)uVar18;
      uVar2 = (this->LastReadHeader).AllocSize;
      if (uVar2 < sVar8) {
        uVar10 = (this->LastReadHeader).MaxSize;
        (this->LastReadHeader).BufSize = sVar8;
        bVar15 = uVar10 == 0;
        uVar7 = uVar10;
        if (!bVar15 && uVar10 > sVar8 || (bVar15 || sVar8 == uVar10)) {
          uVar7 = sVar8;
        }
        if ((bVar15 || uVar10 <= sVar8) && (!bVar15 && sVar8 != uVar10)) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError(&ErrHandler);
          uVar7 = (this->LastReadHeader).BufSize;
          uVar2 = (this->LastReadHeader).AllocSize;
        }
        NewSize = uVar2 + 0x20 + (uVar2 >> 2);
        if (NewSize < uVar7) {
          NewSize = uVar7;
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
        (this->LastReadHeader).BufSize = sVar8;
      }
      RawRead::GetB(&Raw,Field,sVar8);
      local_80 = (uint)uVar17;
      iStack_7c = (int)(uVar17 >> 0x20);
      uVar2 = *(uint *)&this->QLHeaderPos - local_80;
      iVar6 = *(int *)((int)&this->QLHeaderPos + 4) -
              (iStack_7c + (uint)(*(uint *)&this->QLHeaderPos < local_80));
      *(uint *)puVar13 = uVar2;
      *(int *)((int)&this->LastReadHeaderPos + 4) = iVar6;
      if (Raw.Data.Buffer != (uchar *)0x0) {
        free(Raw.Data.Buffer);
        uVar2 = *(uint *)puVar13;
        iVar6 = *(int *)((int)&this->LastReadHeaderPos + 4);
      }
    }
    this->Loaded = false;
LAB_08109580:
    if (Raw.Data.Buffer != (uchar *)0x0) {
      free(Raw.Data.Buffer);
      sVar8 = extraout_r1;
    }
LAB_08109590:
    cVar11 = this->Loaded;
    if ((bool)cVar11 != false) {
      uVar2 = *(uint *)puVar13;
      uVar7 = *(uint *)((int)&this->LastReadHeaderPos + 4);
      uVar10 = *(uint *)&this->SeekPos;
      uVar12 = *(uint *)((int)&this->SeekPos + 4);
      bVar15 = uVar7 <= uVar12;
      if (uVar12 == uVar7) {
        bVar15 = uVar2 <= uVar10;
      }
      if (bVar15) {
        uVar14 = (this->LastReadHeader).BufSize;
        uVar16 = VectorShiftRight(CONCAT44(Size,Size),0x20);
        uVar5 = (uint)uVar16 + uVar10;
        uVar9 = (int)((ulonglong)uVar16 >> 0x20) + uVar12 + (uint)CARRY4((uint)uVar16,uVar10);
        uVar12 = uVar2 + uVar14;
        uVar7 = uVar7 + CARRY4(uVar2,uVar14);
        bVar15 = uVar7 <= uVar9;
        if (uVar9 == uVar7) {
          bVar15 = uVar12 <= uVar5;
        }
        if (!bVar15 || uVar9 == uVar7 && uVar5 == uVar12) {
          memcpy(Data,(this->LastReadHeader).Buffer + (uVar10 - uVar2),Size);
          uVar17 = this->SeekPos;
          *Result = Size;
          uVar17 = VectorAdd(uVar17,uVar16,8);
          this->SeekPos = uVar17;
          this->UnsyncSeekPos = true;
          goto LAB_081095ac;
        }
      }
      if (this->UnsyncSeekPos != false) {
        File::Seek(&this->Arc->super_File,(ulonglong)in_stack_ffffff7c << 0x20,uVar7);
        this->UnsyncSeekPos = false;
      }
      uVar2 = File::Read(&this->Arc->super_File,Data,Size);
      if ((int)uVar2 < 0) {
        cVar11 = '\0';
        this->Loaded = false;
      }
      else {
        uVar7 = *(uint *)&this->SeekPos;
        iVar6 = *(int *)((int)&this->SeekPos + 4);
        *Result = uVar2;
        *(uint *)&this->SeekPos = uVar7 + uVar2;
        *(uint *)((int)&this->SeekPos + 4) =
             iVar6 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar7,uVar2);
      }
      goto LAB_081095ac;
    }
    if (this->UnsyncSeekPos != false) {
      File::Seek(&this->Arc->super_File,(ulonglong)in_stack_ffffff7c << 0x20,sVar8);
      goto LAB_081095ac;
    }
  }
  cVar11 = '\0';
LAB_081095ac:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)cVar11;
}


