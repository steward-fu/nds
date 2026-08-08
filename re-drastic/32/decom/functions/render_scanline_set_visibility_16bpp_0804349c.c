/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_16bpp
 * Address  : 0804349c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable right_block:u32[r3:4] conflicts with parameter, skipped. */

void render_scanline_set_visibility_16bpp
               (void *pixel_visibility_buffer,void *visibility_buffer,u32 left_edge,u32 right_edge)

{
  u16 *pixel_visibility_ptr_16;
  int iVar1;
  u32 block;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (right_edge >> 3 < left_edge >> 3) {
    return;
  }
  iVar1 = (int)pixel_visibility_buffer + 0x10;
  pbVar2 = (byte *)((int)visibility_buffer + (left_edge >> 3));
  do {
    uVar4 = (*(uint *)(iVar1 + -0xc) & 0x80008000) >> 0xd |
            (*(uint *)(iVar1 + -0x10) & 0x80008000) >> 0xf |
            (*(uint *)(iVar1 + -8) & 0x80008000) >> 0xb | (*(uint *)(iVar1 + -4) & 0x80008000) >> 9;
    pbVar3 = pbVar2 + 1;
    *pbVar2 = (byte)uVar4 | (byte)(uVar4 >> 0xf);
    iVar1 = iVar1 + 0x10;
    pbVar2 = pbVar3;
  } while ((uint)((int)pbVar3 - (int)visibility_buffer) <= right_edge >> 3);
  return;
}


