/*
 * Ghidra decompilation
 *
 * Function : _Z12Blake2ThreadPv
 * Address  : 0810cb00
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable td:Blake2ThreadData *[r0:4] conflicts with parameter, skipped. */

void Blake2Thread(void *Data)

{
  byte *in;
  uint uVar1;
  size_t inlen__;
  byte *in__;
  
  in = *(byte **)((int)Data + 4);
  for (uVar1 = *(uint *)((int)Data + 8); 0x1ff < uVar1; uVar1 = uVar1 - 0x200) {
                    /* WARNING: Load size is inaccurate */
    blake2s_update(*Data,in,0x40);
    in = in + 0x200;
  }
  return;
}


