/*
 * Ghidra decompilation
 *
 * Function : audio_sync
 * Address  : 00188640
 * Program  : drastic64
 */


void audio_sync(long param_1)

{
  if ((uint)(*(int *)(param_1 + 0x40018) * 3) >> 2 <=
      (*(int *)(param_1 + 0x4000c) - *(int *)(param_1 + 0x40008) & 0xffffU)) {
    do {
      delay_us(10);
    } while ((uint)(*(int *)(param_1 + 0x40018) * 3) >> 2 <=
             (*(int *)(param_1 + 0x4000c) - *(int *)(param_1 + 0x40008) & 0xffffU));
  }
  return;
}


