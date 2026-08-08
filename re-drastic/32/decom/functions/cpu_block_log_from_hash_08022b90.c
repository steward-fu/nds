/*
 * Ghidra decompilation
 *
 * Function : cpu_block_log_from_hash
 * Address  : 08022b90
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_block_log_from_hash
               (u32 *block_hash,u32 block_hash_entries,
               cpu_block_sort_list_struct *cpu_block_sort_list)

{
  ushort uVar1;
  int iVar2;
  u32 uVar3;
  u32 list_capacity;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  u32 uVar9;
  int **ppiVar10;
  u8 *block_metadata_ptr;
  u32 *block_hash_ptr;
  uint uVar11;
  u32 block_length_2;
  u32 list_capacity_2;
  int iVar12;
  u32 list_capacity_1;
  uint uVar13;
  uint uVar14;
  int iVar15;
  u32 uVar16;
  u32 list_count;
  u32 list_count_1;
  cpu_block_execution_struct *pcVar17;
  u32 block_length_1;
  uint uVar18;
  u32 block_length;
  u32 uVar19;
  uint *puVar20;
  u64 execution_counter;
  uint local_48;
  int local_44;
  uint local_40;
  cpu_block_execution_struct *local_3c;
  
  if (block_hash_entries >> 1 != 0) {
    local_40 = 0;
    block_hash_ptr = block_hash;
    do {
      if (block_hash_ptr[1] != 0) {
        iVar2 = *(int *)(block_hash_ptr[1] - 4);
        local_3c = cpu_block_sort_list->entries;
        uVar16 = cpu_block_sort_list->count;
        uVar3 = cpu_block_sort_list->capacity;
        uVar1 = *(ushort *)(iVar2 + 0x10);
        uVar11 = *(uint *)(iVar2 + 0x18);
        iVar12 = *(int *)(iVar2 + 0x1c);
        uVar18 = uVar1 & 0xfff;
        if ((uVar1 & 0x1000) == 0) {
          uVar18 = ((uint)uVar1 << 0x14) >> 0x15;
        }
        uVar13 = *(uint *)&cpu_block_sort_list->total_execution_product;
        iVar15 = *(int *)((int)&cpu_block_sort_list->total_execution_product + 4);
        local_44 = (int)((ulonglong)uVar11 * (ulonglong)uVar18 >> 0x20);
        local_44 = uVar18 * iVar12 + local_44;
        local_48 = (uint)((ulonglong)uVar11 * (ulonglong)uVar18);
        pcVar17 = local_3c + uVar16;
        uVar4 = *(uint *)&cpu_block_sort_list->total_execution;
        iVar6 = *(int *)((int)&cpu_block_sort_list->total_execution + 4);
        pcVar17->instruction_count = uVar18;
        uVar1 = *(ushort *)(iVar2 + 0x12);
        uVar19 = cpu_block_sort_list->total_translated_length;
        *(uint *)&pcVar17->execution_count = uVar11;
        *(int *)((int)&pcVar17->execution_count + 4) = iVar12;
        pcVar17->translated_length = (uint)uVar1;
        uVar9 = uVar16 + 1;
        *(uint *)&cpu_block_sort_list->total_execution = uVar4 + uVar11;
        *(uint *)((int)&cpu_block_sort_list->total_execution + 4) =
             iVar6 + iVar12 + (uint)CARRY4(uVar4,uVar11);
        *(uint *)&pcVar17->execution_count_product = local_48;
        *(int *)((int)&pcVar17->execution_count_product + 4) = local_44;
        *(uint *)&cpu_block_sort_list->total_execution_product = local_48 + uVar13;
        *(uint *)((int)&cpu_block_sort_list->total_execution_product + 4) =
             local_44 + iVar15 + (uint)CARRY4(local_48,uVar13);
        pcVar17->block_ptr = *(u8 **)(iVar2 + 8);
        cpu_block_sort_list->total_translated_length = uVar19 + *(ushort *)(iVar2 + 0x12);
        if (uVar3 == uVar9) {
          uVar3 = uVar9 * 2;
          local_3c = (cpu_block_execution_struct *)realloc(local_3c,uVar9 * 0x40);
          cpu_block_sort_list->entries = local_3c;
          cpu_block_sort_list->capacity = uVar3;
        }
        cpu_block_sort_list->count = uVar9;
        if (block_hash_ptr[3] != 0) {
          ppiVar10 = *(int ***)(block_hash_ptr[3] - 4);
          uVar4 = *(uint *)&cpu_block_sort_list->total_execution;
          iVar12 = *(int *)((int)&cpu_block_sort_list->total_execution + 4);
          uVar11 = *(uint *)&cpu_block_sort_list->total_execution_product;
          iVar2 = *(int *)((int)&cpu_block_sort_list->total_execution_product + 4);
          uVar1 = *(ushort *)(ppiVar10 + 4);
          piVar5 = ppiVar10[6];
          piVar7 = ppiVar10[7];
          uVar18 = uVar1 & 0xfff;
          if ((uVar1 & 0x1000) == 0) {
            uVar18 = ((uint)uVar1 << 0x14) >> 0x15;
          }
          pcVar17 = local_3c + uVar16 + 1;
          pcVar17->instruction_count = uVar18;
          uVar1 = *(ushort *)((int)ppiVar10 + 0x12);
          *(int **)&pcVar17->execution_count = piVar5;
          *(int **)((int)&pcVar17->execution_count + 4) = piVar7;
          local_44 = (int)(ZEXT48(piVar5) * (ulonglong)uVar18 >> 0x20);
          local_44 = uVar18 * (int)piVar7 + local_44;
          local_48 = (uint)(ZEXT48(piVar5) * (ulonglong)uVar18);
          pcVar17->translated_length = (uint)uVar1;
          uVar9 = cpu_block_sort_list->total_translated_length;
          *(uint *)&cpu_block_sort_list->total_execution = uVar4 + (int)piVar5;
          *(uint *)((int)&cpu_block_sort_list->total_execution + 4) =
               (int)piVar7 + (uint)CARRY4(uVar4,(uint)piVar5) + iVar12;
          *(uint *)&pcVar17->execution_count_product = local_48;
          *(int *)((int)&pcVar17->execution_count_product + 4) = local_44;
          *(uint *)&cpu_block_sort_list->total_execution_product = local_48 + uVar11;
          *(uint *)((int)&cpu_block_sort_list->total_execution_product + 4) =
               local_44 + (uint)CARRY4(local_48,uVar11) + iVar2;
          pcVar17->block_ptr = (u8 *)ppiVar10[2];
          cpu_block_sort_list->total_translated_length = uVar9 + *(ushort *)((int)ppiVar10 + 0x12);
          uVar9 = uVar3;
          if (uVar16 + 2 == uVar3) {
            uVar9 = uVar3 << 1;
            local_3c = (cpu_block_execution_struct *)realloc(local_3c,uVar3 << 6);
            cpu_block_sort_list->entries = local_3c;
            cpu_block_sort_list->capacity = uVar9;
          }
          cpu_block_sort_list->count = uVar16 + 2;
          piVar5 = *ppiVar10;
          if (piVar5 != (int *)0x0) {
            uVar3 = uVar16 + 3;
            iVar2 = uVar16 * 0x20 + 0x40;
            do {
              uVar1 = *(ushort *)(piVar5 + 4);
              uVar11 = *(uint *)&cpu_block_sort_list->total_execution;
              iVar12 = *(int *)((int)&cpu_block_sort_list->total_execution + 4);
              uVar14 = *(uint *)&cpu_block_sort_list->total_execution_product;
              iVar6 = *(int *)((int)&cpu_block_sort_list->total_execution_product + 4);
              uVar18 = uVar1 & 0xfff;
              puVar20 = (uint *)((int)&local_3c->execution_count + iVar2);
              uVar4 = piVar5[6];
              uVar13 = piVar5[7];
              if ((uVar1 & 0x1000) == 0) {
                uVar18 = ((uint)uVar1 << 0x14) >> 0x15;
              }
              iVar2 = iVar2 + 0x20;
              puVar20[4] = uVar18;
              uVar1 = *(ushort *)((int)piVar5 + 0x12);
              *puVar20 = uVar4;
              puVar20[1] = uVar13;
              puVar20[5] = (uint)uVar1;
              local_44 = (int)((ulonglong)uVar4 * (ulonglong)uVar18 >> 0x20);
              uVar8 = uVar18 * uVar13 + local_44;
              uVar16 = cpu_block_sort_list->total_translated_length;
              local_48 = (uint)((ulonglong)uVar4 * (ulonglong)uVar18);
              *(uint *)&cpu_block_sort_list->total_execution = uVar11 + uVar4;
              *(uint *)((int)&cpu_block_sort_list->total_execution + 4) =
                   iVar12 + uVar13 + (uint)CARRY4(uVar11,uVar4);
              puVar20[2] = local_48;
              puVar20[3] = uVar8;
              *(uint *)&cpu_block_sort_list->total_execution_product = local_48 + uVar14;
              *(uint *)((int)&cpu_block_sort_list->total_execution_product + 4) =
                   uVar8 + iVar6 + (uint)CARRY4(local_48,uVar14);
              puVar20[6] = piVar5[2];
              cpu_block_sort_list->total_translated_length =
                   uVar16 + *(ushort *)((int)piVar5 + 0x12);
              uVar16 = uVar9;
              if (uVar9 == uVar3) {
                uVar16 = uVar9 << 1;
                local_3c = (cpu_block_execution_struct *)realloc(local_3c,uVar9 << 6);
                cpu_block_sort_list->entries = local_3c;
                cpu_block_sort_list->capacity = uVar16;
              }
              cpu_block_sort_list->count = uVar3;
              piVar5 = (int *)*piVar5;
              uVar3 = uVar3 + 1;
              uVar9 = uVar16;
            } while (piVar5 != (int *)0x0);
          }
        }
      }
      block_hash_ptr = block_hash_ptr + 4;
      local_40 = local_40 + 1;
    } while (local_40 != block_hash_entries >> 1);
  }
  return;
}


