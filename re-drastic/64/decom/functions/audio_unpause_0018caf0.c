/*
 * Ghidra decompilation
 *
 * Function : audio_unpause
 * Address  : 0018caf0
 * Program  : drastic64
 */


void audio_unpause(long param_1)

{
  if (*(char *)(param_1 + 0x40027) == '\0') {
    return;
  }
  *(undefined *)(param_1 + 0x40027) = 0;
  SDL_PauseAudio(0);
  return;
}


