/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime7GetUnixEv
 * Address  : 001c26f0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RarTime::GetUnix() */

ulong RarTime::GetUnix(void)

{
  long *in_x0;
  
  return (*in_x0 + 0xfe624e212ac18000U) / 10000000;
}


