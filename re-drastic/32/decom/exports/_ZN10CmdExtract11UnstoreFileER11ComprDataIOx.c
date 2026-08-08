/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract11UnstoreFileER11ComprDataIOx
 * Address  : 080e9c04
 * Program  : drastic
 */


void CmdExtract::UnstoreFile(ComprDataIO *DataIO,int64 DestUnpSize)

{
  byte *Addr;
  uchar *NewBuffer;
  uint Count;
  uint Code;
  uint in_r2;
  int in_r3;
  bool bVar1;
  
  Addr = (byte *)realloc((void *)0x0,0x40000);
  if (Addr == (byte *)0x0) {
    ErrorHandler::MemoryError(&ErrHandler);
  }
  while (Count = ComprDataIO::UnpRead(DataIO,Addr,0x40000), Count - 1 < 0xfffffffe) {
    while( true ) {
      if (0 < (int)(in_r3 + (uint)(Count < in_r2)) ==
          (SBORROW4(-in_r3,(uint)(Count < in_r2)) != false)) {
        Count = in_r2;
      }
      ComprDataIO::UnpWrite(DataIO,Addr,Count);
      if (in_r3 < 0) break;
      bVar1 = in_r2 < Count;
      in_r2 = in_r2 - Count;
      in_r3 = in_r3 - (uint)bVar1;
      Count = ComprDataIO::UnpRead(DataIO,Addr,0x40000);
      if (0xfffffffd < Count - 1) goto LAB_080e9ca8;
    }
  }
LAB_080e9ca8:
  if (Addr != (byte *)0x0) {
    free(Addr);
    return;
  }
  return;
}


