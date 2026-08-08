/*
 * Ghidra decompilation
 *
 * Function : IsDir
 * Address  : 001b9150
 * Program  : drastic64
 */


/* IsDir(unsigned int) */

bool IsDir(uint param_1)

{
  return (param_1 & 0xf000) == 0x4000;
}


