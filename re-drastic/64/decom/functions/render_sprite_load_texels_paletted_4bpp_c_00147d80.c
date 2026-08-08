/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_texels_paletted_4bpp_c
 * Address  : 00147d80
 * Program  : drastic64
 */


void render_sprite_load_texels_paletted_4bpp_c
               (undefined4 *param_1,long param_2,long param_3,uint param_4,int param_5,ulong param_6
               )

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  if ((param_4 & 3) == 0) {
    if (param_5 != 0) {
      iVar6 = 0;
      if (param_4 != 0) {
        do {
          uVar3 = 0;
          puVar1 = param_1;
          do {
            iVar2 = (int)uVar3;
            *puVar1 = *(undefined4 *)(param_3 + (ulong)*(byte *)(param_2 + uVar3) * 4);
            uVar3 = (ulong)(iVar2 + 4U);
            param_1 = puVar1 + 4;
            puVar1[1] = *(undefined4 *)
                         (param_3 + (ulong)*(byte *)(param_2 + (ulong)(iVar2 + 1)) * 4);
            puVar1[2] = *(undefined4 *)
                         (param_3 + (ulong)*(byte *)(param_2 + (ulong)(iVar2 + 2)) * 4);
            puVar1[3] = *(undefined4 *)
                         (param_3 + (ulong)*(byte *)(param_2 + (ulong)(iVar2 + 3)) * 4);
            puVar1 = param_1;
          } while (iVar2 + 4U < param_4);
          iVar6 = iVar6 + 1;
          param_2 = param_2 + (param_6 & 0xffffffff);
        } while (param_5 != iVar6);
        return;
      }
    }
  }
  else if (param_5 != 0) {
    lVar5 = ((ulong)(param_4 - 1) + 1) * 4;
    if (param_4 == 0) {
      lVar5 = 4;
    }
    iVar6 = 0;
    do {
      lVar4 = 0;
      do {
        param_1[lVar4] = *(undefined4 *)(param_3 + (ulong)*(byte *)(param_2 + lVar4) * 4);
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < param_4);
      iVar6 = iVar6 + 1;
      param_1 = (undefined4 *)((long)param_1 + lVar5);
      param_2 = param_2 + (param_6 & 0xffffffff);
    } while (param_5 != iVar6);
  }
  return;
}


