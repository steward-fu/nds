/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_link_delayed_targets
 * Address  : 001964e0
 * Program  : drastic64
 */


void cpu_translate_link_delayed_targets(long param_1)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint **ppuVar5;
  
  lVar4 = *(long *)(param_1 + 0x2088);
  iVar1 = *(int *)(nds_system + lVar4 + 0xfa4030);
  if (iVar1 != 0) {
    ppuVar5 = (uint **)(nds_system + lVar4 + 0xf24030);
    do {
      lVar2 = cpu_block_lookup_base(param_1,*(undefined4 *)(ppuVar5 + 1));
      if (lVar2 != 0) {
        puVar3 = *ppuVar5;
        *puVar3 = (uint)((int)lVar2 - (int)puVar3) >> 2 & 0x3ffffff | *puVar3 & 0xfc000000;
      }
      ppuVar5 = ppuVar5 + 2;
    } while (ppuVar5 != (uint **)(lVar4 + 0x1420040 + (ulong)(iVar1 - 1) * 0x10));
  }
  return;
}


