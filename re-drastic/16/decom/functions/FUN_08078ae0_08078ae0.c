/*
 * Ghidra decompilation
 *
 * Function : FUN_08078ae0
 * Address  : 08078ae0
 * Program  : drastic16
 */


void FUN_08078ae0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = snd_pcm_avail(DAT_081c5054);
  iVar2 = snd_pcm_writei(DAT_081c5054,param_1,uVar1);
  if (-1 < iVar2) {
    return;
  }
  snd_pcm_prepare(DAT_081c5054);
  return;
}


