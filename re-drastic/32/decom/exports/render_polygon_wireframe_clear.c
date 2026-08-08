/*
 * Ghidra decompilation
 *
 * Function : render_polygon_wireframe_clear
 * Address  : 08053858
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_wireframe_clear(u8 *edge_buffer_data,u8 *occlusion_masks,u32 height)

{
  ushort uVar1;
  u32 width;
  u32 left_offset;
  size_t __n;
  u8 *__s;
  u8 *puVar2;
  u32 uVar3;
  u32 right_offset;
  
  if (height != 0) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      uVar1 = *(ushort *)(edge_buffer_data + 0x6e2);
      __s = occlusion_masks + *(ushort *)(edge_buffer_data + 0x6e0);
      __n = (uint)*(ushort *)(edge_buffer_data + 0x630) -
            ((uint)*(ushort *)(edge_buffer_data + 0x6e0) + (uint)uVar1);
      puVar2 = __s;
      if (__n != 0) {
        puVar2 = __s + __n;
        memset(__s,0xff,__n);
      }
      occlusion_masks = puVar2 + uVar1;
    } while (height != uVar3);
  }
  return;
}


