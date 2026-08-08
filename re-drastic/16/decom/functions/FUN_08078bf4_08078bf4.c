/*
 * Ghidra decompilation
 *
 * Function : FUN_08078bf4
 * Address  : 08078bf4
 * Program  : drastic16
 */


void FUN_08078bf4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x40015) != '\0') {
    while( true ) {
      iVar1 = snd_pcm_avail(DAT_081c5058);
      if (iVar1 < 0) {
        snd_pcm_prepare(DAT_081c5058);
      }
      iVar1 = snd_pcm_avail(DAT_081c5058);
      if (iVar1 < 1) break;
      snd_pcm_readi(DAT_081c5058,param_1 + 0x20000);
    }
    return;
  }
  return;
}


