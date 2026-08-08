/*
 * Ghidra decompilation
 *
 * Function : FileSeqInStream_Read
 * Address  : 080cbaac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable p:CFileSeqInStream *[r0:4] conflicts with parameter, skipped. */

SRes FileSeqInStream_Read(void *pp,void *buf,size_t *size)

{
  size_t sVar1;
  int iVar2;
  size_t __n;
  size_t originalSize;
  
  __n = *size;
  if (__n != 0) {
    sVar1 = fread(buf,1,__n,*(FILE **)((int)pp + 4));
    *size = sVar1;
    if ((__n != sVar1) && (iVar2 = ferror(*(FILE **)((int)pp + 4)), iVar2 != 0)) {
      return 8;
    }
  }
  return 0;
}


