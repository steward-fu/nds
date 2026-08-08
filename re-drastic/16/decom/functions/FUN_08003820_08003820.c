/*
 * Ghidra decompilation
 *
 * Function : FUN_08003820
 * Address  : 08003820
 * Program  : drastic16
 */


undefined4 FUN_08003820(byte **param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  *param_2 = 0;
  uVar2 = 0;
  do {
    if (param_1[1] == (byte *)0x0) {
      return 0x10;
    }
    pbVar3 = *param_1;
    param_1[1] = param_1[1] + -1;
    *param_1 = pbVar3 + 1;
    uVar1 = uVar2 & 0xff;
    uVar2 = uVar2 + 8;
    *param_2 = *param_2 | (uint)*pbVar3 << uVar1;
  } while (uVar2 != 0x20);
  return 0;
}


