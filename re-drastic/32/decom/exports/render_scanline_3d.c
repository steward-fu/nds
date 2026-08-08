/*
 * Ghidra decompilation
 *
 * Function : render_scanline_3d
 * Address  : 080790a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 * render_scanline_3d(video_struct *video,u32 line)

{
  u32 *puVar1;
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  uint uVar4;
  undefined (*pauVar5) [16];
  u32 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  u32 *pixel_a;
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  bool bVar11;
  bool bVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  uVar4 = video->config->hires_3d;
  uVar6 = video->config->threaded_3d;
  if (uVar4 == 0) {
    if (uVar6 == 0) {
      puVar1 = (video->video_3d).color_buffer_render;
    }
    else {
      puVar1 = (video->video_3d).color_buffer_scan;
    }
    return puVar1 + line * 0x100;
  }
  if (uVar6 == 0) {
    puVar1 = (video->video_3d).color_buffer_render;
  }
  else {
    puVar1 = (video->video_3d).color_buffer_scan;
  }
  pauVar2 = (undefined (*) [16])(puVar1 + line * 0x400);
  if ((uVar4 & 1) != 0) {
    return (u32 *)pauVar2;
  }
  bVar12 = pauVar2 < (undefined (*) [16])((int)scanline_3d_downsampled + 0x11);
  bVar11 = pauVar2 == (undefined (*) [16])(scanline_3d_downsampled + 4);
  if (pauVar2 < (undefined (*) [16])(scanline_3d_downsampled + 4)) {
    bVar12 = (undefined (*) [16])((int)reciprocal_table + 0xfff) < pauVar2 + 0xc1;
    bVar11 = pauVar2 + 0xc1 == (undefined (*) [16])scanline_3d_downsampled;
  }
  if (bVar12 && !bVar11) {
    puVar1 = reciprocal_table + 0x3ff;
    piVar8 = (int *)(pauVar2[-1] + 0xc);
    do {
      puVar1 = puVar1 + 1;
      *puVar1 = (uint)(piVar8[0x101] + piVar8[1] + piVar8[0x201] + piVar8[0x301]) >> 2 & 0x1f3f3f3f;
      piVar8 = piVar8 + 1;
    } while (puVar1 != scanline_3d_downsampled + 0xff);
  }
  else {
    pauVar10 = pauVar2 + 0x40;
    puVar7 = (undefined8 *)scanline_3d_downsampled;
    do {
      pauVar9 = pauVar2 + 0x80;
      auVar13 = *pauVar2;
      pauVar3 = pauVar2 + 0x40;
      pauVar5 = pauVar2 + 0xc0;
      pauVar2 = pauVar2 + 1;
      auVar13 = VectorAdd(*pauVar9,auVar13,4);
      auVar13 = VectorAdd(auVar13,*pauVar3,4);
      auVar13 = VectorAdd(auVar13,*pauVar5,4);
      auVar14 = VectorShiftRight(auVar13,2);
      auVar13._8_8_ = 0x1f3f3f3f1f3f3f3f;
      auVar13._0_8_ = 0x1f3f3f3f1f3f3f3f;
      *puVar7 = SUB168(auVar14 & auVar13,0);
      puVar7[1] = SUB168(auVar14 & auVar13,8);
      puVar7 = puVar7 + 2;
    } while (pauVar10 != pauVar2);
  }
  return scanline_3d_downsampled;
}


