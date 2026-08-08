/*
 * Ghidra decompilation
 *
 * Function : RawGetV
 * Address  : 080e1354
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uint64 RawGetV(byte *Data,uint *ReadPos,uint DataSize,bool *Overflow)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte CurByte;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  ulonglong in_d17;
  
  uVar6 = *ReadPos;
  uVar8 = 0;
  *Overflow = false;
  if (uVar6 < DataSize) {
    pbVar5 = Data + uVar6;
    iVar4 = 0;
    *ReadPos = uVar6 + 1;
    uVar3 = Data[uVar6] & 0x7f;
    if ((Data[uVar6] & 0x80) != 0) {
      uVar7 = uVar6 + 2;
      do {
        uVar8 = uVar8 + 7;
        if (uVar7 == DataSize + 1) goto LAB_080e13f0;
        *ReadPos = uVar7;
        pbVar5 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar7 = uVar7 + 1;
        in_d17 = in_d17 & 0xffffffffffff0000 | (ulonglong)uVar8 & 0xffff;
        uVar2 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
        uVar10 = VectorShiftRight(CONCAT44(uVar2,uVar2) & 0x7f7f7f7f7f7f7f7f,0x38);
        uVar10 = VectorShiftLeft(uVar10,in_d17,8,1);
        bVar9 = CARRY4((uint)uVar10,uVar3);
        uVar3 = (uint)uVar10 + uVar3;
        iVar4 = (int)((ulonglong)uVar10 >> 0x20) + iVar4 + (uint)bVar9;
      } while ((bVar1 & 0x80) != 0);
    }
  }
  else {
LAB_080e13f0:
    uVar3 = 0;
    iVar4 = 0;
    *Overflow = true;
  }
  return CONCAT44(iVar4,uVar3);
}


