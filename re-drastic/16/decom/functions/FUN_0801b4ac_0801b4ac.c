/*
 * Ghidra decompilation
 *
 * Function : FUN_0801b4ac
 * Address  : 0801b4ac
 * Program  : drastic16
 */


void FUN_0801b4ac(int param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  uVar7 = *(uint *)(param_1 + 0x2324);
  iVar5 = param_2 * 4;
  uVar6 = uVar7 & 1;
  if (uVar6 != 0) {
    uVar7 = uVar7 & 0xfffffffe;
    *(uint *)(param_1 + 0x2324) = uVar7;
    uVar6 = 1;
  }
  switch(param_2) {
  case 0:
    iVar2 = *(int *)(param_1 + 0x20fc);
    if (iVar2 != 3) {
      *(undefined8 *)(param_1 + (iVar2 + 0x411) * 8) = *(undefined8 *)(param_1 + 0x2360);
      if (iVar2 == 1) {
        if ((undefined8 *)(param_1 + 0x234cU) < (undefined8 *)(param_1 + 0x20d0U) &&
            (undefined8 *)(param_1 + 0x20c0U) < (undefined8 *)(param_1 + 0x235cU)) {
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
          *(undefined4 *)(param_1 + 0x234c) = *(undefined4 *)(param_1 + 0x20c0);
          *(undefined4 *)(param_1 + 0x2350) = *(undefined4 *)(param_1 + 0x20c4);
          *(undefined4 *)(param_1 + 0x2354) = *(undefined4 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x2358) = *(undefined4 *)(param_1 + 0x20cc);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
          *(undefined4 *)(param_1 + 0x2364) = *(undefined4 *)(param_1 + 0x20d8);
        }
        else {
          *(undefined8 *)(param_1 + 0x234cU) = *(undefined8 *)(param_1 + 0x20c0U);
          *(undefined8 *)(param_1 + 0x2354) = *(undefined8 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
          *(undefined4 *)(param_1 + 0x2364) = *(undefined4 *)(param_1 + 0x20d8);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x2360) = *(undefined8 *)(param_1 + 0x20a0);
      }
      iVar2 = 3;
      *(undefined4 *)(param_1 + 0x20fc) = 3;
    }
    break;
  case 1:
    iVar2 = *(int *)(param_1 + 0x20fc);
    if (iVar2 != 5) {
      *(undefined8 *)(param_1 + (iVar2 + 0x411) * 8) = *(undefined8 *)(param_1 + 0x2360);
      if (iVar2 == 1) {
        puVar3 = (undefined8 *)(param_1 + 0x20c0);
        puVar1 = (undefined8 *)(param_1 + 0x234c);
        bVar9 = puVar3 <= (undefined8 *)(param_1 + 0x235cU);
        bVar8 = (undefined8 *)(param_1 + 0x235cU) == puVar3;
        if (bVar9 && !bVar8) {
          bVar9 = puVar1 <= (undefined8 *)(param_1 + 0x20d0U);
          bVar8 = (undefined8 *)(param_1 + 0x20d0U) == puVar1;
        }
        if (bVar9 && !bVar8) {
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
          *(undefined4 *)(param_1 + 0x234c) = *(undefined4 *)(param_1 + 0x20c0);
          *(undefined4 *)(param_1 + 0x2350) = *(undefined4 *)(param_1 + 0x20c4);
          *(undefined4 *)(param_1 + 0x2354) = *(undefined4 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x2358) = *(undefined4 *)(param_1 + 0x20cc);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
        }
        else {
          *puVar1 = *puVar3;
          *(undefined8 *)(param_1 + 0x2354) = *(undefined8 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20b0);
      }
      *(undefined4 *)(param_1 + 0x20fc) = 5;
    }
    iVar2 = 5;
    *(uint *)(param_1 + 0x2364) = uVar7;
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x20fc);
    if (iVar2 != 3) {
      *(undefined8 *)(param_1 + (iVar2 + 0x411) * 8) = *(undefined8 *)(param_1 + 0x2360);
      if (iVar2 == 1) {
        puVar3 = (undefined8 *)(param_1 + 0x20c0);
        puVar1 = (undefined8 *)(param_1 + 0x234c);
        bVar9 = puVar3 <= (undefined8 *)(param_1 + 0x235cU);
        bVar8 = (undefined8 *)(param_1 + 0x235cU) == puVar3;
        if (bVar9 && !bVar8) {
          bVar9 = puVar1 <= (undefined8 *)(param_1 + 0x20d0U);
          bVar8 = (undefined8 *)(param_1 + 0x20d0U) == puVar1;
        }
        if (bVar9 && !bVar8) {
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
          *(undefined4 *)(param_1 + 0x234c) = *(undefined4 *)(param_1 + 0x20c0);
          *(undefined4 *)(param_1 + 0x2350) = *(undefined4 *)(param_1 + 0x20c4);
          *(undefined4 *)(param_1 + 0x2354) = *(undefined4 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x2358) = *(undefined4 *)(param_1 + 0x20cc);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
        }
        else {
          *puVar1 = *puVar3;
          *(undefined8 *)(param_1 + 0x2354) = *(undefined8 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20a0);
      }
      *(undefined4 *)(param_1 + 0x20fc) = 3;
    }
    iVar2 = 3;
    *(uint *)(param_1 + 0x2364) = uVar7;
    break;
  case 3:
    iVar2 = *(int *)(param_1 + 0x20fc);
    if (iVar2 != 4) {
      *(undefined8 *)(param_1 + (iVar2 + 0x411) * 8) = *(undefined8 *)(param_1 + 0x2360);
      if (iVar2 == 1) {
        puVar3 = (undefined8 *)(param_1 + 0x20c0);
        puVar1 = (undefined8 *)(param_1 + 0x234c);
        bVar9 = puVar3 <= (undefined8 *)(param_1 + 0x235cU);
        bVar8 = (undefined8 *)(param_1 + 0x235cU) == puVar3;
        if (bVar9 && !bVar8) {
          bVar9 = puVar1 <= (undefined8 *)(param_1 + 0x20d0U);
          bVar8 = (undefined8 *)(param_1 + 0x20d0U) == puVar1;
        }
        if (bVar9 && !bVar8) {
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
          *(undefined4 *)(param_1 + 0x234c) = *(undefined4 *)(param_1 + 0x20c0);
          *(undefined4 *)(param_1 + 0x2350) = *(undefined4 *)(param_1 + 0x20c4);
          *(undefined4 *)(param_1 + 0x2354) = *(undefined4 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x2358) = *(undefined4 *)(param_1 + 0x20cc);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
        }
        else {
          *puVar1 = *puVar3;
          *(undefined8 *)(param_1 + 0x2354) = *(undefined8 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20a8);
      }
      *(undefined4 *)(param_1 + 0x20fc) = 4;
    }
    iVar2 = 4;
    *(uint *)(param_1 + 0x2364) = uVar7;
    break;
  case 4:
    iVar2 = *(int *)(param_1 + 0x20fc);
    if (iVar2 != 4) {
      *(undefined8 *)(param_1 + (iVar2 + 0x411) * 8) = *(undefined8 *)(param_1 + 0x2360);
      if (iVar2 == 1) {
        if ((undefined8 *)(param_1 + 0x234cU) < (undefined8 *)(param_1 + 0x20d0U) &&
            (undefined8 *)(param_1 + 0x20c0U) < (undefined8 *)(param_1 + 0x235cU)) {
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
          *(undefined4 *)(param_1 + 0x234c) = *(undefined4 *)(param_1 + 0x20c0);
          *(undefined4 *)(param_1 + 0x2350) = *(undefined4 *)(param_1 + 0x20c4);
          *(undefined4 *)(param_1 + 0x2354) = *(undefined4 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x2358) = *(undefined4 *)(param_1 + 0x20cc);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
        }
        else {
          *(undefined8 *)(param_1 + 0x234cU) = *(undefined8 *)(param_1 + 0x20c0U);
          *(undefined8 *)(param_1 + 0x2354) = *(undefined8 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20a8);
      }
      *(undefined4 *)(param_1 + 0x20fc) = 4;
    }
    iVar2 = 4;
    *(uint *)(param_1 + 0x2364) = uVar7 - 4;
    break;
  default:
    iVar2 = *(int *)(param_1 + 0x20fc);
    break;
  case 6:
    iVar2 = *(int *)(param_1 + 0x20fc);
    if (iVar2 != 2) {
      *(undefined8 *)(param_1 + (iVar2 + 0x411) * 8) = *(undefined8 *)(param_1 + 0x2360);
      if (iVar2 == 1) {
        if ((undefined8 *)(param_1 + 0x234cU) < (undefined8 *)(param_1 + 0x20d0U) &&
            (undefined8 *)(param_1 + 0x20c0U) < (undefined8 *)(param_1 + 0x235cU)) {
          *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
          *(undefined4 *)(param_1 + 0x234c) = *(undefined4 *)(param_1 + 0x20c0);
          *(undefined4 *)(param_1 + 0x2350) = *(undefined4 *)(param_1 + 0x20c4);
          *(undefined4 *)(param_1 + 0x2354) = *(undefined4 *)(param_1 + 0x20c8);
          *(undefined4 *)(param_1 + 0x2358) = *(undefined4 *)(param_1 + 0x20cc);
          *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
        }
        else {
          *(undefined8 *)(param_1 + 0x234cU) = *(undefined8 *)(param_1 + 0x20c0U);
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
    iVar2 = 2;
    *(uint *)(param_1 + 0x2364) = uVar7 + 4;
    break;
  case 7:
    if (*(int *)(param_1 + 0x20fc) != 1) {
      memmove((void *)(param_1 + 0x20c0),(void *)(param_1 + 0x234c),0x1c);
      *(undefined4 *)(param_1 + 0x20fc) = 1;
      *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x2090);
    }
    iVar2 = 1;
    *(uint *)(param_1 + 0x2364) = uVar7 + 4;
  }
  if (uVar6 == 0) {
    uVar6 = *(uint *)(param_1 + 9000);
    uVar7 = uVar6;
  }
  else {
    uVar6 = *(uint *)(param_1 + 9000);
    uVar7 = uVar6 | 0x20;
  }
  *(uint *)(param_1 + (iVar2 + 0x838) * 4) = uVar7;
  uVar4 = *(uint *)(&DAT_080e6688 + iVar2 * 4);
  bVar8 = *(char *)(param_1 + 0x2104) == '\x01';
  uVar7 = uVar6 & 0xffffffe0 | uVar4;
  if (bVar8) {
    uVar4 = *(uint *)(param_1 + 0x2304);
  }
  if (bVar8) {
    iVar5 = iVar5 + *(int *)(uVar4 + 8);
  }
  *(int *)(param_1 + 0x2324) = iVar5;
  *(uint *)(param_1 + 9000) = uVar7 & 0xffffffdf | 0x80;
  return;
}


