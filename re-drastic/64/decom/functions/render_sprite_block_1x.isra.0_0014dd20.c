/*
 * Ghidra decompilation
 *
 * Function : render_sprite_block_1x.isra.0
 * Address  : 0014dd20
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_sprite_block_1x_isra_0
               (long param_1,uint *param_2,long param_3,long param_4,ulong param_5,int param_6,
               int param_7,int param_8,uint param_9,int param_10,uint param_11,int param_12,
               uint param_13)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  byte bVar24;
  ulong uVar23;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int local_c;
  long local_8;
  
  uVar7 = param_9 * param_10;
  uVar17 = (ulong)uVar7;
  lVar15 = (ulong)(uint)(param_6 << 8) + (param_5 & 0xffffffff);
  uVar27 = uVar7 + 0x16 & 0xfffffff0;
  lVar2 = param_4 + (ulong)(uVar27 * 0xd);
  lVar19 = param_1 + lVar15 * 4;
  local_8 = ___stack_chk_guard;
  uVar5 = *param_2;
  lVar12 = *(long *)(param_1 + 0x24000);
  lVar3 = param_4 + (ulong)(uVar27 << 2);
  lVar16 = param_4 + (ulong)(uVar27 * 0xe);
  lVar18 = param_1 + 0x10000 + lVar15 * 4;
  if ((param_13 & 1) == 0) {
    render_sprite_load_depth_asm_1x(param_4,lVar18,param_9,param_10);
  }
  else {
    render_sprite_load_depth_colors_id_asm_1x
              (param_4,lVar3,lVar16,lVar18,lVar19,param_1 + 0x20000 + lVar15,param_9,param_10);
  }
  if ((*param_2 >> 0xe & 1) == 0) {
    render_polygon_depth_compare_less_than_constant_asm(lVar2,param_11,param_4,uVar7,&local_c);
  }
  else {
    render_polygon_depth_compare_equal_constant_asm(lVar2);
  }
  if (local_c == 0) goto LAB_0014e1b0;
  uVar6 = *(ushort *)(param_3 + 0x40);
  puVar20 = (uint *)(param_4 + (ulong)(uVar27 << 3));
  lVar10 = (ulong)(param_8 * (uint)uVar6) + (long)param_7;
  if (*(char *)(param_3 + 0x4a) == '\0') {
    lVar10 = *(long *)(param_3 + 0x10) + lVar10 * 4;
    if ((param_10 != 0) && (param_9 != 0)) {
      uVar11 = param_9 & 0xfffffffc;
      uVar28 = param_9 - 1;
      uVar14 = (ulong)param_9 & 0xfffffffc;
      iVar13 = 0;
      puVar9 = puVar20;
      do {
        bVar1 = (ulong)((lVar10 + 0xf) - (long)puVar9) < 0x1f;
        lVar8 = 0;
        if ((bVar1 || uVar28 < 7) || !bVar1 && uVar28 == 7) {
          do {
            puVar9[lVar8] = *(uint *)(lVar10 + lVar8 * 4);
            lVar4 = lVar8 + 1;
            if (param_9 <= (uint)lVar4) break;
            puVar9[lVar4] = *(uint *)(lVar10 + lVar4 * 4);
            lVar8 = lVar8 + 2;
          } while ((uint)lVar8 < param_9);
        }
        else {
          do {
            uVar21 = *(undefined8 *)(lVar10 + lVar8);
            ((undefined8 *)((long)puVar9 + lVar8))[1] = ((undefined8 *)(lVar10 + lVar8))[1];
            *(undefined8 *)((long)puVar9 + lVar8) = uVar21;
            lVar8 = lVar8 + 0x10;
          } while (lVar8 != ((ulong)((param_9 >> 2) - 1) + 1) * 0x10);
          if (((param_9 != uVar11) &&
              (puVar9[uVar14] = *(uint *)(lVar10 + uVar14 * 4), uVar11 + 1 < param_9)) &&
             (puVar9[uVar14 + 1] = *(uint *)(lVar10 + (ulong)(uVar11 + 1) * 4), uVar11 + 2 < param_9
             )) {
            puVar9[uVar14 + 2] = *(uint *)(lVar10 + (ulong)(uVar11 + 2) * 4);
          }
        }
        iVar13 = iVar13 + 1;
        puVar9 = puVar9 + (ulong)uVar28 + 1;
        lVar10 = lVar10 + (ulong)uVar6 * 4;
      } while (param_10 != iVar13);
    }
  }
  else {
    render_sprite_load_texels_paletted_c
              (puVar20,*(long *)(param_3 + 0x10) + lVar10,*(undefined8 *)(param_3 + 0x18),param_9,
               param_10);
  }
  render_polygon_alpha_test_asm
            (lVar2,puVar20,*(undefined4 *)(polygon_sort_list_15121 + lVar12 + 0xe5504),uVar17,
             &local_c);
  if (local_c == 0) goto LAB_0014e1b0;
  if (param_12 != 0x3f3f3f) {
    render_sprite_modulate_c(puVar20,puVar20,param_12,uVar7);
  }
  param_11 = (*param_2 >> 0xf & 1) << 0x1e | uVar5 & 0x3f000000 | param_11;
  if ((param_13 & 1) == 0) {
    if ((*param_2 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24014) = 1;
      render_polygon_apply_fog_asm(puVar20,uVar7);
    }
    render_sprite_writeback_c_1x(lVar19,lVar18,param_9,param_10,puVar20,param_11,lVar2);
    goto LAB_0014e1b0;
  }
  uVar11 = uVar5 >> 0x10 & 0x1f;
  lVar10 = param_4 + (ulong)(uVar27 * 0xc);
  lVar15 = param_1 + 0x20000 + lVar15;
  if ((*(char *)(param_3 + 0x49) == '\x01') || (*(char *)(param_3 + 0x49) == '\x06')) {
    if (uVar7 != 0) {
      if (uVar7 - 1 < 3) {
        uVar27 = 0;
        puVar9 = puVar20;
      }
      else {
        lVar8 = 0;
        do {
          uVar25 = ((ulong *)((long)puVar20 + lVar8))[1];
          uVar14 = *(ulong *)((long)puVar20 + lVar8);
          uVar23 = uVar14 & 0xffffff00ffffff;
          uVar26 = uVar25 & 0xffffff00ffffff;
          uVar27 = (uint)((byte)(uVar14 >> 0x18) & 0x1f);
          uVar28 = (uint)((byte)(uVar14 >> 0x38) & 0x1f);
          uVar29 = (uint)((byte)(uVar25 >> 0x18) & 0x1f);
          uVar30 = (uint)((byte)(uVar25 >> 0x38) & 0x1f);
          ((undefined8 *)((long)puVar20 + lVar8))[1] =
               CONCAT17((char)(uVar11 + uVar30 * uVar11 + uVar30 >> 5),
                        CONCAT16((char)(uVar26 >> 0x30),
                                 CONCAT15((char)(uVar26 >> 0x28),
                                          CONCAT14((char)(uVar26 >> 0x20),
                                                   CONCAT13((char)(uVar11 + uVar29 * uVar11 + uVar29
                                                                  >> 5),(int3)uVar26)))));
          *(undefined8 *)((long)puVar20 + lVar8) =
               CONCAT17((char)(uVar11 + uVar28 * uVar11 + uVar28 >> 5),
                        CONCAT16((char)(uVar23 >> 0x30),
                                 CONCAT15((char)(uVar23 >> 0x28),
                                          CONCAT14((char)(uVar23 >> 0x20),
                                                   CONCAT13((char)(uVar11 + uVar27 * uVar11 + uVar27
                                                                  >> 5),(int3)uVar23)))));
          lVar8 = lVar8 + 0x10;
        } while (lVar8 != ((ulong)((uVar7 >> 2) - 1) + 1) * 0x10);
        uVar27 = uVar7 & 0xfffffffc;
        puVar9 = puVar20 + (uVar17 & 0xfffffffc);
        if ((uVar7 & 3) == 0) goto LAB_0014e088;
      }
      uVar28 = *puVar9 >> 0x18 & 0x1f;
      *puVar9 = *puVar9 & 0xffffff | (uVar11 + uVar28 * uVar11 + uVar28 >> 5) << 0x18;
      if ((uVar27 + 1 <= uVar7 && uVar7 - (uVar27 + 1) != 0) &&
         (uVar28 = puVar9[1] >> 0x18 & 0x1f,
         puVar9[1] = puVar9[1] & 0xffffff | (uVar11 + uVar28 * uVar11 + uVar28 >> 5) << 0x18,
         uVar27 + 2 <= uVar7 && uVar7 - (uVar27 + 2) != 0)) {
        uVar27 = puVar9[2] >> 0x18 & 0x1f;
        puVar9[2] = puVar9[2] & 0xffffff | (uVar11 + uVar27 * uVar11 + uVar27 >> 5) << 0x18;
      }
    }
  }
  else {
    uVar27 = uVar11 << 0x18 | 0xffffff;
    if (uVar7 != 0) {
      if (uVar7 - 1 < 3) {
        uVar11 = 0;
        puVar9 = puVar20;
      }
      else {
        lVar8 = 0;
        do {
          uVar22 = ((undefined8 *)((long)puVar20 + lVar8))[1];
          uVar21 = *(undefined8 *)((long)puVar20 + lVar8);
          bVar24 = (byte)uVar11;
          ((undefined8 *)((long)puVar20 + lVar8))[1] =
               CONCAT17((byte)((ulong)uVar22 >> 0x38) & bVar24,
                        CONCAT16((char)((ulong)uVar22 >> 0x30),
                                 CONCAT15((char)((ulong)uVar22 >> 0x28),
                                          CONCAT14((char)((ulong)uVar22 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar22 >> 0x18) & bVar24,
                                                            (int3)uVar22)))));
          *(undefined8 *)((long)puVar20 + lVar8) =
               CONCAT17((byte)((ulong)uVar21 >> 0x38) & bVar24,
                        CONCAT16((char)((ulong)uVar21 >> 0x30),
                                 CONCAT15((char)((ulong)uVar21 >> 0x28),
                                          CONCAT14((char)((ulong)uVar21 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar21 >> 0x18) & bVar24,
                                                            (int3)uVar21)))));
          lVar8 = lVar8 + 0x10;
        } while (((ulong)((uVar7 >> 2) - 1) + 1) * 0x10 - lVar8 != 0);
        uVar11 = uVar7 & 0xfffffffc;
        puVar9 = puVar20 + (uVar17 & 0xfffffffc);
        if ((uVar7 & 3) == 0) goto LAB_0014e088;
      }
      *puVar9 = *puVar9 & uVar27;
      if ((uVar11 + 1 <= uVar7 && uVar7 - (uVar11 + 1) != 0) &&
         (puVar9[1] = puVar9[1] & uVar27, uVar11 + 2 <= uVar7 && uVar7 - (uVar11 + 2) != 0)) {
        puVar9[2] = puVar9[2] & uVar27;
      }
    }
  }
LAB_0014e088:
  if ((*(uint *)(polygon_sort_list_15121 + lVar12 + 0xe5500) >> 3 & 1) == 0) {
    render_polygon_alpha_pass_asm(puVar20,lVar3,uVar7,lVar10);
  }
  else {
    render_polygon_alpha_blend_asm(puVar20,lVar3,uVar7,lVar10);
  }
  uVar27 = uVar5 >> 0x18 & 0x3f;
  render_polygon_alpha_id_test_asm(lVar2,lVar16,lVar10,uVar7,uVar27);
  uVar5 = *param_2 >> 0xb & 1 | *param_2 >> 0xe & 2;
  if (uVar5 == 2) {
    *(undefined4 *)(param_1 + 0x24014) = 1;
    render_polygon_alpha_combine_fog_constant_asm
              (puVar20,param_11,lVar3,param_4,lVar16,uVar27,lVar10,lVar2,uVar7);
  }
  else if (uVar5 == 3) {
    *(undefined4 *)(param_1 + 0x24014) = 1;
    render_polygon_alpha_combine_depth_fog_constant_asm
              (puVar20,param_11,lVar3,param_4,lVar16,uVar27,lVar10,lVar2,uVar7);
  }
  else if (uVar5 == 1) {
    render_polygon_alpha_combine_depth_constant_asm
              (puVar20,param_11,lVar3,param_4,lVar16,uVar27,lVar10,lVar2,uVar7);
  }
  else {
    render_polygon_alpha_combine_constant_asm();
  }
  if ((param_10 != 0) && (param_9 != 0)) {
    lVar2 = (ulong)(param_9 - 1) + 1;
    lVar3 = lVar19 + ((ulong)(param_10 - 1) + 1) * 0x400;
    do {
      lVar12 = 0;
      do {
        *(uint *)(lVar19 + lVar12 * 4) = puVar20[lVar12];
        *(undefined4 *)(lVar18 + lVar12 * 4) = *(undefined4 *)(param_4 + lVar12 * 4);
        *(undefined *)(lVar15 + lVar12) = *(undefined *)(lVar16 + lVar12);
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < param_9);
      lVar19 = lVar19 + 0x400;
      puVar20 = puVar20 + lVar2;
      param_4 = param_4 + lVar2 * 4;
      lVar16 = lVar16 + lVar2;
      lVar18 = lVar18 + 0x400;
      lVar15 = lVar15 + 0x100;
    } while (lVar19 != lVar3);
  }
LAB_0014e1b0:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


