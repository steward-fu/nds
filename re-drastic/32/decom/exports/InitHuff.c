/*
 * Ghidra decompilation
 *
 * Function : InitHuff
 * Address  : 080ee9a4
 * Program  : drastic
 */


/* DWARF original prototype: void InitHuff(Unpack * this) */

void __thiscall Unpack::InitHuff(Unpack *this)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  
  auVar12 = SIMDExpandImmediate(0,0,8);
  this->ChSetB[0] = 0;
  auVar14 = SIMDExpandImmediate(0,0,4);
  this->ChSet[0] = 0;
  this->ChSetA[0] = 0;
  this->ChSetC[0] = 0;
  this->ChSetB[1] = 0x100;
  this->ChSet[1] = 0x100;
  auVar11._8_8_ = 0xa00000009;
  auVar11._0_8_ = 0x800000007;
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
  puVar3 = this->ChSetB + 7;
  puVar2 = this->ChSet + 7;
  do {
    auVar13 = VectorAdd(auVar11,auVar14,4);
    puVar4 = puVar2 + 8;
    auVar15._0_8_ = VectorCopyNarrow(auVar11,4);
    auVar15._8_8_ = VectorCopyNarrow(auVar13,4);
    auVar11 = VectorAdd(auVar11,auVar12,4);
    auVar13 = FloatVectorNeg(auVar15,1,2);
    auVar16 = VectorShiftLeft(auVar15,8,0x10,0);
    auVar13 = VectorShiftLeft(auVar13,8,0x10,0);
    *(longlong *)puVar3 = auVar16._0_8_;
    *(longlong *)(puVar3 + 4) = auVar16._8_8_;
    *(longlong *)puVar2 = auVar16._0_8_;
    *(longlong *)(puVar2 + 4) = auVar16._8_8_;
    *(undefined8 *)(puVar2 + 0x100) = auVar15._0_8_;
    *(undefined8 *)(puVar2 + 0x104) = auVar15._8_8_;
    *(longlong *)(puVar3 + 0x100) = auVar13._0_8_;
    *(longlong *)(puVar3 + 0x104) = auVar13._8_8_;
    puVar3 = puVar3 + 8;
    puVar2 = puVar4;
  } while (this->ChSet + 0xff != puVar4);
  this->ChSetB[0xff] = 0xff00;
  this->ChSet[0xff] = 0xff00;
  this->ChSetC[0xff] = 0x100;
  this->ChSetA[0xff] = 0xff;
  memset(this->NToPl,0,0x100);
  memset(this->NToPlB,0,0x100);
  memset(this->NToPlC,0,0x100);
  iVar10 = 7;
  puVar3 = this->ChSetB;
  do {
    uVar1 = (ushort)iVar10;
    uVar5 = -((uint)((int)puVar3 << 0x1d) >> 0x1e) & 7;
    if (uVar5 == 0) {
      iVar9 = 0x20;
      iVar6 = 4;
      puVar2 = puVar3;
      iVar8 = iVar9;
      iVar7 = iVar9;
    }
    else {
      puVar2 = puVar3 + 1;
      *puVar3 = uVar1 | *puVar3 & 0xff00;
      if (uVar5 == 1) {
        iVar8 = 0x1f;
      }
      else {
        puVar2 = puVar3 + 2;
        puVar3[1] = uVar1 | puVar3[1] & 0xff00;
        if (uVar5 == 2) {
          iVar8 = 0x1e;
        }
        else {
          puVar2 = puVar3 + 3;
          puVar3[2] = uVar1 | puVar3[2] & 0xff00;
          if (uVar5 == 3) {
            iVar8 = 0x1d;
          }
          else {
            puVar2 = puVar3 + 4;
            puVar3[3] = uVar1 | puVar3[3] & 0xff00;
            if (uVar5 == 4) {
              iVar8 = 0x1c;
            }
            else {
              puVar2 = puVar3 + 5;
              puVar3[4] = uVar1 | puVar3[4] & 0xff00;
              if (uVar5 == 5) {
                iVar8 = 0x1b;
              }
              else {
                puVar2 = puVar3 + 6;
                puVar3[5] = uVar1 | puVar3[5] & 0xff00;
                if (uVar5 == 6) {
                  iVar8 = 0x1a;
                }
                else {
                  puVar2 = puVar3 + 7;
                  iVar8 = 0x19;
                  puVar3[6] = uVar1 | puVar3[6] & 0xff00;
                }
              }
            }
          }
        }
      }
      iVar9 = 0x20 - uVar5;
      iVar7 = 0x18;
      iVar6 = 3;
    }
    puVar4 = puVar3 + uVar5;
    auVar13._4_4_ = CONCAT22(uVar1,uVar1);
    auVar13._0_4_ = CONCAT22(uVar1,uVar1);
    auVar13._8_8_ = 0;
    auVar13 = auVar13 & auVar13 << 0x40;
    auVar12 = SIMDExpandImmediate(1,9,0xff);
    auVar14 = SIMDExpandImmediate(1,9,0xff);
    auVar11 = SIMDExpandImmediate(1,9,0xff);
    auVar15 = *(undefined (*) [16])puVar4 & ~auVar12 | auVar13;
    auVar14 = *(undefined (*) [16])(puVar4 + 8) & ~auVar14 | auVar13;
    auVar12 = *(undefined (*) [16])(puVar4 + 0x10) & ~auVar11 | auVar13;
    *(longlong *)puVar4 = auVar15._0_8_;
    *(longlong *)(puVar4 + 4) = auVar15._8_8_;
    *(longlong *)(puVar4 + 8) = auVar14._0_8_;
    *(longlong *)(puVar4 + 0xc) = auVar14._8_8_;
    *(longlong *)(puVar4 + 0x10) = auVar12._0_8_;
    *(longlong *)(puVar4 + 0x14) = auVar12._8_8_;
    if (iVar6 != 3) {
      auVar12 = SIMDExpandImmediate(1,9,0xff);
      auVar13 = *(undefined (*) [16])(puVar4 + 0x18) & ~auVar12 | auVar13;
      *(longlong *)(puVar4 + 0x18) = auVar13._0_8_;
      *(longlong *)(puVar4 + 0x1c) = auVar13._8_8_;
    }
    iVar8 = iVar8 - iVar7;
    if ((((iVar9 != iVar7) && (puVar2[iVar7] = uVar1 | puVar2[iVar7] & 0xff00, iVar8 != 1)) &&
        (puVar2[iVar7 + 1] = uVar1 | puVar2[iVar7 + 1] & 0xff00, iVar8 != 2)) &&
       (((puVar2[iVar7 + 2] = uVar1 | puVar2[iVar7 + 2] & 0xff00, iVar8 != 3 &&
         (puVar2[iVar7 + 3] = uVar1 | puVar2[iVar7 + 3] & 0xff00, iVar8 != 4)) &&
        ((puVar2[iVar7 + 4] = uVar1 | puVar2[iVar7 + 4] & 0xff00, iVar8 != 5 &&
         (puVar2[iVar7 + 5] = uVar1 | puVar2[iVar7 + 5] & 0xff00, iVar8 != 6)))))) {
      puVar2[iVar7 + 6] = uVar1 | puVar2[iVar7 + 6] & 0xff00;
    }
    iVar10 = iVar10 + -1;
    puVar3 = puVar3 + 0x20;
  } while (iVar10 != -1);
  memset(this->NToPlB,0,0x100);
  this->NToPlB[5] = '@';
  this->NToPlB[0] = 0xe0;
  this->NToPlB[1] = 0xc0;
  this->NToPlB[2] = 0xa0;
  this->NToPlB[3] = 0x80;
  this->NToPlB[4] = '`';
  this->NToPlB[6] = ' ';
  return;
}


