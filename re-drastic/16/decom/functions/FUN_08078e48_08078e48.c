/*
 * Ghidra decompilation
 *
 * Function : FUN_08078e48
 * Address  : 08078e48
 * Program  : drastic16
 */


undefined4 FUN_08078e48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  uint local_20 [2];
  undefined4 local_18 [2];
  
  local_18[0] = 0;
  uVar4 = *(undefined4 *)(param_1 + 0x40008);
  local_28[0] = 0x2000;
  local_20[0] = 0x800;
  iVar1 = snd_pcm_open(&DAT_081c5054,"default",0,0);
  if (iVar1 < 0) {
    uVar2 = snd_strerror();
    printf("ERROR: Audio device failed to open (%s)\n",uVar2);
  }
  snd_pcm_hw_params_malloc(local_38);
  snd_pcm_hw_params_any(DAT_081c5054,local_38[0]);
  snd_pcm_hw_params_set_access(DAT_081c5054,local_38[0],3);
  snd_pcm_hw_params_set_format(DAT_081c5054,local_38[0],2);
  snd_pcm_hw_params_set_rate_near(DAT_081c5054,local_38[0],param_1 + 0x40008,0);
  snd_pcm_hw_params_set_channels(DAT_081c5054,local_38[0],2);
  snd_pcm_hw_params_set_buffer_size_near(DAT_081c5054,local_38[0],local_28);
  snd_pcm_hw_params_set_period_size_near(DAT_081c5054,local_38[0],local_20,0);
  printf("ALSA output: requested rate of %d, got %d.\n",uVar4,*(undefined4 *)(param_1 + 0x40008));
  printf("ALSA output: requested buffer size of %d, got %d.\n",0x2000,local_28[0]);
  printf("ALSA output: requested period size of %d, got %d.\n",0x800,local_20[0]);
  iVar1 = snd_pcm_hw_params(DAT_081c5054,local_38[0]);
  if (iVar1 < 0) {
    uVar4 = snd_strerror();
    printf("ERROR: Audio failed to initialize HW params (%s)\n",uVar4);
  }
  snd_pcm_hw_params_free(local_38[0]);
  snd_pcm_sw_params_malloc(local_30);
  snd_pcm_sw_params_current(DAT_081c5054,local_30[0]);
  iVar1 = snd_pcm_sw_params(DAT_081c5054,local_30[0]);
  if (iVar1 < 0) {
    uVar4 = snd_strerror();
    printf("ERROR: Audio failed to initialize SW params (%s)\n",uVar4);
  }
  snd_pcm_sw_params_free(local_30[0]);
  snd_pcm_prepare(DAT_081c5054);
  snd_pcm_start(DAT_081c5054);
  *(uint *)(param_1 + 0x40010) = local_20[0];
  *(undefined *)(param_1 + 0x40017) = 1;
  *(undefined *)(param_1 + 0x40016) = 1;
  if (local_20[0] >> 2 != 0) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      snd_pcm_writei(DAT_081c5054,local_18);
    } while (uVar3 < local_20[0] >> 2);
  }
  puts("ALSA output: Using synchronous engine.");
  return 0;
}


