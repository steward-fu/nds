/*
 * Ghidra decompilation
 *
 * Function : render_polygon_toon_load_c
 * Address  : 00148b00
 * Program  : drastic64
 */


void render_polygon_toon_load_c(long param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = param_2 + (param_3 & 0xffffffff);
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      uVar3 = (ulong)(*(byte *)(param_2 + lVar4) >> 1);
      lVar2 = param_1 + uVar3;
      *(undefined *)(param_2 + lVar4) = *(undefined *)(param_1 + uVar3);
      *(undefined *)(lVar1 + lVar4) = *(undefined *)(lVar2 + 0x20);
      *(undefined *)(lVar1 + (param_3 & 0xffffffff) + lVar4) = *(undefined *)(lVar2 + 0x40);
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < param_4);
  }
  return;
}


