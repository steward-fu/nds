/*
 * Ghidra decompilation
 *
 * Function : cpu_alerts_dma_modified_code
 * Address  : 0018dd58
 * Program  : drastic64
 */


void cpu_alerts_dma_modified_code(void)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x28;
  
  uVar1 = cpu_translate_get_pc();
  *(undefined4 *)(unaff_x28 + 0x23bc) = uVar1;
  cpu_block_flush();
  UNRECOVERED_JUMPTABLE = (code *)cpu_block_lookup_base();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
                    /* WARNING: Could not recover jumptable at 0x0018dda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,(ulong)*(uint *)(unaff_x28 + 0x2354));
  return;
}


