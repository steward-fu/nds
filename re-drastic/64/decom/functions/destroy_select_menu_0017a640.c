/*
 * Ghidra decompilation
 *
 * Function : destroy_select_menu
 * Address  : 0017a640
 * Program  : drastic64
 */


void destroy_select_menu(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  void *__ptr;
  void *__ptr_00;
  
  __ptr = *(void **)(param_2 + 0x30);
  if (*(int *)((long)__ptr + 0x14) != 0) {
    uVar2 = 0;
    do {
      while( true ) {
        __ptr_00 = *(void **)(*(long *)((long)__ptr + 0x20) + uVar2 * 8);
        if (*(code **)((long)__ptr_00 + 0x28) != (code *)0x0) break;
        free(__ptr_00);
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulong)uVar1;
        if (*(uint *)((long)__ptr + 0x14) <= uVar1) {
          free(*(void **)((long)__ptr + 0x20));
          free(__ptr);
          return;
        }
      }
      (**(code **)((long)__ptr_00 + 0x28))(param_1,__ptr_00);
      free(__ptr_00);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 < *(uint *)((long)__ptr + 0x14));
  }
  free(*(void **)((long)__ptr + 0x20));
  free(__ptr);
  return;
}


