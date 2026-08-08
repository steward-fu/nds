/*
 * Ghidra decompilation
 *
 * Function : audio_revert_pause_state
 * Address  : 001886a0
 * Program  : drastic64
 */


void audio_revert_pause_state(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    return;
  }
  audio_unpause();
  return;
}


