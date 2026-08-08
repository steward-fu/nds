/*
 * Ghidra decompilation
 *
 * Function : execute_arm_condition
 * Address  : 00127320
 * Program  : drastic64
 */


uint execute_arm_condition(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 1) & 0x7fffffff;
  uVar2 = (uint)param_2;
  if (uVar3 == 4) {
    uVar1 = uVar2 & 1 ^
            *(uint *)(param_1 + 0x23c0) >> 0x1d & 1 &
            (*(uint *)(param_1 + 0x23c0) ^ 0x40000000) >> 0x1e;
  }
  else if (uVar3 < 5) {
    if (uVar3 == 2) {
      uVar1 = uVar2 & 1 ^ *(uint *)(param_1 + 0x23c0) >> 0x1f;
    }
    else if (uVar3 < 3) {
      if ((param_2 >> 1 & 0x7fffffff) == 0) {
        uVar1 = uVar2 & 1 ^ *(uint *)(param_1 + 0x23c0) >> 0x1e & 1;
      }
      else {
        if (uVar3 != 1) {
          return 0;
        }
        uVar1 = uVar2 & 1 ^ *(uint *)(param_1 + 0x23c0) >> 0x1d & 1;
      }
    }
    else {
      if (uVar3 != 3) {
        return 0;
      }
      uVar1 = uVar2 & 1 ^ *(uint *)(param_1 + 0x23c0) >> 0x1c & 1;
    }
  }
  else if (uVar3 == 6) {
    uVar3 = *(uint *)(param_1 + 0x23c0);
    uVar1 = uVar2 & 1 ^ (uint)((uVar3 & 0x40000000) == 0 && (uVar3 >> 0x1c & 1) == uVar3 >> 0x1f);
  }
  else {
    uVar1 = 1;
    if (uVar3 != 7) {
      if (uVar3 != 5) {
        return 0;
      }
      uVar1 = uVar2 & 1 ^
              (uint)((*(uint *)(param_1 + 0x23c0) >> 0x1c & 1) ==
                    -((int)*(uint *)(param_1 + 0x23c0) >> 0x1f));
    }
  }
  return uVar1;
}


