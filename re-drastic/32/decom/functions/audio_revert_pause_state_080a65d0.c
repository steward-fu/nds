/*
 * Ghidra decompilation
 *
 * Function : audio_revert_pause_state
 * Address  : 080a65d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void audio_revert_pause_state(audio_struct *audio,u32 pause_state)

{
  if (pause_state != 0) {
    return;
  }
  audio_unpause(audio);
  return;
}


