/*
 * Ghidra decompilation
 *
 * Function : cpu_block_load_pc
 * Address  : 0012e980
 * Program  : drastic64
 */


void cpu_block_load_pc(long param_1)

{
  if (*(long *)(param_1 + 0x2298) != 0) {
    *(undefined4 *)(param_1 + 0x23bc) =
         *(undefined4 *)
          (*(long *)(param_1 + 0x2088) + (ulong)*(uint *)(*(long *)(param_1 + 0x2298) + -0xc) + 4);
  }
  return;
}


