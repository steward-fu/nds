/*
 * Ghidra decompilation
 *
 * Function : FUN_080e3490
 * Address  : 080e3490
 * Program  : drastic16
 */


void FUN_080e3490(int param_1,int param_2)

{
  int iVar1;
  int aiStack_98 [16];
  uint local_58 [8];
  uint local_38 [8];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    iVar1 = FUN_080e4398(param_2 + local_c * 4);
    aiStack_98[local_c] = iVar1;
  }
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    local_58[local_10] = *(uint *)(*(int *)(param_1 + 0xf4) + local_10 * 4);
  }
  local_38[0] = 0x6a09e667;
  local_38[1] = 0xbb67ae85;
  local_38[2] = 0x3c6ef372;
  local_38[3] = 0xa54ff53a;
  local_38[4] = **(uint **)(param_1 + 0xf8) ^ 0x510e527f;
  local_38[5] = *(uint *)(*(int *)(param_1 + 0xf8) + 4) ^ 0x9b05688c;
  local_38[6] = **(uint **)(param_1 + 0xfc) ^ 0x1f83d9ab;
  local_38[7] = *(uint *)(*(int *)(param_1 + 0xfc) + 4) ^ 0x5be0cd19;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    local_58[0] = local_58[0] + local_58[4] + aiStack_98[(byte)(&DAT_080ef178)[local_14 * 0x10]];
    local_38[4] = FUN_080e3460(local_38[4] ^ local_58[0],0x10);
    local_38[0] = local_38[0] + local_38[4];
    local_58[4] = FUN_080e3460(local_58[4] ^ local_38[0],0xc);
    local_58[0] = local_58[0] + local_58[4] + aiStack_98[(byte)(&DAT_080ef179)[local_14 * 0x10]];
    local_38[4] = FUN_080e3460(local_38[4] ^ local_58[0],8);
    local_38[0] = local_38[0] + local_38[4];
    local_58[4] = FUN_080e3460(local_58[4] ^ local_38[0],7);
    local_58[1] = local_58[1] + local_58[5] + aiStack_98[(byte)(&DAT_080ef17a)[local_14 * 0x10]];
    local_38[5] = FUN_080e3460(local_38[5] ^ local_58[1],0x10);
    local_38[1] = local_38[1] + local_38[5];
    local_58[5] = FUN_080e3460(local_58[5] ^ local_38[1],0xc);
    local_58[1] = local_58[1] + local_58[5] + aiStack_98[(byte)(&DAT_080ef17b)[local_14 * 0x10]];
    local_38[5] = FUN_080e3460(local_38[5] ^ local_58[1],8);
    local_38[1] = local_38[1] + local_38[5];
    local_58[5] = FUN_080e3460(local_58[5] ^ local_38[1],7);
    local_58[2] = local_58[2] + local_58[6] + aiStack_98[(byte)(&DAT_080ef17c)[local_14 * 0x10]];
    local_38[6] = FUN_080e3460(local_38[6] ^ local_58[2],0x10);
    local_38[2] = local_38[2] + local_38[6];
    local_58[6] = FUN_080e3460(local_58[6] ^ local_38[2],0xc);
    local_58[2] = local_58[2] + local_58[6] + aiStack_98[(byte)(&DAT_080ef17d)[local_14 * 0x10]];
    local_38[6] = FUN_080e3460(local_38[6] ^ local_58[2],8);
    local_38[2] = local_38[2] + local_38[6];
    local_58[6] = FUN_080e3460(local_58[6] ^ local_38[2],7);
    local_58[3] = local_58[3] + local_58[7] + aiStack_98[(byte)(&DAT_080ef17e)[local_14 * 0x10]];
    local_38[7] = FUN_080e3460(local_38[7] ^ local_58[3],0x10);
    local_38[3] = local_38[3] + local_38[7];
    local_58[7] = FUN_080e3460(local_58[7] ^ local_38[3],0xc);
    local_58[3] = local_58[3] + local_58[7] + aiStack_98[(byte)(&DAT_080ef17f)[local_14 * 0x10]];
    local_38[7] = FUN_080e3460(local_38[7] ^ local_58[3],8);
    local_38[3] = local_38[3] + local_38[7];
    local_58[7] = FUN_080e3460(local_58[7] ^ local_38[3],7);
    local_58[0] = local_58[0] + local_58[5] + aiStack_98[(byte)(&DAT_080ef180)[local_14 * 0x10]];
    local_38[7] = FUN_080e3460(local_38[7] ^ local_58[0],0x10);
    local_38[2] = local_38[2] + local_38[7];
    local_58[5] = FUN_080e3460(local_58[5] ^ local_38[2],0xc);
    local_58[0] = local_58[0] + local_58[5] + aiStack_98[(byte)(&DAT_080ef181)[local_14 * 0x10]];
    local_38[7] = FUN_080e3460(local_38[7] ^ local_58[0],8);
    local_38[2] = local_38[2] + local_38[7];
    local_58[5] = FUN_080e3460(local_58[5] ^ local_38[2],7);
    local_58[1] = local_58[1] + local_58[6] + aiStack_98[(byte)(&DAT_080ef182)[local_14 * 0x10]];
    local_38[4] = FUN_080e3460(local_38[4] ^ local_58[1],0x10);
    local_38[3] = local_38[3] + local_38[4];
    local_58[6] = FUN_080e3460(local_58[6] ^ local_38[3],0xc);
    local_58[1] = local_58[1] + local_58[6] + aiStack_98[(byte)(&DAT_080ef183)[local_14 * 0x10]];
    local_38[4] = FUN_080e3460(local_38[4] ^ local_58[1],8);
    local_38[3] = local_38[3] + local_38[4];
    local_58[6] = FUN_080e3460(local_58[6] ^ local_38[3],7);
    local_58[2] = local_58[2] + local_58[7] + aiStack_98[(byte)(&DAT_080ef184)[local_14 * 0x10]];
    local_38[5] = FUN_080e3460(local_38[5] ^ local_58[2],0x10);
    local_38[0] = local_38[0] + local_38[5];
    local_58[7] = FUN_080e3460(local_58[7] ^ local_38[0],0xc);
    local_58[2] = local_58[2] + local_58[7] + aiStack_98[(byte)(&DAT_080ef185)[local_14 * 0x10]];
    local_38[5] = FUN_080e3460(local_38[5] ^ local_58[2],8);
    local_38[0] = local_38[0] + local_38[5];
    local_58[7] = FUN_080e3460(local_58[7] ^ local_38[0],7);
    local_58[3] = local_58[3] + local_58[4] + aiStack_98[(byte)(&DAT_080ef186)[local_14 * 0x10]];
    local_38[6] = FUN_080e3460(local_38[6] ^ local_58[3],0x10);
    local_38[1] = local_38[1] + local_38[6];
    local_58[4] = FUN_080e3460(local_58[4] ^ local_38[1],0xc);
    local_58[3] = local_58[3] + local_58[4] + aiStack_98[(byte)(&DAT_080ef187)[local_14 * 0x10]];
    local_38[6] = FUN_080e3460(local_38[6] ^ local_58[3],8);
    local_38[1] = local_38[1] + local_38[6];
    local_58[4] = FUN_080e3460(local_58[4] ^ local_38[1],7);
  }
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    *(uint *)(*(int *)(param_1 + 0xf4) + local_18 * 4) =
         *(uint *)(*(int *)(param_1 + 0xf4) + local_18 * 4) ^ local_58[local_18] ^
         local_58[local_18 + 8];
  }
  return;
}


