/*
 * Ghidra decompilation
 *
 * Function : update_input
 * Address  : 080a65e0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void update_input(input_struct *input)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  s32 sVar4;
  u16 *dest;
  u16 *ds_screen_top;
  u16 *dest_00;
  u16 *ds_screen_bottom;
  u32 uVar5;
  u32 irq_trigger;
  u32 irq_trigger_1;
  u8 *io_region_2;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  u32 buttons;
  u8 **ppuVar9;
  u32 ds_buttons;
  system_struct *system;
  system_struct *system_00;
  uint uVar10;
  undefined4 *__ptr;
  u8 *input_capture_ptr;
  u32 ext_ds_buttons;
  undefined4 uVar11;
  undefined4 uVar12;
  u8 *puVar13;
  u8 *io_region;
  u8 *io_region_1;
  int *piVar14;
  u8 *input_capture_ptr_1;
  u64 uVar15;
  char path [1024];
  
  iVar2 = __stack_chk_guard;
  ppuVar9 = &input->capture_ptr;
  system_00 = input->system;
  uVar10 = input->button_status;
  platform_get_input(input);
  if (((system_00->config).enable_lua != 0) && (uVar5 = lua_is_active(), uVar5 != 0)) {
    lua_on_frame_update();
  }
  uVar8 = input->button_status;
  if (input->log_mode == '\x02') {
    piVar14 = (int *)*ppuVar9;
    if (*(int *)((int)&system_00->frame_number + 4) == 0 &&
        *piVar14 == *(int *)&system_00->frame_number) {
      uVar8 = piVar14[1] & 0x7fffffff;
      input->touch_status = (byte)((uint)piVar14[1] >> 0x1f);
      input->touch_x = (uint)*(byte *)(piVar14 + 2);
      bVar1 = *(byte *)((int)piVar14 + 9);
      *ppuVar9 = (u8 *)((int)piVar14 + 10);
      input->button_status = uVar8;
      input->touch_y = (uint)bVar1;
    }
  }
  else if (((uVar8 != input->last_button_status) ||
           (input->last_touch_status != input->touch_status)) ||
          ((input->last_touch_status != '\0' &&
           ((input->touch_x != input->last_touch_x || (input->touch_y != input->last_touch_y)))))) {
    __ptr = (undefined4 *)*ppuVar9;
    if (__ptr < input->capture_buffer + 0x7ffec) {
      *__ptr = *(undefined4 *)&system_00->frame_number;
      __ptr[1] = uVar8 & 0x7fffffff | (uint)input->touch_status << 0x1f;
      *(u8 *)(__ptr + 2) = (u8)input->touch_x;
      *(u8 *)((int)__ptr + 9) = (u8)input->touch_y;
      if ((FILE *)input->log_file != (FILE *)0x0) {
        fwrite(__ptr,10,1,(FILE *)input->log_file);
        fflush((FILE *)input->log_file);
      }
      *ppuVar9 = (u8 *)((int)__ptr + 10);
    }
    input->last_button_status = uVar8;
    input->last_touch_x = input->touch_x;
    input->last_touch_y = input->touch_y;
    input->last_touch_status = input->touch_status;
  }
  if ((uVar8 & 0x8000000) != 0) {
    set_debug_mode(&(system_00->cpu_arm9).debug,DEBUG_STEP);
    input->button_status = input->button_status & 0xf7ffffff;
  }
  if ((uVar8 & 0x10000000) != 0) {
    set_debug_mode(&(system_00->cpu_arm7).debug,DEBUG_STEP);
    input->button_status = input->button_status & 0xefffffff;
  }
  if ((uVar8 & 0x20000000) != 0) {
    __sprintf_chk(path,1,0x400,"%s%cprofiles%c%s_translation_post.txt",system_00->root_path,0x2f,
                  0x2f,system_00->gamecard_name);
    __printf_chk(1,"Logging recompiled block information to %s.\n",path);
    cpu_block_log_all(system_00,path);
  }
  if ((uVar8 & 0x80000) != 0) {
    dest = (u16 *)malloc(0x18000);
    dest_00 = (u16 *)malloc(0x18000);
    screen_copy16(dest,0);
    screen_copy16(dest_00,1);
    save_state_index(system_00,(system_00->config).savestate_number,dest,dest_00);
    free(dest);
    free(dest_00);
    input->button_status = input->button_status & 0xfff7ffff;
  }
  if ((uVar8 & 0x100000) != 0) {
    uVar11 = *(undefined4 *)&(system_00->cpu_arm7).debug.instruction_count;
    uVar12 = *(undefined4 *)((int)&(system_00->cpu_arm7).debug.instruction_count + 4);
    uVar15 = (system_00->cpu_arm9).debug.instruction_count;
    input->button_status = input->button_status & 0xffefffff;
    __printf_chk(1,"load state @ %llx, %llx in.\n",(int)uVar15,(int)(uVar15 >> 0x20),uVar11,uVar12);
    if ((system_00->cpu_arm9).debug.mode == '\a') {
      set_debug_mode(&(system_00->cpu_arm9).debug,DEBUG_STEP);
    }
    if ((system_00->cpu_arm7).debug.mode == '\a') {
      set_debug_mode(&(system_00->cpu_arm7).debug,DEBUG_STEP);
    }
    sVar4 = load_state_index(system_00,(system_00->config).savestate_number,(u16 *)0x0,(u16 *)0x0,0)
    ;
    if (sVar4 == 0) goto LAB_080a68b0;
  }
  if ((uVar8 & 0x40000) != 0) {
    input->button_status = input->button_status & 0xfffbffff;
    menu(system_00,0);
    goto LAB_080a68b0;
  }
  if ((uVar8 & 0x2000000) != 0) {
    input->button_status = input->button_status & 0xfdffffff;
    menu(system_00,1);
    goto LAB_080a68b0;
  }
  if ((uVar8 & 0x200000) != 0) {
    uVar7 = (system_00->config).fast_forward;
    input->button_status = input->button_status & 0xffdfffff;
    (system_00->config).fast_forward = uVar7 ^ 1;
  }
  if ((uVar8 & 0x400000) != 0) {
    uVar7 = (system_00->config).screen_swap ^ 1;
    input->button_status = input->button_status & 0xffbfffff;
    (system_00->config).screen_swap = uVar7;
    set_screen_swap(uVar7);
  }
  if ((uVar8 & 0x800000) != 0) {
    uVar7 = (system_00->config).screen_orientation ^ 1;
    input->button_status = input->button_status & 0xff7fffff;
    (system_00->config).screen_orientation = uVar7;
    set_screen_orientation(uVar7);
  }
  if ((uVar8 & 0x1000000) != 0) {
    uVar7 = (system_00->config).screen_orientation ^ 2;
    input->button_status = input->button_status & 0xfeffffff;
    (system_00->config).screen_orientation = uVar7;
    set_screen_orientation(uVar7);
  }
  if ((uVar8 & 0x4000000) != 0) {
                    /* WARNING: Subroutine does not return */
    quit(input->system);
  }
  uVar7 = (uVar8 << 0x1b) >> 0x1f;
  if ((uVar8 & 0x20) != 0) {
    uVar7 = uVar7 | 2;
  }
  if ((uVar8 & 1) != 0) {
    uVar7 = uVar7 | 0x40;
  }
  if ((uVar8 & 2) != 0) {
    uVar7 = uVar7 | 0x80;
  }
  if ((uVar8 & 4) != 0) {
    uVar7 = uVar7 | 0x20;
  }
  if ((uVar8 & 8) != 0) {
    uVar7 = uVar7 | 0x10;
  }
  if ((uVar8 & 0x100) != 0) {
    uVar7 = uVar7 | 0x200;
  }
  if ((uVar8 & 0x200) != 0) {
    uVar7 = uVar7 | 0x100;
  }
  if ((uVar8 & 0x400) != 0) {
    uVar7 = uVar7 | 8;
  }
  uVar6 = 0xff03;
  if ((uVar8 & 0x800) != 0) {
    uVar7 = uVar7 | 4;
  }
  ext_ds_buttons._0_2_ = 0xff01;
  if ((uVar8 & 0x40) == 0) {
    uVar6 = 0xff02;
    ext_ds_buttons._0_2_ = 0xff00;
  }
  if ((uVar8 & 0x80) != 0) {
    ext_ds_buttons._0_2_ = uVar6;
  }
  if ((uVar8 & 0x1000) == 0) {
    ext_ds_buttons._0_2_ = (ushort)ext_ds_buttons | 0x80;
  }
  if (input->touch_status != '\0') {
    ext_ds_buttons._0_2_ = (ushort)ext_ds_buttons | 0x40;
    touchscreen_set_position
              (&(system_00->spi_peripherals).touchscreen,input->touch_x,input->touch_y);
  }
  uVar6 = *(ushort *)((system_00->memory).arm9_io_registers + 0x132);
  if ((uVar6 & 0x4000) != 0) {
    if ((uVar6 & 0x8000) == 0) {
      if (uVar7 == (uVar6 & uVar7)) goto LAB_080a679c;
    }
    else if ((uVar6 & uVar7) != 0) {
LAB_080a679c:
      puVar13 = (system_00->cpu_arm9).io_region;
      uVar3 = *(uint *)(puVar13 + 0x214);
      *(uint *)(puVar13 + 0x214) = uVar3 | 0x1000;
      if (((system_00->cpu_arm9).state & 4) == 0) {
        (system_00->cpu_arm9).active_interrupts =
             (uVar3 | 0x1000) & -*(int *)(puVar13 + 0x208) & *(uint *)(puVar13 + 0x210);
      }
    }
  }
  uVar6 = *(ushort *)((system_00->memory).arm7_io_registers + 0x132);
  if ((uVar6 & 0x4000) != 0) {
    if ((uVar6 & 0x8000) == 0) {
      if (uVar7 == (uVar6 & uVar7)) goto LAB_080a6800;
    }
    else if ((uVar6 & uVar7) != 0) {
LAB_080a6800:
      puVar13 = (system_00->cpu_arm7).io_region;
      uVar3 = *(uint *)(puVar13 + 0x214);
      *(uint *)(puVar13 + 0x214) = uVar3 | 0x1000;
      if (((system_00->cpu_arm7).state & 4) == 0) {
        (system_00->cpu_arm7).active_interrupts =
             (uVar3 | 0x1000) & -*(int *)(puVar13 + 0x208) & *(uint *)(puVar13 + 0x210);
      }
    }
  }
  uVar6 = (ushort)uVar7 ^ 0x3ff;
  *(ushort *)((system_00->memory).arm9_io_registers + 0x130) = uVar6;
  *(ushort *)((system_00->memory).arm7_io_registers + 0x130) = uVar6;
  *(ushort *)((system_00->memory).arm7_io_registers + 0x136) = ~(ushort)ext_ds_buttons;
  if (((uint)((uVar8 & 0x1000) == 0) & uVar10 >> 0xc) != 0) {
    puVar13 = (system_00->cpu_arm7).io_region;
    uVar10 = *(uint *)(puVar13 + 0x214);
    *(uint *)(puVar13 + 0x214) = uVar10 | 0x400000;
    if (((system_00->cpu_arm7).state & 4) == 0) {
      (system_00->cpu_arm7).active_interrupts =
           (uVar10 | 0x400000) & -*(int *)(puVar13 + 0x208) & *(uint *)(puVar13 + 0x210);
    }
  }
LAB_080a68b0:
  if (iVar2 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


