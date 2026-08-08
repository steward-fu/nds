/*
 * Ghidra decompilation
 *
 * Function : FUN_001270ac
 * Address  : 001270ac
 * Program  : drastic64
 */


void FUN_001270ac(long param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2 & 0xffffffff;
  if ((param_2 & 0xe00000) == 0 && ((uint)(uVar6 >> 8) & 0xf) == 0xf) {
    uVar7 = uVar6 >> 0xc & 0xf;
    if (((uint)param_2 >> 0x14 & 1) != 0) {
      uVar2 = coprocessor_register_load();
      *(undefined4 *)(param_1 + (uVar7 + 0x8dc) * 4) = uVar2;
      return;
    }
    coprocessor_register_store
              (*(undefined8 *)(param_1 + 0x2250),uVar6 >> 0x10 & 0xf,(uint)param_2 & 0xf,
               uVar6 >> 5 & 7,*(undefined4 *)(param_1 + (uVar7 + 0x8dc) * 4));
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x2104);
  uVar3 = *(uint *)(param_1 + 0x23bc);
  uVar4 = uVar3 & 1;
  if ((uVar3 & 1) == 0) {
    if (uVar1 == 5) {
      *(uint *)(param_1 + 0x23a8) = uVar3;
    }
    else {
LAB_00127138:
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
      *(uint *)(param_1 + 0x23a8) = uVar3;
      if (uVar4 != 0) goto LAB_0012716c;
    }
    uVar4 = *(uint *)(param_1 + 0x23c0);
    *(uint *)(param_1 + 0x20fc) = uVar4;
  }
  else {
    uVar3 = uVar3 & 0xfffffffe;
    *(uint *)(param_1 + 0x23bc) = uVar3;
    if (uVar1 != 5) goto LAB_00127138;
    *(uint *)(param_1 + 0x23a8) = uVar3;
LAB_0012716c:
    uVar4 = *(uint *)(param_1 + 0x23c0);
    *(uint *)(param_1 + 0x20fc) = uVar4 | 0x20;
  }
  iVar5 = 4;
  if (*(int *)(param_1 + 0x210c) == 1) {
    iVar5 = *(int *)(*(long *)(param_1 + 0x2250) + 0x10) + 4;
  }
  *(int *)(param_1 + 0x23bc) = iVar5;
  *(uint *)(param_1 + 0x23c0) = uVar4 & 0xffffffc0 | 0x9b;
  return;
}


