/*
 * Ghidra decompilation
 *
 * Function : FUN_0805c7d4
 * Address  : 0805c7d4
 * Program  : drastic16
 */


void FUN_0805c7d4(int param_1,ushort param_2)

{
  if ((((*(ushort *)(param_1 + 0x440) & 0x8000) != 0) && ((param_2 & 0x8000) == 0)) &&
     (((uint)*(ushort *)(param_1 + 0x440) << 0x16) >> 0x1e == 1)) {
    FUN_0805d7b8();
    *(ushort *)(param_1 + 0x440) = param_2;
    return;
  }
  *(ushort *)(param_1 + 0x440) = param_2;
  return;
}


