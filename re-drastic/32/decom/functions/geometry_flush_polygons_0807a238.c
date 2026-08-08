/*
 * Ghidra decompilation
 *
 * Function : geometry_flush_polygons
 * Address  : 0807a238
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Variable defined which should be unmapped: next_polygon_batch */
/* WARNING: Variable defined which should be unmapped: polygon_count_2 */
/* WARNING: Unknown calling convention */

void geometry_flush_polygons(geometry_struct *geometry)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  byte bVar4;
  u8 uVar5;
  u16 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  short sVar9;
  geometry_polygon_list_struct *pgVar10;
  geometry_polygon_batch_struct *pgVar11;
  geometry_texture_data_struct *pgVar12;
  undefined uVar13;
  byte bVar14;
  u8 *clip_codes;
  u8 *puVar15;
  u32 *w_reciprocals;
  s32 *psVar16;
  u32 texture_image_param;
  u32 texture_image_param_1;
  s32 *spill_coordinates;
  u32 current_uv;
  u32 current_uv_1;
  undefined (*pauVar17) [16];
  s32 *base_coordinates_2;
  s32 *spill_coordinates_2;
  s32 *spill_coordinates_3;
  s32 *spill_coordinates_6;
  s32 *spill_coordinates_1;
  s32 *base_coordinates_6;
  uint uVar18;
  u32 clip_all_new;
  u8 *aligned_storage;
  s32 *psVar19;
  u32 polygon_attribute_1;
  u32 polygon_attribute_2;
  s32 *base_coordinates;
  geometry_clipped_vertex_struct *pgVar20;
  geometry_texture_data_struct *pgVar21;
  geometry_polygon_list_struct *polygon_list_2;
  u32 i;
  geometry_polygon_list_struct *polygon_list_3;
  u32 i_1;
  s32 *base_coordinates_3;
  s32 *spill_coordinates_5;
  s32 *base_coordinates_1;
  s32 *spill_coordinates_8;
  byte bVar22;
  ushort uVar23;
  u32 uVar24;
  uint uVar25;
  u8 *clip_codes_1;
  u32 clip_all_new_1;
  u32 vertex_base;
  s32 *psVar26;
  u32 vertex_index_2;
  s32 submit_polygons;
  u32 vertex_index_4;
  s32 submit_polygons_1;
  u32 uVar27;
  geometry_vertex_struct *pgVar28;
  s32 *spill_coordinates_4;
  s32 *base_coordinates_5;
  s32 *spill_coordinates_7;
  byte bVar29;
  uint uVar30;
  uint uVar31;
  s32 polygon_count;
  u32 clip_a;
  u32 clip_a_1;
  u8 *clip_codes_2;
  u8 *clip_codes_3;
  u32 *puVar32;
  u32 *puVar33;
  s32 *psVar34;
  int iVar36;
  u32 clip_code_a;
  geometry_polygon_list_struct *polygon_list;
  u32 clip_code_a_1;
  geometry_polygon_list_struct *polygon_list_1;
  u32 vertex_spill_offset;
  u32 texture_data_count;
  u32 uVar37;
  geometry_clipped_vertex_struct *clipped_vertex;
  undefined *puVar38;
  geometry_clipped_vertex_struct *clipped_vertex_1;
  int iVar39;
  u32 vertex_spill_offset_2;
  u32 vertex_spill_offset_3;
  u32 vertex_spill_offset_4;
  u32 vertex_spill_offset_5;
  u32 vertex_spill_offset_6;
  u32 vertex_spill_offset_1;
  u32 vertex_spill_offset_7;
  u32 vertex_spill_offset_8;
  uint uVar40;
  u32 face_mask;
  int iVar41;
  geometry_vertex_struct *vertex;
  geometry_clipped_vertex_struct *pgVar42;
  geometry_clipped_vertex_struct *pgVar43;
  u32 vertex_index_1;
  byte *pbVar44;
  byte *pbVar45;
  u32 uVar46;
  geometry_clipped_vertex_struct *pgVar47;
  geometry_clipped_vertex_struct *unaff_r6;
  u32 clip_b;
  geometry_clipped_vertex_struct *pgVar48;
  u32 face_mask_flip;
  s32 sVar49;
  byte *pbVar50;
  u8 *puVar51;
  s32 sVar52;
  u32 vertex_index;
  u32 vertex_index_3;
  u32 vertex_index_5;
  u32 uVar53;
  geometry_clipped_vertex_struct *clipped_vertexes_temp;
  geometry_clipped_vertex_struct *pgVar54;
  geometry_clipped_vertex_struct *clipped_vertexes_temp_1;
  geometry_primitive_queue_struct *primitive_queue;
  u32 *polygon_attribute;
  geometry_primitive_queue_struct *primitive_queue_5;
  geometry_primitive_queue_struct *primitive_queue_1;
  geometry_primitive_queue_struct *primitive_queue_2;
  geometry_primitive_queue_struct *primitive_queue_6;
  geometry_primitive_queue_struct *primitive_queue_3;
  geometry_primitive_queue_struct *primitive_queue_4;
  geometry_primitive_queue_struct *primitive_queue_8;
  geometry_primitive_queue_struct *primitive_queue_9;
  geometry_primitive_queue_struct *primitive_queue_10;
  geometry_primitive_queue_struct *primitive_queue_11;
  geometry_primitive_queue_struct *primitive_queue_12;
  geometry_primitive_queue_struct *primitive_queue_7;
  geometry_primitive_queue_struct *primitive_queue_13;
  geometry_primitive_queue_struct *primitive_queue_14;
  u32 clip_c;
  u32 clip_c_1;
  int iVar55;
  geometry_clipped_vertex_struct *pgVar56;
  u32 uVar57;
  s32 *base_coordinates_4;
  byte bVar58;
  u32 clip_d;
  u32 clip_b_1;
  s32 sVar59;
  geometry_clipped_vertex_struct *pgVar60;
  u32 uVar61;
  bool bVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  geometry_polygon_batch_struct *next_polygon_batch;
  geometry_polygon_batch_struct *in_stack_ffffc494;
  u32 polygon_count_2;
  u32 local_3b64;
  uint local_3b60;
  uint local_3b5c;
  int local_3b58;
  geometry_polygon_batch_struct *local_3b54;
  s32 polygon_count_1;
  u8 *local_3b4c;
  u8 *local_3b40;
  geometry_clipped_vertex_struct *clipped_vertexes_out_1;
  uint local_3b34;
  geometry_clipped_vertex_struct *local_3b30;
  s32 *local_3b2c;
  s32 *local_3b28;
  u32 *local_3b10;
  geometry_clipped_vertex_struct clipped_vertexes_a [16];
  geometry_polygon_batch_struct polygon_split_batches [192];
  geometry_clipped_vertex_struct clipped_vertexes_b [16];
  u8 clip_any [192];
  u8 face_codes [192];
  u8 cull_polygons [192];
  int local_3c;
  s32 *psVar35;
  
  uVar24 = (geometry->primitive_queue).polygon_batch_count;
  local_3c = __stack_chk_guard;
  (geometry->primitive_queue).polygon_batches[uVar24].vertex_base =
       (u8)(geometry->primitive_queue).transformed_vertexes;
  if (uVar24 == 0) {
    (geometry->primitive_queue).texture_data_offset = 0;
    (geometry->primitive_queue).texture_data[(geometry->primitive_queue).texture_data_count].
    vertex_tag = 0xff;
    (geometry->primitive_queue).submit_index = 0;
    local_3b5c = 0;
LAB_0807d544:
    uVar46 = 0;
  }
  else {
    polygon_attribute = &(geometry->primitive_queue).polygon_batches[0].attribute;
    local_3b54 = polygon_split_batches;
    puVar32 = &(geometry->primitive_queue).batch_splits_strip;
    local_3b64 = 0;
    pgVar11 = (geometry->primitive_queue).polygon_batches;
    do {
      polygon_count_2 = (u32)(pgVar11 + 1);
      uVar30 = (uint)*(byte *)((int)polygon_attribute + 5);
      uVar40 = (*polygon_attribute << 0x18) >> 0x1e;
      local_3b5c = pgVar11[1].vertex_base - uVar30;
      switch(*(undefined *)(polygon_attribute + 1)) {
      case 0:
        puVar15 = (geometry->primitive_queue).clip_codes + uVar30;
        uVar31 = local_3b5c / 3 & 0xff;
        *(char *)((int)polygon_attribute + 6) = (char)(local_3b5c / 3);
        if (uVar31 != 0) {
          if (0xe < uVar31 - 1) {
            SIMDExpandImmediate(0,0xe,0xff);
            SIMDExpandImmediate(0,0xe,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
            halt_unimplemented();
          }
          cull_polygons[0] = *puVar15 & puVar15[1] & puVar15[2];
          clip_any[0] = puVar15[2] | *puVar15 | puVar15[1];
          unaff_r6 = (geometry_clipped_vertex_struct *)&stack0xffffffc8;
          bVar62 = cull_polygons[0] != 0;
          if (1 < uVar31) {
            cull_polygons[1] = puVar15[3] & puVar15[4] & puVar15[5];
            unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[1];
            clip_any[1] = puVar15[5] | puVar15[3] | puVar15[4];
            bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62;
            if (2 < uVar31) {
              cull_polygons[2] = puVar15[6] & puVar15[7] & puVar15[8];
              unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[2];
              clip_any[2] = puVar15[8] | puVar15[6] | puVar15[7];
              bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62;
              if (3 < uVar31) {
                cull_polygons[3] = puVar15[9] & puVar15[10] & puVar15[0xb];
                unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[3];
                clip_any[3] = puVar15[0xb] | puVar15[9] | puVar15[10];
                bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62;
                if (4 < uVar31) {
                  cull_polygons[4] = puVar15[0xc] & puVar15[0xd] & puVar15[0xe];
                  unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[4];
                  clip_any[4] = puVar15[0xe] | puVar15[0xc] | puVar15[0xd];
                  bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62;
                  if (5 < uVar31) {
                    cull_polygons[5] = puVar15[0xf] & puVar15[0x10] & puVar15[0x11];
                    unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[5];
                    clip_any[5] = puVar15[0x11] | puVar15[0xf] | puVar15[0x10];
                    bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62;
                    if (6 < uVar31) {
                      cull_polygons[6] = puVar15[0x12] & puVar15[0x13] & puVar15[0x14];
                      unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[6];
                      clip_any[6] = puVar15[0x14] | puVar15[0x12] | puVar15[0x13];
                      bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62;
                      if (7 < uVar31) {
                        cull_polygons[7] = puVar15[0x15] & puVar15[0x16] & puVar15[0x17];
                        unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[7];
                        clip_any[7] = puVar15[0x17] | puVar15[0x15] | puVar15[0x16];
                        bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62;
                        if (8 < uVar31) {
                          cull_polygons[8] = puVar15[0x18] & puVar15[0x19] & puVar15[0x1a];
                          unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[8];
                          clip_any[8] = puVar15[0x1a] | puVar15[0x18] | puVar15[0x19];
                          bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62;
                          if (9 < uVar31) {
                            cull_polygons[9] = puVar15[0x1b] & puVar15[0x1c] & puVar15[0x1d];
                            unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[9];
                            clip_any[9] = puVar15[0x1d] | puVar15[0x1b] | puVar15[0x1c];
                            bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62;
                            if (10 < uVar31) {
                              cull_polygons[10] = puVar15[0x1e] & puVar15[0x1f] & puVar15[0x20];
                              unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[10];
                              clip_any[10] = puVar15[0x20] | puVar15[0x1e] | puVar15[0x1f];
                              bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62;
                              if (0xb < uVar31) {
                                cull_polygons[11] = puVar15[0x21] & puVar15[0x22] & puVar15[0x23];
                                unaff_r6 = (geometry_clipped_vertex_struct *)(uint)cull_polygons[11]
                                ;
                                clip_any[11] = puVar15[0x23] | puVar15[0x21] | puVar15[0x22];
                                bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 && bVar62
                                ;
                                if (0xc < uVar31) {
                                  cull_polygons[12] = puVar15[0x24] & puVar15[0x25] & puVar15[0x26];
                                  unaff_r6 = (geometry_clipped_vertex_struct *)
                                             (uint)cull_polygons[12];
                                  clip_any[12] = puVar15[0x26] | puVar15[0x24] | puVar15[0x25];
                                  bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 &&
                                           bVar62;
                                  if (0xd < uVar31) {
                                    cull_polygons[13] =
                                         puVar15[0x27] & puVar15[0x28] & puVar15[0x29];
                                    unaff_r6 = (geometry_clipped_vertex_struct *)
                                               (uint)cull_polygons[13];
                                    clip_any[13] = puVar15[0x29] | puVar15[0x27] | puVar15[0x28];
                                    bVar62 = unaff_r6 != (geometry_clipped_vertex_struct *)0x0 &&
                                             bVar62;
                                    if (0xe < uVar31) {
                                      cull_polygons[14] =
                                           puVar15[0x2b] & puVar15[0x2a] & puVar15[0x2c];
                                      clip_any[14] = puVar15[0x2c] | puVar15[0x2b] | puVar15[0x2a];
                                      bVar62 = cull_polygons[14] != 0 && bVar62;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (!bVar62) {
            if (uVar40 != 3) {
              unaff_r6 = (geometry_clipped_vertex_struct *)face_codes;
              geometry_backface_test
                        ((geometry->primitive_queue).transformed_coordinates + uVar30 * 4,uVar31,
                         0x30,0x10,unaff_r6);
              uVar30 = (uint)*(byte *)((int)polygon_attribute + 6);
              if (uVar30 != 0) {
                uVar25 = (uVar30 - 0x10 >> 4) + 1;
                uVar31 = uVar25 * 0x10;
                if (uVar30 - 1 < 0xf) {
                  uVar31 = 0;
                }
                else {
                  auVar3._4_4_ = uVar40;
                  auVar3._0_4_ = uVar40;
                  auVar3._8_8_ = 0;
                  auVar3 = auVar3 & auVar3 << 0x40;
                  auVar1 = ZEXT816(0);
                  auVar2 = SIMDExpandImmediate(0,0,1);
                  uVar18 = 0;
                  pauVar17 = (undefined (*) [16])cull_polygons;
                  do {
                    psVar34 = unaff_r6->coordinates;
                    uVar18 = uVar18 + 1;
                    unaff_r6 = (geometry_clipped_vertex_struct *)&unaff_r6->uv;
                    auVar65 = VectorCopyLong(SUB168(*(undefined (*) [16])psVar34,0),1,1);
                    auVar66 = VectorCopyLong(SUB168(*(undefined (*) [16])psVar34,8),1,1);
                    auVar72 = VectorCopyLong(auVar65._0_8_,2,1);
                    auVar69 = VectorCopyLong(auVar66._0_8_,2,1);
                    auVar65 = VectorCopyLong(auVar65._8_8_,2,1);
                    auVar66 = VectorCopyLong(auVar66._8_8_,2,1);
                    auVar72 = VectorCompareEqual(auVar72 & auVar3,auVar1,4);
                    auVar69 = VectorCompareEqual(auVar69 & auVar3,auVar1,4);
                    auVar65 = VectorCompareEqual(auVar65 & auVar3,auVar1,4);
                    auVar66 = VectorCompareEqual(auVar66 & auVar3,auVar1,4);
                    auVar72 = VectorBitwiseSelect(auVar72,auVar2,auVar1);
                    auVar69 = VectorBitwiseSelect(auVar69,auVar2,auVar1);
                    auVar65 = VectorBitwiseSelect(auVar65,auVar2,auVar1);
                    auVar66 = VectorBitwiseSelect(auVar66,auVar2,auVar1);
                    uVar63 = VectorCopyNarrow(auVar72,4);
                    uVar64 = VectorCopyNarrow(auVar65,4);
                    auVar71._0_8_ = VectorCopyNarrow(auVar69,4);
                    auVar71._8_8_ = VectorCopyNarrow(auVar66,4);
                    auVar8._8_8_ = uVar64;
                    auVar8._0_8_ = uVar63;
                    auVar68._0_8_ = VectorCopyNarrow(auVar8,2);
                    auVar68._8_8_ = VectorCopyNarrow(auVar71,2);
                    *(longlong *)*pauVar17 = SUB168(auVar68 | *pauVar17,0);
                    *(longlong *)(*pauVar17 + 8) = SUB168(auVar68 | *pauVar17,8);
                    pauVar17 = pauVar17 + 1;
                  } while (uVar18 < uVar25);
                  if (uVar30 == uVar31) goto LAB_0807acd4;
                }
                bVar14 = cull_polygons[uVar31];
                if ((face_codes[uVar31] & uVar40) == 0) {
                  bVar14 = bVar14 | 1;
                }
                cull_polygons[uVar31] = bVar14;
                if (uVar31 + 1 < uVar30) {
                  bVar14 = cull_polygons[uVar31 + 1];
                  if ((face_codes[uVar31 + 1] & uVar40) == 0) {
                    bVar14 = bVar14 | 1;
                  }
                  cull_polygons[uVar31 + 1] = bVar14;
                  if (uVar31 + 2 < uVar30) {
                    bVar14 = cull_polygons[uVar31 + 2];
                    if ((face_codes[uVar31 + 2] & uVar40) == 0) {
                      bVar14 = bVar14 | 1;
                    }
                    cull_polygons[uVar31 + 2] = bVar14;
                    if (uVar31 + 3 < uVar30) {
                      bVar14 = cull_polygons[uVar31 + 3];
                      if ((face_codes[uVar31 + 3] & uVar40) == 0) {
                        bVar14 = bVar14 | 1;
                      }
                      cull_polygons[uVar31 + 3] = bVar14;
                      if (uVar31 + 4 < uVar30) {
                        bVar14 = cull_polygons[uVar31 + 4];
                        if ((face_codes[uVar31 + 4] & uVar40) == 0) {
                          bVar14 = bVar14 | 1;
                        }
                        cull_polygons[uVar31 + 4] = bVar14;
                        if (uVar31 + 5 < uVar30) {
                          bVar14 = cull_polygons[uVar31 + 5];
                          if ((face_codes[uVar31 + 5] & uVar40) == 0) {
                            bVar14 = bVar14 | 1;
                          }
                          cull_polygons[uVar31 + 5] = bVar14;
                          if (uVar31 + 6 < uVar30) {
                            bVar14 = cull_polygons[uVar31 + 6];
                            if ((face_codes[uVar31 + 6] & uVar40) == 0) {
                              bVar14 = bVar14 | 1;
                            }
                            cull_polygons[uVar31 + 6] = bVar14;
                            if (uVar31 + 7 < uVar30) {
                              bVar14 = cull_polygons[uVar31 + 7];
                              if ((face_codes[uVar31 + 7] & uVar40) == 0) {
                                bVar14 = bVar14 | 1;
                              }
                              cull_polygons[uVar31 + 7] = bVar14;
                              if (uVar31 + 8 < uVar30) {
                                bVar14 = cull_polygons[uVar31 + 8];
                                if ((face_codes[uVar31 + 8] & uVar40) == 0) {
                                  bVar14 = bVar14 | 1;
                                }
                                cull_polygons[uVar31 + 8] = bVar14;
                                if (uVar31 + 9 < uVar30) {
                                  bVar14 = cull_polygons[uVar31 + 9];
                                  if ((face_codes[uVar31 + 9] & uVar40) == 0) {
                                    bVar14 = bVar14 | 1;
                                  }
                                  cull_polygons[uVar31 + 9] = bVar14;
                                  if (uVar31 + 10 < uVar30) {
                                    bVar14 = cull_polygons[uVar31 + 10];
                                    if ((face_codes[uVar31 + 10] & uVar40) == 0) {
                                      bVar14 = bVar14 | 1;
                                    }
                                    cull_polygons[uVar31 + 10] = bVar14;
                                    if (uVar31 + 0xb < uVar30) {
                                      bVar14 = cull_polygons[uVar31 + 0xb];
                                      if ((face_codes[uVar31 + 0xb] & uVar40) == 0) {
                                        bVar14 = bVar14 | 1;
                                      }
                                      cull_polygons[uVar31 + 0xb] = bVar14;
                                      if (uVar31 + 0xc < uVar30) {
                                        bVar14 = cull_polygons[uVar31 + 0xc];
                                        if ((face_codes[uVar31 + 0xc] & uVar40) == 0) {
                                          bVar14 = bVar14 | 1;
                                        }
                                        cull_polygons[uVar31 + 0xc] = bVar14;
                                        if (uVar31 + 0xd < uVar30) {
                                          bVar14 = cull_polygons[uVar31 + 0xd];
                                          if ((face_codes[uVar31 + 0xd] & uVar40) == 0) {
                                            bVar14 = bVar14 | 1;
                                          }
                                          cull_polygons[uVar31 + 0xd] = bVar14;
                                          if (uVar31 + 0xe < uVar30) {
                                            bVar14 = cull_polygons[uVar31 + 0xe];
                                            if ((face_codes[uVar31 + 0xe] & uVar40) == 0) {
                                              bVar14 = bVar14 | 1;
                                            }
                                            cull_polygons[uVar31 + 0xe] = bVar14;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_0807acd4:
            uVar46 = 3;
LAB_0807acf0:
            local_3b4c = cull_polygons;
            next_polygon_batch = (geometry_polygon_batch_struct *)0x0;
            local_3b54 = geometry_split_polygon_batch
                                   ((geometry_primitive_queue_struct *)puVar32,local_3b54,
                                    (geometry_polygon_batch_struct *)polygon_attribute,uVar46,
                                    local_3b4c,clip_any,0);
          }
        }
        break;
      case 1:
        uVar31 = local_3b5c >> 2 & 0xff;
        puVar15 = (geometry->primitive_queue).clip_codes + uVar30;
        *(char *)((int)polygon_attribute + 6) = (char)(local_3b5c >> 2);
        if (uVar31 != 0) {
          if (0xe < uVar31 - 1) {
            SIMDExpandImmediate(0,0xe,0xff);
            SIMDExpandImmediate(0,0xe,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
            halt_unimplemented();
          }
          cull_polygons[0] = *puVar15 & puVar15[1] & puVar15[2] & puVar15[3];
          clip_any[0] = puVar15[3] | puVar15[2] | *puVar15 | puVar15[1];
          unaff_r6 = (geometry_clipped_vertex_struct *)&stack0xffffffc8;
          bVar62 = cull_polygons[0] != 0;
          if (1 < uVar31) {
            unaff_r6 = (geometry_clipped_vertex_struct *)0x2;
            cull_polygons[1] = puVar15[4] & puVar15[5] & puVar15[6] & puVar15[7];
            clip_any[1] = puVar15[7] | puVar15[6] | puVar15[4] | puVar15[5];
            bVar62 = cull_polygons[1] != 0 && bVar62;
            if (2 < uVar31) {
              unaff_r6 = (geometry_clipped_vertex_struct *)&stack0xffffffca;
              cull_polygons[2] = puVar15[8] & puVar15[9] & puVar15[10] & puVar15[0xb];
              clip_any[2] = puVar15[0xb] | puVar15[10] | puVar15[8] | puVar15[9];
              bVar62 = cull_polygons[2] != 0 && bVar62;
              if (3 < uVar31) {
                unaff_r6 = (geometry_clipped_vertex_struct *)0x4;
                cull_polygons[3] = puVar15[0xc] & puVar15[0xd] & puVar15[0xe] & puVar15[0xf];
                clip_any[3] = puVar15[0xf] | puVar15[0xe] | puVar15[0xc] | puVar15[0xd];
                bVar62 = cull_polygons[3] != 0 && bVar62;
                if (4 < uVar31) {
                  unaff_r6 = (geometry_clipped_vertex_struct *)&stack0xffffffcc;
                  cull_polygons[4] = puVar15[0x10] & puVar15[0x11] & puVar15[0x12] & puVar15[0x13];
                  clip_any[4] = puVar15[0x13] | puVar15[0x12] | puVar15[0x10] | puVar15[0x11];
                  bVar62 = cull_polygons[4] != 0 && bVar62;
                  if (5 < uVar31) {
                    unaff_r6 = (geometry_clipped_vertex_struct *)0x6;
                    cull_polygons[5] = puVar15[0x14] & puVar15[0x15] & puVar15[0x16] & puVar15[0x17]
                    ;
                    clip_any[5] = puVar15[0x17] | puVar15[0x16] | puVar15[0x14] | puVar15[0x15];
                    bVar62 = cull_polygons[5] != 0 && bVar62;
                    if (6 < uVar31) {
                      unaff_r6 = (geometry_clipped_vertex_struct *)&stack0xffffffce;
                      cull_polygons[6] =
                           puVar15[0x18] & puVar15[0x19] & puVar15[0x1a] & puVar15[0x1b];
                      clip_any[6] = puVar15[0x1b] | puVar15[0x1a] | puVar15[0x18] | puVar15[0x19];
                      bVar62 = cull_polygons[6] != 0 && bVar62;
                      if (7 < uVar31) {
                        unaff_r6 = (geometry_clipped_vertex_struct *)0x8;
                        cull_polygons[7] =
                             puVar15[0x1c] & puVar15[0x1d] & puVar15[0x1e] & puVar15[0x1f];
                        clip_any[7] = puVar15[0x1f] | puVar15[0x1e] | puVar15[0x1c] | puVar15[0x1d];
                        bVar62 = cull_polygons[7] != 0 && bVar62;
                        if (8 < uVar31) {
                          unaff_r6 = (geometry_clipped_vertex_struct *)&stack0xffffffd0;
                          cull_polygons[8] =
                               puVar15[0x20] & puVar15[0x21] & puVar15[0x22] & puVar15[0x23];
                          clip_any[8] = puVar15[0x23] |
                                        puVar15[0x22] | puVar15[0x20] | puVar15[0x21];
                          bVar62 = cull_polygons[8] != 0 && bVar62;
                          if (9 < uVar31) {
                            unaff_r6 = (geometry_clipped_vertex_struct *)0xa;
                            cull_polygons[9] =
                                 puVar15[0x24] & puVar15[0x25] & puVar15[0x26] & puVar15[0x27];
                            clip_any[9] = puVar15[0x27] |
                                          puVar15[0x26] | puVar15[0x24] | puVar15[0x25];
                            bVar62 = cull_polygons[9] != 0 && bVar62;
                            if (10 < uVar31) {
                              unaff_r6 = (geometry_clipped_vertex_struct *)&stack0xffffffd2;
                              cull_polygons[10] =
                                   puVar15[0x28] & puVar15[0x29] & puVar15[0x2a] & puVar15[0x2b];
                              clip_any[10] = puVar15[0x2b] |
                                             puVar15[0x2a] | puVar15[0x28] | puVar15[0x29];
                              bVar62 = cull_polygons[10] != 0 && bVar62;
                              if (0xb < uVar31) {
                                unaff_r6 = (geometry_clipped_vertex_struct *)0xc;
                                cull_polygons[11] =
                                     puVar15[0x2c] & puVar15[0x2d] & puVar15[0x2e] & puVar15[0x2f];
                                clip_any[11] = puVar15[0x2f] |
                                               puVar15[0x2e] | puVar15[0x2c] | puVar15[0x2d];
                                bVar62 = cull_polygons[11] != 0 && bVar62;
                                if (0xc < uVar31) {
                                  unaff_r6 = (geometry_clipped_vertex_struct *)&stack0xffffffd4;
                                  cull_polygons[12] =
                                       puVar15[0x30] & puVar15[0x31] & puVar15[0x32] & puVar15[0x33]
                                  ;
                                  clip_any[12] = puVar15[0x33] |
                                                 puVar15[0x32] | puVar15[0x30] | puVar15[0x31];
                                  bVar62 = cull_polygons[12] != 0 && bVar62;
                                  if (0xd < uVar31) {
                                    bVar14 = puVar15[0x34];
                                    unaff_r6 = (geometry_clipped_vertex_struct *)(uint)bVar14;
                                    cull_polygons[13] =
                                         bVar14 & puVar15[0x35] & puVar15[0x36] & puVar15[0x37];
                                    clip_any[13] = puVar15[0x37] |
                                                   puVar15[0x36] | bVar14 | puVar15[0x35];
                                    bVar62 = cull_polygons[13] != 0 && bVar62;
                                    if (0xe < uVar31) {
                                      bVar14 = puVar15[0x3b];
                                      unaff_r6 = (geometry_clipped_vertex_struct *)(uint)bVar14;
                                      cull_polygons[14] =
                                           puVar15[0x39] & puVar15[0x38] & puVar15[0x3a] & bVar14;
                                      clip_any[14] = bVar14 | puVar15[0x3a] |
                                                              puVar15[0x39] | puVar15[0x38];
                                      bVar62 = cull_polygons[14] != 0 && bVar62;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (!bVar62) {
            if (uVar40 != 3) {
              unaff_r6 = (geometry_clipped_vertex_struct *)face_codes;
              geometry_backface_test
                        ((geometry->primitive_queue).transformed_coordinates + uVar30 * 4,uVar31,
                         0x40,0x10,unaff_r6);
              uVar30 = (uint)*(byte *)((int)polygon_attribute + 6);
              if (uVar30 != 0) {
                uVar25 = (uVar30 - 0x10 >> 4) + 1;
                uVar31 = uVar25 * 0x10;
                if (uVar30 - 1 < 0xf) {
                  uVar31 = 0;
                }
                else {
                  auVar73._4_4_ = uVar40;
                  auVar73._0_4_ = uVar40;
                  auVar73._8_8_ = 0;
                  auVar73 = auVar73 & auVar73 << 0x40;
                  auVar1 = ZEXT816(0);
                  auVar2 = SIMDExpandImmediate(0,0,1);
                  uVar18 = 0;
                  pauVar17 = (undefined (*) [16])cull_polygons;
                  do {
                    psVar34 = unaff_r6->coordinates;
                    uVar18 = uVar18 + 1;
                    unaff_r6 = (geometry_clipped_vertex_struct *)&unaff_r6->uv;
                    auVar65 = VectorCopyLong(SUB168(*(undefined (*) [16])psVar34,0),1,1);
                    auVar66 = VectorCopyLong(SUB168(*(undefined (*) [16])psVar34,8),1,1);
                    auVar72 = VectorCopyLong(auVar65._0_8_,2,1);
                    auVar69 = VectorCopyLong(auVar66._0_8_,2,1);
                    auVar65 = VectorCopyLong(auVar65._8_8_,2,1);
                    auVar66 = VectorCopyLong(auVar66._8_8_,2,1);
                    auVar72 = VectorCompareEqual(auVar72 & auVar73,auVar1,4);
                    auVar69 = VectorCompareEqual(auVar69 & auVar73,auVar1,4);
                    auVar65 = VectorCompareEqual(auVar65 & auVar73,auVar1,4);
                    auVar66 = VectorCompareEqual(auVar66 & auVar73,auVar1,4);
                    auVar72 = VectorBitwiseSelect(auVar72,auVar2,auVar1);
                    auVar69 = VectorBitwiseSelect(auVar69,auVar2,auVar1);
                    auVar65 = VectorBitwiseSelect(auVar65,auVar2,auVar1);
                    auVar66 = VectorBitwiseSelect(auVar66,auVar2,auVar1);
                    uVar63 = VectorCopyNarrow(auVar72,4);
                    uVar64 = VectorCopyNarrow(auVar65,4);
                    auVar70._0_8_ = VectorCopyNarrow(auVar69,4);
                    auVar70._8_8_ = VectorCopyNarrow(auVar66,4);
                    auVar7._8_8_ = uVar64;
                    auVar7._0_8_ = uVar63;
                    auVar67._0_8_ = VectorCopyNarrow(auVar7,2);
                    auVar67._8_8_ = VectorCopyNarrow(auVar70,2);
                    *(longlong *)*pauVar17 = SUB168(auVar67 | *pauVar17,0);
                    *(longlong *)(*pauVar17 + 8) = SUB168(auVar67 | *pauVar17,8);
                    pauVar17 = pauVar17 + 1;
                  } while (uVar18 < uVar25);
                  if (uVar30 == uVar31) goto LAB_0807b2d4;
                }
                bVar14 = cull_polygons[uVar31];
                if ((face_codes[uVar31] & uVar40) == 0) {
                  bVar14 = bVar14 | 1;
                }
                cull_polygons[uVar31] = bVar14;
                if (uVar31 + 1 < uVar30) {
                  bVar14 = cull_polygons[uVar31 + 1];
                  if ((face_codes[uVar31 + 1] & uVar40) == 0) {
                    bVar14 = bVar14 | 1;
                  }
                  cull_polygons[uVar31 + 1] = bVar14;
                  if (uVar31 + 2 < uVar30) {
                    bVar14 = cull_polygons[uVar31 + 2];
                    if ((face_codes[uVar31 + 2] & uVar40) == 0) {
                      bVar14 = bVar14 | 1;
                    }
                    cull_polygons[uVar31 + 2] = bVar14;
                    if (uVar31 + 3 < uVar30) {
                      bVar14 = cull_polygons[uVar31 + 3];
                      if ((face_codes[uVar31 + 3] & uVar40) == 0) {
                        bVar14 = bVar14 | 1;
                      }
                      cull_polygons[uVar31 + 3] = bVar14;
                      if (uVar31 + 4 < uVar30) {
                        bVar14 = cull_polygons[uVar31 + 4];
                        if ((face_codes[uVar31 + 4] & uVar40) == 0) {
                          bVar14 = bVar14 | 1;
                        }
                        cull_polygons[uVar31 + 4] = bVar14;
                        if (uVar31 + 5 < uVar30) {
                          bVar14 = cull_polygons[uVar31 + 5];
                          if ((face_codes[uVar31 + 5] & uVar40) == 0) {
                            bVar14 = bVar14 | 1;
                          }
                          cull_polygons[uVar31 + 5] = bVar14;
                          if (uVar31 + 6 < uVar30) {
                            bVar14 = cull_polygons[uVar31 + 6];
                            if ((face_codes[uVar31 + 6] & uVar40) == 0) {
                              bVar14 = bVar14 | 1;
                            }
                            cull_polygons[uVar31 + 6] = bVar14;
                            if (uVar31 + 7 < uVar30) {
                              bVar14 = cull_polygons[uVar31 + 7];
                              if ((face_codes[uVar31 + 7] & uVar40) == 0) {
                                bVar14 = bVar14 | 1;
                              }
                              cull_polygons[uVar31 + 7] = bVar14;
                              if (uVar31 + 8 < uVar30) {
                                bVar14 = cull_polygons[uVar31 + 8];
                                if ((face_codes[uVar31 + 8] & uVar40) == 0) {
                                  bVar14 = bVar14 | 1;
                                }
                                cull_polygons[uVar31 + 8] = bVar14;
                                if (uVar31 + 9 < uVar30) {
                                  bVar14 = cull_polygons[uVar31 + 9];
                                  if ((face_codes[uVar31 + 9] & uVar40) == 0) {
                                    bVar14 = bVar14 | 1;
                                  }
                                  cull_polygons[uVar31 + 9] = bVar14;
                                  if (uVar31 + 10 < uVar30) {
                                    bVar14 = cull_polygons[uVar31 + 10];
                                    if ((face_codes[uVar31 + 10] & uVar40) == 0) {
                                      bVar14 = bVar14 | 1;
                                    }
                                    cull_polygons[uVar31 + 10] = bVar14;
                                    if (uVar31 + 0xb < uVar30) {
                                      bVar14 = cull_polygons[uVar31 + 0xb];
                                      if ((face_codes[uVar31 + 0xb] & uVar40) == 0) {
                                        bVar14 = bVar14 | 1;
                                      }
                                      cull_polygons[uVar31 + 0xb] = bVar14;
                                      if (uVar31 + 0xc < uVar30) {
                                        bVar14 = cull_polygons[uVar31 + 0xc];
                                        if ((face_codes[uVar31 + 0xc] & uVar40) == 0) {
                                          bVar14 = bVar14 | 1;
                                        }
                                        cull_polygons[uVar31 + 0xc] = bVar14;
                                        if (uVar31 + 0xd < uVar30) {
                                          bVar14 = cull_polygons[uVar31 + 0xd];
                                          if ((face_codes[uVar31 + 0xd] & uVar40) == 0) {
                                            bVar14 = bVar14 | 1;
                                          }
                                          cull_polygons[uVar31 + 0xd] = bVar14;
                                          if (uVar31 + 0xe < uVar30) {
                                            bVar14 = cull_polygons[uVar31 + 0xe];
                                            if ((face_codes[uVar31 + 0xe] & uVar40) == 0) {
                                              bVar14 = bVar14 | 1;
                                            }
                                            cull_polygons[uVar31 + 0xe] = bVar14;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_0807b2d4:
            uVar46 = 4;
            goto LAB_0807acf0;
          }
        }
        break;
      case 2:
      case 6:
        unaff_r6 = (geometry_clipped_vertex_struct *)(uint)""[uVar40];
        iVar41 = local_3b5c - 2;
        if (*(char *)((int)polygon_attribute + 7) != '\0') {
          uVar40 = uVar40 ^ (uint)unaff_r6;
        }
        if (0 < iVar41) {
          *(char *)((int)polygon_attribute + 6) = (char)iVar41;
          bVar62 = true;
          puVar15 = (geometry->primitive_queue).clip_codes + uVar30 + 3;
          pbVar44 = cull_polygons;
          pbVar50 = clip_any;
          bVar14 = (geometry->primitive_queue).clip_codes[uVar30 + 2];
          bVar29 = (geometry->primitive_queue).clip_codes[uVar30];
          bVar58 = (geometry->primitive_queue).clip_codes[uVar30 + 1];
          do {
            bVar4 = bVar14;
            bVar22 = bVar4 & bVar29 & bVar58;
            puVar51 = puVar15 + 1;
            bVar14 = *puVar15;
            if (bVar22 == 0) {
              bVar62 = false;
            }
            *pbVar50 = bVar29 | bVar58 | bVar4;
            *pbVar44 = bVar22;
            puVar15 = puVar51;
            pbVar44 = pbVar44 + 1;
            pbVar50 = pbVar50 + 1;
            bVar29 = bVar58;
            bVar58 = bVar4;
          } while (puVar51 != (byte *)((int)geometry + local_3b5c + uVar30 + 0x1281));
          if (!bVar62) {
            if (uVar40 != 3) {
              geometry_backface_test
                        ((geometry->primitive_queue).transformed_coordinates + uVar30 * 4,iVar41,
                         0x10,0x10,face_codes);
              bVar14 = *(byte *)((int)polygon_attribute + 6);
              if (bVar14 != 0) {
                pbVar50 = clip_any + 0xbf;
                pbVar44 = cull_polygons;
                do {
                  pbVar50 = pbVar50 + 1;
                  bVar29 = *pbVar44;
                  uVar30 = *pbVar50 & uVar40;
                  uVar40 = uVar40 ^ (uint)unaff_r6;
                  if (uVar30 == 0) {
                    bVar29 = bVar29 | 1;
                  }
                  pbVar45 = pbVar44 + 1;
                  *pbVar44 = bVar29;
                  pbVar44 = pbVar45;
                } while (pbVar45 != cull_polygons + bVar14);
              }
            }
            next_polygon_batch = (geometry_polygon_batch_struct *)0x1;
            uVar46 = 1;
LAB_0807a684:
            local_3b40 = clip_any;
            local_3b4c = cull_polygons;
            local_3b54 = geometry_split_polygon_batch
                                   ((geometry_primitive_queue_struct *)puVar32,local_3b54,
                                    (geometry_polygon_batch_struct *)polygon_attribute,uVar46,
                                    local_3b4c,local_3b40,(u32)next_polygon_batch);
          }
        }
        break;
      case 3:
      case 7:
        bVar62 = true;
        *(undefined *)((int)polygon_attribute + 7) = 1;
        uVar31 = (local_3b5c >> 1) - 1;
        if (0 < (int)uVar31) {
          uVar25 = uVar31 & 0xff;
          *(char *)((int)polygon_attribute + 6) = (char)uVar31;
          unaff_r6 = (geometry_clipped_vertex_struct *)
                     (uint)(geometry->primitive_queue).clip_codes[uVar30 + 1];
          if (uVar25 != 0) {
            puVar15 = (geometry->primitive_queue).clip_codes + uVar30 + 6;
            uVar31 = (uint)(geometry->primitive_queue).clip_codes[uVar30];
            pgVar48 = unaff_r6;
            pbVar44 = clip_any;
            pauVar17 = (undefined (*) [16])cull_polygons;
            bVar29 = (geometry->primitive_queue).clip_codes[uVar30 + 2];
            bVar14 = (geometry->primitive_queue).clip_codes[uVar30 + 3];
            do {
              unaff_r6 = (geometry_clipped_vertex_struct *)(uint)bVar14;
              bVar58 = puVar15[-2];
              bVar4 = puVar15[-1];
              uVar18 = uVar31 & bVar29 & (uint)unaff_r6 & (uint)pgVar48;
              if (uVar18 == 0) {
                bVar62 = false;
              }
              pbVar50 = pbVar44 + 1;
              *pbVar44 = (byte)uVar31 | (byte)pgVar48 | bVar29 | bVar14;
              (*pauVar17)[0] = (char)uVar18;
              puVar15 = puVar15 + 2;
              uVar31 = (uint)bVar29;
              pgVar48 = unaff_r6;
              pbVar44 = pbVar50;
              pauVar17 = (undefined (*) [16])(*pauVar17 + 1);
              bVar29 = bVar58;
              bVar14 = bVar4;
            } while (pbVar50 != clip_any + uVar25);
            if (!bVar62) {
              if (uVar40 != 3) {
                unaff_r6 = (geometry_clipped_vertex_struct *)face_codes;
                geometry_backface_test
                          ((geometry->primitive_queue).transformed_coordinates + uVar30 * 4,uVar25,
                           0x20,0x20,unaff_r6);
                uVar30 = (uint)*(byte *)((int)polygon_attribute + 6);
                if (uVar30 != 0) {
                  uVar25 = (uVar30 - 0x10 >> 4) + 1;
                  uVar31 = uVar25 * 0x10;
                  if (uVar30 - 1 < 0xf) {
                    uVar31 = 0;
                  }
                  else {
                    auVar66._4_4_ = uVar40;
                    auVar66._0_4_ = uVar40;
                    auVar66._8_8_ = 0;
                    auVar66 = auVar66 & auVar66 << 0x40;
                    auVar1 = ZEXT816(0);
                    auVar2 = SIMDExpandImmediate(0,0,1);
                    uVar18 = 0;
                    pauVar17 = (undefined (*) [16])cull_polygons;
                    do {
                      psVar34 = unaff_r6->coordinates;
                      uVar18 = uVar18 + 1;
                      unaff_r6 = (geometry_clipped_vertex_struct *)&unaff_r6->uv;
                      auVar69 = VectorCopyLong(SUB168(*(undefined (*) [16])psVar34,0),1,1);
                      auVar65 = VectorCopyLong(SUB168(*(undefined (*) [16])psVar34,8),1,1);
                      auVar73 = VectorCopyLong(auVar69._0_8_,2,1);
                      auVar72 = VectorCopyLong(auVar65._0_8_,2,1);
                      auVar69 = VectorCopyLong(auVar69._8_8_,2,1);
                      auVar65 = VectorCopyLong(auVar65._8_8_,2,1);
                      auVar73 = VectorCompareEqual(auVar73 & auVar66,auVar1,4);
                      auVar72 = VectorCompareEqual(auVar72 & auVar66,auVar1,4);
                      auVar69 = VectorCompareEqual(auVar69 & auVar66,auVar1,4);
                      auVar65 = VectorCompareEqual(auVar65 & auVar66,auVar1,4);
                      auVar73 = VectorBitwiseSelect(auVar73,auVar2,auVar1);
                      auVar72 = VectorBitwiseSelect(auVar72,auVar2,auVar1);
                      auVar69 = VectorBitwiseSelect(auVar69,auVar2,auVar1);
                      auVar65 = VectorBitwiseSelect(auVar65,auVar2,auVar1);
                      uVar63 = VectorCopyNarrow(auVar73,4);
                      uVar64 = VectorCopyNarrow(auVar69,4);
                      auVar72._0_8_ = VectorCopyNarrow(auVar72,4);
                      auVar72._8_8_ = VectorCopyNarrow(auVar65,4);
                      auVar65._8_8_ = uVar64;
                      auVar65._0_8_ = uVar63;
                      auVar69._0_8_ = VectorCopyNarrow(auVar65,2);
                      auVar69._8_8_ = VectorCopyNarrow(auVar72,2);
                      *(longlong *)*pauVar17 = SUB168(auVar69 | *pauVar17,0);
                      *(longlong *)(*pauVar17 + 8) = SUB168(auVar69 | *pauVar17,8);
                      pauVar17 = pauVar17 + 1;
                    } while (uVar18 < uVar25);
                    if (uVar30 == uVar31) goto LAB_0807a514;
                  }
                  bVar14 = cull_polygons[uVar31];
                  if ((face_codes[uVar31] & uVar40) == 0) {
                    bVar14 = bVar14 | 1;
                  }
                  cull_polygons[uVar31] = bVar14;
                  if (uVar31 + 1 < uVar30) {
                    bVar14 = cull_polygons[uVar31 + 1];
                    if ((face_codes[uVar31 + 1] & uVar40) == 0) {
                      bVar14 = bVar14 | 1;
                    }
                    cull_polygons[uVar31 + 1] = bVar14;
                    if (uVar31 + 2 < uVar30) {
                      bVar14 = cull_polygons[uVar31 + 2];
                      if ((face_codes[uVar31 + 2] & uVar40) == 0) {
                        bVar14 = bVar14 | 1;
                      }
                      cull_polygons[uVar31 + 2] = bVar14;
                      if (uVar31 + 3 < uVar30) {
                        bVar14 = cull_polygons[uVar31 + 3];
                        if ((face_codes[uVar31 + 3] & uVar40) == 0) {
                          bVar14 = bVar14 | 1;
                        }
                        cull_polygons[uVar31 + 3] = bVar14;
                        if (uVar31 + 4 < uVar30) {
                          bVar14 = cull_polygons[uVar31 + 4];
                          if ((face_codes[uVar31 + 4] & uVar40) == 0) {
                            bVar14 = bVar14 | 1;
                          }
                          cull_polygons[uVar31 + 4] = bVar14;
                          if (uVar31 + 5 < uVar30) {
                            bVar14 = cull_polygons[uVar31 + 5];
                            if ((face_codes[uVar31 + 5] & uVar40) == 0) {
                              bVar14 = bVar14 | 1;
                            }
                            cull_polygons[uVar31 + 5] = bVar14;
                            if (uVar31 + 6 < uVar30) {
                              bVar14 = cull_polygons[uVar31 + 6];
                              if ((face_codes[uVar31 + 6] & uVar40) == 0) {
                                bVar14 = bVar14 | 1;
                              }
                              cull_polygons[uVar31 + 6] = bVar14;
                              if (uVar31 + 7 < uVar30) {
                                bVar14 = cull_polygons[uVar31 + 7];
                                if ((face_codes[uVar31 + 7] & uVar40) == 0) {
                                  bVar14 = bVar14 | 1;
                                }
                                cull_polygons[uVar31 + 7] = bVar14;
                                if (uVar31 + 8 < uVar30) {
                                  bVar14 = cull_polygons[uVar31 + 8];
                                  if ((face_codes[uVar31 + 8] & uVar40) == 0) {
                                    bVar14 = bVar14 | 1;
                                  }
                                  cull_polygons[uVar31 + 8] = bVar14;
                                  if (uVar31 + 9 < uVar30) {
                                    bVar14 = cull_polygons[uVar31 + 9];
                                    if ((face_codes[uVar31 + 9] & uVar40) == 0) {
                                      bVar14 = bVar14 | 1;
                                    }
                                    cull_polygons[uVar31 + 9] = bVar14;
                                    if (uVar31 + 10 < uVar30) {
                                      bVar14 = cull_polygons[uVar31 + 10];
                                      if ((face_codes[uVar31 + 10] & uVar40) == 0) {
                                        bVar14 = bVar14 | 1;
                                      }
                                      cull_polygons[uVar31 + 10] = bVar14;
                                      if (uVar31 + 0xb < uVar30) {
                                        bVar14 = cull_polygons[uVar31 + 0xb];
                                        if ((face_codes[uVar31 + 0xb] & uVar40) == 0) {
                                          bVar14 = bVar14 | 1;
                                        }
                                        cull_polygons[uVar31 + 0xb] = bVar14;
                                        if (uVar31 + 0xc < uVar30) {
                                          bVar14 = cull_polygons[uVar31 + 0xc];
                                          if ((face_codes[uVar31 + 0xc] & uVar40) == 0) {
                                            bVar14 = bVar14 | 1;
                                          }
                                          cull_polygons[uVar31 + 0xc] = bVar14;
                                          if (uVar31 + 0xd < uVar30) {
                                            bVar14 = cull_polygons[uVar31 + 0xd];
                                            if ((face_codes[uVar31 + 0xd] & uVar40) == 0) {
                                              bVar14 = bVar14 | 1;
                                            }
                                            cull_polygons[uVar31 + 0xd] = bVar14;
                                            if (uVar31 + 0xe < uVar30) {
                                              bVar14 = cull_polygons[uVar31 + 0xe];
                                              if ((face_codes[uVar31 + 0xe] & uVar40) == 0) {
                                                bVar14 = bVar14 | 1;
                                              }
                                              cull_polygons[uVar31 + 0xe] = bVar14;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0807a514:
              next_polygon_batch = (geometry_polygon_batch_struct *)0x0;
              uVar46 = 2;
              goto LAB_0807a684;
            }
          }
        }
      }
      polygon_attribute = polygon_attribute + 2;
      local_3b64 = local_3b64 + 1;
      pgVar11 = (geometry_polygon_batch_struct *)polygon_count_2;
    } while (uVar24 != local_3b64);
    iVar41 = (int)local_3b54 - (int)polygon_split_batches >> 3;
    (geometry->primitive_queue).texture_data_offset = 0;
    (geometry->primitive_queue).texture_data[(geometry->primitive_queue).texture_data_count].
    vertex_tag = 0xff;
    (geometry->primitive_queue).submit_index = 0;
    if (iVar41 == 0) goto LAB_0807d544;
    local_3b58 = 0;
    pgVar11 = polygon_split_batches;
    do {
      polygon_count_2 = (u32)(pgVar11 + 1);
      bVar14 = pgVar11->vertex_base;
      uVar40 = (uint)bVar14;
      uVar30 = (uint)pgVar11->polygon_count;
      local_3b34 = uVar30;
      switch(pgVar11->primitive_type) {
      case '\0':
        uVar46 = (geometry->primitive_queue).texture_image_param;
        uVar53 = pgVar11->attribute;
        polygon_attribute_1 = uVar53 << 0xb;
        polygon_attribute_1 = polygon_attribute_1 >> 0x1b;
        uVar57 = geometry->vertex_list[geometry->buffer_page].offset;
        if ((polygon_attribute_1 - 1 < 0x1e) ||
           (uVar31 = (uVar46 << 3) >> 0x1d, uVar31 == 6 || uVar31 == 1)) {
          pgVar10 = geometry->alpha_polygon_list;
        }
        else {
          pgVar10 = geometry->polygon_list;
        }
        polygon_list = pgVar10 + geometry->buffer_page;
        uVar23 = geometry->polygon_count;
        if (pgVar11->flip_winding == '\0') {
          uVar37 = 3;
        }
        else {
          uVar37 = 0x43;
        }
        if (0x800 < uVar30 + uVar23) {
          local_3b34 = 0x800 - uVar23;
        }
        if (local_3b34 * 3 + uVar57 < 0x1801) {
LAB_0807b78c:
          uVar61 = (geometry->primitive_queue).texture_data_offset;
          unaff_r6 = (geometry_clipped_vertex_struct *)
                     (geometry->primitive_queue).texture_palette_offset;
          if (0 < (int)local_3b34) {
            local_3b54 = (geometry_polygon_batch_struct *)
                         ((geometry->primitive_queue).texture_data + uVar61);
            uVar25 = (uint)((geometry_texture_data_struct *)local_3b54)->vertex_tag;
            uVar31 = uVar40;
            do {
              if (uVar25 < uVar31 + 2) {
                pgVar21 = (geometry_texture_data_struct *)local_3b54;
                do {
                  local_3b54 = (geometry_polygon_batch_struct *)(pgVar21 + 1);
                  uVar46 = pgVar21->image_param;
                  uVar61 = uVar61 + 1;
                  uVar25 = (uint)pgVar21[1].vertex_tag;
                  unaff_r6 = (geometry_clipped_vertex_struct *)(uint)pgVar21->palette_offset;
                  uVar18 = (uVar46 << 3) >> 0x1d;
                  polygon_list = geometry->alpha_polygon_list + geometry->buffer_page;
                  if (0x1d < polygon_attribute_1 - 1 && (uVar18 != 6 && uVar18 != 1)) {
                    polygon_list = geometry->polygon_list + geometry->buffer_page;
                  }
                  pgVar21 = (geometry_texture_data_struct *)local_3b54;
                } while (uVar25 < uVar31 + 2);
              }
              sVar9 = (short)uVar31;
              uVar27 = polygon_list->offset;
              uVar31 = uVar31 + 3;
              polygon_list->polygons[uVar27].attribute = uVar53;
              polygon_list->polygons[uVar27].texture_image_param = uVar46;
              polygon_list->polygons[uVar27].flags = uVar37;
              polygon_list->polygons[uVar27].texture_palette_offset = (u16)unaff_r6;
              polygon_list->polygons[uVar27].vertex_base = ((short)uVar57 - (ushort)bVar14) + sVar9;
              polygon_list->offset = uVar27 + 1;
            } while (uVar31 != local_3b34 * 3 + uVar40);
            uVar23 = geometry->polygon_count;
          }
          (geometry->primitive_queue).texture_data_offset = uVar61;
          (geometry->primitive_queue).texture_image_param = uVar46;
          (geometry->primitive_queue).texture_palette_offset = (u32)unaff_r6;
          geometry->polygon_count = uVar23 + (short)local_3b34;
        }
        else if (2 < 0x1800 - uVar57) {
          local_3b34 = (0x17fd - uVar57) / 3;
          goto LAB_0807b78c;
        }
        geometry_submit_vertexes(geometry,uVar40,uVar30 * 3);
        break;
      case '\x01':
        uVar46 = (geometry->primitive_queue).texture_image_param;
        uVar53 = pgVar11->attribute;
        polygon_attribute_2 = uVar53 << 0xb;
        polygon_attribute_2 = polygon_attribute_2 >> 0x1b;
        uVar57 = geometry->vertex_list[geometry->buffer_page].offset;
        if ((polygon_attribute_2 - 1 < 0x1e) ||
           (uVar31 = (uVar46 << 3) >> 0x1d, uVar31 == 6 || uVar31 == 1)) {
          pgVar10 = geometry->alpha_polygon_list;
        }
        else {
          pgVar10 = geometry->polygon_list;
        }
        polygon_list_1 = pgVar10 + geometry->buffer_page;
        uVar23 = geometry->polygon_count;
        if (pgVar11->flip_winding == '\0') {
          uVar37 = 4;
        }
        else {
          uVar37 = 0x44;
        }
        if (0x800 < uVar30 + uVar23) {
          local_3b34 = 0x800 - uVar23;
        }
        if (uVar57 + local_3b34 * 4 < 0x1801) {
LAB_0807bc0c:
          uVar61 = (geometry->primitive_queue).texture_data_offset;
          unaff_r6 = (geometry_clipped_vertex_struct *)
                     (geometry->primitive_queue).texture_palette_offset;
          if (0 < (int)local_3b34) {
            local_3b54 = (geometry_polygon_batch_struct *)
                         ((geometry->primitive_queue).texture_data + uVar61);
            uVar25 = (uint)((geometry_texture_data_struct *)local_3b54)->vertex_tag;
            uVar31 = uVar40;
            do {
              if (uVar25 < uVar31 + 3) {
                pgVar21 = (geometry_texture_data_struct *)local_3b54;
                do {
                  local_3b54 = (geometry_polygon_batch_struct *)(pgVar21 + 1);
                  uVar46 = pgVar21->image_param;
                  uVar61 = uVar61 + 1;
                  uVar25 = (uint)pgVar21[1].vertex_tag;
                  unaff_r6 = (geometry_clipped_vertex_struct *)(uint)pgVar21->palette_offset;
                  uVar18 = (uVar46 << 3) >> 0x1d;
                  polygon_list_1 = geometry->alpha_polygon_list + geometry->buffer_page;
                  if (0x1d < polygon_attribute_2 - 1 && (uVar18 != 6 && uVar18 != 1)) {
                    polygon_list_1 = geometry->polygon_list + geometry->buffer_page;
                  }
                  pgVar21 = (geometry_texture_data_struct *)local_3b54;
                } while (uVar25 < uVar31 + 3);
              }
              sVar9 = (short)uVar31;
              uVar27 = polygon_list_1->offset;
              uVar31 = uVar31 + 4;
              polygon_list_1->polygons[uVar27].attribute = uVar53;
              polygon_list_1->polygons[uVar27].texture_image_param = uVar46;
              polygon_list_1->polygons[uVar27].flags = uVar37;
              polygon_list_1->polygons[uVar27].texture_palette_offset = (u16)unaff_r6;
              polygon_list_1->polygons[uVar27].vertex_base =
                   ((short)uVar57 - (ushort)bVar14) + sVar9;
              polygon_list_1->offset = uVar27 + 1;
            } while (uVar31 != uVar40 + local_3b34 * 4);
            uVar23 = geometry->polygon_count;
          }
          (geometry->primitive_queue).texture_data_offset = uVar61;
          (geometry->primitive_queue).texture_image_param = uVar46;
          (geometry->primitive_queue).texture_palette_offset = (u32)unaff_r6;
          geometry->polygon_count = uVar23 + (short)local_3b34;
        }
        else if (3 < 0x1800 - uVar57) {
          local_3b34 = 0x17fc - uVar57 >> 2;
          goto LAB_0807bc0c;
        }
        geometry_submit_vertexes(geometry,uVar40,uVar30 << 2);
        break;
      case '\x02':
        geometry_submit_polygons
                  (geometry,(geometry_polygon_batch_struct *)pgVar11->attribute,uVar40,uVar30,
                   (uint)pgVar11->flip_winding,0,next_polygon_batch,in_stack_ffffc494,
                   (geometry_polygon_batch_struct *)polygon_count_2);
        geometry_submit_vertexes(geometry,uVar40,uVar30 + 2);
        break;
      case '\x03':
        geometry_submit_polygons
                  (geometry,(geometry_polygon_batch_struct *)pgVar11->attribute,uVar40,uVar30,
                   (uint)pgVar11->flip_winding,0,next_polygon_batch,in_stack_ffffc494,
                   (geometry_polygon_batch_struct *)polygon_count_2);
        geometry_submit_vertexes(geometry,uVar40,(uVar30 + 1) * 2);
        break;
      case '\x04':
        uVar31 = uVar40 + 1;
        uVar30 = uVar40;
        if (pgVar11->flip_winding == '\0') {
          uVar31 = uVar40;
          uVar30 = uVar40 + 1;
        }
        auVar1 = *(undefined (*) [16])
                  ((geometry->primitive_queue).transformed_coordinates + uVar30 * 4);
        auVar2 = *(undefined (*) [16])
                  ((geometry->primitive_queue).transformed_coordinates + uVar31 * 4);
        auVar66 = *(undefined (*) [16])
                   ((geometry->primitive_queue).transformed_coordinates + uVar40 * 4 + 8);
        clipped_vertexes_a[0].uv = (geometry->primitive_queue).uv[uVar31];
        clipped_vertexes_a[1].uv = (geometry->primitive_queue).uv[uVar30];
        uVar25 = 0;
        clipped_vertexes_a[0].clip_code = (geometry->primitive_queue).clip_codes[uVar31];
        clipped_vertexes_a[1].clip_code = (geometry->primitive_queue).clip_codes[uVar30];
        clipped_vertexes_a[2].uv = (geometry->primitive_queue).uv[uVar40 + 2];
        clipped_vertexes_a[2].clip_code = (geometry->primitive_queue).clip_codes[uVar40 + 2];
        uVar63 = auVar2._0_8_;
        clipped_vertexes_a[0].coordinates[0] = (s32)uVar63;
        clipped_vertexes_a[0].coordinates[1] = SUB84(uVar63,4);
        uVar63 = auVar2._8_8_;
        clipped_vertexes_a[0].coordinates[2] = (s32)uVar63;
        clipped_vertexes_a[0].coordinates[3] = SUB84(uVar63,4);
        clipped_vertexes_a[0].color = (geometry->primitive_queue).color[uVar31];
        uVar63 = auVar1._0_8_;
        clipped_vertexes_a[1].coordinates[0] = (s32)uVar63;
        clipped_vertexes_a[1].coordinates[1] = SUB84(uVar63,4);
        uVar63 = auVar1._8_8_;
        clipped_vertexes_a[1].coordinates[2] = (s32)uVar63;
        clipped_vertexes_a[1].coordinates[3] = SUB84(uVar63,4);
        clipped_vertexes_a[1].color = (geometry->primitive_queue).color[uVar30];
        uVar63 = auVar66._0_8_;
        clipped_vertexes_a[2].coordinates[0] = (s32)uVar63;
        clipped_vertexes_a[2].coordinates[1] = SUB84(uVar63,4);
        uVar63 = auVar66._8_8_;
        clipped_vertexes_a[2].coordinates[2] = (s32)uVar63;
        clipped_vertexes_a[2].coordinates[3] = SUB84(uVar63,4);
        clipped_vertexes_a[2].color = (geometry->primitive_queue).color[uVar40 + 2];
        pgVar48 = (geometry_clipped_vertex_struct *)0x3;
        pgVar47 = clipped_vertexes_b;
        pgVar54 = clipped_vertexes_a;
        do {
          clipped_vertex_1 = pgVar47;
          pgVar47 = pgVar54 + 1;
          unaff_r6 = (geometry_clipped_vertex_struct *)0x0;
          pgVar42 = (geometry_clipped_vertex_struct *)0x0;
LAB_0807ba00:
          do {
            unaff_r6 = (geometry_clipped_vertex_struct *)((int)unaff_r6->coordinates + 1);
            pgVar56 = pgVar47 + -1;
            if (pgVar48 == unaff_r6) {
              uVar30 = pgVar47[-1].clip_code >> (uVar25 & 0xff) & 1 |
                       (pgVar54->clip_code >> (uVar25 & 0xff) & 1) << 1;
              pgVar20 = pgVar54;
              if (uVar30 == 1) goto LAB_0807bfa0;
              if (uVar30 != 0) {
                if (uVar30 == 2) goto LAB_0807ba44;
                break;
              }
LAB_0807bf74:
              sVar49 = pgVar47[-1].coordinates[1];
              pgVar43 = (geometry_clipped_vertex_struct *)((int)pgVar42->coordinates + 1);
              pgVar42 = clipped_vertex_1 + (int)pgVar42;
              pgVar42->coordinates[0] = pgVar56->coordinates[0];
              pgVar42->coordinates[1] = sVar49;
              sVar49 = pgVar47[-1].coordinates[3];
              pgVar42->coordinates[2] = pgVar47[-1].coordinates[2];
              pgVar42->coordinates[3] = sVar49;
              uVar6 = pgVar47[-0xffffffff00000001].color;
              uVar5 = pgVar47[-0xffffffff00000001].clip_code;
              uVar13 = pgVar47[-0xffffffff00000001].field_0x17;
              pgVar42->uv = pgVar47[-1].uv;
              pgVar42->color = uVar6;
              pgVar42->clip_code = uVar5;
              pgVar42->field_0x17 = uVar13;
            }
            else {
              uVar30 = pgVar47[-1].clip_code >> (uVar25 & 0xff) & 1 |
                       (pgVar47->clip_code >> (uVar25 & 0xff) & 1) << 1;
              pgVar20 = pgVar47;
              if (uVar30 == 1) {
LAB_0807bfa0:
                pgVar43 = (geometry_clipped_vertex_struct *)((int)pgVar42->coordinates + 1);
                geometry_clipped_vertex_interpolate_edge
                          (clipped_vertex_1 + (int)pgVar42,pgVar20,pgVar56,uVar25);
              }
              else {
                if (uVar30 == 0) goto LAB_0807bf74;
                if (uVar30 != 2) {
                  pgVar47 = pgVar47 + 1;
                  goto LAB_0807ba00;
                }
LAB_0807ba44:
                pgVar43 = (geometry_clipped_vertex_struct *)((int)pgVar42->coordinates + 2);
                pgVar60 = clipped_vertex_1 + (int)pgVar42;
                *(undefined8 *)pgVar60->coordinates = *(undefined8 *)pgVar56->coordinates;
                *(undefined8 *)(pgVar60->coordinates + 2) =
                     *(undefined8 *)(pgVar47[-1].coordinates + 2);
                uVar6 = pgVar47[-0xffffffff00000001].color;
                uVar5 = pgVar47[-0xffffffff00000001].clip_code;
                uVar13 = pgVar47[-0xffffffff00000001].field_0x17;
                pgVar60->uv = pgVar47[-0xffffffff00000001].uv;
                pgVar60->color = uVar6;
                pgVar60->clip_code = uVar5;
                pgVar60->field_0x17 = uVar13;
                geometry_clipped_vertex_interpolate_edge
                          (clipped_vertex_1 + (int)((int)pgVar42->coordinates + 1),pgVar56,pgVar20,
                           uVar25);
              }
            }
            pgVar47 = pgVar47 + 1;
            pgVar42 = pgVar43;
          } while (pgVar48 != unaff_r6);
          if (pgVar42 == (geometry_clipped_vertex_struct *)0x0) goto switchD_0807a790_caseD_8;
          uVar25 = uVar25 + 1;
          pgVar48 = pgVar42;
          pgVar47 = pgVar54;
          pgVar54 = clipped_vertex_1;
        } while (uVar25 != 6);
        local_3b60 = (uint)geometry->buffer_page;
        uVar46 = geometry->vertex_list[local_3b60].offset;
        puVar38 = (undefined *)((int)pgVar42->coordinates + uVar46);
        if (geometry->polygon_count != 0x800) {
          if ((undefined *)0x1800 < puVar38) break;
          uVar57 = (geometry->primitive_queue).texture_data_offset;
          pgVar21 = (geometry->primitive_queue).texture_data + uVar57;
          uVar53 = pgVar11->attribute;
          uVar30 = pgVar11->vertex_base + 2;
          if (pgVar21->vertex_tag < uVar30) {
            do {
              uVar23 = pgVar21->palette_offset;
              uVar57 = uVar57 + 1;
              uVar37 = pgVar21->image_param;
              (geometry->primitive_queue).texture_data_offset = uVar57;
              (geometry->primitive_queue).texture_image_param = uVar37;
              (geometry->primitive_queue).texture_palette_offset = (uint)uVar23;
              pgVar12 = pgVar21 + 1;
              pgVar21 = pgVar21 + 1;
            } while (pgVar12->vertex_tag < uVar30);
          }
          else {
            uVar37 = (geometry->primitive_queue).texture_image_param;
            uVar23 = (ushort)(geometry->primitive_queue).texture_palette_offset;
          }
          if ((((uVar53 << 0xb) >> 0x1b) - 1 < 0x1e) ||
             (uVar30 = (uVar37 << 3) >> 0x1d, uVar30 == 6 || uVar30 == 1)) {
            pgVar10 = geometry->alpha_polygon_list;
          }
          else {
            pgVar10 = geometry->polygon_list;
          }
          polygon_list_3 = pgVar10 + local_3b60;
          uVar57 = polygon_list_3->offset;
          unaff_r6 = (geometry_clipped_vertex_struct *)(uVar57 * 5);
          polygon_list_3->polygons[uVar57].attribute = uVar53;
          polygon_list_3->polygons[uVar57].texture_image_param = uVar37;
          polygon_list_3->polygons[uVar57].flags = (u32)pgVar42;
          polygon_list_3->polygons[uVar57].texture_palette_offset = uVar23;
          polygon_list_3->polygons[uVar57].vertex_base = (u16)uVar46;
          uVar6 = geometry->polygon_count;
          polygon_list_3->offset = uVar57 + 1;
          local_3b60 = (uint)geometry->buffer_page;
          geometry->polygon_count = uVar6 + 1;
          uVar46 = geometry->vertex_list[local_3b60].offset;
          puVar38 = (undefined *)((int)pgVar42->coordinates + uVar46);
        }
        if (puVar38 < (undefined *)0x1801) {
          uVar53 = (geometry->primitive_queue).submit_index;
          i_1 = 0;
          psVar16 = (s32 *)((geometry->primitive_queue).reserved_b + uVar53 * 4);
          unaff_r6 = (geometry_clipped_vertex_struct *)
                     ((geometry->primitive_queue).submit_y + (uVar53 - 1));
          psVar34 = (geometry->primitive_queue).submit_z + (uVar53 - 1);
          psVar19 = (geometry->primitive_queue).submit_w + (uVar53 - 1);
          pgVar28 = geometry->vertex_list[local_3b60].vertexes + uVar46 + 1;
          do {
            sVar52 = clipped_vertex_1->coordinates[1];
            i_1 = i_1 + 1;
            sVar49 = clipped_vertex_1->coordinates[2];
            uVar46 = clipped_vertex_1->uv;
            sVar59 = clipped_vertex_1->coordinates[3];
            psVar16 = psVar16 + 1;
            *psVar16 = clipped_vertex_1->coordinates[0];
            uVar6 = clipped_vertex_1->color;
            unaff_r6 = (geometry_clipped_vertex_struct *)(unaff_r6->coordinates + 1);
            unaff_r6->coordinates[0] = sVar52;
            psVar34 = psVar34 + 1;
            *psVar34 = sVar49;
            psVar19 = psVar19 + 1;
            *psVar19 = sVar59;
            *(s32 *)(pgVar28 + -1) = sVar59;
            *(u16 *)((int)(pgVar28 + -1) + 10) = uVar6;
            *(short *)((int)(pgVar28 + -1) + 0xc) = (short)uVar46;
            *(short *)((int)(pgVar28 + -1) + 0xe) = (short)(uVar46 >> 0x10);
            pgVar28 = pgVar28 + 1;
            clipped_vertex_1 = clipped_vertex_1 + 1;
          } while (i_1 < pgVar42);
LAB_0807c1e4:
          (geometry->primitive_queue).submit_index =
               (u32)((int)(s32 *)i_1 + (geometry->primitive_queue).submit_index);
          geometry->vertex_list[local_3b60].offset =
               (u32)((int)(s32 *)i_1 + geometry->vertex_list[local_3b60].offset);
        }
        break;
      case '\x05':
        iVar39 = uVar40 + 2;
        iVar55 = uVar40 + 3;
        if (pgVar11->flip_winding == '\0') {
          iVar39 = uVar40 + 3;
          iVar55 = uVar40 + 2;
        }
        iVar36 = (int)(short)(ushort)bVar14;
        psVar34 = (geometry->primitive_queue).transformed_coordinates + iVar36 * 4;
        auVar1 = *(undefined (*) [16])
                  ((geometry->primitive_queue).transformed_coordinates + iVar55 * 4);
        auVar2 = *(undefined (*) [16])psVar34;
        auVar66 = *(undefined (*) [16])(psVar34 + 4);
        auVar65 = *(undefined (*) [16])
                   ((geometry->primitive_queue).transformed_coordinates + iVar39 * 4);
        clipped_vertexes_a[0].clip_code = (geometry->primitive_queue).clip_codes[uVar40];
        clipped_vertexes_a[1].clip_code = (geometry->primitive_queue).clip_codes[uVar40 + 1];
        clipped_vertexes_a[0].uv = (geometry->primitive_queue).uv[iVar36];
        uVar30 = 0;
        clipped_vertexes_a[2].uv = (geometry->primitive_queue).uv[iVar55];
        clipped_vertexes_a[1].uv = (geometry->primitive_queue).uv[iVar36 + 1];
        clipped_vertexes_a[2].clip_code = (geometry->primitive_queue).clip_codes[iVar55];
        clipped_vertexes_a[3].uv = (geometry->primitive_queue).uv[iVar39];
        clipped_vertexes_a[3].clip_code = (geometry->primitive_queue).clip_codes[iVar39];
        uVar63 = auVar2._0_8_;
        clipped_vertexes_a[0].coordinates[0] = (s32)uVar63;
        clipped_vertexes_a[0].coordinates[1] = SUB84(uVar63,4);
        uVar63 = auVar2._8_8_;
        clipped_vertexes_a[0].coordinates[2] = (s32)uVar63;
        clipped_vertexes_a[0].coordinates[3] = SUB84(uVar63,4);
        clipped_vertexes_a[0].color = (geometry->primitive_queue).color[iVar36];
        uVar63 = auVar66._0_8_;
        clipped_vertexes_a[1].coordinates[0] = (s32)uVar63;
        clipped_vertexes_a[1].coordinates[1] = SUB84(uVar63,4);
        uVar63 = auVar66._8_8_;
        clipped_vertexes_a[1].coordinates[2] = (s32)uVar63;
        clipped_vertexes_a[1].coordinates[3] = SUB84(uVar63,4);
        clipped_vertexes_a[1].color = (geometry->primitive_queue).color[iVar36 + 1];
        uVar63 = auVar1._0_8_;
        clipped_vertexes_a[2].coordinates[0] = (s32)uVar63;
        clipped_vertexes_a[2].coordinates[1] = SUB84(uVar63,4);
        uVar63 = auVar1._8_8_;
        clipped_vertexes_a[2].coordinates[2] = (s32)uVar63;
        clipped_vertexes_a[2].coordinates[3] = SUB84(uVar63,4);
        clipped_vertexes_a[2].color = (geometry->primitive_queue).color[iVar55];
        uVar63 = auVar65._0_8_;
        clipped_vertexes_a[3].coordinates[0] = (s32)uVar63;
        clipped_vertexes_a[3].coordinates[1] = SUB84(uVar63,4);
        uVar63 = auVar65._8_8_;
        clipped_vertexes_a[3].coordinates[2] = (s32)uVar63;
        clipped_vertexes_a[3].coordinates[3] = SUB84(uVar63,4);
        clipped_vertexes_a[3].color = (geometry->primitive_queue).color[iVar39];
        pgVar48 = (geometry_clipped_vertex_struct *)0x4;
        pgVar47 = clipped_vertexes_b;
        pgVar54 = clipped_vertexes_a;
        do {
          clipped_vertex = pgVar47;
          pgVar47 = pgVar54 + 1;
          unaff_r6 = (geometry_clipped_vertex_struct *)0x0;
          pgVar42 = (geometry_clipped_vertex_struct *)0x0;
LAB_0807b600:
          do {
            unaff_r6 = (geometry_clipped_vertex_struct *)((int)unaff_r6->coordinates + 1);
            pgVar56 = pgVar47 + -1;
            if (unaff_r6 == pgVar48) {
              uVar40 = pgVar47[-1].clip_code >> (uVar30 & 0xff) & 1 |
                       (pgVar54->clip_code >> (uVar30 & 0xff) & 1) << 1;
              pgVar20 = pgVar54;
              if (uVar40 == 1) goto LAB_0807bff0;
              if (uVar40 != 0) {
                if (uVar40 == 2) goto LAB_0807b644;
                break;
              }
LAB_0807bfc4:
              sVar49 = pgVar47[-1].coordinates[1];
              pgVar43 = (geometry_clipped_vertex_struct *)((int)pgVar42->coordinates + 1);
              pgVar42 = clipped_vertex + (int)pgVar42;
              pgVar42->coordinates[0] = pgVar56->coordinates[0];
              pgVar42->coordinates[1] = sVar49;
              sVar49 = pgVar47[-1].coordinates[3];
              pgVar42->coordinates[2] = pgVar47[-1].coordinates[2];
              pgVar42->coordinates[3] = sVar49;
              uVar6 = pgVar47[-0xffffffff00000001].color;
              uVar5 = pgVar47[-0xffffffff00000001].clip_code;
              uVar13 = pgVar47[-0xffffffff00000001].field_0x17;
              pgVar42->uv = pgVar47[-1].uv;
              pgVar42->color = uVar6;
              pgVar42->clip_code = uVar5;
              pgVar42->field_0x17 = uVar13;
            }
            else {
              uVar40 = pgVar47[-1].clip_code >> (uVar30 & 0xff) & 1 |
                       (pgVar47->clip_code >> (uVar30 & 0xff) & 1) << 1;
              pgVar20 = pgVar47;
              if (uVar40 == 1) {
LAB_0807bff0:
                pgVar43 = (geometry_clipped_vertex_struct *)((int)pgVar42->coordinates + 1);
                geometry_clipped_vertex_interpolate_edge
                          (clipped_vertex + (int)pgVar42,pgVar20,pgVar56,uVar30);
              }
              else {
                if (uVar40 == 0) goto LAB_0807bfc4;
                if (uVar40 != 2) {
                  pgVar47 = pgVar47 + 1;
                  goto LAB_0807b600;
                }
LAB_0807b644:
                pgVar43 = (geometry_clipped_vertex_struct *)((int)pgVar42->coordinates + 2);
                pgVar60 = clipped_vertex + (int)pgVar42;
                *(undefined8 *)pgVar60->coordinates = *(undefined8 *)pgVar56->coordinates;
                *(undefined8 *)(pgVar60->coordinates + 2) =
                     *(undefined8 *)(pgVar47[-1].coordinates + 2);
                uVar6 = pgVar47[-0xffffffff00000001].color;
                uVar5 = pgVar47[-0xffffffff00000001].clip_code;
                uVar13 = pgVar47[-0xffffffff00000001].field_0x17;
                pgVar60->uv = pgVar47[-0xffffffff00000001].uv;
                pgVar60->color = uVar6;
                pgVar60->clip_code = uVar5;
                pgVar60->field_0x17 = uVar13;
                geometry_clipped_vertex_interpolate_edge
                          (clipped_vertex + (int)((int)pgVar42->coordinates + 1),pgVar56,pgVar20,
                           uVar30);
              }
            }
            pgVar47 = pgVar47 + 1;
            pgVar42 = pgVar43;
          } while (unaff_r6 != pgVar48);
          if (pgVar42 == (geometry_clipped_vertex_struct *)0x0) goto switchD_0807a790_caseD_8;
          uVar30 = uVar30 + 1;
          pgVar48 = pgVar42;
          pgVar47 = pgVar54;
          pgVar54 = clipped_vertex;
        } while (uVar30 != 6);
        local_3b60 = (uint)geometry->buffer_page;
        uVar46 = geometry->vertex_list[local_3b60].offset;
        puVar38 = (undefined *)((int)pgVar42->coordinates + uVar46);
        if (geometry->polygon_count != 0x800) {
          if ((undefined *)0x1800 < puVar38) break;
          uVar57 = (geometry->primitive_queue).texture_data_offset;
          pgVar21 = (geometry->primitive_queue).texture_data + uVar57;
          uVar53 = pgVar11->attribute;
          uVar30 = pgVar11->vertex_base + 3;
          if (pgVar21->vertex_tag < uVar30) {
            do {
              uVar23 = pgVar21->palette_offset;
              uVar57 = uVar57 + 1;
              uVar37 = pgVar21->image_param;
              (geometry->primitive_queue).texture_data_offset = uVar57;
              (geometry->primitive_queue).texture_image_param = uVar37;
              (geometry->primitive_queue).texture_palette_offset = (uint)uVar23;
              pgVar12 = pgVar21 + 1;
              pgVar21 = pgVar21 + 1;
            } while (pgVar12->vertex_tag < uVar30);
          }
          else {
            uVar37 = (geometry->primitive_queue).texture_image_param;
            uVar23 = (ushort)(geometry->primitive_queue).texture_palette_offset;
          }
          if ((((uVar53 << 0xb) >> 0x1b) - 1 < 0x1e) ||
             (uVar30 = (uVar37 << 3) >> 0x1d, uVar30 == 6 || uVar30 == 1)) {
            pgVar10 = geometry->alpha_polygon_list;
          }
          else {
            pgVar10 = geometry->polygon_list;
          }
          polygon_list_2 = pgVar10 + local_3b60;
          uVar57 = polygon_list_2->offset;
          unaff_r6 = (geometry_clipped_vertex_struct *)(uVar57 * 5);
          polygon_list_2->polygons[uVar57].attribute = uVar53;
          polygon_list_2->polygons[uVar57].texture_image_param = uVar37;
          polygon_list_2->polygons[uVar57].flags = (u32)pgVar42;
          polygon_list_2->polygons[uVar57].texture_palette_offset = uVar23;
          polygon_list_2->polygons[uVar57].vertex_base = (u16)uVar46;
          uVar6 = geometry->polygon_count;
          polygon_list_2->offset = uVar57 + 1;
          local_3b60 = (uint)geometry->buffer_page;
          geometry->polygon_count = uVar6 + 1;
          uVar46 = geometry->vertex_list[local_3b60].offset;
          puVar38 = (undefined *)((int)pgVar42->coordinates + uVar46);
        }
        if (puVar38 < (undefined *)0x1801) {
          uVar53 = (geometry->primitive_queue).submit_index;
          i = 0;
          psVar16 = (s32 *)((geometry->primitive_queue).reserved_b + uVar53 * 4);
          unaff_r6 = (geometry_clipped_vertex_struct *)
                     ((geometry->primitive_queue).submit_y + (uVar53 - 1));
          psVar34 = (geometry->primitive_queue).submit_z + (uVar53 - 1);
          psVar19 = (geometry->primitive_queue).submit_w + (uVar53 - 1);
          pgVar28 = geometry->vertex_list[local_3b60].vertexes + uVar46 + 1;
          do {
            sVar52 = clipped_vertex->coordinates[1];
            i_1 = i + 1;
            sVar49 = clipped_vertex->coordinates[2];
            uVar46 = clipped_vertex->uv;
            sVar59 = clipped_vertex->coordinates[3];
            psVar16 = psVar16 + 1;
            *psVar16 = clipped_vertex->coordinates[0];
            uVar6 = clipped_vertex->color;
            unaff_r6 = (geometry_clipped_vertex_struct *)(unaff_r6->coordinates + 1);
            unaff_r6->coordinates[0] = sVar52;
            psVar34 = psVar34 + 1;
            *psVar34 = sVar49;
            psVar19 = psVar19 + 1;
            *psVar19 = sVar59;
            *(s32 *)(pgVar28 + -1) = sVar59;
            *(u16 *)((int)(pgVar28 + -1) + 10) = uVar6;
            *(short *)((int)(pgVar28 + -1) + 0xc) = (short)uVar46;
            *(short *)((int)(pgVar28 + -1) + 0xe) = (short)(uVar46 >> 0x10);
            i = i_1;
            pgVar28 = pgVar28 + 1;
            clipped_vertex = clipped_vertex + 1;
          } while (i_1 < pgVar42);
          goto LAB_0807c1e4;
        }
        break;
      case '\x06':
        geometry_submit_polygons
                  (geometry,(geometry_polygon_batch_struct *)pgVar11->attribute,uVar40,uVar30,
                   (uint)pgVar11->flip_winding,2,next_polygon_batch,in_stack_ffffc494,
                   (geometry_polygon_batch_struct *)polygon_count_2);
        geometry_submit_vertexes(geometry,uVar40 + 2,uVar30);
        break;
      case '\a':
        geometry_submit_polygons
                  (geometry,(geometry_polygon_batch_struct *)pgVar11->attribute,uVar40,uVar30,
                   (uint)pgVar11->flip_winding,2,next_polygon_batch,in_stack_ffffc494,
                   (geometry_polygon_batch_struct *)polygon_count_2);
        geometry_submit_vertexes(geometry,uVar40 + 2,uVar30 << 1);
      }
switchD_0807a790_caseD_8:
      local_3b58 = local_3b58 + 1;
      pgVar11 = (geometry_polygon_batch_struct *)polygon_count_2;
    } while (local_3b58 != iVar41);
    uVar46 = (geometry->primitive_queue).submit_index;
  }
  local_3b28 = (geometry->primitive_queue).submit_x;
  local_3b2c = (geometry->primitive_queue).submit_w;
  local_3b10 = &clipped_vertexes_b[0].uv;
  local_3b30 = clipped_vertexes_b;
  puVar32 = (u32 *)((uint)geometry->buffer_page * 0x18004);
  bVar62 = ((uint)local_3b30 & 8) == 0;
  if (bVar62) {
    unaff_r6 = local_3b30;
  }
  iVar41 = *(int *)((int)puVar32 + (int)(&geometry->primitive_queue + 4) + 0x24c);
  puVar33 = puVar32;
  if (!bVar62) {
    puVar33 = local_3b10;
  }
  if (!bVar62) {
    unaff_r6 = (geometry_clipped_vertex_struct *)(puVar33 + -2);
  }
  geometry_perspective_reciprocals(unaff_r6,unaff_r6[0x105].coordinates + 2,local_3b2c,uVar46);
  if ((geometry->system->config).hires_3d == 0) {
    geometry_perspective_apply_normal(geometry,unaff_r6,unaff_r6[0x105].coordinates + 2);
  }
  else {
    geometry_perspective_apply_hires();
  }
  if (uVar46 != 0) {
    psVar16 = (geometry->primitive_queue).submit_x + 0x61f;
    psVar19 = (geometry->primitive_queue).submit_y + 0x61f;
    psVar26 = (geometry->primitive_queue).submit_z + 0x61f;
    psVar34 = local_3b28;
    iVar41 = (int)(puVar32 + (iVar41 - uVar46) * 4) +
             (int)((int)(&geometry->primitive_queue + 1) + 0x1498);
    do {
      psVar35 = psVar34 + 1;
      sVar52 = *psVar34;
      psVar16 = psVar16 + 1;
      sVar49 = *psVar16;
      psVar19 = psVar19 + 1;
      sVar59 = *psVar19;
      psVar26 = psVar26 + 1;
      *(s32 *)(iVar41 + -0x10) = *psVar26;
      *(short *)(iVar41 + -0xc) = (short)sVar52;
      *(short *)(iVar41 + -10) = (short)sVar49;
      *(short *)(iVar41 + -8) = (short)sVar59;
      psVar34 = psVar35;
      iVar41 = iVar41 + 0x10;
    } while (psVar35 != local_3b28 + uVar46);
  }
  bVar14 = (byte)local_3b5c;
  switch((geometry->primitive_queue).polygon_batches[uVar24 - 1].primitive_type) {
  case '\0':
    uVar46 = (geometry->primitive_queue).polygon_batches[uVar24 - 1].attribute;
    uVar24 = (geometry->primitive_queue).transformed_vertexes;
    (geometry->primitive_queue).polygon_batches[0].primitive_type = '\0';
    (geometry->primitive_queue).polygon_batches[0].vertex_base = '\0';
    (geometry->primitive_queue).polygon_batches[0].flip_winding = '\0';
    (geometry->primitive_queue).polygon_batches[0].attribute = uVar46;
    local_3b5c = local_3b5c % 3;
    iVar39 = uVar24 - local_3b5c;
    iVar41 = iVar39 * 0x10;
    if (local_3b5c != 0) {
      (geometry->primitive_queue).transformed_coordinates[0] =
           *(s32 *)((int)geometry + iVar39 * 0x10 + 0x640);
      (geometry->primitive_queue).transformed_coordinates[1] =
           *(s32 *)((int)geometry + iVar41 + 0x644);
      (geometry->primitive_queue).transformed_coordinates[2] =
           *(s32 *)((int)geometry + iVar41 + 0x648);
      (geometry->primitive_queue).transformed_coordinates[3] =
           *(s32 *)((int)geometry + iVar41 + 0x64c);
      (geometry->primitive_queue).clip_codes[0] = *(u8 *)((int)geometry + iVar39 + 0x1280);
      uVar24 = *(u32 *)((int)geometry + (iVar39 + 0x532) * 4 + 4);
      (geometry->primitive_queue).color[0] = *(u16 *)((int)geometry + (iVar39 + 0x9a0) * 2 + 4);
      (geometry->primitive_queue).uv[0] = uVar24;
      if (local_3b5c == 2) {
        (geometry->primitive_queue).transformed_coordinates[4] =
             *(s32 *)((int)geometry + iVar41 + 0x650);
        (geometry->primitive_queue).transformed_coordinates[5] =
             *(s32 *)((int)geometry + iVar41 + 0x654);
        (geometry->primitive_queue).transformed_coordinates[6] =
             *(s32 *)((int)geometry + iVar41 + 0x658);
        (geometry->primitive_queue).transformed_coordinates[7] =
             *(s32 *)((int)geometry + iVar41 + 0x65c);
        (geometry->primitive_queue).clip_codes[1] = *(u8 *)((int)geometry + iVar39 + 0x1281);
        uVar6 = *(u16 *)((int)geometry + (iVar39 + 0x9a1) * 2 + 4);
        (geometry->primitive_queue).uv[1] = *(u32 *)((int)geometry + (iVar39 + 0x533) * 4 + 4);
        (geometry->primitive_queue).color[1] = uVar6;
      }
    }
    (geometry->primitive_queue).transformed_vertexes = local_3b5c;
    (geometry->primitive_queue).polygon_batch_count = 1;
    (geometry->primitive_queue).vertex_tag = local_3b5c;
    break;
  case '\x01':
    uVar46 = (geometry->primitive_queue).transformed_vertexes;
    local_3b5c = local_3b5c & 3;
    (geometry->primitive_queue).polygon_batches[0].attribute =
         (geometry->primitive_queue).polygon_batches[uVar24 - 1].attribute;
    (geometry->primitive_queue).polygon_batches[0].primitive_type = '\x01';
    iVar39 = uVar46 - local_3b5c;
    (geometry->primitive_queue).polygon_batches[0].vertex_base = '\0';
    iVar41 = iVar39 * 0x10;
    (geometry->primitive_queue).polygon_batches[0].flip_winding = '\0';
    if (local_3b5c != 0) {
      (geometry->primitive_queue).transformed_coordinates[0] =
           *(s32 *)((int)geometry + iVar39 * 0x10 + 0x640);
      (geometry->primitive_queue).transformed_coordinates[1] =
           *(s32 *)((int)geometry + iVar41 + 0x644);
      (geometry->primitive_queue).transformed_coordinates[2] =
           *(s32 *)((int)geometry + iVar41 + 0x648);
      (geometry->primitive_queue).transformed_coordinates[3] =
           *(s32 *)((int)geometry + iVar41 + 0x64c);
      (geometry->primitive_queue).clip_codes[0] = *(u8 *)((int)geometry + iVar39 + 0x1280);
      uVar24 = *(u32 *)((int)geometry + (iVar39 + 0x532) * 4 + 4);
      (geometry->primitive_queue).color[0] = *(u16 *)((int)geometry + (iVar39 + 0x9a0) * 2 + 4);
      (geometry->primitive_queue).uv[0] = uVar24;
      if (local_3b5c != 1) {
        (geometry->primitive_queue).transformed_coordinates[4] =
             *(s32 *)((int)geometry + iVar41 + 0x650);
        (geometry->primitive_queue).transformed_coordinates[5] =
             *(s32 *)((int)geometry + iVar41 + 0x654);
        (geometry->primitive_queue).transformed_coordinates[6] =
             *(s32 *)((int)geometry + iVar41 + 0x658);
        (geometry->primitive_queue).transformed_coordinates[7] =
             *(s32 *)((int)geometry + iVar41 + 0x65c);
        (geometry->primitive_queue).clip_codes[1] = *(u8 *)((int)geometry + iVar39 + 0x1281);
        uVar24 = *(u32 *)((int)geometry + (iVar39 + 0x533) * 4 + 4);
        (geometry->primitive_queue).color[1] = *(u16 *)((int)geometry + (iVar39 + 0x9a1) * 2 + 4);
        (geometry->primitive_queue).uv[1] = uVar24;
        if (local_3b5c == 3) {
          (geometry->primitive_queue).transformed_coordinates[8] =
               *(s32 *)((int)geometry + iVar41 + 0x660);
          (geometry->primitive_queue).transformed_coordinates[9] =
               *(s32 *)((int)geometry + iVar41 + 0x664);
          (geometry->primitive_queue).transformed_coordinates[10] =
               *(s32 *)((int)geometry + iVar41 + 0x668);
          (geometry->primitive_queue).transformed_coordinates[0xb] =
               *(s32 *)((int)geometry + iVar41 + 0x66c);
          (geometry->primitive_queue).clip_codes[2] = *(u8 *)((int)geometry + iVar39 + 0x1282);
          uVar24 = *(u32 *)((int)geometry + (iVar39 + 0x534) * 4 + 4);
          (geometry->primitive_queue).color[2] = *(u16 *)((int)geometry + (iVar39 + 0x9a2) * 2 + 4);
          (geometry->primitive_queue).uv[2] = uVar24;
        }
      }
    }
    (geometry->primitive_queue).transformed_vertexes = local_3b5c;
    (geometry->primitive_queue).polygon_batch_count = 1;
    (geometry->primitive_queue).vertex_tag = local_3b5c;
    break;
  case '\x02':
    if (local_3b5c < 3) {
      uVar53 = (geometry->primitive_queue).polygon_batches[uVar24 - 1].attribute;
      uVar46 = (geometry->primitive_queue).transformed_vertexes;
      uVar5 = (geometry->primitive_queue).polygon_batches[uVar24 - 1].flip_winding;
      (geometry->primitive_queue).polygon_batches[0].primitive_type = '\x02';
      iVar39 = uVar46 - local_3b5c;
      (geometry->primitive_queue).polygon_batches[0].attribute = uVar53;
      (geometry->primitive_queue).polygon_batches[0].vertex_base = '\0';
      (geometry->primitive_queue).polygon_batches[0].flip_winding = uVar5;
      iVar41 = iVar39 * 0x10;
      if (local_3b5c != 0) {
        (geometry->primitive_queue).transformed_coordinates[0] =
             *(s32 *)((int)geometry + iVar39 * 0x10 + 0x640);
        (geometry->primitive_queue).transformed_coordinates[1] =
             *(s32 *)((int)geometry + iVar41 + 0x644);
        (geometry->primitive_queue).transformed_coordinates[2] =
             *(s32 *)((int)geometry + iVar41 + 0x648);
        (geometry->primitive_queue).transformed_coordinates[3] =
             *(s32 *)((int)geometry + iVar41 + 0x64c);
        (geometry->primitive_queue).clip_codes[0] = *(u8 *)((int)geometry + iVar39 + 0x1280);
        uVar24 = *(u32 *)((int)geometry + (iVar39 + 0x532) * 4 + 4);
        (geometry->primitive_queue).color[0] = *(u16 *)((int)geometry + (iVar39 + 0x9a0) * 2 + 4);
        (geometry->primitive_queue).uv[0] = uVar24;
        if (local_3b5c == 2) {
          (geometry->primitive_queue).transformed_coordinates[4] =
               *(s32 *)((int)geometry + iVar41 + 0x650);
          (geometry->primitive_queue).transformed_coordinates[5] =
               *(s32 *)((int)geometry + iVar41 + 0x654);
          (geometry->primitive_queue).transformed_coordinates[6] =
               *(s32 *)((int)geometry + iVar41 + 0x658);
          (geometry->primitive_queue).transformed_coordinates[7] =
               *(s32 *)((int)geometry + iVar41 + 0x65c);
          (geometry->primitive_queue).clip_codes[1] = *(u8 *)((int)geometry + iVar39 + 0x1281);
          uVar6 = *(u16 *)((int)geometry + (iVar39 + 0x9a1) * 2 + 4);
          (geometry->primitive_queue).uv[1] = *(u32 *)((int)geometry + (iVar39 + 0x533) * 4 + 4);
          (geometry->primitive_queue).color[1] = uVar6;
        }
      }
LAB_0807bee0:
      (geometry->primitive_queue).transformed_vertexes = local_3b5c;
      (geometry->primitive_queue).polygon_batch_count = 1;
      (geometry->primitive_queue).vertex_tag = local_3b5c;
      break;
    }
    uVar46 = (geometry->primitive_queue).batch_splits_strip;
    if (uVar46 == 0) goto LAB_0807d438;
    uVar46 = (geometry->primitive_queue).transformed_vertexes;
    bVar29 = (geometry->primitive_queue).polygon_batches[uVar24 - 1].flip_winding;
    uVar24 = (geometry->primitive_queue).polygon_batches[uVar24 - 1].attribute;
    (geometry->primitive_queue).polygon_batches[0].primitive_type = '\x02';
    (geometry->primitive_queue).polygon_batches[0].attribute = uVar24;
    (geometry->primitive_queue).polygon_batches[0].vertex_base = '\0';
    (geometry->primitive_queue).polygon_batches[0].flip_winding = bVar14 & 1 ^ bVar29;
    (geometry->primitive_queue).transformed_coordinates[0] =
         (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -8];
    (geometry->primitive_queue).transformed_coordinates[1] =
         (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -7];
    (geometry->primitive_queue).transformed_coordinates[2] =
         (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -6];
    (geometry->primitive_queue).transformed_coordinates[3] =
         (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -5];
    (geometry->primitive_queue).clip_codes[0] = (geometry->primitive_queue).clip_codes[uVar46 - 2];
    (geometry->primitive_queue).color[0] = (geometry->primitive_queue).color[uVar46 - 2];
    (geometry->primitive_queue).uv[0] = (geometry->primitive_queue).uv[uVar46 - 2];
    (geometry->primitive_queue).transformed_coordinates[4] =
         (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -4];
    (geometry->primitive_queue).transformed_coordinates[5] =
         (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -3];
    (geometry->primitive_queue).transformed_coordinates[6] =
         (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -2];
    (geometry->primitive_queue).transformed_coordinates[7] =
         (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -1];
    (geometry->primitive_queue).clip_codes[1] = (geometry->primitive_queue).clip_codes[uVar46 - 1];
    (geometry->primitive_queue).color[1] = (geometry->primitive_queue).color[uVar46 - 1];
    (geometry->primitive_queue).uv[1] = (geometry->primitive_queue).uv[uVar46 - 1];
    goto LAB_0807cecc;
  case '\x03':
    if (local_3b5c < 4) {
      uVar24 = (geometry->primitive_queue).polygon_batches[uVar24 - 1].attribute;
      uVar46 = (geometry->primitive_queue).transformed_vertexes;
      (geometry->primitive_queue).polygon_batches[0].primitive_type = '\x03';
      iVar39 = uVar46 - local_3b5c;
      (geometry->primitive_queue).polygon_batches[0].attribute = uVar24;
      (geometry->primitive_queue).polygon_batches[0].vertex_base = '\0';
      iVar41 = iVar39 * 0x10;
      (geometry->primitive_queue).polygon_batches[0].flip_winding = '\x01';
      if (local_3b5c != 0) {
        (geometry->primitive_queue).transformed_coordinates[0] =
             *(s32 *)((int)geometry + iVar39 * 0x10 + 0x640);
        (geometry->primitive_queue).transformed_coordinates[1] =
             *(s32 *)((int)geometry + iVar41 + 0x644);
        (geometry->primitive_queue).transformed_coordinates[2] =
             *(s32 *)((int)geometry + iVar41 + 0x648);
        (geometry->primitive_queue).transformed_coordinates[3] =
             *(s32 *)((int)geometry + iVar41 + 0x64c);
        (geometry->primitive_queue).clip_codes[0] = *(u8 *)((int)geometry + iVar39 + 0x1280);
        uVar24 = *(u32 *)((int)geometry + (iVar39 + 0x532) * 4 + 4);
        (geometry->primitive_queue).color[0] = *(u16 *)((int)geometry + (iVar39 + 0x9a0) * 2 + 4);
        (geometry->primitive_queue).uv[0] = uVar24;
        if (local_3b5c != 1) {
          (geometry->primitive_queue).transformed_coordinates[4] =
               *(s32 *)((int)geometry + iVar41 + 0x650);
          (geometry->primitive_queue).transformed_coordinates[5] =
               *(s32 *)((int)geometry + iVar41 + 0x654);
          (geometry->primitive_queue).transformed_coordinates[6] =
               *(s32 *)((int)geometry + iVar41 + 0x658);
          (geometry->primitive_queue).transformed_coordinates[7] =
               *(s32 *)((int)geometry + iVar41 + 0x65c);
          (geometry->primitive_queue).clip_codes[1] = *(u8 *)((int)geometry + iVar39 + 0x1281);
          uVar24 = *(u32 *)((int)geometry + (iVar39 + 0x533) * 4 + 4);
          (geometry->primitive_queue).color[1] = *(u16 *)((int)geometry + (iVar39 + 0x9a1) * 2 + 4);
          (geometry->primitive_queue).uv[1] = uVar24;
          if (local_3b5c == 3) {
            (geometry->primitive_queue).transformed_coordinates[8] =
                 *(s32 *)((int)geometry + iVar41 + 0x660);
            (geometry->primitive_queue).transformed_coordinates[9] =
                 *(s32 *)((int)geometry + iVar41 + 0x664);
            (geometry->primitive_queue).transformed_coordinates[10] =
                 *(s32 *)((int)geometry + iVar41 + 0x668);
            (geometry->primitive_queue).transformed_coordinates[0xb] =
                 *(s32 *)((int)geometry + iVar41 + 0x66c);
            (geometry->primitive_queue).clip_codes[2] = *(u8 *)((int)geometry + iVar39 + 0x1282);
            uVar24 = *(u32 *)((int)geometry + (iVar39 + 0x534) * 4 + 4);
            (geometry->primitive_queue).color[2] =
                 *(u16 *)((int)geometry + (iVar39 + 0x9a2) * 2 + 4);
            (geometry->primitive_queue).uv[2] = uVar24;
          }
        }
      }
      goto LAB_0807bee0;
    }
  case '\a':
    uVar46 = (geometry->primitive_queue).transformed_vertexes;
    if ((geometry->primitive_queue).batch_splits_strip == 0) {
      uVar53 = (local_3b5c & 1) + 2;
      (geometry->primitive_queue).polygon_batches[0].attribute =
           (geometry->primitive_queue).polygon_batches[uVar24 - 1].attribute;
      (geometry->primitive_queue).polygon_batches[0].primitive_type = '\a';
      iVar39 = uVar46 - uVar53;
      (geometry->primitive_queue).polygon_batches[0].vertex_base = '\0';
      (geometry->primitive_queue).polygon_batches[0].flip_winding = '\x01';
      iVar41 = (int)geometry + iVar39 * 0x10 + 0x640;
      (geometry->primitive_queue).transformed_coordinates[0] =
           *(s32 *)((int)geometry + iVar39 * 0x10 + 0x640);
      (geometry->primitive_queue).transformed_coordinates[1] = *(s32 *)(iVar41 + 4);
      (geometry->primitive_queue).transformed_coordinates[2] = *(s32 *)(iVar41 + 8);
      (geometry->primitive_queue).transformed_coordinates[3] = *(s32 *)(iVar41 + 0xc);
      (geometry->primitive_queue).clip_codes[0] = *(u8 *)((int)geometry + iVar39 + 0x1280);
      uVar24 = *(u32 *)((int)geometry + (iVar39 + 0x532) * 4 + 4);
      (geometry->primitive_queue).color[0] = *(u16 *)((int)geometry + (iVar39 + 0x9a0) * 2 + 4);
    }
    else {
      uVar24 = (geometry->primitive_queue).polygon_batches[uVar24 - 1].attribute;
      uVar53 = (local_3b5c & 1) + 2;
      (geometry->primitive_queue).polygon_batches[0].primitive_type = '\x03';
      iVar39 = uVar46 - uVar53;
      (geometry->primitive_queue).polygon_batches[0].attribute = uVar24;
      (geometry->primitive_queue).polygon_batches[0].vertex_base = '\0';
      iVar41 = (int)geometry + iVar39 * 0x10 + 0x640;
      (geometry->primitive_queue).polygon_batches[0].flip_winding = '\x01';
      (geometry->primitive_queue).transformed_coordinates[0] =
           *(s32 *)((int)geometry + iVar39 * 0x10 + 0x640);
      (geometry->primitive_queue).transformed_coordinates[1] = *(s32 *)(iVar41 + 4);
      (geometry->primitive_queue).transformed_coordinates[2] = *(s32 *)(iVar41 + 8);
      (geometry->primitive_queue).transformed_coordinates[3] = *(s32 *)(iVar41 + 0xc);
      (geometry->primitive_queue).clip_codes[0] = *(u8 *)((int)geometry + iVar39 + 0x1280);
      uVar24 = *(u32 *)((int)geometry + (iVar39 + 0x532) * 4 + 4);
      (geometry->primitive_queue).color[0] = *(u16 *)((int)geometry + (iVar39 + 0x9a0) * 2 + 4);
    }
    (geometry->primitive_queue).uv[0] = uVar24;
    (geometry->primitive_queue).transformed_coordinates[4] = *(s32 *)(iVar41 + 0x10);
    (geometry->primitive_queue).transformed_coordinates[5] = *(s32 *)(iVar41 + 0x14);
    (geometry->primitive_queue).transformed_coordinates[6] = *(s32 *)(iVar41 + 0x18);
    (geometry->primitive_queue).transformed_coordinates[7] = *(s32 *)(iVar41 + 0x1c);
    (geometry->primitive_queue).clip_codes[1] = (geometry->primitive_queue).clip_codes[iVar39 + 1];
    uVar24 = (geometry->primitive_queue).uv[iVar39 + 1];
    (geometry->primitive_queue).color[1] = (geometry->primitive_queue).color[iVar39 + 1];
    (geometry->primitive_queue).uv[1] = uVar24;
    if (uVar53 == 3) {
      (geometry->primitive_queue).transformed_coordinates[8] = *(s32 *)(iVar41 + 0x20);
      (geometry->primitive_queue).transformed_coordinates[9] = *(s32 *)(iVar41 + 0x24);
      (geometry->primitive_queue).transformed_coordinates[10] = *(s32 *)(iVar41 + 0x28);
      (geometry->primitive_queue).transformed_coordinates[0xb] = *(s32 *)(iVar41 + 0x2c);
      (geometry->primitive_queue).clip_codes[2] = (geometry->primitive_queue).clip_codes[iVar39 + 2]
      ;
      uVar24 = (geometry->primitive_queue).uv[iVar39 + 2];
      (geometry->primitive_queue).color[2] = (geometry->primitive_queue).color[iVar39 + 2];
      (geometry->primitive_queue).uv[2] = uVar24;
    }
    (geometry->primitive_queue).transformed_vertexes = uVar53;
    (geometry->primitive_queue).polygon_batch_count = 1;
    (geometry->primitive_queue).vertex_tag = uVar53;
    break;
  case '\x06':
    uVar46 = (geometry->primitive_queue).batch_splits_strip;
    if (uVar46 == 0) {
LAB_0807d438:
      uVar53 = (geometry->primitive_queue).polygon_batches[uVar24 - 1].attribute;
      uVar57 = (geometry->primitive_queue).transformed_vertexes;
      bVar29 = (geometry->primitive_queue).polygon_batches[uVar24 - 1].flip_winding;
      (geometry->primitive_queue).polygon_batches[0].vertex_base = (u8)uVar46;
      (geometry->primitive_queue).polygon_batches[0].attribute = uVar53;
      (geometry->primitive_queue).polygon_batches[0].primitive_type = '\x06';
      (geometry->primitive_queue).polygon_batches[0].flip_winding = bVar14 & 1 ^ bVar29;
      (geometry->primitive_queue).transformed_coordinates[0] =
           (geometry->primitive_queue).transformed_coordinates[uVar57 * 4 + -8];
      (geometry->primitive_queue).transformed_coordinates[1] =
           (geometry->primitive_queue).transformed_coordinates[uVar57 * 4 + -7];
      (geometry->primitive_queue).transformed_coordinates[2] =
           (geometry->primitive_queue).transformed_coordinates[uVar57 * 4 + -6];
      (geometry->primitive_queue).transformed_coordinates[3] =
           (geometry->primitive_queue).transformed_coordinates[uVar57 * 4 + -5];
      (geometry->primitive_queue).clip_codes[0] = (geometry->primitive_queue).clip_codes[uVar57 - 2]
      ;
      (geometry->primitive_queue).color[0] = (geometry->primitive_queue).color[uVar57 - 2];
      (geometry->primitive_queue).uv[0] = (geometry->primitive_queue).uv[uVar57 - 2];
      (geometry->primitive_queue).transformed_coordinates[4] =
           (geometry->primitive_queue).transformed_coordinates[uVar57 * 4 + -4];
      (geometry->primitive_queue).transformed_coordinates[5] =
           (geometry->primitive_queue).transformed_coordinates[uVar57 * 4 + -3];
      (geometry->primitive_queue).transformed_coordinates[6] =
           (geometry->primitive_queue).transformed_coordinates[uVar57 * 4 + -2];
      (geometry->primitive_queue).transformed_coordinates[7] =
           (geometry->primitive_queue).transformed_coordinates[uVar57 * 4 + -1];
      (geometry->primitive_queue).clip_codes[1] = (geometry->primitive_queue).clip_codes[uVar57 - 1]
      ;
      (geometry->primitive_queue).color[1] = (geometry->primitive_queue).color[uVar57 - 1];
      (geometry->primitive_queue).uv[1] = (geometry->primitive_queue).uv[uVar57 - 1];
    }
    else {
      uVar46 = (geometry->primitive_queue).transformed_vertexes;
      bVar29 = (geometry->primitive_queue).polygon_batches[uVar24 - 1].flip_winding;
      (geometry->primitive_queue).polygon_batches[0].attribute =
           (geometry->primitive_queue).polygon_batches[uVar24 - 1].attribute;
      (geometry->primitive_queue).polygon_batches[0].vertex_base = '\0';
      (geometry->primitive_queue).polygon_batches[0].primitive_type = '\x02';
      (geometry->primitive_queue).polygon_batches[0].flip_winding = bVar14 & 1 ^ bVar29;
      (geometry->primitive_queue).transformed_coordinates[0] =
           (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -8];
      (geometry->primitive_queue).transformed_coordinates[1] =
           (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -7];
      (geometry->primitive_queue).transformed_coordinates[2] =
           (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -6];
      (geometry->primitive_queue).transformed_coordinates[3] =
           (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -5];
      (geometry->primitive_queue).clip_codes[0] = (geometry->primitive_queue).clip_codes[uVar46 - 2]
      ;
      (geometry->primitive_queue).color[0] = (geometry->primitive_queue).color[uVar46 - 2];
      (geometry->primitive_queue).uv[0] = (geometry->primitive_queue).uv[uVar46 - 2];
      (geometry->primitive_queue).transformed_coordinates[4] =
           (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -4];
      (geometry->primitive_queue).transformed_coordinates[5] =
           (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -3];
      (geometry->primitive_queue).transformed_coordinates[6] =
           (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -2];
      (geometry->primitive_queue).transformed_coordinates[7] =
           (geometry->primitive_queue).transformed_coordinates[uVar46 * 4 + -1];
      (geometry->primitive_queue).clip_codes[1] = (geometry->primitive_queue).clip_codes[uVar46 - 1]
      ;
      (geometry->primitive_queue).color[1] = (geometry->primitive_queue).color[uVar46 - 1];
      (geometry->primitive_queue).uv[1] = (geometry->primitive_queue).uv[uVar46 - 1];
    }
LAB_0807cecc:
    (geometry->primitive_queue).transformed_vertexes = 2;
    (geometry->primitive_queue).polygon_batch_count = 1;
    (geometry->primitive_queue).vertex_tag = 2;
  }
  uVar24 = (geometry->primitive_queue).texture_data_count;
  if (uVar24 != 0) {
    (geometry->primitive_queue).texture_image_param =
         (geometry->primitive_queue).texture_data[uVar24 - 1].image_param;
    (geometry->primitive_queue).texture_palette_offset =
         (uint)(geometry->primitive_queue).texture_data[uVar24 - 1].palette_offset;
  }
  (geometry->primitive_queue).texture_data_vertex_tag = 0xff;
  (geometry->primitive_queue).texture_data_count = 0;
  if (local_3c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


