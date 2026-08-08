/*
 * Ghidra decompilation
 *
 * Function : DumpString
 * Address  : 001f74a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DumpString(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined local_11;
  ulong local_10;
  long local_8;
  
  iVar1 = *(int *)((long)param_2 + 0x1c);
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    local_10 = local_10 & 0xffffffffffffff00;
    if (iVar1 == 0) {
      uVar2 = (*(code *)param_2[1])(*param_2,&local_10,1,param_2[2]);
      *(undefined4 *)((long)param_2 + 0x1c) = uVar2;
    }
    goto LAB_001f7528;
  }
  local_10 = *(long *)(param_1 + 0x10) + 1;
  if (local_10 < 0xff) {
    local_11 = (undefined)local_10;
    if (iVar1 != 0) goto LAB_001f7528;
    uVar3 = *param_2;
    pcVar6 = (code *)param_2[1];
    puVar4 = (ulong *)&local_11;
    uVar5 = 1;
  }
  else {
    local_11 = 0xff;
    if (iVar1 != 0) goto LAB_001f7528;
    iVar1 = (*(code *)param_2[1])(*param_2,&local_11,1,param_2[2]);
    *(int *)((long)param_2 + 0x1c) = iVar1;
    if (iVar1 != 0) goto LAB_001f7528;
    puVar4 = &local_10;
    uVar5 = 8;
    uVar3 = *param_2;
    pcVar6 = (code *)param_2[1];
  }
  iVar1 = (*pcVar6)(uVar3,puVar4,uVar5,param_2[2]);
  *(int *)((long)param_2 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (*(code *)param_2[1])(*param_2,param_1 + 0x20,local_10 - 1,param_2[2]);
    *(undefined4 *)((long)param_2 + 0x1c) = uVar2;
  }
LAB_001f7528:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


