/*
 * Ghidra decompilation
 *
 * Function : process_geometry_commands
 * Address  : 0015fde0
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x001624b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_geometry_commands(long param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0015fe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&dispatch_table_12077)[*(byte *)(param_1 + 0x79b00)])();
  return;
}


