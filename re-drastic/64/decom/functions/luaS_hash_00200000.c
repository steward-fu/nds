/*
 * Ghidra decompilation
 *
 * Function : luaS_hash
 * Address  : 00200000
 * Program  : drastic64
 */


ulong luaS_hash(long param_1,ulong param_2,uint param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (param_2 >> 5) + 1;
  uVar3 = (ulong)(param_3 ^ (uint)param_2);
  if (uVar2 <= param_2) {
    do {
      pbVar1 = (byte *)(param_1 + -1 + param_2);
      param_2 = param_2 - uVar2;
      uVar3 = (ulong)((uint)uVar3 ^ (int)(uVar3 >> 2) + (uint)uVar3 * 0x20 + (uint)*pbVar1);
    } while (uVar2 <= param_2);
  }
  return uVar3;
}


