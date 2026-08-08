/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_fog_full_1x
 * Address  : 001516e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_3d_resolve_bin_fog_full_1x(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined auStack_110 [264];
  long local_8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x24014);
  iVar5 = 0x4033198;
  local_8 = ___stack_chk_guard;
  if (*(uint *)(param_1 + 0x24014) != 0) {
    uVar4 = param_1 + 0x20000;
    iVar5 = *(int *)(polygon_sort_list_15121 + *(long *)(param_1 + 0x24000) + 0xe5510);
    if (iVar5 != 0) {
      lVar8 = *(long *)(param_1 + 0x24008);
      lVar6 = param_1 + 0x10000;
      uVar3 = *(uint *)(polygon_sort_list_15121 + *(long *)(param_1 + 0x24000) + 0xe5500) >> 8 & 0xf
      ;
      uVar2 = *(ushort *)(lVar8 + 0x9aaa);
      lVar7 = param_2;
      do {
        video_3d_fog_calculate_weights_asm_1x
                  (lVar6,auStack_110,lVar8 + 0x9974,
                   uVar3 | ((uVar2 & 0x7fff) + (0x400 >> uVar3)) * 0x10000);
        lVar1 = lVar7 + 0x400;
        video_3d_fog_modulate_full_intermediate_asm_1x
                  (lVar7,lVar6 + -0x10000,auStack_110,*(undefined4 *)(lVar8 + 0x9a9c));
        lVar6 = lVar6 + 0x400;
        lVar7 = lVar1;
      } while (param_2 + 0x4000 != lVar1);
      goto LAB_001517b8;
    }
  }
  video_3d_resolve_bin_asm_1x(param_2,param_1,uVar4,iVar5,0);
LAB_001517b8:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


