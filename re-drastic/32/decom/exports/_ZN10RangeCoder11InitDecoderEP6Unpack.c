/*
 * Ghidra decompilation
 *
 * Function : _ZN10RangeCoder11InitDecoderEP6Unpack
 * Address  : 080f17e8
 * Program  : drastic
 */


/* DWARF original prototype: void InitDecoder(RangeCoder * this, Unpack * UnpackRead) */

void __thiscall RangeCoder::InitDecoder(RangeCoder *this,Unpack *UnpackRead)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  int iVar4;
  int iVar5;
  Unpack *pUVar6;
  Unpack *this_00;
  
  iVar5 = (UnpackRead->Inp).InAddr;
  this->low = 0;
  this->code = 0;
  this->range = 0xffffffff;
  this->UnpackRead = UnpackRead;
  if (0x7fe2 < iVar5) {
    Unpack::UnpReadBuf(UnpackRead);
    iVar5 = (UnpackRead->Inp).InAddr;
  }
  pUVar6 = this->UnpackRead;
  (UnpackRead->Inp).InAddr = iVar5 + 1;
  iVar4 = (pUVar6->Inp).InAddr;
  bVar1 = (UnpackRead->Inp).InBuf[iVar5];
  this->code = (uint)bVar1;
  this_00 = pUVar6;
  if (0x7fe2 < iVar4) {
    Unpack::UnpReadBuf(pUVar6);
    iVar4 = (pUVar6->Inp).InAddr;
    this_00 = this->UnpackRead;
  }
  (pUVar6->Inp).InAddr = iVar4 + 1;
  iVar5 = (this_00->Inp).InAddr;
  uVar2 = CONCAT11(bVar1,(pUVar6->Inp).InBuf[iVar4]);
  this->code = (uint)uVar2;
  pUVar6 = this_00;
  if (0x7fe2 < iVar5) {
    Unpack::UnpReadBuf(this_00);
    iVar5 = (this_00->Inp).InAddr;
    pUVar6 = this->UnpackRead;
  }
  (this_00->Inp).InAddr = iVar5 + 1;
  iVar4 = (pUVar6->Inp).InAddr;
  uVar3 = CONCAT21(uVar2,(this_00->Inp).InBuf[iVar5]);
  this->code = (uint)uVar3;
  if (0x7fe2 < iVar4) {
    Unpack::UnpReadBuf(pUVar6);
    iVar4 = (pUVar6->Inp).InAddr;
  }
  (pUVar6->Inp).InAddr = iVar4 + 1;
  this->code = CONCAT31(uVar3,(pUVar6->Inp).InBuf[iVar4]);
  return;
}


