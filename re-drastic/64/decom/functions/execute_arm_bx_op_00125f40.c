/*
 * Ghidra decompilation
 *
 * Function : execute_arm_bx_op
 * Address  : 00125f40
 * Program  : drastic64
 */


void execute_arm_bx_op(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x23c0);
  uVar3 = *(uint *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
  if (((uint)param_2 >> 5 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x23bc);
    if ((uVar2 & 0x20) != 0) {
      uVar1 = *(uint *)(param_1 + 0x23bc) | 1;
    }
    *(uint *)(param_1 + 0x23a8) = uVar1;
  }
  *(uint *)(param_1 + 0x23bc) = uVar3 & 0xfffffffe;
  *(uint *)(param_1 + 0x23c0) = uVar2 & 0xffffffc0 | uVar2 & 0x1f | (uVar3 & 1) << 5;
  return;
}


