/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_fog_alpha_gaps_1x
 * Address  : 00152120
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_3d_resolve_bin_edge_mark_fog_alpha_gaps_1x(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined auStack_110 [264];
  long local_8;
  
  lVar8 = *(long *)(param_1 + 0x1bc088);
  uVar5 = *(uint *)(BYTE_ARRAY_0024947d + param_1 + 3) >> 8 & 0xf;
  uVar4 = *(undefined4 *)((long)&fde_0024948c + param_1);
  uVar5 = uVar5 | ((*(ushort *)(lVar8 + 0x9aaa) & 0x7fff) + (0x400 >> uVar5)) * 0x10000;
  pcVar6 = "ERROR: could not open zip file %s.\n" + param_1 + 0x18;
  lVar9 = (long)&fde_0023e480 + param_1;
  lVar7 = *(long *)((long)&DWORD_00249498 + param_1) + 0x3c00;
  local_8 = ___stack_chk_guard;
  do {
    pcVar1 = pcVar6 + 0x400;
    video_3d_fog_calculate_weights_asm_1x(pcVar1,auStack_110,lVar8 + 0x9974,uVar5);
    pcVar2 = pcVar6 + 0x800;
    video_3d_fog_modulate_alpha_resolve_asm_1x
              (lVar9,lVar9,auStack_110,*(undefined4 *)(lVar8 + 0x9a9c));
    video_3d_edge_identify_asm_1x(auStack_110,pcVar6,pcVar1,pcVar2,uVar4);
    video_3d_edge_mark_asm_1x(lVar7,lVar9,auStack_110,lVar8 + 0x99b4);
    video_3d_fog_calculate_weights_asm_1x(pcVar2,auStack_110,lVar8 + 0x9974,uVar5);
    lVar3 = lVar9 + 0x400;
    video_3d_fog_modulate_alpha_resolve_asm_1x
              (lVar3,lVar3,auStack_110,*(undefined4 *)(lVar8 + 0x9a9c));
    video_3d_edge_identify_asm_1x(auStack_110,pcVar1,pcVar2,pcVar6 + 0xc00,uVar4);
    video_3d_edge_mark_asm_1x(lVar7 + 0x400,lVar3,auStack_110,lVar8 + 0x99b4);
    pcVar6 = pcVar6 + 0x1000;
    lVar9 = lVar9 + 0x800;
    lVar7 = lVar7 + 0x4000;
  } while (pcVar6 != (char *)(param_1 + 0x233480));
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


