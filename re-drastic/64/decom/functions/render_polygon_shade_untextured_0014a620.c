/*
 * Ghidra decompilation
 *
 * Function : render_polygon_shade_untextured
 * Address  : 0014a620
 * Program  : drastic64
 */


void render_polygon_shade_untextured
               (long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6,
               int param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(uint *)(param_3 + 4) >> 4 & 3) != 2) {
    render_polygon_combine_colors_asm(param_4,param_5,param_6,param_8,param_7);
    return;
  }
  param_2 = param_2 + 0x99cc;
  if ((*(uint *)(BYTE_ARRAY_0024947d + param_1 + 3) >> 1 & 1) == 0) {
    if (param_8 != 0) {
      lVar7 = 0;
      do {
        uVar6 = (ulong)(*(byte *)(param_5 + lVar7) >> 1);
        lVar4 = param_2 + uVar6;
        *(uint *)(param_4 + lVar7 * 4) =
             (uint)*(byte *)(lVar4 + 0x40) << 0x10 | (uint)*(byte *)(lVar4 + 0x20) << 8 |
             (uint)*(byte *)(param_2 + uVar6) | param_7 << 0x18;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < param_8);
    }
  }
  else {
    lVar4 = param_5 + (ulong)param_6;
    lVar7 = 0;
    if (param_8 != 0) {
      do {
        uVar6 = (ulong)(*(byte *)(param_5 + lVar7) >> 1);
        lVar5 = param_2 + uVar6;
        uVar1 = (uint)*(byte *)(lVar5 + 0x20) + (uint)*(byte *)(lVar4 + lVar7);
        uVar2 = (uint)*(byte *)(lVar5 + 0x40) + (uint)*(byte *)(lVar4 + (ulong)param_6 + lVar7);
        if (0x3f < uVar1) {
          uVar1 = 0x3f;
        }
        uVar3 = (uint)*(byte *)(param_2 + uVar6) + (uint)*(byte *)(param_5 + lVar7);
        if (0x3f < uVar2) {
          uVar2 = 0x3f;
        }
        if (0x3f < uVar3) {
          uVar3 = 0x3f;
        }
        *(uint *)(param_4 + lVar7 * 4) = uVar2 << 0x10 | uVar1 << 8 | uVar3 | param_7 << 0x18;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < param_8);
      return;
    }
  }
  return;
}


