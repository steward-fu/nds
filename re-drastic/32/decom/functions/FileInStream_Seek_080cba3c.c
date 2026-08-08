/*
 * Ghidra decompilation
 *
 * Function : FileInStream_Seek
 * Address  : 080cba3c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable p:CFileInStream *[r0:4] conflicts with parameter, skipped. */

SRes FileInStream_Seek(void *pp,Int64 *pos,ESzSeek origin)

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
  iVar1 = fseek(*(FILE **)((int)pp + 8),*(long *)pos,moveMethod);
  res = *(int *)((int)pp + 8);
  lVar2 = ftell((FILE *)res);
  IVar3 = VectorShiftRight(CONCAT44(lVar2,lVar2),0x20);
  *pos = IVar3;
  return iVar1;
}


