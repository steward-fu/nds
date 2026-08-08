/*
 * Ghidra decompilation
 *
 * Function : render_scanline_capture_blended_3d
 * Address  : 0013bdb0
 * Program  : drastic64
 */


void render_scanline_capture_blended_3d(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  bVar2 = *(byte *)(param_1 + 0x54);
  iVar7 = (uint)*(byte *)(param_1 + 0x55) * 2;
  uVar9 = (uint)bVar2;
  if (*(byte *)(param_1 + 0x55) == 0 && uVar9 == 0x10) {
    render_scanline_capture_direct_3d_asm(param_1,param_2,param_4);
    return;
  }
  uVar10 = (uint)bVar2;
  if (param_3 == 0) {
    if (*(short *)(param_1 + 0x4c) != 0) {
      lVar8 = 0;
      do {
        uVar1 = *(uint *)(param_4 + lVar8 * 4);
        *(ushort *)(param_2 + lVar8 * 2) =
             (ushort)(((uVar1 >> 0x10 & 0xff) * uVar10 >> 5 & 0x3f) << 10) |
             ((ushort)(uVar1 >> 8) & 0xff) * (ushort)bVar2 & 0xffe0 |
             (ushort)((uVar1 & 0xff) * uVar9 >> 5) | 0x8000;
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
          uVar1 = *(uint *)(param_4 + lVar8 * 4);
          uVar3 = *(ushort *)(param_3 + lVar8 * 2);
          uVar4 = (uVar1 >> 0x10 & 0xff) * uVar10 + (uVar3 >> 10 & 0x1f) * iVar7;
          uVar5 = (uVar1 & 0xff) * uVar10 + (uVar3 & 0x1f) * iVar7;
          uVar1 = (uVar1 >> 8 & 0xff) * uVar9 + (uVar3 >> 5 & 0x1f) * iVar7;
          uVar3 = (ushort)(uVar5 >> 5);
          if (0x3ff < uVar5) {
            uVar3 = 0x1f;
          }
          uVar6 = (ushort)((uVar4 >> 5 & 0x3f) << 10);
          if (0x3ff < uVar4) {
            uVar6 = 0x7c00;
          }
          if (uVar1 < 0x400) break;
          *(ushort *)(param_2 + lVar8 * 2) = uVar6 | 0x8000 | uVar3 | 0x3e0;
          lVar8 = lVar8 + 1;
          if ((uint)*(ushort *)(param_1 + 0x4c) <= (uint)lVar8) {
            return;
          }
        }
        *(ushort *)(param_2 + lVar8 * 2) = uVar6 | 0x8000 | uVar3 | (ushort)uVar1 & 0xffe0;
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < (uint)*(ushort *)(param_1 + 0x4c));
    }
  }
  return;
}


