/*
 * Ghidra decompilation
 *
 * Function : video_render_scanlines
 * Address  : 00130be0
 * Program  : drastic64
 */


ulong video_render_scanlines(long *param_1,int param_2)

{
  pthread_mutex_t *__mutex;
  char cVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  uVar3 = *(uint *)(param_1 + 0x444);
  if (uVar3 == 0) {
    sVar2 = *(short *)((long)param_1 + 0x458894);
    if (param_2 == 0xbf && sVar2 == 0) {
LAB_00130cbc:
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x8b114));
      *(undefined *)(param_1 + 0x8b12c) = 1;
      pthread_cond_signal((pthread_cond_t *)(param_1 + 0x8b120));
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x8b114));
      video_2d_render_scanlines
                (param_1 + 0x5cf,*(undefined2 *)((long)param_1 + 0x458894),0xbf,param_1 + 0x8b104);
      __mutex = (pthread_mutex_t *)(param_1 + 0x8b11a);
      pthread_mutex_lock(__mutex);
      cVar1 = *(char *)((long)param_1 + 0x458961);
      while (cVar1 == '\0') {
        pthread_cond_wait((pthread_cond_t *)(param_1 + 0x8b126),__mutex);
        cVar1 = *(char *)((long)param_1 + 0x458961);
      }
      *(undefined *)((long)param_1 + 0x458961) = 0;
      uVar3 = pthread_mutex_unlock(__mutex);
      *(short *)((long)param_1 + 0x458894) = (short)param_2 + 1;
      return (ulong)uVar3;
    }
  }
  else {
    lVar9 = *param_1;
    uVar7 = 0;
    do {
      if ((uVar3 & 1) != 0) {
        uVar5 = *(uint *)((long)param_1 + (ulong)uVar7 * 4 + 0x21e0);
        if (uVar5 != 0) {
          uVar8 = uVar7 << 5;
          uVar6 = uVar7 << 0x13;
          do {
            if ((uVar5 & 1) != 0) {
              remap_address_region_vram
                        (lVar9,*(long *)(lVar9 + 0xfd500) + (ulong)uVar6,0x4000,
                         uVar6 + ((int)param_1[(ulong)uVar8 + 0x14] -
                                 (int)*(undefined8 *)(lVar9 + 0xfd4f8)));
            }
            uVar5 = uVar5 >> 1;
            uVar8 = uVar8 + 1;
            uVar6 = uVar6 + 0x4000;
          } while (uVar5 != 0);
        }
        *(undefined4 *)((long)param_1 + (ulong)uVar7 * 4 + 0x21e0) = 0;
      }
      uVar7 = uVar7 + 1;
      uVar3 = uVar3 >> 1;
    } while (uVar3 != 0);
    sVar2 = *(short *)((long)param_1 + 0x458894);
    *(undefined4 *)(param_1 + 0x444) = 0;
    if (param_2 == 0xbf && sVar2 == 0) goto LAB_00130cbc;
  }
  video_2d_render_scanlines(param_1 + 0x5cf,sVar2,param_2);
  uVar4 = video_2d_render_scanlines
                    (param_1 + 0x10853,*(undefined2 *)((long)param_1 + 0x458894),param_2,0);
  *(short *)((long)param_1 + 0x458894) = (short)param_2 + 1;
  return uVar4;
}


