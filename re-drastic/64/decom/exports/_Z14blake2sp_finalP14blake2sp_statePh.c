/*
 * Ghidra decompilation
 *
 * Function : _Z14blake2sp_finalP14blake2sp_statePh
 * Address  : 001efef0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* blake2sp_final(blake2sp_state*, unsigned char*) */

void blake2sp_final(blake2sp_state *param_1,uchar *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  blake2s_state *pbVar5;
  long alStack_108 [32];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  pbVar5 = (blake2s_state *)param_1;
  plVar4 = alStack_108;
  do {
    while (uVar3 < *(ulong *)(param_1 + 0xc20)) {
      uVar2 = *(ulong *)(param_1 + 0xc20) - uVar3;
      if (0x40 < uVar2) {
        uVar2 = 0x40;
      }
      blake2s_update(pbVar5,(uchar *)(param_1 + uVar3 + 0xa20),uVar2);
      uVar3 = uVar3 + 0x40;
      blake2s_final(pbVar5,(uchar *)plVar4);
      plVar4 = plVar4 + 4;
      pbVar5 = pbVar5 + 0x120;
      if (uVar3 == 0x200) goto LAB_001effa8;
    }
    uVar3 = uVar3 + 0x40;
    blake2s_final(pbVar5,(uchar *)plVar4);
    plVar4 = plVar4 + 4;
    pbVar5 = pbVar5 + 0x120;
  } while (uVar3 != 0x200);
LAB_001effa8:
  plVar4 = alStack_108;
  do {
    plVar1 = plVar4 + 4;
    blake2s_update((blake2s_state *)(param_1 + 0x900),(uchar *)plVar4,0x20);
    plVar4 = plVar1;
  } while (&local_8 != plVar1);
  blake2s_final((blake2s_state *)(param_1 + 0x900),param_2);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


