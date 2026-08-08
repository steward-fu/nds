/*
 * Ghidra decompilation
 *
 * Function : video_2d_store_savestate
 * Address  : 080508d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_store_savestate(video_2d_struct *video_2d,mem_file_struct *savestate_file,u32 version)

{
  undefined4 *puVar1;
  u16 *puVar2;
  u8 *puVar3;
  u16 *puVar4;
  u16 *puVar5;
  
  *(u32 *)savestate_file->buffer_ptr = video_2d->display_control;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 4;
  *(u32 *)(puVar3 + 4) = video_2d->window_layer_enables;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 4;
  *(u16 *)(puVar3 + 4) = video_2d->blend_control;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 2;
  *(u16 *)(puVar3 + 2) = video_2d->blend_alpha;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 2;
  *(u16 *)(puVar3 + 2) = video_2d->blend_y;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 2;
  *(u16 *)(puVar3 + 2) = video_2d->master_brightness;
  puVar3 = savestate_file->buffer_ptr;
  puVar1 = (undefined4 *)(puVar3 + 2);
  savestate_file->buffer_ptr = (u8 *)puVar1;
  if (9 < version) {
    *(u16 *)(puVar3 + 2) = video_2d->mosaic;
    puVar1 = (undefined4 *)(savestate_file->buffer_ptr + 2);
    savestate_file->buffer_ptr = (u8 *)puVar1;
  }
  *puVar1 = *(undefined4 *)video_2d->window_horizontal_endpoints;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 4;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)video_2d->window_vertical_endpoints;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 4;
  puVar3[4] = video_2d->windows_y_active;
  puVar2 = (u16 *)(savestate_file->buffer_ptr + 1);
  savestate_file->buffer_ptr = (u8 *)puVar2;
  puVar4 = &video_2d->bg_layers[0].bg_control;
  do {
    puVar5 = puVar4 + 0x48;
    *puVar2 = *puVar4;
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    *(u32 *)(puVar3 + 2) = *(u32 *)(puVar4 + -0x2a);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 4;
    *(u32 *)(puVar3 + 4) = *(u32 *)(puVar4 + -0x28);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 4;
    *(u32 *)(puVar3 + 4) = *(u32 *)(puVar4 + -0x26);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 4;
    *(s32 *)(puVar3 + 4) = *(s32 *)(puVar4 + -8);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 4;
    *(s32 *)(puVar3 + 4) = *(s32 *)(puVar4 + -6);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 4;
    *(s32 *)(puVar3 + 4) = *(s32 *)(puVar4 + -4);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 4;
    *(s32 *)(puVar3 + 4) = *(s32 *)(puVar4 + -2);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 4;
    *(u16 *)(puVar3 + 4) = puVar4[1];
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    *(u16 *)(puVar3 + 2) = puVar4[2];
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    *(u16 *)(puVar3 + 2) = puVar4[3];
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    *(u16 *)(puVar3 + 2) = puVar4[4];
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    *(u16 *)(puVar3 + 2) = puVar4[5];
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    *(u16 *)(puVar3 + 2) = puVar4[6];
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    *(u16 *)(puVar3 + 2) = puVar4[7];
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    *(u16 *)(puVar3 + 2) = puVar4[8];
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 2;
    puVar3[2] = *(u8 *)(puVar4 + 9);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 1;
    puVar3[1] = *(u8 *)((int)puVar4 + 0x13);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 1;
    puVar3[1] = *(u8 *)(puVar4 + 10);
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 1;
    puVar3[1] = *(u8 *)((int)puVar4 + 0x15);
    puVar2 = (u16 *)(savestate_file->buffer_ptr + 1);
    savestate_file->buffer_ptr = (u8 *)puVar2;
    puVar4 = puVar5;
  } while ((s64 *)puVar5 != &(video_2d->obj_set).obj[1].edge_step_y);
  return;
}


