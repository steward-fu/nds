/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6afc
 * Address  : 080d6afc
 * Program  : drastic16
 */


void FUN_080d6afc(int param_1)

{
  undefined4 extraout_r1;
  
  __aeabi_uidivmod((*(int *)(param_1 + 0x188) + 0x20) - *(int *)(param_1 + 0x18c),0x20);
  *(undefined4 *)(param_1 + 0x84) = extraout_r1;
  if (*(int *)(param_1 + 0x84) != 0) {
    *(undefined *)(param_1 + 0x1e0) = 1;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1c8));
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + *(int *)(param_1 + 0x84);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1c8));
    pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x198));
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x218));
    while (*(char *)(param_1 + 0x1e0) != '\0') {
      FUN_080d63fc(param_1 + 0x1e8,param_1 + 0x218);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x218));
  }
  return;
}


