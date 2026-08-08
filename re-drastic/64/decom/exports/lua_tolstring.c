/*
 * Ghidra decompilation
 *
 * Function : lua_tolstring
 * Address  : 001f1c90
 * Program  : drastic64
 */


long lua_tolstring(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  long **pplVar2;
  long *plVar3;
  
  pplVar2 = *(long ***)(param_1 + 0x20);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else if ((*(int *)(*pplVar2 + 1) == 0x16) ||
              (lVar1 = **pplVar2, (int)(uint)*(byte *)(lVar1 + 10) < -0xf4628 - param_2)) {
        plVar3 = &luaO_nilobject_;
      }
      else {
        plVar3 = (long *)(lVar1 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar3 = &luaO_nilobject_;
    if (*pplVar2 + (long)param_2 * 2 < *(long **)(param_1 + 0x10)) {
      plVar3 = *pplVar2 + (long)param_2 * 2;
    }
  }
  if ((*(uint *)(plVar3 + 1) & 0xf) != 4) {
    if ((*(uint *)(plVar3 + 1) & 0xf) != 3) {
      if (param_3 == (undefined8 *)0x0) {
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      luaC_step();
      pplVar2 = *(long ***)(param_1 + 0x20);
    }
    if (param_2 < 1) {
      if (param_2 < -0xf4627) {
        if (param_2 == -0xf4628) {
          plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        }
        else if ((*(int *)(*pplVar2 + 1) == 0x16) ||
                (lVar1 = **pplVar2, (int)(uint)*(byte *)(lVar1 + 10) < -0xf4628 - param_2)) {
          plVar3 = &luaO_nilobject_;
        }
        else {
          plVar3 = (long *)(lVar1 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
        }
      }
      else {
        plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
      }
    }
    else {
      plVar3 = &luaO_nilobject_;
      if (*pplVar2 + (long)param_2 * 2 < *(long **)(param_1 + 0x10)) {
        plVar3 = *pplVar2 + (long)param_2 * 2;
      }
    }
    luaO_tostring(param_1,plVar3);
  }
  lVar1 = *plVar3;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(lVar1 + 0x10);
  }
  return lVar1 + 0x20;
}


