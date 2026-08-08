/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack10CopyStringEjj
 * Address  : 08102454
 * Program  : drastic
 */


/* DWARF original prototype: void CopyString(Unpack * this, uint Length, uint Distance) */

void __thiscall Unpack::CopyString(Unpack *this,uint Length,uint Distance)

{
  int iVar1;
  undefined8 *puVar2;
  byte *Dest;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  size_t SrcPtr;
  uint uVar9;
  undefined8 *puVar10;
  byte *Src;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar5 = this->UnpPtr;
  uVar8 = uVar5 - Distance;
  uVar9 = this->MaxWinSize - 0x1001;
  if (uVar9 <= uVar5 || uVar9 <= uVar8) {
    if (Length == 0) {
      return;
    }
    uVar3 = this->MaxWinMask;
    uVar9 = uVar8 + Length;
    do {
      uVar3 = uVar3 & uVar8;
      uVar8 = uVar8 + 1;
      this->Window[uVar5] = this->Window[uVar3];
      uVar3 = this->MaxWinMask;
      uVar5 = this->UnpPtr + 1 & uVar3;
      this->UnpPtr = uVar5;
    } while (uVar8 != uVar9);
    return;
  }
  this->UnpPtr = uVar5 + Length;
  puVar10 = (undefined8 *)(this->Window + uVar8);
  puVar2 = (undefined8 *)(this->Window + uVar5);
  if (Length < 8) goto LAB_08102580;
  uVar7 = uVar5 + 0x80;
  uVar9 = Length - 8 >> 3;
  uVar3 = uVar7 - Distance;
  bVar12 = SBORROW4(uVar7,uVar8);
  iVar1 = uVar7 - uVar8;
  bVar11 = uVar7 == uVar8;
  if ((int)uVar8 < (int)uVar7) {
    bVar12 = SBORROW4(uVar3,uVar5);
    iVar1 = uVar3 - uVar5;
    bVar11 = uVar3 == uVar5;
  }
  uVar8 = uVar9 + 1;
  uVar5 = Length;
  puVar4 = puVar10;
  puVar6 = puVar2;
  if (uVar8 < 2 || !bVar11 && iVar1 < 0 == bVar12) {
    do {
      uVar5 = uVar5 - 8;
      *(byte *)puVar6 = *(byte *)puVar4;
      *(byte *)((int)puVar6 + 1) = *(byte *)((int)puVar4 + 1);
      *(byte *)((int)puVar6 + 2) = *(byte *)((int)puVar4 + 2);
      *(byte *)((int)puVar6 + 3) = *(byte *)((int)puVar4 + 3);
      *(byte *)((int)puVar6 + 4) = *(byte *)((int)puVar4 + 4);
      *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar4 + 5);
      *(byte *)((int)puVar6 + 6) = *(byte *)((int)puVar4 + 6);
      *(byte *)((int)puVar6 + 7) = *(byte *)((int)puVar4 + 7);
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (7 < uVar5);
  }
  else {
    uVar5 = (uVar9 - 1 >> 1) + 1;
    if (7 < Length - 8) {
      uVar9 = 0;
      puVar4 = puVar2;
      puVar6 = puVar10;
      do {
        uVar13 = *puVar6;
        uVar14 = puVar6[1];
        uVar9 = uVar9 + 1;
        puVar6 = puVar6 + 2;
        *puVar4 = uVar13;
        puVar4[1] = uVar14;
        puVar4 = puVar4 + 2;
      } while (uVar9 < uVar5);
      puVar4 = puVar10 + uVar5 * 2;
      puVar6 = puVar2 + uVar5 * 2;
      if (uVar8 == uVar5 * 2) goto LAB_08102570;
    }
    *(byte *)puVar6 = *(byte *)puVar4;
    *(byte *)((int)puVar6 + 1) = *(byte *)((int)puVar4 + 1);
    *(byte *)((int)puVar6 + 2) = *(byte *)((int)puVar4 + 2);
    *(byte *)((int)puVar6 + 3) = *(byte *)((int)puVar4 + 3);
    *(byte *)((int)puVar6 + 4) = *(byte *)((int)puVar4 + 4);
    *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar4 + 5);
    *(byte *)((int)puVar6 + 6) = *(byte *)((int)puVar4 + 6);
    *(byte *)((int)puVar6 + 7) = *(byte *)((int)puVar4 + 7);
  }
LAB_08102570:
  Length = Length & 7;
  puVar10 = puVar10 + uVar8;
  puVar2 = puVar2 + uVar8;
LAB_08102580:
  if ((((Length != 0) && (*(byte *)puVar2 = *(byte *)puVar10, Length != 1)) &&
      (*(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar10 + 1), Length != 2)) &&
     (((*(byte *)((int)puVar2 + 2) = *(byte *)((int)puVar10 + 2), Length != 3 &&
       (*(byte *)((int)puVar2 + 3) = *(byte *)((int)puVar10 + 3), Length != 4)) &&
      ((*(byte *)((int)puVar2 + 4) = *(byte *)((int)puVar10 + 4), Length != 5 &&
       (*(byte *)((int)puVar2 + 5) = *(byte *)((int)puVar10 + 5), Length == 7)))))) {
    *(byte *)((int)puVar2 + 6) = *(byte *)((int)puVar10 + 6);
  }
  return;
}


