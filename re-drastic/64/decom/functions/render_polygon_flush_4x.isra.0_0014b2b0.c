/*
 * Ghidra decompilation
 *
 * Function : render_polygon_flush_4x.isra.0
 * Address  : 0014b2b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_flush_4x_isra_0
               (long param_1,long param_2,long param_3,uint param_4,ulong param_5,long param_6,
               uint param_7,uint param_8,uint *param_9,ushort *param_10)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  uint uVar21;
  long lVar22;
  undefined4 uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  uint *local_80;
  uint local_30;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar22 = *(long *)(param_1 + 0x24000);
  uVar14 = *(undefined8 *)(param_1 + 0x24008);
  uVar28 = param_5 & 0xffffffff;
  uVar24 = param_7 * 2 + 0x1d & 0xfffffff0;
  if ((param_8 >> 5 & 1) == 0) {
    lVar18 = param_6 + (ulong)(uVar24 * 2) * 4;
    render_polygon_setup_perspective_coefficients_asm
              (param_2,param_6,lVar18,param_5 & 0xffffffff,param_5,param_6,0);
    render_polygon_setup_perspective_steps_asm(param_6,param_6,lVar18,param_7);
  }
  else {
    render_polygon_setup_perspective_steps_w_constant_asm
              (param_6,param_2,param_5 & 0xffffffff,reciprocal_table_u);
  }
  uVar5 = *(uint *)(param_3 + 4);
  lVar18 = param_6 + (ulong)(uVar24 * 0xe);
  lVar10 = ((ulong)param_4 & 0x7fffff) * 0x800;
  lVar25 = param_1 + 0x10000 + lVar10;
  lVar10 = param_1 + lVar10;
  lVar2 = param_6 + (ulong)(uVar24 * 0x11);
  uVar21 = uVar5 >> 0x18 & 0x3f;
  lVar3 = param_6 + (ulong)(uVar24 * 0xc);
  lVar4 = param_6 + (ulong)(uVar24 * 0x10);
  uVar32 = param_6 + (ulong)uVar24;
  uVar27 = (uint)param_5;
  if ((param_8 >> 3 & 1) == 0) {
    if ((param_8 & 0x10) == 0) {
      uVar31 = 0;
      render_polygon_interpolate_z_asm(lVar3,param_2,uVar28,reciprocal_table);
    }
    else {
      uVar31 = (ulong)*param_10 << 9;
      render_polygon_set_buffer32_asm(lVar3,uVar31,param_7);
    }
LAB_0014b3e0:
    if ((param_8 & 1) != 0) goto LAB_0014b3ec;
LAB_0014b660:
    render_polygon_load_depth_asm_4x(uVar32,lVar25,param_2,uVar28);
    if ((*(uint *)(param_3 + 4) >> 0xe & 1) == 0) goto LAB_0014b680;
LAB_0014b424:
    if ((param_8 & 0x10) == 0) {
      render_polygon_depth_compare_equal_asm(lVar4,lVar3,uVar32,param_7,&local_c);
    }
    else {
      render_polygon_depth_compare_equal_constant_asm(lVar4,uVar31,uVar32,param_7,&local_c);
    }
LAB_0014b44c:
    uVar6 = *(uint *)(param_3 + 4);
  }
  else {
    if ((param_8 & 0x10) == 0) {
      uVar31 = 0;
      render_polygon_interpolate_w_asm(lVar3,param_2,param_6,uVar28);
      goto LAB_0014b3e0;
    }
    uVar31 = (ulong)*param_9;
    render_polygon_set_buffer32_asm(lVar3,uVar31,param_7);
    if ((param_8 & 1) == 0) goto LAB_0014b660;
LAB_0014b3ec:
    render_polygon_load_depth_colors_id_asm_4x
              (uVar32,lVar18,lVar2,lVar25,lVar10,param_1 + 0x20000 + (ulong)(param_4 << 9),param_2,
               uVar28);
    if ((*(uint *)(param_3 + 4) >> 0xe & 1) != 0) goto LAB_0014b424;
LAB_0014b680:
    if ((param_8 & 0x10) == 0) {
      render_polygon_depth_compare_less_than_asm(lVar4,lVar3,uVar32,param_7,&local_c);
      goto LAB_0014b44c;
    }
    render_polygon_depth_compare_less_than_constant_asm(lVar4,uVar31,uVar32,param_7,&local_c);
    uVar6 = *(uint *)(param_3 + 4);
  }
  if ((uVar6 >> 4 & 3) == 3) {
    uVar29 = *(uint *)(param_1 + 0x24010);
    uVar9 = (1 << (ulong)(uVar27 & 0x1f)) + -1 << (ulong)(param_4 & 0x1f);
    if (uVar21 == 0) {
      if ((uVar9 & (uVar29 ^ 0xffffffff)) == 0) {
        if (param_7 != 0) goto LAB_0014ba84;
LAB_0014baa8:
        if (uVar27 == 0) goto LAB_0014b600;
      }
      else {
        *(uint *)(param_1 + 0x24010) = uVar9 | uVar29;
        uVar29 = uVar29 >> (ulong)(param_4 & 0x1f);
        if (uVar27 == 0) {
          if (param_7 == 0) goto LAB_0014b600;
LAB_0014ba84:
          lVar22 = 0;
          do {
            if (*(char *)(lVar4 + lVar22) == '\0') {
              *(uint *)(uVar32 + lVar22 * 4) = *(uint *)(uVar32 + lVar22 * 4) | 0x80000000;
            }
            lVar22 = lVar22 + 1;
          } while ((uint)lVar22 < param_7);
          goto LAB_0014baa8;
        }
        puVar20 = (ulong *)(lVar25 + 0x800);
        do {
          puVar15 = puVar20 + -0x100;
          if ((uVar29 & 1) == 0) {
            do {
              puVar16 = puVar15 + 2;
              puVar15[1] = puVar15[1] & 0x7fffffff7fffffff;
              *puVar15 = *puVar15 & 0x7fffffff7fffffff;
              if (puVar20 == puVar16) break;
              puVar17 = puVar15 + 4;
              puVar15[3] = puVar15[3] & 0x7fffffff7fffffff;
              *puVar16 = *puVar16 & 0x7fffffff7fffffff;
              puVar15 = puVar17;
            } while (puVar20 != puVar17);
          }
          puVar20 = puVar20 + 0x100;
          uVar29 = uVar29 >> 1;
        } while (puVar20 != (ulong *)(lVar25 + (ulong)(uVar27 - 1) * 0x800 + 0x1000));
        if (param_7 != 0) goto LAB_0014ba84;
      }
      lVar22 = 0;
      uVar24 = 0;
      do {
        uVar7 = *(ushort *)(param_2 + 0x630 + lVar22);
        uVar8 = *(ushort *)(param_2 + 0x580 + lVar22);
        uVar28 = (ulong)uVar8;
        if (uVar7 != 0) {
          lVar18 = (uVar28 + 4) * 4;
          uVar31 = lVar25 + lVar18 + -0x10;
          bVar13 = uVar31 < uVar32 + 0x10;
          bVar11 = uVar32 < (ulong)(lVar25 + lVar18);
          uVar5 = uVar7 - 1;
          uVar21 = (uint)uVar7;
          if ((bVar13 && bVar11 || uVar5 < 7) || (!bVar13 || !bVar11) && uVar5 == 7) {
            lVar18 = 0;
            do {
              *(undefined4 *)(lVar25 + (ulong)uVar8 * 4 + lVar18 * 4) =
                   *(undefined4 *)(uVar32 + lVar18 * 4);
              lVar18 = lVar18 + 1;
            } while ((uint)lVar18 < uVar21);
          }
          else {
            lVar18 = 0;
            do {
              uVar14 = *(undefined8 *)(uVar32 + lVar18);
              ((undefined8 *)(uVar31 + lVar18))[1] = ((undefined8 *)(uVar32 + lVar18))[1];
              *(undefined8 *)(uVar31 + lVar18) = uVar14;
              lVar18 = lVar18 + 0x10;
            } while (((ulong)((uVar7 >> 2) - 1) + 1) * 0x10 - lVar18 != 0);
            uVar31 = (ulong)uVar7 & 0xfffc;
            lVar18 = uVar32 + uVar31 * 4;
            if ((uVar7 & 3) != 0) {
              uVar6 = (uVar21 & 0xfffffffc) + 1;
              *(undefined4 *)(lVar25 + (uVar28 + uVar31) * 4) = *(undefined4 *)(uVar32 + uVar31 * 4)
              ;
              if (uVar6 < uVar21) {
                uVar29 = (uVar21 & 0xfffffffc) + 2;
                *(undefined4 *)(lVar25 + (uVar6 + uVar28) * 4) = *(undefined4 *)(lVar18 + 4);
                if (uVar29 < uVar21) {
                  *(undefined4 *)(lVar25 + (uVar28 + uVar29) * 4) = *(undefined4 *)(lVar18 + 8);
                }
              }
            }
          }
          uVar32 = uVar32 + (ulong)uVar5 * 4 + 4;
        }
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 4;
        lVar25 = lVar25 + 0x800;
      } while (uVar24 < uVar27);
      goto LAB_0014b600;
    }
    *(uint *)(param_1 + 0x24010) = uVar29 & (uVar9 ^ 0xffffffff);
    if (param_7 == 0) goto LAB_0014b600;
    lVar19 = 0;
    local_c = 0;
    do {
      while( true ) {
        uVar29 = *(uint *)(uVar32 + lVar19 * 4);
        pcVar1 = (char *)(lVar4 + lVar19);
        uVar27 = uVar29 >> 0x1f ^ 1;
        if ((uVar29 >> 0x18 & 0x3f) == (uVar6 >> 0x18 & 0x3f)) {
          uVar27 = 1;
        }
        if (uVar27 != 0) break;
        lVar19 = lVar19 + 1;
        local_c = local_c - (int)*pcVar1;
        if (param_7 <= (uint)lVar19) goto LAB_0014b464;
      }
      *(undefined *)(lVar4 + lVar19) = 0;
      lVar19 = lVar19 + 1;
    } while ((uint)lVar19 < param_7);
  }
LAB_0014b464:
  local_30 = param_8 & 1;
  local_80 = &local_c;
  if (local_c == 0) goto LAB_0014b600;
  uVar31 = (ulong)(uVar24 * 3);
  lVar19 = param_6 + uVar31;
  if ((param_8 >> 2 & 1) == 0) {
    render_polygon_setup_rgb_interpolants_asm(param_2,lVar19,uVar28,uVar24);
    render_polygon_interpolate_rgb_asm(lVar19,lVar19,param_6,param_7,uVar24);
    uVar12 = (ulong)uVar5 & 0x1f0000;
    uVar23 = (undefined4)(uVar12 >> 0x10);
    if ((param_8 >> 1 & 1) != 0) goto LAB_0014b7e8;
LAB_0014b4e8:
    if ((uint)(uVar12 >> 0x10) <= *(uint *)(polygon_sort_list_15121 + lVar22 + 0xe5504))
    goto LAB_0014b600;
    render_polygon_shade_untextured
              (lVar22 + 0x1056c0,uVar14,param_3,lVar19 + uVar31,lVar19,uVar24,uVar12 >> 0x10,param_7
              );
  }
  else {
    render_polygon_set_buffer8_asm(lVar19,*(ushort *)(param_2 + 0x420) >> 3,param_7);
    render_polygon_set_buffer8_asm(lVar19 + (ulong)uVar24,*(ushort *)(param_2 + 0x422) >> 3,param_7)
    ;
    render_polygon_set_buffer8_asm
              (lVar19 + (ulong)(uVar24 * 2),*(ushort *)(param_2 + 0x582) >> 3,param_7);
    uVar12 = (ulong)uVar5 & 0x1f0000;
    uVar23 = (undefined4)(uVar12 >> 0x10);
    if ((param_8 >> 1 & 1) == 0) goto LAB_0014b4e8;
LAB_0014b7e8:
    lVar30 = lVar19 + uVar31;
    render_polygon_setup_uv_interpolants_asm(param_2,lVar30,uVar28,uVar24);
    render_polygon_interpolate_uv_asm(lVar30,lVar30,param_6,param_7,uVar24);
    lVar26 = *(long *)(param_3 + 0x10);
    render_polygon_generate_texture_addresses(param_3,lVar30,lVar30,param_7,lVar4);
    if (*(char *)(lVar26 + 0x4a) == '\0') {
      render_polygon_load_texels_asm(lVar30,lVar30,*(undefined8 *)(lVar26 + 0x10),param_7);
    }
    else {
      render_polygon_load_texels_paletted_asm
                (lVar30,lVar30,*(undefined8 *)(lVar26 + 0x10),*(undefined8 *)(lVar26 + 0x18),param_7
                );
    }
    render_polygon_shade
              (lVar22 + 0x1056c0,uVar14,param_3,lVar30,lVar30,lVar19,uVar24,uVar23,param_7);
    render_polygon_alpha_test_asm
              (lVar4,lVar30,*(undefined4 *)(polygon_sort_list_15121 + lVar22 + 0xe5504),param_7,
               local_80);
    if (local_c == 0) goto LAB_0014b600;
  }
  if (local_30 == 0) {
    lVar19 = lVar19 + uVar31;
    if ((*(uint *)(param_3 + 4) >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24014) = 1;
      render_polygon_apply_fog_asm(lVar19,param_7);
    }
    if ((*(uint *)(polygon_sort_list_15121 + lVar22 + 0xe5500) >> 5 & 1) != 0) {
      render_polygon_mark_edges_c(param_2,lVar3,uVar28);
    }
    if (param_7 == local_c) {
      render_polygon_writeback_all_pass_asm_4x
                (param_2,lVar10,lVar25,param_5 & 0xffffffff,uVar21,lVar19,lVar3);
    }
    else {
      render_polygon_writeback_asm_4x
                (param_2,lVar10,lVar25,param_5 & 0xffffffff,uVar21,lVar19,lVar3,lVar4);
    }
  }
  else {
    lVar26 = lVar19 + uVar31;
    if ((*(uint *)(polygon_sort_list_15121 + lVar22 + 0xe5500) >> 3 & 1) == 0) {
      render_polygon_alpha_pass_asm(lVar26,lVar18,param_7,lVar19);
    }
    else {
      render_polygon_alpha_blend_asm(lVar26);
    }
    render_polygon_alpha_id_test_asm(lVar4,lVar2,lVar19,param_7,uVar21);
    uVar24 = *(uint *)(param_3 + 4) >> 0xb & 1 | *(uint *)(param_3 + 4) >> 0xe & 2;
    if (uVar24 == 2) {
      *(undefined4 *)(param_1 + 0x24014) = 1;
      render_polygon_alpha_combine_fog_asm
                (lVar26,lVar3,lVar18,uVar32,lVar2,uVar21,lVar19,lVar4,param_7);
    }
    else if (uVar24 == 3) {
      *(undefined4 *)(param_1 + 0x24014) = 1;
      render_polygon_alpha_combine_depth_fog_asm
                (lVar26,lVar3,lVar18,uVar32,lVar2,uVar21,lVar19,lVar4,param_7);
    }
    else if (uVar24 == 1) {
      render_polygon_alpha_combine_depth_asm
                (lVar26,lVar3,lVar18,uVar32,lVar2,uVar21,lVar19,lVar4,param_7);
    }
    else {
      render_polygon_alpha_combine_asm(lVar26,lVar3,lVar18,uVar32,lVar2,uVar21);
    }
    render_polygon_writeback_alpha_asm_4x
              (param_2,lVar10,lVar25,param_1 + 0x20000 + (ulong)(param_4 << 9),uVar28,lVar26,lVar3,
               lVar2);
  }
LAB_0014b600:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


