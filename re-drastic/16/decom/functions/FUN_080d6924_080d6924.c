/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6924
 * Address  : 080d6924
 * Program  : drastic16
 */


bool FUN_080d6924(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 *puVar2;
  bool bVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1c8));
  while (*(int *)(param_1 + 0x194) == 0) {
    FUN_080d63fc(param_1 + 0x198,param_1 + 0x1c8);
  }
  *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + -1;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1c8));
  bVar3 = *(char *)(param_1 + 400) == '\0';
  if (bVar3) {
    FUN_080d63bc(param_1 + 0x230);
    puVar2 = (undefined4 *)(param_1 + (*(int *)(param_1 + 0x18c) + 0x11) * 8);
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    __aeabi_uidivmod(*(int *)(param_1 + 0x18c) + 1,0x20);
    *(undefined4 *)(param_1 + 0x18c) = extraout_r1;
    FUN_080d63dc(param_1 + 0x230);
  }
  return bVar3;
}


