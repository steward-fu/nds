/*
 * Ghidra decompilation
 *
 * Function : recompiler_cpu_next_action_arm9_to_arm7
 * Address  : 080aaf30
 * Program  : drastic
 */


u32 recompiler_cpu_next_action_arm9_to_arm7
              (undefined4 param_1,undefined4 param_2,u32 param_3,u32 param_4)

{
  int iVar1;
  u8 *puVar2;
  u32 uVar3;
  void *pvVar4;
  u32 unaff_r4;
  system_struct *system;
  u32 unaff_r5;
  u32 unaff_r6;
  u32 unaff_r7;
  u32 unaff_r8;
  u32 unaff_r9;
  int unaff_r10;
  memory_interface_struct *unaff_r11;
  int iVar5;
  u32 in_r12;
  void *in_lr;
  undefined4 uVar6;
  undefined in_OV;
  bool bVar7;
  
  do {
    *(void **)((int)(unaff_r11 + -1) + 0x8041fc) = in_lr;
    if ((bool)in_OV) {
      uVar6 = 0x10000000;
    }
    else {
      uVar6 = 0;
    }
    *(undefined4 *)((int)(unaff_r11 + -1) + 0x804148) = uVar6;
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
    *(int *)((int)(unaff_r11 + -1) + 0x8041f8) = unaff_r10;
    iVar5 = *(int *)((int)(unaff_r11 + -1) + 0x804204);
    iVar1 = *(int *)(*(int *)(iVar5 + 0x2308) + 0x10);
    bVar7 = SCARRY4(*(int *)(iVar5 + 0x236c),iVar1);
    iVar1 = *(int *)(iVar5 + 0x236c) + iVar1;
    if (-1 < iVar1) {
      bVar7 = false;
      if (*(char *)(iVar5 + 0x2105) == '\0') {
        return *(u32 *)(iVar5 + 0x22bc);
      }
      iVar1 = -1;
    }
    *(undefined4 *)(iVar5 + 0x2370) = *(undefined4 *)(iVar5 + 0x2370);
    if (bVar7) {
      uVar6 = 0x10000000;
    }
    else {
      uVar6 = 0;
    }
    *(undefined4 *)(iVar5 + 0x22bc) = uVar6;
    *(undefined4 *)(iVar5 + 0x232c) = *(undefined4 *)(iVar5 + 0x232c);
    *(undefined4 *)(iVar5 + 0x2330) = *(undefined4 *)(iVar5 + 0x2330);
    *(undefined4 *)(iVar5 + 0x2334) = *(undefined4 *)(iVar5 + 0x2334);
    *(undefined4 *)(iVar5 + 0x2338) = *(undefined4 *)(iVar5 + 0x2338);
    *(undefined4 *)(iVar5 + 0x233c) = *(undefined4 *)(iVar5 + 0x233c);
    *(undefined4 *)(iVar5 + 0x2340) = *(undefined4 *)(iVar5 + 0x2340);
    *(undefined4 *)(iVar5 + 0x2344) = *(undefined4 *)(iVar5 + 0x2344);
    *(undefined4 *)(iVar5 + 0x235c) = *(undefined4 *)(iVar5 + 0x235c);
    *(undefined4 *)(iVar5 + 0x2360) = *(undefined4 *)(iVar5 + 0x2360);
    *(undefined4 *)(iVar5 + 0x2364) = *(undefined4 *)(iVar5 + 0x2364);
    system = *(system_struct **)(iVar5 + 0x2308);
    *(int *)(iVar5 + 0x236c) = iVar1;
    execute_events(system);
    unaff_r11 = &(system->cpu_arm9).memory_interface;
    if ((system->cpu_arm9).active_interrupts != 0) {
      pvVar4 = (system->cpu_arm9).block_resume_ptr;
      if (((system->cpu_arm9).cpsr & 0x80) == 0) {
        if (pvVar4 != (void *)0x0) {
          (system->cpu_arm9).pc = *(u32 *)(*(int *)((int)pvVar4 + -0xc) + 4);
        }
        (system->cpu_arm9).cpsr =
             (system->cpu_arm9).native_flags & 0xf0000000 | (system->cpu_arm9).cpsr & 0xfffffff;
        execute_arm_raise_interrupt(&system->cpu_arm9);
        puVar2 = (system->cpu_arm9).irq_block_ptr;
      }
      else {
        if ((system->cpu_arm9).state == '\0') goto LAB_080ab0ac;
        puVar2 = (u8 *)cpu_block_lookup_base(&system->cpu_arm9,(system->cpu_arm9).pc);
      }
      (system->cpu_arm9).state = '\0';
      (system->cpu_arm9).block_resume_ptr = puVar2 + 8;
    }
LAB_080ab0ac:
    if ((system->cpu_arm7).active_interrupts != 0) {
      pvVar4 = (system->cpu_arm7).block_resume_ptr;
      if (((system->cpu_arm7).cpsr & 0x80) == 0) {
        if (pvVar4 != (void *)0x0) {
          (system->cpu_arm7).pc = *(u32 *)(*(int *)((int)pvVar4 + -0xc) + 4);
        }
        if (((system->cpu_arm7).state != '\0') &&
           (event_force_task_switch_function(system), ((system->cpu_arm7).state & 2) != 0)) {
          (system->cpu_arm9).state = (system->cpu_arm9).state + 0xfe;
        }
        (system->cpu_arm7).cpsr =
             (system->cpu_arm7).native_flags & 0xf0000000 | (system->cpu_arm7).cpsr & 0xfffffff;
        execute_arm_raise_interrupt(&system->cpu_arm7);
        puVar2 = (system->cpu_arm7).irq_block_ptr;
      }
      else {
        if ((system->cpu_arm7).state == '\0') goto LAB_080ab170;
        event_force_task_switch_function(system);
        if (((system->cpu_arm7).state & 2) != 0) {
          (system->cpu_arm9).state = (system->cpu_arm9).state + 0xfe;
        }
        puVar2 = (u8 *)cpu_block_lookup_base(&system->cpu_arm7,(system->cpu_arm7).pc);
      }
      (system->cpu_arm7).state = '\0';
      (system->cpu_arm7).block_resume_ptr = puVar2 + 8;
    }
LAB_080ab170:
    uVar3 = ((system->event_list).base)->cycles_forward;
    iVar1 = (system->cpu_arm9).cycles_remaining;
    system->cycles_to_next_event = uVar3;
    in_OV = SCARRY4(iVar1,uVar3);
    unaff_r10 = iVar1 + uVar3;
    in_lr = (system->cpu_arm9).block_resume_ptr;
    param_3 = (system->cpu_arm9).reg[0];
    param_4 = (system->cpu_arm9).reg[1];
    unaff_r4 = (system->cpu_arm9).reg[2];
    unaff_r5 = (system->cpu_arm9).reg[3];
    unaff_r6 = (system->cpu_arm9).reg[4];
    unaff_r7 = (system->cpu_arm9).reg[5];
    unaff_r8 = (system->cpu_arm9).reg[6];
    unaff_r9 = (system->cpu_arm9).reg[0xc];
    in_r12 = (system->cpu_arm9).reg[0xd];
    register0x00000054 = (BADSPACEBASE *)(system->cpu_arm9).reg[0xe];
    if (-1 < unaff_r10) {
      in_OV = false;
      if ((system->cpu_arm9).state == '\0') {
        return (system->cpu_arm9).save_space[0x1f];
      }
      unaff_r10 = -1;
    }
  } while( true );
}


