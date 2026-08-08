/*
 * Ghidra decompilation
 *
 * Function : close_audio_capture
 * Address  : 080aab30
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void close_audio_capture(audio_struct *audio)

{
  if (capture_handle != (snd_pcm_t *)0x0) {
    snd_pcm_close();
    capture_handle = (snd_pcm_t *)0x0;
  }
  return;
}


