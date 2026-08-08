/*
 * Ghidra decompilation
 *
 * Function : apply_cycle_adjustment_hacks
 * Address  : 080074d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void apply_cycle_adjustment_hacks(system_struct *system)

{
  uint uVar1;
  uint uVar2;
  
  __printf_chk(1,"Checking cycle hacks for gamecode %08x\n",(system->gamecard).game_code);
  system->gamecard_delay = '\x01';
  system->vcount_edge_hack = '\0';
  system->dma_consumes_cpu_cycles = '\0';
  system->swap_stalls_geometry = '\0';
  system->force_undeferred_2d = '\0';
  uVar1 = (system->gamecard).game_code;
  system->cpu_cycle_adjustment = 0;
  system->geometry_cycle_multiplier = 0;
  system->dma_cycle_multiplier = 0;
  uVar2 = uVar1 & 0xffffff;
  if (uVar2 == 0x4c4542) {
    puts("Element Hunters: 1 cycle");
    system->cpu_cycle_adjustment = 1;
    return;
  }
  if (uVar2 < 0x4c4543) {
    if (uVar2 == 0x4a3542) {
      if (uVar1 >> 0x18 != 0x50) {
        return;
      }
      puts("Zhu Zhu Babies (E): 1 cycle");
      system->cpu_cycle_adjustment = 1;
      return;
    }
    if (0x4a3542 < uVar2) {
      if (uVar2 == 0x4a4c43) {
        puts("Adjustment for Mario & Luigi: Bowser\'s Inside Story: 2 cycles + DMA 2x + geometry 4x"
            );
        system->cpu_cycle_adjustment = 2;
        system->geometry_cycle_multiplier = 4;
        system->dma_cycle_multiplier = 2;
        return;
      }
      if (uVar2 == 0x4a5643) {
        puts("Adjustment for Ore ga Omae o Mamoru: 1 cycle");
        system->cpu_cycle_adjustment = 1;
        return;
      }
      if (uVar2 != 0x4a4159) {
        return;
      }
      goto LAB_08007754;
    }
    if (uVar2 == 0x414156) {
      puts("Art Academy: Applying vcount 192 hack.");
      system->vcount_edge_hack = '\x01';
      return;
    }
    if (uVar2 == 0x463242) {
      puts("Florist Shop: force undeferred 2D");
      system->force_undeferred_2d = '\x01';
      return;
    }
    if (uVar2 != 0x385943) {
      return;
    }
  }
  else {
    if (uVar2 == 0x545059) {
      puts("Adjustment for Puppy Palace: 2 cycles");
      system->cpu_cycle_adjustment = 2;
      return;
    }
    if (uVar2 < 0x54505a) {
      if (uVar2 == 0x4e5343) {
        puts("Adjustment for Sonic Chronicles: 1 cycle");
        system->cpu_cycle_adjustment = 1;
        return;
      }
      if (uVar2 == 0x503342) {
        puts("Adjustment for Spider-Man Shattered Dimensions: 1 cycle");
        system->cpu_cycle_adjustment = 1;
        return;
      }
      if (uVar2 != 0x4d4143) {
        return;
      }
LAB_08007754:
      puts("American Girl: swap stalls geometry");
      system->swap_stalls_geometry = '\x01';
      return;
    }
    if (uVar2 != 0x585942) {
      if (uVar2 < 0x585943) {
        if (uVar2 != 0x574f43) {
          return;
        }
        puts("Adjustment for Will o\' Wisp DS: 1 cycle");
        system->cpu_cycle_adjustment = 1;
        return;
      }
      if (uVar2 == 0x594b42) {
        puts("Adjustment for Legend of Kay: 1 cycle");
        system->cpu_cycle_adjustment = 1;
        return;
      }
      if (uVar2 != 0x595942) {
        return;
      }
    }
  }
  puts("Adjustment for Yu-Gi-Oh! 5D\'s: 1 cycle + DMA CPU");
  system->cpu_cycle_adjustment = 1;
  system->dma_cycle_multiplier = 1;
  system->dma_consumes_cpu_cycles = '\x01';
  return;
}


