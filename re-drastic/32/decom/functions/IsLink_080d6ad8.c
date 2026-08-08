/*
 * Ghidra decompilation
 *
 * Function : IsLink
 * Address  : 080d6ad8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsLink(uint Attr)

{
  return (Attr & 0xf000) == 0xa000;
}


