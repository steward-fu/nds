/*
 * Ghidra decompilation
 *
 * Function : ARM_Convert
 * Address  : 001eae10
 * Program  : drastic64
 */


long ARM_Convert(byte *param_1,ulong param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  param_2 = param_2 - 4;
  iVar3 = (int)param_1;
  if (param_4 == 0) {
    pbVar1 = param_1 + (param_2 & 0xfffffffffffffffc) + 4;
    do {
      if (param_1[3] == 0xeb) {
        uVar2 = ((uint)param_1[2] << 0x10 | (uint)param_1[1] << 8 | (uint)*param_1) * 4 -
                (((int)param_1 - iVar3) + param_3 + 8);
        *param_1 = (byte)(uVar2 >> 2);
        param_1[1] = (byte)(uVar2 >> 10);
        param_1[2] = (byte)(uVar2 >> 0x12);
      }
      param_1 = param_1 + 4;
    } while (pbVar1 != param_1);
  }
  else {
    pbVar1 = param_1 + (param_2 & 0xfffffffffffffffc) + 4;
    do {
      if (param_1[3] == 0xeb) {
        uVar2 = ((int)param_1 - iVar3) + param_3 + 8 +
                ((uint)param_1[1] << 8 | (uint)param_1[2] << 0x10 | (uint)*param_1) * 4;
        *param_1 = (byte)(uVar2 >> 2);
        param_1[1] = (byte)(uVar2 >> 10);
        param_1[2] = (byte)(uVar2 >> 0x12);
      }
      param_1 = param_1 + 4;
    } while (param_1 != pbVar1);
  }
  return (param_2 & 0xfffffffffffffffc) + 4;
}


