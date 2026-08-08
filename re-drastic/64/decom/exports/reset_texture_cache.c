/*
 * Ghidra decompilation
 *
 * Function : reset_texture_cache
 * Address  : 0016bac0
 * Program  : drastic64
 */


void reset_texture_cache(long param_1)

{
  void *__ptr;
  void *__ptr_00;
  void *pvVar1;
  
  __ptr = *(void **)(param_1 + 0x8008);
  while (__ptr != (void *)0x0) {
    pvVar1 = *(void **)((long)__ptr + 0x30);
    if (*(long *)((long)__ptr + 0x28) == 0) {
      *(undefined8 *)(param_1 + (ulong)*(ushort *)((long)__ptr + 0x44) * 8 + 8) = 0;
    }
    __ptr_00 = *(void **)((long)__ptr + 0x10);
    *(uint *)(param_1 + 0x8028) =
         *(int *)(param_1 + 0x8028) -
         (uint)*(ushort *)((long)__ptr + 0x40) * (uint)*(ushort *)((long)__ptr + 0x42) *
         (uint)(byte)bytes_per_dest_texel[(int)(uint)*(byte *)((long)__ptr + 0x49)];
    free(__ptr_00);
    if (*(void **)((long)__ptr + 0x18) != (void *)0x0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
    *(int *)(param_1 + 0x802c) = *(int *)(param_1 + 0x802c) + -1;
    __ptr = pvVar1;
  }
  *(undefined8 *)(param_1 + 0x8008) = 0;
  *(undefined8 *)(param_1 + 0x8010) = 0;
  *(undefined8 *)(param_1 + 0x8018) = 0;
  *(undefined8 *)(param_1 + 0x8020) = 0;
  return;
}


