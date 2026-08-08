/*
 * Ghidra decompilation
 *
 * Function : audio_synchronous_update
 * Address  : 080aa7c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void audio_synchronous_update(audio_struct *audio,u32 non_blocking,u32 audio_capture)

{
  uint uVar1;
  uint uVar2;
  snd_pcm_sframes_t frames_available;
  int iVar3;
  s32 error_value;
  u32 frames_to_update;
  s16 *audio_buffer;
  
  uVar1 = audio->buffer_index >> 1;
  uVar2 = snd_pcm_avail(pcm_handle);
  if (non_blocking != 0 && uVar1 < uVar2 || (non_blocking == 0 || uVar1 == uVar2)) {
    uVar2 = uVar1;
  }
  iVar3 = snd_pcm_writei(pcm_handle,audio,uVar2);
  if (iVar3 < 0) {
    snd_pcm_recover(pcm_handle,iVar3,1);
  }
  if ((audio_capture != 0) && (audio->enable_capture != '\0')) {
    iVar3 = snd_pcm_avail(capture_handle);
    if (iVar3 < 0) {
      snd_pcm_prepare(capture_handle);
    }
    snd_pcm_readi(capture_handle,audio->capture_buffer,uVar1);
  }
  audio->buffer_index = 0;
  return;
}


