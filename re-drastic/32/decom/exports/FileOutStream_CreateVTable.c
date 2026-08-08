/*
 * Ghidra decompilation
 *
 * Function : FileOutStream_CreateVTable
 * Address  : 080cbe50
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void FileOutStream_CreateVTable(CFileOutStream *p)

{
  (p->s).Write = FileOutStream_Write;
  return;
}


