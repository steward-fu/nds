/*
 * Ghidra decompilation
 *
 * Function : gamecard_decrypt_secure_region
 * Address  : 0808ed9c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 gamecard_decrypt_secure_region(u32 *secure_region,u32 game_code,u32 *key_table_base)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  u32 result;
  u32 result_1;
  u32 result_2;
  uint uVar4;
  u32 temp;
  uint uVar5;
  u32 temp_1;
  u32 temp_2;
  u32 a;
  u32 a_1;
  u32 a_2;
  s32 sVar6;
  u32 b_2;
  u32 uVar7;
  uint *puVar8;
  uint *puVar9;
  u32 *puVar10;
  u32 *puVar11;
  u32 b;
  u32 b_1;
  u32 key_code [3];
  u32 key_table [1042];
  char secure_id_str [9];
  
  iVar1 = __stack_chk_guard;
  key_code[2] = game_code << 1;
  key_code[1] = game_code >> 1;
  puVar9 = key_table + 0x12;
  puVar8 = key_table + 2;
  key_code[0] = game_code;
  memcpy(key_table,key_table_base,0x1048);
  gamecard_apply_keycode(key_table,key_code);
  gamecard_apply_keycode(key_table,key_code);
  a = secure_region[1];
  puVar2 = puVar9;
  uVar7 = *secure_region;
  do {
    puVar2 = puVar2 + -1;
    uVar4 = *puVar2 ^ a;
    a = (key_table[((uVar4 << 0x10) >> 0x18) + 0x212] ^
        key_table[(uVar4 >> 0x18) + 0x12] + key_table[((uVar4 << 8) >> 0x18) + 0x112]) +
        key_table[(uVar4 & 0xff) + 0x312] ^ uVar7;
    uVar7 = uVar4;
  } while (puVar2 != puVar8);
  key_code[1] = key_code[1] << 1;
  key_code[2] = key_code[2] >> 1;
  *secure_region = a ^ key_table[1];
  secure_region[1] = uVar4 ^ key_table[0];
  gamecard_apply_keycode(key_table,key_code);
  uVar4 = secure_region[1];
  puVar2 = puVar9;
  uVar7 = *secure_region;
  do {
    puVar2 = puVar2 + -1;
    uVar5 = *puVar2 ^ uVar4;
    uVar4 = (key_table[((uVar5 << 0x10) >> 0x18) + 0x212] ^
            key_table[(uVar5 >> 0x18) + 0x12] + key_table[((uVar5 << 8) >> 0x18) + 0x112]) +
            key_table[(uVar5 & 0xff) + 0x312] ^ uVar7;
    uVar7 = uVar5;
  } while (puVar2 != puVar8);
  uVar5 = uVar5 ^ key_table[0];
  uVar4 = uVar4 ^ key_table[1];
  secure_id_str[8] = '\0';
  secure_id_str[0] = (char)uVar4;
  secure_id_str[1] = (char)(uVar4 >> 8);
  *secure_region = uVar4;
  secure_region[1] = uVar5;
  secure_id_str[3] = (char)(uVar4 >> 0x18);
  secure_id_str[2] = (char)(uVar4 >> 0x10);
  secure_id_str[4] = (char)uVar5;
  secure_id_str[5] = (char)(uVar5 >> 8);
  secure_id_str[6] = (char)(uVar5 >> 0x10);
  secure_id_str[7] = (char)(uVar5 >> 0x18);
  iVar3 = memcmp(secure_id_str,"encryObj",8);
  if (iVar3 == 0) {
    puVar10 = secure_region;
    do {
      a_2 = puVar10[3];
      uVar7 = puVar10[2];
      puVar2 = puVar9;
      do {
        puVar2 = puVar2 + -1;
        uVar4 = *puVar2 ^ a_2;
        a_2 = (key_table[((uVar4 << 0x10) >> 0x18) + 0x212] ^
              key_table[(uVar4 >> 0x18) + 0x12] + key_table[((uVar4 << 8) >> 0x18) + 0x112]) +
              key_table[(uVar4 & 0xff) + 0x312] ^ uVar7;
        uVar7 = uVar4;
      } while (puVar8 != puVar2);
      puVar11 = puVar10 + 2;
      *puVar11 = a_2 ^ key_table[1];
      puVar10[3] = uVar4 ^ key_table[0];
      puVar10 = puVar11;
    } while (puVar11 != secure_region + 0x1fe);
    *secure_region = 0xe7ffdeff;
    secure_region[1] = 0xe7ffdeff;
    sVar6 = 0;
  }
  else {
    __printf_chk(1,"ERROR: Secure area ID should contain \'encryObj\', instead contains \'%s\'\n",
                 secure_id_str);
    sVar6 = -1;
  }
  if (iVar1 == __stack_chk_guard) {
    return sVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


