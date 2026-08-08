/*
 * Ghidra decompilation
 *
 * Function : FUN_08064de8
 * Address  : 08064de8
 * Program  : drastic16
 */


void FUN_08064de8(undefined4 param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  void *__ptr;
  
  if (*(int *)((int)param_2 + 0xc) != 0) {
    uVar2 = 0;
    do {
      __ptr = *(void **)(*(int *)((int)param_2 + 0x18) + uVar2 * 4);
      uVar2 = uVar2 + 1;
      pcVar1 = *(code **)((int)__ptr + 0x14);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(param_1,__ptr,param_3,pcVar1,param_4);
      }
      free(__ptr);
    } while (uVar2 < *(uint *)((int)param_2 + 0xc));
  }
  free(*(void **)((int)param_2 + 0x18));
  free(param_2);
  return;
}


