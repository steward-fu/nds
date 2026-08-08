/*
 * Ghidra decompilation
 *
 * Function : FileOutStream_Write
 * Address  : 080cb9e8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

size_t FileOutStream_Write(void *pp,void *data,size_t size)

{
  CFileOutStream *p;
  size_t sVar1;
  size_t originalSize;
  
  if ((size != 0) && (sVar1 = fwrite(data,1,size,*(FILE **)((int)pp + 4)), sVar1 != size)) {
    ferror(*(FILE **)((int)pp + 4));
    size = sVar1;
  }
  return size;
}


