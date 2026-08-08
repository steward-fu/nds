/*
 * Ghidra decompilation
 *
 * Function : audio_pause
 * Address  : 080aadc4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable current_audio_pause:u32[r0:4] conflicts with parameter, skipped. */

u32 audio_pause(audio_struct *audio)

{
  byte bVar1;
  
  bVar1 = audio->pause_state;
  audio->pause_state = '\x01';
  return (uint)bVar1;
}


