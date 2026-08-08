/*
 * Ghidra decompilation
 *
 * Function : render_scanline_palette_lookup_8bpp_asm
 * Address  : 0019f504
 * Program  : drastic64
 */


void render_scanline_palette_lookup_8bpp_asm
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
  ulong uVar9;
  
  do {
    uVar9 = *param_2;
    iVar8 = param_4 + -8;
    uVar2 = *(undefined2 *)(param_3 + (uVar9 >> 0xf & 0x1fe));
    uVar3 = *(undefined2 *)(param_3 + (uVar9 >> 0x17 & 0x1fe));
    uVar4 = *(undefined2 *)(param_3 + (uVar9 >> 0x1f & 0x1fe));
    uVar5 = *(undefined2 *)(param_3 + (uVar9 >> 0x27 & 0x1fe));
    uVar6 = *(undefined2 *)(param_3 + (uVar9 >> 0x2f & 0x1fe));
    *param_1 = CONCAT22(*(undefined2 *)(param_3 + (uVar9 >> 7 & 0x1fe)),
                        *(undefined2 *)(param_3 + (uVar9 & 0xff) * 2));
    uVar7 = *(undefined2 *)(param_3 + (uVar9 >> 0x37 & 0x1fe));
    param_1[1] = CONCAT22(uVar3,uVar2);
    param_1[2] = CONCAT22(uVar5,uVar4);
    param_1[3] = CONCAT22(uVar7,uVar6);
    bVar1 = 7 < param_4;
    param_1 = param_1 + 4;
    param_2 = param_2 + 1;
    param_4 = iVar8;
  } while (iVar8 != 0 && bVar1);
  return;
}


