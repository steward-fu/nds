/*
 * Ghidra decompilation
 *
 * Function : BufferOutStream_CreateVTable
 * Address  : 080c71f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void BufferOutStream_CreateVTable(CBufferOutStream *p)

{
  (p->s).Write = BufferOutStream_Write;
  return;
}


