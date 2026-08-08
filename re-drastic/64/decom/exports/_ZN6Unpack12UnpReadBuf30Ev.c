/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack12UnpReadBuf30Ev
 * Address  : 001d0020
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::UnpReadBuf30() */

bool Unpack::UnpReadBuf30(void)

{
  int iVar1;
  ComprDataIO **in_x0;
  int iVar2;
  ComprDataIO *__dest;
  int iVar3;
  size_t __n;
  
  iVar2 = *(int *)(in_x0 + 1);
  iVar1 = *(int *)(in_x0 + 0x1a);
  iVar3 = iVar1 - iVar2;
  if (-1 < iVar3) {
    __dest = in_x0[3];
    if (iVar2 < 0x4001) {
      __n = (size_t)iVar1;
      iVar3 = iVar1;
    }
    else {
      __n = (size_t)iVar3;
      if (iVar3 != 0) {
        memmove(__dest,__dest + iVar2,__n);
        __dest = in_x0[3];
      }
      *(undefined4 *)(in_x0 + 1) = 0;
      *(int *)(in_x0 + 0x1a) = iVar3;
    }
    iVar1 = ComprDataIO::UnpRead(*in_x0,(uchar *)(__dest + __n),(long)(0x8000 - iVar3));
    iVar2 = *(int *)(in_x0 + 0x1a);
    if (0 < iVar1) {
      iVar2 = iVar1 + iVar2;
      *(int *)(in_x0 + 0x1a) = iVar2;
    }
    *(int *)((long)in_x0 + 0xd4) = iVar2 + -0x1e;
    return iVar1 != -1;
  }
  return false;
}


