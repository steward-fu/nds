/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_render_tiles_extended_normal_c
 * Address  : 001a2040
 * Program  : drastic64
 */


void render_scanline_affine_render_tiles_extended_normal_c
               (long param_1,long param_2,byte *param_3,ushort *param_4,byte *param_5,int param_6,
               long param_7)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = (uint)*param_3;
  uVar2 = *param_4;
  bVar1 = *param_5;
  if (uVar4 == 0) {
    uVar4 = 0x100;
  }
  lVar5 = 1;
  do {
    if (uVar4 != 0) {
      lVar3 = 0;
      do {
        *(undefined *)(param_1 + lVar3) =
             *(undefined *)
              (param_7 + ((ulong)uVar2 & 0x3ff) * 0x40 + (ulong)(*(byte *)(param_2 + lVar3) ^ bVar1)
              );
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < uVar4);
      lVar3 = (ulong)(uVar4 - 1) + 1;
      param_2 = param_2 + lVar3;
      param_1 = param_1 + lVar3;
    }
    uVar2 = param_4[lVar5];
    uVar4 = (uint)param_3[lVar5];
    bVar1 = param_5[lVar5];
    lVar5 = lVar5 + 1;
  } while ((ulong)(param_6 - 1) + 2 != lVar5);
  return;
}


