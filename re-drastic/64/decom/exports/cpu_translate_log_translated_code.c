/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_log_translated_code
 * Address  : 00195cc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cpu_translate_log_translated_code(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined auStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < param_3) {
    puVar3 = param_2;
    do {
      uVar2 = *puVar3;
      disasm_arm64_instruction(uVar2,auStack_108,puVar3,disasm_labels,0x50);
      puVar1 = puVar3 + 1;
      __fprintf_chk(param_1,1,"  %p: %08x  %s\n",puVar3,uVar2,auStack_108);
      puVar3 = puVar1;
    } while (puVar1 != (undefined4 *)
                       ((long)param_2 +
                       ((long)param_3 + (-1 - (long)param_2) & 0xfffffffffffffffcU) + 4));
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


