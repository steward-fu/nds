/*
 * Ghidra decompilation
 *
 * Function : print_string_ext
 * Address  : 080a4f7c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable bg_ptr:u16 *[Stack[0x0]:4] conflicts with parameter, skipped. */

void print_string_ext(char *str,u32 fg_color,u32 bg_color,u32 x,void *_dest_ptr,void *_bg_ptr,
                     u32 pitch,u32 pad)

{
  ushort uVar1;
  undefined2 uVar2;
  font_struct *pfVar3;
  u32 uVar4;
  u32 current_row_1;
  uint *puVar5;
  u32 current_row;
  u8 current_char_1;
  u8 current_char;
  uint uVar6;
  u32 uVar7;
  uint uVar8;
  u32 glyph_offset;
  undefined2 *puVar9;
  u32 uVar10;
  uint uVar11;
  u16 *puVar12;
  undefined2 *puVar13;
  uint *puVar14;
  u32 glyph_offset_1;
  undefined2 *puVar15;
  int iVar16;
  uint uVar17;
  undefined2 *puVar18;
  u32 *bg_ptr_1;
  u32 current_x_1;
  int local_3c;
  uint local_38;
  u32 *dest_ptr_1;
  
  uVar4 = get_screen_bytes_per_pixel();
  pfVar3 = current_font;
  if (uVar4 == 2) {
    uVar6 = (uint)(byte)*str;
    if (uVar6 != 0) {
      uVar17 = pitch & 0xfffffffe;
      uVar4 = current_font->height;
      local_3c = 1;
      local_38 = 0;
      current_x_1 = x;
      if (uVar6 == 10) goto LAB_080a52a4;
LAB_080a518c:
      do {
        uVar10 = pfVar3->_font_offset[uVar6];
        if (uVar4 == 0) {
          uVar7 = pfVar3->width;
        }
        else {
          iVar16 = ((pitch >> 1) * (int)bg_ptr_1 + current_x_1) * 2;
          uVar7 = pfVar3->width;
          puVar12 = pfVar3->_font_bits + (uVar10 - 1);
          puVar13 = (undefined2 *)((int)_dest_ptr + iVar16);
          uVar6 = 0xf - uVar7;
          puVar15 = (undefined2 *)((int)_bg_ptr + iVar16);
          do {
            while( true ) {
              puVar12 = puVar12 + 1;
              uVar1 = *puVar12;
              if (uVar7 != 0) break;
joined_r0x080a5344:
              puVar15 = (undefined2 *)((int)puVar15 + uVar17);
              puVar13 = (undefined2 *)((int)puVar13 + uVar17);
              if (pfVar3->_font_bits + uVar10 + (uVar4 - 1) == puVar12) goto LAB_080a5248;
            }
            uVar2 = (undefined2)fg_color;
            if (_bg_ptr == (void *)0x0) {
              if ((bg_color & 0x10000) == 0) {
                uVar11 = 0xf;
                puVar9 = puVar13;
                do {
                  uVar8 = uVar11 & 0xff;
                  uVar11 = uVar11 - 1;
                  if ((uVar1 >> uVar8 & 1) == 0) {
                    *puVar9 = (short)bg_color;
                  }
                  else {
                    *puVar9 = uVar2;
                  }
                  puVar9 = puVar9 + 1;
                } while (uVar11 != uVar6);
              }
              else {
                uVar11 = 0xf;
                puVar9 = puVar13;
                do {
                  uVar8 = uVar11 & 0xff;
                  uVar11 = uVar11 - 1;
                  if ((uVar1 >> uVar8 & 1) != 0) {
                    *puVar9 = uVar2;
                  }
                  puVar9 = puVar9 + 1;
                } while (uVar6 != uVar11);
              }
              goto joined_r0x080a5344;
            }
            if ((bg_color & 0x10000) == 0) {
              uVar11 = 0xf;
              puVar9 = puVar13;
              do {
                uVar8 = uVar11 & 0xff;
                uVar11 = uVar11 - 1;
                if ((uVar1 >> uVar8 & 1) == 0) {
                  *puVar9 = (short)bg_color;
                }
                else {
                  *puVar9 = uVar2;
                }
                puVar9 = puVar9 + 1;
              } while (uVar11 != uVar6);
              goto joined_r0x080a5344;
            }
            uVar11 = 0xf;
            puVar9 = puVar13;
            puVar18 = puVar15;
            do {
              uVar8 = uVar11 & 0xff;
              uVar11 = uVar11 - 1;
              if ((uVar1 >> uVar8 & 1) == 0) {
                *puVar9 = *puVar18;
              }
              else {
                *puVar9 = uVar2;
              }
              puVar9 = puVar9 + 1;
              puVar18 = puVar18 + 1;
            } while (uVar6 != uVar11);
            puVar13 = (undefined2 *)((int)puVar13 + uVar17);
            puVar15 = (undefined2 *)((int)puVar15 + uVar17);
          } while (pfVar3->_font_bits + uVar10 + (uVar4 - 1) != puVar12);
        }
LAB_080a5248:
        current_x_1 = current_x_1 + uVar7;
        while( true ) {
          uVar6 = (uint)(byte)str[local_3c];
          local_38 = local_38 + 1;
          if (uVar6 == 0 && local_38 < pad) break;
          local_3c = local_3c + 1;
          if (uVar6 == 0) {
            return;
          }
          if (uVar6 != 10) goto LAB_080a518c;
LAB_080a52a4:
          bg_ptr_1 = (u32 *)((int)bg_ptr_1 + uVar4);
          current_x_1 = x;
        }
        uVar6 = 0x20;
      } while( true );
    }
  }
  else {
    uVar6 = (uint)(byte)*str;
    if (uVar6 != 0) {
      iVar16 = 1;
      uVar17 = 0;
      uVar10 = current_font->height;
      uVar4 = x;
      do {
        if (uVar6 == 10) {
          bg_ptr_1 = (u32 *)((int)bg_ptr_1 + uVar10);
          uVar4 = x;
          goto LAB_080a50bc;
        }
        while( true ) {
          if (uVar10 == 0) {
            uVar7 = pfVar3->width;
          }
          else {
            uVar11 = 0;
            puVar12 = pfVar3->_font_bits + (pfVar3->_font_offset[uVar6] - 1);
            uVar7 = pfVar3->width;
            puVar14 = (uint *)((int)_dest_ptr + ((pitch >> 2) * (int)bg_ptr_1 + uVar4) * 4);
            do {
              puVar12 = puVar12 + 1;
              uVar1 = *puVar12;
              if (uVar7 != 0) {
                uVar6 = 0;
                puVar5 = puVar14;
                do {
                  uVar8 = 0xf - uVar6;
                  uVar6 = uVar6 + 1;
                  if ((uVar1 >> (uVar8 & 0xff) & 1) == 0) {
                    *puVar5 = (bg_color & 0x1f) << 3 |
                              (bg_color & 0x7e0) << 5 | ((bg_color << 0x10) >> 0x1b) << 0x13;
                  }
                  else {
                    *puVar5 = (fg_color & 0x7e0) << 5 | ((fg_color << 0x10) >> 0x1b) << 0x13 |
                              (fg_color & 0x1f) << 3;
                  }
                  uVar7 = pfVar3->width;
                  puVar5 = puVar5 + 1;
                } while (uVar6 < uVar7);
                uVar10 = pfVar3->height;
              }
              uVar11 = uVar11 + 1;
              puVar14 = (uint *)((int)puVar14 + (pitch & 0xfffffffc));
            } while (uVar11 < uVar10);
          }
          uVar4 = uVar4 + uVar7;
LAB_080a50bc:
          uVar17 = uVar17 + 1;
          uVar6 = (uint)(byte)str[iVar16];
          if (uVar6 != 0 || pad <= uVar17) break;
          uVar6 = 0x20;
        }
        iVar16 = iVar16 + 1;
      } while (uVar6 != 0);
    }
  }
  return;
}


