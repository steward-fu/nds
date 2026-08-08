/*
 * Ghidra decompilation
 *
 * Function : set_screen_menu_on
 * Address  : 0018aae0
 * Program  : drastic64
 */


void set_screen_menu_on(void)

{
  SDL_SetWindowSize(DAT_04031570,800,0x1e0);
  SDL_RenderSetLogicalSize(DAT_04031578,800,0x1e0);
  if (DAT_04031580 == 0) {
    DAT_04031580 = SDL_CreateTexture(DAT_04031578,0x15151002,1,800,0x1e0);
    clear_screen();
  }
  else {
    clear_screen();
  }
  if (DAT_04031598 != (void *)0x0) {
    DAT_040315d4._4_4_ = 1;
    return;
  }
  DAT_04031598 = malloc(0xbb800);
  DAT_040315d4._4_4_ = 1;
  return;
}


