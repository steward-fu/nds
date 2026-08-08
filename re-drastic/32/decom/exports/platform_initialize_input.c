/*
 * Ghidra decompilation
 *
 * Function : platform_initialize_input
 * Address  : 080aa6a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void platform_initialize_input(void)

{
  uint uVar1;
  u32 joystick_count;
  u32 i;
  uint uVar2;
  
  uVar1 = SDL_NumJoysticks();
  __printf_chk(1,"  %d joystick(s) found.\n",uVar1);
  if (uVar1 != 0) {
    i = 0;
    if (3 < uVar1) {
      uVar1 = 4;
    }
    do {
      uVar2 = i + 1;
      SDL_JoystickOpen(i);
      i = uVar2;
    } while (uVar2 < uVar1);
    SDL_JoystickEventState(1);
    return;
  }
  return;
}


