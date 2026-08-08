/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack12CopyString20Ejj
 * Address  : 080f0ae8
 * Program  : drastic
 */


/* DWARF original prototype: void CopyString20(Unpack * this, uint Length, uint Distance) */

void __thiscall Unpack::CopyString20(Unpack *this,uint Length,uint Distance)

{
  undefined8 *puVar1;
  byte *Dest;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  size_t SrcPtr;
  undefined8 *puVar10;
  byte *Src;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar8 = this->OldDistPtr;
  uVar3 = this->UnpPtr;
  uVar5 = *(uint *)&this->DestUnpSize;
  iVar6 = *(int *)((int)&this->DestUnpSize + 4);
  uVar9 = uVar3 - Distance;
  this->OldDistPtr = uVar8 + 1;
  uVar7 = this->MaxWinSize - 0x1001;
  this->OldDist[uVar8 & 3] = Distance;
  this->LastLength = Length;
  this->LastDist = Distance;
  *(uint *)&this->DestUnpSize = uVar5 - Length;
  *(uint *)((int)&this->DestUnpSize + 4) = iVar6 - (uint)(uVar5 < Length);
  if (uVar7 <= uVar3 || uVar7 <= uVar9) {
    if (Length == 0) {
      return;
    }
    uVar7 = this->MaxWinMask;
    uVar5 = Length + uVar9;
    do {
      uVar7 = uVar7 & uVar9;
      uVar9 = uVar9 + 1;
      this->Window[uVar3] = this->Window[uVar7];
      uVar7 = this->MaxWinMask;
      uVar3 = this->UnpPtr + 1 & uVar7;
      this->UnpPtr = uVar3;
    } while (uVar9 != uVar5);
    return;
  }
  this->UnpPtr = Length + uVar3;
  puVar10 = (undefined8 *)(this->Window + uVar9);
  puVar1 = (undefined8 *)(this->Window + uVar3);
  if (Length < 8) goto LAB_080f0c4c;
  uVar8 = uVar3 + 0x80;
  uVar5 = Length - 8 >> 3;
  uVar7 = uVar8 - Distance;
  bVar12 = SBORROW4(uVar8,uVar9);
  iVar6 = uVar8 - uVar9;
  bVar11 = uVar8 == uVar9;
  if ((int)uVar9 < (int)uVar8) {
    bVar12 = SBORROW4(uVar7,uVar3);
    iVar6 = uVar7 - uVar3;
    bVar11 = uVar7 == uVar3;
  }
  uVar7 = uVar5 + 1;
  uVar3 = Length;
  puVar2 = puVar10;
  puVar4 = puVar1;
  if (uVar7 < 2 || !bVar11 && iVar6 < 0 == bVar12) {
    do {
      uVar3 = uVar3 - 8;
      *(byte *)puVar4 = *(byte *)puVar2;
      *(byte *)((int)puVar4 + 1) = *(byte *)((int)puVar2 + 1);
      *(byte *)((int)puVar4 + 2) = *(byte *)((int)puVar2 + 2);
      *(byte *)((int)puVar4 + 3) = *(byte *)((int)puVar2 + 3);
      *(byte *)((int)puVar4 + 4) = *(byte *)((int)puVar2 + 4);
      *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar2 + 5);
      *(byte *)((int)puVar4 + 6) = *(byte *)((int)puVar2 + 6);
      *(byte *)((int)puVar4 + 7) = *(byte *)((int)puVar2 + 7);
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (7 < uVar3);
  }
  else {
    uVar3 = (uVar5 - 1 >> 1) + 1;
    if (7 < Length - 8) {
      uVar5 = 0;
      puVar2 = puVar1;
      puVar4 = puVar10;
      do {
        uVar13 = *puVar4;
        uVar14 = puVar4[1];
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 2;
        *puVar2 = uVar13;
        puVar2[1] = uVar14;
        puVar2 = puVar2 + 2;
      } while (uVar5 < uVar3);
      puVar2 = puVar10 + uVar3 * 2;
      puVar4 = puVar1 + uVar3 * 2;
      if (uVar7 == uVar3 * 2) goto LAB_080f0c3c;
    }
    *(byte *)puVar4 = *(byte *)puVar2;
    *(byte *)((int)puVar4 + 1) = *(byte *)((int)puVar2 + 1);
    *(byte *)((int)puVar4 + 2) = *(byte *)((int)puVar2 + 2);
    *(byte *)((int)puVar4 + 3) = *(byte *)((int)puVar2 + 3);
    *(byte *)((int)puVar4 + 4) = *(byte *)((int)puVar2 + 4);
    *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar2 + 5);
    *(byte *)((int)puVar4 + 6) = *(byte *)((int)puVar2 + 6);
    *(byte *)((int)puVar4 + 7) = *(byte *)((int)puVar2 + 7);
  }
LAB_080f0c3c:
  Length = Length & 7;
  puVar10 = puVar10 + uVar7;
  puVar1 = puVar1 + uVar7;
LAB_080f0c4c:
  if ((((Length != 0) && (*(byte *)puVar1 = *(byte *)puVar10, Length != 1)) &&
      (*(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar10 + 1), Length != 2)) &&
     (((*(byte *)((int)puVar1 + 2) = *(byte *)((int)puVar10 + 2), Length != 3 &&
       (*(byte *)((int)puVar1 + 3) = *(byte *)((int)puVar10 + 3), Length != 4)) &&
      ((*(byte *)((int)puVar1 + 4) = *(byte *)((int)puVar10 + 4), Length != 5 &&
       (*(byte *)((int)puVar1 + 5) = *(byte *)((int)puVar10 + 5), Length == 7)))))) {
    *(byte *)((int)puVar1 + 6) = *(byte *)((int)puVar10 + 6);
  }
  return;
}


