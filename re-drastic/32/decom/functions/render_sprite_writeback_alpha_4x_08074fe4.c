/*
 * Ghidra decompilation
 *
 * Function : render_sprite_writeback_alpha_4x
 * Address  : 08074fe4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_sprite_writeback_alpha_4x
               (u32 *color_buffer,u32 *depth_buffer,u8 *alpha_id,u32 width,u32 height,u32 *colors,
               u32 *depth_values,u8 *reference_id)

{
  u8 *puVar1;
  u32 *puVar2;
  u32 *puVar3;
  u8 *puVar4;
  u8 *puVar5;
  u8 *puVar6;
  u32 *puVar7;
  u32 *puVar8;
  u32 uVar9;
  u32 *puVar10;
  u32 *puVar11;
  
  if (height != 0) {
    puVar8 = color_buffer + -1;
    puVar7 = depth_buffer + -1;
    puVar6 = alpha_id + -1;
    uVar9 = 0;
    do {
      puVar5 = reference_id;
      if (width != 0) {
        puVar11 = colors + -1;
        puVar5 = reference_id + width;
        puVar10 = depth_values + -1;
        puVar1 = puVar6;
        puVar2 = puVar7;
        puVar3 = puVar8;
        do {
          puVar11 = puVar11 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar11;
          puVar10 = puVar10 + 1;
          puVar2 = puVar2 + 1;
          *puVar2 = *puVar10;
          puVar4 = reference_id + 1;
          puVar1 = puVar1 + 1;
          *puVar1 = *reference_id;
          reference_id = puVar4;
        } while (puVar4 != puVar5);
        colors = colors + width;
        depth_values = depth_values + width;
      }
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 0x200;
      puVar7 = puVar7 + 0x200;
      puVar6 = puVar6 + 0x200;
      reference_id = puVar5;
    } while (height != uVar9);
  }
  return;
}


