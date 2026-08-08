/*
 * Ghidra decompilation
 *
 * Function : execute_arm_load_offset_reg
 * Address  : 00126780
 * Program  : drastic64
 */


ulong execute_arm_load_offset_reg(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar1 = (uint)(param_2 >> 5) & 3;
  uVar2 = *(uint *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
  uVar4 = param_2 >> 7 & 0x1f;
  iVar3 = (int)uVar4;
  if (uVar1 == 2) {
    uVar1 = (int)uVar2 >> iVar3;
    if (iVar3 == 0) {
      uVar1 = (int)uVar2 >> 0x1f;
    }
    return (ulong)uVar1;
  }
  if (uVar1 != 3) {
    if (uVar1 != 1) {
      return (ulong)(uVar2 << uVar4);
    }
    uVar2 = uVar2 >> uVar4;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    return (ulong)uVar2;
  }
  if (iVar3 != 0) {
    return (ulong)(uVar2 >> iVar3 | uVar2 << 0x20 - iVar3);
  }
  return CONCAT44(*(uint *)(param_1 + 0x23c0) >> 0x1d,uVar2) >> 1 & 0xffffffff;
}


