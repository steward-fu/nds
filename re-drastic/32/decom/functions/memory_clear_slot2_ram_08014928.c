/*
 * Ghidra decompilation
 *
 * Function : memory_clear_slot2_ram
 * Address  : 08014928
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void memory_clear_slot2_ram(memory_struct *memory)

{
  if (memory->slot2_ram != (u8 *)0x0) {
    free(memory->slot2_ram);
  }
  if (memory->slot2_ram_code_bitmap_coarse != (u32 *)0x0) {
    free(memory->slot2_ram_code_bitmap_coarse);
  }
  if (memory->slot2_ram_code_bitmap_fine != (u32 *)0x0) {
    free(memory->slot2_ram_code_bitmap_fine);
  }
  memory->slot2_ram = (u8 *)0x0;
  memory->slot2_ram_size = 0;
  memory->slot2_ram_code_bitmap_coarse = (u32 *)0x0;
  memory->slot2_ram_code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x10].mask = 0x7fffff;
  memory->memory_regions_arm9[0x10].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[0x10].load_handler = 0x800800808007ff0;
  memory->memory_regions_arm9[0x10].load_handler.extended_function.load32 = load_cart_arm9_32;
  memory->memory_regions_arm9[0x10].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x10].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x10].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x10].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x10].store_access = '\x03';
  memory->memory_regions_arm7[0x10].mask = 0x7fffff;
  *(undefined8 *)&memory->memory_regions_arm7[0x10].load_handler = 0x800804808008034;
  memory->memory_regions_arm7[0x10].load_handler.extended_function.load32 = load_cart_arm7_32;
  memory->memory_regions_arm7[0x10].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm7[0x10].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm7[0x10].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x10].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x10].load_access = '\x02';
  memory->memory_regions_arm7[0x10].store_access = '\x03';
  memory->memory_regions_arm9[0x11].mask = 0x7fffff;
  memory->memory_regions_arm9[0x11].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[0x11].load_handler = 0x800800808007ff0;
  memory->memory_regions_arm9[0x11].load_handler.extended_function.load32 = load_cart_arm9_32;
  memory->memory_regions_arm9[0x11].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x11].store_access = '\x03';
  memory->memory_regions_arm9[0x11].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x11].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x11].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x11].mask = 0x7fffff;
  *(undefined8 *)&memory->memory_regions_arm7[0x11].load_handler = 0x800804808008034;
  memory->memory_regions_arm7[0x11].load_handler.extended_function.load32 = load_cart_arm7_32;
  memory->memory_regions_arm7[0x11].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm7[0x11].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm7[0x11].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x11].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x11].load_access = '\x02';
  memory->memory_regions_arm7[0x11].store_access = '\x03';
  memory->memory_regions_arm9[0x12].mask = 0x7fffff;
  memory->memory_regions_arm9[0x12].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[0x12].load_handler = 0x800800808007ff0;
  memory->memory_regions_arm9[0x12].load_handler.extended_function.load32 = load_cart_arm9_32;
  memory->memory_regions_arm9[0x12].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x12].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x12].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x12].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x12].store_access = '\x03';
  memory->memory_regions_arm7[0x12].mask = 0x7fffff;
  *(undefined8 *)&memory->memory_regions_arm7[0x12].load_handler = 0x800804808008034;
  memory->memory_regions_arm7[0x12].load_handler.extended_function.load32 = load_cart_arm7_32;
  memory->memory_regions_arm7[0x12].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm7[0x12].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm7[0x12].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x12].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x12].load_access = '\x02';
  memory->memory_regions_arm7[0x12].store_access = '\x03';
  memory->memory_regions_arm9[0x13].mask = 0x7fffff;
  memory->memory_regions_arm9[0x13].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[0x13].load_handler = 0x800800808007ff0;
  memory->memory_regions_arm9[0x13].load_handler.extended_function.load32 = load_cart_arm9_32;
  memory->memory_regions_arm9[0x13].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x13].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x13].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x13].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x13].store_access = '\x03';
  memory->memory_regions_arm7[0x13].mask = 0x7fffff;
  *(undefined8 *)&memory->memory_regions_arm7[0x13].load_handler = 0x800804808008034;
  memory->memory_regions_arm7[0x13].load_handler.extended_function.load32 = load_cart_arm7_32;
  memory->memory_regions_arm7[0x13].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm7[0x13].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm7[0x13].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x13].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x13].load_access = '\x02';
  memory->memory_regions_arm7[0x13].store_access = '\x03';
  memory->memory_regions_arm9[0x14].mask = 0x7fffff;
  memory->memory_regions_arm9[0x14].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[0x14].load_handler = 0x800800808007ff0;
  memory->memory_regions_arm9[0x14].load_handler.extended_function.load32 = load_cart_arm9_32;
  memory->memory_regions_arm9[0x14].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x14].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x14].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x14].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x14].store_access = '\x03';
  memory->memory_regions_arm7[0x14].mask = 0x7fffff;
  *(undefined8 *)&memory->memory_regions_arm7[0x14].load_handler = 0x800804808008034;
  memory->memory_regions_arm7[0x14].load_handler.extended_function.load32 = load_cart_arm7_32;
  memory->memory_regions_arm7[0x14].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm7[0x14].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm7[0x14].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x14].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x14].load_access = '\x02';
  memory->memory_regions_arm7[0x14].store_access = '\x03';
  memory->memory_regions_arm9[0x15].mask = 0x7fffff;
  memory->memory_regions_arm9[0x15].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[0x15].load_handler = 0x800800808007ff0;
  memory->memory_regions_arm9[0x15].load_handler.extended_function.load32 = load_cart_arm9_32;
  memory->memory_regions_arm9[0x15].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x15].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x15].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x15].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x15].store_access = '\x03';
  memory->memory_regions_arm7[0x15].mask = 0x7fffff;
  memory->memory_regions_arm7[0x15].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm7[0x15].load_handler = 0x800804808008034;
  memory->memory_regions_arm7[0x15].load_handler.extended_function.load32 = load_cart_arm7_32;
  memory->memory_regions_arm7[0x15].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm7[0x15].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm7[0x15].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x15].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm7[0x15].store_access = '\x03';
  return;
}


