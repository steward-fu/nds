/*
 * Ghidra decompilation
 *
 * Function : update_screens
 * Address  : 0018a690
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_screens(void)

{
  uint uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  uVar1 = (uint)DAT_040315cc;
  local_8 = ___stack_chk_guard;
  if (DAT_04031540 != '\0') {
    local_18 = DAT_04031530;
    uStack_10 = 0xc000000100;
    SDL_RenderCopy(DAT_04031578,SDL_screen,0,&local_18);
  }
  if (DAT_04031568 != '\0') {
    local_18 = _DAT_04031558;
    uStack_10 = 0xc000000100;
    SDL_RenderCopy(DAT_04031578,_DAT_04031548,0,&local_18);
  }
  if (DAT_040315ec != 0) {
    DAT_040315ec = DAT_040315ec + -1;
    uStack_10 = CONCAT44(_DAT_040315e4,_DAT_040315e4);
    local_18 = CONCAT44((int)((ulong)_DAT_040315dc >> 0x20) +
                        (int)((ulong)(&DAT_04031530)[(ulong)(uVar1 ^ 1) * 5] >> 0x20),
                        (int)_DAT_040315dc + (int)(&DAT_04031530)[(ulong)(uVar1 ^ 1) * 5]);
    if (_DAT_040315e8 == 0) {
      SDL_RenderCopy(DAT_04031578,DAT_04031588,0,&local_18);
    }
    else {
      SDL_RenderCopy(DAT_04031578,DAT_04031590,0,&local_18);
    }
  }
  SDL_RenderPresent(DAT_04031578);
  if ((int)DAT_040315d4 != 0) {
    set_screen_menu_off();
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


