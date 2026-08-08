/*
 * Ghidra decompilation
 *
 * Function : UnpRead
 * Address  : 080e210c
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080e218c */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: int UnpRead(ComprDataIO * this, byte * Addr, size_t Count) */

int __thiscall ComprDataIO::UnpRead(ComprDataIO *this,byte *Addr,size_t Count)

{
  bool bVar1;
  size_t DataSize;
  ComprDataIO *pCVar2;
  int CurPercent;
  byte *ReadAddr;
  FileHandle pFVar3;
  File *pFVar4;
  Archive *SrcArc;
  Archive *SrcArc_2;
  size_t SizeToRead;
  FileHeader *hd;
  char cVar5;
  uint uVar6;
  size_t Size;
  uint uVar7;
  int iVar8;
  wchar wVar9;
  Archive *SrcArc_1;
  Archive *Arc;
  undefined8 uVar10;
  int64 iVar11;
  DataHash *this_00;
  byte *pbVar12;
  byte *pbVar13;
  
  pbVar13 = (this->UnpHash).blake2ctx.R.ubuf + 0x58;
  cVar5 = this->Decryption;
  if ((bool)cVar5 != false) {
    Count = Count & 0xfffffff0;
  }
  pbVar12 = Addr;
  if (Count == 0) {
    pFVar4 = this->SrcFile;
    Size = 0;
    if (pFVar4 != (File *)0x0) {
      if (this->ShowProgress != false) {
        DataSize = 0;
        goto LAB_080e2320;
      }
      goto LAB_080e22c4;
    }
  }
  else {
    Size = 0;
    this_00 = &this->PackedDataHash;
    pCVar2 = this;
    do {
      Arc = (Archive *)this->SrcFile;
      if (this->UnpackFromMemory == false) {
        uVar7 = *(uint *)&this->UnpPackedSize;
        iVar8 = *(int *)((int)&this->UnpPackedSize + 4);
        if ((int)(iVar8 - (uint)(uVar7 < Count)) < 0 ==
            (SBORROW4(iVar8,(uint)(uVar7 < Count)) != false)) {
          pFVar3 = (Arc->super_File).hFile;
          uVar7 = Count;
        }
        else {
          if (uVar7 == 0) {
            return 0;
          }
          pFVar3 = (Arc->super_File).hFile;
        }
        if (pFVar3 == (FileHandle)0x0) {
          return -1;
        }
        DataSize = (*(Arc->super_File)._vptr_File[2])(pCVar2,Addr,uVar7);
        hd = this->SubHead;
        if (hd == (FileHeader *)0x0) {
          hd = &Arc->FileHead;
        }
        if (hd->SplitAfter != false) {
          DataHash::Update(this_00,Addr,DataSize);
        }
      }
      else {
        memcpy(pbVar12,this->UnpackFromMemoryAddr,this->UnpackFromMemorySize);
        DataSize = this->UnpackFromMemorySize;
        this->UnpackFromMemorySize = 0;
      }
      pCVar2 = *(ComprDataIO **)&this->UnpPackedSize;
      iVar8 = *(int *)((int)&this->UnpPackedSize + 4);
      Size = Size + DataSize;
      Addr = Addr + DataSize;
      Count = Count - DataSize;
      uVar10 = VectorShiftRight(CONCAT44(DataSize,DataSize),0x20);
      iVar11 = VectorAdd(this->CurUnpRead,uVar10,8);
      this->CurUnpRead = iVar11;
      uVar7 = (int)pCVar2 - (int)(ComprDataIO *)uVar10;
      uVar6 = iVar8 - ((int)((ulonglong)uVar10 >> 0x20) + (uint)(pCVar2 < (ComprDataIO *)uVar10));
      *(uint *)&this->UnpPackedSize = uVar7;
      *(uint *)((int)&this->UnpPackedSize + 4) = uVar6;
      if (((uVar7 | uVar6) != 0) || (this->UnpVolume == false)) break;
      bVar1 = MergeArchive(Arc,this,true,this->CurrentCommand);
      if (!bVar1) {
        this->NextVolumeMissing = true;
        return -1;
      }
    } while (Count != 0);
    pFVar4 = this->SrcFile;
    if ((pFVar4 != (File *)0x0) && (this->ShowProgress != false)) {
LAB_080e2320:
      wVar9 = pFVar4[3].FileName[0x4a2];
      iVar8 = ToPercent(this->TotalArcSize,CONCAT44(pbVar13,pbVar12));
      if ((*(char *)(wVar9 + 0xc248) == '\0') && (iVar8 != this->LastPercent)) {
        this->LastPercent = iVar8;
      }
    }
    Addr = pbVar12;
    if (DataSize == 0xffffffff) {
      Size = 0xffffffff;
      goto LAB_080e22d4;
    }
LAB_080e22c4:
    cVar5 = pbVar13[0x2c5];
  }
  if (cVar5 != '\0') {
    CryptData::DecryptBlock(&this->Decrypt,Addr,Size);
  }
LAB_080e22d4:
  Wait();
  return Size;
}


