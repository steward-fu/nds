/*
 * Ghidra decompilation
 *
 * Function : geometry_submit_vertexes
 * Address  : 080799a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_submit_vertexes(geometry_struct *geometry,u32 vertex_batch_offset,u32 vertex_count)

{
  byte bVar1;
  u16 uVar2;
  geometry_primitive_queue_struct *primitive_queue;
  u32 submit_index;
  uint uVar3;
  s32 w;
  u32 uVar4;
  u32 uVar5;
  s32 *psVar6;
  geometry_vertex_struct *pgVar7;
  s32 *psVar8;
  s32 *psVar9;
  s32 *psVar10;
  s32 *psVar11;
  u32 *puVar12;
  u32 current_uv;
  u16 *color;
  u16 *puVar13;
  u32 local_34;
  
  bVar1 = geometry->buffer_page;
  primitive_queue = (geometry_primitive_queue_struct *)(geometry->primitive_queue).submit_index;
  uVar5 = geometry->vertex_list[bVar1].offset;
  local_34 = vertex_count;
  if (0x1800 < uVar5 + vertex_count) {
    local_34 = 0x1800 - uVar5;
  }
  if (local_34 != 0) {
    psVar11 = (s32 *)((geometry->primitive_queue).reserved_b + (int)primitive_queue * 4);
    psVar10 = (geometry->primitive_queue).submit_y + (int)(primitive_queue[-1].reserved_c + 3);
    psVar9 = (geometry->primitive_queue).submit_z + (int)(primitive_queue[-1].reserved_c + 3);
    psVar8 = (geometry->primitive_queue).submit_w + (int)(primitive_queue[-1].reserved_c + 3);
    puVar12 = (geometry->primitive_queue).uv + (vertex_batch_offset - 1);
    uVar4 = 0;
    psVar6 = (geometry->primitive_queue).transformed_coordinates + vertex_batch_offset * 4 + 4;
    pgVar7 = geometry->vertex_list[bVar1].vertexes + uVar5 + 1;
    puVar13 = (geometry->primitive_queue).color + vertex_batch_offset;
    do {
      uVar4 = uVar4 + 1;
      uVar3 = psVar6[-1];
      puVar12 = puVar12 + 1;
      uVar5 = *puVar12;
      psVar11 = psVar11 + 1;
      *psVar11 = psVar6[-4];
      psVar10 = psVar10 + 1;
      *psVar10 = psVar6[-3];
      psVar9 = psVar9 + 1;
      *psVar9 = psVar6[-2];
      psVar8 = psVar8 + 1;
      *psVar8 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
      *(short *)((int)(pgVar7 + -1) + 0xc) = (short)uVar5;
      *(short *)((int)(pgVar7 + -1) + 0xe) = (short)(uVar5 >> 0x10);
      uVar2 = *puVar13;
      pgVar7[-1].w = uVar3;
      *(u16 *)((int)(pgVar7 + -1) + 10) = uVar2;
      psVar6 = psVar6 + 4;
      pgVar7 = pgVar7 + 1;
      puVar13 = puVar13 + 1;
    } while (local_34 != uVar4);
    primitive_queue = (geometry_primitive_queue_struct *)(geometry->primitive_queue).submit_index;
    uVar5 = geometry->vertex_list[bVar1].offset;
  }
  (geometry->primitive_queue).submit_index = (int)primitive_queue->input_x + local_34;
  geometry->vertex_list[bVar1].offset = uVar5 + local_34;
  return;
}


