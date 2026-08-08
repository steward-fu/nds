/*
 * Ghidra decompilation
 *
 * Function : FUN_080d1ce0
 * Address  : 080d1ce0
 * Program  : drastic16
 */


uint * FUN_080d1ce0(undefined4 param_1,int param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int local_bc [16];
  int aiStack_7c [20];
  int local_2c;
  byte local_25;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  *param_3 = param_4;
  memset(local_bc,0,0x40);
  for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
    uVar2 = *(byte *)(param_2 + local_c) & 0xf;
    local_bc[uVar2] = local_bc[uVar2] + 1;
  }
  local_bc[0] = 0;
  memset(param_3 + 0x322,0,param_4 << 1);
  param_3[0x11] = 0;
  param_3[1] = 0;
  local_10 = 0;
  for (local_14 = 1; local_14 < 0x10; local_14 = local_14 + 1) {
    local_24 = local_10 + local_bc[local_14] << (0x10 - local_14 & 0xff);
    local_10 = (local_10 + local_bc[local_14]) * 2;
    param_3[local_14 + 1] = local_24;
    param_3[local_14 + 0x11] = param_3[local_14 + 0x10] + local_bc[local_14 - 1];
  }
  puVar1 = (uint *)memcpy(aiStack_7c,param_3 + 0x11,0x40);
  for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 1) {
    local_25 = *(byte *)(param_2 + local_18) & 0xf;
    if (local_25 != 0) {
      local_2c = aiStack_7c[local_25];
      *(short *)((int)param_3 + (aiStack_7c[local_25] + 0x644) * 2) = (short)local_18;
      puVar1 = (uint *)&stack0xfffffff8;
      aiStack_7c[local_25] = aiStack_7c[local_25] + 1;
    }
  }
  if ((param_4 < 0x12a) || ((299 < param_4 && (param_4 != 0x132)))) {
    param_3[0x21] = 7;
  }
  else {
    param_3[0x21] = 10;
  }
  uVar2 = param_3[0x21];
  local_1c = 1;
  for (local_20 = 0; local_20 < (uint)(1 << (uVar2 & 0xff)); local_20 = local_20 + 1) {
    uVar3 = local_20 << (0x10 - param_3[0x21] & 0xff);
    for (; (param_3[local_1c + 1] <= uVar3 && (local_1c < 0x10)); local_1c = local_1c + 1) {
    }
    *(char *)((int)param_3 + local_20 + 0x88) = (char)local_1c;
    uVar3 = param_3[local_1c + 0x11] + (uVar3 - param_3[local_1c] >> (0x10 - local_1c & 0xff));
    if (uVar3 < param_4) {
      *(undefined2 *)((int)param_3 + (local_20 + 0x244) * 2) =
           *(undefined2 *)((int)param_3 + (uVar3 + 0x644) * 2);
    }
    else {
      *(undefined2 *)((int)param_3 + (local_20 + 0x244) * 2) = 0;
    }
    puVar1 = param_3;
  }
  return puVar1;
}


