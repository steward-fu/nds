/*
 * Ghidra decompilation
 *
 * Function : execute_cpu
 * Address  : 00128230
 * Program  : drastic64
 */


void execute_cpu(long param_1)

{
  _execute_cpu();
                    /* WARNING: Could not recover jumptable at 0x00128258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x23b0))(*(undefined8 *)(param_1 + 0x2258));
  return;
}


