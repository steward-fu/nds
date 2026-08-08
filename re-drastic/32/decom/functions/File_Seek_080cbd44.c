/*
 * Ghidra decompilation
 *
 * Function : File_Seek
 * Address  : 080cbd44
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

WRes File_Seek(CSzFile *p,Int64 *pos,ESzSeek origin)

{
  int iVar1;
  int res;
  long lVar2;
  int moveMethod;
  Int64 IVar3;
  
  moveMethod = origin;
  if (origin != SZ_SEEK_CUR) {
    if (origin == SZ_SEEK_SET) {
      moveMethod = 0;
    }
    else if (origin != SZ_SEEK_END) {
      return 1;
    }
  }
  iVar1 = fseek((FILE *)p->file,*(long *)pos,moveMethod);
  res = (int)p->file;
  lVar2 = ftell((FILE *)res);
  IVar3 = VectorShiftRight(CONCAT44(lVar2,lVar2),0x20);
  *pos = IVar3;
  return iVar1;
}


