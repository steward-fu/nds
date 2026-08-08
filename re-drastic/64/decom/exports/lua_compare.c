/*
 * Ghidra decompilation
 *
 * Function : lua_compare
 * Address  : 001f1790
 * Program  : drastic64
 */


undefined8 lua_compare(long param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  long lVar5;
  
  pplVar4 = *(long ***)(param_1 + 0x20);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else if ((*(int *)(*pplVar4 + 1) == 0x16) ||
              (lVar5 = **pplVar4, (int)(uint)*(byte *)(lVar5 + 10) < -0xf4628 - param_2)) {
        plVar2 = &luaO_nilobject_;
      }
      else {
        plVar2 = (long *)(lVar5 + (long)(-0xf4629 - param_2) * 0x10 + 0x20);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = &luaO_nilobject_;
    if (*pplVar4 + (long)param_2 * 2 < *(long **)(param_1 + 0x10)) {
      plVar2 = *pplVar4 + (long)param_2 * 2;
    }
  }
  if (param_3 < 1) {
    if (-0xf4628 < param_3) {
      if (plVar2 == &luaO_nilobject_ ||
          (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_3 * 0x10) == &luaO_nilobject_) {
        return 0;
      }
      goto LAB_001f184c;
    }
    if (param_3 == -0xf4628) {
      plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
    }
    else {
      if (*(int *)(*pplVar4 + 1) == 0x16) {
        return 0;
      }
      lVar5 = **pplVar4;
      if ((int)(uint)*(byte *)(lVar5 + 10) < -0xf4628 - param_3) {
        return 0;
      }
      plVar3 = (long *)(lVar5 + (long)(-0xf4629 - param_3) * 0x10 + 0x20);
    }
  }
  else {
    plVar3 = *pplVar4 + (long)param_3 * 2;
    if (*(long **)(param_1 + 0x10) <= plVar3) {
      return 0;
    }
  }
  if (plVar2 == &luaO_nilobject_ || plVar3 == &luaO_nilobject_) {
    return 0;
  }
LAB_001f184c:
  if (param_4 == 1) {
    uVar1 = luaV_lessthan();
    return uVar1;
  }
  if (param_4 != 2) {
    if (param_4 != 0) {
      return 0;
    }
    uVar1 = luaV_equalobj();
    return uVar1;
  }
  uVar1 = luaV_lessequal();
  return uVar1;
}


