/*
 * Ghidra decompilation
 *
 * Function : audio_buffer_state
 * Address  : 080aa718
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 audio_buffer_state(audio_struct *audio)

{
  int iVar1;
  snd_pcm_sframes_t frames_available;
  
  iVar1 = snd_pcm_avail(pcm_handle);
  if (iVar1 < 0x1c01) {
    return (uint)(0x1400 < iVar1);
  }
  return 2;
}


