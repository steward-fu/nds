/*
 * Ghidra decompilation
 *
 * Function : render_scanline_capture_blended
 * Address  : 0013bc60
 * Program  : drastic64
 */


void render_scanline_capture_blended(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  bVar1 = *(byte *)(param_1 + 0x54);
  iVar7 = (uint)*(byte *)(param_1 + 0x55) * 2;
  uVar9 = (uint)bVar1;
  if (*(byte *)(param_1 + 0x55) == 0 && uVar9 == 0x10) {
    render_scanline_capture_direct_asm(param_1,param_2,param_4);
    return;
  }
  uVar10 = (uint)bVar1;
  if (*(long *)(param_1 + 0x40) == 0) {
    if (*(short *)(param_1 + 0x4c) != 0) {
      lVar8 = 0;
      do {
        *(ushort *)(param_2 + lVar8 * 2) =
             (ushort)((*(byte *)(param_4 + 0x200 + lVar8) * uVar9 >> 5 & 0x3f) << 10) |
             (ushort)*(byte *)(param_4 + 0x100 + lVar8) * (ushort)bVar1 & 0xffe0 |
             (ushort)(*(byte *)(param_4 + lVar8) * uVar10 >> 5) | 0x8000;
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < (uint)*(ushort *)(param_1 + 0x4c));
      return;
    }
  }
  else {
    lVar8 = 0;
    if (*(short *)(param_1 + 0x4c) != 0) {
      do {
        while( true ) {
          uVar2 = *(ushort *)(param_3 + lVar8 * 2);
          uVar3 = *(byte *)(param_4 + 0x200 + lVar8) * uVar10 + (uVar2 >> 10 & 0x1f) * iVar7;
          uVar4 = *(byte *)(param_4 + lVar8) * uVar10 + (uVar2 & 0x1f) * iVar7;
          uVar5 = *(byte *)(param_4 + 0x100 + lVar8) * uVar9 + (uVar2 >> 5 & 0x1f) * iVar7;
          uVar2 = (ushort)(uVar4 >> 5);
          if (0x3ff < uVar4) {
            uVar2 = 0x1f;
          }
          uVar6 = (ushort)((uVar3 >> 5 & 0x3f) << 10);
          if (0x3ff < uVar3) {
            uVar6 = 0x7c00;
          }
          if (uVar5 < 0x400) break;
          *(ushort *)(param_2 + lVar8 * 2) = uVar6 | 0x8000 | uVar2 | 0x3e0;
          lVar8 = lVar8 + 1;
          if ((uint)*(ushort *)(param_1 + 0x4c) <= (uint)lVar8) {
            return;
          }
        }
        *(ushort *)(param_2 + lVar8 * 2) = uVar6 | 0x8000 | uVar2 | (ushort)uVar5 & 0xffe0;
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < (uint)*(ushort *)(param_1 + 0x4c));
    }
  }
  return;
}


