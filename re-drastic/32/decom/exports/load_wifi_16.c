/*
 * Ghidra decompilation
 *
 * Function : load_wifi_16
 * Address  : 0800b10c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u16 load_wifi_16(memory_struct *memory,u32 address)

{
  ushort uVar1;
  u16 uVar2;
  uint uVar3;
  
  uVar3 = address & 0x3fff;
  if ((address & 0xffff) - 0x4000 < 0x4000) {
    uVar2 = *(u16 *)(memory->wifi_mem + uVar3);
  }
  else {
    if (uVar3 != 0x15c) {
      if (uVar3 < 0x15d) {
        if (uVar3 != 4) {
          if (uVar3 == 0x3c) {
            return 0x200;
          }
LAB_0800b144:
          return *(u16 *)(memory->wifi_io_registers + uVar3);
        }
      }
      else if ((uVar3 != 0x15e) && (uVar3 != 0x180)) goto LAB_0800b144;
      return 0;
    }
    uVar1 = *(ushort *)(memory->wifi_io_registers + 0x158);
    uVar2 = uVar1 & 0x4000;
    if ((uVar1 & 0x4000) != 0) {
      if (((uint)uVar1 << 0x12) >> 0x1e != 2) {
        return 0;
      }
      uVar2 = (u16)memory->wifi_baseband_buffer[uVar1 & 0x7f];
    }
  }
  return uVar2;
}


