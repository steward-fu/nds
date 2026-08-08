/*
 * Ghidra decompilation
 *
 * Function : FUN_08005bdc
 * Address  : 08005bdc
 * Program  : drastic16
 */


void FUN_08005bdc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  printf("Checking cycle hacks for gamecode %08x\n",*(undefined4 *)(param_1 + 0xa34),param_3,param_4
         ,param_4);
  uVar1 = *(uint *)(param_1 + 0xa34) & 0xffffff;
  *(undefined *)(param_1 + 0x2916464) = 1;
  *(undefined4 *)(param_1 + 0x291645c) = 0;
  *(undefined4 *)(param_1 + 0x2916460) = 0;
  *(undefined *)(param_1 + 0x2916466) = 0;
  *(undefined4 *)(param_1 + 0x2916458) = 0;
  *(undefined *)(param_1 + 0x2916465) = 0;
  if (uVar1 == 0x4e5343) {
    puts("Adjustment for Sonic Chronicles: 1 cycle");
    *(undefined4 *)(param_1 + 0x2916458) = 1;
    return;
  }
  if (uVar1 < 0x4e5344) {
    if (uVar1 == 0x414156) {
      puts("Art Academy: Applying vcount 192 hack.");
      *(undefined *)(param_1 + 0x2916465) = 1;
      return;
    }
    if (0x414156 < uVar1) {
      if (uVar1 == 0x4a4c43) {
        puts("Adjustment for Mario & Luigi: Bowser\'s Inside Story: 2 cycles + DMA 2x + geometry 4x"
            );
        *(undefined4 *)(param_1 + 0x2916458) = 2;
        *(undefined4 *)(param_1 + 0x2916460) = 2;
        *(undefined4 *)(param_1 + 0x291645c) = 4;
        return;
      }
      if (uVar1 != 0x4a5643) {
        return;
      }
      puts("Adjustment for Ore ga Omae o Mamoru: 1 cycle");
      *(undefined4 *)(param_1 + 0x2916458) = 1;
      return;
    }
    if (uVar1 != 0x385943) {
      return;
    }
  }
  else if (uVar1 != 0x585942) {
    if (uVar1 < 0x585943) {
      if (uVar1 == 0x503342) {
        puts("Adjustment for Spider-Man Shattered Dimensions: 1 cycle");
        *(undefined4 *)(param_1 + 0x2916458) = 1;
        return;
      }
      if (uVar1 != 0x545059) {
        return;
      }
      puts("Adjustment for Puppy Palace: 2 cycles");
      *(undefined4 *)(param_1 + 0x2916458) = 2;
      return;
    }
    if (uVar1 == 0x594b42) {
      puts("Adjustment for Legend of Kay: 1 cycle");
      *(undefined4 *)(param_1 + 0x2916458) = 1;
      return;
    }
    if (uVar1 != 0x595942) {
      return;
    }
  }
  puts("Adjustment for Yu-Gi-Oh! 5D\'s: 1 cycle + DMA CPU");
  *(undefined4 *)(param_1 + 0x2916458) = 1;
  *(undefined4 *)(param_1 + 0x2916460) = 1;
  *(undefined *)(param_1 + 0x2916466) = 1;
  return;
}


