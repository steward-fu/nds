/*
 * Ghidra decompilation
 *
 * Function : SecToLook_CreateVTable
 * Address  : 080cc5ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SecToLook_CreateVTable(CSecToLook *p)

{
  (p->s).Read = SecToLook_Read;
  return;
}


