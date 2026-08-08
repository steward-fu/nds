/*
 * Ghidra decompilation
 *
 * Function : _Z8LowAsciiPKc
 * Address  : 001b4cb0
 * Program  : drastic64
 */


/* LowAscii(char const*) */

undefined8 LowAscii(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    pcVar2 = param_1 + 1;
    do {
      if (0x5f < (byte)(cVar1 - 0x20U)) {
        return 0;
      }
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return 1;
}


