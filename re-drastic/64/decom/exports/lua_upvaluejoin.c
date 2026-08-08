/*
 * Ghidra decompilation
 *
 * Function : lua_upvaluejoin
 * Address  : 001f4900
 * Program  : drastic64
 */


void lua_upvaluejoin(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  pplVar1 = *(long ***)(param_1 + 0x20);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else if ((*(int *)(*pplVar1 + 1) == 0x16) ||
              (lVar4 = **pplVar1, (int)(uint)*(byte *)(lVar4 + 10) < -0xf4628 - param_2)) {
        plVar2 = &luaO_nilobject_;
      }
      else {
        plVar2 = (long *)(lVar4 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = &luaO_nilobject_;
    if (*pplVar1 + (long)param_2 * 2 < *(long **)(param_1 + 0x10)) {
      plVar2 = *pplVar1 + (long)param_2 * 2;
    }
  }
  if (param_4 < 1) {
    if (param_4 < -0xf4627) {
      if (param_4 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else if ((*(int *)(*pplVar1 + 1) == 0x16) ||
              (lVar4 = **pplVar1, (int)(uint)*(byte *)(lVar4 + 10) < -0xf4628 - param_4)) {
        plVar3 = &luaO_nilobject_;
      }
      else {
        plVar3 = (long *)(lVar4 + (long)(-0xf4629 - param_4) * 0x10 + 0x20);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_4 * 0x10);
    }
  }
  else {
    plVar3 = &luaO_nilobject_;
    if (*pplVar1 + (long)param_4 * 2 < *(long **)(param_1 + 0x10)) {
      plVar3 = *pplVar1 + (long)param_4 * 2;
    }
  }
  lVar4 = *plVar2 + (long)param_3 * 8;
  lVar5 = *plVar3;
  luaC_upvdeccount(param_1,*(undefined8 *)(lVar4 + 0x18));
  plVar2 = *(long **)(lVar5 + (long)(param_5 + -1) * 8 + 0x20);
  lVar5 = plVar2[1];
  plVar3 = (long *)*plVar2;
  *(long **)(lVar4 + 0x18) = plVar2;
  plVar2[1] = lVar5 + 1;
  if (plVar3 == plVar2 + 2) {
    if ((*(uint *)(plVar3 + 1) >> 6 & 1) != 0) goto LAB_001f4a9c;
  }
  else {
    *(undefined4 *)(plVar2 + 3) = 1;
    plVar2 = (long *)**(long **)(lVar4 + 0x18);
    if (((*(uint *)(plVar2 + 1) >> 6 & 1) != 0) && (plVar2 == *(long **)(lVar4 + 0x18) + 2)) {
LAB_001f4a9c:
      luaC_upvalbarrier_(param_1);
      return;
    }
  }
  return;
}


