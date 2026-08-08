/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7bf0
 * Address  : 080b7bf0
 * Program  : drastic16
 */


void FUN_080b7bf0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_30 = *param_1 + -6;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  local_40 = param_2[4];
  uStack_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_34 = param_2[7];
  local_14 = 0;
  local_18 = 0;
  local_c = 0;
  while ((local_c < local_30 && (local_14 <= *param_1))) {
    for (; (local_c < local_30 && (local_18 < 4)); local_18 = local_18 + 1) {
      for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
        *(undefined *)((int)param_1 + local_1c + (local_14 * 4 + local_18) * 4 + 0x14) =
             *(undefined *)((int)&local_50 + local_1c + local_c * 4);
      }
      local_c = local_c + 1;
    }
    if (local_18 == 4) {
      local_14 = local_14 + 1;
      local_18 = 0;
    }
  }
  while (iVar2 = local_10, uVar1 = local_50, local_14 <= *param_1) {
    bVar3 = (byte)local_50 ^ (&DAT_081d1990)[*(byte *)((int)&local_50 + (local_30 + -1) * 4 + 1)];
    local_50 = CONCAT31(local_50._1_3_,bVar3);
    local_50._1_1_ = SUB41(uVar1,1);
    local_50._0_2_ =
         CONCAT11(local_50._1_1_ ^
                  (&DAT_081d1990)[*(byte *)((int)&local_50 + (local_30 + -1) * 4 + 2)],bVar3);
    local_50._2_1_ = SUB41(uVar1,2);
    local_50._3_1_ = SUB41(uVar1,3);
    local_50._0_3_ =
         CONCAT12(local_50._2_1_ ^
                  (&DAT_081d1990)[*(byte *)((int)&local_50 + (local_30 + -1) * 4 + 3)],
                  (undefined2)local_50);
    local_50 = CONCAT13(local_50._3_1_ ^ (&DAT_081d1990)[*(byte *)(&local_50 + local_30 + -1)],
                        (undefined3)local_50);
    local_10 = local_10 + 1;
    local_50 = CONCAT31(local_50._1_3_,bVar3 ^ (&DAT_081d1b90)[iVar2]);
    if (local_30 == 8) {
      for (local_c = 1; local_c < local_30 / 2; local_c = local_c + 1) {
        for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
          *(byte *)((int)&local_50 + local_24 + local_c * 4) =
               *(byte *)((int)&local_50 + local_24 + local_c * 4) ^
               *(byte *)((int)&local_50 + local_24 + (local_c + -1) * 4);
        }
      }
      *(byte *)(&local_50 + local_30 / 2) =
           *(byte *)(&local_50 + local_30 / 2) ^
           (&DAT_081d1990)[*(byte *)(&local_50 + local_30 / 2 + -1)];
      *(byte *)((int)&local_50 + (local_30 / 2) * 4 + 1) =
           *(byte *)((int)&local_50 + (local_30 / 2) * 4 + 1) ^
           (&DAT_081d1990)[*(byte *)((int)&local_50 + (local_30 / 2 + -1) * 4 + 1)];
      *(byte *)((int)&local_50 + (local_30 / 2) * 4 + 2) =
           *(byte *)((int)&local_50 + (local_30 / 2) * 4 + 2) ^
           (&DAT_081d1990)[*(byte *)((int)&local_50 + (local_30 / 2 + -1) * 4 + 2)];
      *(byte *)((int)&local_50 + (local_30 / 2) * 4 + 3) =
           *(byte *)((int)&local_50 + (local_30 / 2) * 4 + 3) ^
           (&DAT_081d1990)[*(byte *)((int)&local_50 + (local_30 / 2 + -1) * 4 + 3)];
      for (local_c = local_30 / 2 + 1; local_c < local_30; local_c = local_c + 1) {
        for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
          *(byte *)((int)&local_50 + local_28 + local_c * 4) =
               *(byte *)((int)&local_50 + local_28 + local_c * 4) ^
               *(byte *)((int)&local_50 + local_28 + (local_c + -1) * 4);
        }
      }
    }
    else {
      for (local_c = 1; local_c < local_30; local_c = local_c + 1) {
        for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
          *(byte *)((int)&local_50 + local_20 + local_c * 4) =
               *(byte *)((int)&local_50 + local_20 + local_c * 4) ^
               *(byte *)((int)&local_50 + local_20 + (local_c + -1) * 4);
        }
      }
    }
    local_c = 0;
    while ((local_c < local_30 && (local_14 <= *param_1))) {
      for (; (local_c < local_30 && (local_18 < 4)); local_18 = local_18 + 1) {
        for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
          *(undefined *)((int)param_1 + local_2c + (local_14 * 4 + local_18) * 4 + 0x14) =
               *(undefined *)((int)&local_50 + local_2c + local_c * 4);
        }
        local_c = local_c + 1;
      }
      if (local_18 == 4) {
        local_14 = local_14 + 1;
        local_18 = 0;
      }
    }
  }
  return;
}


