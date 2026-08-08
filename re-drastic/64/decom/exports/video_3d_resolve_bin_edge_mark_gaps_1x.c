/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_gaps_1x
 * Address  : 00150f70
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_3d_resolve_bin_edge_mark_gaps_1x(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined4 *)((long)&fde_0024948c + param_1);
  pcVar3 = "ERROR: could not open zip file %s.\n" + param_1 + 0x18;
  lVar5 = (long)&fde_0023e480 + param_1;
  lVar4 = *(long *)((long)&DWORD_00249498 + param_1) + 0x3c00;
  lVar1 = *(long *)(param_1 + 0x1bc088) + 0x99b4;
  do {
    video_3d_edge_identify_asm_1x(auStack_110,pcVar3,pcVar3 + 0x400,pcVar3 + 0x800,uVar2);
    video_3d_edge_mark_asm_1x(lVar4,lVar5,auStack_110,lVar1);
    video_3d_edge_identify_asm_1x(auStack_110,pcVar3 + 0x400,pcVar3 + 0x800,pcVar3 + 0xc00,uVar2);
    pcVar3 = pcVar3 + 0x1000;
    video_3d_edge_mark_asm_1x(lVar4 + 0x400,lVar5 + 0x400,auStack_110,lVar1);
    lVar5 = lVar5 + 0x800;
    lVar4 = lVar4 + 0x4000;
  } while (pcVar3 != (char *)(param_1 + 0x233480));
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


