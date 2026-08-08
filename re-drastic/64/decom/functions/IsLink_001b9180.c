/*
 * Ghidra decompilation
 *
 * Function : IsLink
 * Address  : 001b9180
 * Program  : drastic64
 */


/* IsLink(unsigned int) */

bool IsLink(uint param_1)

{
  return (param_1 & 0xf000) == 0xa000;
}


