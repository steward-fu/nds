/*
 * Ghidra decompilation
 *
 * Function : render_scanline_capture_blended_3d
 * Address  : 08048a48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_capture_blended_3d
               (capture_settings_struct *capture_settings,u16 *dest,u16 *source_capture,
               u32 *source_3d)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint *puVar4;
  ushort *puVar5;
  uint uVar6;
  u32 color_1;
  ushort *puVar7;
  u32 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  u32 pixel_b;
  uint uVar12;
  u32 color;
  uint uVar13;
  u32 blend_a;
  
  bVar2 = capture_settings->blend_a;
  uVar13 = (uint)bVar2;
  if (uVar13 == 0x10 && capture_settings->blend_b == 0) {
    render_scanline_capture_direct_3d(capture_settings,dest,source_3d);
    return;
  }
  uVar9 = 0;
  if (source_capture == (u16 *)0x0) {
    if (capture_settings->width != 0) {
      puVar4 = source_3d + -1;
      puVar5 = dest + -1;
      uVar9 = 0;
      do {
        puVar4 = puVar4 + 1;
        uVar6 = *puVar4;
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = (ushort)bVar2 * (ushort)(byte)(uVar6 >> 8) & 0xffe0 |
                  (ushort)(uVar13 * (uVar6 & 0xff) >> 5) | 0x8000 |
                  (ushort)((uVar13 * ((uVar6 << 8) >> 0x18) >> 5) << 10);
      } while (uVar9 < capture_settings->width);
    }
  }
  else if (capture_settings->width != 0) {
    iVar1 = (uint)capture_settings->blend_b * 2;
    puVar8 = source_3d + -1;
    puVar7 = source_capture + -1;
    puVar5 = dest + -1;
    do {
      puVar7 = puVar7 + 1;
      uVar11 = (uint)*puVar7;
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 1;
      uVar12 = *puVar8;
      uVar6 = uVar13 * (uVar12 & 0xff) + iVar1 * (uVar11 & 0x1f) >> 5;
      uVar10 = uVar13 * ((uVar12 << 0x10) >> 0x18) + iVar1 * ((uVar11 << 0x16) >> 0x1b) >> 5;
      uVar11 = uVar13 * ((uVar12 << 8) >> 0x18) + iVar1 * ((uVar11 << 0x11) >> 0x1b) >> 5;
      if (uVar6 < 0x20) {
        uVar3 = (ushort)uVar6 | 0x8000;
      }
      else {
        uVar3 = 0x801f;
      }
      if (0x1e < uVar10) {
        uVar10 = 0x1f;
      }
      if (0x1e < uVar11) {
        uVar11 = 0x1f;
      }
      puVar5 = puVar5 + 1;
      *puVar5 = uVar3 | (ushort)(uVar10 << 5) | (ushort)(uVar11 << 10);
    } while (uVar9 < capture_settings->width);
  }
  return;
}


