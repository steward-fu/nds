/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_texels
 * Address  : 08052d2c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_sprite_load_texels(u32 *texels,u32 *texture_base,u32 width,u32 height,u32 texture_width)

{
  u32 *puVar1;
  u32 *puVar2;
  uint uVar3;
  u32 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  u32 *puVar9;
  u32 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (height != 0) {
    uVar4 = 0;
    do {
      if (width != 0) {
        if (width < 0xc || texture_base < texels + 4 && texels < texture_base + 4) {
          puVar9 = texture_base + -1;
          puVar1 = texels;
          do {
            puVar9 = puVar9 + 1;
            puVar2 = puVar1 + 1;
            *puVar1 = *puVar9;
            puVar1 = puVar2;
          } while (puVar2 != texels + width);
        }
        else {
          uVar8 = ((int)texture_base << 0x1d) >> 0x1f & 3;
          if (width <= uVar8) {
            uVar8 = width;
          }
          puVar1 = texels;
          uVar10 = uVar8;
          if (uVar8 != 0) {
            *texels = *texture_base;
            puVar1 = texels + 1;
            if (uVar8 != 1) {
              texels[1] = texture_base[1];
              if (uVar8 == 3) {
                texels[2] = texture_base[2];
                puVar1 = texels + 3;
              }
              else {
                puVar1 = texels + 2;
                uVar10 = 2;
              }
            }
          }
          puVar6 = (undefined8 *)(texture_base + uVar8);
          uVar5 = 0;
          uVar3 = ((width - uVar8) - 4 >> 2) + 1;
          puVar7 = (undefined8 *)(texels + uVar8);
          do {
            uVar12 = *puVar6;
            uVar13 = puVar6[1];
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 2;
            *puVar7 = uVar12;
            puVar7[1] = uVar13;
            puVar7 = puVar7 + 2;
          } while (uVar5 < uVar3);
          iVar11 = uVar10 + uVar3 * 4;
          if (width - uVar8 != uVar3 * 4) {
            puVar1[uVar3 * 4] = texture_base[iVar11];
            if (iVar11 + 1U < width) {
              puVar1[uVar3 * 4 + 1] = texture_base[iVar11 + 1U];
              if (iVar11 + 2U < width) {
                puVar1[uVar3 * 4 + 2] = texture_base[iVar11 + 2U];
              }
            }
          }
        }
        texels = texels + width;
      }
      uVar4 = uVar4 + 1;
      texture_base = texture_base + texture_width;
    } while (height != uVar4);
  }
  return;
}


