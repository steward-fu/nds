/*
 * Ghidra decompilation
 *
 * Function : gamecard_apply_keycode
 * Address  : 0808eb9c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gamecard_apply_keycode(u32 *key_table,u32 *key_code)

{
  u32 b;
  u32 uVar1;
  u32 temp_1;
  u32 result_2;
  uint uVar2;
  u32 a;
  u32 a_1;
  u32 a_2;
  u32 b_1;
  u32 *puVar3;
  u32 b_2;
  u32 *puVar4;
  u32 *puVar5;
  u32 *puVar6;
  uint uVar7;
  u32 temp;
  u32 result_1;
  u32 i;
  u32 temp_2;
  u32 result;
  uint uVar8;
  
  uVar2 = key_code[2];
  puVar4 = key_table + 0xf;
  puVar6 = key_table + -1;
  uVar1 = key_code[1];
  puVar3 = puVar6;
  do {
    puVar3 = puVar3 + 1;
    uVar7 = *puVar3 ^ uVar2;
    uVar2 = (key_table[((uVar7 << 0x10) >> 0x18) + 0x212] ^
            key_table[(uVar7 >> 0x18) + 0x12] + key_table[((uVar7 << 8) >> 0x18) + 0x112]) +
            key_table[(uVar7 & 0xff) + 0x312] ^ uVar1;
    uVar1 = uVar7;
  } while (puVar4 != puVar3);
  a_1 = uVar2 ^ key_table[0x10];
  key_code[1] = a_1;
  key_code[2] = uVar7 ^ key_table[0x11];
  b_1 = *key_code;
  puVar3 = puVar6;
  do {
    puVar3 = puVar3 + 1;
    uVar2 = *puVar3 ^ a_1;
    a_1 = (key_table[((uVar2 << 0x10) >> 0x18) + 0x212] ^
          key_table[(uVar2 >> 0x18) + 0x12] + key_table[((uVar2 << 8) >> 0x18) + 0x112]) +
          key_table[(uVar2 & 0xff) + 0x312] ^ b_1;
    b_1 = uVar2;
  } while (puVar4 != puVar3);
  i = 0;
  *key_code = a_1 ^ key_table[0x10];
  key_code[1] = uVar2 ^ key_table[0x11];
  puVar3 = key_table;
  do {
    uVar2 = i & 1;
    i = i + 1;
    uVar2 = key_code[uVar2];
    *puVar3 = (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18) ^ *puVar3;
    puVar3 = puVar3 + 1;
  } while (i != 0x12);
  uVar7 = 0;
  uVar2 = 0;
  puVar3 = puVar6;
  puVar5 = key_table;
  do {
    do {
      puVar3 = puVar3 + 1;
      uVar8 = *puVar3 ^ uVar7;
      uVar7 = (key_table[((uVar8 << 0x10) >> 0x18) + 0x212] ^
              key_table[(uVar8 >> 0x18) + 0x12] + key_table[((uVar8 << 8) >> 0x18) + 0x112]) +
              key_table[(uVar8 & 0xff) + 0x312] ^ uVar2;
      uVar2 = uVar8;
    } while (puVar4 != puVar3);
    uVar2 = key_table[0x10] ^ uVar7;
    uVar7 = uVar8 ^ key_table[0x11];
    *puVar5 = uVar7;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
    puVar3 = puVar6;
  } while (puVar5 != key_table + 0x412);
  return;
}


