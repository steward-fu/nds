/*
 * Ghidra decompilation
 *
 * Function : FUN_00151dfc
 * Address  : 00151dfc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00151dfc(void *param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  undefined auStack_110 [264];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if ((*(int *)((long)param_1 + 0x24014) == 0) ||
     (lVar6 = *(long *)((long)param_1 + 0x24000),
     *(int *)(polygon_sort_list_15121 + lVar6 + 0xe5510) == 0)) {
    video_3d_resolve_bin_edge_mark_1x
              (param_1,param_2,param_3,*(int *)((long)param_1 + 0x24014),param_1,0);
  }
  else {
    lVar8 = *(long *)((long)param_1 + 0x24008);
    uVar4 = *(undefined4 *)(polygon_sort_list_15121 + lVar6 + 0xe550c);
    uVar5 = *(uint *)(polygon_sort_list_15121 + lVar6 + 0xe5500) >> 8 & 0xf;
    pvVar7 = (void *)((long)param_1 + 0x10000);
    uVar5 = uVar5 | ((*(ushort *)(lVar8 + 0x9aaa) & 0x7fff) + (0x400 >> uVar5)) * 0x10000;
    lVar1 = lVar8 + 0x99b4;
    lVar2 = lVar8 + 0x9974;
    if (param_3 == 0) {
      video_3d_fog_calculate_weights_asm_1x(pvVar7,auStack_110,lVar2,uVar5);
      video_3d_fog_modulate_alpha_resolve_asm_1x
                (param_1,param_1,auStack_110,*(undefined4 *)(lVar8 + 0x9a9c));
      video_3d_edge_identify_top_asm_1x(auStack_110,pvVar7,(long)param_1 + 0x10400,uVar4);
      video_3d_edge_mark_asm_1x(param_2,param_1,auStack_110,lVar1);
    }
    else {
      memcpy(polygon_sort_list_15121 + lVar6 + ((ulong)(param_3 - 1) & 0x3fffff) * 0x1000 + 0xc4d00,
             pvVar7,0x800);
      memcpy(polygon_sort_list_15121 + lVar6 + ((ulong)(param_3 - 1) & 0x7fffff) * 0x800 + 0xda900,
             param_1,0x400);
    }
    lVar10 = param_2 + 0x400;
    pvVar9 = (void *)((long)param_1 + 0x10400);
    do {
      video_3d_fog_calculate_weights_asm_1x(pvVar9,auStack_110,lVar2,uVar5);
      lVar3 = (long)pvVar7 + -0xfc00;
      video_3d_fog_modulate_alpha_resolve_asm_1x
                (lVar3,lVar3,auStack_110,*(undefined4 *)(lVar8 + 0x9a9c));
      video_3d_edge_identify_asm_1x(auStack_110,pvVar7,pvVar9,(void *)((long)pvVar9 + 0x400),uVar4);
      video_3d_edge_mark_asm_1x(lVar10,lVar3,auStack_110,lVar1);
      lVar10 = lVar10 + 0x400;
      pvVar7 = pvVar9;
      pvVar9 = (void *)((long)pvVar9 + 0x400);
    } while (param_2 + 0x3c00 != lVar10);
    pvVar7 = (void *)((long)param_1 + 0x13800);
    pvVar9 = (void *)((long)param_1 + 0x3c00);
    if (param_3 == 0xb) {
      video_3d_fog_calculate_weights_asm_1x(pvVar7,auStack_110,lVar2,uVar5);
      video_3d_fog_modulate_alpha_resolve_asm_1x
                (pvVar9,pvVar9,auStack_110,*(undefined4 *)(lVar8 + 0x9a9c));
      video_3d_edge_identify_bottom_asm_1x(auStack_110,pvVar7,(long)param_1 + 0x13c00,uVar4);
      video_3d_edge_mark_asm_1x(param_2 + 0x3c00,pvVar9,auStack_110,lVar1);
    }
    else {
      memcpy((void *)(lVar6 + 0x32db40 + ((ulong)param_3 & 0x3fffff) * 0x1000),pvVar7,0x800);
      memcpy((void *)(lVar6 + 0x343b40 + ((ulong)param_3 & 0x7fffff) * 0x800),pvVar9,0x400);
    }
  }
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,lStack_8 - ___stack_chk_guard,0);
}


