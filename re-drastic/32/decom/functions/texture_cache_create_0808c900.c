/*
 * Ghidra decompilation
 *
 * Function : texture_cache_create
 * Address  : 0808c900
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable palette_slot_b:u32[r3:4] conflicts with parameter, skipped. */

void texture_cache_create
               (texture_cache_element_struct *texture_cache_element,
               texture_cache_struct *texture_cache,u32 texture_image_param,u32 palette_offset)

{
  size_t __n;
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  video_struct *pvVar5;
  video_struct *video;
  u32 allocation_size;
  uint uVar6;
  u16 *puVar7;
  u32 split_size;
  u16 *palette_a;
  int iVar8;
  u32 texture_size;
  uint color0_transparent_00;
  uint uVar9;
  u32 texture_slot_offset;
  uint uVar10;
  u32 texture_offset;
  u32 palette_slot;
  u8 *puVar11;
  u8 *texture_source;
  u16 *__src;
  u16 *palette_b;
  uint uVar12;
  uint uVar13;
  u32 texture_format;
  u32 texture_slot_1;
  uint uVar14;
  u32 texture_height;
  u8 *puVar15;
  u8 *texture_source_1;
  uint uVar16;
  u32 *texture_dest;
  uint uVar17;
  u32 palette_size;
  u32 texture_width;
  u32 texture_slot;
  u32 *texture_dest_00;
  u32 uVar18;
  u32 split_size_1;
  u32 start_page_offset;
  u32 color0_transparent;
  int local_34;
  
  uVar16 = (texture_image_param & 0xffff) * 8;
  texture_dest = texture_cache_element->data;
  iVar1 = 8 << ((texture_image_param << 9) >> 0x1d);
  pvVar5 = texture_cache->video;
  iVar2 = 8 << ((texture_image_param << 6) >> 0x1d);
  uVar13 = (texture_image_param << 3) >> 0x1d;
  texture_cache_element->image_param = texture_image_param & 0xfff0ffff;
  iVar8 = iVar2 * iVar1;
  texture_cache_element->palette_offset = (u16)palette_offset;
  texture_cache_element->dirty = '\0';
  if (texture_dest != (u32 *)0x0) {
    if (uVar13 == texture_cache_element->format) goto LAB_0808ca08;
    free(texture_dest);
    if (texture_cache_element->palette != (u32 *)0x0) {
      free(texture_cache_element->palette);
    }
    texture_cache_element->palette = (u32 *)0x0;
  }
  bVar4 = ""[uVar13];
  texture_dest = (u32 *)malloc(iVar8 * (uint)bVar4);
  uVar18 = texture_cache->texture_bytes_allocated;
  texture_cache_element->data = texture_dest;
  texture_cache->texture_bytes_allocated = uVar18 + iVar8 * (uint)bVar4;
LAB_0808ca08:
  uVar6 = (uint)""[uVar13];
  texture_cache_element->height = (u16)iVar2;
  texture_cache_element->width = (u16)iVar1;
  texture_cache_element->format = (byte)((texture_image_param << 3) >> 0x1d);
  uVar3 = (uint)(iVar8 * 2) >> uVar6;
  texture_cache_element->paletted = '\0';
  texture_cache_element->texture_slot_pages_allocated =
       -1 << (uVar16 >> 0xe) & ~(-2 << ((uVar16 - 1) + uVar3 >> 0xe & 0xff));
  if (uVar13 == 5) {
    uVar13 = uVar16 >> 0x11;
    uVar6 = ((texture_image_param & 0xffff) << 0x12) >> 0x10;
    puVar11 = texture_cache->video->texture_slots[uVar13];
    if ((puVar11 == (u8 *)0x0) ||
       (puVar15 = texture_cache->video->texture_slots[1], puVar15 == (u8 *)0x0)) {
      memset(texture_dest,0,iVar8 * 4);
    }
    else {
      texture_cache_convert_compressed
                (texture_cache_element,(u32 *)(puVar11 + (uVar16 & 0x1ffff)),
                 (u16 *)(puVar15 + uVar6 + uVar13 * 0x8000),palette_offset << 3,
                 pvVar5->texture_palette_slots);
    }
    uVar6 = uVar6 + (uVar13 + 4) * 0x8000;
    texture_cache_element->texture_palette_pages_allocated = 0xf;
    texture_cache_element->texture_slot_pages_allocated =
         texture_cache_element->texture_slot_pages_allocated |
         -1 << (uVar6 >> 0xe) & ~(-2 << ((uVar3 - 1) + uVar6 >> 0xe & 0xff));
  }
  else {
    color0_transparent_00 = (texture_image_param << 2) >> 0x1f;
    uVar9 = uVar16 & 0x1ffff;
    if (uVar13 == 7) {
      puVar7 = (u16 *)0x0;
      texture_cache_element->texture_palette_pages_allocated = 0;
    }
    else {
      uVar14 = palette_offset << 2;
      if (uVar13 != 2) {
        uVar14 = palette_offset << 3;
      }
      uVar12 = uVar14 >> 0xd;
      uVar17 = (uint)texture_cache_create::lexical_block_1::lexical_block_1_0::palette_sizes[uVar13]
      ;
      uVar14 = uVar14 & 0x1fff;
      if (5 < uVar12) {
        __printf_chk(1,"weird palette slot (%d)!\n",uVar12);
        uVar12 = uVar12 - 6;
      }
      if (uVar17 + uVar14 < 0x2001) {
        puVar7 = pvVar5->texture_palette_slots[uVar12];
        texture_cache_element->texture_palette_pages_allocated = 1 << (uVar12 & 0xff);
        if (puVar7 == (u16 *)0x0) {
          puVar7 = texture_cache_create::copy_palette;
          __memset_chk(texture_cache_create::copy_palette,0,uVar17 << 1,0x200);
          texture_dest = texture_cache_element->data;
        }
        else {
          texture_dest = texture_cache_element->data;
          puVar7 = puVar7 + uVar14;
        }
      }
      else {
        uVar10 = uVar12 + 1;
        if (5 < uVar10) {
          uVar10 = uVar12 - 5;
        }
        split_size = (u32)pvVar5->texture_palette_slots[uVar12];
        __src = pvVar5->texture_palette_slots[uVar10];
        texture_cache_element->texture_palette_pages_allocated = 3 << (uVar12 & 0xff);
        if (split_size == 0) {
          local_34 = (0x2000 - uVar14) * 2;
          __memset_chk(texture_cache_create::copy_palette,0,local_34,0x200);
        }
        else {
          local_34 = (0x2000 - uVar14) * 2;
          __memcpy_chk(texture_cache_create::copy_palette,split_size + uVar14 * 2,local_34,0x200);
        }
        puVar7 = texture_cache_create::copy_palette;
        __n = (uVar17 - (0x2000 - uVar14)) * 2;
        if (__src == (u16 *)0x0) {
          memset((void *)((int)texture_cache_create::copy_palette + local_34),0,__n);
          texture_dest = texture_cache_element->data;
        }
        else {
          memcpy((void *)((int)texture_cache_create::copy_palette + local_34),__src,__n);
          texture_dest = texture_cache_element->data;
        }
      }
    }
    puVar11 = texture_cache->video->texture_slots[uVar16 >> 0x11];
    uVar14 = uVar3;
    if (0x1ffff < uVar3 + uVar9) {
      uVar14 = 0x20000 - uVar9;
      uVar16 = (uVar16 >> 0x11) + 1 & 3;
      uVar18 = uVar3 - uVar14;
      puVar15 = texture_cache->video->texture_slots[uVar16];
      texture_dest_00 = (u32 *)((uint)""[uVar13] * ((uVar14 << uVar6) >> 1) + (int)texture_dest);
      if (0x1ffff < uVar18) {
        texture_cache_convert_split
                  (texture_cache,texture_cache_element,
                   (u32 *)((uint)""[uVar13] * ((uint)(0x20000 << uVar6) >> 1) + (int)texture_dest_00
                          ),uVar18 - 0x20000,puVar7,uVar16 + 1 & 3,0,uVar13,color0_transparent_00);
        uVar18 = 0x20000;
      }
      texture_cache_convert
                (texture_cache_element,texture_dest_00,puVar15,puVar7,uVar13,uVar18,
                 color0_transparent_00);
    }
    if (puVar11 != (u8 *)0x0) {
      puVar11 = puVar11 + uVar9;
    }
    texture_cache_convert
              (texture_cache_element,texture_dest,puVar11,puVar7,uVar13,uVar14,color0_transparent_00
              );
  }
  return;
}


