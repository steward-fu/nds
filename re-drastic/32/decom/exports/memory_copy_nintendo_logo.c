/*
 * Ghidra decompilation
 *
 * Function : memory_copy_nintendo_logo
 * Address  : 08015fd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void memory_copy_nintendo_logo(memory_struct *memory,u8 *rom_data)

{
  if ((memory->custom_bios_loaded & 2) == 0) {
    return;
  }
  memcpy(memory->arm9_bios + 0x20,rom_data + 0xc0,0x9e);
  return;
}


