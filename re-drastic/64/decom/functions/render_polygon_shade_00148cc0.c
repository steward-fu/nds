/*
 * Ghidra decompilation
 *
 * Function : render_polygon_shade
 * Address  : 00148cc0
 * Program  : drastic64
 */


void render_polygon_shade
               (long param_1,long param_2,long param_3,long param_4,undefined8 param_5,long param_6,
               undefined4 param_7,undefined4 param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_3 + 4) >> 4 & 3;
  if (uVar1 == 1) {
    render_polygon_decal_c(param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  if (uVar1 == 2) {
    param_2 = param_2 + 0x99cc;
    if ((*(uint *)(BYTE_ARRAY_0024947d + param_1 + 3) >> 1 & 1) != 0) {
      render_polygon_modulate_red_asm(param_4,param_5,param_6,param_8,param_9);
      lVar7 = 0;
      if (param_9 != 0) {
        do {
          uVar5 = *(uint *)(param_4 + lVar7 * 4);
          uVar6 = (ulong)(*(byte *)(param_6 + lVar7) >> 1);
          lVar4 = param_2 + uVar6;
          uVar1 = (uint)*(byte *)(lVar4 + 0x20) + (uVar5 >> 8 & 0x3f);
          uVar2 = (uint)*(byte *)(lVar4 + 0x40) + (uVar5 >> 0x10 & 0x3f);
          if (0x3f < uVar1) {
            uVar1 = 0x3f;
          }
          uVar3 = (uint)*(byte *)(param_2 + uVar6) + (uVar5 & 0x3f);
          if (0x3f < uVar2) {
            uVar2 = 0x3f;
          }
          if (0x3f < uVar3) {
            uVar3 = 0x3f;
          }
          *(uint *)(param_4 + lVar7 * 4) = uVar2 << 0x10 | uVar1 << 8 | uVar3 | uVar5 & 0x1f000000;
          lVar7 = lVar7 + 1;
        } while ((uint)lVar7 < param_9);
      }
      return;
    }
    render_polygon_toon_load_asm(param_2,param_6,param_7,param_9,param_8,param_9);
  }
  render_polygon_modulate_asm(param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


