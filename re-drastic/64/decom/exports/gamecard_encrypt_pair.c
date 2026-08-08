/*
 * Ghidra decompilation
 *
 * Function : gamecard_encrypt_pair
 * Address  : 0016e0d0
 * Program  : drastic64
 */


void gamecard_encrypt_pair(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar2 = param_2[1];
  puVar4 = param_1;
  uVar3 = *param_2;
  do {
    puVar5 = puVar4 + 1;
    uVar1 = uVar2 ^ *puVar4;
    uVar2 = (param_1[(uVar1 >> 0x18) + 0x12] + param_1[((ulong)(uVar1 >> 0x10) & 0xff) + 0x112] ^
            param_1[((ulong)(uVar1 >> 8) & 0xff) + 0x212]) + param_1[(ulong)(byte)uVar1 + 0x312] ^
            uVar3;
    puVar4 = puVar5;
    uVar3 = uVar1;
  } while (param_1 + 0x10 != puVar5);
  *param_2 = param_1[0x10] ^ uVar2;
  param_2[1] = param_1[0x11] ^ uVar1;
  return;
}


