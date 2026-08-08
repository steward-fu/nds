/*
 * Ghidra decompilation
 *
 * Function : cpu_block_log_all
 * Address  : 080282b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_block_log_all(system_struct *system,char *file_name)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  u32 uVar8;
  FILE *log_file_00;
  FILE *log_file;
  uint uVar9;
  translation_cache_struct *translation_cache;
  cpu_block_execution_struct *pcVar10;
  cpu_block_execution_struct *entry;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  u32 translated_length_total;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  u64 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  u32 uVar31;
  cpu_block_sort_list_struct cpu_block_sort_list;
  
  iVar3 = __stack_chk_guard;
  log_file_00 = fopen(file_name,"wb");
  cpu_block_sort_list.total_execution._0_4_ = 0;
  cpu_block_sort_list.total_execution._4_4_ = 0;
  cpu_block_sort_list.total_execution_product._0_4_ = 0;
  cpu_block_sort_list.total_execution_product._4_4_ = 0;
  cpu_block_sort_list.total_translated_length = 0;
  cpu_block_sort_list.count = 0;
  cpu_block_sort_list.capacity = 0x20;
  cpu_block_sort_list.entries = (cpu_block_execution_struct *)malloc(0x400);
  cpu_block_log_from_hash
            ((system->translation_cache).block_lookup_hash_main,0x10000,&cpu_block_sort_list);
  cpu_block_log_from_hash
            ((system->translation_cache).block_lookup_hash_alternate,0x4000,&cpu_block_sort_list);
  uVar8 = cpu_block_sort_list.total_translated_length;
  uVar7 = cpu_block_sort_list.total_execution_product._4_4_;
  uVar6 = (undefined4)cpu_block_sort_list.total_execution_product;
  uVar5 = cpu_block_sort_list.total_execution._4_4_;
  uVar4 = (undefined4)cpu_block_sort_list.total_execution;
  uVar1 = CONCAT44(cpu_block_sort_list.total_execution._4_4_,
                   (undefined4)cpu_block_sort_list.total_execution);
  uVar2 = CONCAT44(cpu_block_sort_list.total_execution_product._4_4_,
                   (undefined4)cpu_block_sort_list.total_execution_product);
  __printf_chk(1,"Scan found %d blocks consisting of %d bytes.\n",cpu_block_sort_list.count,
               (int)(system->translation_cache).translation_ptr_main -
               (int)&system->translation_cache);
  qsort(cpu_block_sort_list.entries,cpu_block_sort_list.count,0x20,
        cpu_block_execution_compare_function);
  if (cpu_block_sort_list.count != 0) {
    uVar16 = 0;
    iVar17 = 0;
    uVar22 = 0;
    dVar21 = (double)(ulonglong)uVar8;
    dVar20 = (double)__aeabi_ul2d(uVar4,uVar5);
    dVar19 = (double)__aeabi_ul2d(uVar6,uVar7);
    uVar15 = 0;
    uVar11 = 0;
    do {
      pcVar10 = cpu_block_sort_list.entries + uVar11;
      uVar9 = pcVar10->translated_length;
      uVar13 = *(uint *)&pcVar10->execution_count_product;
      iVar14 = *(int *)((int)&pcVar10->execution_count_product + 4);
      uVar23 = pcVar10->execution_count;
      uVar15 = uVar15 + uVar9;
      bVar18 = CARRY4(uVar16,uVar13);
      uVar16 = uVar16 + uVar13;
      iVar17 = iVar17 + iVar14 + (uint)bVar18;
      uVar22 = VectorAdd(uVar22,uVar23,8);
      dVar29 = ((double)(ulonglong)uVar9 * 100.0) / dVar21;
      dVar28 = ((double)(ulonglong)uVar15 * 100.0) / dVar21;
      uVar31 = uVar8;
      dVar24 = (double)__aeabi_ul2d(uVar16,iVar17);
      dVar24 = (dVar24 * 100.0) / dVar19;
      dVar25 = (double)__aeabi_ul2d(uVar13,iVar14);
      dVar25 = (dVar25 * 100.0) / dVar19;
      uVar30 = uVar2;
      dVar26 = (double)__aeabi_ul2d((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
      dVar26 = (dVar26 * 100.0) / dVar20;
      dVar27 = (double)__aeabi_ul2d((int)uVar23,(int)(uVar23 >> 0x20));
      uVar12 = uVar11 + 1;
      __fprintf_chk(log_file_00,1,
                    "Block %d:\n Block exec:       %llu/%llu, %lf%% (%lf%% total)\n Block * ins exec: %llu/%llu, %lf%% (%lf%% total)\n Block size:       %d/%d, %lf%% (%lf%% total)\n"
                    ,uVar11,uVar23,uVar1,(dVar27 * 100.0) / dVar20,dVar26,uVar13,iVar14,uVar30,
                    dVar25,dVar24,uVar9,uVar31,dVar29,dVar28);
      cpu_translate_log_block(system,(FILE *)log_file_00,pcVar10->block_ptr);
      fflush(log_file_00);
      uVar11 = uVar12;
    } while (uVar12 < cpu_block_sort_list.count);
  }
  free(cpu_block_sort_list.entries);
  fputc(10,log_file_00);
  fwrite("Secondary translation instructions (stubs):\n",1,0x2c,log_file_00);
  cpu_translate_log_translated_code
            ((FILE *)log_file_00,(system->translation_cache).translation_ptr_main_b,
             (system->translation_cache).translation_buffer_itcm);
  fclose(log_file_00);
  if (iVar3 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


