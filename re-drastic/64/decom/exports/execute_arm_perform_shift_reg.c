/*
 * Ghidra decompilation
 *
 * Function : execute_arm_perform_shift_reg
 * Address  : 00124a90
 * Program  : drastic64
 */


uint execute_arm_perform_shift_reg(long param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_3 & 0xff;
  uVar3 = param_2;
  if (param_4 == 2) {
    if ((param_3 & 0xff) != 0) {
      if ((param_3 & 0xe0) == 0) {
        if (param_5 != 0) {
          *(uint *)(param_1 + 0x23c0) =
               *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
               *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
               (param_2 >> (ulong)(uVar1 - 1 & 0x1f) & 1) << 0x1d;
        }
        return (int)param_2 >> (param_3 & 0x1f);
      }
      if (param_5 != 0) {
        *(uint *)(param_1 + 0x23c0) =
             *(uint *)(param_1 + 0x23c0) & 0xdfffffff | (param_2 >> 0x1f) << 0x1d;
      }
      return (int)param_2 >> 0x1f;
    }
  }
  else if (param_4 < 3) {
    if (param_4 == 0) {
      if ((param_3 & 0xff) != 0) {
        if ((param_3 & 0xe0) == 0) {
          if (param_5 != 0) {
            *(uint *)(param_1 + 0x23c0) =
                 *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
                 *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
                 (param_2 >> (ulong)(-uVar1 & 0x1f) & 1) << 0x1d;
          }
          return param_2 << (ulong)(param_3 & 0x1f);
        }
        uVar3 = 0;
        if (param_5 != 0) {
          uVar3 = *(uint *)(param_1 + 0x23c0) & 0xdfffffff;
          uVar2 = (param_2 & 1) << 0x1d | uVar3;
          if (uVar1 != 0x20) {
            uVar2 = uVar3;
          }
          *(uint *)(param_1 + 0x23c0) = uVar2;
          return 0;
        }
      }
    }
    else if ((param_3 & 0xff) != 0) {
      if ((param_3 & 0xe0) == 0) {
        if (param_5 != 0) {
          *(uint *)(param_1 + 0x23c0) =
               *(uint *)(param_1 + 0x23c0) & 0xdfffffff |
               (param_2 >> (ulong)(uVar1 - 1 & 0x1f)) << 0x1d;
        }
        uVar3 = param_2 >> (ulong)(param_3 & 0x1f);
      }
      else {
        uVar3 = 0;
        if (param_5 != 0) {
          uVar3 = *(uint *)(param_1 + 0x23c0) & 0xdfffffff;
          uVar2 = uVar3 | (param_2 >> 0x1f) << 0x1d;
          if (uVar1 != 0x20) {
            uVar2 = uVar3;
          }
          *(uint *)(param_1 + 0x23c0) = uVar2;
          return 0;
        }
      }
    }
  }
  else {
    uVar3 = 0;
    if ((param_4 == 3) && (uVar3 = param_2, (param_3 & 0xff) != 0)) {
      if ((param_3 & 0x1f) != 0) {
        if (param_5 != 0) {
          *(uint *)(param_1 + 0x23c0) =
               *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
               *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
               (param_2 >> (ulong)(uVar1 - 1 & 0x1f) & 1) << 0x1d;
        }
        return param_2 >> (param_3 & 0x1f) | param_2 << 0x20 - (param_3 & 0x1f);
      }
      if (param_5 != 0) {
        *(uint *)(param_1 + 0x23c0) =
             *(uint *)(param_1 + 0x23c0) & 0xdfffffff | (param_2 >> 0x1f) << 0x1d;
        return param_2;
      }
    }
  }
  return uVar3;
}


