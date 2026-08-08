/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_FreeProbs
 * Address  : 080cecbc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void LzmaDec_FreeProbs(CLzmaDec *p,ISzAlloc *alloc)

{
  (*alloc->Free)(alloc,p->probs);
  p->probs = (UInt16 *)0x0;
  return;
}


