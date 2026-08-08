/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_log_current_arm_instruction
 * Address  : 00195b10
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cpu_translate_log_current_arm_instruction(FILE *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined auStack_208 [256];
  undefined auStack_108 [256];
  long local_8;
  
  puVar4 = *(undefined4 **)(param_2 + 0x458);
  uVar1 = *(undefined4 *)(param_2 + 0x448);
  uVar2 = *puVar4;
  local_8 = ___stack_chk_guard;
  disasm_arm_instruction(uVar2,auStack_208,uVar1,0,0);
  if (param_3 == 0) {
    __fprintf_chk(param_1,1," %08x: %08x %s",uVar1,uVar2,auStack_208);
  }
  else {
    uVar3 = load_memory16(*(long *)(param_2 + 0x468) + 0x23d0,uVar1);
    disasm_thumb_instruction(uVar3,auStack_108,uVar1,0,0);
    __fprintf_chk(param_1,1," %08x: %08x %s (%04x %s)",uVar1,uVar2,auStack_208,uVar3,auStack_108);
  }
  fwrite(&DAT_00222f98,1,2,param_1);
  cpu_translate_log_live_state
            (param_1,*(undefined2 *)((long)puVar4 + 0x12),*(byte *)(puVar4 + 6) & 0xf);
  fwrite(&DAT_00227308,1,2,param_1);
  cpu_translate_log_live_state(param_1,*(undefined2 *)(puVar4 + 5),*(byte *)(puVar4 + 6) >> 4);
  __fprintf_chk(param_1,1," -> (%x)",*(undefined *)((long)puVar4 + 0x19));
  cpu_translate_log_live_state
            (param_1,*(undefined2 *)((long)puVar4 + 0x16),*(undefined *)((long)puVar4 + 0x19));
  fputc(10,param_1);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


