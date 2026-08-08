/*
 * Ghidra decompilation
 *
 * Function : clear_screen
 * Address  : 080a815c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void clear_screen(void)

{
  int realw;
  int realh;
  int local_14;
  
  local_14 = __stack_chk_guard;
  SDL_RenderGetLogicalSize(SDL_screen.renderer,&realw,&realh);
  SDL_RenderSetLogicalSize(SDL_screen.renderer,gw,gh);
  SDL_SetRenderDrawColor(SDL_screen.renderer,0,0,0,0xff);
  SDL_RenderClear(SDL_screen.renderer);
  SDL_RenderPresent(SDL_screen.renderer);
  SDL_RenderClear(SDL_screen.renderer);
  SDL_RenderPresent(SDL_screen.renderer);
  SDL_RenderClear(SDL_screen.renderer);
  SDL_RenderPresent(SDL_screen.renderer);
  SDL_RenderClear(SDL_screen.renderer);
  SDL_RenderPresent(SDL_screen.renderer);
  SDL_RenderSetLogicalSize(SDL_screen.renderer,realw,realh);
  if (local_14 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


