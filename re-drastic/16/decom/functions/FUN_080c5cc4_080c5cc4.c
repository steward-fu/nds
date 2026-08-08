/*
 * Ghidra decompilation
 *
 * Function : FUN_080c5cc4
 * Address  : 080c5cc4
 * Program  : drastic16
 */


void FUN_080c5cc4(undefined4 *param_1,undefined param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined uVar7;
  undefined4 uVar8;
  int aiStack_16c [64];
  size_t local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  void *local_5c;
  int *local_58;
  int local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
  undefined local_41;
  int local_40;
  int local_3c;
  uint local_38;
  char local_31;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  char local_1a;
  char local_19;
  int local_18;
  size_t local_14;
  uint local_10;
  uint local_c;
  
  FUN_080c5a8c(param_1);
  FUN_080d1b7c(param_1,param_2);
  for (local_c = 0; local_c < (uint)(param_1[7] * 2); local_c = local_c + 1) {
    local_3c = param_1[6] + local_c * 0x4ae4;
    *(undefined *)(local_3c + 0x4ad1) = 0;
    *(undefined *)(local_3c + 0x4ad3) = 0;
  }
  iVar4 = param_1[6];
  uVar3 = param_1[0x21];
  uVar5 = param_1[0x22];
  uVar8 = param_1[0x23];
  *(undefined4 *)(iVar4 + 0x18) = param_1[0x20];
  *(undefined4 *)(iVar4 + 0x1c) = uVar3;
  *(undefined4 *)(iVar4 + 0x20) = uVar5;
  *(undefined4 *)(iVar4 + 0x24) = uVar8;
  *(undefined4 *)(iVar4 + 0x28) = param_1[0x24];
  memcpy((void *)(param_1[6] + 0x30),param_1 + 0x25,0x4a9c);
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_19 = '\0';
  local_1a = '\0';
LAB_080c657c:
  do {
    if (((local_1a == '\x01') ||
        (local_40 = FUN_080b5f2c(*param_1,param_1[8] + local_14,0x400000 - local_14 & 0xfffffff0),
        local_40 < 0)) || (local_14 = local_14 + local_40, local_14 == 0)) {
      FUN_080cece4(param_1);
      iVar4 = param_1[6] + local_10 * 0x4ae4;
      uVar3 = *(undefined4 *)(iVar4 + 0x1c);
      uVar5 = *(undefined4 *)(iVar4 + 0x20);
      uVar8 = *(undefined4 *)(iVar4 + 0x24);
      param_1[0x20] = *(undefined4 *)(iVar4 + 0x18);
      param_1[0x21] = uVar3;
      param_1[0x22] = uVar5;
      param_1[0x23] = uVar8;
      param_1[0x24] = *(undefined4 *)(iVar4 + 0x28);
      memcpy(param_1 + 0x25,(void *)(param_1[6] + local_10 * 0x4ae4 + 0x30),0x4a9c);
      return;
    }
    local_41 = 0;
    do {
      if (((int)local_14 <= local_18) || (local_1a == '\x01')) goto LAB_080c657c;
      local_48 = 0x400;
      local_20 = 0;
      local_24 = 0;
      while (local_20 < (uint)(param_1[7] * 2)) {
        local_4c = (int *)(param_1[6] + local_20 * 0x4ae4);
        local_10 = local_20;
        *local_4c = (int)param_1;
        if (*(char *)((int)local_4c + 0x4ad3) == '\0') {
          FUN_080e2c80(local_4c + 1,param_1[8] + local_18);
          FUN_080d21fc(local_4c + 1);
          local_4c[0x12b3] = local_14 - local_18;
          if (local_4c[0x12b3] == 0) break;
          *(undefined *)(local_4c + 0x12b4) = 0;
          *(undefined *)(local_4c + 5) = 0;
          *(undefined *)(local_4c + 0xb) = 0;
        }
        else {
          local_4c[0x12b3] = local_14;
        }
        iVar4 = local_40;
        if (local_40 != 0) {
          iVar4 = 0;
        }
        uVar7 = (undefined)iVar4;
        if (local_40 == 0) {
          uVar7 = 1;
        }
        *(undefined *)((int)local_4c + 0x4ad2) = uVar7;
        *(undefined *)((int)local_4c + 0x4ad3) = 0;
        local_4c[0x12b8] = local_20;
        if (*(char *)(local_4c + 5) != '\x01') {
          *(undefined *)(local_4c + 5) = 1;
          cVar2 = FUN_080d04e8(param_1,local_4c + 1,local_4c + 6);
          if (cVar2 != '\x01') {
            local_1a = '\x01';
            break;
          }
        }
        local_50 = 0x20000;
        if ((local_19 == '\0') && (local_4c[6] < 0x20001)) {
          local_24 = local_24 + 1;
        }
        else {
          *(undefined *)((int)local_4c + 0x4ad1) = 1;
          local_19 = *(char *)((int)local_4c + 0x4ad1);
        }
        local_18 = local_18 + local_4c[9] + local_4c[6];
        local_20 = local_20 + 1;
        local_54 = local_14 - local_18;
        if (((-1 < local_54) && (*(char *)(local_4c + 10) != '\0')) || (local_54 < 0x400)) break;
      }
      local_28 = 0;
      local_2c = __aeabi_uidiv(local_24,param_1[7]);
      __aeabi_uidivmod(local_24,param_1[7]);
      if (extraout_r1 != 0) {
        local_2c = local_2c + 1;
      }
      for (local_30 = 0; local_30 < local_24; local_30 = local_30 + local_2c) {
        local_58 = aiStack_16c + local_28 * 2;
        local_28 = local_28 + 1;
        *local_58 = param_1[6] + local_30 * 0x4ae4;
        uVar6 = local_24 - local_30;
        if (local_2c <= local_24 - local_30) {
          uVar6 = local_2c;
        }
        local_58[1] = uVar6;
        if (local_20 == 1) {
          FUN_080c6614(param_1,*local_58);
        }
        else {
          FUN_080d6a34(param_1[5],FUN_080c5a10,local_58);
        }
      }
      if (local_20 == 0) goto LAB_080c657c;
      FUN_080d6afc(param_1[5]);
      local_31 = '\0';
      for (local_38 = 0; local_38 < local_20; local_38 = local_38 + 1) {
        local_5c = (void *)(param_1[6] + local_38 * 0x4ae4);
        if ((((*(char *)((int)local_5c + 0x4ad1) == '\x01') ||
             (cVar2 = FUN_080c6dc0(param_1,local_5c), cVar2 == '\x01')) &&
            ((*(char *)((int)local_5c + 0x4ad1) == '\0' ||
             (cVar2 = FUN_080c719c(param_1,local_5c), cVar2 == '\x01')))) &&
           (*(char *)((int)local_5c + 0x4ad0) == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_1a = '\x01';
          break;
        }
        if (*(char *)((int)local_5c + 0x4ad3) != '\0') {
          local_60 = (*(int *)((int)local_5c + 0x10) + *(int *)((int)local_5c + 4)) - param_1[8];
          if (local_60 < (int)local_14) {
            local_31 = '\x01';
            memmove((void *)param_1[8],(void *)(param_1[8] + local_60),local_14 - local_60);
            *(int *)((int)local_5c + 0x18) =
                 *(int *)((int)local_5c + 0x18) +
                 (*(int *)((int)local_5c + 0x20) - *(int *)((int)local_5c + 4));
            *(undefined4 *)((int)local_5c + 0x24) = 0;
            *(undefined4 *)((int)local_5c + 0x20) = 0;
            *(undefined4 *)((int)local_5c + 0x10) = param_1[8];
            *(undefined4 *)((int)local_5c + 4) = 0;
            if (local_38 != 0) {
              local_64 = *(undefined4 *)(param_1[6] + 0x4ad4);
              local_68 = *(undefined4 *)(param_1[6] + 0x4adc);
              memcpy((void *)param_1[6],local_5c,0x4ae4);
              *(undefined4 *)(param_1[6] + 0x4ad4) = local_64;
              *(undefined4 *)(param_1[6] + 0x4adc) = local_68;
              *(undefined *)((int)local_5c + 0x4ad3) = 0;
            }
            local_18 = 0;
            local_14 = local_14 - local_60;
          }
          else {
            local_1a = '\x01';
          }
          break;
        }
        if (*(char *)((int)local_5c + 0x28) != '\0') {
          local_1a = '\x01';
          break;
        }
      }
      if ((local_31 != '\0') || (local_1a != '\0')) goto LAB_080c657c;
      local_6c = local_14 - local_18;
    } while (0x3ff < (int)local_6c);
    if ((int)local_6c < 0) {
      local_1a = '\x01';
    }
    else {
      if (0 < (int)local_6c) {
        memmove((void *)param_1[8],(void *)(param_1[8] + local_18),local_6c);
      }
      local_14 = local_6c;
      local_18 = 0;
    }
  } while( true );
}


