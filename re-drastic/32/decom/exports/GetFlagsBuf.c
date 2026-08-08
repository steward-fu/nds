/*
 * Ghidra decompilation
 *
 * Function : GetFlagsBuf
 * Address  : 080f074c
 * Program  : drastic
 */


/* DWARF original prototype: void GetFlagsBuf(Unpack * this) */

void __thiscall Unpack::GetFlagsBuf(Unpack *this)

{
  undefined auVar1 [16];
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint FlagsPlace;
  ushort *puVar5;
  ushort uVar6;
  ushort *puVar8;
  uint Flags;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  uint uVar7;
  
  uVar4 = BitInput::fgetbits(&this->Inp);
  uVar4 = DecodeNum(this,uVar4,5,DecHf2,PosHf2);
  uVar3 = this->ChSetC[uVar4];
  uVar7 = uVar3 + 1;
  uVar6 = (ushort)uVar7;
  uVar10 = uVar3 & 0xff;
  this->FlagBuf = (uint)(uVar3 >> 8);
  bVar2 = this->NToPlC[uVar10];
  this->NToPlC[uVar10] = bVar2 + 1;
  if ((uVar7 & 0xff) == 0) {
    do {
      iVar11 = 7;
      puVar8 = this->ChSetC;
      do {
        uVar3 = (ushort)iVar11;
        uVar10 = -((uint)((int)puVar8 << 0x1d) >> 0x1e) & 7;
        if (uVar10 == 0) {
          iVar15 = 0x20;
          iVar12 = 4;
          puVar5 = puVar8;
          iVar13 = iVar15;
          iVar14 = iVar15;
        }
        else {
          puVar5 = puVar8 + 1;
          *puVar8 = uVar3 | *puVar8 & 0xff00;
          if (uVar10 == 1) {
            iVar14 = 0x1f;
          }
          else {
            puVar5 = puVar8 + 2;
            puVar8[1] = uVar3 | puVar8[1] & 0xff00;
            if (uVar10 == 2) {
              iVar14 = 0x1e;
            }
            else {
              puVar5 = puVar8 + 3;
              puVar8[2] = uVar3 | puVar8[2] & 0xff00;
              if (uVar10 == 3) {
                iVar14 = 0x1d;
              }
              else {
                puVar5 = puVar8 + 4;
                puVar8[3] = uVar3 | puVar8[3] & 0xff00;
                if (uVar10 == 4) {
                  iVar14 = 0x1c;
                }
                else {
                  puVar5 = puVar8 + 5;
                  puVar8[4] = uVar3 | puVar8[4] & 0xff00;
                  if (uVar10 == 5) {
                    iVar14 = 0x1b;
                  }
                  else {
                    puVar5 = puVar8 + 6;
                    puVar8[5] = uVar3 | puVar8[5] & 0xff00;
                    if (uVar10 == 6) {
                      iVar14 = 0x1a;
                    }
                    else {
                      puVar5 = puVar8 + 7;
                      iVar14 = 0x19;
                      puVar8[6] = uVar3 | puVar8[6] & 0xff00;
                    }
                  }
                }
              }
            }
          }
          iVar15 = 0x20 - uVar10;
          iVar12 = 3;
          iVar13 = 0x18;
        }
        puVar9 = puVar8 + uVar10;
        auVar16._4_4_ = CONCAT22(uVar3,uVar3);
        auVar16._0_4_ = CONCAT22(uVar3,uVar3);
        auVar16._8_8_ = 0;
        auVar16 = auVar16 & auVar16 << 0x40;
        auVar17 = SIMDExpandImmediate(1,9,0xff);
        auVar18 = SIMDExpandImmediate(1,9,0xff);
        auVar1 = SIMDExpandImmediate(1,9,0xff);
        auVar19 = *(undefined (*) [16])puVar9 & ~auVar17 | auVar16;
        auVar18 = *(undefined (*) [16])(puVar9 + 8) & ~auVar18 | auVar16;
        auVar17 = *(undefined (*) [16])(puVar9 + 0x10) & ~auVar1 | auVar16;
        *(longlong *)puVar9 = auVar19._0_8_;
        *(longlong *)(puVar9 + 4) = auVar19._8_8_;
        *(longlong *)(puVar9 + 8) = auVar18._0_8_;
        *(longlong *)(puVar9 + 0xc) = auVar18._8_8_;
        *(longlong *)(puVar9 + 0x10) = auVar17._0_8_;
        *(longlong *)(puVar9 + 0x14) = auVar17._8_8_;
        if (iVar12 != 3) {
          auVar17 = SIMDExpandImmediate(1,9,0xff);
          auVar16 = *(undefined (*) [16])(puVar9 + 0x18) & ~auVar17 | auVar16;
          *(longlong *)(puVar9 + 0x18) = auVar16._0_8_;
          *(longlong *)(puVar9 + 0x1c) = auVar16._8_8_;
        }
        iVar14 = iVar14 - iVar13;
        if ((((iVar15 != iVar13) && (puVar5[iVar13] = uVar3 | puVar5[iVar13] & 0xff00, iVar14 != 1))
            && (puVar5[iVar13 + 1] = uVar3 | puVar5[iVar13 + 1] & 0xff00, iVar14 != 2)) &&
           (((puVar5[iVar13 + 2] = uVar3 | puVar5[iVar13 + 2] & 0xff00, iVar14 != 3 &&
             (puVar5[iVar13 + 3] = uVar3 | puVar5[iVar13 + 3] & 0xff00, iVar14 != 4)) &&
            ((puVar5[iVar13 + 4] = uVar3 | puVar5[iVar13 + 4] & 0xff00, iVar14 != 5 &&
             (puVar5[iVar13 + 5] = uVar3 | puVar5[iVar13 + 5] & 0xff00, iVar14 != 6)))))) {
          puVar5[iVar13 + 6] = uVar3 | puVar5[iVar13 + 6] & 0xff00;
        }
        iVar11 = iVar11 + -1;
        puVar8 = puVar8 + 0x20;
      } while (iVar11 != -1);
      memset(this->NToPlC,0,0x100);
      this->NToPlC[6] = ' ';
      this->NToPlC[0] = 0xe0;
      this->NToPlC[4] = '`';
      this->NToPlC[1] = 0xc0;
      this->NToPlC[2] = 0xa0;
      this->NToPlC[3] = 0x80;
      this->NToPlC[5] = '@';
      uVar3 = this->ChSetC[uVar4];
      uVar7 = uVar3 + 1;
      uVar6 = (ushort)uVar7;
      uVar10 = uVar3 & 0xff;
      this->FlagBuf = (uint)(uVar3 >> 8);
      bVar2 = this->NToPlC[uVar10];
      this->NToPlC[uVar10] = bVar2 + 1;
    } while ((uVar7 & 0xff) == 0);
  }
  this->ChSetC[uVar4] = this->ChSetC[bVar2];
  this->ChSetC[bVar2] = uVar6;
  return;
}


