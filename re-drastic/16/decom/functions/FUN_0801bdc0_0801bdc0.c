/*
 * Ghidra decompilation
 *
 * Function : FUN_0801bdc0
 * Address  : 0801bdc0
 * Program  : drastic16
 */


void FUN_0801bdc0(int param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x2100) != 0) {
    uVar4 = *(uint *)(param_1 + 9000);
    cVar1 = *(char *)(param_1 + 0x2105);
    *(undefined *)(param_1 + 0x2105) = 0;
    *(undefined4 *)(param_1 + 0x237c) = 0;
    if ((uVar4 & 0x80) == 0) {
      uVar3 = *(uint *)(param_1 + 0x2324);
      uVar6 = uVar3 & 1;
      if (uVar6 != 0) {
        uVar3 = uVar3 & 0xfffffffe;
        *(uint *)(param_1 + 0x2324) = uVar3;
        uVar6 = 1;
      }
      iVar5 = *(int *)(param_1 + 0x20fc);
      if (iVar5 != 2) {
        *(undefined8 *)(param_1 + (iVar5 + 0x411) * 8) = *(undefined8 *)(param_1 + 0x2360);
        if (iVar5 == 1) {
          if ((undefined8 *)(param_1 + 0x20c0U) < (undefined8 *)(param_1 + 0x235cU) &&
              (undefined8 *)(param_1 + 0x234cU) < (undefined8 *)(param_1 + 0x20d0U)) {
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
      *(uint *)(param_1 + 0x2364) = uVar3 + 4;
      if (uVar6 == 0) {
        *(uint *)(param_1 + 0x20e8) = uVar4;
      }
      else {
        *(uint *)(param_1 + 0x20e8) = uVar4 | 0x20;
      }
      cVar2 = *(char *)(param_1 + 0x2104);
      if (cVar2 == '\x01') {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2304) + 8) + 0x18;
      }
      else {
        iVar5 = 0x18;
      }
      *(int *)(param_1 + 0x2324) = iVar5;
      *(uint *)(param_1 + 9000) = uVar4 & 0xffffffc0 | 0x92;
    }
    else {
      cVar2 = *(char *)(param_1 + 0x2104);
    }
    if ((cVar2 == '\0') && (cVar1 != '\0')) {
      if (cVar1 != '\x01') {
        *(byte *)(*(int *)(param_1 + 0x2378) + 0x2105) =
             *(byte *)(*(int *)(param_1 + 0x2378) + 0x2105) & 0xfd;
      }
      FUN_0801464c(*(undefined4 *)(param_1 + 0x2308),0);
      return;
    }
  }
  return;
}


