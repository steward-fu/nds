/*
 * Ghidra decompilation
 *
 * Function : FUN_0012879c
 * Address  : 0012879c
 * Program  : drastic64
 */


void FUN_0012879c(long *param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  undefined uVar6;
  undefined8 uVar7;
  
  if (DAT_040270ff == '\0') {
    uVar2 = 1;
    bit_count = 0;
    do {
      uVar7 = NEON_cnt(uVar2 & 0xffffffff,1);
      uVar6 = NEON_addv(uVar7,1);
      (&bit_count)[uVar2] = uVar6;
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x100);
  }
  param_1[0x411] = param_2 + 0x8c000;
  *(int *)((long)param_1 + 0x210c) = param_3;
  param_1[1099] = param_2;
  param_1[0x44c] = param_2 + 0x35d4930;
  param_1[0x44d] = param_2 + 0x3a28bb0;
  param_1[0x454] = param_4;
  initialize_debug(param_1 + 0x423,param_1);
  iVar4 = 0;
  iVar5 = 8;
  plVar3 = param_1;
  do {
    *plVar3 = (long)param_1;
    *(int *)(plVar3 + 2) = iVar5;
    *(char *)((long)plVar3 + 0x1d) = (char)iVar4;
    iVar1 = param_3 * 4 + 3 + iVar4;
    iVar4 = iVar4 + 1;
    initialize_event(param_2 + 0x18,iVar1,event_timer_overflow_function,plVar3);
    iVar5 = iVar5 * 2;
    plVar3 = plVar3 + 4;
  } while (iVar4 != 4);
  if (param_3 == 1) {
    param_1[0x44e] = param_2 + 0x154c038;
    param_1[0x44f] = param_2 + 0x1554038;
  }
  return;
}


