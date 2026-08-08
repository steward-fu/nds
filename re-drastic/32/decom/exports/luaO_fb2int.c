/*
 * Ghidra decompilation
 *
 * Function : luaO_fb2int
 * Address  : 0811899c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaO_fb2int(int x)

{
  uint uVar1;
  int e;
  
  uVar1 = (uint)(x << 0x18) >> 0x1b;
  if (uVar1 != 0) {
    x = (x & 7U) + 8 << (uVar1 - 1 & 0xff);
  }
  return x;
}


