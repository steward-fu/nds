/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_texels_paletted_c
 * Address  : 00147ca0
 * Program  : drastic64
 */


void render_sprite_load_texels_paletted_c
               (undefined4 *param_1,long param_2,long param_3,uint param_4,int param_5,ulong param_6
               )

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  if ((param_4 & 3) == 0) {
    if (param_5 != 0) {
      iVar5 = 0;
      if (param_4 != 0) {
        do {
          uVar4 = 0;
          puVar1 = param_1;
          do {
            iVar2 = (int)uVar4;
            *puVar1 = *(undefined4 *)(param_3 + (ulong)*(byte *)(param_2 + uVar4) * 4);
            uVar4 = (ulong)(iVar2 + 4U);
            param_1 = puVar1 + 4;
            puVar1[1] = *(undefined4 *)
                         (param_3 + (ulong)*(byte *)(param_2 + (ulong)(iVar2 + 1)) * 4);
            puVar1[2] = *(undefined4 *)
                         (param_3 + (ulong)*(byte *)(param_2 + (ulong)(iVar2 + 2)) * 4);
            puVar1[3] = *(undefined4 *)
                         (param_3 + (ulong)*(byte *)(param_2 + (ulong)(iVar2 + 3)) * 4);
            puVar1 = param_1;
          } while (iVar2 + 4U < param_4);
          iVar5 = iVar5 + 1;
          param_2 = param_2 + (param_6 & 0xffffffff);
        } while (param_5 != iVar5);
        return;
      }
    }
  }
  else if (param_5 != 0) {
    lVar6 = ((ulong)(param_4 - 1) + 1) * 4;
    if (param_4 == 0) {
      lVar6 = 4;
    }
    iVar5 = 0;
    do {
      lVar3 = 0;
      do {
        param_1[lVar3] = *(undefined4 *)(param_3 + (ulong)*(byte *)(param_2 + lVar3) * 4);
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < param_4);
      iVar5 = iVar5 + 1;
      param_1 = (undefined4 *)((long)param_1 + lVar6);
      param_2 = param_2 + (param_6 & 0xffffffff);
    } while (param_5 != iVar5);
  }
  return;
}


