/*
 * Ghidra decompilation
 *
 * Function : flush_texture_cache
 * Address  : 0016b880
 * Program  : drastic64
 */


void flush_texture_cache(long param_1)

{
  void *pvVar1;
  long lVar2;
  void *__ptr;
  void *__ptr_00;
  
  __ptr_00 = *(void **)(param_1 + 0x8008);
  if (__ptr_00 != (void *)0x0) {
    lVar2 = *(long *)((long)__ptr_00 + 0x28);
    pvVar1 = *(void **)((long)__ptr_00 + 0x30);
    while( true ) {
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + (ulong)*(ushort *)((long)__ptr_00 + 0x44) * 8 + 8) = 0;
      }
      __ptr = *(void **)((long)__ptr_00 + 0x10);
      *(uint *)(param_1 + 0x8028) =
           *(int *)(param_1 + 0x8028) -
           (uint)*(ushort *)((long)__ptr_00 + 0x40) * (uint)*(ushort *)((long)__ptr_00 + 0x42) *
           (uint)(byte)bytes_per_dest_texel[(int)(uint)*(byte *)((long)__ptr_00 + 0x49)];
      free(__ptr);
      if (*(void **)((long)__ptr_00 + 0x18) == (void *)0x0) {
        free(__ptr_00);
        *(int *)(param_1 + 0x802c) = *(int *)(param_1 + 0x802c) + -1;
      }
      else {
        free(*(void **)((long)__ptr_00 + 0x18));
        free(__ptr_00);
        *(int *)(param_1 + 0x802c) = *(int *)(param_1 + 0x802c) + -1;
      }
      if (pvVar1 == (void *)0x0) break;
      lVar2 = *(long *)((long)pvVar1 + 0x28);
      __ptr_00 = pvVar1;
      pvVar1 = *(void **)((long)pvVar1 + 0x30);
    }
  }
  *(undefined8 *)(param_1 + 0x8008) = 0;
  *(undefined8 *)(param_1 + 0x8010) = 0;
  return;
}


