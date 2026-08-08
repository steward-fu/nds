/*
 * Ghidra decompilation
 *
 * Function : IsDigit
 * Address  : 001b4a50
 * Program  : drastic64
 */


/* IsDigit(int) */

bool IsDigit(int param_1)

{
  return param_1 - 0x30U < 10;
}


