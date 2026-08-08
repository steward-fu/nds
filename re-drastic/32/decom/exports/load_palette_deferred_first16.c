/*
 * Ghidra decompilation
 *
 * Function : load_palette_deferred_first16
 * Address  : 0800848c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u16 load_palette_deferred_first16(memory_struct *memory,u32 address)

{
  u16 *puVar1;
  
  if ((code *)memory->memory_regions_arm9[10].store_handler.direct_memory == store_palette_deferred8
     ) {
    puVar1 = memory->palette_ram_shadow;
  }
  else {
    puVar1 = (u16 *)memcpy(memory->palette_ram_shadow,memory->palette_ram,0x800);
    memory->memory_regions_arm9[10].load_handler.direct_memory = (u8 *)puVar1;
    memory->memory_regions_arm9[10].load_access = '\0';
    memory->memory_regions_arm9[10].store_handler.extended_function.store8 = store_palette_deferred8
    ;
    memory->memory_regions_arm9[10].store_handler.extended_function.store16 =
         store_palette_deferred16;
    memory->memory_regions_arm9[10].store_handler.extended_function.store32 =
         store_palette_deferred32;
  }
  return *(u16 *)((int)puVar1 + (address & 0x7ff));
}


