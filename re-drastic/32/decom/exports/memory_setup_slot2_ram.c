/*
 * Ghidra decompilation
 *
 * Function : memory_setup_slot2_ram
 * Address  : 080144cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 memory_setup_slot2_ram(memory_struct *memory)

{
  u8 *puVar1;
  u32 *puVar2;
  u32 *puVar3;
  _func_u8_ptr_memory_struct_ptr_u32 *p_Var4;
  s32 sVar5;
  u32 *puVar6;
  u32 *puVar7;
  u32 *puVar8;
  
  puVar1 = (u8 *)malloc(0x2000000);
  memory->slot2_ram = puVar1;
  memory->slot2_ram_size = 0x2000000;
  memory->slot2_read_only = '\0';
  if (puVar1 == (u8 *)0x0) {
    sVar5 = -1;
  }
  else {
    puVar2 = (u32 *)malloc(0x800);
    memory->slot2_ram_code_bitmap_coarse = puVar2;
    if (puVar2 == (u32 *)0x0) {
      free(puVar1);
      sVar5 = -1;
      memory->slot2_ram = (u8 *)0x0;
    }
    else {
      puVar3 = (u32 *)malloc(0x200000);
      memory->slot2_ram_code_bitmap_fine = puVar3;
      if (puVar3 == (u32 *)0x0) {
        free(puVar1);
        free(puVar2);
        memory->slot2_ram = (u8 *)0x0;
        sVar5 = -1;
        memory->slot2_ram_code_bitmap_coarse = (u32 *)0x0;
      }
      else {
        p_Var4 = (_func_u8_ptr_memory_struct_ptr_u32 *)memory->slot2_ram;
        memory->memory_regions_arm9[0x10].mask = 0x7fffff;
        memory->memory_regions_arm9[0x10].load_handler.get_pointer = p_Var4;
        memory->memory_regions_arm9[0x10].store_handler.get_pointer = p_Var4;
        memory->memory_regions_arm9[0x10].load_access = '\0';
        memory->memory_regions_arm9[0x10].store_access = '\0';
        puVar8 = memory->slot2_ram_code_bitmap_coarse;
        memory->memory_regions_arm9[0x10].code_bitmap_fine = memory->slot2_ram_code_bitmap_fine;
        memory->memory_regions_arm9[0x11].load_handler.direct_memory = (u8 *)(p_Var4 + 0x800000);
        memory->memory_regions_arm9[0x11].store_handler.direct_memory = (u8 *)(p_Var4 + 0x800000);
        memory->memory_regions_arm9[0x11].load_access = '\0';
        memory->memory_regions_arm9[0x11].store_access = '\0';
        puVar6 = memory->slot2_ram_code_bitmap_fine;
        puVar7 = memory->slot2_ram_code_bitmap_coarse;
        memory->memory_regions_arm9[0x12].load_handler.direct_memory = (u8 *)(p_Var4 + 0x1000000);
        memory->memory_regions_arm9[0x12].store_handler.direct_memory = (u8 *)(p_Var4 + 0x1000000);
        memory->memory_regions_arm9[0x12].load_access = '\0';
        memory->memory_regions_arm9[0x12].store_access = '\0';
        puVar2 = memory->slot2_ram_code_bitmap_fine;
        puVar3 = memory->slot2_ram_code_bitmap_coarse;
        memory->memory_regions_arm9[0x10].code_bitmap_coarse = puVar8;
        memory->memory_regions_arm9[0x10].get_code_bitmap_coarse =
             memory_get_code_bitmap_coarse_direct;
        memory->memory_regions_arm9[0x10].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
        memory->memory_regions_arm9[0x11].mask = 0x7fffff;
        memory->memory_regions_arm9[0x11].code_bitmap_coarse = puVar7 + 0x80;
        memory->memory_regions_arm9[0x11].code_bitmap_fine = puVar6 + 0x20000;
        memory->memory_regions_arm9[0x11].get_code_bitmap_coarse =
             memory_get_code_bitmap_coarse_direct;
        memory->memory_regions_arm9[0x11].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
        memory->memory_regions_arm9[0x12].mask = 0x7fffff;
        memory->memory_regions_arm9[0x12].code_bitmap_coarse = puVar3 + 0x100;
        memory->memory_regions_arm9[0x12].code_bitmap_fine = puVar2 + 0x40000;
        sVar5 = 0;
        memory->memory_regions_arm9[0x12].get_code_bitmap_coarse =
             memory_get_code_bitmap_coarse_direct;
        memory->memory_regions_arm9[0x13].load_handler.direct_memory = (u8 *)(p_Var4 + 0x1800000);
        memory->memory_regions_arm9[0x13].store_handler.direct_memory = (u8 *)(p_Var4 + 0x1800000);
        memory->memory_regions_arm9[0x13].load_access = '\0';
        memory->memory_regions_arm9[0x13].store_access = '\0';
        puVar2 = memory->slot2_ram_code_bitmap_fine;
        puVar3 = memory->slot2_ram_code_bitmap_coarse;
        memory->memory_regions_arm9[0x12].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
        memory->memory_regions_arm9[0x13].mask = 0x7fffff;
        memory->memory_regions_arm9[0x13].get_code_bitmap_coarse =
             memory_get_code_bitmap_coarse_direct;
        memory->memory_regions_arm9[0x13].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
        memory->memory_regions_arm9[0x13].code_bitmap_coarse = puVar3 + 0x180;
        memory->memory_regions_arm9[0x13].code_bitmap_fine = puVar2 + 0x60000;
        memory->memory_regions_arm7[0x10].load_access = '\0';
        puVar1 = memory->slot2_ram;
        memory->memory_regions_arm7[0x10].mask = 0x7fffff;
        memory->memory_regions_arm7[0x10].store_access = '\0';
        memory->memory_regions_arm7[0x10].load_handler.direct_memory = puVar1;
        memory->memory_regions_arm7[0x10].store_handler.direct_memory = memory->slot2_ram;
        puVar2 = memory->slot2_ram_code_bitmap_fine;
        puVar3 = memory->slot2_ram_code_bitmap_coarse;
        memory->memory_regions_arm7[0x11].load_access = '\0';
        puVar1 = memory->slot2_ram;
        memory->memory_regions_arm7[0x11].store_access = '\0';
        memory->memory_regions_arm7[0x10].get_code_bitmap_coarse =
             memory_get_code_bitmap_coarse_direct;
        memory->memory_regions_arm7[0x10].code_bitmap_coarse = puVar3;
        memory->memory_regions_arm7[0x10].code_bitmap_fine = puVar2;
        memory->memory_regions_arm7[0x10].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
        memory->memory_regions_arm7[0x11].mask = 0x7fffff;
        memory->memory_regions_arm7[0x11].load_handler.direct_memory = puVar1 + 0x800000;
        memory->memory_regions_arm7[0x11].store_handler.direct_memory = memory->slot2_ram + 0x800000
        ;
        puVar3 = memory->slot2_ram_code_bitmap_coarse;
        puVar2 = memory->slot2_ram_code_bitmap_fine;
        memory->memory_regions_arm7[0x12].load_access = '\0';
        puVar1 = memory->slot2_ram;
        memory->memory_regions_arm7[0x11].get_code_bitmap_coarse =
             memory_get_code_bitmap_coarse_direct;
        memory->memory_regions_arm7[0x12].store_access = '\0';
        memory->memory_regions_arm7[0x12].mask = 0x7fffff;
        memory->memory_regions_arm7[0x11].code_bitmap_coarse = puVar3 + 0x80;
        memory->memory_regions_arm7[0x11].code_bitmap_fine = puVar2 + 0x20000;
        memory->memory_regions_arm7[0x11].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
        memory->memory_regions_arm7[0x12].load_handler.direct_memory = puVar1 + 0x1000000;
        memory->memory_regions_arm7[0x12].store_handler.direct_memory =
             memory->slot2_ram + 0x1000000;
        puVar2 = memory->slot2_ram_code_bitmap_fine;
        puVar3 = memory->slot2_ram_code_bitmap_coarse;
        memory->memory_regions_arm7[0x13].load_access = '\0';
        puVar1 = memory->slot2_ram;
        memory->memory_regions_arm7[0x12].get_code_bitmap_coarse =
             memory_get_code_bitmap_coarse_direct;
        memory->memory_regions_arm7[0x13].mask = 0x7fffff;
        memory->memory_regions_arm7[0x13].store_access = '\0';
        memory->memory_regions_arm7[0x12].code_bitmap_coarse = puVar3 + 0x100;
        memory->memory_regions_arm7[0x12].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
        memory->memory_regions_arm7[0x13].load_handler.direct_memory = puVar1 + 0x1800000;
        puVar1 = memory->slot2_ram;
        memory->memory_regions_arm7[0x12].code_bitmap_fine = puVar2 + 0x40000;
        memory->memory_regions_arm7[0x13].store_handler.direct_memory = puVar1 + 0x1800000;
        puVar3 = memory->slot2_ram_code_bitmap_coarse;
        puVar2 = memory->slot2_ram_code_bitmap_fine;
        memory->memory_regions_arm7[0x13].get_code_bitmap_coarse =
             memory_get_code_bitmap_coarse_direct;
        memory->memory_regions_arm7[0x13].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
        memory->memory_regions_arm7[0x13].code_bitmap_coarse = puVar3 + 0x180;
        memory->memory_regions_arm7[0x13].code_bitmap_fine = puVar2 + 0x60000;
      }
    }
  }
  return sVar5;
}


