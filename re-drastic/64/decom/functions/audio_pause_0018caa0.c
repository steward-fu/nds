/*
 * Ghidra decompilation
 *
 * Function : audio_pause
 * Address  : 0018caa0
 * Program  : drastic64
 */


char audio_pause(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40027);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0x40027) = 1;
    return cVar1;
  }
  SDL_PauseAudio(1);
  *(undefined *)(param_1 + 0x40027) = 1;
  return '\0';
}


