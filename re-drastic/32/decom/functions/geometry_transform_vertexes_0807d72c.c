/*
 * Ghidra decompilation
 *
 * Function : geometry_transform_vertexes
 * Address  : 0807d72c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_transform_vertexes(geometry_struct *geometry)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  u16 uVar5;
  geometry_primitive_queue_struct *primitive_queue;
  uint uVar6;
  u16 *puVar7;
  uint uVar8;
  u32 next_tag;
  u32 uVar9;
  u32 uVar10;
  s32 *psVar11;
  u32 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  s32 normal_y;
  uint uVar22;
  s32 diffuse_level;
  uint uVar23;
  u32 current_color;
  u16 *puVar24;
  u16 *puVar25;
  s32 *psVar26;
  int iVar27;
  s32 specular_level;
  u16 *color_ptr;
  u16 *puVar28;
  s32 (*pasVar29) [3];
  uint uVar30;
  u16 (*pauVar31) [3];
  ushort uVar32;
  u32 vertex_g;
  u32 next_color;
  u32 vertex_r;
  u32 uVar33;
  u32 lights;
  uint uVar34;
  u8 *puVar35;
  u8 *puVar36;
  u8 *puVar37;
  byte *pbVar38;
  ushort *puVar39;
  u32 uVar40;
  u32 uVar41;
  int iVar42;
  s32 normal_z;
  u32 vertex_b;
  u32 uVar43;
  int iVar44;
  s32 normal_x;
  u8 *input_normal_color_tag_ptr;
  u16 *input_color_ptr;
  geometry_primitive_queue_struct *primitive_queue_2;
  u16 *local_114;
  u32 *local_10c;
  ushort *local_108;
  u32 local_c8;
  ushort uStack_b6;
  u16 normal_colors [68];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if ((geometry->primitive_queue).input_vertexes != 0) {
    uVar9 = (geometry->primitive_queue).transformed_vertexes;
    if (geometry->clip_matrix_dirty != '\0') {
      geometry_matrix_multiply_4x4_by_4x4
                (geometry->clip_matrix,geometry->projection_matrix,geometry->position_matrix);
      geometry->clip_matrix_dirty = '\0';
    }
    geometry_transform_vertex_block(geometry);
    uVar10 = (geometry->primitive_queue).input_vertexes;
    local_c8 = uVar9;
    if (uVar10 != 0) {
      local_c8 = uVar9 + uVar10;
      memmove((geometry->primitive_queue).uv + uVar9,(geometry->primitive_queue).input_uv,
              uVar10 << 2);
    }
    psVar11 = (geometry->primitive_queue).input_normals;
    iVar1 = (int)(geometry->primitive_queue).input_normal_ptr - (int)psVar11 >> 2;
    if (iVar1 == 0) {
      puVar7 = (geometry->primitive_queue).input_colors;
      puVar35 = (geometry->primitive_queue).input_normal_color_tags;
      next_color = (geometry->primitive_queue).vertex_color;
      iVar1 = (int)(geometry->primitive_queue).input_color_ptr - (int)puVar7 >> 1;
      puVar28 = (geometry->primitive_queue).color + (geometry->primitive_queue).transformed_vertexes
      ;
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar9 = next_color;
        puVar36 = puVar35;
        uVar22 = 0;
        do {
          puVar37 = puVar36 + 1;
          next_color = (u32)*puVar7;
          uVar6 = *puVar36 & 0x7f;
          uVar22 = uVar6 - uVar22;
          if (uVar22 != 0) {
            uVar5 = (u16)uVar9;
            uVar34 = -((uint)((int)puVar28 << 0x1d) >> 0x1e) & 7;
            if (uVar22 <= uVar34) {
              uVar34 = uVar22;
            }
            uVar30 = uVar22;
            if ((uVar22 < 0xb) || (puVar24 = puVar28, uVar30 = uVar34, uVar34 != 0)) {
              puVar24 = puVar28 + 1;
              *puVar28 = uVar5;
              uVar34 = uVar30;
              if (uVar30 != 1) {
                puVar24 = puVar28 + 2;
                puVar28[1] = uVar5;
                if (uVar30 != 2) {
                  puVar24 = puVar28 + 3;
                  puVar28[2] = uVar5;
                  if (uVar30 != 3) {
                    puVar24 = puVar28 + 4;
                    puVar28[3] = uVar5;
                    if (uVar30 != 4) {
                      puVar24 = puVar28 + 5;
                      puVar28[4] = uVar5;
                      if (uVar30 != 5) {
                        puVar24 = puVar28 + 6;
                        puVar28[5] = uVar5;
                        if (uVar30 != 6) {
                          puVar24 = puVar28 + 7;
                          puVar28[6] = uVar5;
                          if (uVar30 != 7) {
                            puVar24 = puVar28 + 8;
                            puVar28[7] = uVar5;
                            if (uVar30 != 8) {
                              puVar24 = puVar28 + 9;
                              puVar28[8] = uVar5;
                              if (uVar30 == 10) {
                                puVar24 = puVar28 + 10;
                                puVar28[9] = uVar5;
                              }
                              else {
                                uVar34 = 9;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (uVar22 != uVar30) goto LAB_0807de28;
            }
            else {
LAB_0807de28:
              uVar23 = ((uVar22 - uVar30) - 8 >> 3) + 1;
              if (6 < (uVar22 - 1) - uVar30) {
                uVar8 = 0;
                puVar25 = puVar28 + uVar30;
                do {
                  uVar8 = uVar8 + 1;
                  *(undefined8 *)puVar25 = 0;
                  *(undefined8 *)(puVar25 + 4) = 0;
                  puVar25 = puVar25 + 8;
                } while (uVar8 < uVar23);
                puVar24 = puVar24 + uVar23 * 8;
                uVar34 = uVar34 + uVar23 * 8;
                if (uVar23 * 8 - (uVar22 - uVar30) == 0) goto LAB_0807dee0;
              }
              *puVar24 = uVar5;
              if ((((uVar34 + 1 < uVar22) && (puVar24[1] = uVar5, uVar34 + 2 < uVar22)) &&
                  (puVar24[2] = uVar5, uVar34 + 3 < uVar22)) &&
                 (((puVar24[3] = uVar5, uVar34 + 4 < uVar22 &&
                   (puVar24[4] = uVar5, uVar34 + 5 < uVar22)) &&
                  (puVar24[5] = uVar5, uVar34 + 6 < uVar22)))) {
                puVar24[6] = uVar5;
              }
            }
LAB_0807dee0:
            puVar28 = puVar28 + uVar22;
          }
          uVar9 = next_color;
          puVar36 = puVar37;
          puVar7 = puVar7 + 1;
          uVar22 = uVar6;
        } while (puVar37 != puVar35 + iVar1);
      }
    }
    else {
      local_10c = &(geometry->primitive_queue).vertex_tag;
      local_108 = &uStack_b6;
      uVar40 = geometry->base_color_cache[0];
      psVar26 = geometry->direction_matrix;
      uVar9 = geometry->base_color_cache[1];
      uVar12 = geometry->base_color_cache[2];
      iVar13 = *psVar26;
      iVar14 = psVar26[1];
      iVar15 = psVar26[2];
      iVar16 = psVar26[4];
      iVar17 = psVar26[5];
      iVar18 = psVar26[6];
      iVar19 = psVar26[8];
      iVar20 = psVar26[9];
      iVar27 = psVar26[10];
      bVar2 = geometry->active_lights;
      do {
        local_10c = local_10c + 1;
        uVar41 = *local_10c;
        iVar21 = (int)(uVar41 << 0xc) >> 0x16;
        iVar44 = (int)(uVar41 << 0x16) >> 0x16;
        iVar42 = (int)(uVar41 << 2) >> 0x16;
        lVar3 = (longlong)iVar42 * (longlong)iVar19 +
                (longlong)iVar44 * (longlong)iVar13 + (longlong)iVar21 * (longlong)iVar16;
        lVar4 = (longlong)iVar42 * (longlong)iVar20 +
                (longlong)iVar44 * (longlong)iVar14 + (longlong)iVar21 * (longlong)iVar17;
        uVar6 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
        lVar3 = (longlong)iVar42 * (longlong)iVar27 +
                (longlong)iVar44 * (longlong)iVar15 + (longlong)iVar21 * (longlong)iVar18;
        uVar34 = (uint)lVar4 >> 0xc | (int)((ulonglong)lVar4 >> 0x20) << 0x14;
        uVar22 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
        uVar41 = uVar9;
        uVar33 = uVar40;
        uVar43 = uVar12;
        if (bVar2 != 0) {
          pauVar31 = geometry->diffuse_light_cache;
          pasVar29 = geometry->light_coordinates;
          uVar30 = (uint)bVar2;
          do {
            if ((uVar30 & 1) != 0) {
              uVar23 = ((int)((*pasVar29)[1] * uVar34) >> 9) + ((int)((*pasVar29)[0] * uVar6) >> 9)
                       + ((int)((*pasVar29)[2] * uVar22) >> 9);
              iVar21 = ((int)(pasVar29[4][1] * uVar34) >> 9) + ((int)(pasVar29[4][0] * uVar6) >> 9)
                       + ((int)(pasVar29[4][2] * uVar22) >> 9);
              uVar23 = uVar23 & ~((int)uVar23 >> 0x1f);
              if (iVar21 < 0) {
                uVar8 = (uint)geometry->use_shininess_table;
                if (uVar8 != 0) {
                  iVar21 = 0;
LAB_0807d948:
                  uVar8 = (uint)geometry->shininess_table[iVar21] << 1;
                }
              }
              else {
                uVar8 = iVar21 * iVar21 >> 9;
                if (geometry->use_shininess_table != '\0') {
                  iVar21 = iVar21 * iVar21 >> 0xb;
                  if (0x7e < iVar21) {
                    iVar21 = 0x7f;
                  }
                  goto LAB_0807d948;
                }
              }
              uVar33 = uVar8 * pauVar31[4][0] + uVar23 * (*pauVar31)[0] + uVar33;
              uVar41 = uVar8 * pauVar31[4][1] + uVar23 * (*pauVar31)[1] + uVar41;
              uVar43 = uVar8 * pauVar31[4][2] + uVar23 * (*pauVar31)[2] + uVar43;
            }
            uVar30 = uVar30 >> 1;
            pauVar31 = pauVar31 + 1;
            pasVar29 = pasVar29 + 1;
          } while (uVar30 != 0);
        }
        uVar6 = uVar41 >> 0xe;
        uVar22 = uVar43 >> 0xe;
        if (0x1e < uVar6) {
          uVar6 = 0x1f;
        }
        if (0x1e < uVar22) {
          uVar22 = 0x1f;
        }
        uVar32 = (ushort)(uVar22 << 10) | (ushort)(uVar6 << 5);
        if (uVar33 >> 0xe < 0x20) {
          uVar32 = uVar32 | (ushort)(uVar33 >> 0xe);
        }
        else {
          uVar32 = uVar32 | 0x1f;
        }
        local_108 = local_108 + 1;
        *local_108 = uVar32;
      } while (local_10c != (u32 *)((geometry->primitive_queue).input_normals + iVar1 + -1));
      puVar35 = (geometry->primitive_queue).input_normal_color_tags;
      local_10c = (u32 *)(geometry->primitive_queue).input_colors;
      next_color = (geometry->primitive_queue).vertex_color;
      puVar28 = (geometry->primitive_queue).color + (geometry->primitive_queue).transformed_vertexes
      ;
      if ((int)(geometry->primitive_queue).input_color_ptr - (int)local_10c >> 1 == 0) {
        uVar22 = 0;
        uVar9 = next_color;
        puVar36 = puVar35;
        puVar39 = normal_colors;
        do {
          puVar37 = puVar36 + 1;
          uVar6 = (uint)*puVar36;
          next_color = (u32)*puVar39;
          uVar22 = uVar6 - uVar22;
          if (uVar22 != 0) {
            uVar34 = -((uint)((int)puVar28 << 0x1d) >> 0x1e) & 7;
            if (uVar22 <= uVar34) {
              uVar34 = uVar22;
            }
            if (uVar22 < 0xb) {
              uVar34 = uVar22;
            }
            uVar5 = (u16)uVar9;
            uVar30 = uVar34;
            if ((uVar22 < 0xb) || (puVar7 = puVar28, uVar34 != 0)) {
              puVar7 = puVar28 + 1;
              *puVar28 = uVar5;
              if (uVar34 != 1) {
                puVar7 = puVar28 + 2;
                puVar28[1] = uVar5;
                if (uVar34 != 2) {
                  puVar7 = puVar28 + 3;
                  puVar28[2] = uVar5;
                  if (uVar34 != 3) {
                    puVar7 = puVar28 + 4;
                    puVar28[3] = uVar5;
                    if (uVar34 != 4) {
                      puVar7 = puVar28 + 5;
                      puVar28[4] = uVar5;
                      if (uVar34 != 5) {
                        puVar7 = puVar28 + 6;
                        puVar28[5] = uVar5;
                        if (uVar34 != 6) {
                          puVar7 = puVar28 + 7;
                          puVar28[6] = uVar5;
                          if (uVar34 != 7) {
                            puVar7 = puVar28 + 8;
                            puVar28[7] = uVar5;
                            if (uVar34 != 8) {
                              puVar7 = puVar28 + 9;
                              puVar28[8] = uVar5;
                              if (uVar34 == 10) {
                                puVar7 = puVar28 + 10;
                                puVar28[9] = uVar5;
                              }
                              else {
                                uVar30 = 9;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (uVar22 != uVar34) goto LAB_0807e210;
            }
            else {
LAB_0807e210:
              uVar23 = ((uVar22 - uVar34) - 8 >> 3) + 1;
              if (6 < (uVar22 - 1) - uVar34) {
                uVar34 = 0;
                puVar24 = puVar28 + uVar34;
                do {
                  uVar34 = uVar34 + 1;
                  *(undefined8 *)puVar24 = 0;
                  *(undefined8 *)(puVar24 + 4) = 0;
                  puVar24 = puVar24 + 8;
                } while (uVar34 < uVar23);
                puVar7 = puVar7 + uVar23 * 8;
                uVar30 = uVar30 + uVar23 * 8;
                if (uVar23 * 8 - (uVar22 - uVar34) == 0) goto LAB_0807e2c8;
              }
              *puVar7 = uVar5;
              if (((((uVar30 + 1 < uVar22) && (puVar7[1] = uVar5, uVar30 + 2 < uVar22)) &&
                   (puVar7[2] = uVar5, uVar30 + 3 < uVar22)) &&
                  ((puVar7[3] = uVar5, uVar30 + 4 < uVar22 &&
                   (puVar7[4] = uVar5, uVar30 + 5 < uVar22)))) &&
                 (puVar7[5] = uVar5, uVar30 + 6 < uVar22)) {
                puVar7[6] = uVar5;
              }
            }
LAB_0807e2c8:
            puVar28 = puVar28 + uVar22;
          }
          uVar22 = uVar6;
          uVar9 = next_color;
          puVar36 = puVar37;
          puVar39 = puVar39 + 1;
        } while (puVar37 != puVar35 + iVar1);
      }
      else {
        pbVar38 = (geometry->primitive_queue).input_normal_color_tag_ptr;
        if (pbVar38 != puVar35) {
          uVar6 = 0;
          primitive_queue_2 = (geometry_primitive_queue_struct *)normal_colors;
          puVar36 = (geometry->primitive_queue).input_normal_color_tags + 1;
          uVar22 = (uint)*puVar35;
          if ((*puVar35 & 0x80) == 0) goto LAB_0807dcac;
LAB_0807daf4:
          uVar32 = *(ushort *)local_10c;
          uVar34 = uVar6;
          uVar9 = next_color;
          puVar35 = puVar36;
          local_10c = (u32 *)((int)local_10c + 2);
          do {
            next_color = (u32)uVar32;
            uVar6 = uVar22 & 0x7f;
            uVar34 = uVar6 - uVar34;
            if (uVar34 != 0) {
              uVar22 = -((uint)((int)puVar28 << 0x1d) >> 0x1e) & 7;
              if (uVar34 <= uVar22) {
                uVar22 = uVar34;
              }
              if (uVar34 < 0xb) {
                uVar22 = uVar34;
              }
              uVar5 = (u16)uVar9;
              uVar30 = uVar22;
              if ((uVar34 < 0xb) || (puVar7 = puVar28, uVar22 != 0)) {
                puVar7 = puVar28 + 1;
                *puVar28 = uVar5;
                if (uVar22 != 1) {
                  puVar7 = puVar28 + 2;
                  puVar28[1] = uVar5;
                  if (uVar22 != 2) {
                    puVar7 = puVar28 + 3;
                    puVar28[2] = uVar5;
                    if (uVar22 != 3) {
                      puVar7 = puVar28 + 4;
                      puVar28[3] = uVar5;
                      if (uVar22 != 4) {
                        puVar7 = puVar28 + 5;
                        puVar28[4] = uVar5;
                        if (uVar22 != 5) {
                          puVar7 = puVar28 + 6;
                          puVar28[5] = uVar5;
                          if (uVar22 != 6) {
                            puVar7 = puVar28 + 7;
                            puVar28[6] = uVar5;
                            if (uVar22 != 7) {
                              puVar7 = puVar28 + 8;
                              puVar28[7] = uVar5;
                              if (uVar22 != 8) {
                                puVar7 = puVar28 + 9;
                                puVar28[8] = uVar5;
                                if (uVar22 == 10) {
                                  puVar7 = puVar28 + 10;
                                  puVar28[9] = uVar5;
                                }
                                else {
                                  uVar30 = 9;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar34 != uVar22) goto LAB_0807dbd4;
              }
              else {
LAB_0807dbd4:
                uVar23 = ((uVar34 - uVar22) - 8 >> 3) + 1;
                if (6 < (uVar34 - 1) - uVar22) {
                  uVar22 = 0;
                  puVar24 = puVar28 + uVar22;
                  do {
                    uVar22 = uVar22 + 1;
                    *(undefined8 *)puVar24 = 0;
                    *(undefined8 *)(puVar24 + 4) = 0;
                    puVar24 = puVar24 + 8;
                  } while (uVar22 < uVar23);
                  puVar7 = puVar7 + uVar23 * 8;
                  uVar30 = uVar30 + uVar23 * 8;
                  if (uVar23 * 8 - (uVar34 - uVar22) == 0) goto LAB_0807dc8c;
                }
                *puVar7 = uVar5;
                if ((((uVar30 + 1 < uVar34) && (puVar7[1] = uVar5, uVar30 + 2 < uVar34)) &&
                    (puVar7[2] = uVar5, uVar30 + 3 < uVar34)) &&
                   (((puVar7[3] = uVar5, uVar30 + 4 < uVar34 &&
                     (puVar7[4] = uVar5, uVar30 + 5 < uVar34)) &&
                    (puVar7[5] = uVar5, uVar30 + 6 < uVar34)))) {
                  puVar7[6] = uVar5;
                }
              }
LAB_0807dc8c:
              puVar28 = puVar28 + uVar34;
            }
            if (pbVar38 == puVar35) goto LAB_0807def8;
            puVar36 = puVar35 + 1;
            uVar22 = (uint)*puVar35;
            if ((*puVar35 & 0x80) != 0) goto LAB_0807daf4;
LAB_0807dcac:
            uVar32 = *(ushort *)primitive_queue_2->input_x;
            uVar34 = uVar6;
            uVar9 = next_color;
            puVar35 = puVar36;
            primitive_queue_2 =
                 (geometry_primitive_queue_struct *)((int)primitive_queue_2->input_x + 2);
          } while( true );
        }
        uVar6 = 0;
      }
    }
LAB_0807def8:
    local_114 = (geometry->primitive_queue).input_colors;
    input_color_ptr = (u16 *)(geometry->primitive_queue).input_normal_color_tags;
    uVar6 = uVar10 - uVar6;
    if (uVar6 != 0) {
      uVar5 = (u16)next_color;
      uVar22 = -((uint)((int)puVar28 << 0x1d) >> 0x1e) & 7;
      if (uVar6 <= uVar22) {
        uVar22 = uVar6;
      }
      uVar34 = uVar6;
      if ((uVar6 < 0xb) || (puVar7 = puVar28, uVar34 = uVar22, uVar22 != 0)) {
        puVar7 = puVar28 + 1;
        *puVar28 = uVar5;
        uVar22 = uVar34;
        if (uVar34 != 1) {
          puVar7 = puVar28 + 2;
          puVar28[1] = uVar5;
          if (uVar34 != 2) {
            puVar7 = puVar28 + 3;
            puVar28[2] = uVar5;
            if (uVar34 != 3) {
              puVar7 = puVar28 + 4;
              puVar28[3] = uVar5;
              if (uVar34 != 4) {
                puVar7 = puVar28 + 5;
                puVar28[4] = uVar5;
                if (uVar34 != 5) {
                  puVar7 = puVar28 + 6;
                  puVar28[5] = uVar5;
                  if (uVar34 != 6) {
                    puVar7 = puVar28 + 7;
                    puVar28[6] = uVar5;
                    if (uVar34 != 7) {
                      puVar7 = puVar28 + 8;
                      puVar28[7] = uVar5;
                      if (uVar34 != 8) {
                        puVar7 = puVar28 + 9;
                        puVar28[8] = uVar5;
                        if (uVar34 == 10) {
                          puVar7 = puVar28 + 10;
                          puVar28[9] = uVar5;
                        }
                        else {
                          uVar22 = 9;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (uVar6 == uVar34) goto LAB_0807e084;
      }
      uVar30 = ((uVar6 - uVar34) - 8 >> 3) + 1;
      if (6 < (uVar6 - 1) - uVar34) {
        uVar23 = 0;
        puVar28 = puVar28 + uVar34;
        do {
          uVar23 = uVar23 + 1;
          *(undefined8 *)puVar28 = 0;
          *(undefined8 *)(puVar28 + 4) = 0;
          puVar28 = puVar28 + 8;
        } while (uVar23 < uVar30);
        puVar7 = puVar7 + uVar30 * 8;
        uVar22 = uVar22 + uVar30 * 8;
        if (uVar30 * 8 - (uVar6 - uVar34) == 0) goto LAB_0807e084;
      }
      *puVar7 = uVar5;
      if (((((uVar22 + 1 < uVar6) && (puVar7[1] = uVar5, uVar22 + 2 < uVar6)) &&
           (puVar7[2] = uVar5, uVar22 + 3 < uVar6)) &&
          ((puVar7[3] = uVar5, uVar22 + 4 < uVar6 && (puVar7[4] = uVar5, uVar22 + 5 < uVar6)))) &&
         (puVar7[5] = uVar5, uVar22 + 6 < uVar6)) {
        puVar7[6] = uVar5;
      }
    }
LAB_0807e084:
    (geometry->primitive_queue).input_vertexes = 0;
    (geometry->primitive_queue).input_normal_color_tag = 0xff;
    (geometry->primitive_queue).input_normal_ptr = psVar11;
    (geometry->primitive_queue).transformed_vertexes = local_c8;
    (geometry->primitive_queue).input_color_ptr = local_114;
    (geometry->primitive_queue).input_normal_color_tag_ptr = (u8 *)input_color_ptr;
    (geometry->primitive_queue).vertex_color = next_color;
    if (0x7f < local_c8) {
      if (local_2c == __stack_chk_guard) {
        geometry_flush_polygons(geometry);
        return;
      }
      goto LAB_0807e378;
    }
  }
  if (local_2c == __stack_chk_guard) {
    return;
  }
LAB_0807e378:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


