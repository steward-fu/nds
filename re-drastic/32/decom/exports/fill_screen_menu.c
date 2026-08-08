/*
 * Ghidra decompilation
 *
 * Function : fill_screen_menu
 * Address  : 080a60c4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void fill_screen_menu(u16 color,u32 dest_x,u32 dest_y,u32 width,u32 height)

{
  int iVar1;
  void *pvVar2;
  u16 *pixels;
  u32 uVar3;
  u32 pitch;
  u16 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  u32 uVar8;
  uint uVar9;
  uint uVar10;
  
  pvVar2 = get_screen_ptr(0);
  uVar3 = get_screen_pitch(0);
  puVar4 = (u16 *)((int)pvVar2 + (dest_y * (uVar3 >> 1) + dest_x) * 2);
  if (height != 0) {
    uVar8 = 0;
    do {
      if (width != 0) {
        uVar5 = -((uint)((int)puVar4 << 0x1d) >> 0x1e) & 7;
        if (width <= uVar5) {
          uVar5 = width;
        }
        uVar7 = width;
        if ((width < 0xb) || (uVar7 = uVar5, uVar5 != 0)) {
          *puVar4 = color;
          uVar5 = uVar7;
          if ((((uVar7 != 1) &&
               (((puVar4[1] = color, uVar7 != 2 && (puVar4[2] = color, uVar7 != 3)) &&
                (puVar4[3] = color, uVar7 != 4)))) &&
              (((puVar4[4] = color, uVar7 != 5 && (puVar4[5] = color, uVar7 != 6)) &&
               (puVar4[6] = color, uVar7 != 7)))) && (puVar4[7] = color, uVar7 != 8)) {
            puVar4[8] = color;
            if (uVar7 == 10) {
              puVar4[9] = color;
            }
            else {
              uVar5 = 9;
            }
          }
          if (width == uVar7) goto LAB_080a6290;
        }
        uVar9 = ((width - uVar7) - 8 >> 3) + 1;
        iVar1 = uVar9 * 8;
        if (6 < (width - 1) - uVar7) {
          uVar10 = 0;
          puVar6 = (undefined8 *)(puVar4 + uVar7);
          do {
            uVar10 = uVar10 + 1;
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6 = puVar6 + 2;
          } while (uVar10 < uVar9);
          uVar5 = uVar5 + iVar1;
          if (width - uVar7 == iVar1) goto LAB_080a6290;
        }
        puVar4[uVar5] = color;
        if (uVar5 + 1 < width) {
          puVar4[uVar5 + 1] = color;
          if (uVar5 + 2 < width) {
            puVar4[uVar5 + 2] = color;
            if (uVar5 + 3 < width) {
              puVar4[uVar5 + 3] = color;
              if (uVar5 + 4 < width) {
                puVar4[uVar5 + 4] = color;
                if (uVar5 + 5 < width) {
                  uVar9 = uVar5 + 6;
                  uVar7 = uVar9;
                  if (uVar9 < width) {
                    uVar7 = uVar9 * 2;
                  }
                  puVar4[uVar5 + 5] = color;
                  if (uVar9 < width) {
                    *(u16 *)((int)puVar4 + uVar7) = color;
                  }
                }
              }
            }
          }
        }
      }
LAB_080a6290:
      uVar8 = uVar8 + 1;
      puVar4 = (u16 *)((int)puVar4 + (uVar3 & 0xfffffffe));
    } while (height != uVar8);
  }
  return;
}


