/*
 * Ghidra decompilation
 *
 * Function : render_scanline_capture_blended
 * Address  : 080488d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_capture_blended
               (capture_settings_struct *capture_settings,u16 *dest,u16 *source_capture,u8 *source)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  u32 pixel_b;
  ushort *puVar4;
  byte *pbVar5;
  ushort *puVar6;
  u32 ra_1;
  uint uVar7;
  u32 ga_1;
  ushort uVar8;
  u32 ra;
  u32 ba;
  u32 ga;
  uint uVar9;
  
  if (capture_settings->blend_a == 0x10 && capture_settings->blend_b == 0) {
    render_scanline_capture_direct(capture_settings,dest,source);
    return;
  }
  uVar7 = 0;
  uVar1 = (ushort)capture_settings->blend_a;
  if (capture_settings->source_ptr == (u16 *)0x0) {
    if (capture_settings->width != 0) {
      puVar4 = dest + -1;
      uVar7 = 0;
      pbVar5 = source + -1;
      do {
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = (ushort)((uint)((int)(short)uVar1 * (int)(short)(ushort)pbVar5[1]) >> 5) | 0x8000
                  | uVar1 * pbVar5[0x101] & 0xffe0 |
                  (ushort)(((uint)((int)(short)uVar1 * (int)(short)(ushort)pbVar5[0x201]) >> 5) <<
                          10);
        pbVar5 = pbVar5 + 1;
      } while (uVar7 < capture_settings->width);
    }
  }
  else if (capture_settings->width != 0) {
    iVar2 = (uint)capture_settings->blend_b * 2;
    puVar6 = source_capture + -1;
    puVar4 = dest + -1;
    pbVar5 = source + -1;
    do {
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
      uVar3 = (uint)*puVar6;
      uVar9 = iVar2 * (uVar3 & 0x1f) + (int)(short)uVar1 * (int)(short)(ushort)pbVar5[1] >> 5;
      if (uVar9 < 0x20) {
        uVar8 = (ushort)uVar9 | 0x8000;
      }
      else {
        uVar8 = 0x801f;
      }
      uVar9 = iVar2 * ((uVar3 << 0x16) >> 0x1b) +
              (int)(short)uVar1 * (int)(short)(ushort)pbVar5[0x101] >> 5;
      uVar3 = iVar2 * ((uVar3 << 0x11) >> 0x1b) +
              (int)(short)uVar1 * (int)(short)(ushort)pbVar5[0x201] >> 5;
      if (0x1e < uVar9) {
        uVar9 = 0x1f;
      }
      if (0x1e < uVar3) {
        uVar3 = 0x1f;
      }
      puVar4 = puVar4 + 1;
      *puVar4 = uVar8 | (ushort)(uVar9 << 5) | (ushort)(uVar3 << 10);
      pbVar5 = pbVar5 + 1;
    } while (uVar7 < capture_settings->width);
  }
  return;
}


