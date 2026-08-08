/*
 * Ghidra decompilation
 *
 * Function : FUN_08078aac
 * Address  : 08078aac
 * Program  : drastic16
 */


undefined FUN_08078aac(void)

{
  int iVar1;
  
  iVar1 = snd_pcm_avail(DAT_081c5054);
  if (iVar1 < 0x1c01) {
    return 0x1400 < iVar1;
  }
  return 2;
}


