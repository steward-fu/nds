/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj_affine_4bpp
 * Address  : 080bb940
 * Program  : drastic
 */


/* WARNING: Variable defined which should be unmapped: edge_x */
/* WARNING: Unknown calling convention */

u32 render_scanline_obj_affine_4bpp
              (video_2d_obj_struct *obj,u16 *obj_pixels,u32 line,s32 *_left_offset)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  s32 edge_y1;
  uint uVar6;
  s32 y_delta;
  s32 obj_width;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  s32 right_edge;
  u32 uVar10;
  uint uVar11;
  u16 *puVar12;
  u8 *puVar13;
  u8 *aligned_storage;
  u64 *puVar14;
  s32 left_edge;
  undefined8 uVar15;
  s64 edge_x;
  short local_c8;
  int iStack_c4;
  u64 _aligned_storage [17];
  
  iVar4 = __stack_chk_guard;
  uVar6 = line - (int)obj->y;
  puVar14 = _aligned_storage;
  if (((uint)puVar14 & 8) != 0) {
    puVar14 = _aligned_storage + 1;
  }
  if ((int)(uVar6 + 0xc0) < 0 != SCARRY4(uVar6,0xc0)) {
    uVar6 = uVar6 + 0x100;
  }
  lVar2 = (ulonglong)uVar6 * (ulonglong)*(uint *)&obj->edge_step_x;
  uVar11 = (uint)lVar2;
  uVar15 = VectorShiftRight(CONCAT44(uVar6,uVar6),0x20);
  iStack_c4 = (int)((ulonglong)uVar15 >> 0x20);
  lVar3 = (ulonglong)uVar6 * (ulonglong)*(uint *)&obj->edge_step_y;
  uVar5 = (uint)lVar3;
  iVar8 = *(int *)((int)&obj->edge_base_x + 4) +
          *(uint *)&obj->edge_step_x * iStack_c4 + uVar6 * *(int *)((int)&obj->edge_step_x + 4) +
          (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(*(uint *)&obj->edge_base_x,uVar11);
  iVar9 = *(int *)((int)&obj->edge_base_y + 4) +
          *(uint *)&obj->edge_step_y * iStack_c4 + uVar6 * *(int *)((int)&obj->edge_step_y + 4) +
          (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(*(uint *)&obj->edge_base_y,uVar5);
  left_edge = iVar8;
  if (iVar8 <= iVar9) {
    left_edge = iVar9;
  }
  right_edge = iVar8 + *(int *)((int)&obj->edge_width_x + 4) +
               (uint)CARRY4(*(uint *)&obj->edge_base_x + uVar11,*(uint *)&obj->edge_width_x);
  uVar11 = left_edge & ~(left_edge >> 0x1f);
  iVar8 = *(int *)((int)&obj->edge_width_y + 4) + iVar9 +
          (uint)CARRY4(*(uint *)&obj->edge_width_y,*(uint *)&obj->edge_base_y + uVar5);
  if (iVar8 < right_edge) {
    right_edge = iVar8;
  }
  if ((int)(uint)obj->width <= right_edge) {
    right_edge = obj->width - 1;
  }
  uVar10 = (right_edge - uVar11) + 1;
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  else {
    local_c8 = (short)uVar11;
    sVar1 = obj->x;
    uVar7._0_2_ = obj->dx;
    uVar7._2_2_ = obj->dy;
    puVar12 = obj->palette;
    puVar13 = obj->base_ptr;
    render_scanline_obj_pixel_offsets_4bpp
              (obj_pixels,puVar14,
               (int)obj->dx * (int)local_c8 +
               (int)obj->dmx * (int)(short)uVar6 + (uint)(ushort)obj->source_x & 0xffff |
               ((int)obj->dy * (int)local_c8 +
               (int)obj->dmy * (int)(short)uVar6 + (uint)(ushort)obj->source_y) * 0x10000,uVar7,
               obj->row_pitch,uVar10);
    render_scanline_obj_affine_span_4bpp(obj_pixels,puVar12,puVar14,puVar13,uVar10);
    *_left_offset = (int)sVar1 + uVar11;
  }
  if (iVar4 == __stack_chk_guard) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


