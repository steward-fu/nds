/*
 * Ghidra decompilation
 *
 * Function : render_polygon_toon_shade_untextured_c
 * Address  : 00148be0
 * Program  : drastic64
 */


void render_polygon_toon_shade_untextured_c
               (long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_5 != 0) {
    lVar3 = 0;
    do {
      uVar2 = (ulong)(*(byte *)(param_3 + lVar3) >> 1);
      lVar1 = param_1 + uVar2;
      *(uint *)(param_2 + lVar3 * 4) =
           (uint)*(byte *)(lVar1 + 0x40) << 0x10 | (uint)*(byte *)(lVar1 + 0x20) << 8 |
           (uint)*(byte *)(param_1 + uVar2) | param_4 << 0x18;
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < param_5);
  }
  return;
}


