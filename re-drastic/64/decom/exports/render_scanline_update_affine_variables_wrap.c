/*
 * Ghidra decompilation
 *
 * Function : render_scanline_update_affine_variables_wrap
 * Address  : 001344f0
 * Program  : drastic64
 */


void render_scanline_update_affine_variables_wrap(long param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  sVar1 = *(short *)(param_1 + 0x9e);
  sVar2 = *(short *)(param_1 + 0xa0);
  uVar5 = -(int)sVar1;
  if (-1 < sVar1) {
    uVar5 = (uint)sVar1;
  }
  uVar4 = -(int)sVar2;
  if (-1 < sVar2) {
    uVar4 = (uint)sVar2;
  }
  uVar4 = uVar4 & 0xffff;
  uVar5 = uVar5 & 0xffff;
  if (uVar5 != 0) {
    uVar3 = 0;
    if ((ulong)uVar5 != 0) {
      uVar3 = (undefined4)(((long)(int)(uVar5 - 1) + 0x80000000U) / (ulong)uVar5);
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
  }
  if (uVar4 != 0) {
    uVar3 = 0;
    if ((ulong)uVar4 != 0) {
      uVar3 = (undefined4)(((long)(int)(uVar4 - 1) + 0x80000000U) / (ulong)uVar4);
    }
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  return;
}


