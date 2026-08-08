/*
 * Ghidra decompilation
 *
 * Function : recompiler_entry
 * Address  : 080af14c
 * Program  : drastic
 */


u32 recompiler_entry(system_struct *param_1)

{
  u8 *puVar1;
  u32 uVar2;
  void *pvVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  u32 uVar8;
  u32 uVar9;
  u32 uVar10;
  int iVar11;
  s32 sVar12;
  cpu_struct *pcVar13;
  u32 uVar14;
  u32 uVar15;
  u32 uVar16;
  u32 uVar17;
  bool bVar18;
  
  (param_1->cpu_arm7).save_space[0x1d] = (u32)register0x00000054;
  (param_1->cpu_arm9).save_space[0x1d] = (u32)register0x00000054;
  do {
    execute_events(param_1);
    if ((param_1->cpu_arm9).active_interrupts != 0) {
      pvVar3 = (param_1->cpu_arm9).block_resume_ptr;
      if (((param_1->cpu_arm9).cpsr & 0x80) == 0) {
        if (pvVar3 != (void *)0x0) {
          (param_1->cpu_arm9).pc = *(u32 *)(*(int *)((int)pvVar3 + -0xc) + 4);
        }
        (param_1->cpu_arm9).cpsr =
             (param_1->cpu_arm9).native_flags & 0xf0000000 | (param_1->cpu_arm9).cpsr & 0xfffffff;
        execute_arm_raise_interrupt(&param_1->cpu_arm9);
        puVar1 = (param_1->cpu_arm9).irq_block_ptr;
      }
      else {
        if ((param_1->cpu_arm9).state == '\0') goto LAB_080ab0ac;
        puVar1 = (u8 *)cpu_block_lookup_base(&param_1->cpu_arm9,(param_1->cpu_arm9).pc);
      }
      (param_1->cpu_arm9).state = '\0';
      (param_1->cpu_arm9).block_resume_ptr = puVar1 + 8;
    }
LAB_080ab0ac:
    if ((param_1->cpu_arm7).active_interrupts != 0) {
      pvVar3 = (param_1->cpu_arm7).block_resume_ptr;
      if (((param_1->cpu_arm7).cpsr & 0x80) == 0) {
        if (pvVar3 != (void *)0x0) {
          (param_1->cpu_arm7).pc = *(u32 *)(*(int *)((int)pvVar3 + -0xc) + 4);
        }
        if (((param_1->cpu_arm7).state != '\0') &&
           (event_force_task_switch_function(param_1), ((param_1->cpu_arm7).state & 2) != 0)) {
          (param_1->cpu_arm9).state = (param_1->cpu_arm9).state + 0xfe;
        }
        (param_1->cpu_arm7).cpsr =
             (param_1->cpu_arm7).native_flags & 0xf0000000 | (param_1->cpu_arm7).cpsr & 0xfffffff;
        execute_arm_raise_interrupt(&param_1->cpu_arm7);
        puVar1 = (param_1->cpu_arm7).irq_block_ptr;
      }
      else {
        if ((param_1->cpu_arm7).state == '\0') goto LAB_080ab170;
        event_force_task_switch_function(param_1);
        if (((param_1->cpu_arm7).state & 2) != 0) {
          (param_1->cpu_arm9).state = (param_1->cpu_arm9).state + 0xfe;
        }
        puVar1 = (u8 *)cpu_block_lookup_base(&param_1->cpu_arm7,(param_1->cpu_arm7).pc);
      }
      (param_1->cpu_arm7).state = '\0';
      (param_1->cpu_arm7).block_resume_ptr = puVar1 + 8;
    }
LAB_080ab170:
    uVar2 = ((param_1->event_list).base)->cycles_forward;
    iVar11 = (param_1->cpu_arm9).cycles_remaining;
    param_1->cycles_to_next_event = uVar2;
    bVar18 = SCARRY4(iVar11,uVar2);
    sVar12 = iVar11 + uVar2;
    uVar2 = (param_1->cpu_arm9).reg[0];
    uVar4 = (param_1->cpu_arm9).reg[1];
    uVar5 = (param_1->cpu_arm9).reg[2];
    uVar6 = (param_1->cpu_arm9).reg[3];
    uVar7 = (param_1->cpu_arm9).reg[4];
    uVar8 = (param_1->cpu_arm9).reg[5];
    uVar9 = (param_1->cpu_arm9).reg[6];
    uVar10 = (param_1->cpu_arm9).reg[0xc];
    uVar14 = (param_1->cpu_arm9).reg[0xd];
    uVar16 = (param_1->cpu_arm9).reg[0xe];
    if (-1 < sVar12) {
      bVar18 = false;
      if ((param_1->cpu_arm9).state == '\0') {
        return (param_1->cpu_arm9).save_space[0x1f];
      }
      sVar12 = -1;
    }
    (param_1->cpu_arm9).block_resume_ptr = (param_1->cpu_arm9).block_resume_ptr;
    if (bVar18) {
      uVar17 = 0x10000000;
    }
    else {
      uVar17 = 0;
    }
    (param_1->cpu_arm9).save_space[0x1f] = uVar17;
    (param_1->cpu_arm9).reg[0] = uVar2;
    (param_1->cpu_arm9).reg[1] = uVar4;
    (param_1->cpu_arm9).reg[2] = uVar5;
    (param_1->cpu_arm9).reg[3] = uVar6;
    (param_1->cpu_arm9).reg[4] = uVar7;
    (param_1->cpu_arm9).reg[5] = uVar8;
    (param_1->cpu_arm9).reg[6] = uVar9;
    (param_1->cpu_arm9).reg[0xc] = uVar10;
    (param_1->cpu_arm9).reg[0xd] = uVar14;
    (param_1->cpu_arm9).reg[0xe] = uVar16;
    (param_1->cpu_arm9).cycles_remaining = sVar12;
    pcVar13 = (param_1->cpu_arm9).alternate_cpu;
    uVar2 = pcVar13->system->cycles_to_next_event;
    bVar18 = SCARRY4(pcVar13->cycles_remaining,uVar2);
    sVar12 = pcVar13->cycles_remaining + uVar2;
    uVar2 = pcVar13->reg[0];
    uVar4 = pcVar13->reg[1];
    uVar5 = pcVar13->reg[2];
    uVar6 = pcVar13->reg[3];
    uVar7 = pcVar13->reg[4];
    uVar8 = pcVar13->reg[5];
    uVar9 = pcVar13->reg[6];
    uVar10 = pcVar13->reg[0xc];
    uVar14 = pcVar13->reg[0xd];
    uVar15 = pcVar13->reg[0xe];
    if (-1 < sVar12) {
      bVar18 = false;
      if (pcVar13->state == '\0') {
        return pcVar13->save_space[0x1f];
      }
      sVar12 = -1;
    }
    pcVar13->block_resume_ptr = pcVar13->block_resume_ptr;
    if (bVar18) {
      uVar17 = 0x10000000;
    }
    else {
      uVar17 = 0;
    }
    pcVar13->save_space[0x1f] = uVar17;
    pcVar13->reg[0] = uVar2;
    pcVar13->reg[1] = uVar4;
    pcVar13->reg[2] = uVar5;
    pcVar13->reg[3] = uVar6;
    pcVar13->reg[4] = uVar7;
    pcVar13->reg[5] = uVar8;
    pcVar13->reg[6] = uVar9;
    pcVar13->reg[0xc] = uVar10;
    pcVar13->reg[0xd] = uVar14;
    pcVar13->reg[0xe] = uVar15;
    param_1 = pcVar13->system;
    pcVar13->cycles_remaining = sVar12;
  } while( true );
}


