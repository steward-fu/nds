/*
 * Ghidra decompilation
 *
 * Function : SzFreeTemp
 * Address  : 080c98fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SzFreeTemp(void *p,void *address)

{
  free(address);
  return;
}


