/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm7_16
 * Address  : 080091d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_io_register_arm7_16(memory_struct *memory,u32 address,u16 value)

{
  u32 ie_value;
  u32 ie_value_1;
  u32 prescale_select;
  u32 prescale_select_1;
  u32 prescale_select_2;
  u32 prescale_select_3;
  u32 new_ie_value;
  cpu_struct *cpu;
  u32 new_ie_value_1;
  cpu_struct *cpu_1;
  uint uVar1;
  u32 channel;
  cpu_struct *cpu_2;
  cpu_struct *cpu_3;
  cpu_struct *cpu_4;
  cpu_struct *cpu_5;
  spu_struct *spu;
  s32 offset_cycles;
  s32 offset_cycles_1;
  s32 offset_cycles_2;
  s32 offset_cycles_3;
  
                    /* WARNING: Could not recover jumptable at 0x08009208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (address - 0xba < 0x445) {
    (**(code **)(&DAT_08009210 + (address - 0xba) * 4))();
    return;
  }
  if (address < 0x800000) {
    store_io_register_arm7_8(memory,address,(u8)value);
    store_io_register_arm7_8(memory,address + 1,(u8)(value >> 8));
    return;
  }
  uVar1 = address & 0x3fff;
  if ((address & 0xffff) - 0x4000 < 0x4000) {
    *(u16 *)(memory->wifi_mem + uVar1) = value;
  }
  else {
    if ((uVar1 == 0x158) && (((uint)value << 0x12) >> 0x1e == 1)) {
      memory->wifi_baseband_buffer[value & 0x7f] = memory->wifi_io_registers[0x15a];
    }
    *(u16 *)(memory->wifi_io_registers + uVar1) = value;
  }
  return;
}


