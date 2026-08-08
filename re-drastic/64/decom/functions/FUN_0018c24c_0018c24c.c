/*
 * Ghidra decompilation
 *
 * Function : FUN_0018c24c
 * Address  : 0018c24c
 * Program  : drastic64
 */


void FUN_0018c24c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = SDL_input._2104_4_;
  if (SDL_input._2096_8_ != 0) {
    if (param_1 == 0) {
      iVar1 = param_1;
      if (SDL_input._2104_4_ != 0) {
        uVar3 = SDL_GetTicks();
        __printf_chk(1,"Stopping rumble (%d).\n",uVar3);
        SDL_HapticRumbleStop(SDL_input._2096_8_);
        iVar1 = param_1;
      }
    }
    else {
      iVar1 = param_1;
      if (SDL_input._2104_4_ == 0) {
        uVar3 = SDL_GetTicks();
        __printf_chk(1,"Turning on rumble (%d).\n",uVar3);
        iVar2 = SDL_HapticRumblePlay(0x3f800000,SDL_input._2096_8_,1000);
        iVar1 = param_1;
        if (iVar2 < 0) {
          uVar4 = SDL_GetError();
          __printf_chk(1,"Haptic failed: %s\n",uVar4);
          iVar1 = param_1;
        }
      }
    }
  }
  SDL_input._2104_4_ = iVar1;
  return;
}


