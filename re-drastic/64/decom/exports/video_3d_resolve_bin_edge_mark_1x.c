/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_1x
 * Address  : 00150d60
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_3d_resolve_bin_edge_mark_1x(void *param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  void *__src;
  void *pvVar5;
  long lVar6;
  undefined auStack_110 [264];
  long local_8;
  
  lVar4 = *(long *)((long)param_1 + 0x24000);
  __src = (void *)((long)param_1 + 0x10000);
  local_8 = ___stack_chk_guard;
  uVar3 = *(undefined4 *)(polygon_sort_list_15121 + lVar4 + 0xe550c);
  lVar2 = *(long *)((long)param_1 + 0x24008) + 0x99b4;
  if (param_3 == 0) {
    video_3d_edge_identify_top_asm_1x(auStack_110,__src,(long)param_1 + 0x10400,uVar3);
    video_3d_edge_mark_asm_1x(param_2,param_1,auStack_110,lVar2);
  }
  else {
    memcpy(polygon_sort_list_15121 + lVar4 + ((ulong)(param_3 - 1) & 0x3fffff) * 0x1000 + 0xc4d00,
           __src,0x800);
    memcpy(polygon_sort_list_15121 + lVar4 + ((ulong)(param_3 - 1) & 0x7fffff) * 0x800 + 0xda900,
           param_1,0x400);
  }
  pvVar5 = (void *)((long)param_1 + 0x10400);
  lVar6 = param_2 + 0x400;
  do {
    video_3d_edge_identify_asm_1x(auStack_110,__src,pvVar5,(void *)((long)pvVar5 + 0x400),uVar3);
    lVar1 = lVar6 + 0x400;
    video_3d_edge_mark_asm_1x(lVar6,(long)__src + -0xfc00,auStack_110,lVar2);
    __src = pvVar5;
    pvVar5 = (void *)((long)pvVar5 + 0x400);
    lVar6 = lVar1;
  } while (param_2 + 0x3c00 != lVar1);
  if (param_3 == 0xb) {
    video_3d_edge_identify_bottom_asm_1x
              (auStack_110,(void *)((long)param_1 + 0x13800),(long)param_1 + 0x13c00,uVar3);
    video_3d_edge_mark_asm_1x(param_2 + 0x3c00,(void *)((long)param_1 + 0x3c00),auStack_110,lVar2);
  }
  else {
    memcpy((void *)(lVar4 + 0x32db40 + ((ulong)param_3 & 0x3fffff) * 0x1000),
           (void *)((long)param_1 + 0x13800),0x800);
    memcpy((void *)(lVar4 + 0x343b40 + ((ulong)param_3 & 0x7fffff) * 0x800),
           (void *)((long)param_1 + 0x3c00),0x400);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


