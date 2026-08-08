/*
 * Ghidra decompilation
 *
 * Function : initialize_screen
 * Address  : 0018a7e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_screen(uint param_1)

{
  DAT_040315a0 = 0x16362004;
  if (param_1 == 0x10) {
    DAT_040315a0 = 0x15151002;
  }
  _DAT_04031528 = 0;
  SDL_screen = 0;
  uRam0000000004031550 = 0;
  _DAT_04031548 = 0;
  DAT_04031578 = 0;
  DAT_04031570 = 0;
  DAT_04031580 = 0;
  DAT_04031598 = 0;
  clear_screen();
  DAT_040315a8 = param_1 >> 2;
  DAT_040315ac = 0;
  DAT_040315c4 = 0xffffffffffffffff;
  DAT_040315cc = 0;
  DAT_040315d4 = 0;
  DAT_040315a4 = param_1;
  DAT_04031570 = SDL_CreateWindow("DraStic Nintendo DS Emulator",0x1fff0000,0x1fff0000,800,0x1e0,0);
  DAT_04031578 = SDL_CreateRenderer(DAT_04031570,0xffffffff,0);
  SDL_SetHint("SDL_RENDER_SCALE_QUALITY","linear");
  clear_screen();
  SDL_SetRenderDrawBlendMode(DAT_04031578,1);
  DAT_04031588 = SDL_CreateTexture(DAT_04031578,0x16362004,0,0x20);
  DAT_04031590 = SDL_CreateTexture(DAT_04031578,0x16362004,0,0x20);
  SDL_SetTextureBlendMode(DAT_04031588,1);
  SDL_SetTextureBlendMode(DAT_04031590,1);
  SDL_UpdateTexture(DAT_04031588,0,stylus_raw_0,0x80);
  SDL_UpdateTexture(DAT_04031590,0,&stylus_raw_1,0x80);
  DAT_04031541 = 1;
  DAT_04031569 = 1;
  DAT_040315ec = 0;
  set_screen_hires_mode(0,0);
  set_screen_hires_mode(1,0);
  return;
}


