/*
 * Ghidra decompilation
 *
 * Function : render_polygon_toon_highlight_untextured_c
 * Address  : 00148c30
 * Program  : drastic64
 */


void render_polygon_toon_highlight_untextured_c
               (long param_1,long param_2,long param_3,ulong param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = param_3 + (param_4 & 0xffffffff);
  if (param_6 != 0) {
    lVar7 = 0;
    do {
      uVar6 = (ulong)(*(byte *)(param_3 + lVar7) >> 1);
      lVar5 = param_1 + uVar6;
      uVar1 = (uint)*(byte *)(lVar5 + 0x20) + (uint)*(byte *)(lVar4 + lVar7);
      uVar2 = (uint)*(byte *)(lVar5 + 0x40) +
              (uint)*(byte *)(lVar4 + (param_4 & 0xffffffff) + lVar7);
      if (0x3f < uVar1) {
        uVar1 = 0x3f;
      }
      uVar3 = (uint)*(byte *)(param_1 + uVar6) + (uint)*(byte *)(param_3 + lVar7);
      if (0x3f < uVar2) {
        uVar2 = 0x3f;
      }
      if (0x3f < uVar3) {
        uVar3 = 0x3f;
      }
      *(uint *)(param_2 + lVar7 * 4) = uVar2 << 0x10 | uVar1 << 8 | uVar3 | param_5 << 0x18;
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < param_6);
  }
  return;
}


