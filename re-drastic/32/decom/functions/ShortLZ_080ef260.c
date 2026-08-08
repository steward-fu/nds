/*
 * Ghidra decompilation
 *
 * Function : ShortLZ
 * Address  : 080ef260
 * Program  : drastic
 */


/* DWARF original prototype: void ShortLZ(Unpack * this) */

void __thiscall Unpack::ShortLZ(Unpack *this)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint BitField;
  int DistancePlace;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  uint SaveLength;
  BitInput *this_00;
  uint uVar9;
  uint Distance;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  
  this_00 = &this->Inp;
  this->NumHuf = 0;
  uVar3 = BitInput::fgetbits(this_00);
  if (this->LCount == 2) {
    BitInput::faddbits(this_00,1);
    if (0x7fff < uVar3) {
      uVar3 = this->LastLength;
      uVar8 = *(uint *)&this->DestUnpSize;
      iVar6 = *(int *)((int)&this->DestUnpSize + 4);
      uVar5 = this->LastDist;
      iVar11 = uVar3 - 1;
      *(uint *)&this->DestUnpSize = uVar8 - uVar3;
      *(uint *)((int)&this->DestUnpSize + 4) = iVar6 - (uint)(uVar8 < uVar3);
      if (uVar3 == 0) {
        return;
      }
      sVar7 = this->UnpPtr;
      uVar3 = this->MaxWinMask;
      do {
        iVar11 = iVar11 + -1;
        this->Window[sVar7] = this->Window[uVar3 & sVar7 - uVar5];
        uVar3 = this->MaxWinMask;
        sVar7 = this->UnpPtr + 1 & uVar3;
        this->UnpPtr = sVar7;
      } while (iVar11 != -1);
      return;
    }
    uVar3 = uVar3 << 1;
    this->LCount = 0;
  }
  uVar3 = uVar3 >> 8;
  if (this->AvrLn1 < 0x25) {
    uVar8 = uVar3 & 0xffffff80;
    if (uVar8 != 0) {
      uVar5 = this->Buf60 + 3;
      if (((uVar3 ^ 0xa0) & ~(0xff >> (uVar5 & 0xff))) == 0) {
        uVar8 = 1;
        goto LAB_080ef3a0;
      }
      if ((uVar3 & 0xfffff0) == 0xd0) {
        uVar8 = 2;
      }
      else if ((uVar3 & 0xfffff0) == 0xe0) {
        uVar8 = 3;
      }
      else if ((uVar3 & 0xfffff8) == 0xf0) {
        uVar8 = 4;
      }
      else if ((uVar3 & 0xfffffc) == 0xf8) {
        uVar8 = 5;
      }
      else if ((uVar3 & 0xfffffe) == 0xfc) {
        uVar8 = 6;
      }
      else if (uVar3 == 0xfe) {
        uVar8 = 7;
      }
      else if (uVar3 == 0xff) {
        uVar8 = 8;
      }
      else if ((uVar3 & 0xfffff0) == 0xc0) {
        uVar8 = 9;
      }
      else if ((uVar3 & 0xfffff0) == 0x80) {
        uVar8 = 10;
      }
      else if ((uVar3 & 0xfffff8) == 0x90) {
        uVar8 = 0xb;
      }
      else if ((uVar3 & 0xfffffc) == 0x98) {
        uVar8 = 0xc;
      }
      else if ((uVar3 & 0xfffffc) == 0x9c) {
        uVar8 = 0xd;
      }
      else {
        uVar8 = 0xe;
      }
    }
    BitInput::faddbits(this_00,ShortLZ::ShortLen1[uVar8]);
  }
  else {
    uVar8 = uVar3 & 0xffffffc0;
    if (uVar8 != 0) {
      if ((uVar3 & 0xffffe0) == 0x40) {
        uVar8 = 1;
      }
      else if ((uVar3 & 0xffffe0) == 0x60) {
        uVar8 = 2;
      }
      else {
        uVar5 = this->Buf60 + 3;
        if (((uVar3 ^ 0xa0) & ~(0xff >> (uVar5 & 0xff))) == 0) {
          uVar8 = 3;
          goto LAB_080ef3a0;
        }
        if ((uVar3 & 0xfffff0) == 0xd0) {
          uVar8 = 4;
        }
        else if ((uVar3 & 0xfffff0) == 0xe0) {
          uVar8 = 5;
        }
        else if ((uVar3 & 0xfffff8) == 0xf0) {
          uVar8 = 6;
        }
        else if ((uVar3 & 0xfffffc) == 0xf8) {
          uVar8 = 7;
        }
        else if ((uVar3 & 0xfffffc) == 0xfc) {
          uVar8 = 8;
        }
        else if ((uVar3 & 0xfffff0) == 0xc0) {
          uVar8 = 9;
        }
        else if ((uVar3 & 0xfffff0) == 0x80) {
          uVar8 = 10;
        }
        else if ((uVar3 & 0xfffff8) == 0x90) {
          uVar8 = 0xb;
        }
        else if ((uVar3 & 0xfffffc) == 0x98) {
          uVar8 = 0xc;
        }
        else if ((uVar3 & 0xfffffc) == 0x9c) {
          uVar8 = 0xd;
        }
        else {
          uVar8 = 0xe;
        }
      }
    }
    uVar5 = ShortLZ::ShortLen2[uVar8];
LAB_080ef3a0:
    BitInput::faddbits(this_00,uVar5);
  }
  if (uVar8 < 9) {
    this->LCount = 0;
    uVar3 = uVar8 + this->AvrLn1;
    this->AvrLn1 = uVar3 - (uVar3 >> 4);
    uVar5 = BitInput::fgetbits(this_00);
    uVar5 = DecodeNum(this,uVar5,5,DecHf2,PosHf2);
    uVar3 = uVar5 & 0xff;
    uVar1 = this->ChSetA[uVar3];
    if (uVar3 != 0) {
      uVar2 = this->ChSetA[uVar3 - 1];
      this->ChSetA[uVar3 - 1] = uVar1;
      this->ChSetA[uVar3] = uVar2;
    }
    uVar5 = this->OldDistPtr;
    uVar4 = uVar1 + 1;
    uVar3 = *(uint *)&this->DestUnpSize;
    iVar6 = *(int *)((int)&this->DestUnpSize + 4);
    sVar7 = this->UnpPtr;
    uVar12 = uVar8 + 2;
    uVar9 = this->MaxWinMask;
    this->OldDist[uVar5] = uVar4;
    pbVar10 = this->Window;
    this->OldDistPtr = uVar5 + 1 & 3;
    this->LastLength = uVar12;
    this->LastDist = uVar4;
    *(uint *)&this->DestUnpSize = uVar3 - uVar12;
    *(uint *)((int)&this->DestUnpSize + 4) = iVar6 - (uint)(uVar3 < uVar12);
    pbVar10[sVar7] = pbVar10[uVar9 & sVar7 - uVar4];
    uVar3 = this->UnpPtr + 1 & this->MaxWinMask;
    this->UnpPtr = uVar3;
    this->Window[uVar3] = this->Window[this->MaxWinMask & uVar3 - uVar4];
    uVar3 = this->UnpPtr + 1 & this->MaxWinMask;
    this->UnpPtr = uVar3;
    if (uVar8 != 0) {
      this->Window[uVar3] = this->Window[this->MaxWinMask & uVar3 - uVar4];
      uVar3 = this->UnpPtr + 1 & this->MaxWinMask;
      this->UnpPtr = uVar3;
      if (uVar8 != 1) {
        this->Window[uVar3] = this->Window[this->MaxWinMask & uVar3 - uVar4];
        uVar3 = this->UnpPtr + 1 & this->MaxWinMask;
        this->UnpPtr = uVar3;
        if (uVar8 != 2) {
          this->Window[uVar3] = this->Window[this->MaxWinMask & uVar3 - uVar4];
          uVar3 = this->UnpPtr + 1 & this->MaxWinMask;
          this->UnpPtr = uVar3;
          if (uVar8 != 3) {
            this->Window[uVar3] = this->Window[this->MaxWinMask & uVar3 - uVar4];
            uVar3 = this->UnpPtr + 1 & this->MaxWinMask;
            this->UnpPtr = uVar3;
            if (uVar8 != 4) {
              this->Window[uVar3] = this->Window[this->MaxWinMask & uVar3 - uVar4];
              uVar3 = this->UnpPtr + 1 & this->MaxWinMask;
              this->UnpPtr = uVar3;
              if (uVar8 != 5) {
                this->Window[uVar3] = this->Window[this->MaxWinMask & uVar3 - uVar4];
                uVar3 = this->UnpPtr + 1 & this->MaxWinMask;
                this->UnpPtr = uVar3;
                if (uVar8 != 6) {
                  this->Window[uVar3] = this->Window[this->MaxWinMask & uVar3 - uVar4];
                  uVar3 = this->UnpPtr + 1 & this->MaxWinMask;
                  this->UnpPtr = uVar3;
                  if (uVar8 != 7) {
                    this->Window[uVar3] = this->Window[uVar3 - uVar4 & this->MaxWinMask];
                    this->UnpPtr = this->MaxWinMask & this->UnpPtr + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (uVar8 == 9) {
    uVar8 = this->LastLength;
    uVar3 = *(uint *)&this->DestUnpSize;
    iVar6 = *(int *)((int)&this->DestUnpSize + 4);
    uVar5 = this->LastDist;
    iVar11 = uVar8 - 1;
    this->LCount = this->LCount + 1;
    *(uint *)&this->DestUnpSize = uVar3 - uVar8;
    *(uint *)((int)&this->DestUnpSize + 4) = iVar6 - (uint)(uVar3 < uVar8);
    if (uVar8 != 0) {
      sVar7 = this->UnpPtr;
      uVar3 = this->MaxWinMask;
      do {
        iVar11 = iVar11 + -1;
        this->Window[sVar7] = this->Window[uVar3 & sVar7 - uVar5];
        uVar3 = this->MaxWinMask;
        sVar7 = this->UnpPtr + 1 & uVar3;
        this->UnpPtr = sVar7;
      } while (iVar11 != -1);
    }
  }
  else if (uVar8 == 0xe) {
    this->LCount = 0;
    uVar5 = BitInput::fgetbits(this_00);
    uVar5 = DecodeNum(this,uVar5,3,DecL2,PosL2);
    uVar4 = BitInput::fgetbits(this_00);
    BitInput::faddbits(this_00,0xf);
    uVar9 = uVar5 + 5;
    uVar3 = *(uint *)&this->DestUnpSize;
    iVar6 = *(int *)((int)&this->DestUnpSize + 4);
    uVar8 = uVar4 >> 1 | 0x8000;
    iVar11 = uVar5 + 4;
    this->LastLength = uVar9;
    this->LastDist = uVar8;
    *(uint *)&this->DestUnpSize = uVar3 - uVar9;
    *(uint *)((int)&this->DestUnpSize + 4) = iVar6 - (uint)(uVar3 < uVar9);
    if (uVar9 != 0) {
      sVar7 = this->UnpPtr;
      uVar3 = this->MaxWinMask;
      do {
        iVar11 = iVar11 + -1;
        this->Window[sVar7] = this->Window[uVar3 & sVar7 - uVar8];
        uVar3 = this->MaxWinMask;
        sVar7 = this->UnpPtr + 1 & uVar3;
        this->UnpPtr = sVar7;
      } while (iVar11 != -1);
    }
  }
  else {
    uVar9 = this->OldDist[(this->OldDistPtr + 9) - uVar8 & 3];
    this->LCount = 0;
    uVar5 = BitInput::fgetbits(this_00);
    uVar5 = DecodeNum(this,uVar5,2,DecL1,PosL1);
    uVar3 = uVar5 + 2;
    if (uVar5 == 0xff && uVar8 == 10) {
      this->Buf60 = this->Buf60 ^ 1;
    }
    else {
      if (0x100 < uVar9) {
        uVar3 = uVar5 + 3;
      }
      uVar5 = this->OldDistPtr;
      uVar8 = *(uint *)&this->DestUnpSize;
      iVar6 = *(int *)((int)&this->DestUnpSize + 4);
      if (this->MaxDist3 <= uVar9) {
        uVar3 = uVar3 + 1;
      }
      iVar11 = uVar3 - 1;
      this->OldDist[uVar5] = uVar9;
      this->OldDistPtr = uVar5 + 1 & 3;
      this->LastLength = uVar3;
      this->LastDist = uVar9;
      *(uint *)&this->DestUnpSize = uVar8 - uVar3;
      *(uint *)((int)&this->DestUnpSize + 4) = iVar6 - (uint)(uVar8 < uVar3);
      if (uVar3 != 0) {
        sVar7 = this->UnpPtr;
        uVar3 = this->MaxWinMask;
        do {
          iVar11 = iVar11 + -1;
          this->Window[sVar7] = this->Window[uVar3 & sVar7 - uVar9];
          uVar3 = this->MaxWinMask;
          sVar7 = this->UnpPtr + 1 & uVar3;
          this->UnpPtr = sVar7;
        } while (iVar11 != -1);
      }
    }
  }
  return;
}


