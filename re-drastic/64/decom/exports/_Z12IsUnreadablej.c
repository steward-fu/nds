/*
 * Ghidra decompilation
 *
 * Function : _Z12IsUnreadablej
 * Address  : 001b9160
 * Program  : drastic64
 */


/* IsUnreadable(unsigned int) */

bool IsUnreadable(uint param_1)

{
  return (param_1 & 0xf000) == 0xc000 || ((param_1 & 0xf000) - 0x1000 & 0xffffefff) == 0;
}


