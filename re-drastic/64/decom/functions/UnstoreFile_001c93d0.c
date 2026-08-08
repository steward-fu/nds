/*
 * Ghidra decompilation
 *
 * Function : UnstoreFile
 * Address  : 001c93d0
 * Program  : drastic64
 */


/* CmdExtract::UnstoreFile(ComprDataIO&, long long) */

void CmdExtract::UnstoreFile(ComprDataIO *param_1,longlong param_2)

{
  ulong uVar1;
  uint uVar2;
  uchar *__ptr;
  ulong uVar3;
  
  __ptr = (uchar *)malloc(0x40000);
  if (__ptr == (uchar *)0x0) {
    ErrorHandler::MemoryError();
  }
  while (uVar3 = param_2, uVar2 = ComprDataIO::UnpRead(param_1,__ptr,0x40000),
        uVar2 - 1 < 0xfffffffe) {
    uVar1 = uVar3 & 0xffffffff;
    if ((long)(ulong)uVar2 < (long)uVar3) {
      uVar1 = (ulong)uVar2;
    }
                    /* try { // try from 001c9418 to 001c9437 has its CatchHandler @ 001c947c */
    ComprDataIO::UnpWrite(param_1,__ptr,uVar1);
    param_2 = uVar3 - uVar1;
    if ((long)uVar3 < 0) {
      param_2 = uVar3;
    }
  }
  if (__ptr == (uchar *)0x0) {
    return;
  }
  free(__ptr);
  return;
}


