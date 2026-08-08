/*
 * Ghidra decompilation
 *
 * Function : audio_exit
 * Address  : 0018ca90
 * Program  : drastic64
 */


void audio_exit(long param_1)

{
  *(undefined8 *)(param_1 + 0x40008) = 0xffff00000000;
  return;
}


