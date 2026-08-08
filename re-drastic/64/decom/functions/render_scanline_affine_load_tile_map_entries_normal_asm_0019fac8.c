/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_load_tile_map_entries_normal_asm
 * Address  : 0019fac8
 * Program  : drastic64
 */


void render_scanline_affine_load_tile_map_entries_normal_asm
               (ulong *param_1,long param_2,int param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar5 = param_1;
  do {
    uVar7 = *puVar5;
    uVar8 = puVar5[1];
    param_3 = param_3 + -8;
    uVar1 = *(undefined *)(param_2 + (uVar8 & 0xffff));
    uVar2 = *(undefined *)(param_2 + (uVar8 >> 0x10 & 0xffff));
    uVar3 = *(undefined *)(param_2 + (uVar8 >> 0x20 & 0xffff));
    uVar4 = *(undefined *)(param_2 + (uVar8 >> 0x30));
    puVar6 = (undefined4 *)((long)param_1 + 4);
    *(uint *)param_1 =
         CONCAT13(*(undefined *)(param_2 + (uVar7 >> 0x30)),
                  CONCAT12(*(undefined *)(param_2 + (uVar7 >> 0x20 & 0xffff)),
                           CONCAT11(*(undefined *)(param_2 + (uVar7 >> 0x10 & 0xffff)),
                                    *(undefined *)(param_2 + (uVar7 & 0xffff)))));
    param_1 = param_1 + 1;
    *puVar6 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
    puVar5 = puVar5 + 2;
  } while (-1 < param_3);
  return;
}


