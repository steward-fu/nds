/*
 * Ghidra decompilation
 *
 * Function : print_arm_instruction
 * Address  : 001824f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_arm_instruction(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined auStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = load_memory32(*param_1 + 0x23d0,uVar1,0);
  disasm_arm_instruction(uVar2,auStack_108,uVar1,0,0);
  __printf_chk(1,"ARM op: %08x  %s\n",uVar2 & 0xffffffff,auStack_108);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


