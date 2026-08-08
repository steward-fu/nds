/*
 * Ghidra decompilation
 *
 * Function : File_Read
 * Address  : 080cbc6c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

WRes File_Read(CSzFile *p,void *data,size_t *size)

{
  size_t sVar1;
  int iVar2;
  size_t originalSize;
  size_t __n;
  
  __n = *size;
  if (__n != 0) {
    sVar1 = fread(data,1,__n,(FILE *)p->file);
    *size = sVar1;
    if (__n != sVar1) {
      iVar2 = ferror((FILE *)p->file);
      return iVar2;
    }
  }
  return 0;
}


