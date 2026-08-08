/*
 * Ghidra decompilation
 *
 * Function : video_3d_clear_scanlines_4x
 * Address  : 00155930
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x00155bfc) */
/* WARNING: Removing unreachable block (ram,0x00155c10) */
/* WARNING: Removing unreachable block (ram,0x00155c24) */

void video_3d_clear_scanlines_4x(long param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  uint local_10;
  
  lVar10 = *(long *)(param_1 + 0x24000);
  lVar11 = param_1 + 0x10000;
  if ((*(uint *)(polygon_sort_list_15121 + lVar10 + 0xe5500) >> 0xe & 1) == 0) {
    render_polygon_set_buffer32_asm
              (param_1,*(undefined4 *)(polygon_sort_list_15121 + lVar10 + 0xe5508),param_3 << 9);
    render_polygon_set_buffer32_asm
              (lVar11,*(undefined4 *)(polygon_sort_list_15121 + lVar10 + 0xe550c),param_3 << 9);
    return;
  }
  uVar4 = *(uint *)(polygon_sort_list_15121 + lVar10 + 0xe550c);
  lVar13 = *(long *)(lVar10 + 0x2190);
  uVar2 = uVar4 & 0x3f000000;
  uVar5 = *(ushort *)(*(long *)(param_1 + 0x24008) + 0x9aa8);
  lVar10 = *(long *)(lVar10 + 0x2198);
  uVar3 = uVar5 & 0xff;
  local_10 = param_2 + (uint)(uVar5 >> 8);
  if (lVar13 == 0 || lVar10 == 0) {
    if (lVar13 == 0) {
      if (lVar10 == 0) {
        if (param_3 != 0) {
          lVar11 = param_1 + ((ulong)(param_3 - 1) + 1) * 0x800;
          do {
            lVar10 = 0;
            do {
              ((undefined8 *)(param_1 + lVar10))[1] = 0x8000000080000000;
              *(undefined8 *)(param_1 + lVar10) = 0x8000000080000000;
              puVar8 = (ulong *)(param_1 + 0x10000 + lVar10);
              puVar8[1] = CONCAT44(uVar4,uVar4) & 0x3f0000003f000000 | 0xfffe0000fffe00;
              *puVar8 = CONCAT44(uVar4,uVar4) & 0x3f0000003f000000 | 0xfffe0000fffe00;
              lVar10 = lVar10 + 0x10;
            } while (lVar10 != 0x800);
            param_1 = param_1 + 0x800;
          } while (param_1 != lVar11);
        }
      }
      else if (param_3 != 0) {
        lVar11 = param_1 + 4;
        param_1 = param_1 + 0x10004;
        uVar4 = param_3 + local_10;
        do {
          lVar13 = 0;
          uVar15 = uVar3;
          do {
            bVar1 = (byte)uVar15;
            uVar15 = uVar15 + 1;
            uVar5 = *(ushort *)
                     (lVar10 + ((((ulong)local_10 & 0x1fe) >> 1) * 0x100 + (ulong)bVar1) * 2);
            iVar6 = (uint)(uVar5 >> 0xf) << 0x1f;
            *(int *)(lVar11 + -4 + lVar13) = iVar6;
            uVar9 = (uVar5 & 0x7fff) << 9 | uVar2;
            *(uint *)(lVar11 + 0xfffc + lVar13) = uVar9;
            *(int *)(lVar11 + lVar13) = iVar6;
            *(uint *)(param_1 + lVar13) = uVar9;
            lVar13 = lVar13 + 8;
          } while (lVar13 != 0x800);
          lVar11 = lVar11 + 0x800;
          local_10 = local_10 + 1;
          param_1 = param_1 + 0x800;
        } while (uVar4 != local_10);
      }
    }
    else if (param_3 != 0) {
      uVar4 = param_3 + local_10;
      do {
        puVar12 = (uint *)(lVar11 + 4);
        puVar14 = (uint *)(lVar11 + -0xfffc);
        uVar15 = uVar3;
        do {
          bVar1 = (byte)uVar15;
          uVar15 = uVar15 + 1;
          uVar9 = texture_cache_build_pixel_embedded_alpha
                            (*(undefined2 *)
                              (lVar13 + (((ulong)(local_10 >> 1) & 0xff) * 0x100 + (ulong)bVar1) * 2
                              ));
          puVar14[-1] = uVar9 | 0x80000000;
          puVar12[-1] = uVar2 | 0xfffe00;
          *puVar14 = uVar9 | 0x80000000;
          *puVar12 = uVar2 | 0xfffe00;
          puVar12 = puVar12 + 2;
          puVar14 = puVar14 + 2;
        } while (uVar3 + 0x100 != uVar15);
        lVar11 = lVar11 + 0x800;
        local_10 = local_10 + 1;
      } while (uVar4 != local_10);
    }
  }
  else {
    uVar4 = param_3 + local_10;
    if (param_3 != 0) {
      do {
        puVar12 = (uint *)(param_1 + 4);
        puVar14 = (uint *)(param_1 + 0x10004);
        uVar15 = uVar3;
        do {
          lVar11 = (((ulong)(local_10 >> 1) & 0xff) * 0x100 + (ulong)(byte)uVar15) * 2;
          uVar15 = uVar15 + 1;
          uVar9 = texture_cache_build_pixel_embedded_alpha(*(undefined2 *)(lVar13 + lVar11));
          uVar5 = *(ushort *)(lVar10 + lVar11);
          uVar9 = uVar9 | (uint)(uVar5 >> 0xf) << 0x1f;
          puVar12[-1] = uVar9;
          uVar7 = (uVar5 & 0x7fff) << 9 | uVar2;
          puVar14[-1] = uVar7;
          *puVar12 = uVar9;
          *puVar14 = uVar7;
          puVar12 = puVar12 + 2;
          puVar14 = puVar14 + 2;
        } while (uVar15 != uVar3 + 0x100);
        local_10 = local_10 + 1;
        param_1 = param_1 + 0x800;
      } while (uVar4 != local_10);
    }
  }
  return;
}


