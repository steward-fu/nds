/*
 * Ghidra decompilation
 *
 * Function : FUN_08059f34
 * Address  : 08059f34
 * Program  : drastic16
 */


void FUN_08059f34(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar9 = param_1 + -1;
  puVar6 = param_1 + 0xf;
  uVar2 = param_2[2];
  puVar5 = puVar9;
  uVar3 = param_2[1];
  do {
    puVar5 = puVar5 + 1;
    uVar4 = uVar2 ^ *puVar5;
    uVar2 = uVar3 ^ (param_1[(uVar4 >> 0x18) + 0x12] + param_1[((uVar4 << 8) >> 0x18) + 0x112] ^
                    param_1[((uVar4 << 0x10) >> 0x18) + 0x212]) + param_1[(uVar4 & 0xff) + 0x312];
    uVar3 = uVar4;
  } while (puVar5 != puVar6);
  uVar2 = uVar2 ^ param_1[0x10];
  param_2[1] = uVar2;
  param_2[2] = uVar4 ^ param_1[0x11];
  puVar5 = puVar9;
  uVar3 = *param_2;
  do {
    puVar5 = puVar5 + 1;
    uVar4 = uVar2 ^ *puVar5;
    uVar2 = uVar3 ^ (param_1[(uVar4 >> 0x18) + 0x12] + param_1[((uVar4 << 8) >> 0x18) + 0x112] ^
                    param_1[((uVar4 << 0x10) >> 0x18) + 0x212]) + param_1[(uVar4 & 0xff) + 0x312];
    uVar3 = uVar4;
  } while (puVar6 != puVar5);
  uVar3 = 0;
  *param_2 = uVar2 ^ param_1[0x10];
  param_2[1] = uVar4 ^ param_1[0x11];
  puVar5 = param_1;
  do {
    uVar2 = uVar3 & 1;
    uVar3 = uVar3 + 1;
    uVar2 = param_2[uVar2];
    *puVar5 = *puVar5 ^ (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                        uVar2 >> 0x18);
    puVar5 = puVar5 + 1;
  } while (uVar3 != 0x12);
  uVar2 = 0;
  uVar3 = 0;
  puVar5 = puVar9;
  puVar7 = param_1;
  do {
    do {
      puVar5 = puVar5 + 1;
      uVar4 = uVar2 ^ *puVar5;
      uVar2 = uVar3 ^ (param_1[(uVar4 >> 0x18) + 0x12] + param_1[((uVar4 << 8) >> 0x18) + 0x112] ^
                      param_1[((uVar4 << 0x10) >> 0x18) + 0x212]) + param_1[(uVar4 & 0xff) + 0x312];
      uVar3 = uVar4;
    } while (puVar6 != puVar5);
    puVar8 = puVar7 + 2;
    uVar1 = param_1[0x11];
    uVar3 = uVar2 ^ param_1[0x10];
    puVar7[1] = uVar3;
    uVar2 = uVar4 ^ uVar1;
    *puVar7 = uVar2;
    puVar5 = puVar9;
    puVar7 = puVar8;
  } while (puVar8 != param_1 + 0x412);
  return;
}


