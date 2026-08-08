/*
 * Ghidra decompilation
 *
 * Function : cpu_block_lookup_base
 * Address  : 08026940
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * cpu_block_lookup_base(cpu_struct *cpu,u32 pc)

{
  int **ppiVar1;
  u8 *puVar2;
  u8 *base_translation_ptr_main;
  u8 *base_translation_ptr_main_b;
  u8 *puVar3;
  u8 *puVar4;
  u8 *base_translation_ptr_alternate;
  u8 *base_translation_ptr_alternate_b;
  u8 *puVar5;
  u8 *block_ptr;
  u8 *next_block_metadata_ptr;
  u8 **ppuVar6;
  uint uVar7;
  int **ppiVar8;
  u8 *block_metadata_ptr;
  int *piVar9;
  u32 *puVar10;
  u32 *puVar11;
  uint uVar12;
  u32 itcm_index;
  u32 *mini_hash;
  u32 mini_hash_key;
  uint uVar13;
  translation_cache_struct *ptVar14;
  
  uVar12 = pc >> 2;
  uVar13 = uVar12 & 0x3ff;
  if ((pc < 0x2000000) && (cpu->type == '\x01')) {
    if ((pc & 1) == 0) {
      uVar7 = uVar12 & 0x1fff;
      ppuVar6 = cpu->block_lookup_itcm_arm;
    }
    else {
      ppuVar6 = cpu->block_lookup_itcm_thumb;
      uVar7 = (pc << 0x11) >> 0x12;
    }
    puVar5 = ppuVar6[uVar7];
    if (puVar5 != (u8 *)0x0) {
      cpu->block_lookup_mini_hash[uVar13] = pc;
      cpu->block_lookup_mini_hash[uVar13 + 0x400] = (u32)puVar5;
      return puVar5;
    }
    ptVar14 = cpu->translation_cache;
    puVar11 = (u32 *)0x0;
LAB_080269c8:
    puVar2 = ptVar14->translation_ptr_main;
    base_translation_ptr_main = ptVar14->translation_ptr_main_b;
    base_translation_ptr_main_b = ptVar14->translation_ptr_itcm;
    puVar3 = ptVar14->translation_ptr_itcm_b;
    puVar4 = ptVar14->translation_ptr_alternate;
    base_translation_ptr_alternate = ptVar14->translation_ptr_alternate_b;
    ptVar14->translation_stack_pointer = ptVar14->translation_stack;
    (ptVar14->delayed_targets).position = 0;
    (ptVar14->delayed_targets).delayed_block_position = 0;
    puVar5 = (u8 *)cpu_block_create(cpu,pc & 0xfffffffe,pc & 1);
    if (puVar5 != (u8 *)0x0) {
      if (puVar11 == (u32 *)0x0) {
        if ((pc & 1) == 0) {
          uVar12 = uVar12 & 0x1fff;
          cpu->block_lookup_itcm_arm[uVar12] = puVar5;
          uVar7 = (uint)cpu->translation_cache->itcm_hot_modifications[uVar12];
          if (8 < uVar7) {
            cpu->translation_cache->itcm_hot_modifications[uVar12] =
                 ~((byte)~(byte)((uVar7 << 0x19) >> 0x18) >> 1);
          }
        }
        else {
          cpu->block_lookup_itcm_thumb[(pc << 0x11) >> 0x12] = puVar5;
        }
      }
      else if (puVar11[1] == 0) {
        *puVar11 = pc;
        puVar11[1] = (u32)puVar5;
      }
      else if (puVar11[3] == 0) {
        puVar11[2] = pc;
        puVar11[3] = (u32)puVar5;
      }
      else {
        ppiVar8 = *(int ***)(puVar11[3] - 4);
        for (ppiVar1 = (int **)*ppiVar8; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          ppiVar8 = ppiVar1;
        }
        *ppiVar8 = (int *)*(int *)(puVar5 + -4);
      }
    }
    cpu_translate_link_delayed_targets(cpu);
    if (puVar2 != ptVar14->translation_ptr_main) {
      __clear_cache(puVar2);
    }
    if (base_translation_ptr_main != ptVar14->translation_ptr_main_b) {
      __clear_cache(ptVar14->translation_ptr_main_b,base_translation_ptr_main);
    }
    if (puVar4 != ptVar14->translation_ptr_alternate) {
      __clear_cache(puVar4);
    }
    if (base_translation_ptr_alternate != ptVar14->translation_ptr_alternate_b) {
      __clear_cache(ptVar14->translation_ptr_alternate_b,base_translation_ptr_alternate);
    }
    if (base_translation_ptr_main_b != ptVar14->translation_ptr_itcm) {
      __clear_cache(base_translation_ptr_main_b);
    }
    if (puVar3 != ptVar14->translation_ptr_itcm_b) {
      __clear_cache(ptVar14->translation_ptr_itcm_b,puVar3);
    }
    cpu->block_lookup_mini_hash[uVar13] = pc;
    cpu->block_lookup_mini_hash[uVar13 + 0x400] = (u32)puVar5;
  }
  else {
    ptVar14 = cpu->translation_cache;
    if (pc >> 0x18 == 2) {
      uVar7 = 0x7fff;
      puVar10 = ptVar14->block_lookup_hash_main;
    }
    else {
      uVar7 = 0x1fff;
      puVar10 = ptVar14->block_lookup_hash_alternate;
    }
    puVar11 = puVar10 + (uVar7 & uVar12) * 4;
    if (pc == puVar10[(uVar7 & uVar12) * 4]) {
      puVar5 = (u8 *)puVar11[1];
    }
    else {
      if (pc != puVar11[2]) {
        if (puVar11[3] != 0) {
          for (piVar9 = (int *)**(int **)(puVar11[3] - 4); piVar9 != (int *)0x0;
              piVar9 = (int *)*piVar9) {
            if (pc == piVar9[1]) {
              puVar5 = (u8 *)piVar9[2];
              goto LAB_08026bb0;
            }
          }
        }
        goto LAB_080269c8;
      }
      puVar5 = (u8 *)puVar11[3];
    }
LAB_08026bb0:
    cpu->block_lookup_mini_hash[uVar13] = pc;
    cpu->block_lookup_mini_hash[uVar13 + 0x400] = (u32)puVar5;
  }
  return puVar5;
}


