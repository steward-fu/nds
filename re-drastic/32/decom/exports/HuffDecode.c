/*
 * Ghidra decompilation
 *
 * Function : HuffDecode
 * Address  : 080f015c
 * Program  : drastic
 */


/* DWARF original prototype: void HuffDecode(Unpack * this) */

void __thiscall Unpack::HuffDecode(Unpack *this)

{
  ushort uVar1;
  undefined auVar2 [16];
  byte bVar3;
  uint uVar4;
  uint BitField;
  int BytePlace;
  ushort *puVar5;
  uint Distance;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  ushort uVar11;
  uint uVar12;
  uint *PosTab;
  int iVar13;
  uint CurByte;
  ushort *puVar14;
  uint Length;
  BitInput *this_00;
  int iVar15;
  size_t sVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  
  this_00 = &this->Inp;
  uVar4 = BitInput::fgetbits(this_00);
  uVar12 = this->AvrPlc;
  if (uVar12 < 0x7600) {
    if (uVar12 < 0x5e00) {
      if (uVar12 < 0x3600) {
        if (uVar12 < 0xe00) {
          uVar12 = DecodeNum(this,uVar4,4,DecHf0,PosHf0);
          iVar8 = this->StMode;
          goto joined_r0x080f0504;
        }
        PosTab = PosHf1;
      }
      else {
        PosTab = PosHf2;
      }
      uVar7 = 5;
    }
    else {
      PosTab = PosHf3;
      uVar7 = 6;
    }
    uVar12 = DecodeNum(this,uVar4,uVar7,PosTab + -8,PosTab);
  }
  else {
    uVar12 = DecodeNum(this,uVar4,8,DecHf4,PosHf4);
  }
  iVar8 = this->StMode;
joined_r0x080f0504:
  uVar12 = uVar12 & 0xff;
  if (iVar8 == 0) {
    iVar8 = this->NumHuf;
    this->NumHuf = iVar8 + 1;
    if ((0xf < iVar8) && (this->FlagsCnt == 0)) {
      this->StMode = 1;
    }
  }
  else {
    bVar19 = uVar4 == 0x1000;
    if (0xfff < uVar4) {
      bVar19 = uVar12 == 0;
    }
    if (bVar19) {
      uVar12 = 0xff;
    }
    else {
      bVar19 = uVar12 == 0;
      uVar12 = uVar12 - 1;
      if (bVar19) {
        uVar4 = BitInput::fgetbits(this_00);
        BitInput::faddbits(this_00,1);
        if ((uVar4 & 0x8000) != 0) {
          this->NumHuf = 0;
          this->StMode = 0;
          return;
        }
        if ((uVar4 & 0x4000) == 0) {
          iVar8 = 2;
          uVar12 = 3;
        }
        else {
          iVar8 = 3;
          uVar12 = 4;
        }
        BitInput::faddbits(this_00,1);
        uVar4 = BitInput::fgetbits(this_00);
        uVar4 = DecodeNum(this,uVar4,5,DecHf2,PosHf2);
        uVar7 = BitInput::fgetbits(this_00);
        BitInput::faddbits(this_00,5);
        sVar16 = this->UnpPtr;
        uVar6 = *(uint *)&this->DestUnpSize;
        iVar13 = *(int *)((int)&this->DestUnpSize + 4);
        uVar9 = this->MaxWinMask;
        *(uint *)&this->DestUnpSize = uVar6 - uVar12;
        *(uint *)((int)&this->DestUnpSize + 4) = iVar13 - (uint)(uVar6 < uVar12);
        do {
          iVar8 = iVar8 + -1;
          this->Window[sVar16] = this->Window[uVar9 & sVar16 - (uVar4 << 5 | uVar7 >> 0xb)];
          uVar9 = this->MaxWinMask;
          sVar16 = this->UnpPtr + 1 & uVar9;
          this->UnpPtr = sVar16;
        } while (iVar8 != -1);
        return;
      }
    }
  }
  uVar9 = uVar12 + this->AvrPlc;
  uVar6 = this->Nhfb + 0x10;
  this->AvrPlc = uVar9 - (uVar9 >> 8);
  if (uVar6 < 0x100) {
    this->Nhfb = uVar6;
  }
  else {
    this->Nhfb = 0x90;
    this->Nlzb = this->Nlzb >> 1;
  }
  sVar16 = this->UnpPtr;
  this->UnpPtr = sVar16 + 1;
  this->Window[sVar16] = (byte)(this->ChSet[uVar12] >> 8);
  iVar8 = *(int *)&this->DestUnpSize;
  iVar13 = *(int *)((int)&this->DestUnpSize + 4);
  *(int *)&this->DestUnpSize = iVar8 + -1;
  *(uint *)((int)&this->DestUnpSize + 4) = iVar13 - (uint)(iVar8 == 0);
  uVar6 = this->ChSet[uVar12] & 0xff;
  uVar9 = this->ChSet[uVar12] + 1;
  uVar11 = (ushort)uVar9;
  bVar3 = this->NToPl[uVar6];
  this->NToPl[uVar6] = bVar3 + 1;
  if (0xa1 < (uVar9 & 0xff)) {
    do {
      iVar8 = 7;
      puVar10 = this->ChSet;
      do {
        uVar1 = (ushort)iVar8;
        uVar6 = -((uint)((int)puVar10 << 0x1d) >> 0x1e) & 7;
        if (uVar6 == 0) {
          iVar18 = 0x20;
          iVar15 = 4;
          puVar5 = puVar10;
          iVar17 = iVar18;
          iVar13 = iVar18;
        }
        else {
          puVar5 = puVar10 + 1;
          *puVar10 = uVar1 | *puVar10 & 0xff00;
          if (uVar6 == 1) {
            iVar13 = 0x1f;
          }
          else {
            puVar5 = puVar10 + 2;
            puVar10[1] = uVar1 | puVar10[1] & 0xff00;
            if (uVar6 == 2) {
              iVar13 = 0x1e;
            }
            else {
              puVar5 = puVar10 + 3;
              puVar10[2] = uVar1 | puVar10[2] & 0xff00;
              if (uVar6 == 3) {
                iVar13 = 0x1d;
              }
              else {
                puVar5 = puVar10 + 4;
                puVar10[3] = uVar1 | puVar10[3] & 0xff00;
                if (uVar6 == 4) {
                  iVar13 = 0x1c;
                }
                else {
                  puVar5 = puVar10 + 5;
                  puVar10[4] = uVar1 | puVar10[4] & 0xff00;
                  if (uVar6 == 5) {
                    iVar13 = 0x1b;
                  }
                  else {
                    puVar5 = puVar10 + 6;
                    puVar10[5] = uVar1 | puVar10[5] & 0xff00;
                    if (uVar6 == 6) {
                      iVar13 = 0x1a;
                    }
                    else {
                      puVar5 = puVar10 + 7;
                      iVar13 = 0x19;
                      puVar10[6] = uVar1 | puVar10[6] & 0xff00;
                    }
                  }
                }
              }
            }
          }
          iVar18 = 0x20 - uVar6;
          iVar15 = 3;
          iVar17 = 0x18;
        }
        puVar14 = puVar10 + uVar6;
        auVar20._4_4_ = CONCAT22(uVar1,uVar1);
        auVar20._0_4_ = CONCAT22(uVar1,uVar1);
        auVar20._8_8_ = 0;
        auVar20 = auVar20 & auVar20 << 0x40;
        auVar21 = SIMDExpandImmediate(1,9,0xff);
        auVar22 = SIMDExpandImmediate(1,9,0xff);
        auVar2 = SIMDExpandImmediate(1,9,0xff);
        auVar23 = *(undefined (*) [16])puVar14 & ~auVar21 | auVar20;
        auVar22 = *(undefined (*) [16])(puVar14 + 8) & ~auVar22 | auVar20;
        auVar21 = *(undefined (*) [16])(puVar14 + 0x10) & ~auVar2 | auVar20;
        *(longlong *)puVar14 = auVar23._0_8_;
        *(longlong *)(puVar14 + 4) = auVar23._8_8_;
        *(longlong *)(puVar14 + 8) = auVar22._0_8_;
        *(longlong *)(puVar14 + 0xc) = auVar22._8_8_;
        *(longlong *)(puVar14 + 0x10) = auVar21._0_8_;
        *(longlong *)(puVar14 + 0x14) = auVar21._8_8_;
        if (iVar15 != 3) {
          auVar21 = SIMDExpandImmediate(1,9,0xff);
          auVar20 = *(undefined (*) [16])(puVar14 + 0x18) & ~auVar21 | auVar20;
          *(longlong *)(puVar14 + 0x18) = auVar20._0_8_;
          *(longlong *)(puVar14 + 0x1c) = auVar20._8_8_;
        }
        iVar13 = iVar13 - iVar17;
        if ((((iVar18 != iVar17) && (puVar5[iVar17] = uVar1 | puVar5[iVar17] & 0xff00, iVar13 != 1))
            && (puVar5[iVar17 + 1] = uVar1 | puVar5[iVar17 + 1] & 0xff00, iVar13 != 2)) &&
           (((puVar5[iVar17 + 2] = uVar1 | puVar5[iVar17 + 2] & 0xff00, iVar13 != 3 &&
             (puVar5[iVar17 + 3] = uVar1 | puVar5[iVar17 + 3] & 0xff00, iVar13 != 4)) &&
            ((puVar5[iVar17 + 4] = uVar1 | puVar5[iVar17 + 4] & 0xff00, iVar13 != 5 &&
             (puVar5[iVar17 + 5] = uVar1 | puVar5[iVar17 + 5] & 0xff00, iVar13 != 6)))))) {
          puVar5[iVar17 + 6] = uVar1 | puVar5[iVar17 + 6] & 0xff00;
        }
        iVar8 = iVar8 + -1;
        puVar10 = puVar10 + 0x20;
      } while (iVar8 != -1);
      memset(this->NToPl,0,0x100);
      this->NToPl[6] = ' ';
      this->NToPl[0] = 0xe0;
      this->NToPl[4] = '`';
      this->NToPl[1] = 0xc0;
      this->NToPl[2] = 0xa0;
      this->NToPl[3] = 0x80;
      this->NToPl[5] = '@';
      uVar6 = this->ChSet[uVar12] & 0xff;
      uVar9 = this->ChSet[uVar12] + 1;
      uVar11 = (ushort)uVar9;
      bVar3 = this->NToPl[uVar6];
      this->NToPl[uVar6] = bVar3 + 1;
    } while (0xa1 < (uVar9 & 0xff));
  }
  this->ChSet[uVar12] = this->ChSet[bVar3];
  this->ChSet[bVar3] = uVar11;
  return;
}


