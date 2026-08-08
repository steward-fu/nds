/*
 * Ghidra decompilation
 *
 * Function : Buf_Free
 * Address  : 080c9970
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void Buf_Free(CBuf *p,ISzAlloc *alloc)

{
  (*alloc->Free)(alloc,p->data);
  p->data = (Byte *)0x0;
  p->size = 0;
  return;
}


