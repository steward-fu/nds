/*
 * Ghidra decompilation
 *
 * Function : _Z8etoupperh
 * Address  : 001b4a00
 * Program  : drastic64
 */


/* etoupper(unsigned char) */

uint etoupper(uchar param_1)

{
  uint uVar1;
  
  if (param_1 != 0x69) {
    uVar1 = toupper((uint)param_1);
    return uVar1 & 0xff;
  }
  return 0x49;
}


