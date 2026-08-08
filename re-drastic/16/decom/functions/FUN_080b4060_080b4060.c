/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4060
 * Address  : 080b4060
 * Program  : drastic16
 */


uint FUN_080b4060(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint local_1c;
  uint local_14;
  uint *local_c;
  
  local_1c = param_3;
  local_14 = param_1;
  for (local_c = param_2; (local_1c != 0 && (((uint)local_c & 7) != 0));
      local_c = (uint *)((int)local_c + 1)) {
    local_14 = *(uint *)(&DAT_081cd97c + ((uint)*(byte *)local_c ^ local_14 & 0xff) * 4) ^
               local_14 >> 8;
    local_1c = local_1c - 1;
  }
  for (; 7 < local_1c; local_1c = local_1c - 8) {
    local_14 = local_14 ^ *local_c;
    uVar1 = local_c[1];
    local_14 = *(uint *)(&DAT_081cd97c + ((local_14 & 0xff) + 0x700) * 4) ^
               *(uint *)(&DAT_081cd97c + ((local_14 >> 8 & 0xff) + 0x600) * 4) ^
               *(uint *)(&DAT_081cd97c + ((local_14 >> 0x10 & 0xff) + 0x500) * 4) ^
               *(uint *)(&DAT_081cd97c + ((local_14 >> 0x18) + 0x400) * 4) ^
               *(uint *)(&DAT_081cd97c + ((uVar1 & 0xff) + 0x300) * 4) ^
               *(uint *)(&DAT_081cd97c + ((uVar1 >> 8 & 0xff) + 0x200) * 4) ^
               *(uint *)(&DAT_081cd97c + ((uVar1 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(&DAT_081cd97c + (uVar1 >> 0x18) * 4);
    local_c = local_c + 2;
  }
  for (; local_1c != 0; local_1c = local_1c - 1) {
    local_14 = *(uint *)(&DAT_081cd97c + ((uint)*(byte *)local_c ^ local_14 & 0xff) * 4) ^
               local_14 >> 8;
    local_c = (uint *)((int)local_c + 1);
  }
  return local_14;
}


