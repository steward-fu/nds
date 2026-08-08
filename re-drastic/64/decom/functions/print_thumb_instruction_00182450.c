/*
 * Ghidra decompilation
 *
 * Function : print_thumb_instruction
 * Address  : 00182450
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_thumb_instruction(long *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined auStack_108 [256];
  long local_8;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  local_8 = ___stack_chk_guard;
  uVar2 = load_memory16(*param_1 + 0x23d0,uVar1 & 0xfffffffe,0);
  disasm_thumb_instruction(uVar2,auStack_108,uVar1 & 0xfffffffe,0,0);
  __printf_chk(1,"Thumb op: %04x  %s\n",uVar2,auStack_108);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


