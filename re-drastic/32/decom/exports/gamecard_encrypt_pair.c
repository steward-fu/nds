/*
 * Ghidra decompilation
 *
 * Function : gamecard_encrypt_pair
 * Address  : 0808ea3c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gamecard_encrypt_pair(u32 *key_table,u32 *data)

{
  uint uVar1;
  u32 temp;
  uint uVar2;
  u32 a;
  u32 b;
  u32 uVar3;
  u32 result;
  u32 *puVar4;
  
  uVar2 = data[1];
  puVar4 = key_table + -1;
  uVar3 = *data;
  do {
    puVar4 = puVar4 + 1;
    uVar1 = *puVar4 ^ uVar2;
    uVar2 = (key_table[((uVar1 << 0x10) >> 0x18) + 0x212] ^
            key_table[(uVar1 >> 0x18) + 0x12] + key_table[((uVar1 << 8) >> 0x18) + 0x112]) +
            key_table[(uVar1 & 0xff) + 0x312] ^ uVar3;
    uVar3 = uVar1;
  } while (key_table + 0xf != puVar4);
  *data = uVar2 ^ key_table[0x10];
  data[1] = uVar1 ^ key_table[0x11];
  return;
}


