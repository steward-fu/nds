/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen10ReadBufferEv
 * Address  : 08108d08
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08108e24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: uint ReadBuffer(QuickOpen * this) */

uint __thiscall QuickOpen::ReadBuffer(QuickOpen *this)

{
  int iVar1;
  uint uVar2;
  Archive *this_00;
  Archive *pAVar3;
  int ReadSize;
  undefined4 extraout_r1;
  size_t sVar4;
  _func_int_varargs *p_Var5;
  size_t SizeToRead;
  int iVar6;
  Archive *pAVar7;
  uint64 *puVar8;
  uint uVar9;
  bool bVar10;
  uint in_stack_ffffffcc;
  
  pAVar7 = this->Arc;
  puVar8 = &this->RawDataPos;
  iVar1 = (*(pAVar7->super_File)._vptr_File[4])();
  File::Seek(&this->Arc->super_File,(ulonglong)in_stack_ffffffcc << 0x20,0);
  uVar2 = *(uint *)&this->RawDataSize - *(uint *)puVar8;
  bVar10 = *(int *)((int)&this->RawDataSize + 4) !=
           *(int *)((int)&this->RawDataPos + 4) +
           (uint)(*(uint *)&this->RawDataSize < *(uint *)puVar8);
  uVar9 = 0x10000 - this->ReadBufSize;
  this_00 = this->Arc;
  if ((bVar10 || uVar9 <= uVar2) && (bVar10 || uVar2 != uVar9)) {
    uVar2 = uVar9;
  }
  if ((this_00->SubHead).Encrypted != false) {
    uVar2 = uVar2 & 0xfffffff0;
  }
  if ((uVar2 == 0) ||
     (pAVar3 = (Archive *)File::Read(&this_00->super_File,this->Buf + this->ReadBufSize,uVar2),
     this_00 = pAVar3, (int)pAVar3 < 1)) {
    pAVar3 = (Archive *)0x0;
  }
  else {
    if ((this->Arc->SubHead).Encrypted != false) {
      CryptData::DecryptBlock(&this->Crypt,this->Buf + this->ReadBufSize,(uint)pAVar3 & 0xfffffff0);
      this_00 = (Archive *)&this->Crypt;
    }
    uVar2 = *(uint *)puVar8;
    iVar6 = *(int *)((int)&this->RawDataPos + 4);
    sVar4 = this->ReadBufSize;
    *(uint *)puVar8 = (int)&pAVar3->super_File + (uVar2 - 0x18);
    *(uint *)((int)&this->RawDataPos + 4) =
         iVar6 + ((int)pAVar3 >> 0x1f) + (uint)CARRY4(uVar2,(uint)pAVar3);
    this->ReadBufSize = (int)&pAVar3->super_File + (sVar4 - 0x18);
  }
  p_Var5 = (pAVar7->super_File)._vptr_File[3];
  (*p_Var5)(this_00,p_Var5,iVar1,extraout_r1,0);
  return (uint)pAVar3;
}


