/*
 * Ghidra decompilation
 *
 * Function : reset_cpu_block
 * Address  : 08028598
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_cpu_block(cpu_struct *cpu_arm9)

{
  undefined *puVar1;
  u32 *puVar2;
  int iVar3;
  u32 *puVar4;
  u32 *puVar5;
  cpu_struct *pcVar6;
  cpu_struct *cpu_arm7;
  u8 *puVar7;
  translation_cache_struct *__addr;
  translation_cache_struct *translation_cache;
  memory_struct *memory;
  memory_struct *pmVar8;
  u8 *puVar9;
  
  __addr = cpu_arm9->translation_cache;
  pmVar8 = cpu_arm9->memory;
  pcVar6 = cpu_arm9->alternate_cpu;
  memset(__addr->block_lookup_hash_main,0,0x80000);
  memset(__addr->block_lookup_hash_alternate,0,0x20000);
  iVar3 = 0;
  puVar1 = (undefined *)((int)__addr->block_lookup_itcm_thumb + 0xffff);
  do {
    *(undefined4 *)((int)cpu_arm9->block_lookup_itcm_arm + iVar3) = 0;
    iVar3 = iVar3 + 4;
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (iVar3 != 0x8000);
  iVar3 = 0;
  do {
    *(undefined4 *)((int)cpu_arm9->block_lookup_itcm_thumb + iVar3) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x10000);
  puVar2 = cpu_arm9->block_lookup_mini_hash;
  if (puVar2 < pcVar6->block_lookup_mini_hash + 4 &&
      pcVar6->block_lookup_mini_hash < cpu_arm9->block_lookup_mini_hash + 4) {
    puVar7 = &pcVar6->timers[3].prescale;
    puVar9 = &cpu_arm9->timers[3].prescale;
    do {
      puVar9 = puVar9 + 4;
      *(undefined4 *)puVar9 = 0;
      puVar7 = puVar7 + 4;
      *(undefined4 *)puVar7 = 0;
    } while ((u32 *)puVar9 != cpu_arm9->block_lookup_mini_hash + 0x7ff);
  }
  else {
    puVar4 = pcVar6->block_lookup_mini_hash;
    do {
      *(undefined8 *)puVar2 = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      puVar5 = puVar4 + 4;
      puVar2 = puVar2 + 4;
      *(undefined8 *)puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      puVar4 = puVar5;
    } while ((u8 **)puVar5 != &pcVar6->io_region);
  }
  memset(pmVar8->main_ram_code_bitmap_coarse,0,0x100);
  pmVar8->itcm_code_bitmap_coarse[0] = 0;
  pmVar8->wram_code_bitmap_coarse[0] = 0;
  pmVar8->arm7_wram_code_bitmap_coarse[0] = 0;
  *(undefined8 *)pmVar8->vram_code_bitmap_coarse = 0;
  *(undefined8 *)(pmVar8->vram_code_bitmap_coarse + 2) = 0;
  *(undefined8 *)(pmVar8->vram_code_bitmap_coarse + 4) = 0;
  *(undefined8 *)(pmVar8->vram_code_bitmap_coarse + 6) = 0;
  *(undefined8 *)(pmVar8->vram_code_bitmap_coarse + 7) = 0;
  *(undefined8 *)(pmVar8->vram_code_bitmap_coarse + 9) = 0;
  memset(pmVar8->main_ram_code_bitmap_fine,0,0x40000);
  if (pmVar8->slot2_ram_code_bitmap_fine != (u32 *)0x0) {
    memset(pmVar8->slot2_ram_code_bitmap_coarse,0,0x800);
    memset(pmVar8->slot2_ram_code_bitmap_fine,0,0x200000);
  }
  memset(pmVar8->itcm_code_bitmap_fine,0,0x800);
  memset(pmVar8->wram_code_bitmap_fine,0,0x800);
  memset(pmVar8->arm7_wram_code_bitmap_fine,0,0x1000);
  memset(pmVar8->vram_code_bitmap_fine,0,0xa400);
  mprotect(__addr,0x1000000,7);
  mprotect(__addr->translation_buffer_itcm,0x100000,7);
  mprotect(__addr->translation_buffer_alternate,0x200000,7);
  memset(__addr->itcm_hot_modifications,0,0x2000);
  __addr->itcm_hot_block_count = 0;
  memset(__addr->main_ram_modified_regions,0,0x20000);
  return;
}


