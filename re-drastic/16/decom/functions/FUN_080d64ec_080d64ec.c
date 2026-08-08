/*
 * Ghidra decompilation
 *
 * Function : FUN_080d64ec
 * Address  : 080d64ec
 * Program  : drastic16
 */


uint * FUN_080d64ec(uint *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  
  *param_1 = param_2;
  if (0x20 < *param_1) {
    *param_1 = 0x20;
  }
  if (*param_1 == 0) {
    *param_1 = 1;
  }
  if (0x20 < *param_1) {
    *param_1 = 0x20;
  }
  *(undefined *)(param_1 + 100) = 0;
  *(undefined *)(param_1 + 0x78) = 0;
  param_1[0x65] = 0;
  iVar2 = pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x8c),(pthread_mutexattr_t *)0x0);
  if ((((iVar2 == 0) &&
       (iVar2 = pthread_cond_init((pthread_cond_t *)(param_1 + 0x7a),(pthread_condattr_t *)0x0),
       iVar2 == 0)) &&
      (iVar2 = pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x86),(pthread_mutexattr_t *)0x0),
      iVar2 == 0)) &&
     ((iVar2 = pthread_cond_init((pthread_cond_t *)(param_1 + 0x66),(pthread_condattr_t *)0x0),
      iVar2 == 0 &&
      (iVar2 = pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x72),(pthread_mutexattr_t *)0x0),
      iVar2 == 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    FUN_080b7044(&DAT_081cd0a0,L"\nThread pool initialization failed.");
    FUN_080b71f4(&DAT_081cd0a0,2);
  }
  local_c = 0;
  while( true ) {
    if (*param_1 <= local_c) break;
    uVar3 = FUN_080d62d4(FUN_080d681c,param_1);
    param_1[local_c + 1] = uVar3;
    local_c = local_c + 1;
  }
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x21] = 0;
  return param_1;
}


