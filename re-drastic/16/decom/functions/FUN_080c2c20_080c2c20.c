/*
 * Ghidra decompilation
 *
 * Function : FUN_080c2c20
 * Address  : 080c2c20
 * Program  : drastic16
 */


undefined4 FUN_080c2c20(int *param_1,int param_2,char param_3,int param_4)

{
  undefined uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  wchar_t awStack_4030 [2048];
  wchar_t awStack_2030 [2048];
  undefined8 local_30;
  char local_22;
  char local_21;
  int *local_20;
  int local_1c;
  int local_18;
  char local_12;
  char local_11;
  
  local_18 = FUN_080b685c(param_1);
  local_1c = FUN_0809ee40(param_1);
  if (local_1c == 3) {
    local_20 = param_1 + 0x31dc;
  }
  else {
    local_20 = param_1 + 0x210c;
  }
  if (((local_1c == 2) || (local_1c == 3)) && (*(char *)((int)local_20 + 0x2089) != '\0')) {
    local_21 = '\x01';
  }
  else {
    local_21 = '\0';
  }
  if ((param_2 == 0) || (local_21 == '\0')) goto LAB_080c2e74;
  if ((param_1[0x43a6] == 3) ||
     ((0x13 < *(byte *)((int)local_20 + 0x19) && (local_20[0x819] != -1)))) {
    local_22 = '\x01';
  }
  else {
    local_22 = '\0';
  }
  if (local_22 == '\0') {
LAB_080c2e28:
    bVar2 = false;
  }
  else {
    if (*(char *)((int)local_20 + 0x20ba) == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)local_20 + 0x20bb;
    }
    cVar3 = FUN_080bde4c(param_2 + 0x2098,local_20 + 0x818,iVar4);
    if (cVar3 == '\x01') goto LAB_080c2e28;
    bVar2 = true;
  }
  if (bVar2) {
    FUN_080a85d8(param_1 + 6,&DAT_080ee3d8,local_20 + 8,param_1 + 6);
  }
LAB_080c2e74:
  local_30 = (**(code **)(*param_1 + 0x10))(param_1);
  if (param_2 != 0) {
    lVar6 = FUN_080a4e38(param_1);
    *(longlong *)(param_2 + 0x2088) = lVar6 + *(longlong *)(param_2 + 0x2088);
  }
  FUN_080a42dc(param_1);
  wcscpy(awStack_4030,param_1 + 6);
  FUN_080a1938(awStack_4030,0x800,*(byte *)((int)param_1 + 0x10ea2) ^ 1);
  local_11 = '\0';
  local_12 = '\0';
  do {
    cVar3 = FUN_080a3dec(param_1,awStack_4030,0);
    if (cVar3 == '\x01') goto LAB_080c3144;
    if (param_2 != 0) {
      *(undefined8 *)(param_2 + 0x2090) = 0;
    }
    if (local_12 != '\x01') {
      wcscpy(awStack_2030,param_1 + 6);
      FUN_080a1938(awStack_2030,0x800,1);
      local_12 = '\x01';
      iVar4 = FUN_080a3dec(param_1,awStack_2030,0);
      if (iVar4 != 0) {
        wcscpy(awStack_4030,awStack_2030);
        goto LAB_080c3144;
      }
    }
    cVar3 = FUN_080c3500(local_18,awStack_4030,0x800);
  } while (cVar3 == '\x01');
  local_11 = '\x01';
LAB_080c3144:
  if (local_11 == '\0') {
    if (((param_4 == 0x54) || (param_4 == 0x58)) || (param_4 == 0x45)) {
      FUN_080a6080(&DAT_080ee3d8,param_1 + 6);
    }
    FUN_080a7700(param_1,1);
    cVar3 = FUN_080c38a8(local_18,awStack_4030);
    if (cVar3 == '\x01') {
      if (local_21 == '\0') {
        FUN_080a8970(param_1);
      }
      else {
        FUN_080a8a90(param_1,local_1c);
      }
      iVar4 = FUN_0809ee40(param_1);
      if (iVar4 == 2) {
        FUN_080aed38(param_1);
        (**(code **)(*param_1 + 0xc))
                  (param_1,&stack0xfffffff0,param_1[0x43a4] - param_1[0x291e],
                   param_1[0x43a5] -
                   (param_1[0x291f] + (uint)((uint)param_1[0x43a4] < (uint)param_1[0x291e])),0);
      }
      if (param_3 != '\0') {
        FUN_080a6080(&DAT_080ee3d8,param_1 + 0x2114);
        if (*(char *)(local_18 + 0xc248) != '\x01') {
          FUN_080a6080(&DAT_080ee3dc);
        }
      }
      if (param_2 != 0) {
        if (local_1c == 5) {
          *(undefined *)(param_2 + 0x2059) = 0;
        }
        else {
          uVar1 = *(undefined *)((int)local_20 + 0x2089);
          *(undefined *)(param_2 + 0x2059) = uVar1;
          FUN_080a8550(param_2,uVar1,local_20[0x812],local_20[0x813]);
        }
        *(undefined8 *)(param_2 + 0x2078) = 0;
        FUN_080bdba8(param_2 + 0x2098,local_20[0x818],*(undefined4 *)(local_18 + 0x105a0));
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    FUN_080a3dec(param_1,param_1 + 6,0);
    (**(code **)(*param_1 + 0xc))
              (param_1,*(code **)(*param_1 + 0xc),(undefined4)local_30,local_30._4_4_,0);
    uVar5 = 0;
  }
  return uVar5;
}


