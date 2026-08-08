/*
 * Ghidra decompilation
 *
 * Function : render_polygon_writeback_alpha_c_1x
 * Address  : 0014db50
 * Program  : drastic64
 */


void render_polygon_writeback_alpha_c_1x
               (long param_1,long param_2,long param_3,long param_4,int param_5,long param_6,
               long param_7,long param_8)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if (param_5 != 0) {
    puVar5 = (ushort *)(param_1 + 0x580);
    do {
      uVar1 = puVar5[0x58];
      puVar6 = puVar5 + 2;
      uVar2 = *puVar5;
      if (uVar1 != 0) {
        lVar3 = (ulong)uVar2 * 4;
        lVar4 = 0;
        do {
          *(undefined4 *)(param_2 + lVar3 + lVar4 * 4) = *(undefined4 *)(param_6 + lVar4 * 4);
          *(undefined4 *)(param_3 + lVar3 + lVar4 * 4) = *(undefined4 *)(param_7 + lVar4 * 4);
          *(undefined *)(param_4 + (ulong)uVar2 + lVar4) = *(undefined *)(param_8 + lVar4);
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 <= (uint)uVar1 && (uint)uVar1 != (uint)lVar4);
        lVar4 = (ulong)(uVar1 - 1) + 1;
        param_8 = param_8 + lVar4;
        lVar4 = lVar4 * 4;
        param_6 = param_6 + lVar4;
        param_7 = param_7 + lVar4;
      }
      param_2 = param_2 + 0x400;
      param_3 = param_3 + 0x400;
      param_4 = param_4 + 0x100;
      puVar5 = puVar6;
    } while (puVar6 != (ushort *)(param_1 + ((ulong)(param_5 - 1) + 0x161) * 4));
  }
  return;
}


