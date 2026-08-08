/*
 * Ghidra decompilation
 *
 * Function : store_wifi_16
 * Address  : 0800b4e0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_wifi_16(memory_struct *memory,u32 address,u16 value)

{
  uint uVar1;
  
  uVar1 = address & 0x3fff;
  if (0x3fff < (address & 0xffff) - 0x4000) {
    if ((uVar1 == 0x158) && (((uint)value << 0x12) >> 0x1e == 1)) {
      memory->wifi_baseband_buffer[value & 0x7f] = memory->wifi_io_registers[0x15a];
    }
    *(u16 *)(memory->wifi_io_registers + uVar1) = value;
    return;
  }
  *(u16 *)(memory->wifi_mem + uVar1) = value;
  return;
}


