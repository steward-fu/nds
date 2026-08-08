/*
 * Ghidra decompilation
 *
 * Function : render_sprite_check
 * Address  : 08050b60
 * Program  : drastic
 */


void render_sprite_check(geometry_struct *geometry,geometry_polygon_struct *polygon,
                        geometry_vertex_struct *vertexes)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  u32 width;
  geometry_vertex_struct *pgVar4;
  int iVar5;
  s32 ud;
  uint uVar6;
  u32 vertex_order;
  geometry_vertex_struct *pgVar7;
  geometry_vertex_struct *bottom_vertex;
  uint uVar8;
  u32 top_y;
  int iVar9;
  uint uVar10;
  geometry_vertex_struct *pgVar11;
  geometry_vertex_struct *right_vertex;
  s32 u;
  geometry_vertex_struct *pgVar12;
  geometry_vertex_struct *top_vertex;
  int iVar13;
  
  uVar10 = (geometry->primitive_queue).input_x[2];
  uVar6 = vertex_orders[(uVar10 << 9) >> 0x19];
  pgVar11 = (geometry_vertex_struct *)(&polygon->texture_image_param + (uVar6 & 0xf) * 4);
  pgVar4 = (geometry_vertex_struct *)(&polygon->texture_image_param + (uVar6 >> 0xc) * 4);
  uVar8 = (uint)pgVar11->y;
  pgVar12 = (geometry_vertex_struct *)((int)&polygon->texture_image_param + (uVar6 & 0xf0));
  pgVar7 = (geometry_vertex_struct *)(&polygon->texture_image_param + ((uVar6 << 0x14) >> 0x1c) * 4)
  ;
  if ((uVar8 == pgVar12->y) && ((uint)pgVar7->y == (uint)pgVar4->y)) {
    if (pgVar4->x != pgVar11->x) {
      return;
    }
    if (pgVar7->x != pgVar12->x) {
      return;
    }
    if (pgVar11->v != pgVar12->v) {
      return;
    }
    if (pgVar4->v != pgVar7->v) {
      return;
    }
    if (pgVar11->u != pgVar4->u) {
      return;
    }
    if (pgVar12->u != pgVar7->u) {
      return;
    }
    bottom_vertex = pgVar7;
    right_vertex = pgVar11;
    top_vertex = pgVar12;
    if (pgVar4->x < pgVar7->x) {
      bottom_vertex = pgVar4;
      right_vertex = pgVar12;
      top_vertex = pgVar11;
    }
  }
  else {
    if (uVar8 != pgVar4->y) {
      return;
    }
    if ((uint)pgVar7->y != (uint)pgVar12->y) {
      return;
    }
    if (pgVar7->x != pgVar4->x) {
      return;
    }
    if (pgVar12->x != pgVar11->x) {
      return;
    }
    if (pgVar11->v != pgVar4->v) {
      return;
    }
    if (pgVar12->v != pgVar7->v) {
      return;
    }
    if (pgVar11->u != pgVar12->u) {
      return;
    }
    if (pgVar4->u != pgVar7->u) {
      return;
    }
    bottom_vertex = pgVar12;
    right_vertex = pgVar4;
    top_vertex = pgVar11;
    if (pgVar7->x <= pgVar12->x) {
      bottom_vertex = pgVar7;
      right_vertex = pgVar11;
      top_vertex = pgVar4;
    }
  }
  uVar1 = top_vertex->u;
  iVar3 = (uint)right_vertex->x - (uint)top_vertex->x;
  iVar13 = iVar3 * 0x10;
  iVar5 = (int)right_vertex->u - (int)(short)uVar1;
  if ((iVar13 - iVar5 == 0) || (iVar13 - (iVar5 + 1) == 0)) {
    uVar2 = top_vertex->v;
    iVar9 = bottom_vertex->y - uVar8;
    iVar13 = iVar9 * 0x10;
    iVar5 = (int)bottom_vertex->v - (int)(short)uVar2;
    if (((iVar13 - iVar5 == 0) || (iVar13 - (iVar5 + 1) == 0)) &&
       (((((uVar10 >> 8 & 2) != 0 && (((geometry->primitive_queue).input_x[1] & 0x30U) == 0)) &&
         ((uVar10 >> 8 & 0x30) == 0x30)) && (-1 < (short)(uVar1 | uVar2))))) {
      iVar13 = (geometry->primitive_queue).input_x[3];
      if (((uint)(iVar3 + ((int)(short)uVar1 >> 4)) <= (uint)*(ushort *)(iVar13 + 0x24)) &&
         ((uint)(((int)(short)uVar2 >> 4) + iVar9) <= (uint)*(ushort *)(iVar13 + 0x26))) {
        (geometry->primitive_queue).input_x[2] = uVar10 | 0x4000;
      }
    }
  }
  return;
}


