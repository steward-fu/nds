/*
 * Ghidra decompilation
 *
 * Function : audio_buffer_force_feed
 * Address  : 080aa760
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void audio_buffer_force_feed(audio_struct *audio)

{
  undefined4 uVar1;
  snd_pcm_sframes_t frames_available;
  int iVar2;
  
  uVar1 = snd_pcm_avail(pcm_handle);
  iVar2 = snd_pcm_writei(pcm_handle,audio,uVar1);
  if (-1 < iVar2) {
    return;
  }
  snd_pcm_prepare(pcm_handle);
  return;
}


