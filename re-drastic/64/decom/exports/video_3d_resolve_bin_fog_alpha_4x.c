/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_fog_alpha_4x
 * Address  : 00158280
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_3d_resolve_bin_fog_alpha_4x(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined auStack_210 [520];
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
        video_3d_fog_calculate_weights_asm_4x
                  (lVar6,auStack_210,lVar8 + 0x9974,
                   uVar3 | ((uVar2 & 0x7fff) + (0x400 >> uVar3)) * 0x10000);
        lVar1 = lVar7 + 0x800;
        video_3d_fog_modulate_alpha_resolve_asm_4x
                  (lVar7,lVar6 + -0x10000,auStack_210,*(undefined4 *)(lVar8 + 0x9a9c));
        lVar6 = lVar6 + 0x800;
        lVar7 = lVar1;
      } while (param_2 + 0x10000 != lVar1);
      goto LAB_00158358;
    }
  }
  video_3d_resolve_bin_asm_4x(param_2,param_1,uVar4,iVar5,0);
LAB_00158358:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


