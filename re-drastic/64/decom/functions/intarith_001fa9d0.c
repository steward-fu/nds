/*
 * Ghidra decompilation
 *
 * Function : intarith
 * Address  : 001fa9d0
 * Program  : drastic64
 */


ulong intarith(undefined8 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 8) {
    return (ulong)(param_3 | param_4);
  }
  if (param_2 < 9) {
    if (param_2 == 3) {
      uVar2 = luaV_mod(param_1,param_3,param_4);
      return uVar2;
    }
    if (3 < param_2) {
      if (param_2 != 6) {
        param_3 = param_3 & param_4;
        if (param_2 != 7) {
          param_3 = 0;
        }
        return (ulong)param_3;
      }
      uVar2 = luaV_div(param_1,param_3,param_4);
      return uVar2;
    }
    uVar2 = (ulong)(param_3 - param_4);
    if (param_2 != 1) {
      if (param_2 != 2) {
        param_3 = param_3 + param_4;
        if (param_2 != 0) {
          param_3 = 0;
        }
        return (ulong)param_3;
      }
      uVar2 = (ulong)(param_3 * param_4);
    }
  }
  else {
    if (param_2 == 0xb) {
      uVar2 = luaV_shiftl(param_3,-param_4);
      return uVar2;
    }
    if (param_2 < 0xc) {
      if (param_2 == 9) {
        return (ulong)(param_3 ^ param_4);
      }
      uVar2 = 0;
      if (param_2 == 10) {
        uVar2 = luaV_shiftl(param_3,param_4);
        return uVar2;
      }
    }
    else {
      uVar2 = (ulong)-param_3;
      if (param_2 != 0xc) {
        uVar1 = 0;
        if (param_2 == 0xd) {
          uVar1 = ~param_3;
        }
        return (ulong)uVar1;
      }
    }
  }
  return uVar2;
}


