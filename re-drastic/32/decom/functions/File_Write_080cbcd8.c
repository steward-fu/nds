/*
 * Ghidra decompilation
 *
 * Function : File_Write
 * Address  : 080cbcd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

WRes File_Write(CSzFile *p,void *data,size_t *size)

{
  size_t sVar1;
  int iVar2;
  size_t originalSize;
  size_t __n;
  
  __n = *size;
  if (__n != 0) {
    sVar1 = fwrite(data,1,__n,(FILE *)p->file);
    *size = sVar1;
    if (__n != sVar1) {
      iVar2 = ferror((FILE *)p->file);
      return iVar2;
    }
  }
  return 0;
}


