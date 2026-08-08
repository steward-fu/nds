/*
 * Ghidra decompilation
 *
 * Function : LongLZ
 * Address  : 080efae0
 * Program  : drastic
 */


/* DWARF original prototype: void LongLZ(Unpack * this) */

void __thiscall Unpack::LongLZ(Unpack *this)

{
  ushort uVar1;
  undefined auVar2 [16];
  byte bVar3;
  uint uVar4;
  uint BitField;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint OldAvr2;
  uint *puVar11;
  uint uVar12;
  ushort *puVar13;
  uint OldAvr3;
  size_t sVar14;
  BitInput *this_00;
  uint Distance;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  uint *PosTab;
  uint DistancePlace;
  
  uVar10 = this->Nlzb + 0x10;
  this->NumHuf = 0;
  if (uVar10 < 0x100) {
    this->Nlzb = uVar10;
  }
  else {
    this->Nlzb = 0x90;
    this->Nhfb = this->Nhfb >> 1;
  }
  uVar10 = this->AvrLn2;
  this_00 = &this->Inp;
  uVar4 = BitInput::fgetbits(this_00);
  if (this->AvrLn2 < 0x7a) {
    if (0x3f < this->AvrLn2) {
      uVar7 = 2;
      PosTab = PosL1;
      puVar11 = DecL1;
      goto LAB_080f00c4;
    }
    if (uVar4 < 0x100) {
      BitInput::faddbits(this_00,0x10);
      uVar7 = (uint)(uVar4 != 1 && uVar4 != 4);
    }
    else {
      uVar9 = uVar4 & 0x8000;
      if ((uVar4 & 0x8000) == 0) {
        do {
          uVar12 = uVar9;
          uVar9 = uVar12 + 1;
        } while ((uVar4 << (uVar9 & 0xff) & 0x8000) == 0);
        uVar4 = uVar12 + 2;
        if (uVar9 == 1 || uVar9 == 4) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
      }
      else {
        uVar4 = 1;
        uVar9 = 0;
        uVar7 = uVar4;
      }
      BitInput::faddbits(this_00,uVar4);
      uVar4 = uVar9;
    }
  }
  else {
    PosTab = PosL2;
    uVar7 = 3;
    puVar11 = DecL2;
LAB_080f00c4:
    uVar4 = DecodeNum(this,uVar4,uVar7,puVar11,PosTab);
    uVar7 = (uint)(uVar4 != 1 && uVar4 != 4);
  }
  uVar9 = uVar4 + this->AvrLn2;
  this->AvrLn2 = uVar9 - (uVar9 >> 5);
  uVar5 = BitInput::fgetbits(this_00);
  if (this->AvrPlcB < 0x2900) {
    if (0x6ff < this->AvrPlcB) {
      puVar11 = PosHf1;
      goto LAB_080efbdc;
    }
    uVar9 = DecodeNum(this,uVar5,4,DecHf0,PosHf0);
  }
  else {
    puVar11 = PosHf2;
LAB_080efbdc:
    uVar9 = DecodeNum(this,uVar5,5,puVar11 + -8,puVar11);
  }
  uVar12 = uVar9 + this->AvrPlcB;
  this->AvrPlcB = uVar12 - (uVar12 >> 8);
  uVar12 = this->ChSetB[uVar9 & 0xff] & 0xff;
  uVar15 = this->ChSetB[uVar9 & 0xff] + 1;
  bVar3 = this->NToPlB[uVar12];
  this->NToPlB[uVar12] = bVar3 + 1;
  if ((uVar15 & 0xff) == 0) {
    do {
      iVar16 = 7;
      puVar8 = this->ChSetB;
      do {
        uVar1 = (ushort)iVar16;
        uVar12 = -((uint)((int)puVar8 << 0x1d) >> 0x1e) & 7;
        if (uVar12 == 0) {
          iVar20 = 0x20;
          iVar17 = 4;
          puVar6 = puVar8;
          iVar18 = iVar20;
          iVar19 = iVar20;
        }
        else {
          puVar6 = puVar8 + 1;
          *puVar8 = uVar1 | *puVar8 & 0xff00;
          if (uVar12 == 1) {
            iVar19 = 0x1f;
          }
          else {
            puVar6 = puVar8 + 2;
            puVar8[1] = uVar1 | puVar8[1] & 0xff00;
            if (uVar12 == 2) {
              iVar19 = 0x1e;
            }
            else {
              puVar6 = puVar8 + 3;
              puVar8[2] = uVar1 | puVar8[2] & 0xff00;
              if (uVar12 == 3) {
                iVar19 = 0x1d;
              }
              else {
                puVar6 = puVar8 + 4;
                puVar8[3] = uVar1 | puVar8[3] & 0xff00;
                if (uVar12 == 4) {
                  iVar19 = 0x1c;
                }
                else {
                  puVar6 = puVar8 + 5;
                  puVar8[4] = uVar1 | puVar8[4] & 0xff00;
                  if (uVar12 == 5) {
                    iVar19 = 0x1b;
                  }
                  else {
                    puVar6 = puVar8 + 6;
                    puVar8[5] = uVar1 | puVar8[5] & 0xff00;
                    if (uVar12 == 6) {
                      iVar19 = 0x1a;
                    }
                    else {
                      puVar6 = puVar8 + 7;
                      iVar19 = 0x19;
                      puVar8[6] = uVar1 | puVar8[6] & 0xff00;
                    }
                  }
                }
              }
            }
          }
          iVar20 = 0x20 - uVar12;
          iVar17 = 3;
          iVar18 = 0x18;
        }
        puVar13 = puVar8 + uVar12;
        auVar21._4_4_ = CONCAT22(uVar1,uVar1);
        auVar21._0_4_ = CONCAT22(uVar1,uVar1);
        auVar21._8_8_ = 0;
        auVar21 = auVar21 & auVar21 << 0x40;
        auVar22 = SIMDExpandImmediate(1,9,0xff);
        auVar23 = SIMDExpandImmediate(1,9,0xff);
        auVar2 = SIMDExpandImmediate(1,9,0xff);
        auVar24 = *(undefined (*) [16])puVar13 & ~auVar22 | auVar21;
        auVar23 = *(undefined (*) [16])(puVar13 + 8) & ~auVar23 | auVar21;
        auVar22 = *(undefined (*) [16])(puVar13 + 0x10) & ~auVar2 | auVar21;
        *(longlong *)puVar13 = auVar24._0_8_;
        *(longlong *)(puVar13 + 4) = auVar24._8_8_;
        *(longlong *)(puVar13 + 8) = auVar23._0_8_;
        *(longlong *)(puVar13 + 0xc) = auVar23._8_8_;
        *(longlong *)(puVar13 + 0x10) = auVar22._0_8_;
        *(longlong *)(puVar13 + 0x14) = auVar22._8_8_;
        if (iVar17 != 3) {
          auVar22 = SIMDExpandImmediate(1,9,0xff);
          auVar21 = *(undefined (*) [16])(puVar13 + 0x18) & ~auVar22 | auVar21;
          *(longlong *)(puVar13 + 0x18) = auVar21._0_8_;
          *(longlong *)(puVar13 + 0x1c) = auVar21._8_8_;
        }
        iVar19 = iVar19 - iVar18;
        if ((((iVar20 != iVar18) && (puVar6[iVar18] = uVar1 | puVar6[iVar18] & 0xff00, iVar19 != 1))
            && (puVar6[iVar18 + 1] = uVar1 | puVar6[iVar18 + 1] & 0xff00, iVar19 != 2)) &&
           (((puVar6[iVar18 + 2] = uVar1 | puVar6[iVar18 + 2] & 0xff00, iVar19 != 3 &&
             (puVar6[iVar18 + 3] = uVar1 | puVar6[iVar18 + 3] & 0xff00, iVar19 != 4)) &&
            ((puVar6[iVar18 + 4] = uVar1 | puVar6[iVar18 + 4] & 0xff00, iVar19 != 5 &&
             (puVar6[iVar18 + 5] = uVar1 | puVar6[iVar18 + 5] & 0xff00, iVar19 != 6)))))) {
          puVar6[iVar18 + 6] = uVar1 | puVar6[iVar18 + 6] & 0xff00;
        }
        iVar16 = iVar16 + -1;
        puVar8 = puVar8 + 0x20;
      } while (iVar16 != -1);
      memset(this->NToPlB,0,0x100);
      this->NToPlB[5] = '@';
      this->NToPlB[6] = ' ';
      this->NToPlB[0] = 0xe0;
      this->NToPlB[1] = 0xc0;
      this->NToPlB[2] = 0xa0;
      this->NToPlB[3] = 0x80;
      this->NToPlB[4] = '`';
      uVar15 = this->ChSetB[uVar9 & 0xff] + 1;
      uVar12 = this->ChSetB[uVar9 & 0xff] & 0xff;
      bVar3 = this->NToPlB[uVar12];
      this->NToPlB[uVar12] = bVar3 + 1;
    } while ((uVar15 & 0xff) == 0);
  }
  this->ChSetB[uVar9] = this->ChSetB[bVar3];
  this->ChSetB[bVar3] = (ushort)uVar15;
  uVar5 = BitInput::fgetbits(this_00);
  uVar9 = (uVar15 & 0xff00 | uVar5 >> 8) >> 1;
  BitInput::faddbits(this_00,7);
  uVar12 = this->AvrLn3;
  if (uVar7 == 0) {
LAB_080eff5c:
    uVar15 = this->MaxDist3;
LAB_080eff60:
    if (uVar9 < uVar15) {
      uVar15 = uVar4 + 3;
      goto LAB_080eff6c;
    }
  }
  else {
    if (uVar4 != 0) {
      if (uVar12 == 0) goto LAB_080eff5c;
      uVar15 = this->MaxDist3;
LAB_080f00a0:
      this->AvrLn3 = uVar12 - 1;
      goto LAB_080eff60;
    }
    uVar15 = this->MaxDist3;
    if (uVar9 <= uVar15) {
      this->AvrLn3 = (uVar12 + 1) - (uVar12 + 1 >> 8);
      goto LAB_080eff60;
    }
    if (uVar12 != 0) goto LAB_080f00a0;
  }
  uVar15 = uVar4 + 4;
LAB_080eff6c:
  if (uVar9 < 0x101) {
    uVar15 = uVar15 + 8;
  }
  if (uVar12 < 0xb1) {
    uVar4 = 0x2001;
    if (uVar10 < 0x40 && 0x29ff < this->AvrPlc) {
      uVar4 = 0x7f00;
    }
  }
  else {
    uVar4 = 0x7f00;
  }
  uVar7 = this->OldDistPtr;
  this->MaxDist3 = uVar4;
  uVar10 = *(uint *)&this->DestUnpSize;
  iVar19 = *(int *)((int)&this->DestUnpSize + 4);
  iVar16 = uVar15 - 1;
  this->OldDist[uVar7] = uVar9;
  this->OldDistPtr = uVar7 + 1 & 3;
  this->LastLength = uVar15;
  this->LastDist = uVar9;
  *(uint *)&this->DestUnpSize = uVar10 - uVar15;
  *(uint *)((int)&this->DestUnpSize + 4) = iVar19 - (uint)(uVar10 < uVar15);
  if (uVar15 != 0) {
    sVar14 = this->UnpPtr;
    uVar10 = this->MaxWinMask;
    do {
      iVar16 = iVar16 + -1;
      this->Window[sVar14] = this->Window[uVar10 & sVar14 - uVar9];
      uVar10 = this->MaxWinMask;
      sVar14 = this->UnpPtr + 1 & uVar10;
      this->UnpPtr = sVar14;
    } while (iVar16 != -1);
  }
  return;
}


