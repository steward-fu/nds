/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_log_current_arm_instruction
 * Address  : 080b751c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_log_current_arm_instruction
               (FILE *output_file,cpu_translate_struct *cpu_translate,u32 thumb_mode)

{
  u8 uVar1;
  char cVar2;
  int iVar3;
  u16 uVar4;
  u32 thumb_opcode;
  cpu_instruction_struct *pcVar5;
  cpu_instruction_struct *current_instruction;
  uint uVar6;
  int iVar7;
  u32 pc;
  u32 current_pc;
  cpu_translate_struct *pcVar8;
  u32 reg_maps_to;
  u32 opcode;
  u32 current_opcode;
  u32 mapped_reg;
  char *pcVar9;
  bool bVar10;
  char disasm_buffer [256];
  char disasm_buffer_thumb [256];
  
  iVar3 = __stack_chk_guard;
  pcVar5 = cpu_translate->current_instruction;
  pc = cpu_translate->current_pc;
  opcode = pcVar5->opcode;
  disasm_arm_instruction(opcode,disasm_buffer,pc,(disasm_label_struct *)0x0,0);
  if (thumb_mode == 0) {
    pcVar9 = disasm_buffer;
    __fprintf_chk(output_file,1," %08x: %08x %s",pc,opcode,pcVar9);
  }
  else {
    uVar4 = load_memory16(&cpu_translate->current_cpu->memory_interface,pc);
    disasm_thumb_instruction((uint)uVar4,disasm_buffer_thumb,pc,(disasm_label_struct *)0x0,0);
    pcVar9 = disasm_buffer;
    __fprintf_chk(output_file,1," %08x: %08x %s (%04x %s)",pc,opcode,pcVar9,(uint)uVar4,
                  disasm_buffer_thumb);
  }
  fwrite(&DAT_08143b24,1,2,(FILE *)output_file);
  uVar6 = 0;
  pcVar8 = cpu_translate;
  do {
    while( true ) {
      bVar10 = 0xe < uVar6;
      if (uVar6 != 0xf) {
        bVar10 = uVar6 != 10;
      }
      if (bVar10 && (uVar6 != 0xf && uVar6 != 0xb)) break;
LAB_080b75e8:
      uVar6 = uVar6 + 1;
      pcVar8 = (cpu_translate_struct *)(pcVar8->translation_stub_buffer + 2);
      if (uVar6 == 0x10) goto LAB_080b765c;
    }
    uVar1 = (pcVar8->reg_alloc).native_regs[0].mapped_reg;
    __fprintf_chk(output_file,1,"r%d: ",uVar6,opcode,pcVar9);
    if (uVar1 == 0xff) {
      fwrite(&DAT_08143b30,1,3,(FILE *)output_file);
      goto LAB_080b75e8;
    }
    if (uVar1 == 0xfd) {
      fwrite(&DAT_08143b34,1,4,(FILE *)output_file);
      goto LAB_080b75e8;
    }
    if (uVar1 == 0xfe) {
      __fprintf_chk(output_file,1,"c%08x ",(pcVar8->reg_alloc).native_regs[0].const_value);
      goto LAB_080b75e8;
    }
    uVar6 = uVar6 + 1;
    pcVar8 = (cpu_translate_struct *)(pcVar8->translation_stub_buffer + 2);
    __fprintf_chk(output_file,1,&DAT_08143b44,uVar1);
  } while (uVar6 != 0x10);
LAB_080b765c:
  pcVar9 = &(cpu_translate->reg_alloc).native_regs[0xf].field_0x7;
  iVar7 = 0;
  fputc(10,(FILE *)output_file);
  do {
    while( true ) {
      pcVar9 = pcVar9 + 1;
      cVar2 = *pcVar9;
      __fprintf_chk(output_file,1,"R%d: ",iVar7);
      if (cVar2 != -1) break;
      iVar7 = iVar7 + 1;
      fwrite(&DAT_08143b30,1,3,(FILE *)output_file);
      if (iVar7 == 0xf) goto LAB_080b76f0;
    }
    iVar7 = iVar7 + 1;
    __fprintf_chk(output_file,1,&DAT_08143b54,cVar2);
  } while (iVar7 != 0xf);
LAB_080b76f0:
  fputc(10,(FILE *)output_file);
  fputc(0x5b,(FILE *)output_file);
  if ((cpu_translate->flags_cached & 8) == 0) {
    iVar7 = 0x2d;
  }
  else {
    iVar7 = 0x4e;
  }
  fputc(iVar7,(FILE *)output_file);
  if ((cpu_translate->flags_cached & 4) == 0) {
    iVar7 = 0x2d;
  }
  else {
    iVar7 = 0x5a;
  }
  fputc(iVar7,(FILE *)output_file);
  if ((cpu_translate->flags_cached & 2) == 0) {
    iVar7 = 0x2d;
  }
  else {
    iVar7 = 0x43;
  }
  fputc(iVar7,(FILE *)output_file);
  if ((cpu_translate->flags_cached & 1) == 0) {
    iVar7 = 0x2d;
  }
  else {
    iVar7 = 0x56;
  }
  fputc(iVar7,(FILE *)output_file);
  fputc(0x5d,(FILE *)output_file);
  cpu_translate_log_live_state
            (output_file,(uint)pcVar5->source_registers,pcVar5->source_dest_flags & 0xf);
  fwrite(&DAT_08143ab4,1,2,(FILE *)output_file);
  cpu_translate_log_live_state
            (output_file,(uint)pcVar5->dest_registers,(uint)(pcVar5->source_dest_flags >> 4));
  __fprintf_chk(output_file,1," -> (%x)",pcVar5->live_flags);
  cpu_translate_log_live_state(output_file,(uint)pcVar5->live_registers,(uint)pcVar5->live_flags);
  fputc(10,(FILE *)output_file);
  if (iVar3 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


