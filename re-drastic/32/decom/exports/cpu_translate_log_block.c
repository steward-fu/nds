/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_log_block
 * Address  : 080b8558
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_log_block(system_struct *system,FILE *log_file,u8 *block_ptr)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  u16 uVar5;
  u32 uVar6;
  u32 opcode;
  char *pcVar7;
  u32 *translation_ptr;
  u32 *pc;
  u32 *puVar8;
  u32 uVar9;
  u32 block_pc;
  u32 uVar10;
  u32 opcode_1;
  u32 uVar11;
  cpu_struct *cpu;
  cpu_struct *pcVar12;
  u32 block_length;
  u32 instruction_count;
  int iVar13;
  u8 *block_metadata_ptr;
  bool bVar14;
  u32 block_translated_length;
  char disasm_buffer [256];
  char disasm_buffer_1 [256];
  
  iVar4 = __stack_chk_guard;
  iVar13 = *(int *)(block_ptr + -4);
  pcVar12 = &system->cpu_arm7;
  uVar1 = *(ushort *)(iVar13 + 0x10);
  uVar9 = *(u32 *)(iVar13 + 4);
  uVar2 = *(ushort *)(iVar13 + 0x12);
  uVar3 = uVar1 >> 0xc;
  instruction_count = uVar1 & 0xfff;
  if ((uVar3 & 1) == 0) {
    bVar14 = (uVar3 & 8) != 0;
    if (bVar14) {
      pcVar12 = (cpu_struct *)0x6bf8;
    }
    instruction_count = ((uint)uVar1 << 0x14) >> 0x15;
    if (bVar14) {
      pcVar12 = (cpu_struct *)((int)&system->frame_number + ((uint)pcVar12 & 0xffff | 0x15a0000));
    }
    pcVar7 = "ARM";
    bVar14 = false;
  }
  else if ((uVar3 & 8) == 0) {
    bVar14 = true;
    pcVar7 = "Thumb";
  }
  else {
    pcVar7 = "Thumb";
    pcVar12 = &system->cpu_arm9;
    bVar14 = true;
  }
  __fprintf_chk(log_file,1,"%s block (%s) at %x: %d instructions, %d bytes translated\n",pcVar7,
                cpu_translate_log_block::cpu_type_str[pcVar12->type],uVar9,instruction_count,
                (uint)uVar2);
  __fprintf_chk(log_file,1,"Live flags: %x, live registers: %04x\n",*(undefined2 *)(iVar13 + 0xe),
                *(undefined2 *)(iVar13 + 0xc));
  if (instruction_count != 0) {
    if (bVar14) {
      uVar11 = uVar9;
      do {
        uVar5 = load_memory16(&pcVar12->memory_interface,uVar11);
        disasm_thumb_instruction((uint)uVar5,disasm_buffer,uVar11,(disasm_label_struct *)0x0,0);
        uVar6 = uVar11 + 2;
        __fprintf_chk(log_file,1,"  %08x: %04x %s\n",uVar11,(uint)uVar5,disasm_buffer);
        uVar11 = uVar6;
      } while (uVar6 != uVar9 + instruction_count * 2);
    }
    else {
      uVar11 = uVar9;
      do {
        uVar6 = load_memory32(&pcVar12->memory_interface,uVar11);
        disasm_arm_instruction(uVar6,disasm_buffer,uVar11,(disasm_label_struct *)0x0,0);
        uVar10 = uVar11 + 4;
        __fprintf_chk(log_file,1,"  %08x: %08x %s\n",uVar11,uVar6,disasm_buffer);
        uVar11 = uVar10;
      } while (uVar9 + instruction_count * 4 != uVar10);
    }
  }
  fputc(10,(FILE *)log_file);
  if (block_ptr < block_ptr + uVar2) {
    pc = (u32 *)block_ptr;
    do {
      uVar9 = *pc;
      disasm_arm_instruction(uVar9,disasm_buffer_1,(u32)pc,disasm_labels,0x50);
      puVar8 = pc + 1;
      __fprintf_chk(log_file,1,"  %p: %08x  %s\n",pc,uVar9,disasm_buffer_1);
      pc = puVar8;
    } while (puVar8 < block_ptr + uVar2);
  }
  fputc(10,(FILE *)log_file);
  if (iVar4 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


