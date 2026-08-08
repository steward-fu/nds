/*
 * Ghidra decompilation
 *
 * Function : GetCRC32
 * Address  : 001c8e60
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DataHash::GetCRC32() */

uint DataHash::GetCRC32(void)

{
  int *in_x0;
  
  if (*in_x0 != 2) {
    return 0;
  }
  return ~in_x0[1];
}


