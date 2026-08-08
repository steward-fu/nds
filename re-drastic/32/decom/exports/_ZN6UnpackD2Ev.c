/*
 * Ghidra decompilation
 *
 * Function : _ZN6UnpackD2Ev
 * Address  : 080f6000
 * Program  : drastic
 */


/* DWARF original prototype: void * ~Unpack(Unpack * this, int __in_chrg) */

void * __thiscall Unpack::~Unpack(Unpack *this,int __in_chrg)

{
  int *__ptr;
  UnpackFilter30 **ppUVar1;
  UnpackFilter *__ptr_00;
  uchar *puVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int __in_chrg_00;
  int extraout_r1_07;
  int extraout_r1_08;
  int extraout_r1_09;
  int extraout_r1_10;
  int extraout_r1_11;
  int iVar3;
  int extraout_r1_12;
  UnpackThreadData *pUVar4;
  UnpackThreadData *pUVar5;
  FragmentedWindow *pFVar6;
  UnpackThreadData *pUVar7;
  
  InitFilters30(this);
  if (this->Window != (byte *)0x0) {
    free(this->Window);
  }
  DestroyThreadPool(this->UnpThreadPool);
  iVar3 = extraout_r1;
  if (this->ReadBufMT != (byte *)0x0) {
    operator_delete__(this->ReadBufMT);
    iVar3 = extraout_r1_00;
  }
  pUVar4 = this->UnpThreadData;
  if (pUVar4 != (UnpackThreadData *)0x0) {
    pUVar5 = pUVar4 + pUVar4[-1].ThreadNumber;
    pUVar7 = pUVar5;
    if (pUVar4 != pUVar5) {
      do {
        pUVar7 = pUVar5 + -1;
        if (pUVar5[-1].Decoded != (UnpackDecodedItem *)0x0) {
          free(pUVar5[-1].Decoded);
          iVar3 = extraout_r1_01;
        }
        BitInput::~BitInput(&pUVar5[-1].Inp,iVar3);
        pUVar5 = pUVar5 + -1;
        iVar3 = extraout_r1_02;
      } while (this->UnpThreadData != pUVar7);
    }
    operator_delete__(&pUVar7[-1].DecodedAllocated);
    iVar3 = extraout_r1_03;
  }
  __ptr = (this->OldFilterLengths).Buffer;
  if (__ptr != (int *)0x0) {
    free(__ptr);
    iVar3 = extraout_r1_04;
  }
  ppUVar1 = (this->PrgStack).Buffer;
  if (ppUVar1 != (UnpackFilter30 **)0x0) {
    free(ppUVar1);
    iVar3 = extraout_r1_05;
  }
  ppUVar1 = (this->Filters30).Buffer;
  if (ppUVar1 != (UnpackFilter30 **)0x0) {
    free(ppUVar1);
    iVar3 = extraout_r1_06;
  }
  BitInput::~BitInput(&this->VMCodeInp,iVar3);
  RarVM::~RarVM(&this->VM,__in_chrg_00);
  iVar3 = extraout_r1_07;
  if ((this->PPM).SubAlloc.SubAllocatorSize != 0) {
    free((this->PPM).SubAlloc.HeapStart);
    iVar3 = extraout_r1_12;
  }
  pFVar6 = (FragmentedWindow *)&this->Window;
  do {
    pFVar6 = (FragmentedWindow *)(pFVar6->Mem + 1);
    if (pFVar6->Mem[0] != (byte *)0x0) {
      free(pFVar6->Mem[0]);
      iVar3 = extraout_r1_08;
    }
  } while (pFVar6 != (FragmentedWindow *)((this->FragWindow).Mem + 0x1f));
  __ptr_00 = (this->Filters).Buffer;
  if (__ptr_00 != (UnpackFilter *)0x0) {
    free(__ptr_00);
    iVar3 = extraout_r1_09;
  }
  puVar2 = (this->FilterDstMemory).Buffer;
  if (puVar2 != (uchar *)0x0) {
    free(puVar2);
    iVar3 = extraout_r1_10;
  }
  puVar2 = (this->FilterSrcMemory).Buffer;
  if (puVar2 != (uchar *)0x0) {
    free(puVar2);
    iVar3 = extraout_r1_11;
  }
  BitInput::~BitInput(&this->Inp,iVar3);
  return this;
}


