/*
 * Ghidra decompilation
 *
 * Function : initialize_audio
 * Address  : 0018c980
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_audio(long param_1)

{
  undefined4 uVar1;
  undefined4 local_48;
  undefined2 local_44;
  undefined local_42;
  undefined2 local_40;
  code *local_38;
  long lStack_30;
  undefined4 local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __printf_chk(1,"  Initializing audio with frequency %d.\n",*(undefined4 *)(param_1 + 0x40010),0);
  *(undefined4 *)(param_1 + 0x40018) = 0x1000;
  SDL_memset(&local_48,0,0x20);
  local_48 = *(undefined4 *)(param_1 + 0x40010);
  local_44 = 0x8010;
  local_42 = 2;
  local_40 = (undefined2)(*(uint *)(param_1 + 0x40018) >> 2);
  local_38 = audio_callback;
  lStack_30 = param_1;
  uVar1 = SDL_OpenAudio(&local_48,local_28);
  *(undefined4 *)(param_1 + 0x40010) = local_28[0];
  __printf_chk(1,"Got output device %d, frequency %d.\n",uVar1);
  *(undefined *)(param_1 + 0x40027) = 0;
  SDL_PauseAudio(0);
  if (local_8 - ___stack_chk_guard == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


