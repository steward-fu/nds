/*
 * Ghidra decompilation
 *
 * Function : update_frame
 * Address  : 00130dc0
 * Program  : drastic64
 */


void update_frame(long *param_1)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  uint uVar11;
  
  lVar10 = *(long *)(*param_1 + 0xfba68);
  video_render_scanlines(param_1,0xbf);
  if (*(char *)((long)param_1 + 0x458876) == '\0') {
LAB_00130e24:
    lVar6 = *param_1;
  }
  else {
    *(undefined *)((long)param_1 + 0x458876) = 0;
    *(uint *)(*param_1 + 0x1b0d4) = *(uint *)(*param_1 + 0x1b0d4) & 0x7fffffff;
    if ((*(uint *)(param_1[1] + 0x4a0) & 1) == 0) goto LAB_00130e24;
    uVar7 = (ulong)*(byte *)((long)param_1 + 0x45886e);
    uVar11 = *(uint *)(param_1 + 0x8b10d);
    bVar9 = *(byte *)((long)param_1 + uVar7 + 0x458840);
    uVar2 = (1 << (ulong)((int)((uint)*(ushort *)((long)param_1 + 0x45886c) *
                               (uint)*(byte *)(param_1 + 0x8b10e)) >> 0xd & 0x1f)) - 1;
    bVar1 = *(byte *)((long)param_1 + 0x45886e);
    lVar6 = *param_1;
    if ((bVar9 == 0) && (*(int *)(param_1 + (ulong)bVar1 * 2 + 2) == 6)) {
      unmap_memory_page_region
                (*(undefined8 *)(lVar6 + 0xfba88),
                 (*(int *)(param_1 + (ulong)bVar1 * 2 + 3) + 0x1800) * 0x4000,
                 *(int *)((long)param_1 + (ulong)bVar1 * 0x10 + 0x1c) << 10);
      uVar7 = (ulong)*(byte *)((long)param_1 + 0x45886e);
      lVar6 = *param_1;
      bVar9 = *(byte *)((long)param_1 + uVar7 + 0x458840);
    }
    *(byte *)((long)param_1 + (long)(polygon_sort_list_13776 + uVar7 + 0x6e200)) =
         bVar9 | (byte)(uVar2 >> (ulong)(8 - (uVar11 >> 0xd & 0x3ffff) & 0x1f)) |
                 (byte)(uVar2 << (ulong)(uVar11 >> 0xd & 0x1f));
  }
  remap_palette_oam_direct(lVar6);
  uVar11 = *(uint *)(lVar10 + 0x8a374) & 0x20;
  if ((*(uint *)(lVar10 + 0x8a374) >> 5 & 1) == 0) {
    if (*(int *)(lVar10 + 0x859f0) != 0) {
      count_frames_11411 = count_frames_11411 - 1;
      get_ticks_us(&tick_history_11413 + (ulong)count_frames_11411 * 8);
      frames_total_11417 = frames_total_11417 + 1;
      if ((*(char *)(param_1 + 0x5e6) == '\0') || (*(char *)(param_1 + 0x1086a) == '\0')) {
        frames_rendered_11416 = frames_rendered_11416 + 1;
      }
      uVar8 = *(long *)(nds_system + lVar10 + 0x20d4560) - last_instructions_arm7_11415;
      fVar3 = ((float)(ulong)frames_rendered_11416 * 100.0) / (float)(ulong)frames_total_11417;
      fVar4 = 3.166667e+07 /
              (float)(ulong)(uint)((int)*(undefined8 *)
                                         (&tick_history_11413 + (ulong)count_frames_11411 * 8) -
                                  (int)*(undefined8 *)
                                        (&tick_history_11413 +
                                        (ulong)((count_frames_11411 + 0x13) % 0x14) * 8));
      uVar7 = *(long *)(nds_system + lVar10 + 0x10cdf70) - last_instructions_arm9_11414;
      *(float *)((long)param_1 + 0x45888c) = fVar4;
      *(float *)(param_1 + 0x8b112) = fVar3;
      __sprintf_chk((double)fVar4,(double)fVar3,(double)(unkuint9)uVar7 / 16666.66666666667,
                    (double)(unkuint9)uVar8 / 16666.66666666667,print_buffer_11412,1,0x80,
                    "%05.1lf%% %05.1lf%% %.2lfm/%.2lfm");
      last_instructions_arm7_11415 = *(long *)(nds_system + lVar10 + 0x20d4560);
      last_instructions_arm9_11414 = *(long *)(nds_system + lVar10 + 0x10cdf70);
      if (count_frames_11411 == 0) {
        count_frames_11411 = 0x14;
        frames_total_11417 = 0;
        frames_rendered_11416 = 0;
      }
      print_string(print_buffer_11412,0xffff,0,0,0);
    }
    if (*(char *)(param_1 + 0x5e6) == '\0') {
      bVar5 = true;
      if (-1 < *(short *)(*param_1 + 0x1b374)) {
        bVar5 = *(int *)(*(long *)(*param_1 + 0xfba68) + 0x85a40) == 0;
        uVar11 = (uint)bVar5;
        bVar5 = !bVar5;
      }
      update_screen(uVar11);
      if (*(char *)(param_1 + 0x1086a) != '\0') {
        update_screens();
        goto LAB_00130eb0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x1086a) != '\0') goto LAB_00130eb0;
      bVar5 = true;
      if (-1 < *(short *)(*param_1 + 0x1b374)) {
        bVar5 = *(int *)(*(long *)(*param_1 + 0xfba68) + 0x85a40) != 0;
      }
    }
    update_screen(bVar5);
    update_screens();
  }
LAB_00130eb0:
  if ((*(int *)(lVar10 + 0x85a10) != 0) && ((*(uint *)(lVar10 + 0x8a374) >> 3 & 1) == 0)) {
    video_3d_finish_rendering(param_1 + 0x20ad8);
    update_frame_geometry(param_1 + 0x6ad9e);
    return;
  }
  update_frame_geometry(param_1 + 0x6ad9e);
  return;
}


