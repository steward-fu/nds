/*
 * Ghidra decompilation
 *
 * Function : config_update_settings
 * Address  : 08097320
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void config_update_settings(config_struct *config)

{
  uint uVar1;
  u64 *__s;
  u64 *map;
  u64 *puVar2;
  u16 *puVar3;
  ushort *puVar4;
  undefined8 uVar5;
  ulonglong in_d18;
  
  __s = config->controls_code_to_config_map;
  set_screen_orientation(config->screen_orientation);
  set_screen_scale_factor(config->screen_scaling);
  set_screen_swap(config->screen_swap);
  memset(__s,0,0x4000);
  puVar4 = (ushort *)((int)&config->rtc_system_time + 2);
  puVar3 = config->controls_a + 0x27;
  uVar1 = 0;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = __s + *puVar4;
    if (*puVar4 != 0xffff) {
      in_d18 = in_d18 & 0xffffffffffff0000 | (ulonglong)uVar1 & 0xffff;
      uVar5 = VectorShiftLeft(1,in_d18,8,1);
      *(uint *)puVar2 = *(uint *)puVar2 | (uint)uVar5;
      *(uint *)((int)puVar2 + 4) = *(uint *)((int)puVar2 + 4) | (uint)((ulonglong)uVar5 >> 0x20);
    }
    puVar3 = puVar3 + 1;
    puVar2 = __s + *puVar3;
    if (*puVar3 != 0xffff) {
      in_d18 = in_d18 & 0xffffffffffff0000 | (ulonglong)uVar1 & 0xffff;
      uVar5 = VectorShiftLeft(1,in_d18,8,1);
      *(uint *)puVar2 = (uint)uVar5 | *(uint *)puVar2;
      *(uint *)((int)puVar2 + 4) = (uint)((ulonglong)uVar5 >> 0x20) | *(uint *)((int)puVar2 + 4);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x28);
  return;
}


