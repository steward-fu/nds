/*
 * Ghidra decompilation
 *
 * Function : FUN_08055b14
 * Address  : 08055b14
 * Program  : drastic16
 */


uint FUN_08055b14(uint param_1)

{
  uint uVar1;
  
  uVar1 = ((param_1 << 0x11) >> 0x1b) << 0x10 | ((param_1 << 0x16) >> 0x1b) << 8 | param_1 & 0x1f;
  return (uVar1 + 0x1f1f1f >> 5 & 0x10101) + uVar1 * 2 | (param_1 >> 0xf) * 0x1f000000;
}


