/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_spans_c_1x
 * Address  : 0014e910
 * Program  : drastic64
 */


void render_polygon_setup_spans_c_1x(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_1 + 0xb0);
  if (param_2 != 0) {
    do {
      uVar6 = *(ushort *)(piVar8 + 0x160);
      uVar7 = *(ushort *)(piVar8 + 0x134);
      if (uVar6 < uVar7) {
        iVar5 = piVar8[-0x2c];
        iVar1 = piVar8[0x2c];
        iVar2 = piVar8[0x84];
        iVar3 = piVar8[0xdc];
        iVar4 = piVar8[0x134];
        piVar8[-0x2c] = *piVar8;
        *piVar8 = iVar5;
        piVar8[0x2c] = piVar8[0x58];
        piVar8[0x58] = iVar1;
        piVar8[0x84] = piVar8[0xb0];
        piVar8[0xb0] = iVar2;
        piVar8[0xdc] = piVar8[0x108];
        piVar8[0x108] = iVar3;
        piVar8[0x134] = piVar8[0x160];
        piVar8[0x160] = iVar4;
      }
      if (0x100 < uVar7) {
        *(undefined2 *)(piVar8 + 0x134) = 0x100;
      }
      if (0x100 < uVar6) {
        *(undefined2 *)(piVar8 + 0x160) = 0x100;
      }
      *piVar8 = *piVar8 - piVar8[-0x2c];
      piVar8[0x58] = piVar8[0x58] - piVar8[0x2c];
      *(short *)(piVar8 + 0xb0) = *(short *)(piVar8 + 0xb0) - *(short *)(piVar8 + 0x84);
      *(short *)((long)piVar8 + 0x2c2) =
           *(short *)((long)piVar8 + 0x2c2) - *(short *)((long)piVar8 + 0x212);
      *(short *)(piVar8 + 0x108) = *(short *)(piVar8 + 0x108) - *(short *)(piVar8 + 0xdc);
      *(short *)((long)piVar8 + 0x422) =
           *(short *)((long)piVar8 + 0x422) - *(short *)((long)piVar8 + 0x372);
      *(short *)(piVar8 + 0x160) = *(short *)(piVar8 + 0x160) - *(short *)(piVar8 + 0x134);
      *(short *)((long)piVar8 + 0x582) =
           *(short *)((long)piVar8 + 0x582) - *(short *)((long)piVar8 + 0x4d2);
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)(param_1 + ((ulong)(param_2 - 1) + 0x2d) * 4));
  }
  return;
}


