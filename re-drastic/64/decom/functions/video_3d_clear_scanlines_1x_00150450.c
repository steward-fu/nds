/*
 * Ghidra decompilation
 *
 * Function : video_3d_clear_scanlines_1x
 * Address  : 00150450
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x001506d4) */
/* WARNING: Removing unreachable block (ram,0x001506e8) */
/* WARNING: Removing unreachable block (ram,0x001506fc) */

void video_3d_clear_scanlines_1x(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ulong *puVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar8 = *(long *)(param_1 + 0x24000);
  if ((*(uint *)(polygon_sort_list_15121 + lVar8 + 0xe5500) >> 0xe & 1) == 0) {
    render_polygon_set_buffer32_asm
              (param_1,*(undefined4 *)(polygon_sort_list_15121 + lVar8 + 0xe5508),param_3 << 8);
    render_polygon_set_buffer32_asm
              (param_1 + 0x10000,*(undefined4 *)(polygon_sort_list_15121 + lVar8 + 0xe550c),
               param_3 << 8);
    return;
  }
  uVar7 = *(uint *)(polygon_sort_list_15121 + lVar8 + 0xe550c);
  lVar10 = *(long *)(lVar8 + 0x2190);
  uVar3 = *(ushort *)(*(long *)(param_1 + 0x24008) + 0x9aa8);
  lVar8 = *(long *)(lVar8 + 0x2198);
  cVar6 = (char)uVar3;
  uVar2 = uVar7 & 0x3f000000;
  uVar1 = param_2 + (uint)(uVar3 >> 8);
  uVar11 = (ulong)uVar1;
  if (lVar10 == 0 || lVar8 == 0) {
    if (lVar10 == 0) {
      if (lVar8 == 0) {
        if (param_3 != 0) {
          lVar8 = param_1 + ((ulong)(param_3 - 1) + 1) * 0x400;
          do {
            lVar10 = 0;
            do {
              ((undefined8 *)(param_1 + lVar10))[1] = 0x8000000080000000;
              *(undefined8 *)(param_1 + lVar10) = 0x8000000080000000;
              puVar4 = (ulong *)(param_1 + 0x10000 + lVar10);
              puVar4[1] = CONCAT44(uVar7,uVar7) & 0x3f0000003f000000 | 0xfffe0000fffe00;
              *puVar4 = CONCAT44(uVar7,uVar7) & 0x3f0000003f000000 | 0xfffe0000fffe00;
              lVar10 = lVar10 + 0x10;
            } while (lVar10 != 0x400);
            param_1 = param_1 + 0x400;
          } while (lVar8 != param_1);
        }
      }
      else if (param_3 != 0) {
        lVar10 = param_1 + -4;
        param_1 = param_1 + 0xfffc;
        do {
          lVar9 = 1;
          do {
            uVar3 = *(ushort *)
                     (lVar8 + ((uVar11 & 0xff) * 0x100 + (ulong)(byte)(cVar6 + -1 + (char)lVar9)) *
                              2);
            *(uint *)(lVar10 + lVar9 * 4) = (uint)(uVar3 >> 0xf) << 0x1f;
            *(uint *)(param_1 + lVar9 * 4) = (uVar3 & 0x7fff) << 9 | uVar2;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x101);
          uVar7 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar7;
          lVar10 = lVar10 + 0x400;
          param_1 = param_1 + 0x400;
        } while (param_3 + uVar1 != uVar7);
      }
    }
    else if (param_3 != 0) {
      lVar8 = param_1 + -4;
      param_1 = param_1 + 0xfffc;
      do {
        lVar9 = 1;
        do {
          uVar7 = texture_cache_build_pixel_embedded_alpha
                            (*(undefined2 *)
                              (lVar10 + ((uVar11 & 0xff) * 0x100 +
                                        (ulong)(byte)(cVar6 + -1 + (char)lVar9)) * 2));
          *(uint *)(lVar8 + lVar9 * 4) = uVar7 | 0x80000000;
          *(uint *)(param_1 + lVar9 * 4) = uVar2 | 0xfffe00;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0x101);
        uVar7 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar7;
        lVar8 = lVar8 + 0x400;
        param_1 = param_1 + 0x400;
      } while (param_3 + uVar1 != uVar7);
    }
  }
  else if (param_3 != 0) {
    lVar9 = param_1 + -4;
    param_1 = param_1 + 0xfffc;
    do {
      lVar12 = 1;
      do {
        lVar5 = ((uVar11 & 0xff) * 0x100 + (ulong)(byte)(cVar6 + -1 + (char)lVar12)) * 2;
        uVar7 = texture_cache_build_pixel_embedded_alpha(*(undefined2 *)(lVar10 + lVar5));
        uVar3 = *(ushort *)(lVar8 + lVar5);
        *(uint *)(lVar9 + lVar12 * 4) = uVar7 | (uint)(uVar3 >> 0xf) << 0x1f;
        *(uint *)(param_1 + lVar12 * 4) = (uVar3 & 0x7fff) << 9 | uVar2;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x101);
      uVar7 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar7;
      lVar9 = lVar9 + 0x400;
      param_1 = param_1 + 0x400;
    } while (uVar7 != param_3 + uVar1);
    return;
  }
  return;
}


