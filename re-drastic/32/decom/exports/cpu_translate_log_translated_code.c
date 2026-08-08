/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_log_translated_code
 * Address  : 080b78c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_log_translated_code
               (FILE *output_file,u8 *translation_ptr_start,u8 *translation_ptr_end)

{
  int iVar1;
  u32 *translation_ptr;
  u32 *puVar2;
  u32 opcode_00;
  u32 opcode;
  char disasm_buffer [256];
  
  iVar1 = __stack_chk_guard;
  if (translation_ptr_start < translation_ptr_end) {
    do {
      opcode_00 = *(u32 *)translation_ptr_start;
      disasm_arm_instruction(opcode_00,disasm_buffer,(u32)translation_ptr_start,disasm_labels,0x50);
      puVar2 = (u32 *)((int)translation_ptr_start + 4);
      __fprintf_chk(output_file,1,"  %p: %08x  %s\n",translation_ptr_start,opcode_00,disasm_buffer);
      translation_ptr_start = (u8 *)puVar2;
    } while (puVar2 < translation_ptr_end);
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


