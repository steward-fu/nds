/*
 * Ghidra decompilation
 *
 * Function : clear_screen
 * Address  : 0018a3c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_screen(void)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined auStack_20 [4];
  undefined4 local_1c;
  undefined4 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SDL_GetCurrentDisplayMode(0,auStack_20,0);
  SDL_RenderGetLogicalSize(DAT_04031578,&local_28,&uStack_24);
  SDL_RenderSetLogicalSize(DAT_04031578,local_1c,uStack_18);
  SDL_SetRenderDrawColor(DAT_04031578,0,0,0,0xffffffff);
  SDL_RenderClear(DAT_04031578);
  SDL_RenderPresent(DAT_04031578);
  SDL_RenderClear(DAT_04031578);
  SDL_RenderPresent(DAT_04031578);
  SDL_RenderClear(DAT_04031578);
  SDL_RenderPresent(DAT_04031578);
  SDL_RenderClear(DAT_04031578);
  SDL_RenderPresent(DAT_04031578);
  SDL_RenderSetLogicalSize(DAT_04031578,local_28,uStack_24);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


