/*
 * Ghidra decompilation
 *
 * Function : execute_arm_perform_shift_imm
 * Address  : 00124c10
 * Program  : drastic64
 */


ulong execute_arm_perform_shift_imm(long param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_4 == 2) {
    if (param_3 != 0) {
      if (param_5 != 0) {
        *(uint *)(param_1 + 0x23c0) =
             *(uint *)(param_1 + 0x23c0) & 0xdfffffff |
             (param_2 >> (ulong)(param_3 - 1 & 0x1f)) << 0x1d;
      }
      return (ulong)(uint)((int)param_2 >> (param_3 & 0x1f));
    }
    if (param_5 != 0) {
      *(uint *)(param_1 + 0x23c0) =
           *(uint *)(param_1 + 0x23c0) & 0xdfffffff | (param_2 >> 0x1f) << 0x1d;
    }
    return (ulong)(uint)((int)param_2 >> 0x1f);
  }
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar2 = (ulong)param_2;
      if (param_3 != 0) {
        if (param_5 != 0) {
          *(uint *)(param_1 + 0x23c0) =
               *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
               *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
               (param_2 >> (ulong)(-param_3 & 0x1f) & 1) << 0x1d;
        }
        return (ulong)(param_2 << (ulong)(param_3 & 0x1f));
      }
    }
    else if (param_3 == 0) {
      uVar2 = 0;
      if (param_5 != 0) {
        *(uint *)(param_1 + 0x23c0) =
             *(uint *)(param_1 + 0x23c0) & 0xdfffffff | (param_2 >> 0x1f) << 0x1d;
        return uVar2;
      }
    }
    else {
      if (param_5 != 0) {
        *(uint *)(param_1 + 0x23c0) =
             *(uint *)(param_1 + 0x23c0) & 0xdfffffff |
             (param_2 >> (ulong)(param_3 - 1 & 0x1f)) << 0x1d;
      }
      uVar2 = (ulong)(param_2 >> (ulong)(param_3 & 0x1f));
    }
  }
  else {
    uVar2 = 0;
    if (param_4 == 3) {
      if (param_3 != 0) {
        if (param_5 != 0) {
          *(uint *)(param_1 + 0x23c0) =
               *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
               *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
               (param_2 >> (ulong)(param_3 - 1 & 0x1f) & 1) << 0x1d;
        }
        return (ulong)(param_2 >> (param_3 & 0x1f) | param_2 << 0x20 - (param_3 & 0x1f));
      }
      uVar1 = *(uint *)(param_1 + 0x23c0);
      if (param_5 != 0) {
        *(uint *)(param_1 + 0x23c0) =
             uVar1 & 0xc0000000 | uVar1 & 0x1fffffff | (param_2 & 1) << 0x1d;
      }
      return CONCAT44(uVar1 >> 0x1d,param_2) >> 1 & 0xffffffff;
    }
  }
  return uVar2;
}


