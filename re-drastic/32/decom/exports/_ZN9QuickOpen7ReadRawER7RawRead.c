/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen7ReadRawER7RawRead
 * Address  : 0810993c
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08109c24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: bool ReadRaw(QuickOpen * this, RawRead * Raw) */

bool __thiscall QuickOpen::ReadRaw(QuickOpen *this,RawRead *Raw)

{
  undefined uVar1;
  uint SavedCRC;
  uint uVar2;
  uint SizeBytes;
  int SizeToRead;
  int iVar3;
  Archive *this_00;
  int ReadSize;
  Archive *this_01;
  size_t sVar4;
  int Method;
  _func_int_varargs *p_Var5;
  uint uVar6;
  size_t SizeToRead_1;
  uint uVar7;
  size_t DataLeft;
  int iVar8;
  uint uVar9;
  size_t __n;
  size_t DataLeft_1;
  size_t CurSizeToRead;
  uint uVar10;
  Archive *pAVar11;
  uint64 *puVar12;
  bool bVar13;
  uint64 uVar14;
  uint in_stack_ffffffac;
  
  sVar4 = this->ReadBufPos;
  if (0x10000 - sVar4 < 0x100) {
    __n = this->ReadBufSize - sVar4;
    memcpy(this->Buf,this->Buf + sVar4,__n);
    this->ReadBufSize = __n;
    this->ReadBufPos = 0;
    ReadBuffer(this);
    sVar4 = this->ReadBufPos;
  }
  if (this->ReadBufSize < sVar4 + 7) {
    uVar1 = 0;
  }
  else {
    RawRead::Read(Raw,this->Buf + sVar4,7);
    this->ReadBufPos = this->ReadBufPos + 7;
    RawRead::Get4(Raw);
    uVar2 = RawRead::GetVSize(Raw,4);
    uVar14 = RawRead::GetV(Raw);
    uVar9 = (uVar2 - 3) + (int)uVar14;
    if (((uint)(uVar14 == 0 || uVar2 == 0) | uVar9 >> 0x1f) == 0) {
      sVar4 = this->ReadBufPos;
      uVar7 = this->ReadBufSize - sVar4;
      if (uVar9 == 0) {
LAB_08109a88:
        uVar2 = RawRead::GetCRC50(Raw);
        uVar1 = (undefined)uVar2;
      }
      else {
        while( true ) {
          CurSizeToRead = uVar7;
          if (uVar9 <= uVar7) {
            CurSizeToRead = uVar9;
          }
          uVar9 = uVar9 - CurSizeToRead;
          RawRead::Read(Raw,this->Buf + sVar4,CurSizeToRead);
          if ((int)uVar9 < 1) {
            this->ReadBufPos = this->ReadBufPos + CurSizeToRead;
            goto LAB_08109a88;
          }
          pAVar11 = this->Arc;
          this->ReadBufSize = 0;
          puVar12 = &this->RawDataPos;
          this->ReadBufPos = 0;
          iVar3 = (*(pAVar11->super_File)._vptr_File[4])();
          File::Seek(&this->Arc->super_File,(ulonglong)in_stack_ffffffac << 0x20,Method);
          uVar10 = *(uint *)&this->RawDataSize - *(uint *)puVar12;
          bVar13 = *(int *)((int)&this->RawDataSize + 4) !=
                   *(int *)((int)&this->RawDataPos + 4) +
                   (uint)(*(uint *)&this->RawDataSize < *(uint *)puVar12);
          uVar6 = 0x10000 - this->ReadBufSize;
          if ((bVar13 || uVar6 <= uVar10) && (bVar13 || uVar10 != uVar6)) {
            uVar10 = uVar6;
          }
          this_00 = this->Arc;
          if ((this_00->SubHead).Encrypted != false) {
            uVar10 = uVar10 & 0xfffffff0;
          }
          if ((uVar10 == 0) ||
             (this_00 = (Archive *)
                        File::Read(&this_00->super_File,this->Buf + this->ReadBufSize,uVar10),
             (int)this_00 < 1)) break;
          this_01 = this_00;
          if ((this->Arc->SubHead).Encrypted != false) {
            this_01 = (Archive *)&this->Crypt;
            CryptData::DecryptBlock
                      ((CryptData *)this_01,this->Buf + this->ReadBufSize,(uint)this_00 & 0xfffffff0
                      );
          }
          uVar10 = *(uint *)puVar12;
          iVar8 = *(int *)((int)&this->RawDataPos + 4);
          sVar4 = this->ReadBufSize;
          p_Var5 = (pAVar11->super_File)._vptr_File[3];
          *(uint *)puVar12 = (int)&this_00->super_File + (uVar10 - 0x18);
          *(uint *)((int)&this->RawDataPos + 4) =
               iVar8 + ((int)this_00 >> 0x1f) + (uint)CARRY4(uVar10,(uint)this_00);
          this->ReadBufSize = (int)&this_00->super_File + (sVar4 - 0x18);
          (*p_Var5)(this_01,p_Var5,iVar3,Method,0);
          sVar4 = this->ReadBufPos;
        }
        p_Var5 = (pAVar11->super_File)._vptr_File[3];
        (*p_Var5)(this_00,p_Var5,iVar3,Method,0);
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
      this->Loaded = false;
    }
  }
  return (bool)uVar1;
}


