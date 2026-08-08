/*
 * Ghidra decompilation
 *
 * Function : print_string
 * Address  : 080a5398
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void print_string(char *str,u32 fg_color,u32 bg_color,u32 x,u32 y)

{
  ushort uVar1;
  font_struct *pfVar2;
  void *dest_ptr;
  u32 uVar3;
  u32 uVar4;
  u32 current_row;
  u8 current_char;
  uint *puVar5;
  u32 current_row_1;
  u8 current_char_1;
  uint uVar6;
  u32 uVar7;
  uint uVar8;
  undefined2 *puVar9;
  u32 uVar10;
  u32 glyph_offset_1;
  uint uVar11;
  uint *puVar12;
  u32 glyph_offset;
  u16 *puVar13;
  undefined2 *puVar14;
  u32 current_x_1;
  u32 *dest_ptr_1;
  void *local_3c;
  byte *local_38;
  
  local_3c = get_screen_ptr(0);
  if ((local_3c != (void *)0x0) || (local_3c = get_screen_ptr(1), local_3c != (void *)0x0)) {
    uVar3 = get_screen_pitch_text(0);
    uVar4 = get_screen_bytes_per_pixel();
    pfVar2 = current_font;
    if (uVar4 == 2) {
      uVar6 = (uint)(byte)*str;
      if (uVar6 != 0) {
        uVar4 = current_font->height;
        dest_ptr_1 = (u32 *)x;
        local_38 = (byte *)str;
        if (uVar6 == 10) goto LAB_080a5640;
        do {
          uVar7 = pfVar2->width;
          uVar10 = pfVar2->_font_offset[uVar6];
          if (uVar4 != 0) {
            puVar13 = pfVar2->_font_bits + (uVar10 - 1);
            puVar14 = (undefined2 *)((int)local_3c + (int)((uVar3 >> 1) * y + (int)dest_ptr_1) * 2);
            do {
              while( true ) {
                puVar13 = puVar13 + 1;
                uVar1 = *puVar13;
                if (uVar7 != 0) break;
LAB_080a560c:
                puVar14 = (undefined2 *)((int)puVar14 + (uVar3 & 0xfffffffe));
                if (puVar13 == pfVar2->_font_bits + uVar10 + (uVar4 - 1)) goto LAB_080a5618;
              }
              if ((bg_color & 0x10000) == 0) {
                uVar6 = 0xf;
                puVar9 = puVar14;
                do {
                  uVar11 = uVar6 & 0xff;
                  uVar6 = uVar6 - 1;
                  if ((uVar1 >> uVar11 & 1) == 0) {
                    *puVar9 = (short)bg_color;
                  }
                  else {
                    *puVar9 = (short)fg_color;
                  }
                  puVar9 = puVar9 + 1;
                } while (uVar6 != 0xf - uVar7);
                goto LAB_080a560c;
              }
              uVar6 = 0xf;
              puVar9 = puVar14;
              do {
                uVar11 = uVar6 & 0xff;
                uVar6 = uVar6 - 1;
                if ((uVar1 >> uVar11 & 1) != 0) {
                  *puVar9 = (short)fg_color;
                }
                puVar9 = puVar9 + 1;
              } while (0xf - uVar7 != uVar6);
              puVar14 = (undefined2 *)((int)puVar14 + (uVar3 & 0xfffffffe));
            } while (puVar13 != pfVar2->_font_bits + uVar10 + (uVar4 - 1));
          }
LAB_080a5618:
          dest_ptr_1 = (u32 *)((int)dest_ptr_1 + uVar7);
          while( true ) {
            local_38 = local_38 + 1;
            uVar6 = (uint)*local_38;
            if (uVar6 == 0) {
              return;
            }
            if (uVar6 != 10) break;
LAB_080a5640:
            y = y + uVar4;
            dest_ptr_1 = (u32 *)x;
          }
        } while( true );
      }
    }
    else {
      uVar6 = (uint)(byte)*str;
      if (uVar6 != 0) {
        uVar10 = current_font->height;
        uVar4 = x;
        do {
          if (uVar6 == 10) {
            y = y + uVar10;
            uVar4 = x;
          }
          else {
            if (uVar10 == 0) {
              uVar7 = pfVar2->width;
            }
            else {
              uVar11 = 0;
              puVar13 = pfVar2->_font_bits + (pfVar2->_font_offset[uVar6] - 1);
              uVar7 = pfVar2->width;
              puVar12 = (uint *)((int)local_3c + (y * (uVar3 >> 2) + uVar4) * 4);
              do {
                puVar13 = puVar13 + 1;
                uVar1 = *puVar13;
                if (uVar7 != 0) {
                  uVar6 = 0;
                  puVar5 = puVar12;
                  do {
                    uVar8 = 0xf - uVar6;
                    uVar6 = uVar6 + 1;
                    if ((uVar1 >> (uVar8 & 0xff) & 1) == 0) {
                      *puVar5 = (bg_color & 0x7e0) << 5 | ((bg_color << 0x10) >> 0x1b) << 0x13 |
                                (bg_color & 0x1f) << 3;
                    }
                    else {
                      *puVar5 = (fg_color & 0x7e0) << 5 | ((fg_color << 0x10) >> 0x1b) << 0x13 |
                                (fg_color & 0x1f) << 3;
                    }
                    uVar7 = pfVar2->width;
                    puVar5 = puVar5 + 1;
                  } while (uVar6 < uVar7);
                  uVar10 = pfVar2->height;
                }
                uVar11 = uVar11 + 1;
                puVar12 = (uint *)((int)puVar12 + (uVar3 & 0xfffffffc));
              } while (uVar11 < uVar10);
            }
            uVar4 = uVar4 + uVar7;
          }
          str = (char *)((byte *)str + 1);
          uVar6 = (uint)(byte)*str;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}


