/*
 * Ghidra decompilation
 *
 * Function : FUN_0801bc18
 * Address  : 0801bc18
 * Program  : drastic16
 */


void FUN_0801bc18(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  
  uVar3 = *(uint *)(param_1 + 0x2324);
  uVar2 = uVar3 & 1;
  if (uVar2 != 0) {
    uVar3 = uVar3 & 0xfffffffe;
    *(uint *)(param_1 + 0x2324) = uVar3;
    uVar2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20fc);
  if (iVar1 != 2) {
    *(undefined8 *)(param_1 + (iVar1 + 0x411) * 8) = *(undefined8 *)(param_1 + 0x2360);
    if (iVar1 == 1) {
      puVar5 = (undefined8 *)(param_1 + 0x20c0);
      puVar4 = (undefined8 *)(param_1 + 0x234c);
      bVar7 = puVar5 <= (undefined8 *)(param_1 + 0x235cU);
      bVar6 = (undefined8 *)(param_1 + 0x235cU) == puVar5;
      if (bVar7 && !bVar6) {
        bVar7 = puVar4 <= (undefined8 *)(param_1 + 0x20d0U);
        bVar6 = (undefined8 *)(param_1 + 0x20d0U) == puVar4;
      }
      if (bVar7 && !bVar6) {
        *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
        *(undefined4 *)(param_1 + 0x234c) = *(undefined4 *)(param_1 + 0x20c0);
        *(undefined4 *)(param_1 + 0x2350) = *(undefined4 *)(param_1 + 0x20c4);
        *(undefined4 *)(param_1 + 0x2354) = *(undefined4 *)(param_1 + 0x20c8);
        *(undefined4 *)(param_1 + 0x2358) = *(undefined4 *)(param_1 + 0x20cc);
        *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
      }
      else {
        *puVar4 = *puVar5;
        *(undefined8 *)(param_1 + 0x2354) = *(undefined8 *)(param_1 + 0x20c8);
        *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
        *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x2098);
    }
    *(undefined4 *)(param_1 + 0x20fc) = 2;
  }
  *(uint *)(param_1 + 0x2364) = uVar3 + 4;
  if (uVar2 == 0) {
    uVar3 = *(uint *)(param_1 + 9000);
    *(uint *)(param_1 + 0x20e8) = uVar3;
  }
  else {
    uVar3 = *(uint *)(param_1 + 9000);
    *(uint *)(param_1 + 0x20e8) = uVar3 | 0x20;
  }
  if (*(char *)(param_1 + 0x2104) == '\x01') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2304) + 8) + 0x18;
  }
  else {
    iVar1 = 0x18;
  }
  *(int *)(param_1 + 0x2324) = iVar1;
  *(uint *)(param_1 + 9000) = uVar3 & 0xffffffc0 | 0x92;
  return;
}


