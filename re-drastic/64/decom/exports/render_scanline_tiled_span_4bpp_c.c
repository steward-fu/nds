/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_span_4bpp_c
 * Address  : 001a0f30
 * Program  : drastic64
 */


void render_scanline_tiled_span_4bpp_c
               (undefined2 *param_1,long param_2,long param_3,long param_4,long param_5,long param_6
               )

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = 0;
  do {
    uVar2 = *(uint *)(param_4 + (ulong)*(ushort *)(param_5 + lVar5 * 2));
    lVar1 = param_3 + ((ulong)*(byte *)(param_6 + lVar5) & 0xf0) * 2;
    uVar3 = uVar2 >> 4;
    uVar4 = uVar3 & 0xf0f0f0f | (uVar2 & 0xf0f0f0f) << 4;
    if ((*(byte *)(param_6 + lVar5) >> 2 & 1) != 0) {
      uVar2 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar3 = uVar2 >> 4;
    }
    *param_1 = *(undefined2 *)(lVar1 + ((ulong)uVar2 & 0xf) * 2);
    param_1[1] = *(undefined2 *)(lVar1 + ((ulong)uVar3 & 0xf) * 2);
    param_1[2] = *(undefined2 *)(lVar1 + ((ulong)(uVar2 >> 8) & 0xf) * 2);
    param_1[3] = *(undefined2 *)(lVar1 + ((ulong)(uVar2 >> 0xc) & 0xf) * 2);
    param_1[4] = *(undefined2 *)(lVar1 + ((ulong)(uVar2 >> 0x10) & 0xf) * 2);
    param_1[5] = *(undefined2 *)(lVar1 + ((ulong)(uVar2 >> 0x14) & 0xf) * 2);
    param_1[6] = *(undefined2 *)(lVar1 + ((ulong)(uVar2 >> 0x18) & 0xf) * 2);
    param_1[7] = *(undefined2 *)(lVar1 + (ulong)(uVar2 >> 0x1c) * 2);
    *(uint *)(param_2 + lVar5 * 4) = uVar2;
    lVar5 = lVar5 + 1;
    param_1 = param_1 + 8;
  } while (lVar5 != 0x21);
  return;
}


