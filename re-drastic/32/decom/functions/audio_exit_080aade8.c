/*
 * Ghidra decompilation
 *
 * Function : audio_exit
 * Address  : 080aade8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void audio_exit(audio_struct *audio)

{
  snd_pcm_close(pcm_handle);
  return;
}


