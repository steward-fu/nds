/*
 * Ghidra decompilation
 *
 * Function : FUN_0804cb3c
 * Address  : 0804cb3c
 * Program  : drastic16
 */


void FUN_0804cb3c(int param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0804cbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_caseD_4_080e69f8)[*(byte *)(param_1 + 0x61ab0)])
              (param_1,param_1 + 0x61000,param_1 + 0x69000);
    return;
  }
  return;
}


