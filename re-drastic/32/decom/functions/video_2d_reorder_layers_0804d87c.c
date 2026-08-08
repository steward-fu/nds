/*
 * Ghidra decompilation
 *
 * Function : video_2d_reorder_layers
 * Address  : 0804d87c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_reorder_layers(video_2d_struct *video_2d)

{
  byte bVar1;
  u8 *layer_order;
  uint uVar2;
  u32 layer_priority;
  uint uVar3;
  u32 bg_enables;
  int iVar4;
  u8 *bg_layer_order;
  int iVar5;
  int iVar6;
  uint uVar7;
  u32 display_control;
  u8 layer_bins [4] [4];
  u8 layer_counts [4];
  int local_24;
  
  uVar7 = video_2d->display_control;
  layer_counts[0] = '\0';
  layer_counts[1] = '\0';
  layer_counts[2] = '\0';
  layer_counts[3] = '\0';
  local_24 = __stack_chk_guard;
  uVar3 = uVar7 >> 8 & 0xf;
  if ((uVar7 >> 8 & 1) != 0) {
    uVar2 = video_2d->bg_layers[0].bg_control & 3;
    bVar1 = layer_counts[uVar2];
    layer_bins[uVar2][bVar1] = '\0';
    layer_counts[uVar2] = bVar1 + 1;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    uVar2 = video_2d->bg_layers[1].bg_control & 3;
    bVar1 = layer_counts[uVar2];
    layer_bins[uVar2][bVar1] = '\x01';
    layer_counts[uVar2] = bVar1 + 1;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    uVar2 = video_2d->bg_layers[2].bg_control & 3;
    bVar1 = layer_counts[uVar2];
    layer_bins[uVar2][bVar1] = '\x02';
    layer_counts[uVar2] = bVar1 + 1;
  }
  if (uVar3 >> 3 != 0) {
    uVar3 = video_2d->bg_layers[3].bg_control & 3;
    bVar1 = layer_counts[uVar3];
    layer_bins[uVar3][bVar1] = '\x03';
    layer_counts[uVar3] = bVar1 + 1;
  }
  uVar2 = uVar7 & 0x1000;
  uVar3 = (uint)layer_counts & 0xff;
  uVar7 = uVar7 & 8;
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      iVar5 = 0;
      goto LAB_0804d9c4;
    }
    iVar4 = 0;
    iVar6 = 0;
LAB_0804dca0:
    iVar5 = iVar6;
    if (layer_counts[1] != '\0') goto LAB_0804da70;
LAB_0804db00:
    iVar5 = iVar6;
    if (layer_counts[2] == '\0') goto LAB_0804dbac;
LAB_0804db0c:
    iVar6 = iVar5 + 1;
    video_2d->layer_order[iVar5] = layer_bins[2][0];
    if ((layer_bins[2][0] != '\0') || (uVar7 == 0)) {
      video_2d->bg_layer_order[iVar4] = layer_bins[2][0];
      iVar4 = iVar4 + 1;
    }
    if (1 < layer_counts[2]) {
      iVar6 = iVar5 + 2;
      video_2d->layer_order[iVar5 + 1] = layer_bins[2][1];
      if ((layer_bins[2][1] != '\0') || (uVar7 == 0)) {
        video_2d->bg_layer_order[iVar4] = layer_bins[2][1];
        iVar4 = iVar4 + 1;
      }
      if (layer_counts[2] != '\x02') {
        iVar6 = iVar5 + 3;
        video_2d->layer_order[iVar5 + 2] = layer_bins[2][2];
        if ((layer_bins[2][2] != '\0') || (uVar7 == 0)) {
          video_2d->bg_layer_order[iVar4] = layer_bins[2][2];
          iVar4 = iVar4 + 1;
        }
        if (layer_counts[2] != '\x03') {
          video_2d->layer_order[iVar5 + 3] = layer_bins[2][3];
          if ((layer_bins[2][3] != '\0') || (uVar7 == 0)) {
            video_2d->bg_layer_order[iVar4] = layer_bins[2][3];
            iVar4 = iVar4 + 1;
          }
          iVar6 = iVar5 + 4;
        }
      }
    }
    if (uVar2 == 0) goto LAB_0804dbac;
  }
  else {
    video_2d->layer_order[0] = '\x04';
    if (uVar3 == 0) {
      iVar6 = 1;
      iVar4 = 0;
    }
    else {
      iVar5 = 1;
LAB_0804d9c4:
      iVar6 = iVar5 + 1;
      video_2d->layer_order[iVar5] = layer_bins[0][0];
      if ((layer_bins[0][0] == '\0') && (uVar7 != 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
        video_2d->bg_layer_order[0] = layer_bins[0][0];
      }
      if (1 < uVar3) {
        video_2d->layer_order[iVar5 + 1] = layer_bins[0][1];
        iVar6 = iVar5 + 2;
        if ((layer_bins[0][1] != '\0') || (uVar7 == 0)) {
          video_2d->bg_layer_order[iVar4] = layer_bins[0][1];
          iVar4 = iVar4 + 1;
        }
        if (uVar3 != 2) {
          video_2d->layer_order[iVar5 + 2] = layer_bins[0][2];
          iVar6 = iVar5 + 3;
          if ((layer_bins[0][2] != '\0') || (uVar7 == 0)) {
            video_2d->bg_layer_order[iVar4] = layer_bins[0][2];
            iVar4 = iVar4 + 1;
          }
          if (uVar3 != 3) {
            video_2d->layer_order[iVar5 + 3] = layer_bins[0][3];
            if ((layer_bins[0][3] != '\0') || (uVar7 == 0)) {
              video_2d->bg_layer_order[iVar4] = layer_bins[0][3];
              iVar4 = iVar4 + 1;
            }
            iVar6 = iVar5 + 4;
          }
        }
      }
      if (uVar2 == 0) goto LAB_0804dca0;
    }
    video_2d->layer_order[iVar6] = '\x05';
    iVar6 = iVar6 + 1;
    iVar5 = iVar6;
    if (layer_counts[1] != '\0') {
LAB_0804da70:
      iVar6 = iVar5 + 1;
      video_2d->layer_order[iVar5] = layer_bins[1][0];
      if ((layer_bins[1][0] != '\0') || (uVar7 == 0)) {
        video_2d->bg_layer_order[iVar4] = layer_bins[1][0];
        iVar4 = iVar4 + 1;
      }
      if (1 < layer_counts[1]) {
        video_2d->layer_order[iVar5 + 1] = layer_bins[1][1];
        iVar6 = iVar5 + 2;
        if ((layer_bins[1][1] != '\0') || (uVar7 == 0)) {
          video_2d->bg_layer_order[iVar4] = layer_bins[1][1];
          iVar4 = iVar4 + 1;
        }
        if (layer_counts[1] != '\x02') {
          video_2d->layer_order[iVar5 + 2] = layer_bins[1][2];
          iVar6 = iVar5 + 3;
          if ((layer_bins[1][2] != '\0') || (uVar7 == 0)) {
            video_2d->bg_layer_order[iVar4] = layer_bins[1][2];
            iVar4 = iVar4 + 1;
          }
          if (layer_counts[1] != '\x03') {
            video_2d->layer_order[iVar5 + 3] = layer_bins[1][3];
            if ((layer_bins[1][3] != '\0') || (uVar7 == 0)) {
              video_2d->bg_layer_order[iVar4] = layer_bins[1][3];
              iVar4 = iVar4 + 1;
            }
            iVar6 = iVar5 + 4;
          }
        }
      }
      if (uVar2 == 0) goto LAB_0804db00;
    }
    video_2d->layer_order[iVar6] = '\x06';
    iVar6 = iVar6 + 1;
    iVar5 = iVar6;
    if (layer_counts[2] != '\0') goto LAB_0804db0c;
  }
  video_2d->layer_order[iVar6] = '\a';
  iVar6 = iVar6 + 1;
LAB_0804dbac:
  iVar5 = iVar6;
  if (layer_counts[3] != '\0') {
    iVar5 = iVar6 + 1;
    video_2d->layer_order[iVar6] = layer_bins[3][0];
    if ((layer_bins[3][0] != '\0') || (uVar7 == 0)) {
      video_2d->bg_layer_order[iVar4] = layer_bins[3][0];
      iVar4 = iVar4 + 1;
    }
    if (1 < layer_counts[3]) {
      iVar5 = iVar6 + 2;
      video_2d->layer_order[iVar6 + 1] = layer_bins[3][1];
      if ((layer_bins[3][1] != '\0') || (uVar7 == 0)) {
        video_2d->bg_layer_order[iVar4] = layer_bins[3][1];
        iVar4 = iVar4 + 1;
      }
      if (layer_counts[3] != '\x02') {
        iVar5 = iVar6 + 3;
        video_2d->layer_order[iVar6 + 2] = layer_bins[3][2];
        if ((layer_bins[3][2] != '\0') || (uVar7 == 0)) {
          video_2d->bg_layer_order[iVar4] = layer_bins[3][2];
          iVar4 = iVar4 + 1;
        }
        if (layer_counts[3] != '\x03') {
          video_2d->layer_order[iVar6 + 3] = layer_bins[3][3];
          if ((layer_bins[3][3] != '\0') || (uVar7 == 0)) {
            video_2d->bg_layer_order[iVar4] = layer_bins[3][3];
            iVar4 = iVar4 + 1;
          }
          iVar5 = iVar6 + 4;
        }
      }
    }
  }
  video_2d->active_bg_layers = (u8)iVar4;
  iVar4 = __stack_chk_guard;
  video_2d->active_layers = (u8)iVar5;
  if (local_24 != iVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


