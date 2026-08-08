/*
 * Ghidra decompilation
 *
 * Function : platform_initialize_input
 * Address  : 0018c310
 * Program  : drastic64
 */


void platform_initialize_input(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = SDL_NumJoysticks();
  uVar3 = SDL_NumHaptics();
  __printf_chk(1,"%d joystick(s) found, %d haptic(s).\n",uVar2,uVar3);
  if (uVar2 == 0) {
    SDL_input._2096_8_ = 0;
LAB_0018c420:
    SDL_input._2096_8_ = SDL_HapticOpen(0);
    __printf_chk(1,"Haptic 0: %p\n");
    if (SDL_input._2096_8_ == 0) goto LAB_0018c3f0;
  }
  else {
    uVar5 = uVar2;
    if (4 < uVar2) {
      uVar5 = 4;
    }
    lVar4 = SDL_JoystickOpen(0);
    if (uVar2 != 1) {
      uVar2 = 1;
      do {
        uVar1 = uVar2 + 1;
        SDL_JoystickOpen(uVar2);
        uVar2 = uVar1;
      } while (uVar1 != uVar5);
    }
    SDL_JoystickEventState(1);
    if (lVar4 != 0) {
      SDL_input._2096_8_ = SDL_HapticOpenFromJoystick(lVar4);
      __printf_chk(1,"  Got haptic: %p\n");
    }
    if (SDL_input._2096_8_ == 0) goto LAB_0018c420;
  }
  SDL_input._2104_4_ = 0;
  SDL_HapticRumbleInit();
  uVar3 = SDL_HapticRumbleSupported(SDL_input._2096_8_);
  __printf_chk(1,"SDL haptic enabled (rumble support: %d)\n",uVar3);
LAB_0018c3f0:
  SDL_CaptureMouse(1);
  SDL_input._2064_8_ = 0x5c00000080;
  return;
}


