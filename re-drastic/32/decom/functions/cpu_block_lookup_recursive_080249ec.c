/*
 * Ghidra decompilation
 *
 * Function : cpu_block_lookup_recursive
 * Address  : 080249ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * cpu_block_lookup_recursive(cpu_struct *cpu,u32 pc)

{
  int **ppiVar1;
  void *pvVar2;
  u8 *block_ptr;
  u8 *puVar3;
  u8 *next_block_metadata_ptr;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int **ppiVar7;
  u8 *block_metadata_ptr;
  u8 **ppuVar8;
  u32 itcm_index;
  u32 *puVar9;
  u32 *puVar10;
  bool bVar11;
  
  if ((pc < 0x2000000) && (cpu->type == '\x01')) {
    uVar5 = pc & 1;
    if (uVar5 == 0) {
      uVar4 = (pc << 0x11) >> 0x13;
      ppuVar8 = cpu->block_lookup_itcm_arm;
    }
    else {
      ppuVar8 = cpu->block_lookup_itcm_thumb;
      uVar4 = (pc << 0x11) >> 0x12;
    }
    if (ppuVar8[uVar4] != (u8 *)0x0) {
      return ppuVar8[uVar4];
    }
    puVar3 = (u8 *)cpu_block_create(cpu,pc & 0xfffffffe,uVar5);
    if (puVar3 != (u8 *)0x0) {
      if (uVar5 != 0) {
        cpu->block_lookup_itcm_thumb[(pc << 0x11) >> 0x12] = puVar3;
        return puVar3;
      }
      uVar4 = (pc << 0x11) >> 0x13;
      cpu->block_lookup_itcm_arm[uVar4] = puVar3;
      uVar5 = (uint)cpu->translation_cache->itcm_hot_modifications[uVar4];
      if (uVar5 < 9) {
        return puVar3;
      }
      cpu->translation_cache->itcm_hot_modifications[uVar4] =
           ~((byte)~(byte)((uVar5 << 0x19) >> 0x18) >> 1);
      return puVar3;
    }
  }
  else {
    bVar11 = pc >> 0x18 == 2;
    if (bVar11) {
      uVar5 = 0x7fff;
    }
    else {
      uVar5 = 0x1fff;
    }
    uVar5 = uVar5 & pc >> 2;
    if (bVar11) {
      puVar9 = cpu->translation_cache->block_lookup_hash_main;
    }
    else {
      puVar9 = cpu->translation_cache->block_lookup_hash_alternate;
    }
    puVar10 = puVar9 + uVar5 * 4;
    if (pc == puVar9[uVar5 * 4]) {
      return (void *)puVar10[1];
    }
    if (pc == puVar10[2]) {
      return (void *)puVar10[3];
    }
    if (puVar10[3] != 0) {
      piVar6 = *(int **)(puVar10[3] - 4);
      while (piVar6 = (int *)*piVar6, piVar6 != (int *)0x0) {
        if (pc == piVar6[1]) {
          return (void *)piVar6[2];
        }
      }
    }
    pvVar2 = cpu_block_create(cpu,pc & 0xfffffffe,pc & 1);
    if (pvVar2 != (void *)0x0) {
      if (puVar10[1] == 0) {
        *puVar10 = pc;
        puVar10[1] = (u32)pvVar2;
        return pvVar2;
      }
      if (puVar10[3] != 0) {
        ppiVar7 = *(int ***)(puVar10[3] - 4);
        for (ppiVar1 = (int **)*ppiVar7; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          ppiVar7 = ppiVar1;
        }
        *ppiVar7 = (int *)*(int *)((int)pvVar2 + -4);
        return pvVar2;
      }
      puVar10[2] = pc;
      puVar10[3] = (u32)pvVar2;
      return pvVar2;
    }
  }
  return (void *)0x0;
}


