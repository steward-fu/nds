/*
 * Ghidra decompilation
 *
 * Function : FUN_08058980
 * Address  : 08058980
 * Program  : drastic16
 */


void FUN_08058980(int param_1)

{
  ushort uVar1;
  void *__ptr;
  void *__ptr_00;
  int iVar2;
  void *pvVar3;
  
  __ptr = *(void **)(param_1 + 0x4004);
  while (__ptr != (void *)0x0) {
    uVar1 = *(ushort *)((int)__ptr + 0x26);
    pvVar3 = *(void **)((int)__ptr + 0x1c);
    iVar2 = *(int *)(param_1 + 0x4020);
    if (*(int *)((int)__ptr + 0x18) == 0) {
      *(undefined4 *)(param_1 + (uint)*(ushort *)((int)__ptr + 0x28) * 4 + 4) = 0;
    }
    __ptr_00 = *(void **)((int)__ptr + 0xc);
    *(uint *)(param_1 + 0x4020) =
         iVar2 - (uint)(byte)(&DAT_080e70f0)[*(byte *)((int)__ptr + 0x2d)] *
                 (uint)uVar1 * (uint)*(ushort *)((int)__ptr + 0x24);
    free(__ptr_00);
    if (*(void **)((int)__ptr + 0x10) != (void *)0x0) {
      free(*(void **)((int)__ptr + 0x10));
    }
    free(__ptr);
    *(int *)(param_1 + 0x4024) = *(int *)(param_1 + 0x4024) + -1;
    __ptr = pvVar3;
  }
  *(undefined4 *)(param_1 + 0x4004) = 0;
  *(undefined8 *)(param_1 + 0x4008) = 0;
  *(undefined8 *)(param_1 + 0x4010) = 0;
  *(undefined8 *)(param_1 + 0x4018) = 0;
  return;
}


