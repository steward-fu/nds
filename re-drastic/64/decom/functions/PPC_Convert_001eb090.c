/*
 * Ghidra decompilation
 *
 * Function : PPC_Convert
 * Address  : 001eb090
 * Program  : drastic64
 */


long PPC_Convert(byte *param_1,ulong param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  pbVar1 = param_1 + (param_2 - 4 & 0xfffffffffffffffc) + 4;
  iVar3 = (int)param_1;
  if (param_4 == 0) {
    do {
      while ((*param_1 >> 2 == 0x12 && ((param_1[3] & 3) == 1))) {
        iVar2 = ((uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                (*param_1 & 3) << 0x18 | param_1[3] & 0xfffffffc) -
                ((param_3 - iVar3) + (int)param_1);
        *param_1 = (byte)((uint)iVar2 >> 0x18) & 3 | 0x48;
        param_1[1] = (byte)((uint)iVar2 >> 0x10);
        param_1[2] = (byte)((uint)iVar2 >> 8);
        param_1[3] = (byte)iVar2 | 1;
        param_1 = param_1 + 4;
        if (pbVar1 == param_1) goto LAB_001eb13c;
      }
      param_1 = param_1 + 4;
    } while (pbVar1 != param_1);
  }
  else {
    do {
      if ((*param_1 >> 2 == 0x12) && ((param_1[3] & 3) == 1)) {
        iVar2 = ((uint)param_1[2] << 8 | (uint)param_1[1] << 0x10 |
                (*param_1 & 3) << 0x18 | param_1[3] & 0xfffffffc) + (param_3 - iVar3) + (int)param_1
        ;
        *param_1 = (byte)((uint)iVar2 >> 0x18) & 3 | 0x48;
        param_1[1] = (byte)((uint)iVar2 >> 0x10);
        param_1[2] = (byte)((uint)iVar2 >> 8);
        param_1[3] = (byte)iVar2 | 1;
      }
      param_1 = param_1 + 4;
    } while (param_1 != pbVar1);
  }
LAB_001eb13c:
  return (param_2 - 4 & 0xfffffffffffffffc) + 4;
}


