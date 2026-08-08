/*
 * Ghidra decompilation
 *
 * Function : blit_screen_menu
 * Address  : 080a62d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void blit_screen_menu(u16 *src,u32 dest_x,u32 dest_y,u32 width,u32 height)

{
  int iVar1;
  void *pvVar2;
  u16 *pixels;
  u32 uVar3;
  u32 pitch;
  int iVar4;
  u16 *puVar5;
  u16 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  u16 *puVar9;
  u16 *puVar10;
  u16 *puVar11;
  uint uVar12;
  u16 *puVar13;
  u32 uVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_30;
  
  pvVar2 = get_screen_ptr(0);
  uVar3 = get_screen_pitch(0);
  puVar6 = (u16 *)((int)pvVar2 + (dest_y * (uVar3 >> 1) + dest_x) * 2);
  if (height != 0) {
    iVar16 = 0;
    uVar14 = 0;
    puVar11 = src + 8;
    puVar13 = src;
    do {
      if (width != 0) {
        if (width < 0xf || puVar13 < puVar6 + 8 && puVar6 < puVar11) {
          puVar5 = puVar13;
          puVar9 = puVar6;
          do {
            puVar10 = puVar9 + 1;
            *puVar9 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar9 = puVar10;
          } while (puVar10 != puVar6 + width);
        }
        else {
          uVar7 = -((uint)((int)puVar13 << 0x1d) >> 0x1e) & 7;
          if (width <= uVar7) {
            uVar7 = width;
          }
          local_30 = uVar7;
          if ((((uVar7 != 0) && (*puVar6 = puVar11[-8], uVar7 != 1)) &&
              (puVar6[1] = puVar11[-7], uVar7 != 2)) &&
             (((puVar6[2] = puVar11[-6], uVar7 != 3 && (puVar6[3] = puVar11[-5], uVar7 != 4)) &&
              (puVar6[4] = puVar11[-4], uVar7 != 5)))) {
            puVar6[5] = puVar11[-3];
            if (uVar7 == 7) {
              puVar6[6] = puVar11[-2];
            }
            else {
              local_30 = 6;
            }
          }
          puVar15 = (undefined8 *)(src + uVar7 + iVar16);
          uVar12 = ((width - uVar7) - 8 >> 3) + 1;
          puVar8 = (undefined8 *)(puVar6 + uVar7);
          iVar1 = uVar12 * 8;
          uVar7 = 0;
          do {
            uVar17 = *puVar15;
            uVar18 = puVar15[1];
            uVar7 = uVar7 + 1;
            puVar15 = puVar15 + 2;
            *puVar8 = uVar17;
            puVar8[1] = uVar18;
            puVar8 = puVar8 + 2;
          } while (uVar7 < uVar12);
          iVar4 = local_30 + iVar1;
          if (width - uVar7 != iVar1) {
            uVar7 = iVar4 + 1;
            puVar6[iVar4] = src[iVar4 + iVar16];
            if (uVar7 < width) {
              uVar12 = iVar4 + 2;
              puVar6[uVar7] = src[uVar7 + iVar16];
              if (uVar12 < width) {
                uVar7 = iVar4 + 3;
                puVar6[uVar12] = src[uVar12 + iVar16];
                if (uVar7 < width) {
                  uVar12 = iVar4 + 4;
                  puVar6[uVar7] = src[uVar7 + iVar16];
                  if (uVar12 < width) {
                    uVar7 = iVar4 + 5;
                    puVar6[uVar12] = src[uVar12 + iVar16];
                    if (uVar7 < width) {
                      uVar12 = iVar4 + 6;
                      puVar6[uVar7] = src[uVar7 + iVar16];
                      if (uVar12 < width) {
                        puVar6[uVar12] = src[uVar12 + iVar16];
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + width;
      puVar11 = puVar11 + width;
      iVar16 = iVar16 + width;
      puVar6 = (u16 *)((int)puVar6 + (uVar3 & 0xfffffffe));
    } while (height != uVar14);
  }
  return;
}


