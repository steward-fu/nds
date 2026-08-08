/*
 * Ghidra decompilation
 *
 * Function : File_GetLength
 * Address  : 080cbdb4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

WRes File_GetLength(CSzFile *p,UInt64 *length)

{
  long __off;
  long pos;
  int iVar1;
  int res;
  long lVar2;
  FILE *__stream;
  UInt64 UVar3;
  
  __off = ftell((FILE *)p->file);
  iVar1 = fseek((FILE *)p->file,0,2);
  res = (int)p->file;
  lVar2 = ftell((FILE *)res);
  __stream = (FILE *)p->file;
  UVar3 = VectorShiftRight(CONCAT44(lVar2,lVar2),0x20);
  *length = UVar3;
  fseek(__stream,__off,0);
  return iVar1;
}


