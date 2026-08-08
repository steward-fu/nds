/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_span_8bpp_ext_palette_c
 * Address  : 001a1040
 * Program  : drastic64
 */


void render_scanline_tiled_span_8bpp_ext_palette_c
               (undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = 0;
  do {
    lVar1 = lVar7 * 2;
    pbVar2 = (byte *)(param_4 + lVar7);
    lVar7 = lVar7 + 1;
    uVar6 = *(ulong *)(param_2 + (ulong)*(ushort *)(param_3 + lVar1));
    bVar4 = *pbVar2 >> 4;
    uVar3 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    if ((*pbVar2 & 4) != 0) {
      uVar6 = uVar3 >> 0x20 | uVar3 << 0x20;
    }
    uVar5 = (ushort)bVar4 << 8;
    param_1[1] = CONCAT26(CONCAT11(bVar4,(char)(uVar6 >> 0x38)),
                          CONCAT24(uVar5 | (ushort)(uVar6 >> 0x30) & 0xff,
                                   CONCAT22(uVar5 | (ushort)(uVar6 >> 0x28) & 0xff,
                                            uVar5 | (ushort)(uVar6 >> 0x20) & 0xff)));
    *param_1 = CONCAT26((ushort)(((ulong)bVar4 << 0x20) >> 0x18) | (ushort)(uVar6 >> 0x18) & 0xff,
                        CONCAT24(uVar5 | (ushort)(uVar6 >> 0x10) & 0xff,
                                 CONCAT22(uVar5 | (ushort)(uVar6 >> 8) & 0xff,
                                          uVar5 | (ushort)uVar6 & 0xff)));
    param_1 = param_1 + 2;
  } while (lVar7 != 0x21);
  return;
}


