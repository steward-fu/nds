/*
 * Ghidra decompilation
 *
 * Function : FUN_0012825c
 * Address  : 0012825c
 * Program  : drastic64
 */


void FUN_0012825c(long param_1)

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


