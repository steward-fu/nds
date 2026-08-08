/*
 * Ghidra decompilation
 *
 * Function : execute_arm_block_memory_op
 * Address  : 00126a90
 * Program  : drastic64
 */


void execute_arm_block_memory_op(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint local_10;
  uint local_8;
  
  uVar5 = (uint)param_2;
  uVar6 = param_2 >> 0x10 & 0xf;
  uVar7 = uVar5 & 0xffff;
  lVar2 = param_1 + uVar6 * 4;
  iVar1 = (uint)(byte)(&bit_count)[uVar5 & 0xff] + (uint)(byte)(&bit_count)[param_2 >> 8 & 0xff];
  local_10 = (uint)(param_2 >> 0x15) & 1;
  uVar10 = (uint)(param_2 >> 0x17) & 3;
  uVar8 = *(uint *)(lVar2 + 0x2370);
  if (uVar10 == 2) {
    uVar8 = uVar8 + iVar1 * -4;
    local_8 = uVar8;
  }
  else if (uVar10 == 3) {
    local_8 = uVar8 + iVar1 * 4;
    uVar8 = uVar8 + 4;
  }
  else {
    local_8 = uVar8 + iVar1 * 4;
    if (uVar10 != 1) {
      local_8 = uVar8 + iVar1 * -4;
      uVar8 = local_8 + 4;
    }
  }
  uVar9 = 0xffffffff;
  if (((uVar5 >> 0x16 & 1) != 0) && ((uVar5 & 0x108000) != 0x108000)) {
    uVar10 = *(uint *)(param_1 + 0x2104);
    uVar9 = 0;
    if (uVar10 != 0) {
      *(undefined8 *)(param_1 + (ulong)uVar10 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
      if (uVar10 == 1) {
        *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
        *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x20e0);
        *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
        *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      }
      else {
        *(undefined8 *)(param_1 + 0x23a4) = *(undefined8 *)(param_1 + 0x2090);
      }
      uVar9 = (ulong)uVar10;
      *(undefined4 *)(param_1 + 0x2104) = 0;
    }
  }
  uVar10 = 1 << uVar6;
  uVar8 = uVar8 & 0xfffffffc;
  if ((uVar7 & uVar10) == 0) {
    if ((param_2 & 0xffff) == 0) goto LAB_00126bc8;
    if ((uVar5 >> 0x14 & 1) != 0) goto LAB_00126c10;
  }
  else if ((uVar5 >> 0x14 & 1) != 0) {
    if (((uVar7 & (uVar10 ^ 0xffffffff)) != 0) && ((-uVar10 & uVar7) == uVar10)) {
      local_10 = 0;
    }
LAB_00126c10:
    uVar6 = 0;
    do {
      if ((uVar7 & 1) != 0) {
        uVar4 = load_memory32(param_1 + 0x23d0,uVar8);
        *(undefined4 *)(param_1 + 0x2370 + uVar6 * 4) = uVar4;
        uVar8 = uVar8 + 4;
      }
      uVar7 = uVar7 >> 1;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar7 != 0);
    goto LAB_00126bc8;
  }
  uVar10 = uVar5 & 0x100000;
  do {
    if ((uVar7 & 1) != 0) {
      store_memory32(param_1 + 0x23d0,uVar8,*(undefined4 *)(param_1 + 0x2370 + (ulong)uVar10 * 4));
      uVar8 = uVar8 + 4;
    }
    uVar7 = uVar7 >> 1;
    uVar10 = uVar10 + 1;
  } while (uVar7 != 0);
LAB_00126bc8:
  uVar8 = (uint)uVar9;
  if ((uVar8 != 0xffffffff) && (uVar7 = *(uint *)(param_1 + 0x2104), uVar8 != uVar7)) {
    if (uVar8 == 1) {
      *(undefined8 *)(param_1 + 0x20c8) = *(undefined8 *)(param_1 + 0x2390);
      *(undefined8 *)(param_1 + 0x20d0) = *(undefined8 *)(param_1 + 0x2398);
      *(undefined8 *)(param_1 + 0x20d8) = *(undefined8 *)(param_1 + 0x23a0);
      *(undefined4 *)(param_1 + 0x20e0) = *(undefined4 *)(param_1 + 0x23a8);
    }
    else {
      *(undefined8 *)(param_1 + (ulong)uVar7 * 8 + 0x2090) = *(undefined8 *)(param_1 + 0x23a4);
    }
    if (uVar7 == 1) {
      *(uint *)(param_1 + 0x2104) = uVar8;
      *(undefined8 *)(param_1 + 0x23a0) = *(undefined8 *)(param_1 + 0x20d8);
      *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
      *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
      *(undefined4 *)(param_1 + 0x23a8) = *(undefined4 *)(param_1 + 0x20e0);
    }
    else {
      lVar3 = uVar9 * 8 + 0x2090;
      *(undefined4 *)(param_1 + 0x23a4) = *(undefined4 *)(param_1 + lVar3);
      uVar4 = *(undefined4 *)(param_1 + lVar3 + 4);
      *(uint *)(param_1 + 0x2104) = uVar8;
      *(undefined4 *)(param_1 + 0x23a8) = uVar4;
    }
  }
  if (local_10 != 0) {
    *(uint *)(lVar2 + 0x2370) = local_8;
  }
  if ((uVar5 & 0x108000) == 0x108000) {
    uVar8 = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23bc) = uVar8;
    if (*(int *)(param_1 + 0x210c) == 1) {
      *(uint *)(param_1 + 0x23bc) = uVar8 & 0xfffffffe;
      *(uint *)(param_1 + 0x23c0) =
           *(uint *)(param_1 + 0x23c0) & 0xffffffc0 |
           *(uint *)(param_1 + 0x23c0) & 0x1f | (uVar8 & 1) << 5;
    }
    if (((param_2 & 0x400000) != 0) && ((*(uint *)(param_1 + 0x23c0) & 0x1f) != 0x10)) {
      execute_arm_set_cpsr
                (param_1,*(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x2104) * 4 + 0x20e8))
      ;
      return;
    }
  }
  return;
}


