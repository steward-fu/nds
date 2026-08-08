/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_texels_paletted_4bpp
 * Address  : 08052c30
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_sprite_load_texels_paletted_4bpp
               (u32 *texels,u8 *texture_base,u32 *palette,u32 width,u32 height,u32 texture_width)

{
  u32 i2;
  uint uVar1;
  byte *pbVar2;
  u32 uVar3;
  int iVar4;
  byte *pbVar5;
  u32 *puVar6;
  
  if ((width & 3) == 0) {
    uVar3 = 0;
    if (height != 0) {
      do {
        if (width != 0) {
          uVar1 = 0;
          pbVar2 = texture_base;
          puVar6 = texels;
          do {
            texels = puVar6 + 4;
            uVar1 = uVar1 + 4;
            *puVar6 = palette[*pbVar2];
            puVar6[1] = palette[pbVar2[1]];
            puVar6[2] = palette[pbVar2[2]];
            puVar6[3] = palette[pbVar2[3]];
            pbVar2 = pbVar2 + 4;
            puVar6 = texels;
          } while (uVar1 < width);
        }
        uVar3 = uVar3 + 1;
        texture_base = texture_base + texture_width;
      } while (height != uVar3);
    }
  }
  else if (height != 0) {
    pbVar2 = texture_base + -1;
    if (width == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = width << 2;
    }
    uVar3 = 0;
    do {
      i2 = 0;
      pbVar5 = pbVar2;
      puVar6 = texels;
      do {
        pbVar5 = pbVar5 + 1;
        i2 = i2 + 1;
        *puVar6 = palette[*pbVar5];
        puVar6 = puVar6 + 1;
      } while (i2 < width);
      uVar3 = uVar3 + 1;
      texels = (u32 *)((int)texels + iVar4);
      pbVar2 = pbVar2 + texture_width;
    } while (height != uVar3);
  }
  return;
}


