/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_load_tile_map_entries_extended_asm
 * Address  : 0019fb40
 * Program  : drastic64
 */


void render_scanline_affine_load_tile_map_entries_extended_asm
               (ulong *param_1,long param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar7 = param_1;
  do {
    uVar8 = *param_1;
    uVar9 = param_1[1];
    param_3 = param_3 + -8;
    uVar1 = *(undefined2 *)(param_2 + (uVar8 >> 0x20 & 0xffff));
    uVar2 = *(undefined2 *)(param_2 + (uVar8 >> 0x30));
    uVar3 = *(undefined2 *)(param_2 + (uVar9 & 0xffff));
    uVar4 = *(undefined2 *)(param_2 + (uVar9 >> 0x10 & 0xffff));
    uVar5 = *(undefined2 *)(param_2 + (uVar9 >> 0x20 & 0xffff));
    uVar6 = *(undefined2 *)(param_2 + (uVar9 >> 0x30));
    *(uint *)puVar7 =
         CONCAT22(*(undefined2 *)(param_2 + (uVar8 >> 0x10 & 0xffff)),
                  *(undefined2 *)(param_2 + (uVar8 & 0xffff)));
    *(uint *)((long)puVar7 + 4) = CONCAT22(uVar2,uVar1);
    *(uint *)(puVar7 + 1) = CONCAT22(uVar4,uVar3);
    *(uint *)((long)puVar7 + 0xc) = CONCAT22(uVar6,uVar5);
    param_1 = param_1 + 2;
    puVar7 = puVar7 + 2;
  } while (-1 < param_3);
  return;
}


