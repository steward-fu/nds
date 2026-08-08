/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_merge_tile_widths_c
 * Address  : 001a2610
 * Program  : drastic64
 */


ulong render_scanline_affine_merge_tile_widths_c
                (byte *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  byte bVar6;
  size_t __n;
  
  if (param_4 == 0) {
    memcpy(param_3,param_2,(ulong)param_5);
    return (ulong)param_5;
  }
  __n = (size_t)param_4;
  if (param_5 == 0) {
    memcpy(param_3,param_1,(ulong)param_4);
    return __n;
  }
  bVar6 = *param_1;
  bVar1 = *param_2;
  pbVar5 = param_3;
  while( true ) {
    pbVar3 = pbVar5;
    while (bVar6 < bVar1) {
      *pbVar3 = bVar6;
      uVar2 = (int)__n - 1;
      __n = (size_t)uVar2;
      if (uVar2 == 0) {
        pvVar4 = memcpy(pbVar3 + 1,param_2,(ulong)param_5);
        return (ulong)(((int)pvVar4 + param_5) - (int)param_3);
      }
      pbVar5 = param_1 + 1;
      param_1 = param_1 + 1;
      pbVar3 = pbVar3 + 1;
      bVar6 = *pbVar5;
    }
    pbVar5 = pbVar3;
    if (bVar6 != bVar1) {
      pbVar5 = pbVar3 + 1;
      *pbVar3 = bVar1;
    }
    param_5 = param_5 - 1;
    if (param_5 == 0) break;
    bVar1 = param_2[1];
    param_2 = param_2 + 1;
  }
  pvVar4 = memcpy(pbVar5,param_1,__n);
  return (ulong)(uint)(((int)pvVar4 + (int)__n) - (int)param_3);
}


