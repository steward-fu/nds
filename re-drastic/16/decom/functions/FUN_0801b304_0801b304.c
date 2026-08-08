/*
 * Ghidra decompilation
 *
 * Function : FUN_0801b304
 * Address  : 0801b304
 * Program  : drastic16
 */


void FUN_0801b304(int param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  uVar2 = (*(uint *)(param_1 + 9000) & 0x1f) - 0x10;
  if (uVar2 < 0x10) {
    iVar4 = *(int *)(&DAT_080e6648 + uVar2 * 4);
    iVar5 = *(int *)(param_1 + 0x20fc);
    if (iVar4 == iVar5) {
      return;
    }
    if (iVar4 == 1) {
      memmove((void *)(param_1 + 0x20c0),(void *)(param_1 + 0x234c),0x1c);
      goto joined_r0x0801b368;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x20fc);
    if (iVar5 == 6) {
      return;
    }
    iVar4 = 6;
  }
  *(undefined8 *)(param_1 + (iVar5 + 0x411) * 8) = *(undefined8 *)(param_1 + 0x2360);
joined_r0x0801b368:
  if (iVar5 == 1) {
    puVar3 = (undefined8 *)(param_1 + 0x20c0);
    puVar1 = (undefined8 *)(param_1 + 0x234c);
    bVar7 = puVar1 <= (undefined8 *)(param_1 + 0x20d0U);
    bVar6 = (undefined8 *)(param_1 + 0x20d0U) == puVar1;
    if (bVar7 && !bVar6) {
      bVar7 = puVar3 <= (undefined8 *)(param_1 + 0x235cU);
      bVar6 = (undefined8 *)(param_1 + 0x235cU) == puVar3;
    }
    if (bVar7 && !bVar6) {
      *(undefined4 *)(param_1 + 0x234c) = *(undefined4 *)(param_1 + 0x20c0);
      *(undefined4 *)(param_1 + 0x2350) = *(undefined4 *)(param_1 + 0x20c4);
      *(undefined4 *)(param_1 + 0x2354) = *(undefined4 *)(param_1 + 0x20c8);
      *(undefined4 *)(param_1 + 0x2358) = *(undefined4 *)(param_1 + 0x20cc);
      *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
      *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
      *(undefined4 *)(param_1 + 0x2364) = *(undefined4 *)(param_1 + 0x20d8);
    }
    else {
      *puVar1 = *puVar3;
      *(undefined8 *)(param_1 + 0x2354) = *(undefined8 *)(param_1 + 0x20c8);
      *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
      *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
      *(undefined4 *)(param_1 + 0x2364) = *(undefined4 *)(param_1 + 0x20d8);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + (iVar4 + 0x411) * 8);
    *(undefined4 *)(param_1 + 0x2364) = *(undefined4 *)(param_1 + (iVar4 + 0x411) * 8 + 4);
  }
  *(int *)(param_1 + 0x20fc) = iVar4;
  return;
}


