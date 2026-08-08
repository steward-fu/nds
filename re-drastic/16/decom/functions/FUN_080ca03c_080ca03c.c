/*
 * Ghidra decompilation
 *
 * Function : FUN_080ca03c
 * Address  : 080ca03c
 * Program  : drastic16
 */


undefined4 FUN_080ca03c(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte abStack_435 [299];
  undefined auStack_30a [48];
  undefined auStack_2da [682];
  undefined auStack_30 [20];
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((*(int *)(param_1 + 0x78) + -0x19 < *(int *)(param_1 + 4)) &&
     (cVar2 = FUN_080ceb2c(param_1), cVar2 != '\x01')) {
    uVar5 = 0;
  }
  else {
    local_18 = FUN_080d229c(param_1 + 4);
    *(uint *)(param_1 + 0x9748) = local_18 & 0x8000;
    if ((local_18 & 0x4000) == 0) {
      memset((void *)(param_1 + 0x9344),0,0x404);
    }
    FUN_080d2234(param_1 + 4,2);
    if (*(int *)(param_1 + 0x9748) == 0) {
      local_c = 0x176;
    }
    else {
      *(uint *)(param_1 + 0x974c) = (local_18 >> 0xc & 3) + 1;
      if (*(int *)(param_1 + 0x974c) <= *(int *)(param_1 + 0x9750)) {
        *(undefined4 *)(param_1 + 0x9750) = 0;
      }
      FUN_080d2234(param_1 + 4,2);
      local_c = *(int *)(param_1 + 0x974c) * 0x101;
    }
    for (local_14 = 0; local_14 < 0x13; local_14 = local_14 + 1) {
      uVar3 = FUN_080d229c(param_1 + 4);
      auStack_30[local_14] = (char)(uVar3 >> 0xc);
      FUN_080d2234(param_1 + 4,4);
    }
    FUN_080d1ce0(param_1,auStack_30,param_1 + 0x3c44,0x13);
    local_14 = 0;
    while (local_14 < local_c) {
      if ((*(int *)(param_1 + 0x78) + -5 < *(int *)(param_1 + 4)) &&
         (cVar2 = FUN_080ceb2c(param_1), cVar2 != '\x01')) {
        return 0;
      }
      local_1c = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x3c44);
      if (local_1c < 0x10) {
        abStack_435[local_14 + 1] = *(char *)(param_1 + local_14 + 0x9344) + (char)local_1c & 0xf;
        local_14 = local_14 + 1;
      }
      else if (local_1c == 0x10) {
        uVar3 = FUN_080d229c(param_1 + 4);
        local_10 = (uVar3 >> 0xe) + 3;
        FUN_080d2234(param_1 + 4,2);
        if (0 < local_14) {
          while( true ) {
            iVar4 = local_10;
            local_10 = local_10 + -1;
            if ((iVar4 < 1) || (local_c <= local_14)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) break;
            abStack_435[local_14 + 1] = abStack_435[local_14];
            local_14 = local_14 + 1;
          }
        }
      }
      else {
        if (local_1c == 0x11) {
          uVar3 = FUN_080d229c(param_1 + 4);
          local_10 = (uVar3 >> 0xd) + 3;
          FUN_080d2234(param_1 + 4,3);
        }
        else {
          uVar3 = FUN_080d229c(param_1 + 4);
          local_10 = (uVar3 >> 9) + 0xb;
          FUN_080d2234(param_1 + 4,7);
        }
        while( true ) {
          iVar4 = local_10 + -1;
          if ((local_10 < 1) || (local_c <= local_14)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          local_10 = iVar4;
          if (!bVar1) break;
          iVar4 = local_14 + 1;
          local_14 = local_14 + 1;
          abStack_435[iVar4] = 0;
        }
      }
    }
    if (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 4)) {
      uVar5 = 1;
    }
    else {
      if (*(int *)(param_1 + 0x9748) == 0) {
        FUN_080d1ce0(param_1,abStack_435 + 1,param_1 + 0x94,0x12a);
        FUN_080d1ce0(param_1,auStack_30a,param_1 + 0xf80,0x30);
        FUN_080d1ce0(param_1,auStack_2da,param_1 + 0x2d58,0x1c);
      }
      else {
        for (local_14 = 0; local_14 < *(int *)(param_1 + 0x974c); local_14 = local_14 + 1) {
          FUN_080d1ce0(param_1,abStack_435 + local_14 * 0x101 + 1,
                       param_1 + local_14 * 0xeec + 0x5794,0x101);
        }
      }
      memcpy((void *)(param_1 + 0x9344),abStack_435 + 1,0x404);
      uVar5 = 1;
    }
  }
  return uVar5;
}


