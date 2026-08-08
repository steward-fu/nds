/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_fog_alpha_gaps_4x
 * Address  : 001586d0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_3d_resolve_bin_edge_mark_fog_alpha_gaps_4x(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined auStack_210 [520];
  long local_8;
  
  lVar8 = *(long *)(param_1 + 0x1bc088);
  uVar5 = *(uint *)(BYTE_ARRAY_0024947d + param_1 + 3) >> 8 & 0xf;
  uVar4 = *(undefined4 *)((long)&fde_0024948c + param_1);
  uVar5 = uVar5 | ((*(ushort *)(lVar8 + 0x9aaa) & 0x7fff) + (0x400 >> uVar5)) * 0x10000;
  pcVar6 = "ERROR: could not open zip file %s.\n" + param_1 + 0x18;
  local_8 = ___stack_chk_guard;
  lVar7 = *(long *)((long)&DWORD_00249498 + param_1) + 0xf800;
  pcVar9 = (char *)((long)&fde_0023e480 + param_1);
  do {
    pcVar1 = pcVar6 + 0x800;
    video_3d_fog_calculate_weights_asm_4x(pcVar1,auStack_210,lVar8 + 0x9974,uVar5);
    pcVar3 = pcVar6 + 0x1000;
    video_3d_fog_modulate_alpha_intermediate_asm_4x
              (pcVar9,pcVar9,auStack_210,*(undefined4 *)(lVar8 + 0x9a9c));
    video_3d_edge_identify_asm_4x(auStack_210,pcVar6,pcVar1,pcVar3,uVar4);
    video_3d_edge_mark_asm_4x(lVar7,pcVar9,auStack_210,lVar8 + 0x99b4);
    video_3d_fog_calculate_weights_asm_4x(pcVar3,auStack_210,lVar8 + 0x9974,uVar5);
    pcVar2 = pcVar9 + 0x800;
    video_3d_fog_modulate_alpha_intermediate_asm_4x
              (pcVar2,pcVar2,auStack_210,*(undefined4 *)(lVar8 + 0x9a9c));
    video_3d_edge_identify_asm_4x(auStack_210,pcVar1,pcVar3,pcVar6 + 0x1800,uVar4);
    video_3d_edge_mark_asm_4x(lVar7 + 0x800,pcVar2,auStack_210,lVar8 + 0x99b4);
    pcVar6 = pcVar6 + 0x2000;
    pcVar9 = pcVar9 + 0x1000;
    lVar7 = lVar7 + 0x10000;
  } while (pcVar6 != (char *)((long)&fde_0023e480 + param_1));
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


