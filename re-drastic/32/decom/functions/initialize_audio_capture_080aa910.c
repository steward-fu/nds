/*
 * Ghidra decompilation
 *
 * Function : initialize_audio_capture
 * Address  : 080aa910
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 initialize_audio_capture(audio_struct *audio)

{
  char *pcVar1;
  int iVar2;
  s32 error_value;
  s32 sVar3;
  undefined4 uVar4;
  char *capture_device;
  u32 request_frequency;
  u32 uVar5;
  snd_pcm_hw_params_t *hw_params;
  int local_24;
  
  pcVar1 = mic_dev_name;
  uVar5 = audio->capture_frequency;
  local_24 = __stack_chk_guard;
  iVar2 = snd_pcm_open(&capture_handle,mic_dev_name,1);
  if (iVar2 < 0) {
    uVar4 = snd_strerror();
    __printf_chk(1,"ERROR: Unable to open audio capture device %s (%s)",pcVar1,uVar4);
    sVar3 = -1;
  }
  else {
    snd_pcm_hw_params_malloc(&hw_params);
    snd_pcm_hw_params_any(capture_handle,hw_params);
    iVar2 = snd_pcm_hw_params_set_access(capture_handle,hw_params,3);
    if (iVar2 < 0) {
      uVar4 = snd_strerror();
      __printf_chk(1,"ERROR: Could not set access type for audio capture (%s)\n",uVar4);
      sVar3 = -1;
    }
    else {
      iVar2 = snd_pcm_hw_params_set_format(capture_handle,hw_params,2);
      if (iVar2 < 0) {
        uVar4 = snd_strerror();
        __printf_chk(1,"ERROR: Could not set format for audio capture (%s)\n",uVar4);
        sVar3 = -1;
      }
      else {
        iVar2 = snd_pcm_hw_params_set_rate_near
                          (capture_handle,hw_params,&audio->capture_frequency,0);
        if (iVar2 < 0) {
          uVar4 = snd_strerror();
          __printf_chk(1,"ERROR: Could not set input rate for audio capture (%s)\n",uVar4);
          sVar3 = -1;
        }
        else {
          __printf_chk(1,"ALSA capture: requested rate of %d, got %d.\n",uVar5,
                       audio->capture_frequency);
          iVar2 = snd_pcm_hw_params_set_channels(capture_handle,hw_params,1);
          if (iVar2 < 0) {
            uVar4 = snd_strerror();
            __printf_chk(1,"ERROR: Could not set channels for audio capture (%s)\n",uVar4);
            sVar3 = -1;
          }
          else {
            iVar2 = snd_pcm_hw_params(capture_handle,hw_params);
            if (iVar2 < 0) {
              uVar4 = snd_strerror();
              __printf_chk(1,"ERROR: Could not set HW params for audio capture (%s)",uVar4);
              sVar3 = -1;
            }
            else {
              memset(audio->capture_buffer,0,0x20000);
              snd_pcm_hw_params_free(hw_params);
              snd_pcm_prepare(capture_handle);
              snd_pcm_start(capture_handle);
              sVar3 = 0;
            }
          }
        }
      }
    }
  }
  if (local_24 == __stack_chk_guard) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


