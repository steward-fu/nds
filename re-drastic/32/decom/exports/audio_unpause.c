/*
 * Ghidra decompilation
 *
 * Function : audio_unpause
 * Address  : 080aadd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void audio_unpause(audio_struct *audio)

{
  audio->pause_state = '\0';
  return;
}


