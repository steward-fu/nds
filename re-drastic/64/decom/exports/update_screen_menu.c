/*
 * Ghidra decompilation
 *
 * Function : update_screen_menu
 * Address  : 0018a270
 * Program  : drastic64
 */


void update_screen_menu(void)

{
  SDL_UpdateTexture(DAT_04031580,0,DAT_04031598,0x640);
  SDL_RenderCopy(DAT_04031578,DAT_04031580,0,0);
  SDL_RenderPresent(DAT_04031578);
  return;
}


