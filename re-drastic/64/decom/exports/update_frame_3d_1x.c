/*
 * Ghidra decompilation
 *
 * Function : update_frame_3d_1x
 * Address  : 00152870
 * Program  : drastic64
 */


void update_frame_3d_1x(long param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  pthread_mutex_t *ppVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined uVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  void *__dest;
  pthread_mutex_t *ppVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  pvVar1 = (void *)((long)&__DT_RELA[0x1b3].r_addend + param_1);
  bVar8 = false;
  if ((*(uint *)(polygon_sort_list_15121 + param_1 + 0xe5500) >> 0xe & 1) != 0) {
    bVar8 = (*(uint *)(*(long *)(polygon_sort_list_15121 + param_1 + 0xf70e8) + 0x8010) & 0xffff0000
            ) != 0;
  }
  iVar9 = update_texture_cache();
  lVar11 = *(long *)(param_1 + 8);
  if (iVar9 != 0) {
    bVar8 = true;
  }
  if (*(int *)(lVar11 + 0x468) == 0) {
    *(uint *)(polygon_sort_list_15121 + param_1 + 0xe5500) =
         *(uint *)(polygon_sort_list_15121 + param_1 + 0xf7138);
    if ((*(uint *)(polygon_sort_list_15121 + param_1 + 0xf7138) >> 2 & 1) == 0) {
      *(undefined4 *)(polygon_sort_list_15121 + param_1 + 0xe5504) = 0;
    }
    else {
      *(uint *)(polygon_sort_list_15121 + param_1 + 0xe5504) =
           (uint)(byte)polygon_sort_list_15121[param_1 + 0xf716f];
    }
    __dest = *(void **)(polygon_sort_list_15121 + param_1 + 0xe5518);
    if (param_2 == 0) {
      bVar8 = (bool)(bVar8 ^ 1);
      if (polygon_sort_list_15121[param_1 + 0xf717f] != '\0') {
        bVar8 = false;
      }
      if (!bVar8) goto LAB_0015292c;
    }
    if (*(int *)(lVar11 + 0x468) == 0) {
      return;
    }
  }
  else {
    if (*(void **)(polygon_sort_list_15121 + param_1 + 0xe5520) == pvVar1) {
      __dest = (void *)(param_1 + 0x1c56c0);
      *(void **)(polygon_sort_list_15121 + param_1 + 0xe5518) = __dest;
    }
    else {
      *(void **)(polygon_sort_list_15121 + param_1 + 0xe5518) = pvVar1;
      __dest = pvVar1;
    }
    if (param_2 == 0) {
      bVar8 = (bool)(bVar8 ^ 1);
      if (polygon_sort_list_15121[param_1 + 0xf717f] != '\0') {
        bVar8 = false;
      }
      if (!bVar8) {
LAB_0015292c:
        lVar11 = param_1 + 0x356cf0;
        *(void **)(polygon_sort_list_15121 + param_1 + 0xe5528) = __dest;
        polygon_sort_list_15121[param_1 + 0xf717f] = 0;
        lVar12 = ((ulong)(byte)polygon_sort_list_15121[param_1 + 0xf7170] ^ 1) * 0x10008;
        lVar2 = lVar11 + ((ulong)(byte)polygon_sort_list_15121[param_1 + 0xf7170] ^ 1) * 0x18004 +
                0x9ad4;
        if ((*(uint *)(polygon_sort_list_15121 + param_1 + 0xe5500) >> 7 & 1) != 0) {
          *(undefined4 *)(polygon_sort_list_15121 + param_1 + 0xe5510) = 0xffffffff;
          uVar19 = *(ulong *)(polygon_sort_list_15121 + param_1 + 0xf7028);
          uVar20 = *(ulong *)(polygon_sort_list_15121 + param_1 + 0xf7030);
          uVar14 = *(ulong *)(polygon_sort_list_15121 + param_1 + 0xf7038);
          uVar5 = *(uint *)(polygon_sort_list_15121 + param_1 + 0xf7040);
          uVar21 = uVar14 & uVar19 & uVar20;
          if (((*(uint *)(polygon_sort_list_15121 + param_1 + 0xf7024) & uVar5 &
               (uint)(uVar21 >> 0x20) & (uint)uVar21) ==
               (CONCAT13((byte)(uVar14 >> 0x38) | (byte)(uVar19 >> 0x38) | (byte)(uVar20 >> 0x38) |
                         (byte)(uVar14 >> 0x18) | (byte)(uVar19 >> 0x18) | (byte)(uVar20 >> 0x18),
                         CONCAT12((byte)(uVar14 >> 0x30) |
                                  (byte)(uVar19 >> 0x30) | (byte)(uVar20 >> 0x30) |
                                  (byte)(uVar14 >> 0x10) |
                                  (byte)(uVar19 >> 0x10) | (byte)(uVar20 >> 0x10),
                                  CONCAT11((byte)(uVar14 >> 0x28) |
                                           (byte)(uVar19 >> 0x28) | (byte)(uVar20 >> 0x28) |
                                           (byte)(uVar14 >> 8) |
                                           (byte)(uVar19 >> 8) | (byte)(uVar20 >> 8),
                                           (byte)(uVar14 >> 0x20) |
                                           (byte)(uVar19 >> 0x20) | (byte)(uVar20 >> 0x20) |
                                           (byte)uVar14 | (byte)uVar19 | (byte)uVar20))) |
               *(uint *)(polygon_sort_list_15121 + param_1 + 0xf7024) | uVar5)) &&
             (uVar4 = uVar5 >> 8 & uVar5 >> 0x10 & uVar5 & 0xff,
             (uVar5 >> 8 & (uVar4 ^ 0xffffffff)) == 0)) {
            *(uint *)(polygon_sort_list_15121 + param_1 + 0xe5510) = uVar4;
          }
          uVar18 = *(undefined8 *)(polygon_sort_list_15121 + param_1 + 0xf702c);
          uVar17 = *(undefined8 *)(polygon_sort_list_15121 + param_1 + 0xf7024);
          uVar16 = *(undefined8 *)(polygon_sort_list_15121 + param_1 + 0xf702d);
          uVar15 = *(undefined8 *)(polygon_sort_list_15121 + param_1 + 0xf7025);
          *(ulong *)(polygon_sort_list_15121 + param_1 + 0xf704c) =
               CONCAT17((char)((ulong)uVar16 >> 0x38) - (char)((ulong)uVar18 >> 0x38),
                        CONCAT16((char)((ulong)uVar16 >> 0x30) - (char)((ulong)uVar18 >> 0x30),
                                 CONCAT15((char)((ulong)uVar16 >> 0x28) -
                                          (char)((ulong)uVar18 >> 0x28),
                                          CONCAT14((char)((ulong)uVar16 >> 0x20) -
                                                   (char)((ulong)uVar18 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar16 >> 0x18) -
                                                            (char)((ulong)uVar18 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar16 >> 0x10) -
                                                                     (char)((ulong)uVar18 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar16
                                                                                    >> 8) -
                                                                              (char)((ulong)uVar18
                                                                                    >> 8),
                                                                              (char)uVar16 -
                                                                              (char)uVar18)))))));
          *(ulong *)(polygon_sort_list_15121 + param_1 + 0xf7044) =
               CONCAT17((char)((ulong)uVar15 >> 0x38) - (char)((ulong)uVar17 >> 0x38),
                        CONCAT16((char)((ulong)uVar15 >> 0x30) - (char)((ulong)uVar17 >> 0x30),
                                 CONCAT15((char)((ulong)uVar15 >> 0x28) -
                                          (char)((ulong)uVar17 >> 0x28),
                                          CONCAT14((char)((ulong)uVar15 >> 0x20) -
                                                   (char)((ulong)uVar17 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar15 >> 0x18) -
                                                            (char)((ulong)uVar17 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar15 >> 0x10) -
                                                                     (char)((ulong)uVar17 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar15
                                                                                    >> 8) -
                                                                              (char)((ulong)uVar17
                                                                                    >> 8),
                                                                              (char)uVar15 -
                                                                              (char)uVar17)))))));
          polygon_sort_list_15121[param_1 + 0xf7055] =
               polygon_sort_list_15121[param_1 + 0xf7036] -
               polygon_sort_list_15121[param_1 + 0xf7035];
          polygon_sort_list_15121[param_1 + 0xf7054] =
               polygon_sort_list_15121[param_1 + 0xf7035] -
               polygon_sort_list_15121[param_1 + 0xf7034];
          polygon_sort_list_15121[param_1 + 0xf7056] =
               polygon_sort_list_15121[param_1 + 0xf7037] -
               polygon_sort_list_15121[param_1 + 0xf7036];
          polygon_sort_list_15121[param_1 + 0xf7057] =
               polygon_sort_list_15121[param_1 + 0xf7038] -
               polygon_sort_list_15121[param_1 + 0xf7037];
          polygon_sort_list_15121[param_1 + 0xf7058] =
               polygon_sort_list_15121[param_1 + 0xf7039] -
               polygon_sort_list_15121[param_1 + 0xf7038];
          polygon_sort_list_15121[param_1 + 0xf7059] =
               polygon_sort_list_15121[param_1 + 0xf703a] -
               polygon_sort_list_15121[param_1 + 0xf7039];
          polygon_sort_list_15121[param_1 + 0xf705a] =
               polygon_sort_list_15121[param_1 + 0xf703b] -
               polygon_sort_list_15121[param_1 + 0xf703a];
          polygon_sort_list_15121[param_1 + 0xf705b] =
               polygon_sort_list_15121[param_1 + 0xf703c] -
               polygon_sort_list_15121[param_1 + 0xf703b];
          polygon_sort_list_15121[param_1 + 0xf705c] =
               polygon_sort_list_15121[param_1 + 0xf703d] -
               polygon_sort_list_15121[param_1 + 0xf703c];
          polygon_sort_list_15121[param_1 + 0xf705d] =
               polygon_sort_list_15121[param_1 + 0xf703e] -
               polygon_sort_list_15121[param_1 + 0xf703d];
          polygon_sort_list_15121[param_1 + 0xf705e] =
               polygon_sort_list_15121[param_1 + 0xf703f] -
               polygon_sort_list_15121[param_1 + 0xf703e];
          polygon_sort_list_15121[param_1 + 0xf705f] =
               polygon_sort_list_15121[param_1 + 0xf7040] -
               polygon_sort_list_15121[param_1 + 0xf703f];
          polygon_sort_list_15121[param_1 + 0xf7060] =
               polygon_sort_list_15121[param_1 + 0xf7041] -
               polygon_sort_list_15121[param_1 + 0xf7040];
          polygon_sort_list_15121[param_1 + 0xf7061] =
               polygon_sort_list_15121[param_1 + 0xf7042] -
               polygon_sort_list_15121[param_1 + 0xf7041];
          polygon_sort_list_15121[param_1 + 0xf7062] =
               polygon_sort_list_15121[param_1 + 0xf7043] -
               polygon_sort_list_15121[param_1 + 0xf7042];
        }
        video_3d_bin_polygons_y_sort_1x(lVar11,param_1 + 0x2856c0,lVar11 + lVar12 + 0x39ae0,lVar2,0)
        ;
        video_3d_bin_polygons_1x(lVar11,param_1 + 0x2916f0,lVar11 + lVar12 + 0x59af0,lVar2,1);
        lVar11 = *(long *)(param_1 + 8);
        uVar10 = *(undefined4 *)(lVar11 + 0x49c);
        polygon_sort_list_15121[param_1 + 0x581e4] = (char)uVar10;
        uVar5 = *(uint *)(lVar11 + 0x490);
        uVar7 = (undefined)uVar5;
        if (uVar5 < 2) {
          polygon_sort_list_15121[param_1 + 0x581e3] = uVar7;
          video_3d_render_bins_1x(param_1 + 0x29d740);
        }
        else {
          lVar11 = (ulong)(uVar5 - 2) * 0x24100;
          ppVar13 = (pthread_mutex_t *)(polygon_sort_list_15121 + param_1 + 0x7c220);
          while( true ) {
            *(undefined *)((long)ppVar13 + 0xc3) = uVar7;
            *(char *)((long)ppVar13 + 0xc4) = (char)uVar10;
            pthread_mutex_lock(ppVar13);
            *(undefined *)((long)ppVar13 + 0xc0) = 1;
            pthread_cond_signal((pthread_cond_t *)((long)ppVar13 + 0x60));
            pthread_mutex_unlock(ppVar13);
            if ((pthread_mutex_t *)(param_1 + 0x309960 + lVar11) ==
                (pthread_mutex_t *)((long)ppVar13 + 0x24100)) break;
            uVar10 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x49c);
            ppVar13 = (pthread_mutex_t *)((long)ppVar13 + 0x24100);
          }
          polygon_sort_list_15121[param_1 + 0x581e3] = uVar7;
          video_3d_render_bins_1x(param_1 + 0x29d740);
          ppVar13 = (pthread_mutex_t *)(polygon_sort_list_15121 + param_1 + 0x7c250);
          do {
            pthread_mutex_lock(ppVar13);
            cVar6 = *(char *)((long)ppVar13 + 0x91);
            while (cVar6 == '\0') {
              pthread_cond_wait((pthread_cond_t *)((long)ppVar13 + 0x60),ppVar13);
              cVar6 = *(char *)((long)ppVar13 + 0x91);
            }
            *(undefined *)((long)ppVar13 + 0x91) = 0;
            ppVar3 = (pthread_mutex_t *)((long)ppVar13 + 0x24100);
            pthread_mutex_unlock(ppVar13);
            ppVar13 = ppVar3;
          } while (ppVar3 != (pthread_mutex_t *)(param_1 + 0x309990 + lVar11));
        }
        if (((*(uint *)(polygon_sort_list_15121 + param_1 + 0xe5500) >> 5 & 1) == 0) ||
           (*(int *)(*(long *)(param_1 + 8) + 0x49c) != 0)) {
          return;
        }
        uVar5 = *(uint *)(polygon_sort_list_15121 + param_1 + 0xe5500) >> 6 & 3;
        if (uVar5 == 2) {
          video_3d_resolve_bin_edge_mark_fog_full_gaps_1x(pvVar1);
          return;
        }
        if (uVar5 != 3) {
          video_3d_resolve_bin_edge_mark_gaps_1x();
          return;
        }
        video_3d_resolve_bin_edge_mark_fog_alpha_gaps_1x(pvVar1);
        return;
      }
    }
  }
  if (*(void **)(polygon_sort_list_15121 + param_1 + 0xe5528) == __dest) {
    return;
  }
  memcpy(__dest,*(void **)(polygon_sort_list_15121 + param_1 + 0xe5528),0x30000);
  return;
}


