/*
 * Ghidra decompilation
 *
 * Function : memory_sqrt32
 * Address  : 00116c40
 * Program  : drastic64
 */


uint memory_sqrt32(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0;
    if (0x3fffffff < param_1) {
      param_1 = param_1 + 0xc0000000;
      uVar1 = 0x40000000;
    }
    uVar2 = uVar1 >> 1;
    if ((uVar1 | 0x10000000) <= param_1) {
      param_1 = param_1 - (uVar1 | 0x10000000);
      uVar2 = uVar2 | 0x10000000;
    }
    uVar1 = uVar2 >> 1;
    if ((uVar2 | 0x4000000) <= param_1) {
      param_1 = param_1 - (uVar2 | 0x4000000);
      uVar1 = uVar1 | 0x4000000;
    }
    uVar2 = uVar1 >> 1;
    if ((uVar1 | 0x1000000) <= param_1) {
      param_1 = param_1 - (uVar1 | 0x1000000);
      uVar2 = uVar2 | 0x1000000;
    }
    uVar1 = uVar2 >> 1;
    if ((uVar2 | 0x400000) <= param_1) {
      param_1 = param_1 - (uVar2 | 0x400000);
      uVar1 = uVar1 | 0x400000;
    }
    uVar2 = uVar1 >> 1;
    if ((uVar1 | 0x100000) <= param_1) {
      param_1 = param_1 - (uVar1 | 0x100000);
      uVar2 = uVar2 | 0x100000;
    }
    uVar1 = uVar2 >> 1;
    if ((uVar2 | 0x40000) <= param_1) {
      param_1 = param_1 - (uVar2 | 0x40000);
      uVar1 = uVar1 | 0x40000;
    }
    uVar2 = uVar1 >> 1;
    if ((uVar1 | 0x10000) <= param_1) {
      param_1 = param_1 - (uVar1 | 0x10000);
      uVar2 = uVar2 | 0x10000;
    }
    uVar1 = uVar2 >> 1;
    if ((uVar2 | 0x4000) <= param_1) {
      param_1 = param_1 - (uVar2 | 0x4000);
      uVar1 = uVar1 | 0x4000;
    }
    uVar2 = uVar1 >> 1;
    if ((uVar1 | 0x1000) <= param_1) {
      param_1 = param_1 - (uVar1 | 0x1000);
      uVar2 = uVar2 | 0x1000;
    }
    uVar1 = uVar2 >> 1;
    if ((uVar2 | 0x400) <= param_1) {
      param_1 = param_1 - (uVar2 | 0x400);
      uVar1 = uVar1 | 0x400;
    }
    uVar2 = uVar1 >> 1;
    if ((uVar1 | 0x100) <= param_1) {
      param_1 = param_1 - (uVar1 | 0x100);
      uVar2 = uVar2 | 0x100;
    }
    uVar1 = uVar2 >> 1;
    if ((uVar2 | 0x40) <= param_1) {
      param_1 = param_1 - (uVar2 | 0x40);
      uVar1 = uVar1 | 0x40;
    }
    uVar2 = uVar1 >> 1;
    if ((uVar1 | 0x10) <= param_1) {
      param_1 = param_1 - (uVar1 | 0x10);
      uVar2 = uVar2 | 0x10;
    }
    uVar3 = uVar2 >> 1;
    if ((uVar2 | 4) <= param_1) {
      param_1 = param_1 - (uVar2 | 4);
      uVar3 = uVar3 | 4;
    }
    uVar1 = uVar3 >> 1 | 1;
    if (param_1 < (uVar3 | 1)) {
      uVar1 = uVar3 >> 1;
    }
  }
  return uVar1;
}


