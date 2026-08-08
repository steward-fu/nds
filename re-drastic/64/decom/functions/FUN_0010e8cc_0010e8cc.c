/*
 * Ghidra decompilation
 *
 * Function : FUN_0010e8cc
 * Address  : 0010e8cc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010e8cc(long param_1)

{
  double dVar1;
  double dVar2;
  
  if (nds_system[param_1 + 0x362e9a8] == '\0') {
    cpu_print_profiler_results();
  }
  __printf_chk(((double)(unkuint9)(mini_hash_accesses - mini_hash_misses) * 100.0) /
               (double)(unkuint9)mini_hash_accesses,1,
               "%lu mini hash hits out of %lu accesses (%lf%%)\n");
  __printf_chk(1,"%lu hash accesses:\n",hash_accesses);
  dVar2 = (double)NEON_ucvtf(hash_accesses);
  dVar1 = (double)NEON_ucvtf(hash_hit_lengths);
  __printf_chk((dVar1 * 100.0) / dVar2,1," %lf%% hit in one hop\n");
  dVar1 = (double)NEON_ucvtf(DAT_00269018);
  dVar2 = (double)NEON_ucvtf(hash_accesses);
  __printf_chk((dVar1 * 100.0) / dVar2,1," %lf%% hit in two hops\n");
  dVar1 = (double)NEON_ucvtf(DAT_00269020);
  dVar2 = (double)NEON_ucvtf(hash_accesses);
  __printf_chk((dVar1 * 100.0) / dVar2,1," %lf%% hit in three hops\n");
  dVar2 = (double)NEON_ucvtf(DAT_00269028);
  dVar1 = (double)NEON_ucvtf(hash_accesses);
  __printf_chk((dVar2 * 100.0) / dVar1,1," %lf%% hit in four or more hops\n");
  save_directory_config_file(param_1,"drastic.cf2");
  if (*(char *)(param_1 + 0x8b380) != '\0') {
    gamecard_close(param_1 + 800);
  }
  audio_exit(param_1 + 0x1587000);
  input_log_close(param_1 + 0x5550);
  uninitialize_memory(param_1 + 0x35d4930);
  platform_quit();
  fflush(_stdout);
                    /* WARNING: Subroutine does not return */
  exit(0);
}


