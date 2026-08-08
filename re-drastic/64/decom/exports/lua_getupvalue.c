/*
 * Ghidra decompilation
 *
 * Function : lua_getupvalue
 * Address  : 001f44c0
 * Program  : drastic64
 */


char * lua_getupvalue(long param_1,int param_2,int param_3)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar3 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar3 + 1) == 0x16) ||
           (lVar8 = *plVar3, (int)(uint)*(byte *)(lVar8 + 10) < -0xf4628 - param_2)) {
          plVar3 = &luaO_nilobject_;
        }
        else {
          plVar3 = (long *)(lVar8 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < *(long **)(param_1 + 0x10)) {
      plVar3 = plVar1;
    }
  }
  lVar8 = *plVar3;
  if ((*(uint *)(plVar3 + 1) & 0x3f) == 6) {
    if ((param_3 < 1) || (*(int *)(*(long *)(lVar8 + 0x18) + 0x10) < param_3)) {
      return (char *)0x0;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(lVar8 + 0x18) + 0x58) + (long)param_3 * 0x10 + -0x10);
    pcVar2 = "(*no name)";
    if (lVar4 != 0) {
      pcVar2 = (char *)(lVar4 + 0x20);
    }
    puVar6 = (undefined8 *)**(long **)(lVar8 + (long)(param_3 + -1) * 8 + 0x20);
  }
  else {
    if ((*(uint *)(plVar3 + 1) & 0x3f) != 0x26) {
      return (char *)0x0;
    }
    if (param_3 < 1) {
      return (char *)0x0;
    }
    if ((int)(uint)*(byte *)(lVar8 + 10) < param_3) {
      return (char *)0x0;
    }
    pcVar2 = "";
    puVar6 = (undefined8 *)(lVar8 + (long)(param_3 + -1) * 0x10 + 0x20);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  uVar7 = puVar6[1];
  *puVar5 = *puVar6;
  puVar5[1] = uVar7;
  *(undefined8 **)(param_1 + 0x10) = puVar5 + 2;
  return pcVar2;
}


