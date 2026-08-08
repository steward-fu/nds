/*
 * Ghidra decompilation
 *
 * Function : FUN_080d0760
 * Address  : 080d0760
 * Program  : drastic16
 */


undefined4 FUN_080d0760(int param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined auStack_1ed [307];
  undefined auStack_ba [64];
  undefined auStack_7a [16];
  undefined auStack_6a [46];
  undefined auStack_3c [20];
  int local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  if (*(char *)(param_3 + 0x11) == '\x01') {
    if (((*(char *)(param_2 + 2) == '\x01') || (*param_2 <= *(int *)(param_1 + 0x78) + -0x19)) ||
       (cVar2 = FUN_080ceb2c(param_1), cVar2 == '\x01')) {
      for (local_c = 0; (int)local_c < 0x14; local_c = local_c + 1) {
        uVar3 = FUN_080e2c58(param_2);
        local_20 = uVar3 >> 0xc & 0xff;
        FUN_080e2c30(param_2,4);
        if (local_20 == 0xf) {
          uVar3 = FUN_080e2c58(param_2);
          local_10 = uVar3 >> 0xc & 0xff;
          FUN_080e2c30(param_2,4);
          if (local_10 == 0) {
            auStack_3c[local_c] = 0xf;
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
              puVar6 = auStack_3c + local_c;
              local_10 = local_10 - 1;
              local_c = local_c + 1;
              *puVar6 = 0;
            }
            local_c = local_c - 1;
            local_10 = local_10 - 1;
          }
        }
        else {
          auStack_3c[local_c] = (char)local_20;
        }
      }
      FUN_080d1ce0(param_1,auStack_3c,param_4 + 0x3bb0,0x14);
      local_24 = 0x1ae;
      local_14 = 0;
      while (local_14 < 0x1ae) {
        if (((*(char *)(param_2 + 2) != '\x01') && (*(int *)(param_1 + 0x78) + -5 < *param_2)) &&
           (cVar2 = FUN_080ceb2c(param_1), cVar2 != '\x01')) {
          return 0;
        }
        local_28 = FUN_080d4ef0(param_1,param_2,param_4 + 0x3bb0);
        if (local_28 < 0x10) {
          auStack_1ed[local_14 + 1] = (char)local_28;
          local_14 = local_14 + 1;
        }
        else if (local_28 < 0x12) {
          if (local_28 == 0x10) {
            uVar3 = FUN_080e2c58(param_2);
            local_18 = (uVar3 >> 0xd) + 3;
            FUN_080e2c30(param_2,3);
          }
          else {
            uVar3 = FUN_080e2c58(param_2);
            local_18 = (uVar3 >> 9) + 0xb;
            FUN_080e2c30(param_2,7);
          }
          if (0 < local_14) {
            while( true ) {
              iVar4 = local_18;
              local_18 = local_18 + -1;
              if ((iVar4 < 1) || (0x1ad < local_14)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) break;
              auStack_1ed[local_14 + 1] = auStack_1ed[local_14];
              local_14 = local_14 + 1;
            }
          }
        }
        else {
          if (local_28 == 0x12) {
            uVar3 = FUN_080e2c58(param_2);
            local_1c = (uVar3 >> 0xd) + 3;
            FUN_080e2c30(param_2,3);
          }
          else {
            uVar3 = FUN_080e2c58(param_2);
            local_1c = (uVar3 >> 9) + 0xb;
            FUN_080e2c30(param_2,7);
          }
          while( true ) {
            iVar4 = local_1c + -1;
            if ((local_1c < 1) || (0x1ad < local_14)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            local_1c = iVar4;
            if (!bVar1) break;
            iVar4 = local_14 + 1;
            local_14 = local_14 + 1;
            auStack_1ed[iVar4] = 0;
          }
        }
      }
      if ((*(char *)(param_2 + 2) == '\x01') || (*param_2 <= *(int *)(param_1 + 0x78))) {
        FUN_080d1ce0(param_1,auStack_1ed + 1,param_4,0x132);
        FUN_080d1ce0(param_1,auStack_ba,param_4 + 0xeec,0x40);
        FUN_080d1ce0(param_1,auStack_7a,param_4 + 0x1dd8,0x10);
        FUN_080d1ce0(param_1,auStack_6a,param_4 + 0x2cc4,0x2c);
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


