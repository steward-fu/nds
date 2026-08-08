/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj_affine_8bpp
 * Address  : 080bbb0c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 render_scanline_obj_affine_8bpp
              (video_2d_obj_struct *obj,u16 *obj_pixels,u32 line,s32 *_left_offset)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  s32 y_delta;
  undefined4 uVar5;
  int iVar6;
  s32 edge_x1;
  u32 uVar7;
  uint uVar8;
  s32 edge_y1;
  uint uVar9;
  int iVar10;
  u16 *puVar11;
  u8 *puVar12;
  s32 obj_width;
  s32 left_edge;
  s32 right_edge;
  undefined8 uVar13;
  int iStack_2c;
  
  uVar4 = line - (int)obj->y;
  if ((int)(uVar4 + 0xc0) < 0 != SCARRY4(uVar4,0xc0)) {
    uVar4 = uVar4 + 0x100;
  }
  lVar2 = (ulonglong)uVar4 * (ulonglong)*(uint *)&obj->edge_step_x;
  uVar9 = (uint)lVar2;
  uVar13 = VectorShiftRight(CONCAT44(uVar4,uVar4),0x20);
  iStack_2c = (int)((ulonglong)uVar13 >> 0x20);
  lVar3 = (ulonglong)uVar4 * (ulonglong)*(uint *)&obj->edge_step_y;
  uVar8 = (uint)lVar3;
  iVar6 = *(int *)((int)&obj->edge_base_x + 4) +
          *(uint *)&obj->edge_step_x * iStack_2c + uVar4 * *(int *)((int)&obj->edge_step_x + 4) +
          (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(*(uint *)&obj->edge_base_x,uVar9);
  iVar10 = *(uint *)&obj->edge_step_y * iStack_2c + uVar4 * *(int *)((int)&obj->edge_step_y + 4) +
           (int)((ulonglong)lVar3 >> 0x20) + *(int *)((int)&obj->edge_base_y + 4) +
           (uint)CARRY4(uVar8,*(uint *)&obj->edge_base_y);
  left_edge = iVar10;
  if (iVar10 < iVar6) {
    left_edge = iVar6;
  }
  iVar6 = *(int *)((int)&obj->edge_width_x + 4) + iVar6 +
          (uint)CARRY4(*(uint *)&obj->edge_width_x,*(uint *)&obj->edge_base_x + uVar9);
  right_edge = iVar10 + *(int *)((int)&obj->edge_width_y + 4) +
               (uint)CARRY4(uVar8 + *(uint *)&obj->edge_base_y,*(uint *)&obj->edge_width_y);
  uVar8 = left_edge & ~(left_edge >> 0x1f);
  if (iVar6 <= right_edge) {
    right_edge = iVar6;
  }
  if ((int)(uint)obj->width <= right_edge) {
    right_edge = obj->width - 1;
  }
  uVar7 = (right_edge - uVar8) + 1;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  else {
    puVar12 = obj->base_ptr;
    uVar5._0_2_ = obj->dx;
    uVar5._2_2_ = obj->dy;
    puVar11 = obj->palette;
    sVar1 = obj->x;
    render_scanline_obj_pixel_offsets_8bpp
              (obj_pixels,
               (int)obj->dx * (int)(short)uVar8 +
               (int)obj->dmx * (int)(short)uVar4 + (uint)(ushort)obj->source_x & 0xffff |
               ((int)obj->dy * (int)(short)uVar8 +
               (int)obj->dmy * (int)(short)uVar4 + (uint)(ushort)obj->source_y) * 0x10000,uVar5,
               obj->row_pitch,uVar7);
    render_scanline_obj_affine_span_8bpp(obj_pixels,puVar11,puVar12,uVar7);
    *_left_offset = (int)sVar1 + uVar8;
  }
  return uVar7;
}


