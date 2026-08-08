/*
 * Ghidra decompilation
 *
 * Function : audio_reset_buffer
 * Address  : 00188620
 * Program  : drastic64
 */


void audio_reset_buffer(void *param_1)

{
  *(undefined8 *)((long)param_1 + 0x40008) = 0;
  memset(param_1,0,0x20000);
  return;
}


