/*
 * Ghidra decompilation
 *
 * Function : destroy_menu
 * Address  : 0017d6c0
 * Program  : drastic64
 */


void destroy_menu(undefined8 param_1,void *param_2)

{
  uint uVar1;
  ulong uVar2;
  void *__ptr;
  
  if (*(int *)((long)param_2 + 0x14) != 0) {
    uVar2 = 0;
    do {
      while( true ) {
        __ptr = *(void **)(*(long *)((long)param_2 + 0x20) + uVar2 * 8);
        if (*(code **)((long)__ptr + 0x28) == (code *)0x0) break;
        (**(code **)((long)__ptr + 0x28))(param_1,__ptr);
        free(__ptr);
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulong)uVar1;
        if (*(uint *)((long)param_2 + 0x14) <= uVar1) goto LAB_0017d720;
      }
      free(__ptr);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 < *(uint *)((long)param_2 + 0x14));
  }
LAB_0017d720:
  free(*(void **)((long)param_2 + 0x20));
  free(param_2);
  return;
}


