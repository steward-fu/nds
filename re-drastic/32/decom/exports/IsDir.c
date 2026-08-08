/*
 * Ghidra decompilation
 *
 * Function : IsDir
 * Address  : 080d6aa4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsDir(uint Attr)

{
  return (Attr & 0xf000) == 0x4000;
}


