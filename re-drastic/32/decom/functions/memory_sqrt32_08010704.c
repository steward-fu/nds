/*
 * Ghidra decompilation
 *
 * Function : memory_sqrt32
 * Address  : 08010704
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 memory_sqrt32(u32 value)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (value != 0) {
    if (value < 0x40000000) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x40000000;
    }
    uVar4 = uVar3 | 0x10000000;
    uVar1 = uVar3 >> 1 | 0x10000000;
    if (value - uVar3 < uVar4) {
      uVar4 = 0;
      uVar1 = uVar3 >> 1;
    }
    uVar4 = (value - uVar3) - uVar4;
    uVar2 = uVar1 | 0x4000000;
    uVar3 = uVar1 >> 1 | 0x4000000;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar3 = uVar1 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar3 | 0x1000000;
    uVar1 = uVar3 >> 1 | 0x1000000;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar1 = uVar3 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar1 | 0x400000;
    uVar3 = uVar1 >> 1 | 0x400000;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar3 = uVar1 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar3 | 0x100000;
    uVar1 = uVar3 >> 1 | 0x100000;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar1 = uVar3 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar1 | 0x40000;
    uVar3 = uVar1 >> 1 | 0x40000;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar3 = uVar1 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar3 | 0x10000;
    uVar1 = uVar3 >> 1 | 0x10000;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar1 = uVar3 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar1 | 0x4000;
    uVar3 = uVar1 >> 1 | 0x4000;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar3 = uVar1 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar3 | 0x1000;
    uVar1 = uVar3 >> 1 | 0x1000;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar1 = uVar3 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar1 | 0x400;
    uVar3 = uVar1 >> 1 | 0x400;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar3 = uVar1 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar3 | 0x100;
    uVar1 = uVar3 >> 1 | 0x100;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar1 = uVar3 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar1 | 0x40;
    uVar3 = uVar1 >> 1 | 0x40;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar3 = uVar1 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar3 | 0x10;
    uVar1 = uVar3 >> 1 | 0x10;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar1 = uVar3 >> 1;
    }
    uVar4 = uVar4 - uVar2;
    uVar2 = uVar1 | 4;
    uVar3 = uVar1 >> 1 | 4;
    if (uVar4 < uVar2) {
      uVar2 = 0;
      uVar3 = uVar1 >> 1;
    }
    value = uVar3 >> 1;
    if ((uVar3 | 1) <= uVar4 - uVar2) {
      value = value | 1;
    }
  }
  return value;
}


