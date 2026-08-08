/*
 * Ghidra decompilation
 *
 * Function : lua_setupvalue
 * Address  : 001f4620
 * Program  : drastic64
 */


char * lua_setupvalue(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar2 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar2 + 1) == 0x16) ||
           (lVar1 = *plVar2, (int)(uint)*(byte *)(lVar1 + 10) < -0xf4628 - param_2)) {
          plVar2 = &luaO_nilobject_;
        }
        else {
          plVar2 = (long *)(lVar1 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar4 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar2 = &luaO_nilobject_;
    if (plVar4 < *(long **)(param_1 + 0x10)) {
      plVar2 = plVar4;
    }
  }
  lVar1 = *plVar2;
  if ((*(uint *)(plVar2 + 1) & 0x3f) == 6) {
    if ((param_3 < 1) || (*(int *)(*(long *)(lVar1 + 0x18) + 0x10) < param_3)) {
      pcVar8 = (char *)0x0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x10);
      plVar2 = *(long **)(lVar1 + (long)(param_3 + -1) * 8 + 0x20);
      plVar4 = (long *)*plVar2;
      uVar5 = *(undefined8 *)(lVar6 + -0x10);
      uVar7 = *(undefined8 *)(lVar6 + -8);
      lVar1 = *(long *)(*(long *)(*(long *)(lVar1 + 0x18) + 0x58) + (long)param_3 * 0x10 + -0x10);
      *(long *)(param_1 + 0x10) = lVar6 + -0x10;
      *plVar4 = uVar5;
      plVar4[1] = uVar7;
      pcVar8 = "(*no name)";
      if (lVar1 != 0) {
        pcVar8 = (char *)(lVar1 + 0x20);
      }
      if (((*(uint *)(plVar4 + 1) >> 6 & 1) != 0) && (plVar4 == plVar2 + 2)) {
        luaC_upvalbarrier_();
      }
    }
  }
  else {
    pcVar8 = (char *)0x0;
    if ((((*(uint *)(plVar2 + 1) & 0x3f) == 0x26) && (0 < param_3)) &&
       (param_3 <= (int)(uint)*(byte *)(lVar1 + 10))) {
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = lVar1 + (long)(param_3 + -1) * 0x10;
      *(long *)(param_1 + 0x10) = lVar3 + -0x10;
      uVar5 = *(undefined8 *)(lVar3 + -8);
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar3 + -0x10);
      *(undefined8 *)(lVar6 + 0x28) = uVar5;
      if (((*(uint *)(lVar3 + -8) >> 6 & 1) == 0) || ((*(byte *)(lVar1 + 9) >> 2 & 1) == 0)) {
        return "";
      }
      pcVar8 = "";
      if ((*(byte *)(*(long *)(lVar3 + -0x10) + 9) & 3) != 0) {
        luaC_barrier_();
      }
    }
  }
  return pcVar8;
}


