/*
 * Ghidra decompilation
 *
 * Function : lua_rawset
 * Address  : 001f3540
 * Program  : drastic64
 */


void lua_rawset(long param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar3 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar3 + 1) == 0x16) ||
           (lVar5 = *plVar3, (int)(uint)*(byte *)(lVar5 + 10) < -0xf4628 - param_2)) {
          plVar3 = &luaO_nilobject_;
        }
        else {
          plVar3 = (long *)(lVar5 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar3 = plVar4 + (long)param_2 * 2;
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < plVar4) {
      plVar3 = plVar1;
    }
  }
  lVar7 = *plVar3;
  puVar2 = (undefined8 *)luaH_set(param_1,lVar7,plVar4 + -4);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(lVar5 + -8);
  *puVar2 = *(undefined8 *)(lVar5 + -0x10);
  puVar2[1] = uVar6;
  *(undefined *)(lVar7 + 10) = 0;
  if ((((*(uint *)(lVar5 + -8) >> 6 & 1) != 0) && ((*(byte *)(lVar7 + 9) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar5 + -0x10) + 9) & 3) != 0)) {
    luaC_barrierback_(param_1,lVar7);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar5 + -0x20;
  return;
}


