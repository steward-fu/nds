/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert
 * Address  : 0808985c
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

void texture_cache_convert
               (texture_cache_element_struct *texture_cache_element,u32 *texture_dest,
               u8 *texture_source,u16 *palette,u32 texture_format,u32 texture_size,
               u32 color0_transparent)

{
  undefined auVar1 [16];
  byte bVar2;
  int iVar3;
  u32 *converted_palette;
  u32 *converted_palette_1;
  u32 *converted_palette_2;
  u32 *converted_palette_3;
  undefined8 *puVar4;
  u32 *converted_palette_4;
  u32 *converted_palette_5;
  u32 *converted_palette_6;
  u32 *converted_palette_7;
  u32 *converted_palette_8;
  u32 *converted_palette_9;
  u32 current_pixel_block;
  uint uVar5;
  u32 *puVar6;
  u32 uVar7;
  u32 i;
  int iVar8;
  u16 *texture_source16;
  u32 *puVar9;
  int iVar10;
  uint uVar11;
  undefined (*pauVar12) [16];
  u8 *puVar13;
  undefined8 *puVar14;
  u32 *puVar15;
  u32 current_pixel;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  int local_a0;
  int local_90;
  
  iVar3 = __stack_chk_guard;
  puVar6 = texture_dest;
  switch(texture_format) {
  case 1:
    converted_palette_5 = texture_cache_element->palette;
    texture_cache_element->paletted = '\x01';
    converted_palette_3 = converted_palette_5;
    if (texture_source == (u8 *)0x0) {
LAB_0808bbfc:
      if (converted_palette_3 == (u32 *)0x0) {
        converted_palette_3 = (u32 *)malloc(0x400);
        texture_cache_element->palette = converted_palette_3;
      }
      iVar19 = __stack_chk_guard;
      uVar5 = (uint)*palette;
      uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
      *converted_palette_3 = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2;
      goto joined_r0x0808be28;
    }
    if (converted_palette_5 == (u32 *)0x0) {
      converted_palette_5 = (u32 *)malloc(0x400);
      texture_cache_element->palette = converted_palette_5;
    }
    auVar31._8_8_ = 0x1f1f1f001f1f1f;
    auVar31._0_8_ = 0x1f1f1f001f1f1f;
    uVar5 = 0;
    auVar30._8_8_ = 0x1010100010101;
    auVar30._0_8_ = 0x1010100010101;
    do {
      uVar16 = ((int)converted_palette_5 << 0x1d) >> 0x1f & 3;
      uVar11 = (uVar5 * 4 + (uVar5 >> 1)) * 0x1000000;
      uVar18 = uVar16;
      if (uVar16 == 0) {
        iVar19 = 0x20;
        local_90 = 4;
        local_a0 = 0x20;
        puVar15 = converted_palette_5;
        iVar10 = iVar19;
      }
      else {
        uVar17 = (uint)*palette;
        uVar17 = ((uVar17 << 0x11) >> 0x1b) << 0x10 | ((uVar17 << 0x16) >> 0x1b) << 8 |
                 uVar17 & 0x1f;
        puVar15 = converted_palette_5 + 1;
        *converted_palette_5 = (uVar17 + 0x1f1f1f >> 5 & 0x10101) + uVar17 * 2 | uVar11;
        if (uVar16 == 1) {
          iVar19 = 0x1f;
        }
        else {
          uVar17 = (uint)palette[1];
          puVar15 = converted_palette_5 + 2;
          uVar17 = ((uVar17 << 0x11) >> 0x1b) << 0x10 | ((uVar17 << 0x16) >> 0x1b) << 8 |
                   uVar17 & 0x1f;
          converted_palette_5[1] = (uVar17 + 0x1f1f1f >> 5 & 0x10101) + uVar17 * 2 | uVar11;
          if (uVar16 == 3) {
            uVar17 = (uint)palette[2];
            puVar15 = converted_palette_5 + 3;
            iVar19 = 0x1d;
            uVar17 = ((uVar17 << 0x11) >> 0x1b) << 0x10 | ((uVar17 << 0x16) >> 0x1b) << 8 |
                     uVar17 & 0x1f;
            converted_palette_5[2] = (uVar17 + 0x1f1f1f >> 5 & 0x10101) + uVar17 * 2 | uVar11;
          }
          else {
            iVar19 = 0x1e;
            uVar18 = 2;
          }
        }
        local_a0 = 0x20 - uVar16;
        local_90 = 3;
        iVar10 = 0x18;
      }
      pauVar12 = (undefined (*) [16])(palette + uVar16);
      auVar34 = SIMDExpandImmediate(0,0,0x1f);
      auVar32 = SIMDExpandImmediate(0,8,0x1f);
      auVar1._4_4_ = uVar11;
      auVar1._0_4_ = uVar11;
      auVar1._8_8_ = 0;
      auVar1 = auVar1 & auVar1 << 0x40;
      puVar14 = (undefined8 *)(converted_palette_5 + uVar16);
      auVar24 = *pauVar12;
      auVar23 = pauVar12[1];
      auVar21 = pauVar12[2];
      auVar20 = VectorCopyLong(auVar24._0_8_,2,1);
      auVar37 = VectorCopyLong(auVar24._8_8_,2,1);
      auVar22 = VectorCopyLong(auVar23._0_8_,2,1);
      auVar33 = VectorCopyLong(auVar23._8_8_,2,1);
      auVar26 = VectorShiftRight(auVar20,5);
      auVar29 = VectorShiftRight(auVar20,10);
      auVar20 = VectorCopyLong(auVar21._0_8_,2,1);
      auVar25 = VectorCopyLong(auVar21._8_8_,2,1);
      auVar27 = VectorShiftLeft(auVar26 & auVar34,8,0x20,0);
      auVar28 = VectorShiftLeft(auVar29 & auVar34,0x10,0x20,0);
      auVar29 = VectorCopyLong(SUB168(auVar24 & auVar32,0),2,1);
      auVar26 = VectorCopyLong(SUB168(auVar24 & auVar32,8),2,1);
      auVar29 = auVar27 | auVar28 | auVar29;
      auVar28 = VectorShiftRight(auVar37,5);
      auVar27 = VectorShiftRight(auVar37,10);
      auVar24 = VectorAdd(auVar29,auVar31,4);
      auVar29 = VectorAdd(auVar29,auVar29,4);
      auVar28 = VectorShiftLeft(auVar28 & auVar34,8,0x20,0);
      auVar27 = VectorShiftLeft(auVar27 & auVar34,0x10,0x20,0);
      auVar37 = VectorShiftRight(auVar24,5);
      auVar26 = auVar28 | auVar27 | auVar26;
      auVar27 = VectorShiftRight(auVar22,5);
      auVar24 = VectorShiftRight(auVar22,10);
      auVar29 = VectorAdd(auVar37 & auVar30,auVar29,4);
      auVar22 = VectorCopyLong(SUB168(auVar23 & auVar32,0),2,1);
      auVar27 = VectorShiftLeft(auVar27 & auVar34,8,0x20,0);
      auVar24 = VectorShiftLeft(auVar24 & auVar34,0x10,0x20,0);
      *puVar14 = SUB168(auVar29 | auVar1,0);
      puVar14[1] = SUB168(auVar29 | auVar1,8);
      auVar37 = VectorAdd(auVar26,auVar31,4);
      auVar29 = VectorAdd(auVar26,auVar26,4);
      auVar26 = VectorShiftRight(auVar33,5);
      auVar28 = VectorShiftRight(auVar33,10);
      auVar37 = VectorShiftRight(auVar37,5);
      auVar26 = VectorShiftLeft(auVar26 & auVar34,8,0x20,0);
      auVar33 = VectorShiftLeft(auVar28 & auVar34,0x10,0x20,0);
      auVar37 = VectorAdd(auVar37 & auVar30,auVar29,4);
      auVar28 = VectorShiftRight(auVar20,10);
      auVar20 = VectorShiftRight(auVar20,5);
      auVar29 = VectorCopyLong(SUB168(auVar23 & auVar32,8),2,1);
      puVar14[2] = SUB168(auVar37 | auVar1,0);
      puVar14[3] = SUB168(auVar37 | auVar1,8);
      auVar37 = VectorShiftLeft(auVar28 & auVar34,0x10,0x20,0);
      auVar22 = auVar27 | auVar24 | auVar22;
      auVar24 = VectorShiftLeft(auVar20 & auVar34,8,0x20,0);
      auVar29 = auVar26 | auVar33 | auVar29;
      auVar26 = VectorShiftRight(auVar25,5);
      auVar25 = VectorShiftRight(auVar25,10);
      auVar23 = VectorAdd(auVar22,auVar31,4);
      auVar20 = VectorAdd(auVar22,auVar22,4);
      auVar23 = VectorShiftRight(auVar23,5);
      auVar27 = VectorShiftLeft(auVar26 & auVar34,8,0x20,0);
      auVar22 = VectorShiftLeft(auVar25 & auVar34,0x10,0x20,0);
      auVar25 = VectorCopyLong(SUB168(auVar21 & auVar32,0),2,1);
      auVar26 = VectorCopyLong(SUB168(auVar21 & auVar32,8),2,1);
      auVar23 = VectorAdd(auVar23 & auVar30,auVar20,4);
      auVar21 = VectorAdd(auVar29,auVar31,4);
      auVar29 = VectorAdd(auVar29,auVar29,4);
      auVar25 = auVar24 | auVar37 | auVar25;
      auVar26 = auVar27 | auVar22 | auVar26;
      auVar24 = VectorShiftRight(auVar21,5);
      auVar21 = VectorAdd(auVar25,auVar31,4);
      auVar25 = VectorAdd(auVar25,auVar25,4);
      auVar20 = VectorAdd(auVar26,auVar31,4);
      auVar22 = VectorAdd(auVar26,auVar26,4);
      puVar14[4] = SUB168(auVar23 | auVar1,0);
      puVar14[5] = SUB168(auVar23 | auVar1,8);
      auVar23 = VectorShiftRight(auVar21,5);
      auVar21 = VectorShiftRight(auVar20,5);
      auVar20 = VectorAdd(auVar24 & auVar30,auVar29,4);
      auVar23 = VectorAdd(auVar23 & auVar30,auVar25,4);
      auVar24 = VectorAdd(auVar21 & auVar30,auVar22,4);
      puVar14[6] = SUB168(auVar20 | auVar1,0);
      puVar14[7] = SUB168(auVar20 | auVar1,8);
      puVar14[8] = SUB168(auVar23 | auVar1,0);
      puVar14[9] = SUB168(auVar23 | auVar1,8);
      puVar14[10] = SUB168(auVar24 | auVar1,0);
      puVar14[0xb] = SUB168(auVar24 | auVar1,8);
      if (local_90 == 4) {
        auVar24 = pauVar12[3];
        auVar23 = VectorCopyLong(auVar24._0_8_,2,1);
        auVar22 = VectorCopyLong(auVar24._8_8_,2,1);
        auVar20 = VectorShiftRight(auVar23,5);
        auVar21 = VectorShiftRight(auVar22,5);
        auVar23 = VectorShiftRight(auVar23,10);
        auVar25 = VectorShiftRight(auVar22,10);
        auVar22 = VectorShiftLeft(auVar20 & auVar34,8,0x20,0);
        auVar21 = VectorShiftLeft(auVar21 & auVar34,8,0x20,0);
        auVar23 = VectorShiftLeft(auVar23 & auVar34,0x10,0x20,0);
        auVar25 = VectorShiftLeft(auVar25 & auVar34,0x10,0x20,0);
        auVar20 = VectorCopyLong(SUB168(auVar24 & auVar32,0),2,1);
        auVar34 = VectorCopyLong(SUB168(auVar24 & auVar32,8),2,1);
        auVar20 = auVar22 | auVar23 | auVar20;
        auVar34 = auVar21 | auVar25 | auVar34;
        auVar23 = VectorAdd(auVar20,auVar31,4);
        auVar32 = VectorAdd(auVar20,auVar20,4);
        auVar24 = VectorAdd(auVar34,auVar31,4);
        auVar34 = VectorAdd(auVar34,auVar34,4);
        auVar23 = VectorShiftRight(auVar23,5);
        auVar24 = VectorShiftRight(auVar24,5);
        auVar32 = VectorAdd(auVar23 & auVar30,auVar32,4);
        auVar34 = VectorAdd(auVar24 & auVar30,auVar34,4);
        puVar14[0xc] = SUB168(auVar32 | auVar1,0);
        puVar14[0xd] = SUB168(auVar32 | auVar1,8);
        puVar14[0xe] = SUB168(auVar34 | auVar1,0);
        puVar14[0xf] = SUB168(auVar34 | auVar1,8);
      }
      iVar8 = iVar10 + uVar18;
      iVar19 = iVar19 - iVar10;
      if (iVar10 != local_a0) {
        uVar18 = (uint)palette[iVar8];
        uVar18 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 |
                 uVar18 & 0x1f;
        puVar15[iVar10] = (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 | uVar11;
        if (iVar19 != 1) {
          uVar18 = (uint)palette[iVar8 + 1];
          uVar18 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 |
                   uVar18 & 0x1f;
          puVar15[iVar10 + 1] = (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 | uVar11;
          if (iVar19 != 2) {
            uVar18 = (uint)palette[iVar8 + 2];
            uVar18 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 |
                     uVar18 & 0x1f;
            puVar15[iVar10 + 2] = (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 | uVar11;
            if (iVar19 != 3) {
              uVar18 = (uint)palette[iVar8 + 3];
              uVar18 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 |
                       uVar18 & 0x1f;
              puVar15[iVar10 + 3] = (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 | uVar11;
              if (iVar19 != 4) {
                uVar18 = (uint)palette[iVar8 + 4];
                uVar18 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 |
                         uVar18 & 0x1f;
                puVar15[iVar10 + 4] = (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 | uVar11;
                if (iVar19 != 5) {
                  uVar18 = (uint)palette[iVar8 + 5];
                  uVar18 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 |
                           uVar18 & 0x1f;
                  puVar15[iVar10 + 5] = (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 | uVar11;
                  if (iVar19 != 6) {
                    uVar18 = (uint)palette[iVar8 + 6];
                    uVar18 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 |
                             uVar18 & 0x1f;
                    puVar15[iVar10 + 6] = (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 | uVar11;
                  }
                }
              }
            }
          }
        }
      }
      uVar5 = uVar5 + 1;
      converted_palette_5 = converted_palette_5 + 0x20;
    } while (uVar5 != 8);
    if (texture_size != 0) {
      if (texture_size < 0x16 ||
          texture_source < texture_dest + 4 && texture_dest < texture_source + 0x10) {
        puVar13 = texture_source + -1;
        do {
          puVar13 = puVar13 + 1;
          puVar15 = (u32 *)((int)puVar6 + 1);
          *(u8 *)puVar6 = *puVar13;
          puVar6 = puVar15;
        } while (puVar15 != (u32 *)((int)texture_dest + texture_size));
      }
      else {
        uVar5 = -((uint)texture_source & 7) & 0xf;
        if (texture_size <= uVar5) {
          uVar5 = texture_size;
        }
        i = uVar5;
        if (uVar5 != 0) {
          *(u8 *)texture_dest = *texture_source;
          puVar6 = (u32 *)((int)texture_dest + 1);
          if (uVar5 != 1) {
            *(u8 *)((int)texture_dest + 1) = texture_source[1];
            puVar6 = (u32 *)((int)texture_dest + 2);
            if (uVar5 != 2) {
              *(u8 *)((int)texture_dest + 2) = texture_source[2];
              puVar6 = (u32 *)((int)texture_dest + 3);
              if (uVar5 != 3) {
                *(u8 *)((int)texture_dest + 3) = texture_source[3];
                puVar6 = texture_dest + 1;
                if (uVar5 != 4) {
                  *(u8 *)(texture_dest + 1) = texture_source[4];
                  puVar6 = (u32 *)((int)texture_dest + 5);
                  if (uVar5 != 5) {
                    *(u8 *)((int)texture_dest + 5) = texture_source[5];
                    if (uVar5 == 6) {
                      puVar6 = (u32 *)((int)texture_dest + 6);
                      i = 6;
                    }
                    else {
                      *(u8 *)((int)texture_dest + 6) = texture_source[6];
                      puVar6 = (u32 *)((int)texture_dest + 7);
                      if (uVar5 != 7) {
                        *(u8 *)((int)texture_dest + 7) = texture_source[7];
                        puVar6 = texture_dest + 2;
                        if (uVar5 != 8) {
                          *(u8 *)(texture_dest + 2) = texture_source[8];
                          puVar6 = (u32 *)((int)texture_dest + 9);
                          if (uVar5 != 9) {
                            *(u8 *)((int)texture_dest + 9) = texture_source[9];
                            puVar6 = (u32 *)((int)texture_dest + 10);
                            if (uVar5 != 10) {
                              *(u8 *)((int)texture_dest + 10) = texture_source[10];
                              puVar6 = (u32 *)((int)texture_dest + 0xb);
                              if (uVar5 != 0xb) {
                                *(u8 *)((int)texture_dest + 0xb) = texture_source[0xb];
                                puVar6 = texture_dest + 3;
                                if (uVar5 != 0xc) {
                                  *(u8 *)(texture_dest + 3) = texture_source[0xc];
                                  puVar6 = (u32 *)((int)texture_dest + 0xd);
                                  if (uVar5 != 0xd) {
                                    *(u8 *)((int)texture_dest + 0xd) = texture_source[0xd];
                                    if (uVar5 == 0xf) {
                                      *(u8 *)((int)texture_dest + 0xe) = texture_source[0xe];
                                      puVar6 = (u32 *)((int)texture_dest + 0xf);
                                    }
                                    else {
                                      puVar6 = (u32 *)((int)texture_dest + 0xe);
                                      i = 0xe;
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
        uVar11 = ((texture_size - uVar5) - 0x10 >> 4) + 1;
        if (0xe < (texture_size - 1) - uVar5) {
          puVar14 = (undefined8 *)((int)texture_dest + uVar5);
          uVar18 = 0;
          pauVar12 = (undefined (*) [16])(texture_source + uVar5);
          do {
            auVar34 = *pauVar12;
            uVar18 = uVar18 + 1;
            pauVar12 = pauVar12 + 1;
            *puVar14 = auVar34._0_8_;
            puVar14[1] = auVar34._8_8_;
            puVar14 = puVar14 + 2;
          } while (uVar18 < uVar11);
          i = i + uVar11 * 0x10;
          puVar6 = puVar6 + uVar11 * 4;
          if (uVar11 * 0x10 - (texture_size - uVar5) == 0) break;
        }
LAB_08089ee4:
        *(u8 *)puVar6 = texture_source[i];
        if (i + 1 < texture_size) {
          *(u8 *)((int)puVar6 + 1) = texture_source[i + 1];
          if (i + 2 < texture_size) {
            *(u8 *)((int)puVar6 + 2) = texture_source[i + 2];
            if (i + 3 < texture_size) {
              *(u8 *)((int)puVar6 + 3) = texture_source[i + 3];
              if (i + 4 < texture_size) {
                *(u8 *)(puVar6 + 1) = texture_source[i + 4];
                if (i + 5 < texture_size) {
                  *(u8 *)((int)puVar6 + 5) = texture_source[i + 5];
                  if (i + 6 < texture_size) {
                    *(u8 *)((int)puVar6 + 6) = texture_source[i + 6];
                    if (i + 7 < texture_size) {
                      *(u8 *)((int)puVar6 + 7) = texture_source[i + 7];
                      if (i + 8 < texture_size) {
                        *(u8 *)(puVar6 + 2) = texture_source[i + 8];
                        if (i + 9 < texture_size) {
                          *(u8 *)((int)puVar6 + 9) = texture_source[i + 9];
                          if (i + 10 < texture_size) {
                            *(u8 *)((int)puVar6 + 10) = texture_source[i + 10];
                            if (i + 0xb < texture_size) {
                              *(u8 *)((int)puVar6 + 0xb) = texture_source[i + 0xb];
                              if (i + 0xc < texture_size) {
                                *(u8 *)(puVar6 + 3) = texture_source[i + 0xc];
                                if (i + 0xd < texture_size) {
                                  *(u8 *)((int)puVar6 + 0xd) = texture_source[i + 0xd];
                                  if (i + 0xe < texture_size) {
                                    *(u8 *)((int)puVar6 + 0xe) = texture_source[i + 0xe];
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
    break;
  case 2:
    converted_palette_9 = texture_cache_element->palette;
    texture_cache_element->paletted = '\x01';
    if (texture_source == (u8 *)0x0) {
      if (converted_palette_9 == (u32 *)0x0) {
        converted_palette_9 = (u32 *)malloc(0x10);
        texture_cache_element->palette = converted_palette_9;
      }
      uVar5 = (uint)*palette;
      uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
      uVar7 = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2;
      texture_size = texture_size << 2;
      if (color0_transparent == 0) {
        uVar7 = uVar7 | 0x1f000000;
      }
      *converted_palette_9 = uVar7;
      iVar19 = __stack_chk_guard;
      goto joined_r0x0808be28;
    }
    if (converted_palette_9 == (u32 *)0x0) {
      converted_palette_9 = (u32 *)malloc(0x10);
      texture_cache_element->palette = converted_palette_9;
    }
    uVar5 = (uint)*palette;
    uVar16 = (uint)palette[2];
    uVar11 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
    uVar5 = (uint)palette[1];
    uVar18 = (uint)palette[3];
    uVar7 = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2;
    uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
    if (color0_transparent == 0) {
      uVar7 = uVar7 | 0x1f000000;
    }
    *converted_palette_9 = uVar7;
    uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 | uVar16 & 0x1f;
    uVar11 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 | uVar18 & 0x1f;
    converted_palette_9[1] = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
    converted_palette_9[2] = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 | 0x1f000000;
    converted_palette_9[3] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
    if (texture_size != 0) {
      if (0xf < texture_size &&
          (texture_source + texture_size <= texture_dest ||
          texture_dest + texture_size <= texture_source)) {
        SIMDExpandImmediate(0,0xe,3);
        auVar32 = VectorCopyLong(SUB168(*(undefined (*) [16])texture_source,0),1,1);
        auVar34 = VectorCopyLong(SUB168(*(undefined (*) [16])texture_source,8),1,1);
        auVar21 = VectorCopyLong(auVar32._0_8_,2,1);
        auVar20 = VectorCopyLong(auVar34._0_8_,2,1);
        auVar23 = VectorCopyLong(auVar32._8_8_,2,1);
        auVar24 = VectorCopyLong(auVar34._8_8_,2,1);
        auVar34 = VectorShiftRight(auVar21,2);
        auVar32 = VectorShiftRight(auVar20,2);
        auVar22 = VectorShiftRight(auVar23,2);
        auVar25 = VectorShiftRight(auVar24,2);
        auVar35._0_8_ = VectorCopyNarrow(auVar34,4);
        auVar35._8_8_ = VectorCopyNarrow(auVar22,4);
        auVar34 = VectorShiftRight(auVar21,4);
        auVar37._0_8_ = VectorCopyNarrow(auVar32,4);
        auVar37._8_8_ = VectorCopyNarrow(auVar25,4);
        auVar32 = VectorShiftRight(auVar20,4);
        VectorCopyNarrow(auVar35,2);
        VectorCopyNarrow(auVar37,2);
        auVar22 = VectorShiftRight(auVar23,4);
        auVar21 = VectorShiftRight(auVar21,6);
        auVar25 = VectorShiftRight(auVar24,4);
        auVar23 = VectorShiftRight(auVar23,6);
        auVar24 = VectorShiftRight(auVar24,6);
        auVar36._0_8_ = VectorCopyNarrow(auVar34,4);
        auVar36._8_8_ = VectorCopyNarrow(auVar22,4);
        auVar34 = VectorShiftRight(auVar20,6);
        auVar28._0_8_ = VectorCopyNarrow(auVar32,4);
        auVar28._8_8_ = VectorCopyNarrow(auVar25,4);
        VectorCopyNarrow(auVar36,2);
        VectorCopyNarrow(auVar28,2);
        auVar33._0_8_ = VectorCopyNarrow(auVar21,4);
        auVar33._8_8_ = VectorCopyNarrow(auVar23,4);
        auVar29._0_8_ = VectorCopyNarrow(auVar34,4);
        auVar29._8_8_ = VectorCopyNarrow(auVar24,4);
        VectorCopyNarrow(auVar33,2);
        VectorCopyNarrow(auVar29,2);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      puVar6 = (u32 *)texture_source;
      puVar15 = texture_dest + 1;
      do {
        puVar9 = (u32 *)((int)puVar6 + 1);
        bVar2 = *(byte *)puVar6;
        *(byte *)(puVar15 + -1) = bVar2 & 3;
        *(byte *)((int)puVar15 + -3) = (byte)(((uint)bVar2 << 0x1c) >> 0x1e);
        *(byte *)((int)puVar15 + -2) = (byte)(((uint)bVar2 << 0x1a) >> 0x1e);
        *(byte *)((int)puVar15 + -1) = bVar2 >> 6;
        puVar6 = puVar9;
        puVar15 = puVar15 + 1;
      } while ((u32 *)(texture_source + texture_size) != puVar9);
    }
    break;
  case 3:
    converted_palette_7 = texture_cache_element->palette;
    texture_cache_element->paletted = '\x01';
    if (texture_source != (u8 *)0x0) {
      if (converted_palette_7 == (u32 *)0x0) {
        converted_palette_7 = (u32 *)malloc(0x40);
        texture_cache_element->palette = converted_palette_7;
      }
      uVar11 = (uint)*palette;
      uVar5 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8;
      if (color0_transparent == 0) {
        uVar5 = uVar5 | uVar11 & 0x1f;
        uVar7 = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
      }
      else {
        uVar5 = uVar5 | uVar11 & 0x1f;
        uVar7 = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2;
      }
      *converted_palette_7 = uVar7;
      uVar5 = (int)(converted_palette_7 + 1) * 0x20000000 >> 0x1f & 3;
      if (uVar5 == 0) {
        iVar19 = 1;
        iVar10 = 0xf;
        local_a0 = 0xf;
      }
      else {
        uVar11 = (uint)palette[1];
        uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                 uVar11 & 0x1f;
        converted_palette_7[1] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
        if (uVar5 == 1) {
          iVar19 = 2;
          iVar10 = 0xe;
          local_a0 = 0xe;
        }
        else {
          uVar11 = (uint)palette[2];
          uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                   uVar11 & 0x1f;
          converted_palette_7[2] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
          if (uVar5 == 3) {
            uVar11 = (uint)palette[3];
            local_a0 = 0xc;
            iVar19 = 4;
            iVar10 = 0xc;
            uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                     uVar11 & 0x1f;
            converted_palette_7[3] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
          }
          else {
            iVar10 = 0xd;
            iVar19 = 3;
            local_a0 = 0xd;
          }
        }
      }
      auVar34 = SIMDExpandImmediate(0,8,0x1f);
      auVar32 = SIMDExpandImmediate(0,0,0x1f);
      auVar26._8_8_ = 0x1f1f1f001f1f1f;
      auVar26._0_8_ = 0x1f1f1f001f1f1f;
      auVar24 = *(undefined (*) [16])(palette + uVar5 + 1);
      uVar11 = (uint)palette[iVar19 + 8];
      auVar27._8_8_ = 0x1010100010101;
      auVar27._0_8_ = 0x1010100010101;
      puVar14 = (undefined8 *)(converted_palette_7 + uVar5 + 1);
      auVar22 = VectorCopyLong(auVar24._0_8_,2,1);
      auVar20 = VectorCopyLong(auVar24._8_8_,2,1);
      uVar16 = (uint)palette[iVar19 + 9];
      auVar21 = VectorShiftRight(auVar22,5);
      auVar23 = VectorShiftRight(auVar20,5);
      auVar22 = VectorShiftRight(auVar22,10);
      auVar20 = VectorShiftRight(auVar20,10);
      uVar18 = (uint)palette[iVar19 + 10];
      uVar17 = (uint)palette[iVar19 + 0xb];
      auVar21 = VectorShiftLeft(auVar21 & auVar32,8,0x20,0);
      auVar23 = VectorShiftLeft(auVar23 & auVar32,8,0x20,0);
      auVar22 = VectorShiftLeft(auVar22 & auVar32,0x10,0x20,0);
      auVar20 = VectorShiftLeft(auVar20 & auVar32,0x10,0x20,0);
      auVar32 = VectorCopyLong(SUB168(auVar24 & auVar34,0),2,1);
      auVar34 = VectorCopyLong(SUB168(auVar24 & auVar34,8),2,1);
      auVar32 = auVar21 | auVar22 | auVar32;
      auVar34 = auVar23 | auVar20 | auVar34;
      auVar23 = VectorAdd(auVar32,auVar26,4);
      auVar24 = VectorAdd(auVar34,auVar26,4);
      auVar32 = VectorAdd(auVar32,auVar32,4);
      auVar34 = VectorAdd(auVar34,auVar34,4);
      uVar5 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 | uVar11 & 0x1f;
      auVar23 = VectorShiftRight(auVar23,5);
      auVar24 = VectorShiftRight(auVar24,5);
      auVar23 = VectorAdd(auVar23 & auVar27,auVar32,4);
      auVar24 = VectorAdd(auVar24 & auVar27,auVar34,4);
      uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 | uVar16 & 0x1f;
      auVar34 = SIMDExpandImmediate(0,7,0x1f);
      auVar32 = SIMDExpandImmediate(0,7,0x1f);
      uVar18 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 | uVar18 & 0x1f;
      *puVar14 = SUB168(auVar23 | auVar34,0);
      puVar14[1] = SUB168(auVar23 | auVar34,8);
      puVar14[2] = SUB168(auVar24 | auVar32,0);
      puVar14[3] = SUB168(auVar24 | auVar32,8);
      uVar11 = ((uVar17 << 0x11) >> 0x1b) << 0x10 | ((uVar17 << 0x16) >> 0x1b) << 8 | uVar17 & 0x1f;
      converted_palette_7[iVar19 + 8] = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
      converted_palette_7[iVar19 + 9] = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 | 0x1f000000
      ;
      converted_palette_7[iVar19 + 10] =
           (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 | 0x1f000000;
      converted_palette_7[iVar19 + 0xb] =
           (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
      if (iVar10 != 0xc) {
        uVar5 = (uint)palette[iVar19 + 0xc];
        uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
        converted_palette_7[iVar19 + 0xc] =
             (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
        if (local_a0 != 0xd) {
          uVar5 = (uint)palette[iVar19 + 0xd];
          uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
          converted_palette_7[iVar19 + 0xd] =
               (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
          if (local_a0 != 0xe) {
            uVar5 = (uint)palette[0xf];
            uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 |
                    uVar5 & 0x1f;
            converted_palette_7[0xf] = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
          }
        }
      }
      if (iVar3 == __stack_chk_guard) {
        texture_cache_convert_4bpp(texture_dest,texture_source,texture_size);
        return;
      }
      goto LAB_0808bce8;
    }
    if (converted_palette_7 == (u32 *)0x0) {
      converted_palette_7 = (u32 *)malloc(0x40);
      texture_cache_element->palette = converted_palette_7;
    }
    uVar5 = (uint)*palette;
    uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
    uVar7 = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2;
    texture_size = texture_size << 1;
    if (color0_transparent == 0) {
      uVar7 = uVar7 | 0x1f000000;
    }
    *converted_palette_7 = uVar7;
    iVar19 = __stack_chk_guard;
joined_r0x0808be28:
    if (iVar3 == iVar19) {
LAB_0808bc60:
      memset(texture_dest,0,texture_size);
      return;
    }
    goto LAB_0808bce8;
  case 4:
    converted_palette_1 = texture_cache_element->palette;
    texture_cache_element->paletted = '\x01';
    if (texture_source == (u8 *)0x0) {
      if (converted_palette_1 == (u32 *)0x0) {
        converted_palette_1 = (u32 *)malloc(0x400);
        texture_cache_element->palette = converted_palette_1;
      }
      uVar5 = (uint)*palette;
      uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
      uVar7 = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2;
      if (color0_transparent == 0) {
        uVar7 = uVar7 | 0x1f000000;
      }
      *converted_palette_1 = uVar7;
      iVar19 = __stack_chk_guard;
      goto joined_r0x0808be28;
    }
    if (converted_palette_1 == (u32 *)0x0) {
      converted_palette_1 = (u32 *)malloc(0x400);
      texture_cache_element->palette = converted_palette_1;
    }
    uVar11 = (uint)*palette;
    uVar5 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8;
    if (color0_transparent == 0) {
      uVar5 = uVar5 | uVar11 & 0x1f;
      uVar7 = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
    }
    else {
      uVar5 = uVar5 | uVar11 & 0x1f;
      uVar7 = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2;
    }
    *converted_palette_1 = uVar7;
    uVar5 = (int)(converted_palette_1 + 1) * 0x20000000 >> 0x1f & 3;
    if (uVar5 == 0) {
      iVar19 = 1;
      iVar10 = 0xff;
    }
    else {
      uVar11 = (uint)palette[1];
      uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 | uVar11 & 0x1f;
      converted_palette_1[1] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
      if (uVar5 == 1) {
        iVar19 = 2;
        iVar10 = 0xfe;
      }
      else {
        uVar11 = (uint)palette[2];
        uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                 uVar11 & 0x1f;
        converted_palette_1[2] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
        if (uVar5 == 3) {
          uVar11 = (uint)palette[3];
          iVar19 = 4;
          iVar10 = 0xfc;
          uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                   uVar11 & 0x1f;
          converted_palette_1[3] = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
        }
        else {
          iVar10 = 0xfd;
          iVar19 = 3;
        }
      }
    }
    auVar25._8_8_ = 0x1f1f1f001f1f1f;
    auVar25._0_8_ = 0x1f1f1f001f1f1f;
    auVar34 = SIMDExpandImmediate(0,8,0x1f);
    auVar32 = SIMDExpandImmediate(0,0,0x1f);
    auVar22._8_8_ = 0x1010100010101;
    auVar22._0_8_ = 0x1010100010101;
    pauVar12 = (undefined (*) [16])(palette + uVar5 + 1);
    uVar11 = 0;
    puVar14 = (undefined8 *)(converted_palette_1 + uVar5 + 1);
    do {
      auVar24 = *pauVar12;
      uVar11 = uVar11 + 1;
      pauVar12 = pauVar12 + 1;
      auVar23 = VectorCopyLong(auVar24._0_8_,2,1);
      auVar26 = VectorCopyLong(auVar24._8_8_,2,1);
      auVar20 = VectorShiftRight(auVar23,5);
      auVar21 = VectorShiftRight(auVar26,5);
      auVar23 = VectorShiftRight(auVar23,10);
      auVar27 = VectorShiftRight(auVar26,10);
      auVar26 = VectorShiftLeft(auVar20 & auVar32,8,0x20,0);
      auVar20 = VectorShiftLeft(auVar21 & auVar32,8,0x20,0);
      auVar23 = VectorShiftLeft(auVar23 & auVar32,0x10,0x20,0);
      auVar27 = VectorShiftLeft(auVar27 & auVar32,0x10,0x20,0);
      auVar21 = VectorCopyLong(SUB168(auVar24 & auVar34,0),2,1);
      auVar24 = VectorCopyLong(SUB168(auVar24 & auVar34,8),2,1);
      auVar21 = auVar26 | auVar23 | auVar21;
      auVar24 = auVar20 | auVar27 | auVar24;
      auVar20 = VectorAdd(auVar21,auVar25,4);
      auVar23 = VectorAdd(auVar21,auVar21,4);
      auVar21 = VectorAdd(auVar24,auVar25,4);
      auVar24 = VectorAdd(auVar24,auVar24,4);
      auVar20 = VectorShiftRight(auVar20,5);
      auVar21 = VectorShiftRight(auVar21,5);
      auVar20 = VectorAdd(auVar20 & auVar22,auVar23,4);
      auVar21 = VectorAdd(auVar21 & auVar22,auVar24,4);
      auVar24 = SIMDExpandImmediate(0,7,0x1f);
      auVar23 = SIMDExpandImmediate(0,7,0x1f);
      *puVar14 = SUB168(auVar20 | auVar24,0);
      puVar14[1] = SUB168(auVar20 | auVar24,8);
      puVar14[2] = SUB168(auVar21 | auVar23,0);
      puVar14[3] = SUB168(auVar21 | auVar23,8);
      puVar14 = puVar14 + 4;
    } while (uVar11 < 0x1f);
    uVar5 = (uint)palette[iVar19 + 0xf8];
    uVar11 = (uint)palette[iVar19 + 0xf9];
    uVar18 = (uint)palette[iVar19 + 0xfb];
    uVar16 = (uint)palette[iVar19 + 0xfa];
    uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
    uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 | uVar11 & 0x1f;
    uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 | uVar16 & 0x1f;
    converted_palette_1[iVar19 + 0xf8] = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
    uVar5 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 | uVar18 & 0x1f;
    converted_palette_1[iVar19 + 0xf9] =
         (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
    converted_palette_1[iVar19 + 0xfa] =
         (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 | 0x1f000000;
    converted_palette_1[iVar19 + 0xfb] = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
    if (iVar10 != 0xfc) {
      uVar5 = (uint)palette[iVar19 + 0xfc];
      uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
      converted_palette_1[iVar19 + 0xfc] =
           (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
      if (iVar10 != 0xfd) {
        uVar5 = (uint)palette[iVar19 + 0xfd];
        uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
        converted_palette_1[iVar19 + 0xfd] =
             (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
        if (iVar10 != 0xfe) {
          uVar5 = (uint)palette[0xff];
          uVar5 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
          converted_palette_1[0xff] = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 | 0x1f000000;
        }
      }
    }
    if (texture_size != 0) {
      if (0x15 < texture_size &&
          (texture_source + 0x10 <= texture_dest || texture_dest + 4 <= texture_source)) {
        uVar5 = -((uint)texture_source & 7) & 0xf;
        if (texture_size <= uVar5) {
          uVar5 = texture_size;
        }
        i = uVar5;
        if (uVar5 != 0) {
          *(u8 *)texture_dest = *texture_source;
          puVar6 = (u32 *)((int)texture_dest + 1);
          if (uVar5 != 1) {
            *(u8 *)((int)texture_dest + 1) = texture_source[1];
            puVar6 = (u32 *)((int)texture_dest + 2);
            if (uVar5 != 2) {
              *(u8 *)((int)texture_dest + 2) = texture_source[2];
              puVar6 = (u32 *)((int)texture_dest + 3);
              if (uVar5 != 3) {
                *(u8 *)((int)texture_dest + 3) = texture_source[3];
                puVar6 = texture_dest + 1;
                if (uVar5 != 4) {
                  *(u8 *)(texture_dest + 1) = texture_source[4];
                  puVar6 = (u32 *)((int)texture_dest + 5);
                  if (uVar5 != 5) {
                    *(u8 *)((int)texture_dest + 5) = texture_source[5];
                    puVar6 = (u32 *)((int)texture_dest + 6);
                    if (uVar5 != 6) {
                      *(u8 *)((int)texture_dest + 6) = texture_source[6];
                      if (uVar5 == 7) {
                        puVar6 = (u32 *)((int)texture_dest + 7);
                        i = 7;
                      }
                      else {
                        *(u8 *)((int)texture_dest + 7) = texture_source[7];
                        puVar6 = texture_dest + 2;
                        if (uVar5 != 8) {
                          *(u8 *)(texture_dest + 2) = texture_source[8];
                          puVar6 = (u32 *)((int)texture_dest + 9);
                          if (uVar5 != 9) {
                            *(u8 *)((int)texture_dest + 9) = texture_source[9];
                            puVar6 = (u32 *)((int)texture_dest + 10);
                            if (uVar5 != 10) {
                              *(u8 *)((int)texture_dest + 10) = texture_source[10];
                              puVar6 = (u32 *)((int)texture_dest + 0xb);
                              if (uVar5 != 0xb) {
                                *(u8 *)((int)texture_dest + 0xb) = texture_source[0xb];
                                puVar6 = texture_dest + 3;
                                if (uVar5 != 0xc) {
                                  *(u8 *)(texture_dest + 3) = texture_source[0xc];
                                  puVar6 = (u32 *)((int)texture_dest + 0xd);
                                  if (uVar5 != 0xd) {
                                    *(u8 *)((int)texture_dest + 0xd) = texture_source[0xd];
                                    if (uVar5 == 0xf) {
                                      *(u8 *)((int)texture_dest + 0xe) = texture_source[0xe];
                                      puVar6 = (u32 *)((int)texture_dest + 0xf);
                                    }
                                    else {
                                      puVar6 = (u32 *)((int)texture_dest + 0xe);
                                      i = 0xe;
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
        iVar19 = texture_size - uVar5;
        uVar11 = (iVar19 - 0x10U >> 4) + 1;
        if (0xe < (texture_size - 1) - uVar5) {
          puVar14 = (undefined8 *)((int)texture_dest + uVar5);
          uVar18 = 0;
          pauVar12 = (undefined (*) [16])(texture_source + uVar5);
          do {
            auVar34 = *pauVar12;
            uVar18 = uVar18 + 1;
            pauVar12 = pauVar12 + 1;
            *puVar14 = auVar34._0_8_;
            puVar14[1] = auVar34._8_8_;
            puVar14 = puVar14 + 2;
          } while (uVar18 < uVar11);
LAB_08089ed4:
          i = i + uVar11 * 0x10;
          puVar6 = puVar6 + uVar11 * 4;
          if (iVar19 == uVar11 * 0x10) break;
        }
        goto LAB_08089ee4;
      }
      puVar13 = texture_source + -1;
      do {
        puVar13 = puVar13 + 1;
        puVar15 = (u32 *)((int)puVar6 + 1);
        *(u8 *)puVar6 = *puVar13;
        puVar6 = puVar15;
      } while (puVar15 != (u32 *)((int)texture_dest + texture_size));
    }
    break;
  case 6:
    converted_palette_3 = texture_cache_element->palette;
    texture_cache_element->paletted = '\x01';
    if (texture_source == (u8 *)0x0) goto LAB_0808bbfc;
    if (converted_palette_3 == (u32 *)0x0) {
      converted_palette_3 = (u32 *)malloc(0x400);
      texture_cache_element->palette = converted_palette_3;
    }
    uVar5 = (uint)palette[5];
    uVar18 = (uint)palette[4];
    uVar11 = (uint)palette[7];
    auVar20._8_8_ = 0x300000002;
    auVar20._0_8_ = 0x100000000;
    uVar16 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 | uVar18 & 0x1f;
    uVar18 = ((uVar5 << 0x11) >> 0x1b) << 0x10 | ((uVar5 << 0x16) >> 0x1b) << 8 | uVar5 & 0x1f;
    uVar5 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 | uVar11 & 0x1f;
    iVar19 = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2;
    auVar34._4_4_ = iVar19;
    auVar34._0_4_ = iVar19;
    auVar34._8_8_ = 0;
    iVar10 = (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2;
    iVar19 = (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2;
    auVar32._4_4_ = iVar19;
    auVar32._0_4_ = iVar19;
    auVar32._8_8_ = 0;
    auVar21._4_4_ = iVar10;
    auVar21._0_4_ = iVar10;
    auVar21._8_8_ = 0;
    puVar14 = (undefined8 *)converted_palette_3;
    do {
      auVar24 = SIMDExpandImmediate(0,0,4);
      auVar23 = VectorShiftLeft(auVar20,0x18,0x20,0);
      auVar20 = VectorAdd(auVar20,auVar24,4);
      VectorZip(auVar23 | auVar34 & auVar34 << 0x40,4);
      VectorZip(auVar23 | auVar32 & auVar32 << 0x40,4);
      auVar24 = auVar23 | auVar21 & auVar21 << 0x40;
      auVar25 = VectorZip(auVar23 | ZEXT816(0),4);
      auVar22 = VectorZip(auVar24,4);
      VectorZip(auVar25,4);
      auVar25 = VectorZip(auVar22,4);
      VectorZip(auVar23 | ZEXT816(0),4);
      auVar29 = VectorZip(auVar24,4);
      auVar23 = VectorZip(auVar25,4);
      auVar27 = VectorZip(auVar22,4);
      auVar37 = VectorZip(auVar29,4);
      auVar26 = VectorZip(auVar24,4);
      *puVar14 = auVar23._0_8_;
      puVar14[1] = auVar23._8_8_;
      puVar4 = puVar14 + 0x10;
      puVar14[2] = auVar25._0_8_;
      puVar14[3] = auVar25._8_8_;
      puVar14[4] = auVar27._0_8_;
      puVar14[5] = auVar27._8_8_;
      puVar14[6] = auVar22._0_8_;
      puVar14[7] = auVar22._8_8_;
      puVar14[8] = auVar37._0_8_;
      puVar14[9] = auVar37._8_8_;
      puVar14[10] = auVar29._0_8_;
      puVar14[0xb] = auVar29._8_8_;
      puVar14[0xc] = auVar26._0_8_;
      puVar14[0xd] = auVar26._8_8_;
      puVar14[0xe] = auVar24._0_8_;
      puVar14[0xf] = auVar24._8_8_;
      puVar14 = puVar4;
    } while (puVar4 != (undefined8 *)(converted_palette_3 + 0x100));
    if (texture_size != 0) {
      if (0x15 < texture_size &&
          (texture_source + 0x10 <= texture_dest || texture_dest + 4 <= texture_source)) {
        uVar5 = -((uint)texture_source & 7) & 0xf;
        if (texture_size <= uVar5) {
          uVar5 = texture_size;
        }
        i = uVar5;
        if (uVar5 != 0) {
          *(u8 *)texture_dest = *texture_source;
          puVar6 = (u32 *)((int)texture_dest + 1);
          if (uVar5 != 1) {
            *(u8 *)((int)texture_dest + 1) = texture_source[1];
            puVar6 = (u32 *)((int)texture_dest + 2);
            if (uVar5 != 2) {
              *(u8 *)((int)texture_dest + 2) = texture_source[2];
              puVar6 = (u32 *)((int)texture_dest + 3);
              if (uVar5 != 3) {
                *(u8 *)((int)texture_dest + 3) = texture_source[3];
                puVar6 = texture_dest + 1;
                if (uVar5 != 4) {
                  *(u8 *)(texture_dest + 1) = texture_source[4];
                  puVar6 = (u32 *)((int)texture_dest + 5);
                  if (uVar5 != 5) {
                    *(u8 *)((int)texture_dest + 5) = texture_source[5];
                    if (uVar5 == 6) {
                      puVar6 = (u32 *)((int)texture_dest + 6);
                      i = 6;
                    }
                    else {
                      *(u8 *)((int)texture_dest + 6) = texture_source[6];
                      puVar6 = (u32 *)((int)texture_dest + 7);
                      if (uVar5 != 7) {
                        *(u8 *)((int)texture_dest + 7) = texture_source[7];
                        puVar6 = texture_dest + 2;
                        if (uVar5 != 8) {
                          *(u8 *)(texture_dest + 2) = texture_source[8];
                          puVar6 = (u32 *)((int)texture_dest + 9);
                          if (uVar5 != 9) {
                            *(u8 *)((int)texture_dest + 9) = texture_source[9];
                            puVar6 = (u32 *)((int)texture_dest + 10);
                            if (uVar5 != 10) {
                              *(u8 *)((int)texture_dest + 10) = texture_source[10];
                              puVar6 = (u32 *)((int)texture_dest + 0xb);
                              if (uVar5 != 0xb) {
                                *(u8 *)((int)texture_dest + 0xb) = texture_source[0xb];
                                puVar6 = texture_dest + 3;
                                if (uVar5 != 0xc) {
                                  *(u8 *)(texture_dest + 3) = texture_source[0xc];
                                  puVar6 = (u32 *)((int)texture_dest + 0xd);
                                  if (uVar5 != 0xd) {
                                    *(u8 *)((int)texture_dest + 0xd) = texture_source[0xd];
                                    if (uVar5 == 0xf) {
                                      *(u8 *)((int)texture_dest + 0xe) = texture_source[0xe];
                                      puVar6 = (u32 *)((int)texture_dest + 0xf);
                                    }
                                    else {
                                      puVar6 = (u32 *)((int)texture_dest + 0xe);
                                      i = 0xe;
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
        iVar19 = texture_size - uVar5;
        uVar11 = (iVar19 - 0x10U >> 4) + 1;
        if (0xe < (texture_size - 1) - uVar5) {
          puVar14 = (undefined8 *)((int)texture_dest + uVar5);
          uVar18 = 0;
          pauVar12 = (undefined (*) [16])(texture_source + uVar5);
          do {
            auVar34 = *pauVar12;
            uVar18 = uVar18 + 1;
            pauVar12 = pauVar12 + 1;
            *puVar14 = auVar34._0_8_;
            puVar14[1] = auVar34._8_8_;
            puVar14 = puVar14 + 2;
          } while (uVar18 < uVar11);
          goto LAB_08089ed4;
        }
        goto LAB_08089ee4;
      }
      puVar13 = texture_source + -1;
      do {
        puVar13 = puVar13 + 1;
        puVar15 = (u32 *)((int)puVar6 + 1);
        *(u8 *)puVar6 = *puVar13;
        puVar6 = puVar15;
      } while ((u32 *)((int)texture_dest + texture_size) != puVar15);
    }
    break;
  case 7:
    uVar5 = texture_size >> 1;
    if (texture_source == (u8 *)0x0) {
      texture_size = uVar5 << 2;
      goto LAB_0808bc60;
    }
    if (uVar5 != 0) {
      uVar11 = ((int)texture_dest << 0x1d) >> 0x1f & 3;
      if (uVar5 <= uVar11) {
        uVar11 = uVar5;
      }
      uVar18 = uVar5;
      if ((uVar5 < 9) || (uVar18 = uVar11, uVar11 != 0)) {
        uVar11 = (uint)*(ushort *)texture_source;
        uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                 uVar11 & 0x1f;
        *texture_dest =
             (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 |
             (uint)(*(ushort *)texture_source >> 0xf) * 0x1f000000;
        uVar11 = uVar18;
        if (uVar18 != 1) {
          uVar16 = (uint)*(ushort *)(texture_source + 2);
          uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 |
                   uVar16 & 0x1f;
          texture_dest[1] =
               (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
               (uint)(*(ushort *)(texture_source + 2) >> 0xf) * 0x1f000000;
          if (uVar18 != 2) {
            uVar16 = (uint)*(ushort *)(texture_source + 4);
            uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 |
                     uVar16 & 0x1f;
            texture_dest[2] =
                 (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
                 (uint)(*(ushort *)(texture_source + 4) >> 0xf) * 0x1f000000;
            if (uVar18 != 3) {
              uVar16 = (uint)*(ushort *)(texture_source + 6);
              uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 |
                       uVar16 & 0x1f;
              texture_dest[3] =
                   (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
                   (uint)(*(ushort *)(texture_source + 6) >> 0xf) * 0x1f000000;
              if (uVar18 != 4) {
                uVar16 = (uint)*(ushort *)(texture_source + 8);
                uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 |
                         uVar16 & 0x1f;
                texture_dest[4] =
                     (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
                     (uint)(*(ushort *)(texture_source + 8) >> 0xf) * 0x1f000000;
                if (uVar18 != 5) {
                  uVar16 = (uint)*(ushort *)(texture_source + 10);
                  uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 |
                           uVar16 & 0x1f;
                  texture_dest[5] =
                       (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
                       (uint)(*(ushort *)(texture_source + 10) >> 0xf) * 0x1f000000;
                  if (uVar18 != 6) {
                    uVar16 = (uint)*(ushort *)(texture_source + 0xc);
                    uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 |
                             uVar16 & 0x1f;
                    texture_dest[6] =
                         (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
                         (uint)(*(ushort *)(texture_source + 0xc) >> 0xf) * 0x1f000000;
                    if (uVar18 == 8) {
                      uVar16 = (uint)*(ushort *)(texture_source + 0xe);
                      uVar16 = ((uVar16 << 0x16) >> 0x1b) << 8 | ((uVar16 << 0x11) >> 0x1b) << 0x10
                               | uVar16 & 0x1f;
                      texture_dest[7] =
                           (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
                           (uint)(*(ushort *)(texture_source + 0xe) >> 0xf) * 0x1f000000;
                    }
                    else {
                      uVar11 = 7;
                    }
                  }
                }
              }
            }
          }
        }
        if (uVar5 == uVar18) break;
      }
      uVar16 = ((uVar5 - uVar18) - 8 >> 3) + 1;
      iVar19 = uVar16 * 8;
      if (6 < (uVar5 - 1) - uVar18) {
        auVar23._8_8_ = 0x1f1f1f001f1f1f;
        auVar23._0_8_ = 0x1f1f1f001f1f1f;
        auVar34 = SIMDExpandImmediate(0,8,0x1f);
        auVar32 = SIMDExpandImmediate(0,0,0x1f);
        pauVar12 = (undefined (*) [16])(texture_source + uVar18 * 2);
        auVar24._8_8_ = 0x1010100010101;
        auVar24._0_8_ = 0x1010100010101;
        uVar17 = 0;
        puVar14 = (undefined8 *)(texture_dest + uVar18);
        do {
          auVar21 = *pauVar12;
          uVar17 = uVar17 + 1;
          pauVar12 = pauVar12 + 1;
          auVar22 = VectorCopyLong(auVar21._0_8_,2,1);
          auVar25 = VectorCopyLong(auVar21._8_8_,2,1);
          auVar29 = VectorShiftRight(auVar22,10);
          auVar20 = VectorShiftRight(auVar22,5);
          auVar27 = VectorShiftRight(auVar25,10);
          auVar37 = VectorShiftRight(auVar25,5);
          auVar22 = VectorShiftRight(auVar22,0xf);
          auVar26 = VectorShiftRight(auVar25,0xf);
          auVar29 = VectorShiftLeft(auVar29 & auVar32,0x10,0x20,0);
          auVar25 = VectorMultiply(auVar22,auVar32,4);
          auVar20 = VectorShiftLeft(auVar20 & auVar32,8,0x20,0);
          auVar27 = VectorShiftLeft(auVar27 & auVar32,0x10,0x20,0);
          auVar26 = VectorMultiply(auVar26,auVar32,4);
          auVar37 = VectorShiftLeft(auVar37 & auVar32,8,0x20,0);
          auVar22 = VectorCopyLong(SUB168(auVar21 & auVar34,0),2,1);
          auVar21 = VectorCopyLong(SUB168(auVar21 & auVar34,8),2,1);
          auVar25 = VectorShiftLeft(auVar25,0x18,0x20,0);
          auVar22 = auVar29 | auVar20 | auVar22;
          auVar26 = VectorShiftLeft(auVar26,0x18,0x20,0);
          auVar21 = auVar27 | auVar37 | auVar21;
          auVar20 = VectorAdd(auVar22,auVar23,4);
          auVar27 = VectorAdd(auVar22,auVar22,4);
          auVar29 = VectorAdd(auVar21,auVar23,4);
          auVar22 = VectorAdd(auVar21,auVar21,4);
          auVar21 = VectorShiftRight(auVar20,5);
          auVar29 = VectorShiftRight(auVar29,5);
          auVar20 = VectorAdd(auVar21 & auVar24,auVar27,4);
          auVar21 = VectorAdd(auVar29 & auVar24,auVar22,4);
          *puVar14 = SUB168(auVar20 | auVar25,0);
          puVar14[1] = SUB168(auVar20 | auVar25,8);
          puVar14[2] = SUB168(auVar21 | auVar26,0);
          puVar14[3] = SUB168(auVar21 | auVar26,8);
          puVar14 = puVar14 + 4;
        } while (uVar17 < uVar16);
        uVar11 = uVar11 + iVar19;
        if (iVar19 - (uVar5 - uVar18) == 0) break;
      }
      uVar18 = (uint)*(ushort *)(texture_source + uVar11 * 2);
      uVar16 = uVar11 + 1;
      uVar18 = ((uVar18 << 0x16) >> 0x1b) << 8 | ((uVar18 << 0x11) >> 0x1b) << 0x10 | uVar18 & 0x1f;
      texture_dest[uVar11] =
           (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 |
           (uint)(*(ushort *)(texture_source + uVar11 * 2) >> 0xf) * 0x1f000000;
      if (uVar16 < uVar5) {
        uVar18 = uVar11 + 2;
        uVar17 = (uint)*(ushort *)(texture_source + uVar16 * 2);
        uVar17 = ((uVar17 << 0x11) >> 0x1b) << 0x10 | ((uVar17 << 0x16) >> 0x1b) << 8 |
                 uVar17 & 0x1f;
        texture_dest[uVar16] =
             (uVar17 + 0x1f1f1f >> 5 & 0x10101) + uVar17 * 2 |
             (uint)(*(ushort *)(texture_source + uVar16 * 2) >> 0xf) * 0x1f000000;
        if (uVar18 < uVar5) {
          uVar17 = uVar11 + 3;
          uVar16 = (uint)*(ushort *)(texture_source + uVar18 * 2);
          uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 |
                   uVar16 & 0x1f;
          texture_dest[uVar18] =
               (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
               (uint)(*(ushort *)(texture_source + uVar18 * 2) >> 0xf) * 0x1f000000;
          if (uVar17 < uVar5) {
            uVar18 = uVar11 + 4;
            uVar16 = (uint)*(ushort *)(texture_source + uVar17 * 2);
            uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 |
                     uVar16 & 0x1f;
            texture_dest[uVar17] =
                 (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
                 (uint)(*(ushort *)(texture_source + uVar17 * 2) >> 0xf) * 0x1f000000;
            if (uVar18 < uVar5) {
              uVar17 = uVar11 + 5;
              uVar16 = (uint)*(ushort *)(texture_source + uVar18 * 2);
              uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 |
                       uVar16 & 0x1f;
              texture_dest[uVar18] =
                   (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
                   (uint)(*(ushort *)(texture_source + uVar18 * 2) >> 0xf) * 0x1f000000;
              if (uVar17 < uVar5) {
                uVar11 = uVar11 + 6;
                uVar18 = (uint)*(ushort *)(texture_source + uVar17 * 2);
                uVar18 = ((uVar18 << 0x11) >> 0x1b) << 0x10 | ((uVar18 << 0x16) >> 0x1b) << 8 |
                         uVar18 & 0x1f;
                texture_dest[uVar17] =
                     (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 |
                     (uint)(*(ushort *)(texture_source + uVar17 * 2) >> 0xf) * 0x1f000000;
                if (uVar11 < uVar5) {
                  uVar5 = (uint)*(ushort *)(texture_source + uVar11 * 2);
                  uVar5 = ((uVar5 << 0x16) >> 0x1b) << 8 | ((uVar5 << 0x11) >> 0x1b) << 0x10 |
                          uVar5 & 0x1f;
                  texture_dest[uVar11] =
                       (uVar5 + 0x1f1f1f >> 5 & 0x10101) + uVar5 * 2 |
                       (uint)(*(ushort *)(texture_source + uVar11 * 2) >> 0xf) * 0x1f000000;
                }
              }
            }
          }
        }
      }
    }
  }
  if (iVar3 == __stack_chk_guard) {
    return;
  }
LAB_0808bce8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


