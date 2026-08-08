/*
 * Ghidra decompilation
 *
 * Function : FUN_08055aa0
 * Address  : 08055aa0
 * Program  : drastic16
 */


int FUN_08055aa0(uint param_1)

{
  uint uVar1;
  
  uVar1 = ((param_1 << 0x11) >> 0x1b) << 0x10 | ((param_1 << 0x16) >> 0x1b) << 8 | param_1 & 0x1f;
  return (uVar1 + 0x1f1f1f >> 5 & 0x10101) + uVar1 * 2;
}


