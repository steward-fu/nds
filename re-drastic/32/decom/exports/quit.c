/*
 * Ghidra decompilation
 *
 * Function : quit
 * Address  : 08006444
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void quit(system_struct *system)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  if (system->use_recompiler == '\0') {
    cpu_print_profiler_results(system);
  }
  iVar2 = mini_hash_accesses._4_4_;
  uVar1 = (uint)mini_hash_accesses;
  iVar3 = (uint)mini_hash_accesses - (uint)mini_hash_misses;
  iVar4 = mini_hash_accesses._4_4_ -
          (mini_hash_misses._4_4_ + (uint)((uint)mini_hash_accesses < (uint)mini_hash_misses));
  dVar5 = (double)__aeabi_ul2d(iVar3,iVar4);
  dVar6 = (double)__aeabi_ul2d(uVar1,iVar2);
  __printf_chk(1,"%llu mini hash hits out of %llu accesses (%lf%%)\n",iVar3,iVar4,uVar1,iVar2,
               (dVar5 * 100.0) / dVar6);
  __printf_chk(1,"%llu hash accesses:\n",(undefined4)hash_accesses,hash_accesses._4_4_);
  dVar5 = (double)__aeabi_ul2d((undefined4)hash_hit_lengths[0],hash_hit_lengths[0]._4_4_);
  dVar6 = (double)__aeabi_ul2d((undefined4)hash_accesses,hash_accesses._4_4_);
  dVar6 = (dVar5 * 100.0) / dVar6;
  __printf_chk(1," %lf%% hit in one hop\n",SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  dVar5 = (double)__aeabi_ul2d((undefined4)hash_hit_lengths[1],hash_hit_lengths[1]._4_4_);
  dVar6 = (double)__aeabi_ul2d((undefined4)hash_accesses,hash_accesses._4_4_);
  dVar6 = (dVar5 * 100.0) / dVar6;
  __printf_chk(1," %lf%% hit in two hops\n",SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  dVar5 = (double)__aeabi_ul2d((undefined4)hash_hit_lengths[2],hash_hit_lengths[2]._4_4_);
  dVar6 = (double)__aeabi_ul2d((undefined4)hash_accesses,hash_accesses._4_4_);
  dVar6 = (dVar5 * 100.0) / dVar6;
  __printf_chk(1," %lf%% hit in three hops\n",SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  dVar5 = (double)__aeabi_ul2d((undefined4)hash_hit_lengths[3],hash_hit_lengths[3]._4_4_);
  dVar6 = (double)__aeabi_ul2d((undefined4)hash_accesses,hash_accesses._4_4_);
  dVar6 = (dVar5 * 100.0) / dVar6;
  __printf_chk(1," %lf%% hit in four or more hops\n",SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20))
  ;
  save_directory_config_file(system,"drastic.cf2");
  if (system->gamecard_name[0] != '\0') {
    gamecard_close(&system->gamecard);
  }
  audio_exit(&(system->spu).audio);
  input_log_close(&system->input);
  uninitialize_memory(&system->memory);
  platform_quit();
                    /* WARNING: Subroutine does not return */
  exit(0);
}


