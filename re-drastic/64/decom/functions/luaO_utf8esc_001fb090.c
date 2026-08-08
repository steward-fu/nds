/*
 * Ghidra decompilation
 *
 * Function : luaO_utf8esc
 * Address  : 001fb090
 * Program  : drastic64
 */


int luaO_utf8esc(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  
  if (param_2 < 0x80) {
    *(char *)(param_1 + 7) = (char)param_2;
    return 1;
  }
  uVar2 = 0x3f;
  pbVar3 = (byte *)(param_1 + 7);
  do {
    uVar2 = uVar2 >> 1;
    iVar1 = ((int)param_1 + 9) - (int)pbVar3;
    *pbVar3 = (byte)param_2 & 0x3f | 0x80;
    param_2 = param_2 >> 6;
    pbVar3 = pbVar3 + -1;
  } while (uVar2 < param_2);
  *(byte *)(param_1 + (8 - iVar1)) = (byte)param_2 | (byte)(~(uint)uVar2 << 1);
  return iVar1;
}


