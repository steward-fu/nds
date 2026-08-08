/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen4LoadEy
 * Address  : 08108e8c
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08109000 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void Load(QuickOpen * this, uint64 BlockPos) */

void __thiscall QuickOpen::Load(QuickOpen *this,uint64 BlockPos)

{
  uchar *__ptr;
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined4 extraout_r1;
  _func_int_varargs *p_Var4;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 in_r2;
  Archive *pAVar5;
  undefined4 in_r3;
  Archive *pAVar6;
  undefined4 uVar7;
  
  if (this->Loaded == false) {
    iVar1 = (*(this->Arc->super_File)._vptr_File[4])();
    pAVar5 = this->Arc;
    *(int *)&this->SeekPos = iVar1;
    *(undefined4 *)((int)&this->SeekPos + 4) = extraout_r1;
    p_Var4 = (pAVar5->super_File)._vptr_File[4];
    this->UnsyncSeekPos = false;
    iVar1 = (*p_Var4)();
    p_Var4 = (this->Arc->super_File)._vptr_File[3];
    (*p_Var4)(this->Arc,p_Var4,in_r2,in_r3,0);
    sVar2 = Archive::ReadHeader(this->Arc);
    if (((sVar2 == 0) || (pAVar6 = this->Arc, pAVar6->CurHeaderType != HEAD_SERVICE)) ||
       (sVar2 = wcscmp((wchar_t *)(pAVar6->SubHead).FileName,L"QO"), sVar2 != 0)) {
      p_Var4 = (pAVar5->super_File)._vptr_File[3];
      (*p_Var4)(sVar2,p_Var4,iVar1,extraout_r1_00,0);
      return;
    }
    p_Var4 = (pAVar6->super_File)._vptr_File[4];
    this->QLHeaderPos = pAVar6->CurBlockPos;
    iVar3 = (*p_Var4)();
    pAVar6 = this->Arc;
    *(int *)&this->RawDataStart = iVar3;
    *(undefined4 *)((int)&this->RawDataStart + 4) = extraout_r1_01;
    uVar7 = *(undefined4 *)((int)&(pAVar6->SubHead).UnpSize + 4);
    p_Var4 = (pAVar5->super_File)._vptr_File[3];
    *(undefined4 *)&this->RawDataSize = *(undefined4 *)&(pAVar6->SubHead).UnpSize;
    *(undefined4 *)((int)&this->RawDataSize + 4) = uVar7;
    this->Loaded = true;
    (*p_Var4)(iVar3,(pAVar6->SubHead).FileName + 0x7dc,iVar1,extraout_r1_00,0);
  }
  pAVar5 = this->Arc;
  if ((pAVar5->SubHead).Encrypted != false) {
    if ((pAVar5->Cmd->Password).PasswordSet == false) {
      return;
    }
    CryptData::SetCryptKeys
              (&this->Crypt,false,CRYPT_RAR50,&pAVar5->Cmd->Password,(pAVar5->SubHead).Salt,
               (pAVar5->SubHead).InitV,(pAVar5->SubHead).Lg2Count,(pAVar5->SubHead).HashKey,
               (pAVar5->SubHead).PswCheck);
  }
  __ptr = (this->LastReadHeader).Buffer;
  this->RawDataPos = 0;
  this->ReadBufSize = 0;
  this->ReadBufPos = 0;
  if (__ptr != (uchar *)0x0) {
    free(__ptr);
    (this->LastReadHeader).Buffer = (uchar *)0x0;
  }
  (this->LastReadHeader).BufSize = 0;
  (this->LastReadHeader).AllocSize = 0;
  this->LastReadHeaderPos = 0;
  ReadBuffer(this);
  return;
}


