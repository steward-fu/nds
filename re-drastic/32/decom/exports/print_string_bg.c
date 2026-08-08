/*
 * Ghidra decompilation
 *
 * Function : print_string_bg
 * Address  : 080a5690
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void print_string_bg(char *str,u32 fg_color,u16 *bg_ptr,u32 x,u32 y)

{
  ushort uVar1;
  ushort uVar2;
  font_struct *pfVar3;
  void *dest_ptr;
  u32 uVar4;
  u32 uVar5;
  u32 current_row_1;
  uint *puVar6;
  font_struct *pfVar7;
  font_struct *pfVar8;
  u8 current_char_1;
  u8 current_char;
  u32 uVar9;
  font_struct *pfVar10;
  font_struct *pfVar11;
  uint uVar12;
  u32 uVar13;
  uint uVar14;
  u32 glyph_offset;
  void *pvVar15;
  uint uVar16;
  uint *puVar17;
  u16 *puVar18;
  u32 glyph_offset_1;
  u32 *puVar19;
  font_struct *pfVar20;
  font_struct *pfVar21;
  u16 *bg_ptr_1;
  u32 *bg_ptr_2;
  u32 current_row;
  u32 current_x_1;
  u32 *dest_ptr_2;
  void *local_40;
  byte *local_38;
  
  local_40 = get_screen_ptr(0);
  if ((local_40 != (void *)0x0) || (local_40 = get_screen_ptr(1), local_40 != (void *)0x0)) {
    uVar4 = get_screen_pitch_text(0);
    uVar5 = get_screen_bytes_per_pixel();
    pfVar3 = current_font;
    uVar12 = (uint)(byte)*str;
    if (uVar5 == 2) {
      if (uVar12 != 0) {
        uVar16 = uVar4 & 0xfffffffe;
        uVar5 = current_font->height;
        dest_ptr_2 = (u32 *)x;
        local_38 = (byte *)str;
        if (uVar12 == 10) goto LAB_080a5938;
        do {
          uVar9 = pfVar3->_font_offset[uVar12];
          if (uVar5 == 0) {
            uVar13 = pfVar3->width;
          }
          else {
            puVar19 = (u32 *)((uVar4 >> 1) * y + (int)dest_ptr_2);
            uVar13 = pfVar3->width;
            puVar18 = pfVar3->_font_bits + (uVar9 - 1);
            pfVar21 = (font_struct *)((int)local_40 + (int)puVar19 * 2);
            pfVar20 = (font_struct *)(bg_ptr + (int)puVar19);
            pfVar7 = (font_struct *)(uVar5 + 3);
            pfVar10 = pfVar3;
            pvVar15 = local_40;
            do {
              while( true ) {
                puVar18 = puVar18 + 1;
                uVar1 = *puVar18;
                if (uVar13 != 0) break;
LAB_080a5900:
                pfVar21 = (font_struct *)((int)pfVar21->_font_bits + (uVar16 - 8));
                pfVar20 = (font_struct *)((int)pfVar20->_font_bits + (uVar16 - 8));
                if (puVar18 ==
                    pfVar3->_font_bits +
                    (int)((int)((font_struct *)(uVar5 + 3))->_font_bits + (uVar9 - 0xc)))
                goto LAB_080a5910;
              }
              if (bg_ptr != (u16 *)0x0) {
                pvVar15 = (void *)0xf;
                pfVar7 = pfVar20;
                pfVar10 = pfVar21;
              }
              pfVar8 = pfVar7;
              pfVar11 = pfVar10;
              if (bg_ptr != (u16 *)0x0) {
                do {
                  pfVar10 = (font_struct *)((int)&pfVar11->width + 2);
                  uVar12 = (uint)pvVar15 & 0xff;
                  pvVar15 = (void *)((int)pvVar15 + -1);
                  pfVar7 = (font_struct *)((int)&pfVar8->width + 2);
                  if ((uVar1 >> uVar12 & 1) == 0) {
                    *(undefined2 *)&pfVar11->width = *(undefined2 *)&pfVar8->width;
                  }
                  else {
                    *(short *)&pfVar11->width = (short)fg_color;
                  }
                  pfVar8 = pfVar7;
                  pfVar11 = pfVar10;
                } while ((void *)(0xf - uVar13) != pvVar15);
                goto LAB_080a5900;
              }
              pvVar15 = (void *)0xf;
              pfVar8 = pfVar21;
              do {
                pfVar7 = (font_struct *)((int)&pfVar8->width + 2);
                uVar2 = uVar1 >> ((uint)pvVar15 & 0xff);
                pfVar10 = (font_struct *)(uint)uVar2;
                pvVar15 = (void *)((int)pvVar15 + -1);
                if ((uVar2 & 1) != 0) {
                  *(short *)&pfVar8->width = (short)fg_color;
                }
                pfVar8 = pfVar7;
              } while ((void *)(0xf - uVar13) != pvVar15);
              pfVar21 = (font_struct *)((int)pfVar21->_font_bits + (uVar16 - 8));
              pfVar20 = (font_struct *)((int)pfVar20->_font_bits + (uVar16 - 8));
            } while (puVar18 !=
                     pfVar3->_font_bits +
                     (int)((int)((font_struct *)(uVar5 + 3))->_font_bits + (uVar9 - 0xc)));
          }
LAB_080a5910:
          dest_ptr_2 = (u32 *)((int)dest_ptr_2 + uVar13);
          while( true ) {
            local_38 = local_38 + 1;
            uVar12 = (uint)*local_38;
            if (uVar12 == 0) {
              return;
            }
            if (uVar12 != 10) break;
LAB_080a5938:
            y = y + uVar5;
            dest_ptr_2 = (u32 *)x;
          }
        } while( true );
      }
    }
    else if (uVar12 != 0) {
      uVar9 = current_font->height;
      uVar5 = x;
      do {
        if (uVar12 == 10) {
          y = y + uVar9;
          uVar5 = x;
        }
        else {
          if (uVar9 == 0) {
            uVar13 = pfVar3->width;
          }
          else {
            uVar16 = 0;
            puVar18 = pfVar3->_font_bits + (pfVar3->_font_offset[uVar12] - 1);
            uVar13 = pfVar3->width;
            puVar17 = (uint *)((int)local_40 + (y * (uVar4 >> 2) + uVar5) * 4);
            do {
              puVar18 = puVar18 + 1;
              uVar1 = *puVar18;
              if (uVar13 != 0) {
                uVar12 = 0;
                puVar6 = puVar17;
                do {
                  uVar14 = 0xf - uVar12;
                  uVar12 = uVar12 + 1;
                  uVar2 = uVar1 >> (uVar14 & 0xff);
                  if ((uVar2 & 1) == 0) {
                    *puVar6 = uVar2 & 1;
                  }
                  else {
                    *puVar6 = (fg_color & 0x7e0) << 5 | ((fg_color << 0x10) >> 0x1b) << 0x13 |
                              (fg_color & 0x1f) << 3;
                  }
                  uVar13 = pfVar3->width;
                  puVar6 = puVar6 + 1;
                } while (uVar12 < uVar13);
                uVar9 = pfVar3->height;
              }
              uVar16 = uVar16 + 1;
              puVar17 = (uint *)((int)puVar17 + (uVar4 & 0xfffffffc));
            } while (uVar16 < uVar9);
          }
          uVar5 = uVar5 + uVar13;
        }
        str = (char *)((byte *)str + 1);
        uVar12 = (uint)(byte)*str;
      } while (uVar12 != 0);
    }
  }
  return;
}


