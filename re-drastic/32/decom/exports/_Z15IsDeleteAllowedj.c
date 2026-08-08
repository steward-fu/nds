/*
 * Ghidra decompilation
 *
 * Function : _Z15IsDeleteAllowedj
 * Address  : 080d6aec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsDeleteAllowed(uint FileAttr)

{
  return (FileAttr & 0x180) == 0x180;
}


