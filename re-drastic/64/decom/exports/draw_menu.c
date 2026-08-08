/*
 * Ghidra decompilation
 *
 * Function : draw_menu
 * Address  : 0017d760
 * Program  : drastic64
 */


void draw_menu(undefined8 param_1,code **param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (*(int *)((long)param_2 + 0x14) != 0) {
    uVar4 = 0;
    do {
      lVar1 = uVar4 * 8;
      iVar3 = (int)uVar4;
      uVar2 = iVar3 + 1;
      uVar4 = (ulong)uVar2;
      (**(code **)(*(long *)(param_2[4] + lVar1) + 0x10))
                (param_1,*(long *)(param_2[4] + lVar1),*(int *)(param_2 + 3) == iVar3);
    } while (uVar2 < *(uint *)((long)param_2 + 0x14));
  }
  if (*param_2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0017d7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**param_2)(param_1,param_2);
    return;
  }
  return;
}


