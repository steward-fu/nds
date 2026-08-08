/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_edge_mark_gaps_4x
 * Address  : 00156630
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_3d_resolve_bin_edge_mark_gaps_4x(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  undefined auStack_210 [520];
  long local_8;
  
  pcVar3 = "ERROR: could not open zip file %s.\n" + param_1 + 0x18;
  local_8 = ___stack_chk_guard;
  lVar4 = *(long *)((long)&DWORD_00249498 + param_1) + 0xf800;
  uVar2 = *(undefined4 *)((long)&fde_0024948c + param_1);
  lVar1 = *(long *)(param_1 + 0x1bc088) + 0x99b4;
  pcVar5 = (char *)((long)&fde_0023e480 + param_1);
  do {
    video_3d_edge_identify_asm_4x(auStack_210,pcVar3,pcVar3 + 0x800,pcVar3 + 0x1000,uVar2);
    video_3d_edge_mark_asm_4x(lVar4,pcVar5,auStack_210,lVar1);
    video_3d_edge_identify_asm_4x(auStack_210,pcVar3 + 0x800,pcVar3 + 0x1000,pcVar3 + 0x1800,uVar2);
    pcVar3 = pcVar3 + 0x2000;
    video_3d_edge_mark_asm_4x(lVar4 + 0x800,pcVar5 + 0x800,auStack_210,lVar1);
    pcVar5 = pcVar5 + 0x1000;
    lVar4 = lVar4 + 0x10000;
  } while (pcVar3 != (char *)((long)&fde_0023e480 + param_1));
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


