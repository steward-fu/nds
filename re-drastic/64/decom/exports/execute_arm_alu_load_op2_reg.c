/*
 * Ghidra decompilation
 *
 * Function : execute_arm_alu_load_op2_reg
 * Address  : 00124d30
 * Program  : drastic64
 */


ulong execute_arm_alu_load_op2_reg(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
  uVar5 = (ulong)uVar3;
  uVar2 = (uint)(param_2 >> 5) & 3;
  uVar6 = (uint)(param_2 >> 0x14) & 1;
  if (((param_2 >> 0x15 & 0xe) != 0) && (((uint)(param_2 >> 0x15) & 0xf) < 0xc)) {
    uVar6 = 0;
  }
  if (((uint)param_2 >> 4 & 1) == 0) {
    param_2 = param_2 >> 7;
    uVar1 = (uint)param_2;
    uVar4 = uVar1 & 0x1f;
    if (uVar2 == 2) {
      if ((param_2 & 0x1f) != 0) {
        if (uVar6 != 0) {
          *(uint *)(param_1 + 0x23c0) =
               *(uint *)(param_1 + 0x23c0) & 0xdfffffff |
               (uVar3 >> (ulong)(uVar4 - 1 & 0x1f)) << 0x1d;
        }
        return (ulong)(uint)((int)uVar3 >> (uVar1 & 0x1f));
      }
LAB_00124f04:
      if (uVar6 != 0) {
        *(uint *)(param_1 + 0x23c0) =
             *(uint *)(param_1 + 0x23c0) & 0xdfffffff | (int)(uVar5 >> 0x1f) << 0x1d;
      }
      return (ulong)(uint)((int)uVar5 >> 0x1f);
    }
    if (uVar2 == 3) {
      if ((param_2 & 0x1f) != 0) {
        if (uVar6 != 0) {
          *(uint *)(param_1 + 0x23c0) =
               *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
               *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
               (uVar3 >> (ulong)(uVar4 - 1 & 0x1f) & 1) << 0x1d;
        }
        return (ulong)(uVar3 >> (uVar1 & 0x1f) | uVar3 << 0x20 - (uVar1 & 0x1f));
      }
      uVar2 = *(uint *)(param_1 + 0x23c0);
      if (uVar6 != 0) {
        *(uint *)(param_1 + 0x23c0) = uVar2 & 0xc0000000 | uVar2 & 0x1fffffff | (uVar3 & 1) << 0x1d;
      }
      return CONCAT44(uVar2 >> 0x1d,uVar3) >> 1 & 0xffffffff;
    }
    if (uVar2 == 1) {
      if ((param_2 & 0x1f) != 0) {
        if (uVar6 != 0) {
          *(uint *)(param_1 + 0x23c0) =
               *(uint *)(param_1 + 0x23c0) & 0xdfffffff |
               (uVar3 >> (ulong)(uVar4 - 1 & 0x1f)) << 0x1d;
        }
        return (ulong)(uVar3 >> (ulong)(uVar1 & 0x1f));
      }
      if (uVar6 == 0) {
        return 0;
      }
      uVar6 = *(uint *)(param_1 + 0x23c0) & 0xdfffffff | (uVar3 >> 0x1f) << 0x1d;
      goto LAB_00124f54;
    }
    if ((param_2 & 0x1f) != 0) {
      if (uVar6 != 0) {
        *(uint *)(param_1 + 0x23c0) =
             *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
             *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
             (uVar3 >> (ulong)(-uVar4 & 0x1f) & 1) << 0x1d;
      }
      return (ulong)(uVar3 << (ulong)(uVar1 & 0x1f));
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + ((param_2 >> 8 & 0xf) + 0x8dc) * 4);
    uVar1 = uVar3 + 4;
    if (((uint)param_2 & 0xf) != 0xf) {
      uVar1 = uVar3;
    }
    uVar5 = (ulong)uVar1;
    uVar3 = uVar4 & 0xff;
    if (uVar2 == 2) {
      if (uVar3 != 0) {
        if ((uVar4 & 0xe0) == 0) {
          if (uVar6 != 0) {
            *(uint *)(param_1 + 0x23c0) =
                 *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
                 *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
                 (uVar1 >> (ulong)(uVar3 - 1 & 0x1f) & 1) << 0x1d;
          }
          return (ulong)(uint)((int)uVar1 >> (uVar4 & 0x1f));
        }
        goto LAB_00124f04;
      }
    }
    else if (uVar2 == 3) {
      if (uVar3 != 0) {
        if ((uVar4 & 0x1f) != 0) {
          if (uVar6 != 0) {
            *(uint *)(param_1 + 0x23c0) =
                 *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
                 *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
                 (uVar1 >> (ulong)(uVar3 - 1 & 0x1f) & 1) << 0x1d;
          }
          return (ulong)(uVar1 >> (uVar4 & 0x1f) | uVar1 << 0x20 - (uVar4 & 0x1f));
        }
        if (uVar6 != 0) {
          *(uint *)(param_1 + 0x23c0) =
               *(uint *)(param_1 + 0x23c0) & 0xdfffffff | (uVar1 >> 0x1f) << 0x1d;
          return uVar5;
        }
      }
    }
    else if (uVar2 == 1) {
      if (uVar3 != 0) {
        if ((uVar4 & 0xe0) == 0) {
          if (uVar6 != 0) {
            *(uint *)(param_1 + 0x23c0) =
                 *(uint *)(param_1 + 0x23c0) & 0xdfffffff |
                 (uVar1 >> (ulong)(uVar3 - 1 & 0x1f)) << 0x1d;
          }
          return (ulong)(uVar1 >> (ulong)(uVar4 & 0x1f));
        }
        if (uVar6 == 0) {
          return 0;
        }
        uVar6 = *(uint *)(param_1 + 0x23c0) & 0xdfffffff;
        if (uVar3 == 0x20) {
          *(uint *)(param_1 + 0x23c0) = uVar6 | (uVar1 >> 0x1f) << 0x1d;
          return 0;
        }
LAB_00124f54:
        *(uint *)(param_1 + 0x23c0) = uVar6;
        return 0;
      }
    }
    else if (uVar3 != 0) {
      if ((uVar4 & 0xe0) != 0) {
        if (uVar6 == 0) {
          return 0;
        }
        uVar6 = *(uint *)(param_1 + 0x23c0) & 0xdfffffff;
        if (uVar3 == 0x20) {
          *(uint *)(param_1 + 0x23c0) = (uVar1 & 1) << 0x1d | uVar6;
          return 0;
        }
        goto LAB_00124f54;
      }
      if (uVar6 != 0) {
        *(uint *)(param_1 + 0x23c0) =
             *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
             *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
             (uVar1 >> (ulong)(-uVar3 & 0x1f) & 1) << 0x1d;
      }
      uVar5 = (ulong)(uVar1 << (ulong)(uVar4 & 0x1f));
    }
  }
  return uVar5;
}


