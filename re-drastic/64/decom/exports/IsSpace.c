/*
 * Ghidra decompilation
 *
 * Function : IsSpace
 * Address  : 001b4a60
 * Program  : drastic64
 */


/* IsSpace(int) */

bool IsSpace(int param_1)

{
  return param_1 == 0x20 || param_1 == 9;
}


