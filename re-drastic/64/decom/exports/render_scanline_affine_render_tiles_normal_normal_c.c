/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_render_tiles_normal_normal_c
 * Address  : 001a1fd0
 * Program  : drastic64
 */


void render_scanline_affine_render_tiles_normal_normal_c
               (long param_1,long param_2,byte *param_3,byte *param_4,int param_5,long param_6)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (uint)*param_3;
  bVar1 = *param_4;
  if (uVar3 == 0) {
    uVar3 = 0x100;
  }
  lVar4 = 1;
  do {
    if (uVar3 != 0) {
      lVar2 = 0;
      do {
        *(undefined *)(param_1 + lVar2) =
             *(undefined *)(param_6 + (ulong)bVar1 * 0x40 + (ulong)*(byte *)(param_2 + lVar2));
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < uVar3);
      lVar2 = (ulong)(uVar3 - 1) + 1;
      param_2 = param_2 + lVar2;
      param_1 = param_1 + lVar2;
    }
    bVar1 = param_4[lVar4];
    uVar3 = (uint)param_3[lVar4];
    lVar4 = lVar4 + 1;
  } while ((ulong)(param_5 - 1) + 2 != lVar4);
  return;
}


