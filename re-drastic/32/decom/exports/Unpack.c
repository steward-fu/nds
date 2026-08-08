/*
 * Ghidra decompilation
 *
 * Function : Unpack
 * Address  : 080f6aa0
 * Program  : drastic
 */


/* DWARF original prototype: Unpack * Unpack(Unpack * this, ComprDataIO * DataIO) */

Unpack * __thiscall Unpack::Unpack(Unpack *this,ComprDataIO *DataIO)

{
  ushort uVar1;
  ThreadPool *pTVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  
  BitInput::BitInput(&this->Inp,true);
  (this->FilterSrcMemory).Buffer = (uchar *)0x0;
  (this->FilterSrcMemory).BufSize = 0;
  (this->FilterSrcMemory).AllocSize = 0;
  (this->FilterSrcMemory).MaxSize = 0;
  (this->FilterDstMemory).Buffer = (uchar *)0x0;
  (this->FilterDstMemory).BufSize = 0;
  (this->FilterDstMemory).AllocSize = 0;
  (this->FilterDstMemory).MaxSize = 0;
  (this->Filters).Buffer = (UnpackFilter *)0x0;
  (this->Filters).BufSize = 0;
  (this->Filters).AllocSize = 0;
  (this->Filters).MaxSize = 0;
  memset(&this->FragWindow,0,0x80);
  memset((this->FragWindow).MemSize,0,0x80);
  (this->PPM).SubAlloc.SubAllocatorSize = 0;
  (this->PPM).MinContext = (PPM_CONTEXT *)0x0;
  (this->PPM).MedContext = (PPM_CONTEXT *)0x0;
  (this->PPM).MaxContext = (PPM_CONTEXT *)0x0;
  RarVM::RarVM(&this->VM);
  BitInput::BitInput(&this->VMCodeInp,true);
  (this->Filters30).Buffer = (UnpackFilter30 **)0x0;
  (this->Filters30).BufSize = 0;
  (this->Filters30).AllocSize = 0;
  (this->Filters30).MaxSize = 0;
  (this->PrgStack).Buffer = (UnpackFilter30 **)0x0;
  (this->PrgStack).BufSize = 0;
  (this->PrgStack).AllocSize = 0;
  (this->PrgStack).MaxSize = 0;
  (this->OldFilterLengths).Buffer = (int *)0x0;
  (this->OldFilterLengths).BufSize = 0;
  (this->OldFilterLengths).AllocSize = 0;
  (this->OldFilterLengths).MaxSize = 0;
  this->UnpIO = DataIO;
  this->Window = (byte *)0x0;
  this->Fragmented = false;
  this->Suspended = false;
  this->UnpAllBuf = false;
  this->UnpSomeRead = false;
  this->MaxUserThreads = 1;
  pTVar2 = CreateThreadPool();
  this->UnpThreadPool = pTVar2;
  this->UnpThreadData = (UnpackThreadData *)0x0;
  this->ReadBufMT = (byte *)0x0;
  this->MaxWinSize = 0;
  this->MaxWinMask = 0;
  UnpInitData(this,false);
  this->FlagBuf = 0;
  auVar12._8_8_ = 0xa00000009;
  auVar12._0_8_ = 0x800000007;
  this->AvrPlc = 0x3500;
  auVar13 = SIMDExpandImmediate(0,0,8);
  this->AvrPlcB = 0;
  auVar15 = SIMDExpandImmediate(0,0,4);
  this->AvrLn1 = 0;
  this->AvrLn2 = 0;
  this->AvrLn3 = 0;
  this->Buf60 = 0;
  this->NumHuf = 0;
  this->StMode = 0;
  this->LCount = 0;
  this->FlagsCnt = 0;
  this->Nhfb = 0x80;
  this->Nlzb = 0x80;
  this->MaxDist3 = 0x2001;
  this->ReadTop = 0;
  this->ChSetB[0] = 0;
  this->ChSet[0] = 0;
  this->ChSetA[0] = 0;
  this->ChSetC[0] = 0;
  this->ChSetB[1] = 0x100;
  this->ChSet[1] = 0x100;
  this->ChSetA[1] = 1;
  this->ChSetC[1] = 0xff00;
  this->ChSetB[2] = 0x200;
  this->ChSet[2] = 0x200;
  this->ChSetA[2] = 2;
  this->ChSetC[2] = 0xfe00;
  this->ChSetB[3] = 0x300;
  this->ChSet[3] = 0x300;
  this->ChSetA[3] = 3;
  this->ChSetC[3] = 0xfd00;
  this->ChSetB[4] = 0x400;
  this->ChSet[4] = 0x400;
  this->ChSetA[4] = 4;
  this->ChSetC[4] = 0xfc00;
  this->ChSetB[5] = 0x500;
  this->ChSet[5] = 0x500;
  this->ChSetA[5] = 5;
  this->ChSetC[5] = 0xfb00;
  this->ChSetB[6] = 0x600;
  this->ChSet[6] = 0x600;
  this->ChSetA[6] = 6;
  this->ChSetC[6] = 64000;
  puVar4 = this->ChSetB + 7;
  puVar3 = this->ChSet + 7;
  do {
    auVar14 = VectorAdd(auVar12,auVar15,4);
    puVar5 = puVar3 + 8;
    auVar16._0_8_ = VectorCopyNarrow(auVar12,4);
    auVar16._8_8_ = VectorCopyNarrow(auVar14,4);
    auVar12 = VectorAdd(auVar12,auVar13,4);
    auVar14 = FloatVectorNeg(auVar16,1,2);
    auVar17 = VectorShiftLeft(auVar16,8,0x10,0);
    auVar14 = VectorShiftLeft(auVar14,8,0x10,0);
    *(longlong *)puVar4 = auVar17._0_8_;
    *(longlong *)(puVar4 + 4) = auVar17._8_8_;
    *(longlong *)puVar3 = auVar17._0_8_;
    *(longlong *)(puVar3 + 4) = auVar17._8_8_;
    *(undefined8 *)(puVar3 + 0x100) = auVar16._0_8_;
    *(undefined8 *)(puVar3 + 0x104) = auVar16._8_8_;
    *(longlong *)(puVar4 + 0x100) = auVar14._0_8_;
    *(longlong *)(puVar4 + 0x104) = auVar14._8_8_;
    puVar4 = puVar4 + 8;
    puVar3 = puVar5;
  } while (this->ChSet + 0xff != puVar5);
  this->ChSetB[0xff] = 0xff00;
  this->ChSet[0xff] = 0xff00;
  this->ChSetC[0xff] = 0x100;
  this->ChSetA[0xff] = 0xff;
  memset(this->NToPl,0,0x100);
  memset(this->NToPlB,0,0x100);
  memset(this->NToPlC,0,0x100);
  iVar11 = 7;
  puVar4 = this->ChSetB;
  do {
    uVar1 = (ushort)iVar11;
    uVar6 = -((uint)((int)puVar4 << 0x1d) >> 0x1e) & 7;
    if (uVar6 == 0) {
      iVar7 = 0x20;
      iVar9 = 4;
      puVar3 = puVar4;
      iVar8 = iVar7;
      iVar10 = iVar7;
    }
    else {
      puVar3 = puVar4 + 1;
      *puVar4 = uVar1 | *puVar4 & 0xff00;
      if (uVar6 == 1) {
        iVar10 = 0x1f;
      }
      else {
        puVar3 = puVar4 + 2;
        puVar4[1] = uVar1 | puVar4[1] & 0xff00;
        if (uVar6 == 2) {
          iVar10 = 0x1e;
        }
        else {
          puVar3 = puVar4 + 3;
          puVar4[2] = uVar1 | puVar4[2] & 0xff00;
          if (uVar6 == 3) {
            iVar10 = 0x1d;
          }
          else {
            puVar3 = puVar4 + 4;
            puVar4[3] = uVar1 | puVar4[3] & 0xff00;
            if (uVar6 == 4) {
              iVar10 = 0x1c;
            }
            else {
              puVar3 = puVar4 + 5;
              puVar4[4] = uVar1 | puVar4[4] & 0xff00;
              if (uVar6 == 5) {
                iVar10 = 0x1b;
              }
              else {
                puVar3 = puVar4 + 6;
                puVar4[5] = uVar1 | puVar4[5] & 0xff00;
                if (uVar6 == 6) {
                  iVar10 = 0x1a;
                }
                else {
                  puVar3 = puVar4 + 7;
                  iVar10 = 0x19;
                  puVar4[6] = uVar1 | puVar4[6] & 0xff00;
                }
              }
            }
          }
        }
      }
      iVar8 = 0x20 - uVar6;
      iVar7 = 0x18;
      iVar9 = 3;
    }
    puVar5 = puVar4 + uVar6;
    auVar14._4_4_ = CONCAT22(uVar1,uVar1);
    auVar14._0_4_ = CONCAT22(uVar1,uVar1);
    auVar14._8_8_ = 0;
    auVar14 = auVar14 & auVar14 << 0x40;
    auVar13 = SIMDExpandImmediate(1,9,0xff);
    auVar15 = SIMDExpandImmediate(1,9,0xff);
    auVar12 = SIMDExpandImmediate(1,9,0xff);
    auVar16 = *(undefined (*) [16])puVar5 & ~auVar13 | auVar14;
    auVar15 = *(undefined (*) [16])(puVar5 + 8) & ~auVar15 | auVar14;
    auVar13 = *(undefined (*) [16])(puVar5 + 0x10) & ~auVar12 | auVar14;
    *(longlong *)puVar5 = auVar16._0_8_;
    *(longlong *)(puVar5 + 4) = auVar16._8_8_;
    *(longlong *)(puVar5 + 8) = auVar15._0_8_;
    *(longlong *)(puVar5 + 0xc) = auVar15._8_8_;
    *(longlong *)(puVar5 + 0x10) = auVar13._0_8_;
    *(longlong *)(puVar5 + 0x14) = auVar13._8_8_;
    if (iVar9 != 3) {
      auVar13 = SIMDExpandImmediate(1,9,0xff);
      auVar14 = *(undefined (*) [16])(puVar5 + 0x18) & ~auVar13 | auVar14;
      *(longlong *)(puVar5 + 0x18) = auVar14._0_8_;
      *(longlong *)(puVar5 + 0x1c) = auVar14._8_8_;
    }
    iVar10 = iVar10 - iVar7;
    if ((((iVar8 != iVar7) && (puVar3[iVar7] = uVar1 | puVar3[iVar7] & 0xff00, iVar10 != 1)) &&
        (puVar3[iVar7 + 1] = uVar1 | puVar3[iVar7 + 1] & 0xff00, iVar10 != 2)) &&
       (((puVar3[iVar7 + 2] = uVar1 | puVar3[iVar7 + 2] & 0xff00, iVar10 != 3 &&
         (puVar3[iVar7 + 3] = uVar1 | puVar3[iVar7 + 3] & 0xff00, iVar10 != 4)) &&
        ((puVar3[iVar7 + 4] = uVar1 | puVar3[iVar7 + 4] & 0xff00, iVar10 != 5 &&
         (puVar3[iVar7 + 5] = uVar1 | puVar3[iVar7 + 5] & 0xff00, iVar10 != 6)))))) {
      puVar3[iVar7 + 6] = uVar1 | puVar3[iVar7 + 6] & 0xff00;
    }
    iVar11 = iVar11 + -1;
    puVar4 = puVar4 + 0x20;
  } while (iVar11 != -1);
  memset(this->NToPlB,0,0x100);
  this->NToPlB[5] = '@';
  this->NToPlB[0] = 0xe0;
  this->NToPlB[1] = 0xc0;
  this->NToPlB[2] = 0xa0;
  this->NToPlB[3] = 0x80;
  this->NToPlB[4] = '`';
  this->NToPlB[6] = ' ';
  return this;
}


