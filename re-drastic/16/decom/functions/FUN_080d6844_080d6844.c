/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6844
 * Address  : 080d6844
 * Program  : drastic16
 */


void FUN_080d6844(int param_1)

{
  int iVar1;
  code *local_10;
  undefined4 local_c;
  
  while (iVar1 = FUN_080d6924(param_1,&local_10), iVar1 != 0) {
    (*local_10)(local_c);
    FUN_080d63bc(param_1 + 0x230);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    if (*(int *)(param_1 + 0x84) == 0) {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x218));
      *(undefined *)(param_1 + 0x1e0) = 0;
      pthread_cond_signal((pthread_cond_t *)(param_1 + 0x1e8));
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x218));
    }
    FUN_080d63dc(param_1 + 0x230);
  }
  return;
}


