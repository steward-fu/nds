/*
 * Ghidra decompilation
 *
 * Function : signal_segv_handler
 * Address  : 080c65b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void signal_segv_handler(int signal_number,siginfo_t *fault_info,void *context)

{
  int iVar1;
  system_struct *psVar2;
  byte bVar3;
  u8 uVar4;
  u16 uVar5;
  FILE *__s;
  FILE *input_capture_file;
  u32 value;
  uint uVar6;
  u8 *puVar7;
  uint opcode_00;
  u32 opcode;
  u32 i;
  u32 uVar8;
  int iVar9;
  int iVar10;
  size_t __size;
  u32 input_capture_size;
  ucontext *arm_context;
  undefined4 *puVar11;
  u32 *puVar12;
  u8 *puVar13;
  translation_cache_struct *translation_cache;
  translation_cache_struct *ptVar14;
  uint *pc_00;
  u32 pc;
  void *address;
  u32 fault_address;
  s32 sVar15;
  u32 uVar16;
  char disasm_buffer [256];
  char input_capture_path [1024];
  
  psVar2 = _nds_system;
  iVar1 = __stack_chk_guard;
  pc_00 = *(uint **)((int)context + 0x5c);
  address = (fault_info->_sifields)._sigfault.si_addr;
  ptVar14 = &_nds_system->translation_cache;
  opcode_00 = *pc_00;
  puVar7 = (_nds_system->translation_cache).translation_buffer_alternate;
  if ((ptVar14 <= pc_00) && (pc_00 < puVar7)) {
    uVar6 = (opcode_00 << 4) >> 0x1d;
    if (uVar6 == 0) {
      if ((((opcode_00 & 0x90) == 0x90) && ((opcode_00 & 0x60) != 0)) &&
         ((opcode_00 & 0x100000) != 0)) {
        address = (void *)((int)address - (_nds_system->memory).memory_map_offset);
        if ((opcode_00 & 0x20) == 0) {
          if (address < (void *)0x4001000) {
            uVar4 = load_memory8(&(_nds_system->cpu_arm9).memory_interface,(u32)address);
            value = (u32)(char)uVar4;
            goto LAB_080c6a28;
          }
        }
        else if ((opcode_00 & 0x40) == 0) {
          if (address < (void *)0x4001000) {
            uVar5 = load_memory16(&(_nds_system->cpu_arm9).memory_interface,(u32)address);
            value = (u32)uVar5;
            goto LAB_080c6a28;
          }
        }
        else if (address < (void *)0x4001000) {
          uVar5 = load_memory16(&(_nds_system->cpu_arm9).memory_interface,(u32)address);
          value = (u32)(short)uVar5;
          goto LAB_080c6a28;
        }
      }
    }
    else if ((uVar6 - 2 < 2) && ((opcode_00 & 0x100000) != 0)) {
      address = (void *)((int)address - (_nds_system->memory).memory_map_offset);
      if ((opcode_00 & 0x400000) == 0) {
        if (address < (void *)0x4001000) {
          value = load_memory32(&(_nds_system->cpu_arm9).memory_interface,(u32)address);
          goto LAB_080c6a28;
        }
      }
      else if (address < (void *)0x4001000) {
        bVar3 = load_memory8(&(_nds_system->cpu_arm9).memory_interface,(u32)address);
        value = (u32)bVar3;
LAB_080c6a28:
        *(u32 *)((int)context + ((opcode_00 << 0x10) >> 0x1c) * 4 + 0x20) = value;
        *(uint **)((int)context + 0x5c) = pc_00 + 1;
        goto LAB_080c6944;
      }
    }
  }
  puVar11 = (undefined4 *)((int)context + 0x1c);
  disasm_arm_instruction(opcode_00,disasm_buffer,(u32)pc_00,(disasm_label_struct *)0x0,0);
  __printf_chk(1,"FATAL: Unhandled SIG_SEGV: caused by instruction %s (at %x), address %x\n",
               disasm_buffer,pc_00,address);
  puts("Registers:");
  i = 0;
  do {
    puVar11 = puVar11 + 1;
    uVar8 = i + 1;
    __printf_chk(1," r%d: %08x\n",i,*puVar11,address);
    i = uVar8;
  } while (uVar8 != 0xf);
  putchar(10);
  puts("Emulated ARM9:");
  sVar15 = (psVar2->cpu_arm9).cycles_remaining;
  puVar12 = &(psVar2->cpu_arm9).cpsr;
  uVar8 = (psVar2->cpu_arm9).pc;
  uVar16 = (psVar2->cpu_arm9).cpsr;
  __printf_chk(1," Mode %02d, IRQ %08x, CPSR %08x, PC %08x, cycles %08d\n",(psVar2->cpu_arm9).mode,
               (psVar2->cpu_arm9).active_interrupts,uVar16,uVar8,sVar15);
  iVar10 = 0;
  do {
    puVar12 = puVar12 + 1;
    iVar9 = iVar10 + 1;
    __printf_chk(1," r%d: %08x\n",iVar10,*puVar12,uVar16,uVar8,sVar15);
    iVar10 = iVar9;
  } while (iVar9 != 0x10);
  __printf_chk(1," Debug instruction count: %llx\n\n",
               *(undefined4 *)&(psVar2->cpu_arm9).debug.instruction_count,
               *(undefined4 *)((int)&(psVar2->cpu_arm9).debug.instruction_count + 4),uVar16,uVar8,
               sVar15);
  puts("Emulated ARM7:");
  sVar15 = (psVar2->cpu_arm7).cycles_remaining;
  puVar12 = &(psVar2->cpu_arm7).cpsr;
  uVar8 = (psVar2->cpu_arm7).pc;
  uVar16 = (psVar2->cpu_arm7).cpsr;
  __printf_chk(1," Mode %02d, IRQ %08x, CPSR %08x, PC %08x, cycles %08d\n",(psVar2->cpu_arm7).mode,
               (psVar2->cpu_arm7).active_interrupts,uVar16,uVar8,sVar15);
  iVar10 = 0;
  do {
    puVar12 = puVar12 + 1;
    iVar9 = iVar10 + 1;
    __printf_chk(1," r%d: %08x\n",iVar10,*puVar12,uVar16,uVar8,sVar15);
    iVar10 = iVar9;
  } while (iVar9 != 0x10);
  __printf_chk(1," Debug instruction count: %llx\n\n",
               *(undefined4 *)&(psVar2->cpu_arm7).debug.instruction_count,
               *(undefined4 *)((int)&(psVar2->cpu_arm7).debug.instruction_count + 4),uVar16,uVar8,
               sVar15);
  puts("Translation cache details:");
  puVar13 = (psVar2->translation_cache).translation_buffer_itcm;
  __printf_chk(1," main: %d + %d bytes\n",
               (int)(psVar2->translation_cache).translation_ptr_main - (int)ptVar14,
               (int)puVar13 - (int)(psVar2->translation_cache).translation_ptr_main_b);
  __printf_chk(1," itcm: %d + %d bytes\n",
               (int)(psVar2->translation_cache).translation_ptr_itcm - (int)puVar13,
               (int)puVar7 - (int)(psVar2->translation_cache).translation_ptr_itcm_b);
  __printf_chk(1," alternate: %d + %d bytes\n\n",
               (int)(psVar2->translation_cache).translation_ptr_alternate - (int)puVar7,
               (int)psVar2 +
               (0x138b000 - (int)(psVar2->translation_cache).translation_ptr_alternate_b));
  __printf_chk(1,"%d texture cache bytes allocated, %d texture cache elements.\n",
               (_nds_system->video).texture_cache.texture_bytes_allocated,
               (_nds_system->video).texture_cache.elements_allocated);
  if ((_nds_system->input).log_mode != '\x02') {
    __size = (int)(_nds_system->input).capture_ptr - (int)&_nds_system->input;
    __printf_chk(1,"%d input records, attempting to write to input_capture_crash.ir.\n",__size / 10)
    ;
    __sprintf_chk(input_capture_path,1,0x400,"%s%cinput_capture_crash.ir",_nds_system->root_path,
                  0x2f);
    __s = fopen(input_capture_path,"wb");
    fwrite(&_nds_system->input,__size,1,__s);
    fclose(__s);
  }
  signal(signal_number,(__sighandler_t)0x0);
  raise(signal_number);
LAB_080c6944:
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


