/*
 * Ghidra decompilation
 *
 * Function : cpu_block_fill_allocation
 * Address  : 08022ef8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_block_fill_allocation(cpu_struct *cpu,u32 pc,u32 length)

{
  u32 *puVar1;
  u32 *puVar2;
  u32 span_page_offset;
  uint uVar3;
  memory_region_struct *pmVar4;
  uint uVar5;
  u32 page_value;
  u32 code_region_mask;
  u32 span_2B_start_offset;
  u32 *puVar6;
  u32 pc_end;
  uint uVar7;
  u32 span_2KB_start_offset;
  uint uVar8;
  u32 span_2B_end_offset;
  memory_struct *pmVar9;
  memory_struct *memory;
  uint uVar10;
  u32 span_2KB_end_offset;
  memory_region_struct *pmVar11;
  memory_region_struct *memory_region;
  u32 span_page_end_offset;
  uint uVar12;
  
  uVar8 = pc + length;
  uVar3 = pc >> 0xb;
  uVar7 = uVar8 - 1 >> 0xb;
  pmVar9 = (cpu->memory_interface).memory;
  if (uVar3 <= uVar7) {
    puVar1 = cpu->reg + uVar3 + 0x15;
    do {
      uVar3 = uVar3 + 1;
      if ((*puVar1 & 0x40000000) == 0) {
        *puVar1 = *puVar1 | 0xc0000000;
      }
      puVar1 = puVar1 + 1;
    } while (uVar3 <= uVar7);
  }
  if (pc < 0x10000000) {
    pmVar4 = (cpu->memory_interface).memory_regions;
    pmVar11 = pmVar4 + (pc >> 0x17);
    puVar1 = (*pmVar11->get_code_bitmap_coarse)(pmVar9,pmVar11,pc);
    puVar2 = (*pmVar11->get_code_bitmap_fine)(pmVar9,pmVar11,pc);
    uVar3 = pmVar4[pc >> 0x17].mask;
    if ((cpu->type == '\x01') && (pc < pmVar9->itcm_end)) {
      uVar7 = pc & 0x7fff;
      puVar1 = pmVar9->itcm_code_bitmap_coarse;
      uVar12 = 0x8000;
      uVar3 = 0x7fff;
      puVar2 = pmVar9->itcm_code_bitmap_fine + ((pc << 0x11) >> 0x17);
    }
    else {
      uVar7 = pc & uVar3;
      uVar12 = uVar3 + 1;
    }
    uVar5 = length + uVar7;
    if (uVar12 < uVar5) {
      length = uVar12 - uVar7;
      cpu_block_fill_allocation(cpu,~uVar3 & uVar8,uVar5 + ~uVar3);
    }
    if (puVar1 != (u32 *)0x0) {
      uVar12 = (uVar7 - 1) + length;
      uVar3 = (uVar12 >> 0x10) - (uVar7 >> 0x10);
      uVar8 = (pc << 0x1a) >> 0x1b;
      uVar10 = uVar12 * 0x10000 >> 0x1b;
      uVar5 = uVar12 * 0x4000000 >> 0x1b;
      uVar12 = (uVar12 >> 6) - (uVar7 >> 6);
      uVar7 = (uVar7 << 0x10) >> 0x1b;
      if (uVar3 == 0) {
        *puVar1 = *puVar1 | ~(-2 << uVar10) & -1 << uVar7;
      }
      else {
        puVar6 = puVar1 + 1;
        *puVar1 = *puVar1 | -1 << uVar7;
        puVar1 = puVar6;
        if (1 < uVar3) {
          puVar1 = puVar6 + uVar3 + 0x3fffffff;
          memset(puVar6,0xff,(uVar3 + 0x3fffffff) * 4);
        }
        *puVar1 = *puVar1 | ~(-2 << uVar10);
      }
      if (uVar12 == 0) {
        *puVar2 = *puVar2 | ~(-2 << uVar5) & -1 << uVar8;
      }
      else {
        puVar6 = puVar2 + 1;
        *puVar2 = *puVar2 | -1 << uVar8;
        puVar1 = puVar6;
        if (1 < uVar12) {
          puVar1 = puVar6 + uVar12 + 0x3fffffff;
          memset(puVar6,0xff,(uVar12 + 0x3fffffff) * 4);
        }
        *puVar1 = *puVar1 | ~(-2 << uVar5);
      }
    }
  }
  return;
}


