/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead4GetVEv
 * Address  : 080e10a8
 * Program  : drastic
 */


/* DWARF original prototype: uint64 GetV(RawRead * this) */

uint64 __thiscall RawRead::GetV(RawRead *this)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  byte *pbVar8;
  bool bVar9;
  undefined8 uVar10;
  ulonglong in_d17;
  
  uVar3 = this->ReadPos;
  if (uVar3 < this->DataSize) {
    puVar7 = (this->Data).Buffer;
    iVar6 = 0;
    this->ReadPos = uVar3 + 1;
    bVar1 = puVar7[uVar3];
    pbVar8 = puVar7 + uVar3;
    uVar5 = bVar1 & 0x7f;
    if ((bVar1 & 0x80) != 0) {
      sVar4 = uVar3 + 2;
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 7;
        if (sVar4 == this->DataSize + 1) goto LAB_080e1148;
        this->ReadPos = sVar4;
        pbVar8 = pbVar8 + 1;
        bVar1 = *pbVar8;
        sVar4 = sVar4 + 1;
        in_d17 = in_d17 & 0xffffffffffff0000 | (ulonglong)uVar3 & 0xffff;
        uVar2 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
        uVar10 = VectorShiftRight(CONCAT44(uVar2,uVar2) & 0x7f7f7f7f7f7f7f7f,0x38);
        uVar10 = VectorShiftLeft(uVar10,in_d17,8,1);
        bVar9 = CARRY4((uint)uVar10,uVar5);
        uVar5 = (uint)uVar10 + uVar5;
        iVar6 = (int)((ulonglong)uVar10 >> 0x20) + iVar6 + (uint)bVar9;
      } while ((bVar1 & 0x80) != 0);
    }
  }
  else {
LAB_080e1148:
    uVar5 = 0;
    iVar6 = 0;
  }
  return CONCAT44(iVar6,uVar5);
}


