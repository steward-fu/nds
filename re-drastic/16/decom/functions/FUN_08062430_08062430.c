/*
 * Ghidra decompilation
 *
 * Function : FUN_08062430
 * Address  : 08062430
 * Program  : drastic16
 */


void FUN_08062430(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  void *__ptr;
  void *__ptr_00;
  
  __ptr_00 = *(void **)(param_2 + 0x18);
  if (*(int *)((int)__ptr_00 + 0xc) != 0) {
    uVar2 = 0;
    do {
      __ptr = *(void **)(*(int *)((int)__ptr_00 + 0x18) + uVar2 * 4);
      uVar2 = uVar2 + 1;
      pcVar1 = *(code **)((int)__ptr + 0x14);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(param_1,__ptr,param_3,pcVar1,param_4);
      }
      free(__ptr);
    } while (uVar2 < *(uint *)((int)__ptr_00 + 0xc));
  }
  free(*(void **)((int)__ptr_00 + 0x18));
  free(__ptr_00);
  return;
}


