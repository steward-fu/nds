/*
 * Ghidra decompilation
 *
 * Function : load_oam_deferred_first8
 * Address  : 080085b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 load_oam_deferred_first8(memory_struct *memory,u32 address)

{
  u16 *puVar1;
  
  if ((code *)memory->memory_regions_arm9[0xe].store_handler.direct_memory == store_oam_deferred8) {
    puVar1 = memory->oam_ram_shadow;
  }
  else {
    puVar1 = (u16 *)memcpy(memory->oam_ram_shadow,memory->oam_ram,0x800);
    memory->memory_regions_arm9[0xe].load_handler.direct_memory = (u8 *)puVar1;
    memory->memory_regions_arm9[0xe].load_access = '\0';
    memory->memory_regions_arm9[0xe].store_handler.extended_function.store8 = store_oam_deferred8;
    memory->memory_regions_arm9[0xe].store_handler.extended_function.store16 = store_oam_deferred16;
    memory->memory_regions_arm9[0xe].store_handler.extended_function.store32 = store_oam_deferred32;
  }
  return *(u8 *)((int)puVar1 + (address & 0x7ff));
}


