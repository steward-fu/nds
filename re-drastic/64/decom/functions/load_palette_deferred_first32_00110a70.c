/*
 * Ghidra decompilation
 *
 * Function : load_palette_deferred_first32
 * Address  : 00110a70
 * Program  : drastic64
 */


undefined4 load_palette_deferred_first32(long param_1,ulong param_2)

{
  void *__dest;
  
  __dest = (void *)(param_1 + 0x16870);
  if (*(code **)(param_1 + 0xfbe78) != store_palette_deferred8) {
    __dest = memcpy(__dest,(void *)(param_1 + 0x16070),0x800);
    *(void **)(param_1 + 0xfbe60) = __dest;
    *(undefined *)(param_1 + 0xfbeb0) = 0;
    *(code **)(param_1 + 0xfbe78) = store_palette_deferred8;
    *(code **)(param_1 + 0xfbe80) = store_palette_deferred16;
    *(code **)(param_1 + 0xfbe88) = store_palette_deferred32;
  }
  return *(undefined4 *)((param_2 & 0x7ff) + (long)__dest);
}


