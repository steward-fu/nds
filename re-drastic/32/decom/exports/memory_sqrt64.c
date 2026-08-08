/*
 * Ghidra decompilation
 *
 * Function : memory_sqrt64
 * Address  : 080108e8
 * Program  : drastic
 */


u64 memory_sqrt64(u64 value)

{
  uint uVar1;
  uint uVar2;
  uint in_r0;
  uint uVar3;
  uint in_r1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  
  if ((in_r0 | in_r1) != 0) {
    iVar9 = 0x1f;
    uVar5 = 0;
    uVar6 = 0x10000000;
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar4 = uVar8 | uVar6;
      uVar3 = uVar7 | uVar5;
      uVar12 = 0;
      uVar1 = uVar8 >> 1;
      uVar2 = (uint)((byte)uVar8 & 1) << 0x1f | uVar7 >> 1;
      bVar11 = in_r1 <= uVar4;
      if (uVar4 == in_r1) {
        bVar11 = in_r0 <= uVar3;
      }
      uVar7 = uVar5 | uVar2;
      uVar8 = uVar6 | uVar1;
      if (!bVar11 || uVar4 == in_r1 && uVar3 == in_r0) {
        uVar12 = CONCAT44(uVar4,uVar3);
      }
      uVar5 = uVar5 >> 2 | uVar6 << 0x1e;
      uVar6 = uVar6 >> 2;
      uVar12 = VectorSub(CONCAT44(in_r1,in_r0),uVar12,8);
      bVar11 = in_r1 <= uVar4;
      bVar10 = uVar4 == in_r1;
      if (bVar10) {
        bVar11 = in_r0 <= uVar3;
      }
      if (bVar11 && (!bVar10 || uVar3 != in_r0)) {
        uVar8 = uVar1;
      }
      if (bVar11 && (!bVar10 || uVar3 != in_r0)) {
        uVar7 = uVar2;
      }
      iVar9 = iVar9 + -1;
      in_r1 = (uint)((ulonglong)uVar12 >> 0x20);
      in_r0 = (uint)uVar12;
    } while (iVar9 != 0);
    return CONCAT44(uVar8,uVar7);
  }
  return CONCAT44(in_r1,in_r0);
}


