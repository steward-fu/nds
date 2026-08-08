/*
 * Ghidra decompilation
 *
 * Function : initialize_screen
 * Address  : 080a85d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_screen(u32 color_depth)

{
  int iVar1;
  u32 uVar2;
  SDL_Texture *pSVar3;
  void *pvVar4;
  uint uVar5;
  SDL_DisplayMode mode;
  u32 uVar6;
  
  iVar1 = __stack_chk_guard;
  SDL_GetCurrentDisplayMode(0,&mode);
  SDL_screen.bytes_per_pixel = color_depth >> 2;
  SDL_screen.DS_screens[0].texture = (SDL_Texture *)0x0;
  SDL_screen.DS_screens[0].pixels = (void *)0x0;
  SDL_screen.DS_screens[1].texture = (SDL_Texture *)0x0;
  gw = mode.w;
  gh = mode.h;
  SDL_screen.DS_screens[1].pixels = (void *)0x0;
  SDL_screen.window = (SDL_Window *)0x0;
  SDL_screen.renderer = (SDL_Renderer *)0x0;
  SDL_screen.menu_texture = (SDL_Texture *)0x0;
  SDL_screen.menu_pixels = (u16 *)0x0;
  SDL_screen.pixel_format = 0;
  SDL_screen.scale_factor = 1;
  SDL_screen.orientation = 0;
  SDL_screen.update_scale_factor = -1;
  SDL_screen.update_orientation = -1;
  SDL_screen.swap_screens = 0;
  SDL_screen.rotate_screens = 0;
  SDL_screen.needs_reinitializing = 0;
  SDL_screen.menu_mode = 0;
  SDL_screen.color_depth = color_depth;
  SDL_screen.window =
       (SDL_Window *)
       SDL_CreateWindow("DraStic Nintendo DS Emulator",0x1fff0000,0x1fff0000,mode.w,mode.h,1);
  SDL_screen.renderer = (SDL_Renderer *)SDL_CreateRenderer(SDL_screen.window,0xffffffff,0);
  if (cursor_texture != (SDL_Texture *)0x0) {
    SDL_DestroyTexture(cursor_texture);
  }
  SDL_SetRenderDrawBlendMode(SDL_screen.renderer,1);
  cursor_texture = (SDL_Texture *)SDL_CreateTexture(SDL_screen.renderer,0x16762004,0,0x20,0x40);
  SDL_SetTextureBlendMode(cursor_texture,1);
  SDL_UpdateTexture(cursor_texture,0,cursor_texture_raw,0x80);
  SDL_SetHint("SDL_RENDER_SCALE_QUALITY","linear");
  clear_screen();
  uVar2 = SDL_screen.swap_screens;
  SDL_screen.DS_screens[0].hires_mode = '\x01';
  SDL_screen.DS_screens[1].hires_mode = '\x01';
  uVar6 = SDL_screen.swap_screens;
  if (SDL_screen.DS_screens[SDL_screen.swap_screens].hires_mode != '\0') {
    if (SDL_screen.DS_screens[SDL_screen.swap_screens].texture != (SDL_Texture *)0x0) {
      SDL_DestroyTexture();
    }
    pSVar3 = (SDL_Texture *)
             SDL_CreateTexture(SDL_screen.renderer,SDL_screen.pixel_format,1,0x100,0xc0);
    pvVar4 = SDL_screen.DS_screens[uVar2].pixels;
    SDL_screen.DS_screens[uVar2].texture = pSVar3;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = malloc(SDL_screen.bytes_per_pixel * 0xc000);
      SDL_screen.DS_screens[uVar2].pixels = pvVar4;
    }
    else {
      pvVar4 = realloc(pvVar4,SDL_screen.bytes_per_pixel * 0xc000);
      SDL_screen.DS_screens[uVar2].pixels = pvVar4;
    }
    uVar6 = SDL_screen.swap_screens;
    SDL_screen.DS_screens[uVar2].hires_mode = '\0';
  }
  uVar5 = uVar6 ^ 1;
  if (SDL_screen.DS_screens[uVar5].hires_mode != '\0') {
    if (SDL_screen.DS_screens[uVar5].texture != (SDL_Texture *)0x0) {
      SDL_DestroyTexture();
    }
    pSVar3 = (SDL_Texture *)
             SDL_CreateTexture(SDL_screen.renderer,SDL_screen.pixel_format,1,0x100,0xc0);
    pvVar4 = SDL_screen.DS_screens[uVar5].pixels;
    SDL_screen.DS_screens[uVar5].texture = pSVar3;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = malloc(SDL_screen.bytes_per_pixel * 0xc000);
      SDL_screen.DS_screens[uVar5].pixels = pvVar4;
    }
    else {
      pvVar4 = realloc(pvVar4,SDL_screen.bytes_per_pixel * 0xc000);
      SDL_screen.DS_screens[uVar5].pixels = pvVar4;
    }
    SDL_screen.DS_screens[uVar5].hires_mode = '\0';
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


