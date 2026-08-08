/*
 * Ghidra decompilation
 *
 * Function : execute_arm_alu_op
 * Address  : 00125a50
 * Program  : drastic64
 */


void execute_arm_alu_op(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar4 = (uint)(param_2 >> 0x15) & 0xf;
  uVar7 = *(uint *)(param_1 + ((param_2 >> 0x10 & 0xf) + 0x8dc) * 4);
  uVar8 = (ulong)uVar7;
  uVar2 = param_2 >> 0x14;
  if (uVar4 == 8) {
    uVar4 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
    if ((uVar7 & param_3) != 0) {
      uVar4 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
    }
    *(uint *)(param_1 + 0x23c0) = uVar7 & param_3 & 0x80000000 | uVar4 & 0x7fffffff;
    return;
  }
  if (8 < uVar4) {
    if (uVar4 == 0xc) {
      uVar4 = uVar7 | param_3;
    }
    else if (uVar4 < 0xd) {
      if (uVar4 == 10) {
        if ((uVar2 & 1) == 0) {
          return;
        }
        uVar8 = (ulong)~param_3 + 1 + uVar8;
        uVar5 = (uint)uVar8;
        uVar4 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
        if (uVar5 != 0) {
          uVar4 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
        }
        uVar1 = uVar5 & 0x80000000 | uVar4 & 0x7fffffff | 0x20000000;
        if ((uVar8 & 0xffffffff00000000) == 0) {
          uVar1 = uVar5 & 0x80000000 | uVar4 & 0x5fffffff;
        }
        uVar4 = uVar1 | 0x10000000;
        if ((long)(int)~param_3 + (long)(int)uVar7 + 1 == (long)(int)uVar5) {
          uVar4 = uVar1 & 0xefffffff;
        }
        *(uint *)(param_1 + 0x23c0) = uVar4;
        return;
      }
      if (uVar4 == 0xb) {
        if ((uVar2 & 1) == 0) {
          return;
        }
        uVar4 = uVar7 + param_3;
        uVar5 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
        if (uVar4 != 0) {
          uVar5 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
        }
        uVar1 = uVar4 & 0x80000000 | uVar5 & 0x7fffffff | 0x20000000;
        if (param_3 + uVar8 == (ulong)uVar4) {
          uVar1 = uVar4 & 0x80000000 | uVar5 & 0x5fffffff;
        }
        uVar5 = uVar1 | 0x10000000;
        if ((long)(int)param_3 + (long)(int)uVar7 == (long)(int)uVar4) {
          uVar5 = uVar1 & 0xefffffff;
        }
        *(uint *)(param_1 + 0x23c0) = uVar5;
        return;
      }
      if (uVar4 == 9) {
        uVar4 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
        if (uVar7 != param_3) {
          uVar4 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
        }
        *(uint *)(param_1 + 0x23c0) = (uVar7 ^ param_3) & 0x80000000 | uVar4 & 0x7fffffff;
        return;
      }
LAB_00125e8c:
      uVar4 = uVar7 & param_3;
    }
    else if (uVar4 == 0xe) {
      uVar4 = uVar7 & (param_3 ^ 0xffffffff);
    }
    else {
      if (uVar4 != 0xf) {
        if (uVar4 == 0xd) {
          uVar4 = param_3;
          if ((uVar2 & 1) != 0) {
            uVar7 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
            if (param_3 != 0) {
              uVar7 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
            }
            *(uint *)(param_1 + 0x23c0) = param_3 & 0x80000000 | uVar7 & 0x7fffffff;
            goto LAB_00125b04;
          }
          goto LAB_00125d10;
        }
        goto LAB_00125e8c;
      }
      uVar4 = ~param_3;
    }
    if ((uVar2 & 1) == 0) {
LAB_00125d10:
      uVar8 = param_2 >> 0xc & 0xf;
      *(uint *)(param_1 + (uVar8 + 0x8dc) * 4) = uVar4;
      if ((int)uVar8 != 0xf) {
        return;
      }
      *(uint *)(param_1 + 0x23bc) = uVar4 & 0xfffffffe;
      return;
    }
    uVar7 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
    if (uVar4 != 0) {
      uVar7 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
    }
    *(uint *)(param_1 + 0x23c0) = uVar4 & 0x80000000 | uVar7 & 0x7fffffff;
    param_3 = uVar4;
    goto LAB_00125b04;
  }
  if (uVar4 == 4) {
    uVar4 = uVar7 + param_3;
    if ((uVar2 & 1) == 0) goto LAB_00125d10;
    uVar5 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
    if (uVar4 != 0) {
      uVar5 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
    }
    uVar1 = uVar4 & 0x80000000 | uVar5 & 0x7fffffff | 0x20000000;
    if (param_3 + uVar8 == (ulong)uVar4) {
      uVar1 = uVar4 & 0x80000000 | uVar5 & 0x5fffffff;
    }
    uVar5 = uVar1 | 0x10000000;
    if ((long)(int)param_3 + (long)(int)uVar7 == (long)(int)uVar4) {
      uVar5 = uVar1 & 0xefffffff;
    }
    *(uint *)(param_1 + 0x23c0) = uVar5;
    param_3 = uVar4;
    goto LAB_00125b04;
  }
  if (uVar4 < 5) {
    if (uVar4 != 2) {
      if (uVar4 != 3) {
        if (uVar4 == 1) {
          uVar4 = uVar7 ^ param_3;
          if ((uVar2 & 1) != 0) {
            uVar5 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
            if (uVar7 != param_3) {
              uVar5 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
            }
            *(uint *)(param_1 + 0x23c0) = uVar4 & 0x80000000 | uVar5 & 0x7fffffff;
            param_3 = uVar4;
            goto LAB_00125b04;
          }
          goto LAB_00125d10;
        }
        goto LAB_00125e8c;
      }
      if ((uVar2 & 1) == 0) {
        uVar4 = param_3 - uVar7;
        goto LAB_00125d10;
      }
      uVar8 = (ulong)param_3 + 1 + (ulong)~uVar7;
      uVar4 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
      if ((uint)uVar8 != 0) {
        uVar4 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
      }
      uVar4 = (uint)uVar8 & 0x80000000 | uVar4 & 0x7fffffff;
      lVar3 = (long)(int)param_3 + (long)(int)~uVar7 + 1;
      goto LAB_00125bf0;
    }
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar7 - param_3;
      goto LAB_00125d10;
    }
    uVar8 = (ulong)~param_3 + 1 + uVar8;
    uVar4 = *(uint *)(param_1 + 0x23c0) | 0x40000000;
    if ((uint)uVar8 != 0) {
      uVar4 = *(uint *)(param_1 + 0x23c0) & 0xbfffffff;
    }
    uVar5 = (uint)uVar8 & 0x80000000;
    lVar3 = (long)(int)~param_3 + (long)(int)uVar7 + 1;
    uVar7 = uVar5 | uVar4 & 0x7fffffff | 0x20000000;
    if ((uVar8 & 0xffffffff00000000) == 0) {
      uVar7 = uVar5 | uVar4 & 0x5fffffff;
    }
  }
  else {
    if (uVar4 != 6) {
      if (uVar4 == 7) {
        uVar4 = *(uint *)(param_1 + 0x23c0);
        uVar6 = (ulong)(uVar4 >> 0x1d) & 1;
        if ((uVar2 & 1) == 0) {
          uVar4 = ((int)uVar6 - uVar7) + (param_3 - 1);
          goto LAB_00125d10;
        }
        uVar7 = ~uVar7;
        uVar8 = uVar6 + param_3 + (ulong)uVar7;
        uVar5 = uVar4 | 0x40000000;
        if ((int)uVar8 != 0) {
          uVar5 = uVar4 & 0xbfffffff;
        }
      }
      else {
        if (uVar4 != 5) goto LAB_00125e8c;
        uVar4 = *(uint *)(param_1 + 0x23c0);
        uVar6 = (ulong)(uVar4 >> 0x1d) & 1;
        if ((uVar2 & 1) == 0) {
          uVar4 = param_3 + (int)uVar6 + uVar7;
          goto LAB_00125d10;
        }
        uVar8 = uVar6 + param_3 + uVar8;
        uVar5 = uVar4 | 0x40000000;
        if ((int)uVar8 != 0) {
          uVar5 = uVar4 & 0xbfffffff;
        }
      }
      uVar4 = (uint)uVar8 & 0x80000000 | uVar5 & 0x7fffffff;
      lVar3 = (long)(int)param_3 + (long)(int)uVar7 + uVar6;
LAB_00125bf0:
      uVar7 = uVar4 | 0x20000000;
      if ((uVar8 & 0xffffffff00000000) == 0) {
        uVar7 = uVar4 & 0xdfffffff;
      }
      uVar4 = uVar7 | 0x10000000;
      if (lVar3 == (int)(uint)uVar8) {
        uVar4 = uVar7 & 0xefffffff;
      }
      *(uint *)(param_1 + 0x23c0) = uVar4;
      param_3 = (uint)uVar8;
      goto LAB_00125b04;
    }
    uVar4 = *(uint *)(param_1 + 0x23c0);
    param_3 = ~param_3;
    uVar6 = (ulong)(uVar4 >> 0x1d) & 1;
    if ((uVar2 & 1) == 0) {
      uVar4 = param_3 + (int)uVar6 + uVar7;
      goto LAB_00125d10;
    }
    uVar8 = uVar6 + param_3 + uVar8;
    uVar5 = uVar4 | 0x40000000;
    if ((uint)uVar8 != 0) {
      uVar5 = uVar4 & 0xbfffffff;
    }
    uVar4 = (uint)uVar8 & 0x80000000;
    lVar3 = (long)(int)param_3 + (long)(int)uVar7 + uVar6;
    uVar7 = uVar4 | uVar5 & 0x7fffffff | 0x20000000;
    if ((uVar8 & 0xffffffff00000000) == 0) {
      uVar7 = uVar4 | uVar5 & 0x5fffffff;
    }
  }
  uVar4 = uVar7 | 0x10000000;
  if (lVar3 == (int)(uint)uVar8) {
    uVar4 = uVar7 & 0xefffffff;
  }
  *(uint *)(param_1 + 0x23c0) = uVar4;
  param_3 = (uint)uVar8;
LAB_00125b04:
  uVar8 = param_2 >> 0xc & 0xf;
  *(uint *)(param_1 + (uVar8 + 0x8dc) * 4) = param_3;
  if ((int)uVar8 != 0xf) {
    return;
  }
  *(uint *)(param_1 + 0x23bc) = param_3 & 0xfffffffe;
  if ((*(uint *)(param_1 + 0x23c0) & 0x1f) == 0x10) {
    return;
  }
  execute_arm_set_cpsr
            (param_1,*(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x2104) * 4 + 0x20e8));
  return;
}


