/*
 * Ghidra decompilation
 *
 * Function : gamecard_apply_keycode
 * Address  : 0016e1d0
 * Program  : drastic64
 */


void gamecard_apply_keycode(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 extraout_x11;
  uint *extraout_x11_00;
  undefined8 extraout_x12;
  long extraout_x12_00;
  uint *puVar7;
  
  gamecard_encrypt_pair(param_1,param_2 + 4);
  gamecard_encrypt_pair(extraout_x11,extraout_x12);
  uVar2 = 0;
  do {
    uVar3 = *(uint *)(extraout_x12_00 + (uVar2 & 1) * 4);
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    extraout_x11_00[uVar2] = extraout_x11_00[uVar2] ^ (uVar3 >> 0x10 | uVar3 << 0x10);
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x12);
  uVar3 = 0;
  uVar4 = 0;
  puVar6 = extraout_x11_00;
  puVar5 = extraout_x11_00;
  do {
    do {
      puVar7 = puVar6 + 1;
      uVar1 = uVar3 ^ *puVar6;
      uVar3 = (extraout_x11_00[(uVar1 >> 0x18) + 0x12] +
               extraout_x11_00[((ulong)(uVar1 >> 0x10) & 0xff) + 0x112] ^
              extraout_x11_00[((ulong)(uVar1 >> 8) & 0xff) + 0x212]) +
              extraout_x11_00[(ulong)(byte)uVar1 + 0x312] ^ uVar4;
      puVar6 = puVar7;
      uVar4 = uVar1;
    } while (extraout_x11_00 + 0x10 != puVar7);
    uVar4 = uVar3 ^ extraout_x11_00[0x10];
    uVar3 = uVar1 ^ extraout_x11_00[0x11];
    *puVar5 = uVar3;
    puVar5[1] = uVar4;
    puVar5 = puVar5 + 2;
    puVar6 = extraout_x11_00;
  } while (extraout_x11_00 + 0x412 != puVar5);
  return;
}


