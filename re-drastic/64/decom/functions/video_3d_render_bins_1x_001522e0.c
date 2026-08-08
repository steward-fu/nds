/*
 * Ghidra decompilation
 *
 * Function : video_3d_render_bins_1x
 * Address  : 001522e0
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x00152840) */
/* WARNING: Removing unreachable block (ram,0x00152854) */
/* WARNING: Removing unreachable block (ram,0x00152868) */

void video_3d_render_bins_1x(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  int local_7c;
  
  lVar15 = *(long *)(param_1 + 0x24008);
  bVar4 = *(byte *)(param_1 + 0x240e3);
  lVar12 = *(long *)(param_1 + 0x24000);
  uVar3 = *(byte *)(lVar15 + 0x9ac0) ^ 1;
  uVar13 = (ulong)uVar3;
  uVar8 = 0;
  if (bVar4 != 0) {
    uVar8 = 0xc / bVar4;
  }
  lVar1 = lVar15 + uVar13 * 0x18004 + 0x9ad4;
  lVar14 = *(long *)(polygon_sort_list_15121 + lVar12 + 0xe5518);
  if (uVar8 == 0) {
    return;
  }
  local_7c = 0;
  lVar17 = lVar12;
  lVar18 = lVar15;
  do {
    uVar7 = (uint)*(byte *)(param_1 + 0x240e2) + (uint)bVar4 * local_7c;
    iVar6 = uVar7 * 0x10;
    if ((*(uint *)(polygon_sort_list_15121 + lVar17 + 0xe5500) >> 0xe & 1) == 0) {
      render_polygon_set_buffer32_asm
                (param_1,*(undefined4 *)(polygon_sort_list_15121 + lVar17 + 0xe5508),0x1000);
      render_polygon_set_buffer32_asm
                (param_1 + 0x10000,*(undefined4 *)(polygon_sort_list_15121 + lVar17 + 0xe550c),
                 0x1000);
    }
    else {
      lVar16 = *(long *)(lVar17 + 0x2190);
      lVar21 = *(long *)(lVar17 + 0x2198);
      uVar11 = *(uint *)(polygon_sort_list_15121 + lVar17 + 0xe550c);
      uVar20 = (ulong)(iVar6 + (uint)(*(ushort *)(lVar18 + 0x9aa8) >> 8));
      cVar10 = (char)*(ushort *)(lVar18 + 0x9aa8);
      uVar2 = uVar11 & 0x3f000000;
      if (lVar16 == 0 || lVar21 == 0) {
        if (lVar16 == 0) {
          if (lVar21 == 0) {
            lVar17 = 0;
            lVar18 = param_1 + 0x10000;
            lVar16 = param_1;
            while( true ) {
              do {
                ((undefined8 *)(lVar16 + lVar17))[1] = 0x8000000080000000;
                *(undefined8 *)(lVar16 + lVar17) = 0x8000000080000000;
                ((ulong *)(lVar18 + lVar17))[1] =
                     CONCAT44(uVar11,uVar11) & 0x3f0000003f000000 | 0xfffe0000fffe00;
                *(ulong *)(lVar18 + lVar17) =
                     CONCAT44(uVar11,uVar11) & 0x3f0000003f000000 | 0xfffe0000fffe00;
                lVar17 = lVar17 + 0x10;
              } while (lVar17 != 0x400);
              if (lVar18 + 0x400 == param_1 + 0x14000) break;
              lVar16 = lVar18 + -0xfc00;
              lVar17 = 0;
              lVar18 = lVar18 + 0x400;
            }
          }
          else {
            lVar17 = param_1 + -4;
            lVar18 = param_1 + 0xfffc;
            do {
              lVar16 = 1;
              do {
                uVar5 = *(ushort *)
                         (lVar21 + ((uVar20 & 0xff) * 0x100 +
                                   (ulong)(byte)(cVar10 + -1 + (char)lVar16)) * 2);
                *(uint *)(lVar17 + lVar16 * 4) = (uint)(uVar5 >> 0xf) << 0x1f;
                *(uint *)(lVar18 + lVar16 * 4) = (uVar5 & 0x7fff) << 9 | uVar2;
                lVar16 = lVar16 + 1;
              } while (lVar16 != 0x101);
              lVar17 = lVar17 + 0x400;
              uVar20 = (ulong)((int)uVar20 + 1);
              lVar18 = lVar18 + 0x400;
            } while (param_1 + 0x3ffc != lVar17);
          }
        }
        else {
          lVar17 = param_1 + -4;
          do {
            lVar18 = 1;
            do {
              uVar11 = texture_cache_build_pixel_embedded_alpha
                                 (*(undefined2 *)
                                   (lVar16 + ((uVar20 & 0xff) * 0x100 +
                                             (ulong)(byte)(cVar10 + -1 + (char)lVar18)) * 2));
              *(uint *)(lVar17 + lVar18 * 4) = uVar11 | 0x80000000;
              *(uint *)(lVar17 + 0x10000 + lVar18 * 4) = uVar2 | 0xfffe00;
              lVar18 = lVar18 + 1;
            } while (lVar18 != 0x101);
            lVar17 = lVar17 + 0x400;
            uVar20 = (ulong)((int)uVar20 + 1);
          } while (param_1 + 0x3ffc != lVar17);
        }
      }
      else {
        lVar18 = param_1 + 0xfffc;
        lVar17 = param_1 + -4;
        do {
          lVar19 = 1;
          do {
            lVar9 = ((uVar20 & 0xff) * 0x100 + (ulong)(byte)(cVar10 + -1 + (char)lVar19)) * 2;
            uVar11 = texture_cache_build_pixel_embedded_alpha(*(undefined2 *)(lVar16 + lVar9));
            uVar5 = *(ushort *)(lVar21 + lVar9);
            *(uint *)(lVar17 + lVar19 * 4) = uVar11 | (uint)(uVar5 >> 0xf) << 0x1f;
            *(uint *)(lVar18 + lVar19 * 4) = (uVar5 & 0x7fff) << 9 | uVar2;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0x101);
          lVar17 = lVar17 + 0x400;
          uVar20 = (ulong)((int)uVar20 + 1);
          lVar18 = lVar18 + 0x400;
        } while (param_1 + 0x3ffc != lVar17);
      }
    }
    lVar17 = lVar12 + 0x2856c0 + (ulong)uVar7 * 0x1004;
    *(undefined8 *)(param_1 + 0x24010) = 0xffffffff;
    if (*(int *)(lVar17 + 0x1000) != 0) {
      lVar18 = 0;
      do {
        render_polygon_1x(param_1,lVar15 + uVar13 * 0x10008 + 0x39ae0 +
                                           (ulong)*(ushort *)(lVar17 + lVar18 * 2) * 0x20,lVar1,
                          iVar6,iVar6 + 0x10);
        lVar18 = lVar18 + 1;
      } while ((uint)lVar18 < *(uint *)(lVar17 + 0x1000));
    }
    if (*(int *)(lVar15 + (uVar13 * 0x2000 + (ulong)(byte)uVar3) * 8 + 0x69af0) != 0) {
      lVar17 = param_1 + 0x20000;
      do {
        lVar18 = lVar17 + 0x100;
        render_polygon_set_buffer8_asm(lVar17,0xff,0x100);
        lVar17 = lVar18;
      } while (lVar18 != param_1 + 0x21000);
      lVar17 = lVar12 + 0x2916f0 + (ulong)uVar7 * 0x1004;
      if (*(int *)(lVar17 + 0x1000) != 0) {
        lVar18 = 0;
        do {
          render_polygon_1x(param_1,lVar15 + uVar13 * 0x10008 + 0x59af0 +
                                             (ulong)*(ushort *)(lVar17 + lVar18 * 2) * 0x20,lVar1,
                            iVar6,iVar6 + 0x10);
          lVar18 = lVar18 + 1;
        } while ((uint)lVar18 < *(uint *)(lVar17 + 0x1000));
      }
    }
    lVar17 = lVar14 + ((ulong)uVar7 & 0xfffff) * 0x4000;
    uVar11 = *(uint *)(polygon_sort_list_15121 + lVar12 + 0xe5500) >> 6 & 3;
    uVar2 = (*(uint *)(polygon_sort_list_15121 + lVar12 + 0xe5500) >> 5 & 1) << 2 | uVar11;
    if (*(char *)(param_1 + 0x240e4) == '\0') {
      if (uVar2 < 6) {
        uVar11 = uVar2;
        if (uVar2 < 4) goto LAB_0015256c;
        video_3d_resolve_bin_edge_mark_1x(param_1,lVar17,uVar7);
      }
      else if (uVar2 == 6) {
        video_3d_resolve_bin_edge_mark_fog_full_1x(param_1,lVar17,uVar7);
      }
      else {
        video_3d_resolve_bin_edge_mark_fog_alpha_1x(param_1,lVar17,uVar7);
      }
    }
    else {
LAB_0015256c:
      if (uVar11 == 2) {
        video_3d_resolve_bin_fog_full_1x(param_1);
      }
      else if (uVar11 == 3) {
        video_3d_resolve_bin_fog_alpha_1x(param_1);
      }
      else {
        video_3d_resolve_bin_asm_1x(lVar17,param_1);
      }
    }
    if (uVar8 == local_7c + 1U) {
      return;
    }
    local_7c = local_7c + 1;
    bVar4 = *(byte *)(param_1 + 0x240e3);
    lVar17 = *(long *)(param_1 + 0x24000);
    lVar18 = *(long *)(param_1 + 0x24008);
  } while( true );
}


