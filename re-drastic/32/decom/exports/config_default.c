/*
 * Ghidra decompilation
 *
 * Function : config_default
 * Address  : 08097408
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void config_default(config_struct *config)

{
  int iVar1;
  u16 *puVar2;
  uint uVar3;
  u64 *__s;
  u64 *map;
  u64 *puVar4;
  u16 *controls_a;
  u16 *controls_b;
  ushort *puVar5;
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined auVar8 [16];
  char default_username [11];
  
  iVar1 = __stack_chk_guard;
  puts("Setting default configuration.");
  config->frameskip_value = 4;
  __s = config->controls_code_to_config_map;
  config->show_frame_counter = 0;
  config->screen_orientation = 0;
  config->screen_swap = 0;
  config->fast_forward = 0;
  config->enable_sound = 1;
  config->clock_speed = 0;
  auVar6 = VectorCopyLong(0x7453617244207244,1,1);
  config->frameskip_type = 2;
  auVar8 = VectorCopyLong(auVar6._0_8_,2,1);
  auVar6 = VectorCopyLong(auVar6._8_8_,2,1);
  config->screen_scaling = 2;
  config->threaded_3d = 0;
  config->mirror_touch = 0;
  config->compress_savestates = 1;
  config->savestate_snapshot = 1;
  config->unzip_roms = 0;
  config->backup_in_savestates = 1;
  config->ignore_gamecard_limit = 0;
  config->frame_interval = 0;
  config->batch_threads_3d_count = 1;
  config->trim_roms = 0;
  config->fix_main_2d_screen = 0;
  config->disable_edge_marking = 0;
  config->hires_3d = 0;
  config->bypass_3d = 0;
  config->use_rtc_custom_time = 0;
  config->rtc_custom_time = 0;
  config->rtc_system_time = 0;
  (config->firmware).language = 1;
  *(longlong *)(config->firmware).username = auVar8._0_8_;
  *(longlong *)((config->firmware).username + 2) = auVar8._8_8_;
  *(longlong *)((config->firmware).username + 4) = auVar6._0_8_;
  uVar7 = auVar6._8_8_;
  *(undefined8 *)((config->firmware).username + 6) = uVar7;
  (config->firmware).username[8] = L'i';
  (config->firmware).username[9] = L'c';
  (config->firmware).username[10] = L'\0';
  (config->firmware).favorite_color = 0;
  (config->firmware).birthday_month = 1;
  (config->firmware).birthday_day = 1;
  config->enable_cheats = 1;
  config->enable_lua = 1;
  memset(config->controls_a,0xff,0x50);
  memset(config->controls_b,0xff,0x50);
  platform_set_default_controls(config->controls_a,config->controls_b);
  set_screen_orientation(config->screen_orientation);
  set_screen_scale_factor(config->screen_scaling);
  set_screen_swap(config->screen_swap);
  memset(__s,0,0x4000);
  auVar6._8_8_ = uVar7;
  auVar6._0_8_ = 1;
  uVar3 = 0;
  puVar5 = (ushort *)((int)&config->rtc_system_time + 2);
  puVar2 = config->controls_a + 0x27;
  do {
    puVar5 = puVar5 + 1;
    if (*puVar5 != 0xffff) {
      auVar8._0_8_ = auVar8._0_8_ & 0xffffffffffff0000 | (ulonglong)uVar3 & 0xffff;
      puVar4 = __s + *puVar5;
      auVar6._8_8_ = VectorShiftLeft(auVar6._0_8_,auVar8._0_8_,8,1);
      *(uint *)puVar4 = *(uint *)puVar4 | (uint)auVar6._8_8_;
      *(uint *)((int)puVar4 + 4) =
           *(uint *)((int)puVar4 + 4) | (uint)((ulonglong)auVar6._8_8_ >> 0x20);
    }
    puVar2 = puVar2 + 1;
    if (*puVar2 != 0xffff) {
      auVar8._0_8_ = auVar8._0_8_ & 0xffffffffffff0000 | (ulonglong)uVar3 & 0xffff;
      puVar4 = __s + *puVar2;
      auVar6._8_8_ = VectorShiftLeft(auVar6._0_8_,auVar8._0_8_,8,1);
      *(uint *)puVar4 = *(uint *)puVar4 | (uint)auVar6._8_8_;
      *(uint *)((int)puVar4 + 4) =
           *(uint *)((int)puVar4 + 4) | (uint)((ulonglong)auVar6._8_8_ >> 0x20);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x28);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


