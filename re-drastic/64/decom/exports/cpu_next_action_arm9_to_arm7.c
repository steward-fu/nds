/*
 * Ghidra decompilation
 *
 * Function : cpu_next_action_arm9_to_arm7
 * Address  : 00128260
 * Program  : drastic64
 */


void cpu_next_action_arm9_to_arm7(long param_1)

{
  *(int *)(nds_system + param_1 + 0x20d45d0) =
       *(int *)(nds_system + param_1 + 0x20d45d0) + *(int *)(param_1 + 0x10);
  _execute_cpu(param_1 + 0x25ce340);
                    /* WARNING: Could not recover jumptable at 0x001282b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(nds_system + param_1 + 0x20d46f0))(*(undefined8 *)(nds_system + param_1 + 0x20d4598))
  ;
  return;
}


