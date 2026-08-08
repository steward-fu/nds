/*
 * Ghidra decompilation
 *
 * Function : memory_sqrt
 * Address  : 08012464
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void memory_sqrt(memory_struct *memory)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  u32 result;
  u32 root;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  
  uVar3 = *(ushort *)(memory->arm9_io_registers + 0x2b0);
  memory->sqrt_result_available = '\x01';
  if ((uVar3 & 1) == 0) {
    result = *(u32 *)(memory->arm9_io_registers + 0x2b8);
    if (result != 0) {
      if (result < 0x40000000) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0x40000000;
      }
      uVar5 = uVar6 | 0x10000000;
      uVar7 = uVar6 >> 1 | 0x10000000;
      if (result - uVar6 < uVar5) {
        uVar5 = 0;
        uVar7 = uVar6 >> 1;
      }
      uVar5 = (result - uVar6) - uVar5;
      uVar10 = uVar7 | 0x4000000;
      uVar6 = uVar7 >> 1 | 0x4000000;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar6 = uVar7 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar6 | 0x1000000;
      uVar7 = uVar6 >> 1 | 0x1000000;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar7 = uVar6 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar7 | 0x400000;
      uVar6 = uVar7 >> 1 | 0x400000;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar6 = uVar7 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar6 | 0x100000;
      uVar7 = uVar6 >> 1 | 0x100000;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar7 = uVar6 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar7 | 0x40000;
      uVar6 = uVar7 >> 1 | 0x40000;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar6 = uVar7 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar6 | 0x10000;
      uVar7 = uVar6 >> 1 | 0x10000;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar7 = uVar6 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar7 | 0x4000;
      uVar6 = uVar7 >> 1 | 0x4000;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar6 = uVar7 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar6 | 0x1000;
      uVar7 = uVar6 >> 1 | 0x1000;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar7 = uVar6 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar7 | 0x400;
      uVar6 = uVar7 >> 1 | 0x400;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar6 = uVar7 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar6 | 0x100;
      uVar7 = uVar6 >> 1 | 0x100;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar7 = uVar6 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar7 | 0x40;
      uVar6 = uVar7 >> 1 | 0x40;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar6 = uVar7 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar6 | 0x10;
      uVar7 = uVar6 >> 1 | 0x10;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar7 = uVar6 >> 1;
      }
      uVar5 = uVar5 - uVar10;
      uVar10 = uVar7 | 4;
      uVar6 = uVar7 >> 1 | 4;
      if (uVar5 < uVar10) {
        uVar10 = 0;
        uVar6 = uVar7 >> 1;
      }
      result = uVar6 >> 1;
      if ((uVar6 | 1) <= uVar5 - uVar10) {
        result = result | 1;
      }
    }
  }
  else {
    uVar6 = *(uint *)(memory->arm9_io_registers + 0x2b8);
    uVar7 = *(uint *)(memory->arm9_io_registers + 700);
    if ((uVar6 | uVar7) == 0) {
      result = 0;
    }
    else {
      result = 0;
      uVar10 = 0;
      iVar11 = 0x1f;
      uVar4 = 0;
      uVar5 = 0x10000000;
      do {
        uVar9 = uVar10 | uVar5;
        uVar8 = result | uVar4;
        uVar14 = 0;
        uVar1 = uVar10 >> 1;
        uVar2 = (uint)((byte)uVar10 & 1) << 0x1f | result >> 1;
        bVar13 = uVar7 <= uVar9;
        if (uVar9 == uVar7) {
          bVar13 = uVar6 <= uVar8;
        }
        result = uVar2 | uVar4;
        uVar10 = uVar1 | uVar5;
        if (!bVar13 || uVar9 == uVar7 && uVar8 == uVar6) {
          uVar14 = CONCAT44(uVar9,uVar8);
        }
        uVar4 = uVar4 >> 2 | uVar5 << 0x1e;
        uVar5 = uVar5 >> 2;
        uVar14 = VectorSub(CONCAT44(uVar7,uVar6),uVar14,8);
        bVar13 = uVar7 <= uVar9;
        bVar12 = uVar9 == uVar7;
        if (bVar12) {
          bVar13 = uVar6 <= uVar8;
        }
        if (bVar13 && (!bVar12 || uVar8 != uVar6)) {
          uVar10 = uVar1;
        }
        if (bVar13 && (!bVar12 || uVar8 != uVar6)) {
          result = uVar2;
        }
        iVar11 = iVar11 + -1;
        uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
        uVar6 = (uint)uVar14;
      } while (iVar11 != 0);
    }
  }
  *(u32 *)(memory->arm9_io_registers + 0x2b4) = result;
  return;
}


