/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack8Unpack15Eb
 * Address  : 080f65a4
 * Program  : drastic
 */


/* DWARF original prototype: void Unpack15(Unpack * this, bool Solid) */

void __thiscall Unpack::Unpack15(Unpack *this,bool Solid)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  
  UnpInitData(this,Solid);
  if (Solid) {
    this->FlagBuf = 0;
    this->StMode = 0;
    this->LCount = 0;
    this->FlagsCnt = 0;
    this->ReadTop = 0;
    UnpReadBuf(this);
    this->UnpPtr = this->WrPtr;
  }
  else {
    this->Buf60 = 0;
    this->NumHuf = 0;
    this->FlagsCnt = 0;
    this->Nhfb = 0x80;
    this->Nlzb = 0x80;
    this->MaxDist3 = 0x2001;
    this->FlagBuf = 0;
    this->AvrPlc = 0x3500;
    this->AvrPlcB = 0;
    this->AvrLn1 = 0;
    this->AvrLn2 = 0;
    this->AvrLn3 = 0;
    this->StMode = 0;
    this->LCount = 0;
    this->ReadTop = 0;
    UnpReadBuf(this);
    this->ChSetB[0] = (ushort)Solid;
    auVar13._8_8_ = 0xa00000009;
    auVar13._0_8_ = 0x800000007;
    this->ChSet[0] = (ushort)Solid;
    auVar1 = SIMDExpandImmediate(0,0,8);
    this->ChSetA[0] = (ushort)Solid;
    auVar2 = SIMDExpandImmediate(0,0,4);
    this->ChSetC[0] = (ushort)Solid;
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
    puVar6 = this->ChSetB + 7;
    puVar9 = this->ChSet + 7;
    do {
      auVar14 = VectorAdd(auVar13,auVar2,4);
      puVar10 = puVar9 + 8;
      uVar15 = VectorCopyNarrow(auVar13,4);
      uVar16 = VectorCopyNarrow(auVar14,4);
      auVar13 = VectorAdd(auVar13,auVar1,4);
      auVar14._8_8_ = uVar16;
      auVar14._0_8_ = uVar15;
      auVar14 = FloatVectorNeg(auVar14,1,2);
      auVar17._8_8_ = uVar16;
      auVar17._0_8_ = uVar15;
      auVar17 = VectorShiftLeft(auVar17,8,0x10,0);
      auVar14 = VectorShiftLeft(auVar14,8,0x10,0);
      *(longlong *)puVar6 = auVar17._0_8_;
      *(longlong *)(puVar6 + 4) = auVar17._8_8_;
      *(longlong *)puVar9 = auVar17._0_8_;
      *(longlong *)(puVar9 + 4) = auVar17._8_8_;
      *(undefined8 *)(puVar9 + 0x100) = uVar15;
      *(undefined8 *)(puVar9 + 0x104) = uVar16;
      *(longlong *)(puVar6 + 0x100) = auVar14._0_8_;
      *(longlong *)(puVar6 + 0x104) = auVar14._8_8_;
      puVar6 = puVar6 + 8;
      puVar9 = puVar10;
    } while (this->ChSet + 0xff != puVar10);
    this->ChSetB[0xff] = 0xff00;
    this->ChSet[0xff] = 0xff00;
    this->ChSetC[0xff] = 0x100;
    this->ChSetA[0xff] = 0xff;
    memset(this->NToPl,0,0x100);
    memset(this->NToPlB,0,0x100);
    memset(this->NToPlC,0,0x100);
    CorrHuff(this,this->ChSetB,this->NToPlB);
    this->UnpPtr = 0;
  }
  iVar7 = *(int *)&this->DestUnpSize;
  iVar11 = *(int *)((int)&this->DestUnpSize + 4) - (uint)(iVar7 == 0);
  *(int *)&this->DestUnpSize = iVar7 + -1;
  *(int *)((int)&this->DestUnpSize + 4) = iVar11;
  if (-1 < iVar11) {
    GetFlagsBuf(this);
    this->FlagsCnt = 8;
    while (-1 < *(int *)((int)&this->DestUnpSize + 4)) {
      iVar7 = (this->Inp).InAddr;
      uVar4 = this->MaxWinMask;
      uVar8 = this->UnpPtr & uVar4;
      this->UnpPtr = uVar8;
      if (this->ReadTop + -0x1d <= iVar7) {
        bVar3 = UnpReadBuf(this);
        if (!bVar3) break;
        uVar8 = this->UnpPtr;
        uVar4 = this->MaxWinMask;
      }
      uVar5 = this->WrPtr;
      if (uVar5 != uVar8 && (uVar5 - uVar8 & uVar4) < 0x10e) {
        this->UnpSomeRead = true;
        if (uVar8 < uVar5) {
          ComprDataIO::UnpWrite(this->UnpIO,this->Window + uVar5,-uVar5 & uVar4);
          ComprDataIO::UnpWrite(this->UnpIO,this->Window,this->UnpPtr);
          this->UnpAllBuf = true;
        }
        else {
          ComprDataIO::UnpWrite(this->UnpIO,this->Window + uVar5,uVar8 - uVar5);
        }
        this->WrPtr = this->UnpPtr;
      }
      if (this->StMode == 0) {
        iVar7 = this->FlagsCnt;
        iVar11 = iVar7 + -1;
        this->FlagsCnt = iVar11;
        if (iVar11 < 0) {
          GetFlagsBuf(this);
          uVar4 = this->FlagBuf;
          this->FlagsCnt = 7;
          if ((uVar4 & 0x80) == 0) {
            uVar12 = uVar4 << 1;
            this->FlagBuf = uVar12;
            this->FlagsCnt = 6;
            goto LAB_080f6970;
          }
LAB_080f69d4:
          this->FlagBuf = uVar4 << 1;
          if (this->Nlzb <= this->Nhfb) goto LAB_080f69ec;
LAB_080f6990:
          LongLZ(this);
        }
        else {
          uVar4 = this->FlagBuf;
          if ((uVar4 & 0x80) != 0) goto LAB_080f69d4;
          iVar7 = iVar7 + -2;
          uVar12 = uVar4 << 1;
          this->FlagBuf = uVar12;
          this->FlagsCnt = iVar7;
          if (iVar7 == -1) {
            GetFlagsBuf(this);
            uVar12 = this->FlagBuf;
            this->FlagsCnt = 7;
          }
LAB_080f6970:
          if ((uVar12 & 0x80) != 0) {
            this->FlagBuf = uVar12 << 1;
            if (this->Nhfb < this->Nlzb) goto LAB_080f69ec;
            goto LAB_080f6990;
          }
          this->FlagBuf = uVar12 << 1;
          ShortLZ(this);
        }
      }
      else {
LAB_080f69ec:
        HuffDecode(this);
      }
    }
  }
  UnpWriteBuf20(this);
  return;
}


