/*
 * Ghidra decompilation
 *
 * Function : FileInStream_CreateVTable
 * Address  : 080cbe38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void FileInStream_CreateVTable(CFileInStream *p)

{
  (p->s).Read = FileInStream_Read;
  (p->s).Seek = FileInStream_Seek;
  return;
}


