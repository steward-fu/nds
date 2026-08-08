/*
 * Ghidra decompilation
 *
 * Function : video_3d_render_bins_4x
 * Address  : 00158890
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x00158e20) */
/* WARNING: Removing unreachable block (ram,0x00158e34) */
/* WARNING: Removing unreachable block (ram,0x00158e48) */

void video_3d_render_bins_4x(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  uint *puVar24;
  long lVar25;
  uint uVar26;
  int local_30;
  
  lVar20 = *(long *)(param_1 + 0x24008);
  bVar7 = *(byte *)(param_1 + 0x240e3);
  uVar6 = *(byte *)(lVar20 + 0x9ac0) ^ 1;
  uVar17 = (ulong)uVar6;
  uVar13 = 0;
  if (bVar7 != 0) {
    uVar13 = 0xc / bVar7;
  }
  lVar15 = *(long *)(param_1 + 0x24000);
  lVar3 = lVar20 + uVar17 * 0x18004 + 0x9ad4;
  lVar19 = *(long *)(polygon_sort_list_15121 + lVar15 + 0xe5518);
  if (uVar13 == 0) {
    return;
  }
  lVar1 = param_1 + 0x10000;
  local_30 = 0;
  lVar16 = lVar15;
  lVar22 = lVar20;
  do {
    uVar11 = (uint)*(byte *)(param_1 + 0x240e2) + (uint)bVar7 * local_30;
    iVar9 = uVar11 * 0x20;
    if ((*(uint *)(polygon_sort_list_15121 + lVar16 + 0xe5500) >> 0xe & 1) == 0) {
      render_polygon_set_buffer32_asm
                (param_1,*(undefined4 *)(polygon_sort_list_15121 + lVar16 + 0xe5508),0x4000);
      render_polygon_set_buffer32_asm
                (lVar1,*(undefined4 *)(polygon_sort_list_15121 + lVar16 + 0xe550c),0x4000);
    }
    else {
      lVar21 = *(long *)(lVar16 + 0x2190);
      lVar25 = *(long *)(lVar16 + 0x2198);
      uVar4 = *(ushort *)(lVar22 + 0x9aa8) & 0xff;
      uVar26 = *(uint *)(polygon_sort_list_15121 + lVar16 + 0xe550c);
      uVar2 = iVar9 + (uint)(*(ushort *)(lVar22 + 0x9aa8) >> 8);
      uVar5 = uVar26 & 0x3f000000;
      if (lVar21 == 0 || lVar25 == 0) {
        if (lVar21 == 0) {
          if (lVar25 == 0) {
            lVar16 = 0;
            lVar22 = lVar1;
            lVar21 = param_1;
            while( true ) {
              do {
                ((undefined8 *)(lVar21 + lVar16))[1] = 0x8000000080000000;
                *(undefined8 *)(lVar21 + lVar16) = 0x8000000080000000;
                ((ulong *)(lVar22 + lVar16))[1] =
                     CONCAT44(uVar26,uVar26) & 0x3f0000003f000000 | 0xfffe0000fffe00;
                *(ulong *)(lVar22 + lVar16) =
                     CONCAT44(uVar26,uVar26) & 0x3f0000003f000000 | 0xfffe0000fffe00;
                lVar16 = lVar16 + 0x10;
              } while (lVar16 != 0x800);
              if (lVar22 + 0x800 == param_1 + 0x20000) break;
              lVar21 = lVar22 + -0xf800;
              lVar16 = 0;
              lVar22 = lVar22 + 0x800;
            }
          }
          else {
            lVar16 = param_1 + 4;
            lVar22 = param_1 + 0x10004;
            do {
              lVar21 = 0;
              uVar26 = uVar4;
              do {
                uVar18 = (ulong)uVar26;
                uVar26 = uVar26 + 1;
                uVar8 = *(ushort *)
                         (lVar25 + (((ulong)(uVar2 >> 1) & 0xff) * 0x100 + (uVar18 & 0xff)) * 2);
                iVar10 = (uint)(uVar8 >> 0xf) << 0x1f;
                *(int *)(lVar16 + -4 + lVar21) = iVar10;
                uVar14 = (uVar8 & 0x7fff) << 9 | uVar5;
                *(uint *)(lVar16 + 0xfffc + lVar21) = uVar14;
                *(int *)(lVar16 + lVar21) = iVar10;
                *(uint *)(lVar22 + lVar21) = uVar14;
                lVar21 = lVar21 + 8;
              } while (lVar21 != 0x800);
              lVar16 = lVar16 + 0x800;
              uVar2 = uVar2 + 1;
              lVar22 = lVar22 + 0x800;
            } while (param_1 + 0x10004 != lVar16);
          }
        }
        else {
          lVar16 = param_1;
          do {
            puVar23 = (uint *)(lVar16 + 4);
            puVar24 = (uint *)(lVar16 + 0x10004);
            uVar26 = uVar4;
            do {
              bVar7 = (byte)uVar26;
              uVar26 = uVar26 + 1;
              uVar14 = texture_cache_build_pixel_embedded_alpha
                                 (*(undefined2 *)
                                   (lVar21 + (((ulong)(uVar2 >> 1) & 0xff) * 0x100 + (ulong)bVar7) *
                                             2));
              puVar23[-1] = uVar14 | 0x80000000;
              puVar24[-1] = uVar5 | 0xfffe00;
              *puVar23 = uVar14 | 0x80000000;
              *puVar24 = uVar5 | 0xfffe00;
              puVar23 = puVar23 + 2;
              puVar24 = puVar24 + 2;
            } while (uVar4 + 0x100 != uVar26);
            lVar16 = lVar16 + 0x800;
            uVar2 = uVar2 + 1;
          } while (lVar16 != lVar1);
        }
      }
      else {
        lVar16 = param_1;
        do {
          puVar23 = (uint *)(lVar16 + 4);
          puVar24 = (uint *)(lVar16 + 0x10004);
          uVar26 = uVar4;
          do {
            lVar22 = (((ulong)(uVar2 >> 1) & 0xff) * 0x100 + (ulong)(byte)uVar26) * 2;
            uVar26 = uVar26 + 1;
            uVar14 = texture_cache_build_pixel_embedded_alpha(*(undefined2 *)(lVar21 + lVar22));
            uVar8 = *(ushort *)(lVar25 + lVar22);
            uVar14 = uVar14 | (uint)(uVar8 >> 0xf) << 0x1f;
            puVar23[-1] = uVar14;
            uVar12 = (uVar8 & 0x7fff) << 9 | uVar5;
            puVar24[-1] = uVar12;
            *puVar23 = uVar14;
            *puVar24 = uVar12;
            puVar23 = puVar23 + 2;
            puVar24 = puVar24 + 2;
          } while (uVar26 != uVar4 + 0x100);
          lVar16 = lVar16 + 0x800;
          uVar2 = uVar2 + 1;
        } while (lVar16 != lVar1);
      }
    }
    lVar16 = lVar15 + 0x2856c0 + (ulong)uVar11 * 0x1004;
    *(undefined8 *)(param_1 + 0x24010) = 0xffffffff;
    if (*(int *)(lVar16 + 0x1000) != 0) {
      lVar22 = 0;
      do {
        render_polygon_4x(param_1,lVar20 + uVar17 * 0x10008 + 0x39ae0 +
                                           (ulong)*(ushort *)(lVar16 + lVar22 * 2) * 0x20,lVar3,
                          iVar9,iVar9 + 0x20);
        lVar22 = lVar22 + 1;
      } while ((uint)lVar22 < *(uint *)(lVar16 + 0x1000));
    }
    lVar16 = param_1 + 0x20000;
    if (*(int *)(lVar20 + (uVar17 * 0x2000 + (ulong)(byte)uVar6) * 8 + 0x69af0) != 0) {
      do {
        lVar22 = lVar16 + 0x200;
        render_polygon_set_buffer8_asm(lVar16,0xff,0x200);
        lVar16 = lVar22;
      } while (lVar22 != param_1 + 0x24000);
      lVar16 = lVar15 + 0x2916f0 + (ulong)uVar11 * 0x1004;
      if (*(int *)(lVar16 + 0x1000) != 0) {
        lVar22 = 0;
        do {
          render_polygon_4x(param_1,lVar20 + uVar17 * 0x10008 + 0x59af0 +
                                             (ulong)*(ushort *)(lVar16 + lVar22 * 2) * 0x20,lVar3,
                            iVar9,iVar9 + 0x20);
          lVar22 = lVar22 + 1;
        } while ((uint)lVar22 < *(uint *)(lVar16 + 0x1000));
      }
    }
    lVar16 = lVar19 + ((ulong)uVar11 & 0x3ffff) * 0x10000;
    uVar4 = *(uint *)(polygon_sort_list_15121 + lVar15 + 0xe5500) >> 6 & 3;
    uVar2 = (*(uint *)(polygon_sort_list_15121 + lVar15 + 0xe5500) >> 5 & 1) << 2 | uVar4;
    if (*(char *)(param_1 + 0x240e4) == '\0') {
      if (uVar2 < 6) {
        uVar4 = uVar2;
        if (uVar2 < 4) goto LAB_00158b2c;
        video_3d_resolve_bin_edge_mark_4x(param_1,lVar16,uVar11);
      }
      else if (uVar2 == 6) {
        video_3d_resolve_bin_edge_mark_fog_full_4x(param_1,lVar16,uVar11);
      }
      else {
        video_3d_resolve_bin_edge_mark_fog_alpha_4x(param_1,lVar16,uVar11);
      }
    }
    else {
LAB_00158b2c:
      if (uVar4 == 2) {
        video_3d_resolve_bin_fog_full_4x(param_1);
      }
      else if (uVar4 == 3) {
        video_3d_resolve_bin_fog_alpha_4x(param_1);
      }
      else {
        video_3d_resolve_bin_asm_4x(lVar16,param_1);
      }
    }
    if (uVar13 == local_30 + 1U) {
      return;
    }
    local_30 = local_30 + 1;
    bVar7 = *(byte *)(param_1 + 0x240e3);
    lVar16 = *(long *)(param_1 + 0x24000);
    lVar22 = *(long *)(param_1 + 0x24008);
  } while( true );
}


