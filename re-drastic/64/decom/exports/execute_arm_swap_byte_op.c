/*
 * Ghidra decompilation
 *
 * Function : execute_arm_swap_byte_op
 * Address  : 001263f0
 * Program  : drastic64
 */


void execute_arm_swap_byte_op(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + (((param_2 & 0xffffffff) >> 0x10 & 0xf) + 0x8dc) * 4);
  uVar2 = *(undefined4 *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
  uVar3 = load_memory8(param_1 + 0x23d0,uVar1);
  *(uint *)(param_1 + (((param_2 & 0xffffffff) >> 0xc & 0xf) + 0x8dc) * 4) = uVar3 & 0xff;
  store_memory8(param_1 + 0x23d0,uVar1,uVar2);
  return;
}


