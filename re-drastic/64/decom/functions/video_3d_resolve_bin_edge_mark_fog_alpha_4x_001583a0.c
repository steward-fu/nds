/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_fog_alpha_4x
 * Address  : 001583a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_3d_resolve_bin_edge_mark_fog_alpha_4x(void *param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  undefined auStack_210 [520];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)((long)param_1 + 0x24014) == 0) ||
     (lVar6 = *(long *)((long)param_1 + 0x24000),
     *(int *)(polygon_sort_list_15121 + lVar6 + 0xe5510) == 0)) {
    video_3d_resolve_bin_edge_mark_4x(param_1,param_2,param_3,&__stack_chk_guard,param_1,0);
  }
  else {
    lVar8 = *(long *)((long)param_1 + 0x24008);
    uVar4 = *(undefined4 *)(polygon_sort_list_15121 + lVar6 + 0xe550c);
    uVar5 = *(uint *)(polygon_sort_list_15121 + lVar6 + 0xe5500) >> 8 & 0xf;
    lVar1 = lVar8 + 0x99b4;
    pvVar7 = (void *)((long)param_1 + 0x10000);
    lVar2 = lVar8 + 0x9974;
    uVar5 = uVar5 | ((*(ushort *)(lVar8 + 0x9aaa) & 0x7fff) + (0x400 >> uVar5)) * 0x10000;
    if (param_3 == 0) {
      video_3d_fog_calculate_weights_asm_4x(pvVar7,auStack_210,lVar2,uVar5);
      video_3d_fog_modulate_alpha_intermediate_asm_4x
                (param_1,param_1,auStack_210,*(undefined4 *)(lVar8 + 0x9a9c));
      video_3d_edge_identify_top_asm_4x(auStack_210,pvVar7,(long)param_1 + 0x10800,uVar4);
      video_3d_edge_mark_asm_4x(param_2,param_1,auStack_210,lVar1);
    }
    else {
      memcpy(polygon_sort_list_15121 + lVar6 + ((ulong)(param_3 - 1) & 0x1fffff) * 0x2000 + 0xc5500,
             pvVar7,0x1000);
      memcpy(polygon_sort_list_15121 + lVar6 + ((ulong)(param_3 - 1) & 0x3fffff) * 0x1000 + 0xdad00,
             param_1,0x800);
    }
    lVar9 = param_2 + 0x800;
    pvVar10 = (void *)((long)param_1 + 0x10800);
    do {
      video_3d_fog_calculate_weights_asm_4x(pvVar10,auStack_210,lVar2,uVar5);
      lVar3 = (long)pvVar7 + -0xf800;
      video_3d_fog_modulate_alpha_intermediate_asm_4x
                (lVar3,lVar3,auStack_210,*(undefined4 *)(lVar8 + 0x9a9c));
      video_3d_edge_identify_asm_4x
                (auStack_210,pvVar7,pvVar10,(void *)((long)pvVar10 + 0x800),uVar4);
      video_3d_edge_mark_asm_4x(lVar9,lVar3,auStack_210,lVar1);
      lVar9 = lVar9 + 0x800;
      pvVar7 = pvVar10;
      pvVar10 = (void *)((long)pvVar10 + 0x800);
    } while (param_2 + 0xf800 != lVar9);
    pvVar7 = (void *)((long)param_1 + 0x1f000);
    pvVar10 = (void *)((long)param_1 + 0xf800);
    if (param_3 == 0xb) {
      video_3d_fog_calculate_weights_asm_4x(pvVar7,auStack_210,lVar2,uVar5);
      video_3d_fog_modulate_alpha_intermediate_asm_4x
                (pvVar10,pvVar10,auStack_210,*(undefined4 *)(lVar8 + 0x9a9c));
      video_3d_edge_identify_bottom_asm_4x(auStack_210,pvVar7,(long)param_1 + 0x1f800,uVar4);
      video_3d_edge_mark_asm_4x(param_2 + 0xf800,pvVar10,auStack_210,lVar1);
    }
    else {
      memcpy((void *)(lVar6 + 0x32db40 + ((ulong)param_3 & 0x1fffff) * 0x2000),pvVar7,0x1000);
      memcpy((void *)(lVar6 + 0x343b40 + ((ulong)param_3 & 0x3fffff) * 0x1000),pvVar10,0x800);
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


