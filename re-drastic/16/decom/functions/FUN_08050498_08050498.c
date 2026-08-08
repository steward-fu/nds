/*
 * Ghidra decompilation
 *
 * Function : FUN_08050498
 * Address  : 08050498
 * Program  : drastic16
 */


void FUN_08050498(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *__ptr;
  size_t __n;
  
  if ((*(uint *)(*(int *)(param_1 + 0x9a18) + 0x81824) & 0x10) == 0) {
    if (*(char *)(param_1 + 0xe9ac8) == '\x02') {
      pvVar2 = *(void **)(param_1 + 0x9a40);
      __ptr = (void *)(param_1 + 0x61ab0);
      pvVar3 = pvVar2;
      if (pvVar2 != __ptr) {
        pvVar3 = (void *)(param_1 + 0x69ab0);
        printf("logging %d commands, %d parameters\n",(int)pvVar2 - (int)__ptr,
               *(int *)(param_1 + 0x9a44) - (int)pvVar3 >> 2,2,param_4);
        fwrite(__ptr,1,*(int *)(param_1 + 0x9a40) - (int)__ptr,*(FILE **)(param_1 + 0xe9ab8));
        fwrite(pvVar3,1,*(int *)(param_1 + 0x9a44) - (int)pvVar3 & 0xfffffffc,
               *(FILE **)(param_1 + 0xe9abc));
        pvVar2 = *(void **)(param_1 + 0x9a40);
        pvVar3 = __ptr;
      }
    }
    else {
      pvVar2 = *(void **)(param_1 + 0x9a40);
      pvVar3 = (void *)(param_1 + 0x61ab0);
    }
    FUN_0804cb3c(param_1,(int)pvVar2 - (int)pvVar3);
  }
  else {
    pvVar3 = (void *)(param_1 + 0x61ab0);
  }
  __n = *(int *)(param_1 + 0x9a48) - (int)*(void **)(param_1 + 0x9a40);
  iVar1 = *(int *)(param_1 + 0x9a4c) - *(int *)(param_1 + 0x9a44) >> 2;
  if (__n != 0) {
    memcpy(pvVar3,*(void **)(param_1 + 0x9a40),__n);
  }
  if (iVar1 != 0) {
    memcpy((void *)(param_1 + 0x69ab0),*(void **)(param_1 + 0x9a44),iVar1 << 2);
  }
  *(int *)(param_1 + 0x9a4c) = param_1 + (iVar1 + 0x1a6ac) * 4;
  *(size_t *)(param_1 + 0x9a48) = param_1 + __n + 0x61ab0;
  *(void **)(param_1 + 0x9a40) = pvVar3;
  *(void **)(param_1 + 0x9a44) = (void *)(param_1 + 0x69ab0);
  *(undefined *)(param_1 + 0x9a8f) = 0;
  return;
}


