/*
 * Ghidra decompilation
 *
 * Function : initialize_spu_noise_table
 * Address  : 0016d650
 * Program  : drastic64
 */


void initialize_spu_noise_table(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined uVar5;
  
  uVar2 = 0x7fff;
  puVar3 = &noise_samples;
  do {
    uVar1 = uVar2 & 1;
    uVar5 = 0x80;
    uVar2 = uVar2 >> 1;
    if (uVar1 != 0) {
      uVar2 = uVar2 ^ 0x6000;
      uVar5 = 0x7f;
    }
    puVar4 = puVar3 + 1;
    *puVar3 = uVar5;
    puVar3 = puVar4;
  } while (puVar4 != (undefined1 *)0x403151f);
  return;
}


