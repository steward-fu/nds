/*
 * Ghidra decompilation
 *
 * Function : FileSeqInStream_CreateVTable
 * Address  : 080cbe28
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void FileSeqInStream_CreateVTable(CFileSeqInStream *p)

{
  (p->s).Read = FileSeqInStream_Read;
  return;
}


