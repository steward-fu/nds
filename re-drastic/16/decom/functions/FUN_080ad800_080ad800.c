/*
 * Ghidra decompilation
 *
 * Function : FUN_080ad800
 * Address  : 080ad800
 * Program  : drastic16
 */


uint FUN_080ad800(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined uVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined auStack_20a0 [32];
  wchar_t awStack_2080 [2048];
  undefined auStack_80 [4];
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  char local_62;
  byte local_61;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  int local_34;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  uint local_14;
  
  iVar1 = FUN_080af9d4(param_2);
  local_14 = iVar1 - param_3;
  uVar2 = FUN_080afa30(param_2);
  if (uVar2 <= local_14) {
    FUN_080afa58(param_2,local_14);
    while( true ) {
      uVar2 = FUN_080af9fc(param_2);
      if (uVar2 < 2) break;
      local_20 = FUN_080b497c(param_2);
      uVar2 = (uint)local_20;
      if (local_20 == 0) {
LAB_080ad950:
        bVar5 = true;
      }
      else {
        uVar2 = FUN_080af9fc(param_2);
        if (uVar2 == 0) goto LAB_080ad950;
        uVar2 = FUN_080af9fc(param_2);
        if (0 < (int)(local_20._4_4_ + (uint)(uVar2 < (uint)local_20)) !=
            (SBORROW4(-local_20._4_4_,(uint)(uVar2 < (uint)local_20)) != false)) goto LAB_080ad950;
        bVar5 = false;
      }
      if (bVar5) {
        return uVar2;
      }
      local_24 = FUN_080afa30(param_2);
      local_24 = local_24 + (uint)local_20;
      uVar6 = FUN_080b497c(param_2);
      local_30 = uVar6;
      uVar2 = FUN_080af9fc(param_2);
      local_20._4_4_ = 0;
      local_20._0_4_ = uVar2;
      uVar6 = local_30;
      lVar8 = local_48;
      if ((*(int *)(param_4 + 4) == 1) &&
         (local_34 = param_4, local_30._4_4_ == 0 && (int)local_30 == 1)) {
        *(undefined *)(param_4 + 0x1e) = 1;
        local_38 = FUN_080b497c(param_2);
        lVar7 = local_40;
        lVar8 = local_48;
        if ((local_38 & 1) != 0) {
          lVar7 = FUN_080b497c(param_2);
          lVar8 = local_48;
          if (lVar7 != 0) {
            *(longlong *)(local_34 + 0x20) = lVar7 + *(longlong *)(param_1 + 0x10e88);
          }
        }
        uVar6 = local_30;
        local_40 = lVar7;
        if ((local_38 & 2) != 0) {
          local_48 = lVar8;
          lVar8 = FUN_080b497c(param_2);
          uVar6 = local_30;
          if (lVar8 != 0) {
            *(longlong *)(local_34 + 0x30) = lVar8 + *(longlong *)(param_1 + 0x10e88);
          }
        }
      }
      local_30._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
      local_30._0_4_ = (int)uVar6;
      local_48 = lVar8;
      if (((*(int *)(param_4 + 4) == 2) || (*(int *)(param_4 + 4) == 3)) &&
         (uVar2 = (int)local_30 - 1, bVar5 = local_30._4_4_ == ((int)local_30 == 0),
         local_4c = param_4, bVar5 && uVar2 < 6 || bVar5 && uVar2 == 6)) {
        local_30 = uVar6;
        switch(uVar2) {
        case 0:
          local_50 = param_4;
          local_54 = FUN_080b497c(param_2);
          if (local_54 == 0) {
            local_58 = FUN_080b497c(param_2);
            *(bool *)(local_50 + 0x20b1) = (local_58 & 1) != 0;
            *(bool *)(local_50 + 0x20ba) = (local_58 & 2) != 0;
            uVar3 = FUN_080b46f8(param_2);
            *(undefined4 *)(local_50 + 0x20dc) = uVar3;
            if (0x18 < *(uint *)(local_50 + 0x20dc)) {
              FUN_080a8efc(param_1,local_50 + 0x20);
            }
            FUN_080b4af8(param_2,local_50 + 0x2091,0x10);
            FUN_080b4af8(param_2,local_50 + 0x20a1,0x10);
            if (*(char *)(local_50 + 0x20b1) != '\0') {
              FUN_080b4af8(param_2,local_50 + 0x20b2,8);
              FUN_080b4af8(param_2,auStack_80,4);
              FUN_080bcf08(awStack_2080);
              FUN_080bd604(awStack_2080,local_50 + 0x20b2,8);
              FUN_080bd744(awStack_2080,auStack_20a0);
              iVar1 = memcmp(auStack_80,auStack_20a0,4);
              bVar5 = iVar1 != 0;
              if (bVar5) {
                iVar1 = 0;
              }
              uVar4 = (undefined)iVar1;
              if (!bVar5) {
                uVar4 = 1;
              }
              *(undefined *)(local_50 + 0x20b1) = uVar4;
            }
            *(undefined *)(local_50 + 0x2090) = 1;
            *(undefined4 *)(local_50 + 0x208c) = 5;
            *(undefined *)(local_50 + 0x208b) = 1;
            uVar6 = local_30;
          }
          else {
            FUN_080a8efc(param_1,local_50 + 0x20);
            uVar6 = local_30;
          }
          break;
        case 1:
          local_5c = param_4;
          local_60 = FUN_080b497c(param_2);
          uVar6 = local_30;
          if (local_60 == 0) {
            *(undefined4 *)(local_5c + 0x2060) = 3;
            FUN_080b4af8(param_2,local_5c + 0x2064,0x20);
            uVar6 = local_30;
          }
          break;
        case 2:
          if ((int)(local_20._4_4_ - (uint)((uint)local_20 < 9)) < 0 ==
              (SBORROW4(local_20._4_4_,(uint)((uint)local_20 < 9)) != false)) {
            local_61 = FUN_080b497c(param_2);
            local_62 = (local_61 & 1) != 0;
            if ((local_61 & 2) != 0) {
              if ((bool)local_62) {
                iVar1 = local_4c + 0x2030;
                uVar3 = FUN_080b4810(param_2);
                FUN_080b5284(iVar1,uVar3);
              }
              else {
                iVar1 = local_4c + 0x2030;
                uVar6 = FUN_080b4914(param_2);
                uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
                FUN_080b5530(iVar1,uVar3,(int)uVar6,uVar3);
              }
            }
            if ((local_61 & 4) != 0) {
              if (local_62 == '\0') {
                iVar1 = local_4c + 0x2038;
                uVar6 = FUN_080b4914(param_2);
                uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
                FUN_080b5530(iVar1,uVar3,(int)uVar6,uVar3);
              }
              else {
                iVar1 = local_4c + 0x2038;
                uVar3 = FUN_080b4810(param_2);
                FUN_080b5284(iVar1,uVar3);
              }
            }
            uVar6 = local_30;
            if ((local_61 & 8) != 0) {
              if (local_62 == '\0') {
                iVar1 = local_4c + 0x2040;
                uVar6 = FUN_080b4914(param_2);
                uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
                FUN_080b5530(iVar1,uVar3,(int)uVar6,uVar3);
                uVar6 = local_30;
              }
              else {
                iVar1 = local_4c + 0x2040;
                uVar3 = FUN_080b4810(param_2);
                FUN_080b5284(iVar1,uVar3);
                uVar6 = local_30;
              }
            }
          }
          break;
        case 3:
          if ((int)(local_20._4_4_ - (uint)((uint)local_20 == 0)) < 0 ==
              (SBORROW4(local_20._4_4_,(uint)((uint)local_20 == 0)) != false)) {
            FUN_080b497c(param_2);
            local_68 = FUN_080b497c(param_2);
            uVar6 = local_30;
            if (local_68 != 0) {
              *(undefined *)(local_4c + 0x20e3) = 1;
              swprintf(awStack_2080,0x14,L";%u",local_68);
              FUN_080a06f0(param_1 + 0x8450,awStack_2080,0x800);
              uVar6 = local_30;
            }
          }
          break;
        case 4:
          uVar3 = FUN_080b497c(param_2);
          *(undefined4 *)(local_4c + 0x20f0) = uVar3;
          local_6c = FUN_080b497c(param_2);
          *(bool *)(local_4c + 0x40f4) = (local_6c & 1) != 0;
          local_70 = FUN_080b497c(param_2);
          awStack_2080[0]._0_1_ = 0;
          if (local_70 < 0x1fff) {
            FUN_080b4af8(param_2,awStack_2080,local_70);
            *(undefined *)((int)awStack_2080 + local_70) = 0;
          }
          FUN_080b07d4(awStack_2080,local_4c + 0x20f4,0x800);
          uVar6 = local_30;
          break;
        case 5:
          local_74 = FUN_080b497c(param_2);
          *(bool *)(local_4c + 0x40f6) = (local_74 & 4) != 0;
          *(bool *)(local_4c + 0x40f7) = (local_74 & 8) != 0;
          *(undefined *)(local_4c + 0x41f8) = 0;
          *(undefined *)(local_4c + 0x40f8) = *(undefined *)(local_4c + 0x41f8);
          if ((local_74 & 1) != 0) {
            local_78 = FUN_080b497c(param_2);
            if (0xfe < local_78) {
              local_78 = 0xff;
            }
            FUN_080b4af8(param_2,local_4c + 0x40f8,local_78);
            *(undefined *)(local_4c + local_78 + 0x40f8) = 0;
          }
          if ((local_74 & 2) != 0) {
            local_7c = FUN_080b497c(param_2);
            if (0xfe < local_7c) {
              local_7c = 0xff;
            }
            FUN_080b4af8(param_2,local_4c + 0x41f8,local_7c);
            *(undefined *)(local_4c + local_7c + 0x41f8) = 0;
          }
          if (*(char *)(local_4c + 0x40f6) != '\0') {
            uVar3 = FUN_080b497c(param_2);
            *(undefined4 *)(local_4c + 0x42f8) = uVar3;
          }
          if (*(char *)(local_4c + 0x40f7) != '\0') {
            uVar3 = FUN_080b497c(param_2);
            *(undefined4 *)(local_4c + 0x42fc) = uVar3;
          }
          *(undefined *)(local_4c + 0x40f5) = 1;
          uVar6 = local_30;
          break;
        case 6:
          FUN_080afadc(param_4 + 0x2020,(uint)local_20);
          uVar3 = FUN_080afb38(local_4c + 0x2020,0);
          FUN_080b4af8(param_2,uVar3,(uint)local_20);
          uVar6 = local_30;
        }
      }
      local_30 = uVar6;
      FUN_080afa58(param_2,local_24);
    }
  }
  return uVar2;
}


