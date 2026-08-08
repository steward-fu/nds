/*
 * Ghidra decompilation
 *
 * Function : set_screen_hires_mode
 * Address  : 080a8064
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void set_screen_hires_mode(u32 screen_number,u32 hires_mode)

{
  SDL_Texture *pSVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = SDL_screen.swap_screens ^ screen_number;
  if (SDL_screen.DS_screens[uVar3].hires_mode != hires_mode) {
    if (hires_mode == 0) {
      iVar5 = 0xc000;
      uVar6 = 0xc0;
      uVar4 = 0x100;
    }
    else {
      iVar5 = 0x30000;
      uVar6 = 0x180;
      uVar4 = 0x200;
    }
    if (SDL_screen.DS_screens[uVar3].texture != (SDL_Texture *)0x0) {
      SDL_DestroyTexture();
    }
    pSVar1 = (SDL_Texture *)
             SDL_CreateTexture(SDL_screen.renderer,SDL_screen.pixel_format,1,uVar4,uVar6);
    pvVar2 = SDL_screen.DS_screens[uVar3].pixels;
    SDL_screen.DS_screens[uVar3].texture = pSVar1;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = malloc(SDL_screen.bytes_per_pixel * iVar5);
      SDL_screen.DS_screens[uVar3].pixels = pvVar2;
    }
    else {
      pvVar2 = realloc(pvVar2,SDL_screen.bytes_per_pixel * iVar5);
      SDL_screen.DS_screens[uVar3].pixels = pvVar2;
    }
    SDL_screen.DS_screens[uVar3].hires_mode = (u8)hires_mode;
  }
  return;
}


