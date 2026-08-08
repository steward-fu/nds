/*
 * Ghidra decompilation
 *
 * Function : load_oam_deferred_first32
 * Address  : 00110c10
 * Program  : drastic64
 */


undefined4 load_oam_deferred_first32(long param_1,ulong param_2)

{
  void *__dest;
  
  __dest = (void *)(param_1 + 0x15870);
  if (*(code **)(param_1 + 0xfbff8) != store_oam_deferred8) {
    __dest = memcpy(__dest,(void *)(param_1 + 0x15070),0x800);
    *(void **)(param_1 + 0xfbfe0) = __dest;
    *(undefined *)(param_1 + 0xfc030) = 0;
    *(code **)(param_1 + 0xfbff8) = store_oam_deferred8;
    *(code **)(param_1 + 0xfc000) = store_oam_deferred16;
    *(code **)(param_1 + 0xfc008) = store_oam_deferred32;
  }
  return *(undefined4 *)((param_2 & 0x7ff) + (long)__dest);
}


