/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_4x
 * Address  : 080702a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_setup_4x
               (video_3d_render_target_struct *render_target,u8 *edge_buffer_data,
               geometry_polygon_struct *polygon,u8 *buffer_data,u32 scanline,u32 height,
               u32 polygon_render_flags,geometry_vertex_struct *top_vertex)

{
  ushort uVar1;
  u32 pixels;
  u16 *top_vertex_1;
  uint pixels_00;
  u32 width;
  uint uVar2;
  ushort *puVar3;
  u32 height_00;
  u32 height_01;
  u16 *dx;
  u8 *puVar4;
  u32 uVar5;
  
  uVar1 = *(ushort *)(edge_buffer_data + 0x630);
  top_vertex_1 = &top_vertex->z;
  puVar3 = (ushort *)(edge_buffer_data + 0x630);
  do {
    while (uVar2 = (uint)uVar1, uVar2 == 0) {
      height = height - 1;
      edge_buffer_data = edge_buffer_data + 4;
      scanline = scanline + 1;
      if (height == 0) {
        return;
      }
      uVar1 = puVar3[2];
      puVar3 = puVar3 + 2;
    }
    pixels = 0;
    height_00 = 0;
    do {
      puVar3 = puVar3 + 2;
      pixels_00 = uVar2 + pixels;
      if (pixels_00 < 0x201) {
        height_01 = height_00 + 1;
        if (height == 1) {
LAB_08070318:
          render_polygon_flush_4x
                    (render_target,edge_buffer_data,polygon,scanline,height_01,buffer_data,pixels_00
                     ,polygon_render_flags,top_vertex,(geometry_vertex_struct *)top_vertex_1);
          return;
        }
      }
      else {
        uVar5 = scanline + height_00;
        puVar4 = edge_buffer_data + height_00 * 4;
        height_01 = 1;
        render_polygon_flush_4x
                  (render_target,edge_buffer_data,polygon,scanline,height_00,buffer_data,pixels,
                   polygon_render_flags,top_vertex,(geometry_vertex_struct *)top_vertex_1);
        pixels_00 = uVar2;
        edge_buffer_data = puVar4;
        scanline = uVar5;
        if (height == 1) {
          height_01 = 1;
          goto LAB_08070318;
        }
      }
      height = height - 1;
      uVar2 = (uint)*puVar3;
      pixels = pixels_00;
      height_00 = height_01;
    } while (uVar2 != 0);
    render_polygon_flush_4x
              (render_target,edge_buffer_data,polygon,scanline,height_01,buffer_data,pixels_00,
               polygon_render_flags,top_vertex,(geometry_vertex_struct *)top_vertex_1);
    uVar1 = *puVar3;
    edge_buffer_data = edge_buffer_data + height_01 * 4;
    scanline = scanline + height_01;
  } while( true );
}


