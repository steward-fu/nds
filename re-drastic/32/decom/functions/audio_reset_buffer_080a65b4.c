/*
 * Ghidra decompilation
 *
 * Function : audio_reset_buffer
 * Address  : 080a65b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void audio_reset_buffer(audio_struct *audio)

{
  audio->buffer_base = 0;
  audio->buffer_index = 0;
  memset(audio,0,0x20000);
  return;
}


