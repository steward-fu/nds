/*
 * Ghidra decompilation
 *
 * Function : LzmaProps_Decode
 * Address  : 001b1b50
 * Program  : drastic64
 */


undefined8 LzmaProps_Decode(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  
  if (4 < param_3) {
    uVar1 = *(uint *)(param_2 + 1);
    if (uVar1 < 0x1000) {
      uVar1 = 0x1000;
    }
    param_1[3] = uVar1;
    bVar2 = *param_2;
    if (bVar2 < 0xe1) {
      uVar3 = (ulong)bVar2 / 9;
      *param_1 = (uint)bVar2 - (bVar2 / 9 + (bVar2 / 9) * 8) & 0xff;
      param_1[2] = (uint)(uVar3 / 5);
      param_1[1] = bVar2 / 9 -
                   ((int)(uVar3 / 5) + ((uint)(uVar3 * 0xcccccccd >> 0x20) & 0xfffffffc)) & 0xff;
      return 0;
    }
  }
  return 4;
}


