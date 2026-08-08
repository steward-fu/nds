/*
 * Ghidra decompilation
 *
 * Function : FUN_080cd648
 * Address  : 080cd648
 * Program  : drastic16
 */


undefined4 FUN_080cd648(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  byte abStack_1d5 [300];
  undefined auStack_a9 [60];
  undefined auStack_6d [17];
  undefined auStack_5c [28];
  undefined auStack_40 [20];
  int local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  if ((*(int *)(param_1 + 0x78) + -0x19 < *(int *)(param_1 + 4)) &&
     (cVar2 = FUN_080cca98(param_1), cVar2 != '\x01')) {
    uVar5 = 0;
  }
  else {
    FUN_080e2c30(param_1 + 4,-*(int *)(param_1 + 8) & 7);
    local_20 = FUN_080e2c58(param_1 + 4);
    if ((local_20 & 0x8000) == 0) {
      *(undefined4 *)(param_1 + 0xe670) = 0;
      *(undefined4 *)(param_1 + 0x98c8) = 0;
      *(undefined4 *)(param_1 + 0x98cc) = 0;
      if ((local_20 & 0x4000) == 0) {
        memset((void *)(param_1 + 0xe4c0),0,0x1ae);
      }
      FUN_080e2c30(param_1 + 4,2);
      for (local_c = 0; (int)local_c < 0x14; local_c = local_c + 1) {
        uVar3 = FUN_080e2c58(param_1 + 4);
        local_24 = uVar3 >> 0xc & 0xff;
        FUN_080e2c30(param_1 + 4,4);
        if (local_24 == 0xf) {
          uVar3 = FUN_080e2c58(param_1 + 4);
          local_10 = uVar3 >> 0xc & 0xff;
          FUN_080e2c30(param_1 + 4,4);
          if (local_10 == 0) {
            auStack_40[local_c] = 0xf;
          }
          else {
            local_10 = local_10 + 2;
            while( true ) {
              if (((int)local_10 < 1) || (0x13 < local_c)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) break;
              puVar6 = auStack_40 + local_c;
              local_10 = local_10 - 1;
              local_c = local_c + 1;
              *puVar6 = 0;
            }
            local_c = local_c - 1;
            local_10 = local_10 - 1;
          }
        }
        else {
          auStack_40[local_c] = (char)local_24;
        }
      }
      FUN_080d1ce0(param_1,auStack_40,param_1 + 0x3c44,0x14);
      local_28 = 0x194;
      local_14 = 0;
      while (local_14 < 0x194) {
        if ((*(int *)(param_1 + 0x78) + -5 < *(int *)(param_1 + 4)) &&
           (cVar2 = FUN_080cca98(param_1), cVar2 != '\x01')) {
          return 0;
        }
        local_2c = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x3c44);
        if (local_2c < 0x10) {
          abStack_1d5[local_14 + 1] = *(char *)(param_1 + local_14 + 0xe4c0) + (char)local_2c & 0xf;
          local_14 = local_14 + 1;
        }
        else if (local_2c < 0x12) {
          if (local_2c == 0x10) {
            uVar3 = FUN_080e2c58(param_1 + 4);
            local_18 = (uVar3 >> 0xd) + 3;
            FUN_080e2c30(param_1 + 4,3);
          }
          else {
            uVar3 = FUN_080e2c58(param_1 + 4);
            local_18 = (uVar3 >> 9) + 0xb;
            FUN_080e2c30(param_1 + 4,7);
          }
          if (0 < local_14) {
            while( true ) {
              iVar4 = local_18;
              local_18 = local_18 + -1;
              if ((iVar4 < 1) || (0x193 < local_14)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) break;
              abStack_1d5[local_14 + 1] = abStack_1d5[local_14];
              local_14 = local_14 + 1;
            }
          }
        }
        else {
          if (local_2c == 0x12) {
            uVar3 = FUN_080e2c58(param_1 + 4);
            local_1c = (uVar3 >> 0xd) + 3;
            FUN_080e2c30(param_1 + 4,3);
          }
          else {
            uVar3 = FUN_080e2c58(param_1 + 4);
            local_1c = (uVar3 >> 9) + 0xb;
            FUN_080e2c30(param_1 + 4,7);
          }
          while( true ) {
            iVar4 = local_1c + -1;
            if ((local_1c < 1) || (0x193 < local_14)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            local_1c = iVar4;
            if (!bVar1) break;
            iVar4 = local_14 + 1;
            local_14 = local_14 + 1;
            abStack_1d5[iVar4] = 0;
          }
        }
      }
      *(undefined *)(param_1 + 0xe674) = 1;
      if (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 4)) {
        uVar5 = 0;
      }
      else {
        FUN_080d1ce0(param_1,abStack_1d5 + 1,param_1 + 0x94,299);
        FUN_080d1ce0(param_1,auStack_a9,param_1 + 0xf80,0x3c);
        FUN_080d1ce0(param_1,auStack_6d,param_1 + 0x1e6c,0x11);
        FUN_080d1ce0(param_1,auStack_5c,param_1 + 0x2d58,0x1c);
        memcpy((void *)(param_1 + 0xe4c0),abStack_1d5 + 1,0x1ae);
        uVar5 = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xe670) = 1;
      uVar5 = FUN_080c5418(param_1 + 0x98d0,param_1,param_1 + 0xe4bc);
    }
  }
  return uVar5;
}


