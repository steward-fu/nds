/*
 * Ghidra decompilation
 *
 * Function : render_polygon_toon_highlight_c
 * Address  : 00148b50
 * Program  : drastic64
 */


void render_polygon_toon_highlight_c(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      uVar5 = *(uint *)(param_2 + lVar7 * 4);
      uVar6 = (ulong)(*(byte *)(param_3 + lVar7) >> 1);
      lVar4 = param_1 + uVar6;
      uVar1 = (uint)*(byte *)(lVar4 + 0x20) + (uVar5 >> 8 & 0x3f);
      uVar2 = (uint)*(byte *)(lVar4 + 0x40) + (uVar5 >> 0x10 & 0x3f);
      if (0x3f < uVar1) {
        uVar1 = 0x3f;
      }
      uVar3 = (uint)*(byte *)(param_1 + uVar6) + (uVar5 & 0x3f);
      if (0x3f < uVar2) {
        uVar2 = 0x3f;
      }
      if (0x3f < uVar3) {
        uVar3 = 0x3f;
      }
      *(uint *)(param_2 + lVar7 * 4) = uVar2 << 0x10 | uVar1 << 8 | uVar3 | uVar5 & 0x1f000000;
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < param_4);
  }
  return;
}


