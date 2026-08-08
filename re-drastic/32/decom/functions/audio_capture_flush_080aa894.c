/*
 * Ghidra decompilation
 *
 * Function : audio_capture_flush
 * Address  : 080aa894
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void audio_capture_flush(audio_struct *audio)

{
  snd_pcm_sframes_t frames_available;
  int iVar1;
  
  if (audio->enable_capture == '\0') {
    return;
  }
  while( true ) {
    iVar1 = snd_pcm_avail(capture_handle);
    if (iVar1 < 0) {
      snd_pcm_prepare(capture_handle);
    }
    iVar1 = snd_pcm_avail(capture_handle);
    if (iVar1 < 1) break;
    if (0xffff < iVar1) {
      iVar1 = 0x10000;
    }
    snd_pcm_readi(capture_handle,audio->capture_buffer,iVar1);
  }
  return;
}


