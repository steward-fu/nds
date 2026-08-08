/*
 * Ghidra decompilation
 *
 * Function : render_polygon_stencil_test
 * Address  : 08050d94
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_stencil_test
               (u8 *occlusion_masks,u32 *reference_depth,u32 pixels,u32 polygon_id,
               u32 *_occlusion_pass)

{
  u32 uVar1;
  u8 *puVar2;
  u32 *puVar3;
  uint uVar4;
  u8 *puVar5;
  u8 uVar6;
  u32 reference_depth_value;
  int iVar7;
  
  if (pixels != 0) {
    puVar5 = occlusion_masks + pixels;
    puVar3 = reference_depth + -1;
    pixels = 0;
    do {
      puVar3 = puVar3 + 1;
      uVar6 = *occlusion_masks;
      uVar4 = (*puVar3 << 2) >> 0x1a;
      uVar1 = uVar4 - polygon_id;
      if (uVar4 != polygon_id) {
        uVar1 = *puVar3;
      }
      iVar7 = (int)(char)uVar6;
      if ((int)uVar1 < 0 == (uVar4 == polygon_id && SBORROW4(uVar4,polygon_id))) {
        uVar6 = '\0';
        iVar7 = 0;
      }
      pixels = pixels - iVar7;
      puVar2 = occlusion_masks + 1;
      *occlusion_masks = uVar6;
      occlusion_masks = puVar2;
    } while (puVar2 != puVar5);
  }
  *_occlusion_pass = pixels;
  return;
}


