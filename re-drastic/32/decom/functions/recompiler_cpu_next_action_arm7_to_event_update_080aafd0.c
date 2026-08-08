/*
 * Ghidra decompilation
 *
 * Function : recompiler_cpu_next_action_arm7_to_event_update
 * Address  : 080aafd0
 * Program  : drastic
 */


u32 recompiler_cpu_next_action_arm7_to_event_update
              (undefined4 param_1,undefined4 param_2,u32 param_3,u32 param_4)

{
  u8 *puVar1;
  u32 uVar2;
  void *pvVar3;
  u32 uVar4;
  u32 unaff_r4;
  system_struct *system;
  u32 uVar5;
  u32 unaff_r5;
  u32 uVar6;
  u32 unaff_r6;
  u32 uVar7;
  u32 unaff_r7;
  u32 uVar8;
  u32 unaff_r8;
  u32 uVar9;
  u32 unaff_r9;
  u32 uVar10;
  int unaff_r10;
  int iVar11;
  s32 sVar12;
  cpu_struct *pcVar13;
  memory_interface_struct *unaff_r11;
  u32 in_r12;
  u32 uVar14;
  u32 uVar15;
  u32 uVar16;
  void *in_lr;
  undefined4 uVar17;
  undefined in_OV;
  bool bVar18;
  
  do {
    *(void **)((int)(unaff_r11 + -1) + 0x8041fc) = in_lr;
    if ((bool)in_OV) {
      uVar17 = 0x10000000;
    }
    else {
      uVar17 = 0;
    }
    *(undefined4 *)((int)(unaff_r11 + -1) + 0x804148) = uVar17;
    *(u32 *)((int)(unaff_r11 + -1) + 0x8041b8) = param_3;
    *(u32 *)((int)(unaff_r11 + -1) + 0x8041bc) = param_4;
    *(u32 *)((int)(unaff_r11 + -1) + 0x8041c0) = unaff_r4;
    *(u32 *)((int)(unaff_r11 + -1) + 0x8041c4) = unaff_r5;
    *(u32 *)((int)(unaff_r11 + -1) + 0x8041c8) = unaff_r6;
    *(u32 *)((int)(unaff_r11 + -1) + 0x8041cc) = unaff_r7;
    *(u32 *)((int)(unaff_r11 + -1) + 0x8041d0) = unaff_r8;
    *(u32 *)((int)(unaff_r11 + -1) + 0x8041e8) = unaff_r9;
    *(u32 *)((int)(unaff_r11 + -1) + 0x8041ec) = in_r12;
    *(BADSPACEBASE **)((int)(unaff_r11 + -1) + 0x8041f0) = register0x00000054;
    system = *(system_struct **)((int)(unaff_r11 + -1) + 0x804194);
    *(int *)((int)(unaff_r11 + -1) + 0x8041f8) = unaff_r10;
    execute_events(system);
    if ((system->cpu_arm9).active_interrupts != 0) {
      pvVar3 = (system->cpu_arm9).block_resume_ptr;
      if (((system->cpu_arm9).cpsr & 0x80) == 0) {
        if (pvVar3 != (void *)0x0) {
          (system->cpu_arm9).pc = *(u32 *)(*(int *)((int)pvVar3 + -0xc) + 4);
        }
        (system->cpu_arm9).cpsr =
             (system->cpu_arm9).native_flags & 0xf0000000 | (system->cpu_arm9).cpsr & 0xfffffff;
        execute_arm_raise_interrupt(&system->cpu_arm9);
        puVar1 = (system->cpu_arm9).irq_block_ptr;
      }
      else {
        if ((system->cpu_arm9).state == '\0') goto LAB_080ab0ac;
        puVar1 = (u8 *)cpu_block_lookup_base(&system->cpu_arm9,(system->cpu_arm9).pc);
      }
      (system->cpu_arm9).state = '\0';
      (system->cpu_arm9).block_resume_ptr = puVar1 + 8;
    }
LAB_080ab0ac:
    if ((system->cpu_arm7).active_interrupts != 0) {
      pvVar3 = (system->cpu_arm7).block_resume_ptr;
      if (((system->cpu_arm7).cpsr & 0x80) == 0) {
        if (pvVar3 != (void *)0x0) {
          (system->cpu_arm7).pc = *(u32 *)(*(int *)((int)pvVar3 + -0xc) + 4);
        }
        if (((system->cpu_arm7).state != '\0') &&
           (event_force_task_switch_function(system), ((system->cpu_arm7).state & 2) != 0)) {
          (system->cpu_arm9).state = (system->cpu_arm9).state + 0xfe;
        }
        (system->cpu_arm7).cpsr =
             (system->cpu_arm7).native_flags & 0xf0000000 | (system->cpu_arm7).cpsr & 0xfffffff;
        execute_arm_raise_interrupt(&system->cpu_arm7);
        puVar1 = (system->cpu_arm7).irq_block_ptr;
      }
      else {
        if ((system->cpu_arm7).state == '\0') goto LAB_080ab170;
        event_force_task_switch_function(system);
        if (((system->cpu_arm7).state & 2) != 0) {
          (system->cpu_arm9).state = (system->cpu_arm9).state + 0xfe;
        }
        puVar1 = (u8 *)cpu_block_lookup_base(&system->cpu_arm7,(system->cpu_arm7).pc);
      }
      (system->cpu_arm7).state = '\0';
      (system->cpu_arm7).block_resume_ptr = puVar1 + 8;
    }
LAB_080ab170:
    uVar2 = ((system->event_list).base)->cycles_forward;
    iVar11 = (system->cpu_arm9).cycles_remaining;
    system->cycles_to_next_event = uVar2;
    bVar18 = SCARRY4(iVar11,uVar2);
    sVar12 = iVar11 + uVar2;
    uVar2 = (system->cpu_arm9).reg[0];
    uVar4 = (system->cpu_arm9).reg[1];
    uVar5 = (system->cpu_arm9).reg[2];
    uVar6 = (system->cpu_arm9).reg[3];
    uVar7 = (system->cpu_arm9).reg[4];
    uVar8 = (system->cpu_arm9).reg[5];
    uVar9 = (system->cpu_arm9).reg[6];
    uVar10 = (system->cpu_arm9).reg[0xc];
    uVar14 = (system->cpu_arm9).reg[0xd];
    uVar15 = (system->cpu_arm9).reg[0xe];
    if (-1 < sVar12) {
      bVar18 = false;
      if ((system->cpu_arm9).state == '\0') {
        return (system->cpu_arm9).save_space[0x1f];
      }
      sVar12 = -1;
    }
    (system->cpu_arm9).block_resume_ptr = (system->cpu_arm9).block_resume_ptr;
    if (bVar18) {
      uVar16 = 0x10000000;
    }
    else {
      uVar16 = 0;
    }
    (system->cpu_arm9).save_space[0x1f] = uVar16;
    (system->cpu_arm9).reg[0] = uVar2;
    (system->cpu_arm9).reg[1] = uVar4;
    (system->cpu_arm9).reg[2] = uVar5;
    (system->cpu_arm9).reg[3] = uVar6;
    (system->cpu_arm9).reg[4] = uVar7;
    (system->cpu_arm9).reg[5] = uVar8;
    (system->cpu_arm9).reg[6] = uVar9;
    (system->cpu_arm9).reg[0xc] = uVar10;
    (system->cpu_arm9).reg[0xd] = uVar14;
    (system->cpu_arm9).reg[0xe] = uVar15;
    (system->cpu_arm9).cycles_remaining = sVar12;
    pcVar13 = (system->cpu_arm9).alternate_cpu;
    unaff_r11 = &pcVar13->memory_interface;
    uVar2 = pcVar13->system->cycles_to_next_event;
    in_lr = pcVar13->block_resume_ptr;
    in_OV = SCARRY4(pcVar13->cycles_remaining,uVar2);
    unaff_r10 = pcVar13->cycles_remaining + uVar2;
    param_3 = pcVar13->reg[0];
    param_4 = pcVar13->reg[1];
    unaff_r4 = pcVar13->reg[2];
    unaff_r5 = pcVar13->reg[3];
    unaff_r6 = pcVar13->reg[4];
    unaff_r7 = pcVar13->reg[5];
    unaff_r8 = pcVar13->reg[6];
    unaff_r9 = pcVar13->reg[0xc];
    in_r12 = pcVar13->reg[0xd];
    register0x00000054 = (BADSPACEBASE *)pcVar13->reg[0xe];
    if (-1 < unaff_r10) {
      in_OV = false;
      if (pcVar13->state == '\0') {
        return pcVar13->save_space[0x1f];
      }
      unaff_r10 = -1;
    }
  } while( true );
}


