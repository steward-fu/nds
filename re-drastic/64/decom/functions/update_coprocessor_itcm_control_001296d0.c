/*
 * Ghidra decompilation
 *
 * Function : update_coprocessor_itcm_control
 * Address  : 001296d0
 * Program  : drastic64
 */


void update_coprocessor_itcm_control(long param_1)

{
  uint uVar1;
  
  uVar1 = 0x200 << ((ulong)(*(uint *)(param_1 + 0x1c) >> 1) & 0x1f);
  if (0xfff < uVar1) {
    *(uint *)(param_1 + 0x38) = uVar1;
    remap_itcm(*(undefined8 *)(param_1 + 8));
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0x1000;
  remap_itcm(*(undefined8 *)(param_1 + 8),0x1000);
  return;
}


