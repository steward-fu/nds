/*
 * Ghidra decompilation
 *
 * Function : apply_cycle_adjustment_hacks
 * Address  : 0010fa20
 * Program  : drastic64
 */


void apply_cycle_adjustment_hacks(long param_1)

{
  uint uVar1;
  
  __printf_chk(1,"Checking cycle hacks for gamecode %08x\n",*(undefined4 *)(param_1 + 0xc58));
  *(undefined8 *)(nds_system + param_1 + 0x362e988) = 0;
  *(undefined8 *)(nds_system + param_1 + 0x362e990) = 0;
  *(undefined8 *)(nds_system + param_1 + 0x362e998) = 0x100000000;
  nds_system[param_1 + 0x362e9a0] = 0;
  uVar1 = *(uint *)(param_1 + 0xc58) & 0xffffff;
  if (uVar1 == 0x4c4542) {
    puts("Element Hunters: 1 cycle");
    *(undefined4 *)(nds_system + param_1 + 0x362e988) = 1;
    return;
  }
  if (uVar1 < 0x4c4543) {
    if (uVar1 == 0x4a3542) {
      if (*(uint *)(param_1 + 0xc58) >> 0x18 != 0x50) {
        return;
      }
      puts("Zhu Zhu Babies (E): 1 cycle");
      *(undefined4 *)(nds_system + param_1 + 0x362e988) = 1;
      return;
    }
    if (uVar1 < 0x4a3543) {
      if (uVar1 == 0x414156) {
        puts("Art Academy: Applying vcount 192 hack.");
        nds_system[param_1 + 0x362e99d] = 1;
        return;
      }
      if (0x414156 < uVar1) {
        if (uVar1 != 0x463242) {
          return;
        }
        puts("Florist Shop: force undeferred 2D");
        nds_system[param_1 + 0x362e9a0] = 1;
        return;
      }
      if (uVar1 == 0x344843) {
        puts("Imagine - Champion Rider: swap stalls geometry");
        nds_system[param_1 + 0x362e99f] = 1;
        return;
      }
      if (uVar1 != 0x385943) {
        return;
      }
LAB_0010fb94:
      puts("Adjustment for Yu-Gi-Oh! 5D\'s: 1 cycle + DMA CPU");
      *(undefined4 *)(nds_system + param_1 + 0x362e988) = 1;
      *(undefined4 *)(nds_system + param_1 + 0x362e998) = 1;
      nds_system[param_1 + 0x362e99e] = 1;
      return;
    }
    if (uVar1 == 0x4a4c43) {
      puts("Adjustment for Mario & Luigi: Bowser\'s Inside Story: 2 cycles + DMA 2x + geometry 4x");
      *(undefined4 *)(nds_system + param_1 + 0x362e988) = 2;
      *(undefined8 *)(nds_system + param_1 + 0x362e994) = 0x200000004;
      return;
    }
    if (uVar1 == 0x4a5643) {
      puts("Adjustment for Ore ga Omae o Mamoru: 1 cycle");
      *(undefined4 *)(nds_system + param_1 + 0x362e988) = 1;
      return;
    }
    if (uVar1 != 0x4a4159) {
      return;
    }
  }
  else {
    if (uVar1 == 0x545059) {
      puts("Adjustment for Puppy Palace: 2 cycles");
      *(undefined4 *)(nds_system + param_1 + 0x362e988) = 2;
      return;
    }
    if (0x545059 < uVar1) {
      if (uVar1 == 0x594b42) {
        puts("Adjustment for Legend of Kay: 1 cycle");
        *(undefined4 *)(nds_system + param_1 + 0x362e988) = 1;
        return;
      }
      if (uVar1 < 0x594b43) {
        if (uVar1 == 0x574f43) {
          puts("Adjustment for Will o\' Wisp DS: 1 cycle");
          *(undefined4 *)(nds_system + param_1 + 0x362e988) = 1;
          return;
        }
        if (uVar1 != 0x585942) {
          return;
        }
      }
      else if (uVar1 != 0x595942) {
        return;
      }
      goto LAB_0010fb94;
    }
    if (uVar1 == 0x4e5343) {
      puts("Adjustment for Sonic Chronicles: 1 cycle");
      *(undefined4 *)(nds_system + param_1 + 0x362e988) = 1;
      return;
    }
    if (uVar1 == 0x503342) {
      puts("Adjustment for Spider-Man Shattered Dimensions: 1 cycle");
      *(undefined4 *)(nds_system + param_1 + 0x362e988) = 1;
      return;
    }
    if (uVar1 != 0x4d4143) {
      return;
    }
  }
  puts("American Girl: swap stalls geometry");
  nds_system[param_1 + 0x362e99f] = 1;
  return;
}


