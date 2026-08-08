/*
 * Ghidra decompilation
 *
 * Function : FUN_08078c64
 * Address  : 08078c64
 * Program  : drastic16
 */


undefined4 FUN_08078c64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18 [2];
  
  uVar3 = *(undefined4 *)(param_1 + 0x4000c);
  iVar1 = snd_pcm_open(&DAT_081c5058,"hw:0,1",1,1);
  if (iVar1 < 0) {
    uVar2 = snd_strerror();
    printf("ERROR: Unable to open audio capture device %s (%s)","hw:0,1",uVar2);
  }
  snd_pcm_hw_params_malloc(local_18);
  snd_pcm_hw_params_any(DAT_081c5058,local_18[0]);
  iVar1 = snd_pcm_hw_params_set_access(DAT_081c5058,local_18[0],3);
  if (iVar1 < 0) {
    uVar2 = snd_strerror();
    printf("ERROR: Could not set access type for audio capture (%s)\n",uVar2);
  }
  iVar1 = snd_pcm_hw_params_set_format(DAT_081c5058,local_18[0],2);
  if (iVar1 < 0) {
    uVar2 = snd_strerror();
    printf("ERROR: Could not set format for audio capture (%s)\n",uVar2);
  }
  iVar1 = snd_pcm_hw_params_set_rate_near(DAT_081c5058,local_18[0],param_1 + 0x4000c,0);
  if (iVar1 < 0) {
    uVar2 = snd_strerror();
    printf("ERROR: Could not set input rate for audio capture (%s)\n",uVar2);
  }
  printf("ALSA capture: requested rate of %d, got %d.\n",uVar3,*(undefined4 *)(param_1 + 0x4000c));
  iVar1 = snd_pcm_hw_params_set_channels(DAT_081c5058,local_18[0],2);
  if (iVar1 < 0) {
    uVar3 = snd_strerror();
    printf("ERROR: Could not set channels for audio capture (%s)\n",uVar3);
  }
  iVar1 = snd_pcm_hw_params(DAT_081c5058,local_18[0]);
  if (iVar1 < 0) {
    uVar3 = snd_strerror();
    printf("ERROR: Could not set HW params for audio capture (%s)",uVar3);
  }
  memset((void *)(param_1 + 0x20000),0,0x20000);
  snd_pcm_hw_params_free(local_18[0]);
  snd_pcm_prepare(DAT_081c5058);
  snd_pcm_start(DAT_081c5058);
  return 0;
}


