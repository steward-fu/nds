/*
 * Ghidra decompilation
 *
 * Function : render_scanline_palette_lookup_12bpp_asm
 * Address  : 0019f574
 * Program  : drastic64
 */


void render_scanline_palette_lookup_12bpp_asm
               (undefined4 *param_1,ulong *param_2,long param_3,int param_4)

{
  bool bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  do {
    puVar9 = param_2 + 1;
    uVar10 = *param_2;
    iVar8 = param_4 + -8;
    param_2 = param_2 + 2;
    uVar11 = *puVar9;
    uVar2 = *(undefined2 *)(param_3 + (uVar10 >> 0x1f & 0x1ffe));
    uVar3 = *(undefined2 *)(param_3 + (uVar10 >> 0x2f & 0x1ffe));
    uVar4 = *(undefined2 *)(param_3 + (uVar11 & 0xfff) * 2);
    uVar5 = *(undefined2 *)(param_3 + (uVar11 >> 0xf & 0x1ffe));
    uVar6 = *(undefined2 *)(param_3 + (uVar11 >> 0x1f & 0x1ffe));
    *param_1 = CONCAT22(*(undefined2 *)(param_3 + (uVar10 >> 0xf & 0x1ffe)),
                        *(undefined2 *)(param_3 + (uVar10 & 0xfff) * 2));
    uVar7 = *(undefined2 *)(param_3 + (uVar11 >> 0x2f & 0x1ffe));
    param_1[1] = CONCAT22(uVar3,uVar2);
    param_1[2] = CONCAT22(uVar5,uVar4);
    param_1[3] = CONCAT22(uVar7,uVar6);
    bVar1 = 7 < param_4;
    param_1 = param_1 + 4;
    param_4 = iVar8;
  } while (iVar8 != 0 && bVar1);
  return;
}


