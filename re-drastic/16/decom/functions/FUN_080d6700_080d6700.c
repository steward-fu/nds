/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6700
 * Address  : 080d6700
 * Program  : drastic16
 */


uint * FUN_080d6700(uint *param_1)

{
  uint local_c;
  
  FUN_080d6afc(param_1);
  *(undefined *)(param_1 + 100) = 1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x72));
  param_1[0x65] = param_1[0x65] + 0x20;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x72));
  pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x66));
  for (local_c = 0; local_c < *param_1; local_c = local_c + 1) {
    FUN_080d6398(param_1[local_c + 1]);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x8c));
  pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x7a));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x86));
  pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x66));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x72));
  return param_1;
}


