/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack17SafePPMDecodeCharEv
 * Address  : 0810295c
 * Program  : drastic
 */


/* DWARF original prototype: int SafePPMDecodeChar(Unpack * this) */

int __thiscall Unpack::SafePPMDecodeChar(Unpack *this)

{
  undefined8 uVar1;
  int iVar2;
  int Ch;
  byte *pbVar3;
  int k;
  int m;
  int iVar4;
  int Step;
  
  iVar2 = ModelPPM::DecodeChar(&this->PPM);
  if (iVar2 != -1) {
    return iVar2;
  }
  if ((this->PPM).SubAlloc.SubAllocatorSize != 0) {
    pbVar3 = (this->PPM).SubAlloc.HeapStart;
    (this->PPM).SubAlloc.SubAllocatorSize = 0;
    free(pbVar3);
    iVar2 = (this->PPM).SubAlloc.SubAllocatorSize;
    if (iVar2 == 0x100000) goto LAB_081029f0;
    if (iVar2 != 0) {
      pbVar3 = (this->PPM).SubAlloc.HeapStart;
      (this->PPM).SubAlloc.SubAllocatorSize = 0;
      free(pbVar3);
    }
  }
  pbVar3 = (byte *)malloc(0x100014);
  (this->PPM).SubAlloc.HeapStart = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    ErrorHandler::MemoryError(&ErrHandler);
  }
  else {
    (this->PPM).SubAlloc.SubAllocatorSize = 0x100000;
    (this->PPM).SubAlloc.HeapEnd = pbVar3 + 0x100008;
  }
LAB_081029f0:
  (this->PPM).EscCount = '\x01';
  (this->PPM).MaxOrder = 2;
  ModelPPM::RestartModelRare(&this->PPM);
  uVar1 = SIMDExpandImmediate(0,0xe,4);
  (this->PPM).NS2BSIndx[0] = '\0';
  (this->PPM).NS2BSIndx[1] = '\x02';
  *(undefined8 *)((this->PPM).NS2BSIndx + 2) = uVar1;
  *(undefined8 *)((this->PPM).NS2BSIndx + 3) = uVar1;
  memset((this->PPM).NS2BSIndx + 0xb,6,0xf5);
  iVar2 = 1;
  pbVar3 = (this->PPM).NS2Indx + 2;
  (this->PPM).NS2Indx[0] = '\0';
  (this->PPM).NS2Indx[1] = '\x01';
  m = 3;
  (this->PPM).NS2Indx[2] = '\x02';
  iVar4 = iVar2;
  do {
    iVar2 = iVar2 + -1;
    pbVar3 = pbVar3 + 1;
    *pbVar3 = (byte)m;
    if (iVar2 == 0) {
      m = m + 1;
      iVar2 = iVar4 + 1;
      iVar4 = iVar4 + 1;
    }
  } while (pbVar3 != (this->PPM).NS2Indx + 0xff);
  *(undefined8 *)(this->PPM).HB2Flag = 0;
  *(undefined8 *)((this->PPM).HB2Flag + 8) = 0;
  *(undefined8 *)((this->PPM).HB2Flag + 0x10) = 0;
  *(undefined8 *)((this->PPM).HB2Flag + 0x18) = 0;
  *(undefined8 *)((this->PPM).HB2Flag + 0x20) = 0;
  *(undefined8 *)((this->PPM).HB2Flag + 0x28) = 0;
  *(undefined8 *)((this->PPM).HB2Flag + 0x30) = 0;
  *(undefined8 *)((this->PPM).HB2Flag + 0x38) = 0;
  memset((this->PPM).HB2Flag + 0x40,8,0xc0);
  (this->PPM).DummySEE2Cont.Shift = '\a';
  this->UnpBlockType = 0;
  return -1;
}


