/*
 * Ghidra decompilation
 *
 * Function : select_load_game
 * Address  : 0017c850
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_load_game(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined auStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = load_file(param_1,&nds_ext,auStack_428);
  if (iVar2 != -1) {
    lVar3 = *param_1;
    iVar2 = load_nds(lVar3 + 800,auStack_428);
    if (-1 < iVar2) {
      uVar1 = *(undefined4 *)(lVar3 + 0x859f4);
      *(undefined8 *)((long)param_1 + 0x44) = 0x100000001;
      *(undefined4 *)((long)param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 10) = uVar1;
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


