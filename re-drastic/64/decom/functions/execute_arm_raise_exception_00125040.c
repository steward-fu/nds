/*
 * Ghidra decompilation
 *
 * Function : execute_arm_raise_exception
 * Address  : 00125040
 * Program  : drastic64
 */


void execute_arm_raise_exception(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x23bc);
  uVar1 = *(uint *)(param_1 + 0x2104);
  iVar5 = param_2 * 4;
  uVar2 = uVar6 & 1;
  if ((uVar6 & 1) == 0) {
    if (param_2 == 3) goto LAB_00125354;
    if (param_2 < 4) {
      if (param_2 == 1) {
        param_2 = 0;
        goto LAB_001252a4;
      }
      if (param_2 == 2) goto LAB_00125078;
      if (param_2 != 0) goto LAB_00125278;
      uVar2 = param_2;
      if (uVar1 != 3) goto LAB_00125180;
      uVar6 = 0x13;
      uVar3 = 3;
    }
    else {
      if (param_2 == 6) goto LAB_001252ec;
      if (param_2 == 7) {
        iVar4 = uVar6 + 4;
        if (uVar1 != 1) goto LAB_00125124;
        uVar6 = 0x11;
        uVar3 = 1;
        *(int *)(param_1 + 0x23a8) = iVar4;
      }
      else {
        if (param_2 == 4) goto LAB_001251c0;
LAB_00125278:
        uVar3 = (ulong)uVar1;
        uVar6 = *(uint *)(cpu_modes_cpsr + uVar3 * 4);
      }
    }
LAB_00125290:
    uVar2 = *(uint *)(param_1 + 0x23c0);
    *(uint *)(param_1 + uVar3 * 4 + 0x20e8) = uVar2;
  }
  else {
    *(uint *)(param_1 + 0x23bc) = uVar6 & 0xfffffffe;
    if (param_2 == 3) {
LAB_00125354:
      if (uVar1 != 4) {
        *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
        if (uVar1 == 1) {
          *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
          *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
          *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
        }
        else {
          *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20b0);
        }
        *(undefined4 *)(param_1 + 0x2104) = 4;
      }
      uVar3 = 4;
      uVar6 = 0x17;
      *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x23bc);
LAB_001250c0:
      if (uVar2 == 0) goto LAB_00125290;
    }
    else {
      if (3 < param_2) {
        if (param_2 == 6) {
LAB_001252ec:
          if (uVar1 != 2) {
            *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4)
            ;
            if (uVar1 == 1) {
              *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
              *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
              *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
            }
            else {
              *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20a0);
            }
            *(undefined4 *)(param_1 + 0x2104) = 2;
          }
          uVar6 = 0x12;
          uVar3 = 2;
          *(int *)(param_1 + 0x23a8) = *(int *)(param_1 + 0x23bc) + 4;
        }
        else if (param_2 == 7) {
          iVar4 = (uVar6 & 0xfffffffe) + 4;
          if (uVar1 == 1) {
            uVar6 = 0x11;
            uVar3 = 1;
            *(int *)(param_1 + 0x23a8) = iVar4;
            goto LAB_001250c4;
          }
LAB_00125124:
          *(undefined8 *)(param_1 + 0x20c8) = *(undefined8 *)(param_1 + 0x2390);
          *(undefined8 *)(param_1 + 0x20d0) = *(undefined8 *)(param_1 + 0x2398);
          *(undefined8 *)(param_1 + 0x20d8) = *(undefined8 *)(param_1 + 0x23a0);
          uVar3 = 1;
          *(undefined4 *)(param_1 + 0x20e0) = *(undefined4 *)(param_1 + 0x23a8);
          uVar6 = 0x11;
          *(undefined4 *)(param_1 + 0x2104) = 1;
          *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x2098);
          *(int *)(param_1 + 0x23a8) = iVar4;
        }
        else {
          if (param_2 != 4) goto LAB_0012533c;
LAB_001251c0:
          if (uVar1 != 4) {
            *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4)
            ;
            if (uVar1 == 1) {
              *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
              *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
              *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
            }
            else {
              *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20b0);
            }
            *(undefined4 *)(param_1 + 0x2104) = 4;
          }
          uVar6 = 0x17;
          uVar3 = 4;
          *(int *)(param_1 + 0x23a8) = *(int *)(param_1 + 0x23bc) + -4;
        }
        goto LAB_001250c0;
      }
      if (param_2 == 1) {
LAB_001252a4:
        if (uVar1 != 5) {
          *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
          if (uVar1 == 1) {
            *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
            *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
            *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
          }
          else {
            *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20b8);
          }
          *(undefined4 *)(param_1 + 0x2104) = 5;
        }
        uVar6 = 0x1b;
        uVar3 = 5;
        *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x23bc);
        uVar2 = param_2;
        goto LAB_001250c0;
      }
      if (param_2 == 2) {
LAB_00125078:
        if (uVar1 != 3) {
          *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
          if (uVar1 == 1) {
            *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
            *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
            *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
          }
          else {
            *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + 0x20a8);
          }
          *(undefined4 *)(param_1 + 0x2104) = 3;
        }
        uVar3 = 3;
        uVar6 = 0x13;
        *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x23bc);
        goto LAB_001250c0;
      }
      if (param_2 == 0) {
        if (uVar1 == 3) {
          uVar6 = 0x13;
          uVar3 = 3;
          goto LAB_001250c4;
        }
LAB_00125180:
        *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
        if (uVar1 == 1) {
          *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
          *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x20e0);
          *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
          *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
        }
        else {
          *(undefined8 *)(param_1 + 0x23a4) = *(undefined8 *)(param_1 + 0x20a8);
        }
        uVar6 = 0x13;
        uVar3 = 3;
        *(undefined4 *)(param_1 + 0x2104) = 3;
        goto LAB_001250c0;
      }
LAB_0012533c:
      uVar3 = (ulong)uVar1;
      uVar6 = *(uint *)(cpu_modes_cpsr + uVar3 * 4);
    }
LAB_001250c4:
    uVar2 = *(uint *)(param_1 + 0x23c0);
    *(uint *)(param_1 + uVar3 * 4 + 0x20e8) = uVar2 | 0x20;
  }
  if (*(int *)(param_1 + 0x210c) == 1) {
    iVar5 = iVar5 + *(int *)(*(long *)(param_1 + 0x2250) + 0x10);
  }
  *(int *)(param_1 + 0x23bc) = iVar5;
  *(uint *)(param_1 + 0x23c0) = (uVar2 & 0xffffffe0 | uVar6) & 0xffffffdf | 0x80;
  return;
}


