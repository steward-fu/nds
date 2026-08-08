/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_ext
 * Address  : 001a1d20
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_tiled_ext(long param_1,long param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined auStack_120 [80];
  undefined auStack_d0 [48];
  undefined auStack_a0 [152];
  long local_8;
  
  uVar5 = *(ushort *)(param_1 + 0x98);
  uVar1 = (uint)*(ushort *)(param_1 + 0x9c) + param_4;
  local_8 = ___stack_chk_guard;
  uVar6 = *(ushort *)(param_1 + 0x9a);
  iVar4 = *(int *)(param_1 + 0x38);
  lVar11 = *(long *)(param_1 + 8);
  iVar7 = (uVar1 & 0xf8) * 8;
  uVar12 = (ulong)(uVar6 & 7);
  lVar2 = lVar11 + (ulong)*(uint *)(param_1 + 0x3c);
  if (((short)uVar5 < 0) && ((uVar1 >> 8 & 1) != 0)) {
    if ((uVar5 & 0x4000) == 0) {
      uVar9 = iVar4 + 0x800 + iVar7;
LAB_001a1d9c:
      uVar10 = (ulong)uVar9;
      uVar8 = uVar10;
      goto joined_r0x001a1e40;
    }
    uVar9 = iVar4 + 0x1000 + iVar7;
  }
  else {
    uVar9 = iVar4 + iVar7;
    if ((uVar5 & 0x4000) == 0) goto LAB_001a1d9c;
  }
  uVar3 = uVar9 + 0x800;
  if (0xff < uVar6) {
    uVar3 = uVar9;
    uVar9 = uVar9 + 0x800;
  }
  uVar10 = (ulong)uVar9;
  uVar8 = (ulong)uVar3;
joined_r0x001a1e40:
  if ((uVar5 >> 7 & 1) == 0) {
    render_scanline_tiled_setup_tile_map_entries_4bpp_asm
              (auStack_120,auStack_d0,lVar11 + uVar10,lVar11 + uVar8,uVar6 >> 3 & 0x1f,
               (uVar1 & 7) << 2);
    render_scanline_tiled_span_4bpp_asm
              (param_2 + uVar12 * -2,auStack_a0,*(undefined8 *)(param_1 + 0x10),lVar2,auStack_120,
               auStack_d0);
    render_scanline_set_visibility_4bpp_asm(param_3,auStack_a0,uVar12);
  }
  else {
    render_scanline_tiled_setup_tile_map_entries_8bpp_asm(auStack_120,auStack_d0);
    if (*(char *)(param_1 + 0xad) == '\0') {
      lVar11 = param_2 + 0x110;
      render_scanline_tiled_span_8bpp_normal_palette_asm
                (lVar11 - uVar12,lVar2,auStack_120,auStack_d0);
      render_scanline_set_visibility_8bpp_asm(param_3,lVar11);
      render_scanline_palette_lookup_8bpp_asm(param_2,lVar11,*(undefined8 *)(param_1 + 0x10),0x100);
    }
    else {
      lVar11 = *(long *)(param_1 + 0x18);
      if (lVar11 != 0) {
        render_scanline_tiled_span_8bpp_ext_palette_asm
                  (param_2 + uVar12 * -2,lVar2,auStack_120,auStack_d0);
        render_scanline_set_visibility_12bpp_asm(param_3,param_2);
        render_scanline_palette_lookup_12bpp_asm(param_2,param_2,lVar11,0x100);
      }
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


