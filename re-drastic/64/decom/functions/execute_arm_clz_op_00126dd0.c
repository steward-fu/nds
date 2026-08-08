/*
 * Ghidra decompilation
 *
 * Function : execute_arm_clz_op
 * Address  : 00126dd0
 * Program  : drastic64
 */


void execute_arm_clz_op(long param_1,ulong param_2)

{
  *(int *)(param_1 + ((param_2 >> 0xc & 0xf) + 0x8dc) * 4) =
       (int)LZCOUNT(*(undefined4 *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4));
  return;
}


