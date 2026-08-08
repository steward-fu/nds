/*
 * Ghidra decompilation
 *
 * Function : render_polygon_writeback_c_4x
 * Address  : 00152dc0
 * Program  : drastic64
 */


void render_polygon_writeback_c_4x
               (long param_1,long param_2,long param_3,int param_4,int param_5,long param_6,
               long param_7,long param_8)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if (param_4 != 0) {
    puVar5 = (ushort *)(param_1 + 0x580);
    do {
      uVar2 = puVar5[0x58];
      puVar6 = puVar5 + 2;
      uVar3 = *puVar5;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          if (*(char *)(param_8 + lVar4) != '\0') {
            uVar1 = *(undefined4 *)(param_6 + lVar4 * 4);
            *(uint *)(param_3 + (ulong)uVar3 * 4 + lVar4 * 4) =
                 *(uint *)(param_7 + lVar4 * 4) | param_5 << 0x18;
            *(undefined4 *)(param_2 + (ulong)uVar3 * 4 + lVar4 * 4) = uVar1;
          }
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 <= (uint)uVar2 && (uint)uVar2 != (uint)lVar4);
        lVar4 = (ulong)(uVar2 - 1) + 1;
        param_8 = param_8 + lVar4;
        lVar4 = lVar4 * 4;
        param_6 = param_6 + lVar4;
        param_7 = param_7 + lVar4;
      }
      param_2 = param_2 + 0x800;
      param_3 = param_3 + 0x800;
      puVar5 = puVar6;
    } while (puVar6 != (ushort *)(param_1 + ((ulong)(param_4 - 1) + 0x161) * 4));
  }
  return;
}


