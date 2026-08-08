/*
 * Ghidra decompilation
 *
 * Function : _Z7IsAlphai
 * Address  : 001b4a70
 * Program  : drastic64
 */


/* IsAlpha(int) */

bool IsAlpha(int param_1)

{
  return (param_1 & 0xffffffdfU) - 0x41 < 0x1a;
}


