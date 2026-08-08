/*
 * Ghidra decompilation
 *
 * Function : LookToRead_Look_Lookahead
 * Address  : 001af250
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LookToRead_Look_Lookahead(long param_1,long *param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = *(long *)(param_1 + 0x28);
  uVar1 = 0;
  uVar2 = *param_3;
  local_10 = *(long *)(param_1 + 0x30) - lVar3;
  if (local_10 == 0) {
    if (uVar2 == 0) goto LAB_001af2a4;
    pcVar4 = **(code ***)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
    local_10 = 0x4000;
    uVar1 = (*pcVar4)(*(code ***)(param_1 + 0x20),param_1 + 0x38,&local_10);
    *(ulong *)(param_1 + 0x30) = local_10;
    uVar2 = *param_3;
  }
  if (local_10 < uVar2) {
    *param_3 = local_10;
  }
  lVar3 = *(long *)(param_1 + 0x28);
LAB_001af2a4:
  *param_2 = param_1 + 0x38 + lVar3;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
}


