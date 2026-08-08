/*
 * Ghidra decompilation
 *
 * Function : FUN_080b2d54
 * Address  : 080b2d54
 * Program  : drastic16
 */


void FUN_080b2d54(undefined4 param_1,undefined4 param_2,void *param_3,uint param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,int param_8)

{
  uint __n;
  undefined4 *puVar1;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined auStack_74 [68];
  uint local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_18 = 0x40;
  __n = param_4;
  if (0x3f < param_4) {
    __n = 0x40;
  }
  memcpy(auStack_74,param_3,__n);
  auStack_74[param_4] = 0;
  auStack_74[param_4 + 1] = 0;
  auStack_74[param_4 + 2] = 0;
  auStack_74[param_4 + 3] = 1;
  FUN_080b2af4(param_1,param_2,auStack_74,param_4 + 4,&local_d4);
  local_b4 = local_d4;
  uStack_b0 = uStack_d0;
  uStack_ac = uStack_cc;
  uStack_a8 = uStack_c8;
  local_a4 = local_c4;
  uStack_a0 = uStack_c0;
  uStack_9c = uStack_bc;
  uStack_98 = uStack_b8;
  local_20 = 0x10;
  local_1c = 0x10;
  local_30[3] = param_8 + -1;
  local_30[0] = param_5;
  local_30[1] = param_6;
  local_30[2] = param_7;
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < local_30[local_c + 3]; local_10 = local_10 + 1) {
      FUN_080b2af4(param_1,param_2,&local_d4,0x20,&local_94);
      local_d4 = local_94;
      uStack_d0 = uStack_90;
      uStack_cc = uStack_8c;
      uStack_c8 = uStack_88;
      local_c4 = local_84;
      uStack_c0 = uStack_80;
      uStack_bc = uStack_7c;
      uStack_b8 = uStack_78;
      for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
        *(byte *)((int)&local_b4 + local_14) =
             *(byte *)((int)&local_b4 + local_14) ^ *(byte *)((int)&local_d4 + local_14);
      }
    }
    puVar1 = (undefined4 *)local_30[local_c];
    *puVar1 = local_b4;
    puVar1[1] = uStack_b0;
    puVar1[2] = uStack_ac;
    puVar1[3] = uStack_a8;
    puVar1[4] = local_a4;
    puVar1[5] = uStack_a0;
    puVar1[6] = uStack_9c;
    puVar1[7] = uStack_98;
  }
  FUN_080b7588(auStack_74,0x44);
  FUN_080b7588(&local_b4,0x20);
  FUN_080b7588(&local_d4,0x20);
  FUN_080b7588(&local_94,0x20);
  return;
}


