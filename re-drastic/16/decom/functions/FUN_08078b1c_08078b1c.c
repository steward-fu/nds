/*
 * Ghidra decompilation
 *
 * Function : FUN_08078b1c
 * Address  : 08078b1c
 * Program  : drastic16
 */


void FUN_08078b1c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x40004);
  uVar1 = snd_pcm_avail(DAT_081c5054);
  uVar4 = uVar4 >> 1;
  uVar2 = uVar4;
  if ((uVar1 < uVar4) && (uVar2 = uVar1, param_2 == 0)) {
    uVar2 = uVar4;
  }
  iVar3 = snd_pcm_writei(DAT_081c5054,param_1,uVar2);
  if (iVar3 < 0) {
    snd_pcm_recover(DAT_081c5054,iVar3,1);
  }
  if ((param_3 != 0) && (*(char *)(param_1 + 0x40015) != '\0')) {
    iVar3 = snd_pcm_avail(DAT_081c5058);
    if (iVar3 < 0) {
      snd_pcm_prepare(DAT_081c5058);
    }
    snd_pcm_readi(DAT_081c5058,param_1 + 0x20000,uVar4);
  }
  *(undefined4 *)(param_1 + 0x40004) = 0;
  return;
}


