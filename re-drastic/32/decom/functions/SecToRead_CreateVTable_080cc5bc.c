/*
 * Ghidra decompilation
 *
 * Function : SecToRead_CreateVTable
 * Address  : 080cc5bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SecToRead_CreateVTable(CSecToRead *p)

{
  (p->s).Read = SecToRead_Read;
  return;
}


