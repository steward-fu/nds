/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_8bpp
 * Address  : 0804340c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable right_block:u32[r3:4] conflicts with parameter, skipped. */

void render_scanline_set_visibility_8bpp
               (void *pixel_visibility_buffer,void *visibility_buffer,u32 left_edge,u32 right_edge)

{
  u32 *pixel_visibility_ptr_32;
  int iVar1;
  u32 block;
  byte *pbVar2;
  byte *pbVar3;
  u32 block_visibility;
  uint uVar4;
  
  if (right_edge >> 3 < left_edge >> 3) {
    return;
  }
  iVar1 = (int)pixel_visibility_buffer + 8;
  pbVar2 = (byte *)((int)visibility_buffer + (left_edge >> 3));
  do {
    uVar4 = (*(uint *)(iVar1 + -4) | *(uint *)(iVar1 + -4) << 4) & 0xf0f0f0f0 |
            (*(uint *)(iVar1 + -8) | *(uint *)(iVar1 + -8) >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = (uVar4 | uVar4 >> 1) & 0x11111111;
    uVar4 = uVar4 | uVar4 >> 7;
    pbVar3 = pbVar2 + 1;
    *pbVar2 = (byte)uVar4 | (byte)(uVar4 >> 0xe);
    iVar1 = iVar1 + 8;
    pbVar2 = pbVar3;
  } while ((uint)((int)pbVar3 - (int)visibility_buffer) <= right_edge >> 3);
  return;
}


