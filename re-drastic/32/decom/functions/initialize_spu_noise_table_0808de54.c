/*
 * Ghidra decompilation
 *
 * Function : initialize_spu_noise_table
 * Address  : 0808de54
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_spu_noise_table(void)

{
  uint uVar1;
  s8 sVar2;
  u32 poly_out;
  s8 *psVar3;
  uint uVar4;
  bool bVar5;
  
  psVar3 = (s8 *)((int)reciprocal_table_u + 0xfff);
  uVar4 = 0x7fff;
  do {
    uVar1 = uVar4 >> 1;
    bVar5 = (uVar4 & 1) != 0;
    if (bVar5) {
      sVar2 = '\x7f';
    }
    else {
      sVar2 = -0x80;
    }
    uVar4 = uVar1;
    if (bVar5) {
      uVar4 = uVar1 ^ 0x6000;
    }
    psVar3 = psVar3 + 1;
    *psVar3 = sVar2;
  } while (psVar3 != noise_samples + 0x7ffe);
  return;
}


