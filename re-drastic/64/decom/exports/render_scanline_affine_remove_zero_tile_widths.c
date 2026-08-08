/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_remove_zero_tile_widths
 * Address  : 001a2730
 * Program  : drastic64
 */


int render_scanline_affine_remove_zero_tile_widths(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (param_2 != 0) {
    pbVar1 = param_1 + (ulong)(param_2 - 1) + 1;
    iVar3 = 0;
    pbVar5 = param_1;
    uVar4 = 0x100;
    do {
      bVar2 = *param_1;
      *pbVar5 = bVar2;
      param_1 = param_1 + 1;
      if (uVar4 != bVar2) {
        pbVar5 = pbVar5 + 1;
        iVar3 = iVar3 + 1;
      }
      uVar4 = (uint)bVar2;
    } while (pbVar1 != param_1);
    return iVar3;
  }
  return 0;
}


