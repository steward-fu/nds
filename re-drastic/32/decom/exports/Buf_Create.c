/*
 * Ghidra decompilation
 *
 * Function : Buf_Create
 * Address  : 080c9914
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int Buf_Create(CBuf *p,size_t size,ISzAlloc *alloc)

{
  Byte *pBVar1;
  
  p->size = 0;
  if (size != 0) {
    pBVar1 = (Byte *)(*alloc->Alloc)(alloc,size);
    p->data = pBVar1;
    if (pBVar1 != (Byte *)0x0) {
      pBVar1 = (Byte *)0x1;
      p->size = size;
    }
    return (int)pBVar1;
  }
  p->data = (Byte *)0x0;
  return 1;
}


