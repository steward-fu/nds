/*
 * Ghidra decompilation
 *
 * Function : _ZN8ModelPPM7CleanUpEv
 * Address  : 080ee5f8
 * Program  : drastic
 */


/* DWARF original prototype: void CleanUp(ModelPPM * this) */

void __thiscall ModelPPM::CleanUp(ModelPPM *this)

{
  undefined8 uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  if ((this->SubAlloc).SubAllocatorSize != 0) {
    (this->SubAlloc).SubAllocatorSize = 0;
    free((this->SubAlloc).HeapStart);
    iVar5 = (this->SubAlloc).SubAllocatorSize;
    if (iVar5 == 0x100000) goto LAB_080ee648;
    if (iVar5 != 0) {
      (this->SubAlloc).SubAllocatorSize = 0;
      free((this->SubAlloc).HeapStart);
    }
  }
  pbVar2 = (byte *)malloc(0x100014);
  (this->SubAlloc).HeapStart = pbVar2;
  if (pbVar2 == (byte *)0x0) {
    ErrorHandler::MemoryError(&ErrHandler);
  }
  else {
    (this->SubAlloc).SubAllocatorSize = 0x100000;
    (this->SubAlloc).HeapEnd = pbVar2 + 0x100008;
  }
LAB_080ee648:
  this->MaxOrder = 2;
  this->EscCount = '\x01';
  RestartModelRare(this);
  uVar1 = SIMDExpandImmediate(0,0xe,4);
  this->NS2BSIndx[0] = '\0';
  this->NS2BSIndx[1] = '\x02';
  *(undefined8 *)(this->NS2BSIndx + 2) = uVar1;
  *(undefined8 *)(this->NS2BSIndx + 3) = uVar1;
  memset(this->NS2BSIndx + 0xb,6,0xf5);
  this->NS2Indx[0] = '\0';
  iVar3 = 1;
  iVar5 = 1;
  this->NS2Indx[1] = '\x01';
  pbVar2 = this->NS2Indx + 2;
  bVar4 = '\x03';
  this->NS2Indx[2] = '\x02';
  do {
    iVar5 = iVar5 + -1;
    pbVar2 = pbVar2 + 1;
    *pbVar2 = bVar4;
    if (iVar5 == 0) {
      bVar4 = bVar4 + '\x01';
      iVar5 = iVar3 + 1;
      iVar3 = iVar3 + 1;
    }
  } while (pbVar2 != this->NS2Indx + 0xff);
  *(undefined8 *)this->HB2Flag = 0;
  *(undefined8 *)(this->HB2Flag + 8) = 0;
  *(undefined8 *)(this->HB2Flag + 0x10) = 0;
  *(undefined8 *)(this->HB2Flag + 0x18) = 0;
  *(undefined8 *)(this->HB2Flag + 0x20) = 0;
  *(undefined8 *)(this->HB2Flag + 0x28) = 0;
  *(undefined8 *)(this->HB2Flag + 0x30) = 0;
  *(undefined8 *)(this->HB2Flag + 0x38) = 0;
  memset(this->HB2Flag + 0x40,8,0xc0);
  (this->DummySEE2Cont).Shift = '\a';
  return;
}


