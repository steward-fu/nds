/*
 * Ghidra decompilation
 *
 * Function : render_polygon_load_depth_colors_id_c_4x
 * Address  : 00153aa0
 * Program  : drastic64
 */


void render_polygon_load_depth_colors_id_c_4x
               (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7,int param_8)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  
  if (param_8 != 0) {
    lVar1 = param_4 + ((ulong)(param_8 - 1) + 1) * 0x800;
    puVar6 = (ushort *)(param_7 + 0x580);
    do {
      uVar2 = puVar6[0x58];
      uVar3 = *puVar6;
      lVar5 = (ulong)uVar3 * 4;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_4 + lVar5 + lVar4 * 4);
          *(undefined4 *)(param_2 + lVar4 * 4) = *(undefined4 *)(param_5 + lVar5 + lVar4 * 4);
          *(undefined *)(param_3 + lVar4) = *(undefined *)(param_6 + (ulong)uVar3 + lVar4);
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 <= (uint)uVar2 && (uint)uVar2 != (uint)lVar4);
        lVar5 = (ulong)(uVar2 - 1) + 1;
        param_3 = param_3 + lVar5;
        lVar5 = lVar5 * 4;
        param_1 = param_1 + lVar5;
        param_2 = param_2 + lVar5;
      }
      param_4 = param_4 + 0x800;
      param_5 = param_5 + 0x800;
      param_6 = param_6 + 0x200;
      puVar6 = puVar6 + 2;
    } while (param_4 != lVar1);
  }
  return;
}


