/*
 * Ghidra decompilation
 *
 * Function : _Z15IsDeleteAllowedj
 * Address  : 001b9190
 * Program  : drastic64
 */


/* IsDeleteAllowed(unsigned int) */

bool IsDeleteAllowed(uint param_1)

{
  return (param_1 & 0x180) == 0x180;
}


