/*
 * Ghidra decompilation
 *
 * Function : FUN_080b1868
 * Address  : 080b1868
 * Program  : drastic16
 */


void FUN_080b1868(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = *param_2 ^ *(uint *)(param_1 + 0xfec);
  local_10 = param_2[1] ^ *(uint *)(param_1 + 0xff0);
  local_18 = param_2[3] ^ *(uint *)(param_1 + 0xff8);
  local_14 = param_2[2] ^ *(uint *)(param_1 + 0xff4);
  for (local_1c = 0; (int)local_1c < 0x20; local_1c = local_1c + 1) {
    uVar1 = (local_18 >> 0x15 | local_18 << 0xb) + local_14 ^
            *(uint *)(param_1 + ((local_1c & 3) + 0x3fa) * 4 + 4);
    uVar2 = ((local_14 >> 0xf | local_14 << 0x11) ^ local_18) +
            *(int *)(param_1 + ((local_1c & 3) + 0x3fa) * 4 + 4);
    local_18 = CONCAT13(*(undefined *)(param_1 + (uVar2 >> 0x18) + 0xeec),
                        CONCAT12(*(undefined *)(param_1 + (uVar2 >> 0x10 & 0xff) + 0xeec),
                                 CONCAT11(*(undefined *)(param_1 + (uVar2 >> 8 & 0xff) + 0xeec),
                                          *(undefined *)(param_1 + (uVar2 & 0xff) + 0xeec)))) ^
               local_10;
    local_c = local_14;
    local_10 = local_18;
    local_14 = CONCAT13(*(undefined *)(param_1 + (uVar1 >> 0x18) + 0xeec),
                        CONCAT12(*(undefined *)(param_1 + (uVar1 >> 0x10 & 0xff) + 0xeec),
                                 CONCAT11(*(undefined *)(param_1 + (uVar1 >> 8 & 0xff) + 0xeec),
                                          *(undefined *)(param_1 + (uVar1 & 0xff) + 0xeec)))) ^
               local_c;
  }
  local_14 = local_14 ^ *(uint *)(param_1 + 0xfec);
  *(char *)param_2 = (char)local_14;
  *(char *)((int)param_2 + 1) = (char)(local_14 >> 8);
  *(char *)((int)param_2 + 2) = (char)(local_14 >> 0x10);
  *(char *)((int)param_2 + 3) = (char)(local_14 >> 0x18);
  local_18 = local_18 ^ *(uint *)(param_1 + 0xff0);
  *(char *)(param_2 + 1) = (char)local_18;
  *(char *)((int)param_2 + 5) = (char)(local_18 >> 8);
  *(char *)((int)param_2 + 6) = (char)(local_18 >> 0x10);
  *(char *)((int)param_2 + 7) = (char)(local_18 >> 0x18);
  local_c = local_c ^ *(uint *)(param_1 + 0xff4);
  *(char *)(param_2 + 2) = (char)local_c;
  *(char *)((int)param_2 + 9) = (char)(local_c >> 8);
  *(char *)((int)param_2 + 10) = (char)(local_c >> 0x10);
  *(char *)((int)param_2 + 0xb) = (char)(local_c >> 0x18);
  local_10 = local_10 ^ *(uint *)(param_1 + 0xff8);
  *(char *)(param_2 + 3) = (char)local_10;
  *(char *)((int)param_2 + 0xd) = (char)(local_10 >> 8);
  *(char *)((int)param_2 + 0xe) = (char)(local_10 >> 0x10);
  *(char *)((int)param_2 + 0xf) = (char)(local_10 >> 0x18);
  FUN_080b2340(param_1,param_2);
  return;
}


