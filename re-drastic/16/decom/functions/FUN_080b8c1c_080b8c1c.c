/*
 * Ghidra decompilation
 *
 * Function : FUN_080b8c1c
 * Address  : 080b8c1c
 * Program  : drastic16
 */


void FUN_080b8c1c(void)

{
  int iVar1;
  undefined uVar2;
  uint uVar3;
  byte abStack_328 [256];
  undefined auStack_228 [25];
  undefined auStack_20f [79];
  undefined auStack_1c0 [95];
  undefined auStack_161 [24];
  undefined auStack_149 [15];
  undefined auStack_13a [17];
  byte abStack_129 [260];
  byte local_25;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 1;
  do {
    auStack_228[local_14] = (char)local_18;
    abStack_129[local_14] = (byte)local_18;
    iVar1 = local_14;
    local_14 = local_14 + 1;
    abStack_328[local_18] = (byte)iVar1;
    if ((local_18 & 0x80) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x11b;
    }
    local_18 = local_18 ^ local_18 << 1 ^ uVar3;
  } while (local_18 != 1);
  local_20 = 1;
  for (local_1c = 0; local_1c < 0x1e; local_1c = local_1c + 1) {
    (&DAT_081d1b90)[local_1c] = (char)local_20;
    if ((local_20 & 0x80) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x11b;
    }
    local_20 = local_20 << 1 ^ uVar3;
  }
  for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
    if ((local_24 & 0xff) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = (uint)abStack_129[-(uint)abStack_328[local_24 & 0xff]];
    }
    uVar3 = local_18 << 1 ^ local_18 << 2 ^ local_18 << 3 ^ local_18 << 4;
    local_18 = local_18 ^ uVar3;
    (&DAT_081d1990)[local_24] = (byte)(uVar3 >> 8) ^ (byte)local_18 ^ 99;
    local_25 = (&DAT_081d1990)[local_24];
    (&DAT_081d27b1)[local_24 * 4] = local_25;
    (&DAT_081d27b0)[local_24 * 4] = (&DAT_081d27b1)[local_24 * 4];
    (&DAT_081d23b3)[local_24 * 4] = (&DAT_081d27b0)[local_24 * 4];
    (&DAT_081d23b0)[local_24 * 4] = (&DAT_081d23b3)[local_24 * 4];
    (&DAT_081d1fb3)[local_24 * 4] = (&DAT_081d23b0)[local_24 * 4];
    (&DAT_081d1fb2)[local_24 * 4] = (&DAT_081d1fb3)[local_24 * 4];
    (&DAT_081d1bb2)[local_24 * 4] = (&DAT_081d1fb2)[local_24 * 4];
    (&DAT_081d1bb1)[local_24 * 4] = (&DAT_081d1bb2)[local_24 * 4];
    if (local_25 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = auStack_20f[abStack_328[local_25]];
    }
    (&DAT_081d27b3)[local_24 * 4] = uVar2;
    (&DAT_081d23b2)[local_24 * 4] = (&DAT_081d27b3)[local_24 * 4];
    (&DAT_081d1fb1)[local_24 * 4] = (&DAT_081d23b2)[local_24 * 4];
    (&DAT_081d1bb0)[local_24 * 4] = (&DAT_081d1fb1)[local_24 * 4];
    if (local_25 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = auStack_228[abStack_328[local_25] + 1];
    }
    (&DAT_081d27b2)[local_24 * 4] = uVar2;
    (&DAT_081d23b1)[local_24 * 4] = (&DAT_081d27b2)[local_24 * 4];
    (&DAT_081d1fb0)[local_24 * 4] = (&DAT_081d23b1)[local_24 * 4];
    (&DAT_081d1bb3)[local_24 * 4] = (&DAT_081d1fb0)[local_24 * 4];
    uVar3 = local_24 & 0xff;
    local_18 = uVar3 << 1 ^ uVar3 << 3 ^ uVar3 << 6;
    if ((byte)((byte)(local_18 >> 8) ^ (byte)local_18) == 5) {
      local_25 = 0;
    }
    else {
      uVar3 = local_24 & 0xff;
      local_18 = uVar3 << 1 ^ uVar3 << 3 ^ uVar3 << 6;
      local_25 = abStack_129[-(uint)abStack_328[(int)local_18 >> 8 ^ local_18 & 0xff ^ 5]];
    }
    (&DAT_081d1a90)[local_24] = local_25;
    if (local_25 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = auStack_1c0[abStack_328[local_25]];
    }
    (&DAT_081d37b2)[local_24 * 4] = uVar2;
    (&DAT_081d33b1)[local_24 * 4] = (&DAT_081d37b2)[local_24 * 4];
    (&DAT_081d2fb0)[local_24 * 4] = (&DAT_081d33b1)[local_24 * 4];
    (&DAT_081d2bb3)[local_24 * 4] = (&DAT_081d2fb0)[local_24 * 4];
    (&DAT_081d47b2)[(uint)local_25 * 4] = (&DAT_081d2bb3)[local_24 * 4];
    (&DAT_081d43b1)[(uint)local_25 * 4] = (&DAT_081d47b2)[(uint)local_25 * 4];
    (&DAT_081d3fb0)[(uint)local_25 * 4] = (&DAT_081d43b1)[(uint)local_25 * 4];
    (&DAT_081d3bb3)[(uint)local_25 * 4] = (&DAT_081d3fb0)[(uint)local_25 * 4];
    if (local_25 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = auStack_161[abStack_328[local_25]];
    }
    (&DAT_081d37b0)[local_24 * 4] = uVar2;
    (&DAT_081d33b3)[local_24 * 4] = (&DAT_081d37b0)[local_24 * 4];
    (&DAT_081d2fb2)[local_24 * 4] = (&DAT_081d33b3)[local_24 * 4];
    (&DAT_081d2bb1)[local_24 * 4] = (&DAT_081d2fb2)[local_24 * 4];
    (&DAT_081d47b0)[(uint)local_25 * 4] = (&DAT_081d2bb1)[local_24 * 4];
    (&DAT_081d43b3)[(uint)local_25 * 4] = (&DAT_081d47b0)[(uint)local_25 * 4];
    (&DAT_081d3fb2)[(uint)local_25 * 4] = (&DAT_081d43b3)[(uint)local_25 * 4];
    (&DAT_081d3bb1)[(uint)local_25 * 4] = (&DAT_081d3fb2)[(uint)local_25 * 4];
    if (local_25 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = auStack_13a[abStack_328[local_25]];
    }
    (&DAT_081d37b1)[local_24 * 4] = uVar2;
    (&DAT_081d33b0)[local_24 * 4] = (&DAT_081d37b1)[local_24 * 4];
    (&DAT_081d2fb3)[local_24 * 4] = (&DAT_081d33b0)[local_24 * 4];
    (&DAT_081d2bb2)[local_24 * 4] = (&DAT_081d2fb3)[local_24 * 4];
    (&DAT_081d47b1)[(uint)local_25 * 4] = (&DAT_081d2bb2)[local_24 * 4];
    (&DAT_081d43b0)[(uint)local_25 * 4] = (&DAT_081d47b1)[(uint)local_25 * 4];
    (&DAT_081d3fb3)[(uint)local_25 * 4] = (&DAT_081d43b0)[(uint)local_25 * 4];
    (&DAT_081d3bb2)[(uint)local_25 * 4] = (&DAT_081d3fb3)[(uint)local_25 * 4];
    if (local_25 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = auStack_149[abStack_328[local_25]];
    }
    (&DAT_081d37b3)[local_24 * 4] = uVar2;
    (&DAT_081d33b2)[local_24 * 4] = (&DAT_081d37b3)[local_24 * 4];
    (&DAT_081d2fb1)[local_24 * 4] = (&DAT_081d33b2)[local_24 * 4];
    (&DAT_081d2bb0)[local_24 * 4] = (&DAT_081d2fb1)[local_24 * 4];
    (&DAT_081d47b3)[(uint)local_25 * 4] = (&DAT_081d2bb0)[local_24 * 4];
    (&DAT_081d43b2)[(uint)local_25 * 4] = (&DAT_081d47b3)[(uint)local_25 * 4];
    (&DAT_081d3fb1)[(uint)local_25 * 4] = (&DAT_081d43b2)[(uint)local_25 * 4];
    (&DAT_081d3bb0)[(uint)local_25 * 4] = (&DAT_081d3fb1)[(uint)local_25 * 4];
  }
  return;
}


