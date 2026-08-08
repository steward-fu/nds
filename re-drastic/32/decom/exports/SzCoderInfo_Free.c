/*
 * Ghidra decompilation
 *
 * Function : SzCoderInfo_Free
 * Address  : 080c9e44
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SzCoderInfo_Free(CSzCoderInfo *p,ISzAlloc *alloc)

{
  Buf_Free(&p->Props,alloc);
  Buf_Init(&p->Props);
  return;
}


