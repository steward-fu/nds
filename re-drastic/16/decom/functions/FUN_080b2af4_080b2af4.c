/*
 * Ghidra decompilation
 *
 * Function : FUN_080b2af4
 * Address  : 080b2af4
 * Program  : drastic16
 */


void FUN_080b2af4(undefined *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint local_1f8;
  undefined *local_1f4;
  undefined auStack_1f0 [32];
  undefined auStack_1d0 [32];
  byte abStack_1b0 [64];
  undefined auStack_170 [112];
  undefined auStack_100 [112];
  undefined auStack_90 [116];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_1c = 0x40;
  local_1f8 = param_2;
  local_1f4 = param_1;
  if (0x40 < param_2) {
    FUN_080bcf08(auStack_170);
    FUN_080bd604(auStack_170,param_1,param_2);
    FUN_080bd744(auStack_170,auStack_1f0);
    local_1f4 = auStack_1f0;
    local_1f8 = 0x20;
  }
  for (local_c = 0; local_c < local_1f8; local_c = local_c + 1) {
    abStack_1b0[local_c] = local_1f4[local_c] ^ 0x36;
  }
  for (local_10 = local_1f8; local_10 < 0x40; local_10 = local_10 + 1) {
    abStack_1b0[local_10] = 0x36;
  }
  FUN_080bcf08(auStack_100);
  FUN_080bd604(auStack_100,abStack_1b0,0x40);
  FUN_080bd604(auStack_100,param_3,param_4);
  FUN_080bd744(auStack_100,auStack_1d0);
  FUN_080bcf08(auStack_90);
  for (local_14 = 0; local_14 < local_1f8; local_14 = local_14 + 1) {
    abStack_1b0[local_14] = local_1f4[local_14] ^ 0x5c;
  }
  for (local_18 = local_1f8; local_18 < 0x40; local_18 = local_18 + 1) {
    abStack_1b0[local_18] = 0x5c;
  }
  FUN_080bd604(auStack_90,abStack_1b0,0x40);
  FUN_080bd604(auStack_90,auStack_1d0,0x20);
  FUN_080bd744(auStack_90,param_5);
  return;
}


