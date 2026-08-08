/*
 * Ghidra decompilation
 *
 * Function : _Z11NullToEmptyPKc
 * Address  : 001b4750
 * Program  : drastic64
 */


/* NullToEmpty(char const*) */

char * NullToEmpty(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  return pcVar1;
}


