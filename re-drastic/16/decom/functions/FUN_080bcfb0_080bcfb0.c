/*
 * Ghidra decompilation
 *
 * Function : FUN_080bcfb0
 * Address  : 080bcfb0
 * Program  : drastic16
 */


void FUN_080bcfb0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c [67];
  uint local_10;
  uint local_c;
  
  if (param_1 == (uint *)0x0) {
    FUN_080b7588(&local_13c,0x20);
    FUN_080b7588(local_11c,0x100);
  }
  else {
    local_11c[0] = FUN_080bd8f4(param_1[10]);
    local_11c[1] = FUN_080bd8f4(param_1[10] + 4);
    local_11c[2] = FUN_080bd8f4(param_1[10] + 8);
    local_11c[3] = FUN_080bd8f4(param_1[10] + 0xc);
    local_11c[4] = FUN_080bd8f4(param_1[10] + 0x10);
    local_11c[5] = FUN_080bd8f4(param_1[10] + 0x14);
    local_11c[6] = FUN_080bd8f4(param_1[10] + 0x18);
    local_11c[7] = FUN_080bd8f4(param_1[10] + 0x1c);
    local_11c[8] = FUN_080bd8f4(param_1[10] + 0x20);
    local_11c[9] = FUN_080bd8f4(param_1[10] + 0x24);
    local_11c[10] = FUN_080bd8f4(param_1[10] + 0x28);
    local_11c[11] = FUN_080bd8f4(param_1[10] + 0x2c);
    local_11c[12] = FUN_080bd8f4(param_1[10] + 0x30);
    local_11c[13] = FUN_080bd8f4(param_1[10] + 0x34);
    local_11c[14] = FUN_080bd8f4(param_1[10] + 0x38);
    local_11c[15] = FUN_080bd8f4(param_1[10] + 0x3c);
    for (local_c = 0x10; local_c < 0x40; local_c = local_c + 1) {
      local_11c[local_c] =
           ((local_11c[local_c - 2] >> 0x11 | local_11c[local_c - 2] << 0xf) ^
            (local_11c[local_c - 2] >> 0x13 | local_11c[local_c - 2] << 0xd) ^
           local_11c[local_c - 2] >> 10) + local_11c[local_c - 7] +
           ((local_11c[local_c - 0xf] >> 7 | local_11c[local_c - 0xf] << 0x19) ^
            (local_11c[local_c - 0xf] >> 0x12 | local_11c[local_c - 0xf] << 0xe) ^
           local_11c[local_c - 0xf] >> 3) + local_11c[local_c - 0x10];
    }
    local_13c = *param_1;
    local_138 = param_1[1];
    local_134 = param_1[2];
    local_130 = param_1[3];
    local_12c = param_1[4];
    local_128 = param_1[5];
    local_124 = param_1[6];
    local_120 = param_1[7];
    for (local_10 = 0; local_10 < 0x40; local_10 = local_10 + 1) {
      iVar2 = local_120 +
              ((local_12c >> 6 | local_12c << 0x1a) ^ (local_12c >> 0xb | local_12c << 0x15) ^
              (local_12c >> 0x19 | local_12c << 7)) +
              (local_12c & local_128 ^ ~local_12c & local_124) +
              *(int *)(&DAT_080ee0ec + local_10 * 4) + local_11c[local_10];
      local_120 = local_124;
      local_124 = local_128;
      local_128 = local_12c;
      local_12c = local_130 + iVar2;
      uVar1 = local_13c & local_138;
      uVar3 = local_13c & local_134;
      uVar4 = local_138 & local_134;
      local_130 = local_134;
      local_134 = local_138;
      local_138 = local_13c;
      local_13c = iVar2 + ((local_13c >> 2 | local_13c << 0x1e) ^
                           (local_13c >> 0xd | local_13c << 0x13) ^
                          (local_13c >> 0x16 | local_13c << 10)) + (uVar1 ^ uVar3 ^ uVar4);
    }
    *param_1 = *param_1 + local_13c;
    param_1[1] = param_1[1] + local_138;
    param_1[2] = param_1[2] + local_134;
    param_1[3] = param_1[3] + local_130;
    param_1[4] = param_1[4] + local_12c;
    param_1[5] = param_1[5] + local_128;
    param_1[6] = param_1[6] + local_124;
    param_1[7] = param_1[7] + local_120;
  }
  return;
}


