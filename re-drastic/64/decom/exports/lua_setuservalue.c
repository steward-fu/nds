/*
 * Ghidra decompilation
 *
 * Function : lua_setuservalue
 * Address  : 001f3ac0
 * Program  : drastic64
 */


void lua_setuservalue(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar3 = **(long ***)(param_1 + 0x20);
        if ((*(int *)(plVar3 + 1) == 0x16) ||
           (lVar4 = *plVar3, (int)(uint)*(byte *)(lVar4 + 10) < -0xf4628 - param_2)) {
          plVar3 = &luaO_nilobject_;
        }
        else {
          plVar3 = (long *)(lVar4 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
    }
    else {
      plVar3 = plVar6 + (long)param_2 * 2;
    }
  }
  else {
    plVar1 = **(long ***)(param_1 + 0x20) + (long)param_2 * 2;
    plVar3 = &luaO_nilobject_;
    if (plVar1 < plVar6) {
      plVar3 = plVar1;
    }
  }
  lVar4 = *plVar3;
  uVar2 = *(uint *)(plVar6 + -1);
  lVar5 = plVar6[-2];
  *(char *)(lVar4 + 10) = (char)uVar2;
  *(long *)(lVar4 + 0x20) = lVar5;
  if ((((uVar2 >> 6 & 1) != 0) && ((*(byte *)(lVar4 + 9) >> 2 & 1) != 0)) &&
     ((*(byte *)(plVar6[-2] + 9) & 3) != 0)) {
    luaC_barrier_(param_1);
    plVar6 = *(long **)(param_1 + 0x10);
  }
  *(long **)(param_1 + 0x10) = plVar6 + -2;
  return;
}


