/*
 * Ghidra decompilation
 *
 * Function : initialize_audio
 * Address  : 080aab64
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 initialize_audio(audio_struct *audio)

{
  int iVar1;
  s32 error_value;
  undefined4 uVar2;
  uint uVar3;
  u32 request_frequency;
  u32 uVar4;
  snd_pcm_hw_params_t *hw_params;
  snd_pcm_sw_params_t *sw_params;
  snd_pcm_uframes_t buffer_size;
  snd_pcm_uframes_t period_size;
  u32 zero;
  int local_1c;
  
  buffer_size = 0x2000;
  uVar4 = audio->output_frequency;
  period_size = 0x800;
  zero = 0;
  local_1c = __stack_chk_guard;
  iVar1 = snd_pcm_open(&pcm_handle,"default",0);
  if (iVar1 < 0) {
    uVar2 = snd_strerror();
    __printf_chk(1,"ERROR: Audio device failed to open (%s)\n",uVar2);
  }
  snd_pcm_hw_params_malloc(&hw_params);
  snd_pcm_hw_params_any(pcm_handle,hw_params);
  snd_pcm_hw_params_set_access(pcm_handle,hw_params,3);
  snd_pcm_hw_params_set_format(pcm_handle,hw_params,2);
  snd_pcm_hw_params_set_rate_near(pcm_handle,hw_params,&audio->output_frequency,0);
  snd_pcm_hw_params_set_channels(pcm_handle,hw_params,2);
  snd_pcm_hw_params_set_buffer_size_near(pcm_handle,hw_params,&buffer_size);
  snd_pcm_hw_params_set_period_size_near(pcm_handle,hw_params,&period_size,0);
  __printf_chk(1,"ALSA output: requested rate of %d, got %d.\n",uVar4,audio->output_frequency);
  __printf_chk(1,"ALSA output: requested buffer size of %d, got %d.\n",0x2000,buffer_size);
  __printf_chk(1,"ALSA output: requested period size of %d, got %d.\n",0x800,period_size);
  iVar1 = snd_pcm_hw_params(pcm_handle,hw_params);
  if (iVar1 < 0) {
    uVar2 = snd_strerror();
    __printf_chk(1,"ERROR: Audio failed to initialize HW params (%s)\n",uVar2);
  }
  snd_pcm_hw_params_free(hw_params);
  snd_pcm_sw_params_malloc(&sw_params);
  snd_pcm_sw_params_current(pcm_handle,sw_params);
  iVar1 = snd_pcm_sw_params(pcm_handle,sw_params);
  if (iVar1 < 0) {
    uVar2 = snd_strerror();
    __printf_chk(1,"ERROR: Audio failed to initialize SW params (%s)\n",uVar2);
  }
  snd_pcm_sw_params_free(sw_params);
  snd_pcm_prepare(pcm_handle);
  snd_pcm_start(pcm_handle);
  audio->synchronize = '\x01';
  audio->pause_state = '\x01';
  audio->playback_buffer_size = period_size;
  if (period_size >> 2 != 0) {
    uVar3 = 0;
    do {
      snd_pcm_writei(pcm_handle,&zero,1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < period_size >> 2);
  }
  puts("ALSA output: Using synchronous engine.");
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


