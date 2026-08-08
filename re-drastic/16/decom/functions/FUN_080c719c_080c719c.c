/*
 * Ghidra decompilation
 *
 * Function : FUN_080c719c
 * Address  : 080c719c
 * Program  : drastic16
 */


undefined4 FUN_080c719c(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined auStack_58 [24];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  if (*(char *)(param_2 + 0x2c) != '\x01') {
    *(undefined *)(param_2 + 0x2c) = 1;
    cVar1 = FUN_080d0760(param_1,param_2 + 4,param_2 + 0x18,param_2 + 0x30);
    if (cVar1 != '\x01') {
      *(undefined *)(param_2 + 0x4ad0) = 1;
      return 0;
    }
  }
  if (*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x18) < *(int *)(param_2 + 4)) {
    *(undefined *)(param_2 + 0x4ad0) = 1;
    uVar4 = 0;
  }
  else {
    local_1c = *(int *)(param_2 + 0x20) + *(int *)(param_2 + 0x18) + -1;
    local_20 = *(int *)(param_2 + 0x4acc) + -0x10;
    local_24 = local_20;
    if (local_1c < local_20) {
      local_24 = local_1c;
    }
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8);
            if (local_24 <= *(int *)(param_2 + 4)) {
              if ((local_1c < *(int *)(param_2 + 4)) ||
                 ((*(int *)(param_2 + 4) == local_1c &&
                  (*(int *)(param_2 + 0x1c) <= *(int *)(param_2 + 8))))) goto LAB_080c786c;
              if (((local_20 <= *(int *)(param_2 + 4)) && (*(char *)(param_2 + 0x4ad2) != '\x01'))
                 || (*(int *)(param_2 + 0x4acc) <= *(int *)(param_2 + 4))) {
                *(undefined *)(param_2 + 0x4ad3) = 1;
                goto LAB_080c786c;
              }
            }
            if (((*(int *)(param_1 + 0x4b30) - *(int *)(param_1 + 0x70) &
                 *(uint *)(param_1 + 0xe6f8)) < 0x1004) &&
               (*(int *)(param_1 + 0x4b30) != *(int *)(param_1 + 0x70))) {
              FUN_080cece4(param_1);
              iVar5 = *(int *)(param_1 + 0x4c54);
              iVar3 = *(int *)(param_1 + 0x4c44);
              bVar6 = *(uint *)(param_1 + 0x4c40) < *(uint *)(param_1 + 0x4c50);
              if ((int)(iVar3 - (iVar5 + (uint)bVar6)) < 0 !=
                  (SBORROW4(iVar3,iVar5) != SBORROW4(iVar3 - iVar5,(uint)bVar6))) {
                return 0;
              }
            }
            local_28 = FUN_080d4ef0(param_1,param_2 + 4,param_2 + 0x30);
            if (0xff < local_28) break;
            iVar3 = *(int *)(param_1 + 0x70);
            *(int *)(param_1 + 0x70) = iVar3 + 1;
            *(char *)(*(int *)(param_1 + 0x4b34) + iVar3) = (char)local_28;
          }
          if (local_28 < 0x106) break;
          local_c = FUN_080d50c8(param_1,param_2 + 4,local_28 - 0x106);
          local_14 = 1;
          local_2c = FUN_080d4ef0(param_1,param_2 + 4,param_2 + 0xf1c);
          if (local_2c < 4) {
            local_10 = 0;
            uVar2 = local_2c;
          }
          else {
            local_10 = (local_2c >> 1) - 1;
            uVar2 = (local_2c & 1 | 2) << (local_10 & 0xff);
          }
          local_14 = local_14 + uVar2;
          if (local_10 != 0) {
            if (local_10 < 4) {
              uVar2 = FUN_080d2350(param_2 + 4);
              local_14 = local_14 + (uVar2 >> (0x20 - local_10 & 0xff));
              FUN_080d2234(param_2 + 4,local_10);
            }
            else {
              if (4 < local_10) {
                uVar2 = FUN_080d2350(param_2 + 4);
                local_14 = local_14 + (uVar2 >> (0x24 - local_10 & 0xff)) * 0x10;
                FUN_080d2234(param_2 + 4,local_10 - 4);
              }
              local_30 = FUN_080d4ef0(param_1,param_2 + 4,param_2 + 0x1e08);
              local_14 = local_14 + local_30;
            }
          }
          iVar3 = local_c;
          if (((0x100 < local_14) && (iVar3 = local_c + 1, 0x2000 < local_14)) &&
             (iVar3 = local_c + 2, 0x40000 < local_14)) {
            iVar3 = local_c + 3;
          }
          local_c = iVar3;
          FUN_080d4b84(param_1,local_14);
          *(int *)(param_1 + 0x68) = local_c;
          FUN_080d4be0(param_1,local_c,local_14);
        }
        if (local_28 == 0x100) break;
        if (local_28 == 0x101) {
          if (*(int *)(param_1 + 0x68) != 0) {
            FUN_080d4be0(param_1,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x54));
          }
        }
        else if (local_28 < 0x106) {
          local_38 = *(undefined4 *)(param_1 + (local_28 - 0xee) * 4 + 4);
          local_34 = local_28 - 0x102;
          for (local_18 = local_34; local_18 != 0; local_18 = local_18 + -1) {
            *(undefined4 *)(param_1 + (local_18 + 0x14) * 4 + 4) =
                 *(undefined4 *)(param_1 + (local_18 + 0x13) * 4 + 4);
          }
          *(undefined4 *)(param_1 + 0x54) = local_38;
          local_3c = FUN_080d4ef0(param_1,param_2 + 4,param_2 + 0x2cf4);
          local_40 = FUN_080d50c8(param_1,param_2 + 4,local_3c);
          *(undefined4 *)(param_1 + 0x68) = local_40;
          FUN_080d4be0(param_1,local_40,local_38);
        }
      }
      cVar1 = FUN_080ce88c(param_1,param_2 + 4,auStack_58);
      if ((cVar1 == '\x01') && (cVar1 = FUN_080cea1c(param_1,auStack_58), cVar1 == '\x01')) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
    } while (!bVar6);
LAB_080c786c:
    uVar4 = 1;
  }
  return uVar4;
}


